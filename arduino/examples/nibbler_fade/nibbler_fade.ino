#include <nibbler.h>
#include <nibbler/gpio.h>

  // XXX - Until GPIO_VALUE_MAX is defined in gpio.h
#ifndef GPIO_VALUE_MAX
#define GPIO_VALUE_MAX  0xFFFF
#endif

#define LEVEL_PINNO   6
#define BLINK_PINNO   13

#define FADE_AMOUNT   (GPIO_VALUE_MAX / 50)

gpio_pin_t  blink_pin;
gpio_pin_t  level_pin;

gpio_value_t level = 0;
int fade = FADE_AMOUNT;

void setup()
{
  Serial.begin(9600);

  gpio_init();
  
  blink_pin = gpio_get_digital(BLINK_PINNO);

  if (blink_pin == NULL)
  {
    Serial.println("gpio_get_digital(BLINK_PINNO) failed");
    while (1)
      /* loop */;
  }

  level_pin = gpio_get_digital(LEVEL_PINNO);

  if (level_pin == NULL)
  {
    Serial.println("gpio_get_digital(LEVEL_PINNO) failed");
    while (1)
      /* loop */;
  }

  gpio_pin_mode(blink_pin, GPIO_MODE_OUTPUT);
  gpio_pin_mode(level_pin, GPIO_MODE_OUTPUT);
}


void loop()
{
  gpio_pin_writev(level_pin, level);
  delay(100);

  if (level < FADE_AMOUNT)
  {
    Serial.println("Fade switch up");
    fade = FADE_AMOUNT;

    gpio_pin_write(blink_pin, GPIO_HIGH);
    delay(50);
    gpio_pin_write(blink_pin, GPIO_LOW);
    delay(50);
  }
  else if (level > (GPIO_VALUE_MAX - FADE_AMOUNT))
  {
    Serial.println("Fade switch down");
    fade = -FADE_AMOUNT;

    gpio_pin_write(blink_pin, GPIO_HIGH);
    delay(50);
    gpio_pin_write(blink_pin, GPIO_LOW);
    delay(50);
  }

  level += fade;
}
