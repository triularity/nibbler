#include <nibbler.h>
#include <nibbler/gpio.h>

#define LEVEL_PINNO   6
#define BLINK_PINNO   13

gpio_pin_t  blink_pin;
gpio_pin_t  level_pin;

float level = 1.0f;
float fade = -0.02f;

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
  gpio_pin_writef(level_pin, level);
  level += fade;
  delay(100);

  if (level <= 0.0f)
  {
    Serial.println("Fade switch up");
    fade = 0.02;

    gpio_pin_write(blink_pin, GPIO_HIGH);
    delay(50);
    gpio_pin_write(blink_pin, GPIO_LOW);
    delay(50);
  }
  else if (level >= 1.0f)
  {
    Serial.println("Fade switch down");
    fade = -0.02;

    gpio_pin_write(blink_pin, GPIO_HIGH);
    delay(50);
    gpio_pin_write(blink_pin, GPIO_LOW);
    delay(50);
  }
}
