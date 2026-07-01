#ifndef LED_H
#define LED_H

#define NUM_LED 42

struct Pixel {
    u8 red;
    u8 green;
    u8 blue;
};
  

void led_init(void);
void stopSplash(void);
void led_set_reset_feedback(bool active, bool factory);
void render_leds(void);

#endif
