/*
 * @(#) avr_options.h
 *
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Source Files:
 *   atmega16_16a.avrspec
 *   atmega16u4_32u4.avrspec
 *   atmega324a.avrspec
 *   atmega32_32a.avrspec
 *   atmega48_88_168.avrspec
 *   atmega48a_48pa_88a_88pa_168a_168pa_328_328p.avrspec
 *   atmega640_1280_1281_2560_2561.avrspec
 *   atmega8_8a.avrspec
 *   attiny13_13a.avrspec
 *   attiny1634.avrspec
 *   attiny2313.avrspec
 *   attiny2313a_4313.avrspec
 *   attiny24_44_84.avrspec
 *   attiny24a_44a_84a.avrspec
 *   attiny25_45_85.avrspec
 *   attiny26.avrspec
 *   attiny261_461_861.avrspec
 *   attiny261a_461a_861a.avrspec
 *   attiny43u.avrspec
 *   attiny48_88.avrspec
 *   attiny87_167.avrspec
 */

#ifndef	__avr_options_h
#define	__avr_options_h

#if	defined(__AVR_ATmega16__) || defined(__AVR_ATmega16A__)
#define	GPIO_PIN_COUNT 32
#define	GPIO_ANALOG_PIN_COUNT 8
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_ADMUX_ADLAR
#define	OPT_SFIOR_PUD
#endif

#if	defined(__AVR_ATmega16U4__) || defined(__AVR_ATmega32U4__)
#define	GPIO_PIN_COUNT 33
#define	GPIO_ANALOG_PIN_COUNT 13
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_10BIT
#define	OPT_TIMER_16BIT
#define	OPT_ADCSRB_MUX5
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATmega324A__)
#define	GPIO_PIN_COUNT 32
#define	GPIO_ANALOG_PIN_COUNT 8
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATmega32__) || defined(__AVR_ATmega32A__)
#define	GPIO_PIN_COUNT 32
#define	GPIO_ANALOG_PIN_COUNT 8
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_ADMUX_ADLAR
#define	OPT_SFIOR_PUD
#endif

#if	defined(__AVR_ATmega48__) || defined(__AVR_ATmega88__) || defined(__AVR_ATmega168__)
#define	GPIO_PIN_COUNT 26
#define	GPIO_ANALOG_PIN_COUNT 9
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATmega48A__) || defined(__AVR_ATmega48PA__) || defined(__AVR_ATmega88A__) || defined(__AVR_ATmega88PA__) || defined(__AVR_ATmega168A__) || defined(__AVR_ATmega168PA__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
#define	GPIO_PIN_COUNT 26
#define	GPIO_ANALOG_PIN_COUNT 9
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATmega640__) || defined(__AVR_ATmega1280__) || defined(__AVR_ATmega1281__) || defined(__AVR_ATmega2560__) || defined(__AVR_ATmega2561__)
#define	GPIO_PIN_COUNT 86
#define	GPIO_ANALOG_PIN_COUNT 16
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_HIGH_IOM
#define	OPT_ADCSRB_MUX5
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATmega8__) || defined(__AVR_ATmega8A__)
#define	GPIO_PIN_COUNT 25
#define	GPIO_ANALOG_PIN_COUNT 8
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_ADMUX_ADLAR
#define	OPT_SFIOR_PUD
#endif

#if	defined(__AVR_ATtiny13__) || defined(__AVR_ATtiny13A__)
#define	GPIO_PIN_COUNT 6
#define	GPIO_ANALOG_PIN_COUNT 4
#define	OPT_SINGLE_DIGITAL_PORT
#define	OPT_SINGLE_DDR DDRB
#define	OPT_SINGLE_PIN PINB
#define	OPT_SINGLE_PORT PORTB
#define	OPT_TIMER_8BIT
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATtiny1634__)
#define	GPIO_PIN_COUNT 19
#define	GPIO_ANALOG_PIN_COUNT 13
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_ADCSRB_ADLAR
#endif

#if	defined(__AVR_ATtiny2313__)
#define	GPIO_PIN_COUNT 18
#define	GPIO_ANALOG_PIN_COUNT 0
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATtiny2313A__) || defined(__AVR_ATtiny4313__)
#define	GPIO_PIN_COUNT 18
#define	GPIO_ANALOG_PIN_COUNT 0
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATtiny24__) || defined(__AVR_ATtiny44__) || defined(__AVR_ATtiny84__)
#define	GPIO_PIN_COUNT 13
#define	GPIO_ANALOG_PIN_COUNT 9
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_ADMUX_MUX5
#define	OPT_ADCSRB_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATtiny24A__) || defined(__AVR_ATtiny44A__) || defined(__AVR_ATtiny84A__)
#define	GPIO_PIN_COUNT 13
#define	GPIO_ANALOG_PIN_COUNT 9
#define	OPT_TIMER_8BIT
#define	OPT_TIMER_16BIT
#define	OPT_ADMUX_MUX5
#define	OPT_ADCSRB_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATtiny25__) || defined(__AVR_ATtiny45__) || defined(__AVR_ATtiny85__)
#define	GPIO_PIN_COUNT 7
#define	GPIO_ANALOG_PIN_COUNT 5
#define	OPT_SINGLE_DIGITAL_PORT
#define	OPT_SINGLE_DDR DDRB
#define	OPT_SINGLE_PIN PINB
#define	OPT_SINGLE_PORT PORTB
#define	OPT_TIMER_8BIT
#define	OPT_ADMUX_REFS2
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATtiny26__)
#define	GPIO_PIN_COUNT 16
#define	GPIO_ANALOG_PIN_COUNT 11
#define	OPT_TIMER_8BIT
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATtiny261__) || defined(__AVR_ATtiny461__) || defined(__AVR_ATtiny861__)
#define	GPIO_PIN_COUNT 17
#define	GPIO_ANALOG_PIN_COUNT 12
#define	OPT_TIMER_10BIT
#define	OPT_ADCSRB_REFS2
#define	OPT_ADCSRB_MUX5
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATtiny261A__) || defined(__AVR_ATtiny461A__) || defined(__AVR_ATtiny861A__)
#define	GPIO_PIN_COUNT 17
#define	GPIO_ANALOG_PIN_COUNT 12
#define	OPT_TIMER_10BIT
#define	OPT_ADCSRB_REFS2
#define	OPT_ADCSRB_MUX5
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATtiny43U__)
#define	GPIO_PIN_COUNT 17
#define	GPIO_ANALOG_PIN_COUNT 5
#define	OPT_TIMER_8BIT
#define	OPT_MCUCR_PUD
#define	OPT_ADCSRB_ADLAR
#endif

#if	defined(__AVR_ATtiny48__) || defined(__AVR_ATtiny88__)
#define	GPIO_PIN_COUNT 27
#define	GPIO_ANALOG_PIN_COUNT 9
#define	OPT_TIMER_16BIT
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#if	defined(__AVR_ATtiny87__) || defined(__AVR_ATtiny167__)
#define	GPIO_PIN_COUNT 17
#define	GPIO_ANALOG_PIN_COUNT 12
#define	OPT_TIMER_8BIT
#define	OPT_ADMUX_ADLAR
#define	OPT_MCUCR_PUD
#endif

#endif	/* !__avr_options_h */
