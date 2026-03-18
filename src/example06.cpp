#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // int x;
    // cout << "please enter a number : " ;
    // cin >>  x;
    // cout << "current enter : ";
    // cout << x; 
    // ofstream out("data.txt");
    // out << "hello,world\n" ;
    // out.close();

    ifstream hhh("data.txt");

    string line;

    while (getline(hhh,line))
    {
        cout << line << "\n" ;
    }
    
    return 0;
}