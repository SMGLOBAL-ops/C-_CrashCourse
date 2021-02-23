//
//  Absvalue.cpp
//  C++_Crashcourse
//
//  Created by Saif Mustafa on 26/11/2020.
//  Copyright © 2020 Saif Mustafa. All rights reserved.
//

#include <cstdio>


int absolute_value(int x) {
    
    int result = 0;
    if (x > 0) {
      result = x;
    } else if (x < 0) {
        result = -1*x;
    } 
    return result;
    
}
    
int main() {
  int my_num = -10;
  int my_num2 = 10;
  int my_num3 = 0;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  printf("The absolute value of %d is %d.\n", my_num2, absolute_value(my_num2));
  printf("The absolute value of %d is %d.\n", my_num3, absolute_value(my_num3));

    
}




