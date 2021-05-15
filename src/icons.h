/* Icon definitions for CliFM */

#ifndef ICONS_H
#define ICONS_H

#include "icons-in-terminal.h"

struct icons_t
{
	char *name;
	char *icon;
	char *color;
};

/* Icons (from the 'icons-in-terminal' project)
 * Icon macros are defined in icons-in-terminal.h */
char
	/* File types */
	ICON_DIR[] = FA_FOLDER,
	ICON_LOCK[] = FA_UNLOCK_ALT,
	ICON_REG[] = FA_FILE_O,
	ICON_EXEC[] = FA_COG,
	ICON_LINK[] = FA_CHAIN,

	/* Extensions */
	ICON_BINARY[] = OCT_FILE_BINARY,
	ICON_MANPAGE[] = FILE_MANPAGE,
	ICON_MAKEFILE[] = FILE_CMAKE,
	ICON_MARKDOWN[] = DEV_MARKDOWN,
	ICON_DATABASE[] = MFIZZ_DATABASE_ALT2,
	ICON_CONF[] = FA_COGS,
	ICON_DIFF[] = FILE_DIFF,
	ICON_DEB[] = MFIZZ_DEBIAN,
	ICON_CODE[] = FA_FILE_CODE_O,
	ICON_VIM[] = DEV_VIM,
	ICON_NASM[] = FILE_NASM,
	ICON_JAVA[] = MFIZZ_JAVA,
	ICON_JAVASCRIPT[] = MFIZZ_JAVASCRIPT,
	ICON_SQLITE[] = FILE_SQLITE,
	ICON_ELF[] = FA_LINUX,
	ICON_HTML[] = FA_FILE_CODE_O,
	ICON_GO[] = MFIZZ_GO,
	ICON_PHP[] = MFIZZ_PHP,
	ICON_PERL[] = MFIZZ_PERL,
	ICON_SCALA[] = MFIZZ_SHELL,
	ICON_MYSQL[] = MFIZZ_MYSQL,
	ICON_FSHARP[] = DEV_FSHARP,
	ICON_LUA[] = FILE_LUA,
	ICON_PATCH[] = FILE_PATCH,
	ICON_IMG[] = FA_FILE_IMAGE_O,
 	ICON_VID[] = FA_FILE_MOVIE_O,
	ICON_AUDIO[] = FA_FILE_AUDIO_O,
	ICON_PDF[] = FA_FILE_PDF_O,
	ICON_ARCHIVE[] = FA_FILE_ARCHIVE_O,
	ICON_CD[] = LINEA_MUSIC_CD,
	ICON_SCRIPT[] = MFIZZ_SCRIPT,
	ICON_TXT[] = FA_FILE_TEXT_O,
	ICON_C[] = MFIZZ_C,
	ICON_CPP[] = MFIZZ_CPLUSPLUS,
	ICON_CSHARP[] = MFIZZ_CSHARP,
	ICON_PYTHON[] = MFIZZ_PYTHON,
	ICON_WINDOWS[] = DEV_WINDOWS,
	ICON_WORD[] = FILE_WORD,
	ICON_EXCEL[] = FILE_EXCEL,
	ICON_ACCESS[] = FILE_ACCESS,
	ICON_POWERPOINT[] = FILE_POWERPOINT,
	ICON_PHOTOSHOP[] = DEV_PHOTOSHOP,
	ICON_COPYRIGHT[] = FA_COPYRIGHT,
	ICON_CONFIGURE[] = FILE_CONFIG,
	ICON_HISTORY[] = FA_HISTORY,
	ICON_ARCH[] = MFIZZ_ARCHLINUX,

	/* Dir names */
	ICON_DESKTOP[] = FA_DESKTOP,
	ICON_DOCUMETS[] = FA_BRIEFCASE,
	ICON_DOWNLOADS[] = FA_DOWNLOAD,
	ICON_HOME[] = FA_HOME,
	ICON_TRASH[] = FA_TRASH,
	ICON_FAV[] = FA_STAR_O,
	ICON_MUSIC[] = FA_MUSIC,
	ICON_PICTURES[] = MD_CAMERA_ALT,
	ICON_VIDEOS[] = FA_FILM,
	ICON_PUBLIC[] = FA_INBOX,
	ICON_TEMPLATES[] = FA_PAPERCLIP,
	ICON_DOTGIT[] = FA_GIT,
	ICON_GAMES[] = FA_GAMEPAD,
	ICON_DROPBOX[] = FA_DROPBOX,
	ICON_STEAM[] = FA_STEAM;

