#include <iostream>
#include <cmath>

struct Radar_scan {

   int Einstein_coef1;
   int Einstein_coef2;
   double gamma;

    double SWITCH_ON(int Einstein_coef1, int Einstein_coef2) {
       double gamma; 

       gamma = sqrt(42 / 1 - (Einstein_coef1 / Einstein_coef2));
       return gamma; 
    }

    double multiply_gamma(double gamma) {
        double multiply_vals;
        double multiply_factor; 

        std::cout << "Enter multiply_factor for gamma : "; 
        std::cin >> multiply_factor;
        multiply_vals = multiply_factor * gamma; 
        return multiply_vals;
    }
};


int main() {
Radar_scan TEST; 
int E1 = 10; 
int E2 = 7; 
double y; 
double x; 

y = TEST.SWITCH_ON(E1, E2);
x = TEST.multiply_gamma(y); 

std::cout << y << std::endl; 
std::cout << x << std::endl;

  return 0; 
}
