//
//  Methods.cpp
//  C++_Crashcourse
//
//  Created by Saif Mustafa on 29/11/2020.
//  Copyright © 2020 Saif Mustafa. All rights reserved.
//

#include <cstdio>

struct ClockOfTheLongNow {
    void add_year() {
        year++;
    }
    int year;
};


int main() {
    ClockOfTheLongNow clock;
    clock.year = 2017;
    clock.add_year();
    printf("year: %d\n", clock.year);
    clock.add_year();
    printf("year: %d\n", clock.year);
}


