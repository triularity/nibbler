#include <nibbler.h>
#include <nibbler/gpio.h>

#define LED_PINNO   13

gpio_pin_t  pin;

void setup()
{
  gpio_init();

  pin = gpio_get_digital(LED_PINNO);

  if (pin == NULL)
  {
    Serial.println("gpio_get_digital(LED_PINNO) failed");

    while (1)
      /* loop */;
  }

  gpio_pin_mode(pin, GPIO_MODE_OUTPUT);
}


void loop()
{ gpio_pin_write(pin, GPIO_HIGH);
  delay(1000);
  gpio_pin_write(pin, GPIO_LOW);
  delay(1000);
}
