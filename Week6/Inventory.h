#include "Book.h"
#include <iostream>
#include <string>   
#include <iomanip>
#pragma once

class Inventory {
private:
    Book* books;
    int nextEntry;
    int length;

public:
    
    Inventory(int size) : length(size), nextEntry(0) {
        books = new Book[length]; 
    }

    // Destructor
    ~Inventory() {
        delete[] books; 
    }

    
    bool addBook(const Book& theBook) {
        if (nextEntry < length) {
            books[nextEntry++] = theBook; 
            return true;
        }
        return false; 
    }

    
    void changePrice(const std::string& isbn, double newPrice) {
        for (int i = 0; i < nextEntry; ++i) {
            if (books[i].getISBN() == isbn) {
                books[i].changePrice(newPrice);
                return;
            }
        }
    }

    
    void printInventory() const {
        std::cout << "---------------------------------------------------------------------------------------\n";
        std::cout << std::left << std::setw(12) << "ISBN"
                  << std::setw(16) << "AUTHOR"
                  << std::setw(45) << "TITLE"
                  << std::right << std::setw(3) << "ED"
                  << std::setw(6) << "PUB"
                  << std::setw(9) << "PRICE"
                  << std::endl;
        std::cout << "---------------------------------------------------------------------------------------\n";
        for (int i = 0; i < nextEntry; ++i) {
            books[i].displayBook(); 
        }
        std::cout << "---------------------------------------------------------------------------------------\n";
    }
};
