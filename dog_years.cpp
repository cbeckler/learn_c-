// program to convert dog age in human years to "dog years"
// dogs age at 10.5 dog year/year for two years and then 4 dog years/year for the rest of their life

#include <iostream>

int main(){

    double dogage = 0;
    double youngdog = 0;
    double olddog = 0;
    double dogyears;

    std::cout << "Enter your dog's age in years:\n";

    std::cin >> dogage; 

    if (dogage==0 || dogage==1 || dogage==2)
        {olddog = 0;}
    else 
        {olddog = dogage - 2;};

    youngdog = dogage - olddog;

    dogyears = (youngdog*10.5)+(olddog*4);

    std::cout << "Your dog is " << dogyears << " dog years old.\n";

    return 0;

}