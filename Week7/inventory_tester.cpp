#include <iostream>
#include "Inventory.h"

int main() {
    Inventory inventory(10);

    Book book1("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 121.75);
    Book book2("0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.00);
    Book book3("0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 134.84);
    Book book4("002360692X", "Richard Johnsonb", "Algorithms", 1, "PH", 109.00);
    Book book5("1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95);
    Book book6("0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70);

    if (!inventory.addBook(book1)) std::cout << "ERROR adding this book: " << book1.getISBN() << std::endl;
    if (!inventory.addBook(book2)) std::cout << "ERROR adding this book: " << book2.getISBN() << std::endl;
    if (!inventory.addBook(book3)) std::cout << "ERROR adding this book: " << book3.getISBN() << std::endl;
    if (!inventory.addBook(book4)) std::cout << "ERROR adding this book: " << book4.getISBN() << std::endl;
    if (!inventory.addBook(book5)) std::cout << "ERROR adding this book: " << book5.getISBN() << std::endl;
    if (!inventory.addBook(book6)) std::cout << "ERROR adding this book: " << book6.getISBN() << std::endl;

   
    Book book7("0134444329", "Tony Gaddis", "Starting Out With Python", 4, "PE", 99.95);
    if (!inventory.addBook(book7)) std::cout << "ERROR adding this book: " << book7.getISBN() << std::endl;

    
    std::cout << "\nInitial Inventory Report:\n";
    inventory.printInventory();

  
    inventory.changePrice("013478796X", 50.00);
    inventory.changePrice("0143067889", 9.95);
    inventory.changePrice("0134743350", 100.00);

    std::cout << "\nFinal Inventory Report:\n";
    inventory.printInventory();

    return 0;
}