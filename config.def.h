/* user and group to drop privileges to */
static const char *user  = "inkch";
static const char *group = "inkch";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#1d1f21",   /* during input */
	[FAILED] = "#CC6666",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 2;
