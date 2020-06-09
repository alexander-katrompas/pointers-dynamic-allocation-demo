/*
 * The header file for the supporting demo functions
 */

#ifndef DEMO_FUNCTIONS_H
#define DEMO_FUNCTIONS_H

#include <iostream>
#include "data.h"

using std::cout;
using std::endl;

bool change_data(Data*);
bool fill_data_array(Data*, int);
void display_data_array(Data*, int);

#endif /* DEMO_FUNCTIONS_H */
