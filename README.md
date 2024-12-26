Simple Calculator in C
This is a calcultor written in C. It performs operations such as addition, subtraction, multiplication, division, reminder, power, square root and cube root. The calculator takes the operation input through a choice menu, proceeding forward with the number input form the user.

Features:
1. performs functions like:
    - addition
    - subtraction
    - multiplication
    - division
    - reminder (Modulus)
    - power (math.h libarary)
    - square root (math.h library)
    - cube root (math.h library)
2. User-friendly interface with a command-line input/output system.
3. Error handling for division by zero.
4. Loop functionality allows user to perform multiple calculations without restarting the program.

library used:
1. #include<stdio.h>
2. #include<math.h>

How to Use:
1. compile the program using a c compiler(eg GCC):
    gcc simpleCalculator.c -o simpleCalcualtor
2. Run the program:
    ./simpleCalculator
3. Follow the on-screen prompts:
    - input the choice number of the desired operation.
    - input the numbers.
    - exit the program selecting exit or continue calculating.

Prerequisites:
1. C compiler installed in your system.
2. Basic understanding of command line operations.

Customization:
1. Adding more operations (eg: trignometric operations).
2. improving the user-interface.
3. Adding history feature.