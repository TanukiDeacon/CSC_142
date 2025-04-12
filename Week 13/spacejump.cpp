#include <iostream>
#include <cmath>
#include <iomanip>

constexpr double pi = 3.14159265358979323846;
double degrees_to_radians(double degrees) {
    return degrees * (pi / 180.0);
}


int main(){

    double x,y,z;
    double thrust, angle, warpFactor;

    std::cout << "Enter x, y, z coordinates: ";
    std::cin >> x >> y >> z;
    
    std::cout << "Enter thrust: ";
    std::cin >> thrust;

    std::cout << "Enter angle(in degrees): ";
    std::cin >> angle;

    std::cout << "Enter warp factor: ";
    std::cin >> warpFactor;

    double angleRad = degrees_to_radians(angle);

    double new_x = (x + thrust * std::cos(angleRad)) * warpFactor;
    double new_y = (y + thrust * std::sin(angleRad)) * warpFactor;
    double new_z = z + (thrust / warpFactor);

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "\nNew coordinates after hyperspace jump: " << std::endl ;
    std::cout << "X: " << new_x << std::endl;
    std::cout << "Y: " << new_y << std::endl;
    std::cout << "Z: " << new_z << std::endl;




    return 0;
}