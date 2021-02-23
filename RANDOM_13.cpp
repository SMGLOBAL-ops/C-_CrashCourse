#include <iostream>
#include <vector>
#include <array> 

int main() {

    int data[] = {1, 2, 3, 4, 5, 6};

    for(int n : data)
    {
        std::cout << n << "\t"; 
    }

    std::cout << "\n"; 
    return 0;
}



