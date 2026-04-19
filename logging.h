#ifndef M0SS_309_LOGGING_H
#define M0SS_309_LOGGING_H

#include <circle/logger.h>

#ifdef APP_ENABLE_LOGGING
#define APP_LOG(module, level, ...) CLogger::Get ()->Write ((module), (level), __VA_ARGS__)
#else
#define APP_LOG(module, level, ...) \
	do { \
		(void) sizeof(module); \
		(void) sizeof(level); \
	} while (0)
#endif

#endif
