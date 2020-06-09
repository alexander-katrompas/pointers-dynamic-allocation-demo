/*
 * the supporting demo functions implementations
 */

#include "functions.h"

// pass in a pointer to a Data
bool change_data(Data *data_struct){
    // change the values stored
    data_struct->id = 2;
    data_struct->data = "Good Bye Cruel World";
    
    // return true to indicate success
    return true;
}

// pass in an array of type Data and the size of the array
bool fill_data_array(Data *array, int size){
    for(int i=0; i<size; i++){
        // fill with ids 10,20,etc. and a generic string
        array[i].id = (i+1)*10;
        array[i].data =  "some string " + std::to_string(i+1);
    }
    return true;
}

// pass in an array of type Data and the size of the array
void display_data_array(Data *array, int size){
    for(int i=0; i<size; i++){
        cout << array[i].id << ": " << array[i].data << endl;
    }
    cout << endl;
}
