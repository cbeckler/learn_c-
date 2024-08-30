#include <iostream>
#include <cmath>

int main() {
  
  //Declare Variables
	double x1,x2,a,b,c;

	std::cout << "Input values of a, b, and c.\n" ;
	std::cin >> a >>b >>c;

	x1 = (-b + std::sqrt((b*b)-(4*a*c)))/(2*a);

    x2 = (-b - std::sqrt((b*b)-(4*a*c)))/(2*a);

    std::cout << "Root 1 is " << x1 << "\n";
    std::cout << "Root 2 is " << x2 << "\n";

	return (0);

  
}