//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "music", 3600, 11},
	{"", "getpomminutesft", 100, 3},
	{"", "getpomminutes", 100, 3},
/*	{"", {"weather", 3600, 5},*/
	{"", "cpu", 5, 0},
/*	{ "", "sync_status", 4, 0},*/
	{"", "getmail", 20, 13},
/*	{"", "btstatus", 2, 17},*/
/*	{"", "memory", 5, 0},*/
	{"", "news", 600, 13},
	{"", "getbright", 4, 2},
	{"", "volume", 1, 10},
/*	{ "",        "amixer get Master | grep -o \"\\(\\[off\\]\\|[0-9]*%\\)\"", 0, 10}*/
/*	{"", "sed \"s/$/%/\" /sys/class/power_supply/BAT?/capacity", 5, 12},*/
/*	{"",  "echo $( battery_dwm BAT0)", 5, 12},*/
	{"", "clock",	10,	12}, //divert RTMIN update to clock since dwmblocks seems to crash if it's unhandled
	{"", "internet", 10, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
