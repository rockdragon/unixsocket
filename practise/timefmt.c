#include <stdio.h>
#include <time.h>

int
main(int argc, char **argv)
{
        time_t          ticks;

        ticks = time(NULL);
        printf("%.24s\r\n", ctime(&ticks));

        return 0;
}
