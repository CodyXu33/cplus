#include <iostream>

using namespace std;
int main(){
    int age = 20;
    age = 50;


    int32_t  ageInt = 20;
    cout << ageInt << endl;

    int a(30);
    cout << a << endl;

    // auto b = 666;
    // cout << b << endl;

    double score = 95.5;

    int whole = static_cast<int>(score);

 
    const int ageConst = 20;
    return 0;
}