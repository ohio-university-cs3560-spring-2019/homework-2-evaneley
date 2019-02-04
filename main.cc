/******************************************************************************
* Name: Evan Eley
*
* Class: CS 3650
*
* Date: 1/22/2019
*
* Description: Main program that takes two strings as command-line arguments
*              and will replace any occurances of the string argument 1 in cin
*              with the string argument 2.
******************************************************************************/
#include <iostream>
#include "prog1.h"

int main(int argc, char const *argv[]) {
  std::string old, replacement, line;
  old = argv[1];
  replacement = argv[2];

  //Repeat loop until the end of the file is reached
  while (!std::cin.eof()) {
    //Obtain line
    getline(std::cin, line);
    //Replace
    std::cout << replace_all(line, old, replacement);
    //Clear any endline keys
    while(std::cin.peek()=='\n' || std::cin.peek()=='\r'){
      std::cin.ignore();
    }
  }
  return 0;
}
