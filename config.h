//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//IMPORTANT: If a command is optionally empty, it should output \n in that case.
//Otherwise the last nonzero value will be used instead. This is intended behaviour as it prevents flickering
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"music", 10, 11},
	{"cat /tmp/mucc_time 2> /dev/null", 100, 3},
	{"dunststatus", 10, 5},
	{"getpomminutesft", 100, 3},
	{"getpomminutes", 100, 3},
/*	{"weather", 3600, 5},*/
	{"pacpackages", 100, 0},
	{"cpu", 2, 0},
	{"nettraf", 5, 0},
	{"torrent", 6, 0},
	{"getmail", 20, 13},
	{"news", 600, 13},
	{"getbright", 4, 2},
	{"headset_connected", 5, 4},
	{"volume", 1, 10},
	{"current_day", 100, 0},
	{"clock",	4,	0},
	{"internet", 10, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
