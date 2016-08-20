/*
 * @(#) avr_options.h
 *
 * THIS FILE IS AUTO-GENERATED. ANY EDITS MAY BE LOST.
 *
 * Source Files:
 *   atmega16u4_32u4.avrspec
 *   atmega324a.avrspec
 *   atmega48_88_168.avrspec
 *   atmega48a_48pa_88a_88pa_168a_168pa_328_328p.avrspec
 *   atmega640_1280_1281_2560_2561.avrspec
 *   atmega8.avrspec
 *   attiny13_13a.avrspec
 *   attiny2313.avrspec
 *   attiny2313a_4313.avrspec
 *   attiny24_44_84.avrspec
 *   attiny24a_44a_84a.avrspec
 *   attiny25_45_85.avrspec
 *   attiny261_461_861.avrspec
 *   attiny261a_461a_861a.avrspec
 *   attiny4_5_9_10.avrspec
 *   attiny828.avrspec
 */

#ifndef	__avr_options_h
#define	__avr_options_h

#if	defined(__AVR_ATmega16U4__) || defined(__AVR_ATmega32U4__)
#define	GPIO_PIN_COUNT 32
#define	GPIO_ANALOG_PIN_COUNT 12
#define	OPT_REFS 1
#define	OPT_ADCSRB_MUX5
#define	OPT_MUX 5
#define	OPT_ADMUX_ADLAR
#endif

#if	defined(__AVR_ATmega324A__)
#define	GPIO_PIN_COUNT 32
#define	GPIO_ANALOG_PIN_COUNT 8
#define	OPT_REFS 1
#define	OPT_MUX 4
#define	OPT_ADMUX_ADLAR
#endif

#if	defined(__AVR_ATmega48__) || defined(__AVR_ATmega88__) || defined(__AVR_ATmega168__)
#define	GPIO_PIN_COUNT 25
#define	GPIO_ANALOG_PIN_COUNT 8
#define	OPT_REFS 1
#define	OPT_MUX 3
#define	OPT_ADMUX_ADLAR
#endif

#if	defined(__AVR_ATmega48A__) || defined(__AVR_ATmega48PA__) || defined(__AVR_ATmega88A__) || defined(__AVR_ATmega88PA__) || defined(__AVR_ATmega168A__) || defined(__AVR_ATmega168PA__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
#define	GPIO_PIN_COUNT 25
#define	GPIO_ANALOG_PIN_COUNT 8
#define	OPT_REFS 1
#define	OPT_MUX 3
#define	OPT_ADMUX_ADLAR
#endif

#if	defined(__AVR_ATmega640__) || defined(__AVR_ATmega1280__) || defined(__AVR_ATmega1281__) || defined(__AVR_ATmega2560__) || defined(__AVR_ATmega2561__)
#define	GPIO_PIN_COUNT 86
#define	GPIO_ANALOG_PIN_COUNT 16
#define	OPT_HIGH_IOM
#define	OPT_REFS 1
#define	OPT_ADCSRB_MUX5
#define	OPT_MUX 5
#define	OPT_ADMUX_ADLAR
#endif

#if	defined(__AVR_ATmega8__)
#define	GPIO_PIN_COUNT 25
#define	GPIO_ANALOG_PIN_COUNT 8
#define	OPT_REFS 1
#define	OPT_MUX 3
#define	OPT_ADMUX_ADLAR
#endif

#if	defined(__AVR_ATtiny13__) || defined(__AVR_ATtiny13A__)
#define	GPIO_PIN_COUNT 6
#define	GPIO_ANALOG_PIN_COUNT 4
#define	OPT_REFS 0
#define	OPT_MUX 1
#define	OPT_ADMUX_ADLAR
#endif

#if	defined(__AVR_ATtiny2313__)
#define	GPIO_PIN_COUNT 18
#define	GPIO_ANALOG_PIN_COUNT 0
#endif

#if	defined(__AVR_ATtiny2313A__) || defined(__AVR_ATtiny4313__)
#define	GPIO_PIN_COUNT 18
#define	GPIO_ANALOG_PIN_COUNT 0
#endif

#if	defined(__AVR_ATtiny24__) || defined(__AVR_ATtiny44__) || defined(__AVR_ATtiny84__)
#define	GPIO_PIN_COUNT 12
#define	GPIO_ANALOG_PIN_COUNT 8
#define	OPT_REFS 1
#define	OPT_ADMUX_MUX5
#define	OPT_MUX 5
#define	OPT_ADCSRB_ADLAR
#endif

#if	defined(__AVR_ATtiny24A__) || defined(__AVR_ATtiny44A__) || defined(__AVR_ATtiny84A__)
#define	GPIO_PIN_COUNT 12
#define	GPIO_ANALOG_PIN_COUNT 8
#define	OPT_REFS 1
#define	OPT_ADMUX_MUX5
#define	OPT_MUX 5
#define	OPT_ADCSRB_ADLAR
#endif

#if	defined(__AVR_ATtiny25__) || defined(__AVR_ATtiny45__) || defined(__AVR_ATtiny85__)
#define	GPIO_PIN_COUNT 6
#define	GPIO_ANALOG_PIN_COUNT 4
#define	OPT_ADMUX_REFS2
#define	OPT_REFS 2
#define	OPT_MUX 3
#define	OPT_ADMUX_ADLAR
#define	OPT_OC1A_TCCR TCCR1
#define	OPT_OC1A_TCCR_EXTRA PWM1A
#define	OPT_OC1B_TCCR GTCCR
#define	OPT_OC1B_TCCR_EXTRA PWM1B
#endif

#if	defined(__AVR_ATtiny261__) || defined(__AVR_ATtiny461__) || defined(__AVR_ATtiny861__)
#define	GPIO_PIN_COUNT 16
#define	GPIO_ANALOG_PIN_COUNT 11
#define	OPT_ADCSRB_REFS2
#define	OPT_REFS 2
#define	OPT_ADCSRB_MUX5
#define	OPT_MUX 5
#define	OPT_ADMUX_ADLAR
#endif

#if	defined(__AVR_ATtiny261A__) || defined(__AVR_ATtiny461A__) || defined(__AVR_ATtiny861A__)
#define	GPIO_PIN_COUNT 16
#define	GPIO_ANALOG_PIN_COUNT 11
#define	OPT_ADCSRB_REFS2
#define	OPT_REFS 2
#define	OPT_ADCSRB_MUX5
#define	OPT_MUX 5
#define	OPT_ADMUX_ADLAR
#endif

#if	defined(__AVR_ATtiny4__) || defined(__AVR_ATtiny5__) || defined(__AVR_ATtiny9__) || defined(__AVR_ATtiny10__)
#define	GPIO_PIN_COUNT 4
#define	GPIO_ANALOG_PIN_COUNT 4
#define	OPT_MUX 1
#endif

#if	defined(__AVR_ATtiny828__)
#define	GPIO_PIN_COUNT 28
#define	GPIO_ANALOG_PIN_COUNT 28
#define	OPT_REFS 0
#define	OPT_ADMUXB_MUX5
#define	OPT_MUX 5
#define	OPT_ADCSRB_ADLAR
#endif

#endif	/* !__avr_options_h */
