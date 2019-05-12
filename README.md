# password-based-lock-system
Password Based Door Lock System using 8051 Microcontroller is a simple project where a secure password will act as a door unlocking system. Traditional lock systems using mechanical lock and key mechanism are being replaced by new advanced techniques of locking system. These techniques are an integration of mechanical and electronic devices and are highly intelligent. One of the prominent features of these innovative lock systems is their simplicity and high efficiency.

Password-based-door-lock-system-using-8051-microcontroller
Password Based Door Lock System using 8051 Microcontroller is a simple project where a secure password will act as a door unlocking system. Traditional lock systems using mechanical lock and key mechanism are being replaced by new advanced techniques of locking system. These techniques are an integration of mechanical and electronic devices and are highly intelligent. One of the prominent features of these innovative lock systems is their simplicity and high efficiency. Such an automatic lock system consists of electronic control assembly, which controls the output load through a password. This output load can be a motor or a lamp or any other mechanical/electrical load.

Here, we developed an electronic code lock system using 8051 microcontroller (a Password based Door Lock System using 8051 Microcontroller), which provides control to the actuating the load. It is a simple embedded system with input from the keyboard and the output being actuated accordingly.

This system demonstrates a Password based Door Lock System using 8051 Microcontroller, wherein once the correct code or password is entered, the door is opened and the concerned person is allowed access to the secured area. Again, if another person arrives, it will ask to enter the password. If the password is wrong, then door would remain closed, denying access to the person. Principle Behind the Circuit The main component in the circuit is 8051 controller. In this project, a 4×4 Matrix Keypad is used to enter the password. The password which is entered is compared with the predefined password.

If the entered password is correct, then the system opens the door by rotating door motor and displays the status of door on LCD. If the password is wrong, then the door is remains closed and displays “PWD is wrong” on LCD. Components Required Hardware Requirements 8051 Microcontroller 8051 Development Board 8051 Programmer 4×4 Matrix Keypad 16×2 LCD L293D Motor Driver Board DC Motor 10KΩ Potentiometer Connecting wires Power Supply If 8051 Development Board is not used, then the following components are needed. 11.0592 MHz Quartz Crystal 2 x 33pF Ceramic Capacitors 2 x 10 KΩ Resistor (1/4 Watt) 10 µF Capacitor (Polarized) Push Button 2 x 1 KΩ Resistors (for pull up) Software Requirements Keil µVision IDE Willar Programmer Proteus (for circuit diagram and simulation)

How to Design Circuit of Password based Door Lock System? Password based door lock system using 8051 microcontroller circuit design uses five major components – a Microcontroller, an L293D Motor Driver, a DC Motor, a 4×4 Matrix Keypad and a 16×2 LCD. Here, an AT89C52 Microcontroller is used and it is an 8-bit controller. This controller requires a supply voltage of +5V DC. In order to provide regulated 5V DC voltage to the controller we need to use 7805 power supply circuit. We can use 9V DC battery or 12V, 1A adaptor as a power source.

Reset Circuit Design: The reset pin of the microcontroller is kept active till the power supply is in the specified range and a minimum oscillation level is maintained. In other words to ensure the supply voltage does not falls below the threshold level of 1.2V and the reset pulse width is greater than 100ms (recommended for 89C52), we need to select the values of resistor and capacitor such that RC >=100ms. Hence, we selected a 10KΩ resistor and a 10µF electrolytic capacitor.

Oscillator Circuit Design: An 11.0592MHz crystal oscillator is used to provide external clock signal to the microcontroller. To ensure smooth operation, we need to connect two ceramic capacitors in the range of 30pF to 40pF. This crystal oscillator is connected between pin 18 and 19 of the microcontroller. Here, we used two 33pF capacitors.

Interfacing LCD, Keypad and Motor Driver: First, a 10KΩ Potentiometer is connected to the LCD Display’s Contrast Adjust Pin (Pin 3). RS, RW and E of LCD are connected to P3.0, GND and P3.2 pins respectively. The eight data lines of the LCD are connected to PORT1.

The four ROW pins of the Keypad are connected to P2.0 to P2.3 and the four COLUMN pins of the Keypad are connected to P2.4 to P2.7 pins respectively. The IN1 and IN2 of (1A and 2A) of the L293D Motor Driver are connected to PORT0 pins P0.0 and P0.1. Motor is connected between OUT1 and OUT2 (1Y and 2Y) pins of L293D.

Compilation of Microcontroller Code: Once the circuit is designed and drawn on a piece of paper, the next step is to write and compile the code. Here, we used the Keil µVision software to write the program in C language.

Prior to writing the code, general steps needs to be followed like creating a new project and selecting the target device or the required microcontroller. Once the code is written, we need to save it with .c extension and then add it to the source file group under the target folder. The code is then compiled by pressing F7 key.

Once the code is compiled, a hex file is created. In the next step, we use Proteus software to draw the circuit. The code is dumped into the microcontroller using an external programmer and Willar Software.

Recommend Reading: Password Based Circuit Breaker Project Circuit Diagram and Working.

Password Based Door Lock System Circuit Simulation Video Before going to read the working of this circuit, Watch the following simulation video to get clear idea about how the above circuit works.

Once the circuit is powered ON, microcontroller sends commands to the LCD to display “enter password” on LCD. Now we need to enter the password using the keypad. Once password is entered, it displays 5 stars on LCD to indicate that controller read password successfully.

Now the controller compares the entered password with predefined password. If the password is matched, then the microcontroller makes P0.0 HIGH and P0.1 LOW, so the motor driver gets the input signals for forward motion of the motor.

As a result, the Door Motor rotates in forward direction to open the door. After a delay of 10seconds, the microcontroller makes P0.0 LOW and P0.1 HIGH, so the motor driver gets the input signals for reverse motion. As a result, the Door motor rotates in reverse direction to close the door.

If the password is not matched, then microcontroller maintains both P0.0 and P0.1 LOW. Hence, the door motor is stationary so that door remains closed.
