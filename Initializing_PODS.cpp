//
//  Initializing_PODS.cpp
//  C++_Crashcourse
//
//  Created by Saif Mustafa on 29/11/2020.
//  Copyright © 2020 Saif Mustafa. All rights reserved.
//

#include <cstdint>

struct PodStruct {
    uint64_t a;
    char b[256];
    bool c;
};

int main() {
    PodStruct initialized_pod1{}; // All fields zeroed
    PodStruct initialized_pod2 = {}; // All fields zeroed

    PodStruct initialized_pod3{ 42, "Hello"}; // Fields a & b set; c = 0
    PodStruct initialized_pod4{ 42, "Hello", true }; // All fields set
}

