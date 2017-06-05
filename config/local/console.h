#define CONSOLE_FRAMEBUFFER  /* Graphical framebuffer console */

#undef CONSOLE_SYSLOG
#define CONSOLE_SYSLOG        ( CONSOLE_USAGE_ALL & ~CONSOLE_USAGE_TUI ) /* Syslog console */

#undef LOG_LEVEL
#define LOG_LEVEL LOG_ALL /* Full syslog logging */
