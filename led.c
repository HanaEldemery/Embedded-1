#include "led.h"

#define RED_LED_PIN 16
#define GREEN_LED_PIN 17
#define BLUE_LED_PIN 18

void led_init(void)
{
    gpio_init(RED_LED_PIN);
    gpio_init(GREEN_LED_PIN);
    gpio_init(BLUE_LED_PIN);
}
void led_set_dir(void)
{
    gpio_set_dir(RED_LED_PIN, GPIO_OUT);
    gpio_set_dir(GREEN_LED_PIN, GPIO_OUT);
    gpio_set_dir(BLUE_LED_PIN, GPIO_OUT);

    // starting en kolo off
    // leds_all_off();
}
// turn on bas el blue -ve logic
void led_on(uint led_pin)
{
    if (led_pin == BLUE_LED_PIN)
    {
        gpio_put(led_pin, false);
    }
    else
    {
        gpio_put(led_pin, true);
    }
}
// turn off bas el blue -ve logic
void led_off(uint led_pin)
{
    if (led_pin == BLUE_LED_PIN)
    {
        gpio_put(led_pin, true);
    }
    else
    {
        gpio_put(led_pin, false);
    }
}

// all off
void leds_all_off(void)
{
    led_off(RED_LED_PIN);
    led_off(GREEN_LED_PIN);
    led_off(BLUE_LED_PIN);
}

// all on
void leds_all_on(void)
{
    led_on(RED_LED_PIN);
    led_on(GREEN_LED_PIN);
    led_on(BLUE_LED_PIN);
}
