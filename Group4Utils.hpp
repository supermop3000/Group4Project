/******************************************************************************
 ** Author:      Winter 162 400 Group 4
 ** Date:        02/04/2019
** Description: This is a declaration of utility funcitons.
******************************************************************************/

#ifndef GROUP4UTILS_HPP
#define GROUP4UTILS_HPPP

#include <string>
#include <iostream>

using std::string;

  // random
  int randIntRange(int, int );
  //validate user input, selection between 2 choices
  int validSelection();
  //validate integer input greater than 0
  int validInt();
  //validate integer input greater than 0 with a max variable
  int validIntMax(int maxInput);

#endif
