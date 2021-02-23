//
//  Plain-Old-Data_Classes_(PODS).cpp
//  C++_Crashcourse
//
//  Created by Saif Mustafa on 29/11/2020.
//  Copyright © 2020 Saif Mustafa. All rights reserved.
//

#include <cstdio>

struct Book {
    char name[256];
    int year;
    int pages;
    bool hardcover;
};



int main() {
    Book neuromancer;
    neuromancer.pages = 271;
    printf("Neuromancer has %d pages.\n", neuromancer.pages);
}


