/*
 * A header file for a simple ADT that holds an int and a string
 */

#ifndef DEMO_DATA_H
#define DEMO_DATA_H

#include <string>
using std::string;

/*
 * Simple data structure to simulate the idea of an ADT which contains
 * an identifier and some kind of data. It's not important how complex
 * or simple this structure is, we only want to simulate the idea of
 * a single simple structure that contains both an identifier and data.
 */
struct Data {
    int id;
    string data;
};

#endif /* DEMO_DATA_H */
