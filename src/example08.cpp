#include <iostream>

int add(int a,int b);

int main(){

    int res = add(10,12);
    std::cout << res;
    return 0;
}


int add(int a,int b){
    return a + b;
}