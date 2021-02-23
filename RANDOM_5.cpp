#include <iostream>
#include <string>

using std::cout;
using std::cin;


int main() {

    std::string guess;
    std::string answer = "Saif";

while (guess != answer) {

    cout << "Bet you can't guess my name? ";
    cin >> guess;

        if (guess == answer) { 
            std::cout << "Yes, that's correct! ";
        }
        else {
            std::cout << "Nope, that's not it, try again! ";
        }

    }
return 0;
}

