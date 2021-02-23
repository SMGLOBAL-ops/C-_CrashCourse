#include <iostream>
#include <vector>


void print_vector(std::vector<int> data) {

    for(int i=0; i < data.size(); i++) {

        std::cout << data[i] << "\t"; 
    }
    std::cout << std::endl;
}

int main() {

    std::vector<int> data = {1, 2, 3};
    print_vector(data);

}




