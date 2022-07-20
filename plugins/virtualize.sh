#!/bin/sh

# Virtual directories plugin for CliFM
# Author: L. Abramovich
# License: GPL3

# Dependencies: sed

# Note: A new instance of CliFM will be spawned on a new terminal window
# using $term_cmd, which defaults to 'xterm -e'. Edit this variable to
# use your favorite terminal emulator instead

if [ -z "$1" ] || [ "$1" = "--help" ] || [ "$1" = "-h" ]; then
	name="${CLIFM_PLUGIN_NAME:-$(basename "$0")}"
	printf "Create a virtual directory for a set of files\n\
Usage: %s FILE... \n" "$name" >&2
	exit 0
fi

if [ -n "$CLIFM_VIRTUAL_DIR" ]; then
	printf "clifm: Nested virtual directories are not allowed\n" >&2
	exit 1
fi

if ! type sed > /dev/null 2>&1; then
	printf "clifm: sed: Command not found\n" >&2
	exit 127
fi

term_cmd="xterm -e"
clifm_bin="clifm"
clifm_opts=""

# 1. Replace escaped spaces by tabs
# 2. Replace non-escaped spaces by new line chars
# 3. Replace tabs (first step) by spaces
# 4. Remove remaining escape chars
files="$(echo "$*" | sed 's/\\ /\t/g' | sed 's/ /\n/g' | sed 's/\t/ /g' | sed 's/\\//g')"
cmd="$term_cmd 'echo \"$files\" | $clifm_bin $clifm_opts'"

eval "$cmd"

exit 0