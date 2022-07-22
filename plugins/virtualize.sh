#!/bin/sh

# Virtual directories plugin for CliFM
# Author: L. Abramovich
# License: GPL3

# Dependencies: sed

# Note: A new instance of CliFM will be spawned on a new terminal window
# using $term_cmd, which defaults to 'xterm -e'. Edit this variable to
# use your favorite terminal emulator instead, for example:
# term_cmd="kitty sh -c"

term_cmd="xterm -e"
clifm_bin="clifm"
clifm_opts=""

if [ -z "$1" ] || [ "$1" = "--help" ] || [ "$1" = "-h" ]; then
	name="${CLIFM_PLUGIN_NAME:-$(basename "$0")}"
	printf "Create a virtual directory for a set of files\n\
Usage: %s FILE... \n" "$name" >&2
	exit 0
fi

if ! type sed > /dev/null 2>&1; then
	printf "clifm: sed: Command not found\n" >&2
	exit 127
fi

if [ -n "$CLIFM_VT_RUNNING" ]; then
	printf "clifm: Only one virtual directory can be created at a time\n" >&2
	exit 1
fi

export CLIFM_VT_RUNNING=1

if [ -n "$CLIFM_VIRTUAL_DIR" ]; then
	clifm_opts="$clifm_opts --virtual-dir=\"$CLIFM_VIRTUAL_DIR\""
fi

# This is what sed does:
# 1. Replace escaped spaces by tabs
# 2. Replace non-escaped spaces by new line chars
# 3. Replace tabs (first step) by spaces
# 4. Remove remaining escape chars
files="$(echo "$*" | sed 's/\\ /\t/g;s/ /\n/g;s/\t/ /g;s/\\//g')"
cmd="$term_cmd 'echo \"$files\" | $clifm_bin $clifm_opts'"

eval "$cmd"

exit 0
