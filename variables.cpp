#include<iostream>
using namespace std;
int main()
{
    //integer(Whole Number)
    int age = 21;
    int year = 2026;
    int days = 7;

    //double(number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //single character
    char grade = 'A';
    char initial = 'C';
    char currency = '$';

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool sale = true;

    //string(objects that represents a sequence of text)
    std::string name = "Sahil";
    std::string day = "Saturday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old"; 

    return 0;
}
