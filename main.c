#include "board.h"
#include "xtimer.h"
#include <stdint.h>

int main(void)
{
    while(1) {
        LED0_ON;
        xtimer_sleep(5);
        LED0_OFF;
        xtimer_sleep(1);
    }
    return 0;

}
