//
//  main.cpp
//  Function Testing
//
// The following program takes in an array of integers, and finds all possible sums using two integer values to arrive at target value.
//
//  Created by Sam Newton on 11/16/19.
//  Copyright © 2019 Newton Labs. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
   
    int arr[12] = {2,5,3,2,1,8,7,6,5,4,3,9};
    int t = 14;
    bool sum = false;
    
    
   int arraySize = *(&arr + 1) - arr;         //outputs 12 correct
//    int arraySize = sizeof(&arr);           // outputs 8

    
  //  cout << arraySize << endl;               checks array size
    
    for (int i = 0; i < arraySize; i++) {
        for (int j = i + 1; j < arraySize; j++) {
            if (arr[i] + arr[j] == t) {
                cout << "[" << arr[i] << " ," << arr[j] << "]" << endl;
                sum = true;
                }
            }
        }
             if (sum == false){
                 cout << "No possible sum equal to " << t << " with ints in array" << endl;
    
    }
    
    return 0;
}

