#define CONSOLE_FRAMEBUFFER  /* Graphical framebuffer console */

/* code snippets from robinsmidrobs gist*/
/* https://gist.github.com/robinsmidsrod/2d1fe2a5d315bf63abe5df44222520e8 */
#undef CONSOLE_SYSLOG
#define CONSOLE_SYSLOG        ( CONSOLE_USAGE_ALL & ~CONSOLE_USAGE_TUI ) /* Syslog console */

#undef LOG_LEVEL
#define LOG_LEVEL LOG_ALL /* Full syslog logging */