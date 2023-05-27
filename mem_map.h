#ifndef MEM_MAP_H_
#define MEM_MAP_H_

//DDR register
#define DDRA *((volatile unsigned char *)0x3A)
#define DDRB *((volatile unsigned char *)0x37)
#define DDRC *((volatile unsigned char *)0x34)
#define DDRD *((volatile unsigned char *)0x31)

//PORT register
#define PORTA *((volatile unsigned char *)0x3B)
#define PORTB *((volatile unsigned char *)0x38)
#define PORTC *((volatile unsigned char *)0x35)
#define PORTD *((volatile unsigned char *)0x32)

//PIN register
#define PINA *((volatile unsigned char *)0xA7)
#define PINB *((volatile unsigned char *)0x36)
#define PINC *((volatile unsigned char *)0x33)
#define PIND *((volatile unsigned char *)0x30)
//=======================================================
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

#endif
