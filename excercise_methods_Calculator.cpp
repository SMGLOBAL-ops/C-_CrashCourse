//
//  excercise_methods_Calculator.cpp
//  C++_Crashcourse
//
//  Created by Saif Mustafa on 01/12/2020.
//  Copyright © 2020 Saif Mustafa. All rights reserved.
//

#include <cstdio>


enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator {
  Calculator(Operation op_in) {
    op = op_in;
  }
  int calculate(double a, double b) {
    switch(op) {
    case Operation::Add:
        return a + b;
    case Operation::Subtract:
        return a - b;
    case Operation::Multiply:
        return a * b;
    case Operation::Divide:
        return a / b;
    }
    return 0;
  }
  Operation op;
};

int main() {
  Calculator add_calc(Operation::Add);
  printf("1 + 2 = %d\n", add_calc.calculate(1, 2));
  printf("10 + 20 = %d\n", add_calc.calculate(10, 20));
  Calculator div_calc(Operation::Divide);
    printf("100 / 33 = %d\n", div_calc.calculate(100, 33.0));
}















