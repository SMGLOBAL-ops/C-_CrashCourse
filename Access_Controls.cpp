//
//  Access_Controls.cpp
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
    bool set_year(int new_year) {
        if (new_year < 2019) return false;
        year = new_year;
        return true;
    }
    int get_year() {
        return year;
    }
private:
    int year;
};
 
