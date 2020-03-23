/**
 * @file main.c
 *
 * @brief Main function
 */

#include "mcu.h"
#include "buzzer.h"
#include "adc.h"
#include "utils.h"

/*****************************************
 * Private Constant Definitions
 *****************************************/

#define MIN_FREQUENCY_HZ 1000
#define MAX_FREQUENCY_HZ 5000

/*****************************************
 * Main Function
 *****************************************/

int main(void) {
    mcu_init();
    buzzer_init();

    MX_ADC1_Init();
    HAL_ADC_Start(&hadc1);

    uint16_t reading;

    for (;;) {
        reading = HAL_ADC_GetValue(&hadc1);
        buzzer_set_frequency(map(reading, 0, 0x0FFF, MIN_FREQUENCY_HZ, MAX_FREQUENCY_HZ));
    }
}
