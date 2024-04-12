# DIO_Driver-for-Arduino
Objective:
To evaluate your understanding of embedded systems concepts and your ability to develop drivers for AVR microcontrollers.

Task:
Develop a Digital Input/Output (DIO) driver for Arduino compatible with AVR microcontrollers. The driver should include functions for pinMode, digitalWrite, digitalToggle, and digitalRead.

###Specifications:

1. DIO.h:
   - Declare function prototypes for pinMode, digitalWrite, digitalRead, and digitalToggle.

2. DIO.c:
   - Implement the functions declared in DIO.h.
   - Ensure proper handling of input/output configurations and pin states.
   - Utilize bit manipulation macros defined in bitMath.h for register operations.

3. stdTypes.h:
   - Define standard data types not dependent on compiler.
   - Include data types such as uint8_t, uint16_t, int8_t, etc.

4. bitMath.h:
   - Implement bit manipulation functions like setBit, getBit, clearBit, and toggleBit.
   - These functions will be utilized in DIO.c for register operations.

5. register.h:
   - Define macros for accessing AVR microcontroller registers (DDR, PIN, PORT) for ports A, B, C, D.

###Function Definitions:

1. pinMode(port_pin, state):
   - Configure the specified port_pin as input or output based on the provided state.
   - `port_pin`: The port and pin number combined (e.g., PA0 for Port A, Pin 0).
   - `state`: Input (0) or Output (1).

2. digitalWrite(port_pin, state):
   - Write the specified state (high or low) to the given port_pin.
   - `port_pin`: The port and pin number combined.
   - `state`: High (1) or Low (0).

3. digitalRead(port_pin):
   - Read the digital state (high or low) of the specified port_pin.
   - `port_pin`: The port and pin number combined.
   - Return: High (1) or Low (0).

4. digitalToggle(port_pin):
   - Toggle the digital state of the specified port_pin.
   - `port_pin`: The port and pin number combined.

####Note: The Importance of Combined Macros for Ports and Pins

In your mini-project involving microcontrollers or embedded systems, the way you define macros for ports and pins can significantly impact the clarity, simplicity, and scalability of your code. It's essential to consider combining port and pin macros into a single definition rather than defining them separately. Here's why:

Simplicity and Clarity: Combining port and pin macros simplifies your codebase and makes it clearer. It reduces the number of macros you need to manage and helps others understand the purpose of each macro more easily.

Ease of Use: With combined macros, referencing specific pins becomes more straightforward. You don't have to juggle multiple macros for ports and pins, streamlining the configuration and access of GPIO pins in your code.

Flexibility: Using combined macros offers greater flexibility when porting your code to different microcontroller platforms or when adjusting pin configurations. You only need to update the combined macro instead of multiple macros for each pin, saving time and minimizing errors.

Consistency: Adopting a standardized naming convention for combined macros ensures consistency throughout your codebase. This consistency aids in understanding and maintaining the code, especially in larger projects with multiple contributors.

Deliverables: .Provide the source code files (DIO.h, DIO.c, stdTypes.h, bitMath.h, register.h).

<hr>

## Use This Link To Clone My Repo :
   ```
  https://github.com/Azklany/DIO_Driver-for-Arduino.git
  ```
<hr>

All rights reserved © 2024 to [Azklany](https://www.linkedin.com/in/azklany).
