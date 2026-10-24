#ifndef LED_H
#define LED_H

#define NUM_LED 42

// Set to 0 to restore normal use of bottom-row LED #10.
#ifndef TEST_TEMP
#define TEST_TEMP 1
#endif

struct Pixel {
    u8 red;
    u8 green;
    u8 blue;
};
  

void led_init(void);
void stopSplash(void);
void led_set_reset_feedback(bool active, bool factory);
void render_leds(void);
#if TEST_TEMP
void service_temperature_led(void);
#endif

#endif
