/*
Exams.cpp
Thsi program will receive user input then display it back to them with an average of their exam scores
Derian Arroyo
1/27/2025
*/ 
   

/*
    0. Rename this file to Exams.cpp

    1. In this file, and every file created for this class, add comments at the top of the file that include:
        - The name of the file
        - A brief description of the program (or class) that’s in the file
        - Your name
        - Today’s date
    
    2. In this file, create a single function called main() that performs the following steps 
    (if you are unsure how to do any of these things, consult with last weeks lab to find suggestions):

        - Prompt the user to input a String that is their name.

        - Prompt the user to input three integers, representing exam scores. Each
        integer should be stored in a separate variable of type int.

        - Calculate the average of the three exam scores and store the result in a
        variable of type double. Note: be careful about integer division! For full
        credit the average you calculate must be numerically correct.

        - Display the input data (the user’s name and three exam scores). Also
        display the calculated result (the exam average), formatted to two digits
        to the right of the decimal point.

        - For full credit, your program must print all the input data as well as the
        results, in a clearly understandable manner, with appropriate descriptive
        labels and formatting.

    4. A successful run should have output that looks something like the output that is provided in the Lab3 folder:

*/

#include <iostream>

int main(){

    // variables 
    std::string name;
    int exam1;
    int exam2;
    int exam3;
    int numexam = 3;
    float average;


    //inputs
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "Enter the first exam score: ";
    std::cin >> exam1;
    std::cout << "Enter the second exam score: ";
    std::cin >> exam2;
    std::cout << "Enter the third exam score: ";
    std::cin >> exam3;

    //math
    average = (exam1 + exam2 + exam3) / numexam;

    //outputs
    std::cout << "\n";
    std::cout << "Hello, " + name + "." << std::endl;
    std::cout << "Your three exam scores are " << exam1 << "," << exam2 << ", and " << exam3 << "." << std::endl;
    std::cout << "Your average exam score is " << average << " points." << std::endl;

    return 0;
}