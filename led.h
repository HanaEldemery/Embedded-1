#ifndef LED_H
#define LED_H

#include "pico/stdlib.h"

#define RED_LED_PIN 16
#define GREEN_LED_PIN 17
#define BLUE_LED_PIN 18

void led_init(void);
void led_set_dir(void);
void led_on(uint led_pin);
void led_off(uint led_pin);
void leds_all_off(void);
void leds_all_on(void);

#endif
