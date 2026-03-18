#include <iostream>

int main(){

    int x = 0;

    int& ref = x;

    // int& ref = 20;  //错误   / int& ref  仅左值

    const int& ref2 = 20;  // const int& 即可左值也可右值


    const int& ref2 = x;

    return 0;
}