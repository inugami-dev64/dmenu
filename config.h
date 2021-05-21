/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"W95FA:size=12"
};
static const char *prompt           = NULL;      /* -p  option; prompt to the left of input field */
static const char blue[]            = "#000080";
static const char green[]           = "#00cc00";
static const char gray[]            = "#c0c0c0";
static const char white[]           = "#ffffff";  
static const char black[]           = "#000000";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { black, gray },
	[SchemeSel] = { white, blue },
	[SchemeSelHighlight] = { green, blue },
	[SchemeNormHighlight] = { green, gray },
	[SchemeOut] = { black, blue },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 30;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
