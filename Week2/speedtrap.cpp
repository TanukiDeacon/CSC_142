/*
speedtrap.cpp
This program will check if someone is speeding with an if statment
Derian Arroyo
1/29/2025
*/

/*

    Your task:

        This program will make use of conditional statements by checking
        if someone is speeding or not

        In this file, create a main() method, that will perform the following
        algorithm:

            1. Rename this file to SpeedTrap.cpp
            2. Prompt the user to enter an int for the speed limit.
            3. Prompt the user to enter a double for the driver’s speed.
            4. If the speed is legal (i.e. less than or equal to the speed limit),
                Print a message indicating that the speed is legal
            Otherwise,
                Print a message indicating that the driver will receive a speeding ticket.

    Specifications:  
    
        For full credit, your program must meet the following specifications:

        1. Your program must use only a single if statement.
        2. Use meaningful variable names and follow all naming conventions.
        3. Use meaningful prompts to ask the user for the speed limit and the vehicle’s
        speed. (You may assume the user will only enter positive numbers.)
        4. You may choose creative output messages, but the program must print the
        correct message based on the user input.

        Don't forget to put your name and date somewhere at the top of the file!
*/

#include <iostream>


int main() {

// variables
int speedlimit;
double drvrspd;

//inputs
std::cout << "What is the speed limit: ";
std::cin >> speedlimit;

std::cout << "What was your speed: ";
std::cin >> drvrspd;

//if

if (drvrspd <= speedlimit){
    std::cout << "You are not speeding." << std::endl;
}
else {
     std::cout << "You are speeding and will receive a ticket." << std::endl;
}
return 0;
}