
/******************************************************************************
* Name: Evan Eley
*
* Class: CS 3650
*
* Date: 1/22/2019
*
* Description: Implementation file for program that replaces all occurances of a string
******************************************************************************/
#include "prog1.h"
#include <string>

std::string replace_all(std::string line, std::string to_replace, std::string replace_with){
  while(line.find(to_replace) != -1){
    std::size_t pos = line.find(to_replace);
    line.replace(pos, to_replace.length(), replace_with);
  }
  return line + '\n';

}
