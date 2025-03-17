#include <iostream>
#include <string>   
#include <iomanip>
#pragma once

class Book {
    private:
        std::string codeNum;
        std::string author;
        std::string title;
        int edition;
        std::string pubCode;
        double price;
    
    public:
        
        Book() : codeNum("Unknown"), author("Unknown"), title("Untitled"), edition(1), pubCode("Unknown"), price(0.0) {}
    
        
        Book(const std::string& cn, const std::string& au, const std::string& ti, int ed, const std::string& pc, double pr)
            : codeNum(cn), author(au), title(ti), edition(ed), pubCode(pc), price(pr) {}
    
       
        std::string getTitle() const { return title; }
        std::string getAuthor() const { return author; }
        double getPrice() const { return price; }
        int getEdition() const { return edition; }
        std::string getISBN() const { return codeNum; }
        std::string getPubCode() const { return pubCode; }
    
        
        void changePrice(double newPrice) { price = newPrice; }
    
        
        void displayBook() const {
            std::cout << std::left << std::setw(12) << codeNum
                      << std::setw(16) << author
                      << std::setw(45) << (title.length() > 40 ? title.substr(0, 40) + "..." : title)
                      << std::right << std::setw(3) << edition
                      << std::setw(6) << pubCode
                      << "$ " << std::fixed << std::setprecision(2) << std::setw(9) << price
                      << std::endl;
        }
    };