//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"","free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

/*	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},*/

	{"", "acpi | awk '/^Battery/ {print $3\" \"$4}' | sed s/,//g",        2,             0},
//	{"", "nmcli | grep connected\ to | awk '{ print $1 $4}'",        2,             0},
	{"", "nmcli | awk 'NR==1{print $1 $4}'",        2,             0},
	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
