#include <iostream>
#include <string>

int main() {

int age;
std::cout << "What is your age?: ";
std::cin >> age; 
switch(age)

{
    case 13:
        std::cout << "Your age is 13. Wow\n";
        break;
    case 14:
        std::cout << "Your age is 14. Wow\n";
        break;
    default:
        std::cout << "Catch all\n";
        break; 
}
return 0;
}

 