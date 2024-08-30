// program to get weight on other planets for "space boxing"

#include <iostream>
#include <string>
#include <algorithm>

int main(){

    double earth = 0, space = 0;
    int planet;
    std::string planet_name;

    std::cout << "Enter your Earth weight:\n";
    std::cin >> earth;

    std::cout << "Enter the planet position in the solar system you're going to:\n";
    std::cin >> planet;

    switch(planet) {

        case 1:
            space = earth * 0.38;
            planet_name = "Mercury";
            break;
        case 2:
            space = earth * 0.91;
            planet_name = "Venus";
            break;
        case 3: 
            space = earth;
            planet_name = "Earth";
            break;
        case 4:
            space = earth * 0.38;
            planet_name = "Mars";
            break;
        case 5:
            space = earth * 2.34;
            planet_name = "Jupiter";
            break;
        case 6: 
            space = earth * 1.06;
            planet_name = "Saturn";
            break;
        case 7:
            space = earth * 0.92;
            planet_name = "Uranus";
            break;
        case 8: 
            space = earth * 1.19;
            planet_name = "Neptune";
            break;
        default:
            std::cout << planet << " is not a valid input. Please enter a number from 1 to 8.\n";
    }

    // only print answer if planet var is in valid range
    if (planet == std::clamp(planet, 1, 8)) {
        std::cout << "Your weight on " << planet_name << " is " << space << "lbs.\n";
    }

    return 0;

}