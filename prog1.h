/******************************************************************************
* Name: Evan Eley
*
* Class: CS 3650
*
* Date: 1/22/2019
*
* Description: Header file for program that replaces all occurances of a string
******************************************************************************/
#include <string>

std::string replace_all(std::string line, std::string to_replace, std::string replace_with);
//Function that recieves a string (line) from input/file, then replaces any
//matching "old" strings with "new", and returns the replaced string.
