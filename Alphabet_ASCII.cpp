//
//  Alphabet_ASCII.cpp
//  C++_Crashcourse
//
//  Created by Saif Mustafa on 27/11/2020.
//  Copyright © 2020 Saif Mustafa. All rights reserved.
//

#include <cstdio>


int main() {
  char alphabet[27];
  for (int i = 0; i < 26; i++) {
    alphabet[i] = i + 97;
  }
  alphabet[26] = 0;
  printf("%s\n", alphabet);
    for (int i =0; i<26; i++) {
      alphabet[i] = i + 65;
    }
    printf("%s\n", alphabet);
}


