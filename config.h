//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//IMPORTANT: If a command is optionally empty, it should output \n in that case.
//Otherwise the last nonzero value will be used instead. This is intended behaviour as it prevents flickering
static const Block blocks[] = {
	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"music", 		0, 			11},
	{"cat /tmp/mucc_time 2> /dev/null || echo ''", 100, 	3 },
	{"appointments",	10, 			8},
	{"dunststatus", 	10,		 	5 },
	{"getpomminutesft", 	100, 			3 },
	{"getpomminutes", 	100,			3 },
/*	{"weather", 		3600, 			5 },*/
	{"pacpackages", 	0, 			6 },
	{"memory", 		2, 			0 },
	{"cpu", 		2, 			0 },
	{"nettraf", 		5, 			0 },
	{"torrent", 		6, 			12 },
	{"getmail", 		20, 			13},
	{"news", 		600, 			13},
/*	{"getbright", 		4, 			2 },*/
	{"headset_connected", 	5, 			4 },
	{"volume", 		1, 			10},
	{"current_day", 	100, 			0 },
	{"clock",		4,			0 },
	{"vpnstatus", 		5,		 	9 },
	{"internet", 		10, 			0 },
	{"battery",		4, 			7 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
