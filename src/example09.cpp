#include <iostream>

int main(){

    int x = 0;

    int& ref = x;

    // int& ref = 20;

    // const int& ref2 = 20;


    const int& ref2 = x;

    return 0;
}