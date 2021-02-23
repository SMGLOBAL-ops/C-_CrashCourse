#include <iostream>
#include <vector>
#include <fstream> 

// Reading from arbitrary file 

/*

int main() {

    std::ifstream file ("hello.txt"); 

    std::vector<std::string> names; 

    std::string input; 
    while(file >> input) {

        names.push_back(input); 
    }

    for(std::string name : names) {

        std::cout << name << std::endl; 

    }
return 0; 
}

*/ 

int main() {

    std::string line;
    std::ifstream file ("hello.txt"); 
    getline(file, line); 
    std::cout << line << "\n"; 

return 0; 
}

