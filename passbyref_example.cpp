#include <iostream>

void fun(int *ptr) {

    *ptr = 30;
}

int main() {

    int x = 20;
    fun(&x);
    std::cout << x << std::endl;

 return 0;
}

