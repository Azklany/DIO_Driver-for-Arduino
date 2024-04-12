/*
 * DIO.h
 *
 *  Created on: Apr 8, 2024
 *      Author: askla
 */

#ifndef DIO_H_
#define DIO_H_

// Ports
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

// Pin Direction
#define DIO_PIN_OUTPUT 1
#define DIO_PIN_INPUT  0

// Port Direction
#define DIO_PORT_OUTPUT 0xFF
#define DIO_PORT_INPUT  0x00

// Pin Value
#define DIO_PIN_HIGH 1
#define DIO_PIN_LOW  0

// Port Value
#define DIO_PORT_HIGH 0xFF
#define DIO_PORT_LOW  0x00

void pinMode(u8 port_pin, u8 state);
void digitalWrite(u8 port_pin, u8 state);
u8 digitalRead(u8 port_pin);
void digitalToggle(u8 port_pin);

#endif /* DIO_H_ */
