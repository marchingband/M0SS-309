#ifndef LED_H
#define LED_H

#define NUM_LED 38

struct Pixel {
    u8 red;
    u8 green;
    u8 blue;
};
  

void led_init(void);
void stopSplash(void);
void render_leds(void);
void set_led_bar(float *val, float min, float max);

#endif