/*	ICON_MAIL[] = FA_ENVELOPE,
	ICON_NET[] = FA_SITEMAP,
	ICON_MYPC[] = FA_DESKTOP,
	ICON_USB[] = FA_USB,
	ICON_BLUETOOTH[] = FA_BLUETOOTH,
	ICON_CLOUD[] = MD_WB_CLOUDY,
	ICON_PRINTER[] = MD_LOCAL_PRINTSHOP,
	ICON_ANDROID[] = MD_ANDROID,
	ICON_APPLE[] = DEV_APPLE,
	ICON_CHROME[] = DEV_CHROME,
	ICON_IE[] = DEV_IE",
	ICON_FIREFOX[] = DEV_FIREFOX,
	ICON_OPERA[] = DEV_OPERA; */

#define BLUE "\x1b[0;34m"
#define B_BLUE "\x1b[1;34m"
#define WHITE "\x1b[0;37m"
#define B_WHITE "\x1b[1;37m"
#define YELLOW "\x1b[0;33m"
#define B_YELLOW "\x1b[1;33m"
#define GREEN "\x1b[0;32m"
#define B_GREEN "\x1b[1;32m"
#define CYAN "\x1b[0;36m"
#define B_CYAN "\x1b[1;36m"
#define MAGENTA "\x1b[0;35m"
#define B_MAGENTA "\x1b[1;35m"
#define RED "\x1b[0;31m"
#define B_RED "\x1b[1;31m"
#define BLACK "\x1b[0;30m"
#define B_BLACK "\x1b[1;30m"

/* Default icons and colors for directories and files */
#define DEF_DIR_ICON ICON_DIR
#define DEF_DIR_ICON_COLOR YELLOW
#define DEF_FILE_ICON ICON_REG
#define DEF_FILE_ICON_COLOR WHITE

/* Per file extension icons */
struct icons_t icon_ext[] = {
	{ "1", ICON_MANPAGE, WHITE },
	{ "7z", ICON_ARCHIVE, YELLOW },

	{ "a", ICON_MANPAGE, WHITE },
	{ "apk", ICON_ARCHIVE, YELLOW },
	{ "asm", ICON_NASM, WHITE },
	{ "aup", ICON_AUDIO, YELLOW },
	{ "avi", ICON_VID, BLUE },

	{ "bat", ICON_SCRIPT, WHITE },
	{ "bin", ICON_EXEC, WHITE },
	{ "bmp", ICON_IMG, GREEN },
	{ "bz2", ICON_ARCHIVE, YELLOW },

	{ "c", ICON_C, BLUE },
	{ "c++", ICON_CPP, WHITE },
	{ "cab", ICON_ARCHIVE, YELLOW },
	{ "cbr", ICON_ARCHIVE, YELLOW },
	{ "cbz", ICON_ARCHIVE, YELLOW },
	{ "cc", ICON_CPP, WHITE },
	{ "class", ICON_JAVA, WHITE },
	{ "cmake", ICON_MAKEFILE, WHITE },
	{ "conf", ICON_CONF, WHITE },
	{ "cpio", ICON_ARCHIVE, YELLOW },
	{ "cpp", ICON_CPP, WHITE },
	{ "cue", ICON_AUDIO, YELLOW },
	{ "cvs", ICON_CONF, WHITE },
	{ "cxx", ICON_CPP, WHITE },

