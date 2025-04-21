#include <iostream>
#include <string>
#include <utility>


void showGadgets(std::string g1, std::string g2){
    std::cout << "Gadget 1: " << g1 << ", Gadget 2: " << g2 << std::endl;
}

int main(){

    std::string gadget_one = "Batarang";
    std::string gadget_two = "Grappling Hook";

    showGadgets(gadget_one, gadget_two);
    std::swap(gadget_one, gadget_two);
    showGadgets(gadget_one, gadget_two);

    return 0;
}