
#include "sensors.h"

bc_led_t led;

void application_init(void) {
    bc_led_init(&led, BC_GPIO_LED, false, false);
    bc_led_set_mode(&led, BC_LED_MODE_OFF);
    bc_radio_init(BC_RADIO_MODE_NODE_SLEEPING);
    sensors_init_all();
}

