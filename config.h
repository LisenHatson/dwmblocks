//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"sb-tasks",	10,	26},

	{"",	"sb-pacpackages",	0,	8},
	{"",	"sb-news",		0,	6},
	{"",	"sb-torrent",	20,	7},
	/* {"",	"sb-memory",	10,	14}, */
	/* {"",	"sb-cpu",		10,	18}, */
	/* {"",	"sb-moonphase",	18000,	17}, */
	/* {"",	"sb-doppler",	0,	13}, */
	/* {"",	"sb-forecast",	18000,	5},  */
	/* {"",	"sb-mailbox",	180,	12}, */
	/* {"",	"sb-nettraf",	1,	16}, */
	{"",	"sb-volume",	0,	10},
	{"",	"sb-music",	0,	11},
	{"",	"sb-battery",	5,	3},
	{"",	"sb-clock",	1,	1},
	{"",	"sb-internet",	5,	4},
	/* {"",	"sb-iplocate", 0,	27}, */
	/* {"",	"sb-help-icon",	0,	15}, */
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " |";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
