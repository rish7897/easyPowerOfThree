#include<iostream>
using namespace std;

// bitwise method
bool isPowerOfThree(int n) {
        if(n <= 0){
            return false;
    }
    int num = 1;
    while(num < n){
            num += (num << 1);
            if(num > INT_MAX / 3){
                break;
        }
    }
    if(num == n){
            return true;
    }
    return false;
}