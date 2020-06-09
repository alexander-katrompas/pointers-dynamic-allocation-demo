/*
 * The driver function to demonstrate various operations with pointers
 * and passing and returning data by reference
 */

#include "main.h"

int main() {

    /***********************************************
     *  create a 1D array of integers dynamically
     ***********************************************/

    // make a pointer to an int
    int *myIntArray;
    // allocate the array
    myIntArray = new int[SIZE];
    // initialize it with 1,2,3,4,5
    for (int i = 0; i < SIZE; i++) {
        myIntArray[i] = i + 1;
    }
    //prove it worked
    for (int i = 0; i < SIZE; i++) {
        cout << myIntArray[i] << endl;
    }
    cout << endl;

    //destroy the array, but remember the pointer is still there and usable
    delete myIntArray;

    
    /***********************************************
     * create a 2D array of integers dynamically
     ***********************************************/

    // make a pointer to a pointer to an int
    int **my2dIntArray;
    // allocate the rows
    my2dIntArray = new int*[ROWS];
    // allocate the columns
    for (int i = 0; i < ROWS; i++) {
        my2dIntArray[i] = new int[COLS];
    }

    // initialize it with 1,1,1,1
    //                    2,2,2,2
    //                    3,3,3,3
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            my2dIntArray[i][j] = i + 1;
        }
    }

    //prove it worked
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << my2dIntArray[i][j] << ",";
        }
        cout << endl;
    }
    cout << endl;

    //destroy the 2D array, but remember the pointer is still there and usable
    for (int i = 0; i < ROWS; i++) {
        delete my2dIntArray[i];
    }
    delete my2dIntArray;


    /***********************************************
     * use pointers and dynamic memory with an ADT
     * and demonstrate passing by reference
     ***********************************************/

    // create a simple single ADT of type Data
    Data myData;

    // insert values into the parts of the struct
    myData.id = 1;
    myData.data = "Hello World";

    // prove it worked
    cout << myData.id << ": " << myData.data << endl;

    // pass the structure to a function that will modify it
    change_data(&myData);

    // prove it worked
    cout << myData.id << ": " << myData.data << endl << endl;

    // dynamically create an array of Data structs

    // create a pointer to Data
    Data *myDataArray;
    // allocate the array
    myDataArray = new Data[SIZE];

    // pass the array by reference and let the function fill it with data
    fill_data_array(myDataArray, SIZE);

    // pass it to a display function to prove it
    display_data_array(myDataArray, SIZE);

    // *****************************************************************
    // EXERCISE: Dynamically create a 2D array of Data structs, a function
    // to fill it with values, and a function to print them all.
    // *****************************************************************
    
    return 0;
}
