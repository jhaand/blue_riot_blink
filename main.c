#include "board.h"
#include "xtimer.h"
#include <stdint.h>

int main(void)
{
    while(1) {
        printf("Onboard LED goes  ON.\n");
        LED0_ON;
        xtimer_sleep(5);
        printf("Onboard LED goes OFF.\n");
        LED0_OFF;
        xtimer_sleep(1);
    }
    return 0;

}
