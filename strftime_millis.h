#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <math.h>

#ifndef _STRFTIME_MILLIS_
#define _STRFTIME_MILLIS_
size_t strftime_millis(char* ptr, size_t maxsize,const char* format, const struct timeval* tv);
#endif
