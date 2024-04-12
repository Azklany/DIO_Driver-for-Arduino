/*
 * DIO.c
 *
 *  Created on: Apr 8, 2024
 *      Author: askla
 */

#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPES.h"

#include "register.h"
#include "DIO.h"

void pinMode(u8 port_pin, u8 state) {
    u8 port = port_pin >> 3;  // Extract port from port_pin
    u8 pin = port_pin & 0x07; // Extract pin from port_pin

    switch (port) {
        case DIO_PORTA:
            if (state==DIO_PIN_OUTPUT)
                SET_BIT(DDRA_Register, pin);
            else
                CLR_BIT(DDRA_Register, pin);
            break;
        case DIO_PORTB:
            if (state==DIO_PIN_OUTPUT)
                SET_BIT(DDRB_Register, pin);
            else
                CLR_BIT(DDRB_Register, pin);
            break;
        case DIO_PORTC:
            if (state==DIO_PIN_OUTPUT)
                SET_BIT(DDRC_Register, pin);
            else
                CLR_BIT(DDRC_Register, pin);
            break;
        case DIO_PORTD:
            if (state==DIO_PIN_OUTPUT)
                SET_BIT(DDRD_Register, pin);
            else
                CLR_BIT(DDRD_Register, pin);
            break;
        default:
            // Invalid port
            break;
    }
}

void digitalWrite(u8 port_pin, u8 state) {
    u8 port = port_pin >> 3;  // Extract port from port_pin
    u8 pin = port_pin & 0x07; // Extract pin from port_pin

    switch (port) {
        case DIO_PORTA:
            if (state==DIO_PIN_HIGH)
                SET_BIT(PORTA_Register, pin);
            else
                CLR_BIT(PORTA_Register, pin);
            break;
        case DIO_PORTB:
            if (state==DIO_PIN_HIGH)
                SET_BIT(PORTB_Register, pin);
            else
                CLR_BIT(PORTB_Register, pin);
            break;
        case DIO_PORTC:
            if (state==DIO_PIN_HIGH)
                SET_BIT(PORTC_Register, pin);
            else
                CLR_BIT(PORTC_Register, pin);
            break;
        case DIO_PORTD:
            if (state==DIO_PIN_HIGH)
                SET_BIT(PORTD_Register, pin);
            else
                CLR_BIT(PORTD_Register, pin);
            break;
        default:
            // Invalid port
            break;
    }
}

u8 digitalRead(u8 port_pin) {
    u8 port = port_pin >> 3;  // Extract port from port_pin
    u8 pin = port_pin & 0x07; // Extract pin from port_pin
    u8 state = 0;

    switch (port) {
        case DIO_PORTA:
            state = GET_BIT(PINA_Register, pin);
            break;
        case DIO_PORTB:
            state = GET_BIT(PINB_Register, pin);
            break;
        case DIO_PORTC:
            state = GET_BIT(PINC_Register, pin);
            break;
        case DIO_PORTD:
            state = GET_BIT(PIND_Register, pin);
            break;
        default:
            // Invalid port
            break;
    }

    return state;
}

void digitalToggle(u8 port_pin) {
    u8 port = port_pin >> 3;  // Extract port from port_pin
    u8 pin = port_pin & 0x07; // Extract pin from port_pin

    switch (port) {
        case DIO_PORTA:
            TOG_BIT(PORTA_Register, pin);
            break;
        case DIO_PORTB:
            TOG_BIT(PORTB_Register, pin);
            break;
        case DIO_PORTC:
            TOG_BIT(PORTC_Register, pin);
            break;
        case DIO_PORTD:
            TOG_BIT(PORTD_Register, pin);
            break;
        default:
            // Invalid port
            break;
    }
}
