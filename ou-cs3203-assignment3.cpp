#include <iostream>
#include  <vector>
using namespace std;
 
int sumList(vector<int> arr);
int multiplyList(vector<int> arr);
void print(vector<int> arr);
vector<int> reverse(vector<int> vec);

int main() {
    // init vector to be used
    vector<int> list;  

    // prompt user to enter Integers
    cout << "Enter vectors numbers seperated by spaces, end seq. with E:";
    int n;
    while (cin >> n) {  
        list.push_back(n);  
    }
    
    // display the vector size and elements
    print(list);
    cout << "Sum of the vector Integers:" << sumList(list) << endl;
    cout << "Product of the vector Integers:" << multiplyList(list) << endl;

    return 0;
}

void print(vector<int> arr) {
   cout << "Vector has " << arr.size() << " numbers: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// computes the sum of a list / array of numbers given as a parameter and returns the result.
int sumList(vector<int> arr ) {
    int sum = 0;
    // itterate and add each integer to sum
    for (int i = 0; i < arr.size() ; i++) {
        sum += arr[i];
    }
    return sum;
}


// compute the 
int multiplyList(vector<int> arr) {
    int prod = 1;
    // multyply each elemnt times prod and save to product
    for (int i = 0; i < arr.size()  ; i++) {
        prod = arr[i]*prod;
    }
    return prod;
}

vector<int> reverse(vector<int> vec){
    int temp = 0;
    for (int i = 0; i < (int)(vec.size() / 2); i++) {
        temp = vec[i];
        vec[i] = vec[vec.size() -1];
        vec[vec.size() -1] = temp;
    }
    return vec;

}