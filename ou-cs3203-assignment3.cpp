#include <iostream>
#include  <vector>
using namespace std;
 
int sumList(vector<int> arr);
int multiplyList(vector<int> arr);

int main() {
    vector<int> list;  

    cout << "Enter vectors numbers seperated by spaces, end seq. with E:";
    int n;
    while (cin >> n) {  
        list.push_back(n);  
    }
    

    cout << "Vector has" << list.size() << " numbers: ";
    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << " ";
    }
    cout << endl;

    cout << "Sum of the vector Integers:" << sumList(list) << endl;

    cout << "Product of the vector Integers:" << multiplyList(list) << endl;

    return 0;
}


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