	{ "db", ICON_DATABASE, WHITE },
	{ "deb", ICON_DEB, RED },
	{ "diff", ICON_DIFF, WHITE },
	{ "dll", ICON_MANPAGE, WHITE },
	{ "doc", ICON_WORD, BLUE },
	{ "docx", ICON_WORD, BLUE },

	{ "ejs", ICON_CODE, WHITE },
	{ "elf", ICON_ELF, WHITE },
	{ "epub", ICON_PDF, B_RED },
	{ "exe", ICON_WINDOWS, BLUE },

	{ "f#", ICON_FSHARP, WHITE },
	{ "flac", ICON_AUDIO, YELLOW },
	{ "flv", ICON_VID, BLUE },
	{ "fs", ICON_FSHARP, WHITE },
	{ "fsi", ICON_FSHARP, WHITE },
	{ "fsscript", ICON_FSHARP, WHITE },
	{ "fsx", ICON_FSHARP,WHITE },

	{ "gem", ICON_ARCHIVE, YELLOW },
	{ "gif", ICON_IMG, GREEN },
	{ "gpg", ICON_LOCK, YELLOW },
	{ "go", ICON_GO, WHITE },
	{ "gz", ICON_ARCHIVE, YELLOW },
	{ "gzip", ICON_ARCHIVE, YELLOW },

	{ "h", ICON_C, BLUE },
	{ "hh", ICON_CPP, WHITE },
	{ "htaccess", ICON_CONF, WHITE },
	{ "htpasswd", ICON_CONF, WHITE },
	{ "htm", ICON_HTML, WHITE },
	{ "html", ICON_HTML, WHITE },
	{ "hxx", ICON_CPP, WHITE },

	{ "ico", ICON_IMG, GREEN },
	{ "img", ICON_IMG, GREEN },
	{ "ini", ICON_CONF, WHITE },
	{ "iso", ICON_CD, B_WHITE },

	{ "jar", ICON_JAVA, WHITE },
	{ "java", ICON_JAVA, WHITE },
	{ "jpeg", ICON_IMG, GREEN },
	{ "jpg", ICON_IMG, GREEN },
	{ "js", ICON_JAVASCRIPT, WHITE },
	{ "json", ICON_JAVASCRIPT, WHITE },

	{ "lha", ICON_ARCHIVE, YELLOW },
	{ "log", ICON_TXT, WHITE },
	{ "lua", ICON_LUA, WHITE },
	{ "lz4", ICON_ARCHIVE, YELLOW },
	{ "lzh", ICON_ARCHIVE, YELLOW },
	{ "lzma", ICON_ARCHIVE, YELLOW },

	{ "m4a", ICON_AUDIO, YELLOW },
	{ "m4v", ICON_VID, BLUE },
	{ "markdown", ICON_MARKDOWN, WHITE },
	{ "md", ICON_MARKDOWN, WHITE },
	{ "mk", ICON_MAKEFILE, WHITE },
	{ "mkv", ICON_VID, BLUE },
	{ "mov", ICON_VID, BLUE },
	{ "mp3", ICON_AUDIO, YELLOW },
	{ "mp4", ICON_VID, BLUE },
	{ "mpeg", ICON_VID, BLUE },
	{ "mpg", ICON_VID, BLUE },
	{ "msi", ICON_WINDOWS, BLUE },

	{ "o", ICON_MANPAGE, WHITE },
	{ "ogg", ICON_AUDIO, YELLOW },
	{ "opdownload", ICON_DOWNLOADS, WHITE },
	{ "out", ICON_ELF, WHITE },

