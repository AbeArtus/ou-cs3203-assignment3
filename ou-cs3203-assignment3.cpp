#include <iostream>
#include  <vector>
using namespace std;
 
int sumList(vector<int> arr);
int multiplyList(vector<int> arr);




// Create a software program (in any language you wish) which contains a function / method which
// computes the sum of a list / array of numbers (integers, whatever you want) given as a parameter and
// returns the result. Commit the result.
int sumList(vector<int> arr ) {
    int sum = 0;
    for (int i = 0; i < arr.size() ; i++) {
        sum += arr[i];
    }
    return sum;
}

int multiplyList(vector<int> arr) {
    int prod = 1;
    for (int i = 0; i < arr.size()  ; i++) {
        prod = arr[i]*prod;
    }
    return prod;
}