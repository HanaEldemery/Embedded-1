#include <stdio.h>
#include "pico/stdlib.h"
#include "led.h"

int main()
{
    stdio_init_all();

    led_init();
    led_set_dir();

    while (true)
    {
        leds_all_off();
        sleep_ms(5000);

        led_on(RED_LED_PIN);
        sleep_ms(1000);
        led_off(RED_LED_PIN);

        led_on(GREEN_LED_PIN);
        sleep_ms(1000);
        led_off(GREEN_LED_PIN);

        led_on(BLUE_LED_PIN);
        sleep_ms(1000);
        led_off(BLUE_LED_PIN);

        leds_all_on();
        sleep_ms(2000);
        // leds_all_off();
    }
}
