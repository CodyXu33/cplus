#include <iostream>

int main(){

    int x = 666;

    int* p = &x;

    std::cout << *p  << "\n"; //对象内容
    std::cout << p  << "\n"; //地址

    int* c = nullptr; //空指针

    int arr[3] = {1,10,3};

    int* arrP =  arr;
    arrP = arrP + 1;
    std::cout << *arrP ;


    

    return 0;
}