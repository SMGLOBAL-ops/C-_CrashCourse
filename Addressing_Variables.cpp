//
//  Addressing_Variables.cpp
//  C++_Crashcourse
//
//  Created by Saif Mustafa on 04/12/2020.
//  Copyright © 2020 Saif Mustafa. All rights reserved.
//

#include <cstdio>

int main() {
  int gettysburg{};
  printf("gettysburg: %d\n", gettysburg);
  int *gettysburg_address = &gettysburg;
  printf("&gettysburg: %p\n", gettysburg_address);
}


