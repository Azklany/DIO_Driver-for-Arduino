/*
 * register.h
 *
 *  Created on: Apr 8, 2024
 *      Author: askla
 */

#ifndef REGISTER_H_
#define REGISTER_H_

// PortA Registers
#define PORTA_Register *((volatile u8*) 0x3B)
#define DDRA_Register  *((volatile u8*) 0x3A)
#define PINA_Register  *((volatile u8*) 0x39)

// PortB Registers
#define PORTB_Register *((volatile u8*) 0x38)
#define DDRB_Register  *((volatile u8*) 0x37)
#define PINB_Register  *((volatile u8*) 0x36)

// PortC Registers
#define PORTC_Register *((volatile u8*) 0x35)
#define DDRC_Register  *((volatile u8*) 0x34)
#define PINC_Register  *((volatile u8*) 0x33)

// PortD Registers
#define PORTD_Register *((volatile u8*) 0x32)
#define DDRD_Register  *((volatile u8*) 0x31)
#define PIND_Register  *((volatile u8*) 0x30)



#endif /* REGISTER_H_ */
