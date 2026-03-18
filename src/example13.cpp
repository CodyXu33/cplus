#include <iostream>
#include <string>

class Student
{
private:
    std::string name = "lapis";
    int age;
public:
    Student(/* args */);
    ~Student();
    std::string  getName() { return this->name;}
};

Student::Student(/* args */)
{
    std::cout<<"costrcutor function run" << "\n";
}

Student::~Student()
{
    std::cout<<"destroy function run" << "\n";

}




int main(){
    Student s; 
    std::cout << s.getName() << "\n";
    return 0;
}