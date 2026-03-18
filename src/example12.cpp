#include <iostream>
#include <string>



struct Student
{
   std::string name;
   int age;
};


int main(){
    Student s{"lapis",18};
    std::cout << "name: " << s.name << " age: " << s.age;
    return 0;
}