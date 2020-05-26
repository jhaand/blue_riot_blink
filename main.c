#include "board.h"
#include "xtimer.h"
#include <stdint.h>

int main(void)
{
    while(1) {
        LED0_ON;
        xtimer_usleep(500000);
        LED0_OFF;
        xtimer_usleep(500000);
    }
    return 0;

}
