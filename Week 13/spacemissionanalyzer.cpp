#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    double dist, fuel, weight, lifeSup;
    int crewSize;

    std::cout << "Enter distance to planet (million km): ";
    std::cin >> dist;

    std::cout << "Enter fuel in ship (tons): ";
    std::cin >> fuel;

    std::cout << "Enter crew size: ";
    std::cin >> crewSize;

    std::cout << "Enter weight of ship (tons): ";
    std::cin >> weight;

    std::cout << "Enter life support duration (days): ";
    std::cin >> lifeSup;

    double efficiency = (fuel / weight) * 100;

    double speed = (fuel * 10000) / (crewSize * weight);

    double travel_time = (dist * 1000000) / speed;
    int travel_days = static_cast<int>(std::ceil(travel_time));



    bool trip_safe = (efficiency >= 20.0) &&
    (lifeSup >= travel_days + 10) &&
    (crewSize >= 2 && crewSize <= 8) &&
    (weight < 500);

 
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nFuel efficiency: " << efficiency << "%\n";

    std::cout << std::setprecision(0);
    std::cout << "Estimated speed: " << speed << " km/day\n";
    std::cout << "Estimated travel time: " << travel_days << " days\n";

    std::cout << "\nMission Status: ";
    if (trip_safe) {
        std::cout << "VIABLE\n";
    } else {
        std::cout << "NOT VIABLE\n";
    }

    return 0;
}