#include <iostream>
#include <array>


int main(){
    std::array<int,3> a{1,10,20};

    for (int32_t i = 0; i < a.size(); i++)
    {
       std::cout << a[i] << "\n";
    }
    
    return 0;
}