	{ "part", ICON_DOWNLOADS, WHITE },
	{ "patch", ICON_PATCH, WHITE },
	{ "pdf", ICON_PDF, RED },
	{ "php", ICON_PHP, WHITE },
	{ "png", ICON_IMG, GREEN },
	{ "ppt", ICON_POWERPOINT, WHITE },
	{ "pptx", ICON_POWERPOINT, WHITE },
	{ "psv", ICON_PHOTOSHOP, WHITE },
	{ "psd", ICON_PHOTOSHOP, WHITE },
	{ "py", ICON_PYTHON, GREEN },
	{ "pyc", ICON_PYTHON, GREEN },
	{ "pyd", ICON_PYTHON, GREEN },
	{ "pyo", ICON_PYTHON, GREEN },

	{ "rar", ICON_ARCHIVE, YELLOW },
	{ "rc", ICON_CONF, WHITE },
	{ "rpm", ICON_ARCHIVE, YELLOW },
	{ "rtf", ICON_PDF, RED },

	{ "so" , ICON_MANPAGE, WHITE },
	{ "scala", ICON_SCALA, WHITE },
	{ "sh", ICON_SCRIPT, WHITE },
	{ "slim", ICON_CODE, WHITE },
	{ "sql", ICON_MYSQL, WHITE },
	{ "sqlite", ICON_SQLITE, WHITE },
	{ "svg", ICON_IMG, GREEN },

	{ "tar", ICON_ARCHIVE, YELLOW },
	{ "tbz2", ICON_ARCHIVE, YELLOW },
	{ "tgz", ICON_ARCHIVE, YELLOW },
	{ "txt", ICON_TXT, WHITE },
	{ "txz", ICON_ARCHIVE, YELLOW },

	{ "vid", ICON_VID, BLUE },
	{ "vim", ICON_VIM, WHITE },
	{ "vimrc" , ICON_VIM, WHITE },

	{ "wav", ICON_AUDIO, YELLOW },
	{ "webm", ICON_VID, BLUE },
	{ "wma", ICON_AUDIO, YELLOW },
	{ "wmv", ICON_VID, BLUE },

	{ "xbps", ICON_ARCHIVE, YELLOW },
	{ "xthml", ICON_HTML, WHITE },
	{ "xls", ICON_EXCEL, GREEN },
	{ "xlsx", ICON_EXCEL, GREEN },
	{ "xml", ICON_CODE, WHITE },
	{ "xz", ICON_ARCHIVE, RED },

	{ "yaml", ICON_CONF, WHITE },
	{ "yml", ICON_CONF, WHITE },

	{ "zip", ICON_ARCHIVE, YELLOW },
	{ "zst", ICON_ARCHIVE, YELLOW },
};

/* Icons for some specific dir names */
struct icons_t icon_dirnames[] = {
	{ ".git", ICON_DOTGIT, DEF_DIR_ICON_COLOR },
	{ "Desktop", ICON_DESKTOP, DEF_DIR_ICON_COLOR },
	{ "Documents", ICON_DOCUMETS, DEF_DIR_ICON_COLOR },
	{ "Downloads", ICON_DOWNLOADS, DEF_DIR_ICON_COLOR },
	{ "Music", ICON_MUSIC, DEF_DIR_ICON_COLOR },
	{ "Public", ICON_PUBLIC, DEF_DIR_ICON_COLOR },
	{ "Pictures", ICON_PICTURES, DEF_DIR_ICON_COLOR },
	{ "Templates", ICON_TEMPLATES, DEF_DIR_ICON_COLOR },
	{ "Videos", ICON_VIDEOS, DEF_DIR_ICON_COLOR },
};

/* Icons for some specific file names */
struct icons_t icon_filenames[] = {
	{ "CHANGELOG", ICON_HISTORY, DEF_FILE_ICON_COLOR },
	{ "configure", ICON_CONFIGURE, DEF_FILE_ICON_COLOR },
	{ "License", ICON_COPYRIGHT, DEF_FILE_ICON_COLOR },
	{ "Makefile", ICON_MAKEFILE, DEF_FILE_ICON_COLOR },
	{ "PKGBUILD", ICON_ARCH, CYAN },
};

#endif /* ICONS_H */
