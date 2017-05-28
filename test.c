#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <math.h>
#include "strftime_millis.h"

int main() {
    char   buf[64];
    struct timeval  tv;
    gettimeofday(&tv, NULL);
    strftime_millis(buf,sizeof(buf),"%Y-%m-%d %H:%M:%S.%%03u",&tv);
    printf("%s\n",buf);

            //strftime(fmt, sizeof fmt, "%Y-%m-%d %H:%M:%S.%%03u", tm);
}

