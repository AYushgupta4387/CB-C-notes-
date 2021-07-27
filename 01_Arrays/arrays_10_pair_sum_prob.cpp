// Given a SORTED array, find pair of elements that sum to K (given) 
// TWO POINTER METHOD

#include<iostream>
using namespace std; 

int main() {
    int a[] = {1, 3, 5, 7, 10, 11, 12, 13};
    int k = 16;

    int i=0;
    int j= (sizeof(a) / sizeof(int)) - 1;

    while (i<j) {
        int currentSum = a[i] + a[j];

        if(currentSum < k) {
            i++;
        }
        if(currentSum > k){
            j--;
        }
        if(currentSum == k) {
            cout << a[i] << " and " << a[j] << endl; 
            i++;
            j--;
        }
    }

    return 0;
}