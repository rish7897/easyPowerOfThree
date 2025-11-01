#include<iostream>
using namespace std;

// Observation 1: If there is a power of three number, it will definitely end with either 3, 9 , 7 or 1.
// Observation 2 : If a number ends with one of these 4 digits, we only have to check the powers of three which would guarantee a number ending with that last digit. For example, if a given number ends with 1, it must be a 4th or 8th or 12th and so on power of three, if at all.
bool isPowerOfThree(int n) {
    if(n == 0){
        return false;
    }
    int num;
    if(n % 10 == 1){
        num = 1;
    }
    if(n % 10 == 3){
        num = 3;
    }
    
    if(n % 10 == 9){
        num = 9;
    }
    
    if(n % 10 == 7){
        num = 27;
    }
    
    while(num < n){
        num *= (3*3*3*3);
        if(num > INT_MAX / (3*3*3*3)){
            break;
        }
    }
    if(num == n){
        return true;
    }
    return false;
}