/*
 * defines for log
 * created by tome.huang
 */

#ifndef _LOG_H
#define _LOG_H

#include <stdio.h>
#include <stdlib.h>

#define LOG_ON 1

#ifdef DEBUG
#define LOG_ON 1
#endif

#define D_MSG(fmt, args...) \
	(LOG_ON ? printf(fmt, ##args) : (0))

#define D_MSG_IF(cond, fmt, args...) \
	(LOG_ON && cond ? D_MSG(fmt, ##args) : (0))

#define D_F_ENTRY \
	(LOG_ON ? D_MSG("[FUNCTION ENTRY] %s\n", __FUNCTION__) : (0))

#define D_F_LEAVE \
	(LOG_ON ? D_MSG("[FUNCTION LEAVE] %s\n", __FUNCTION__) : (0))


#endif // _LOG_H
