#include <iostream>

int rule = 3;

class Car 
{
public:
    void printWheels()
    {
        std::cout << wheels << std::endl;
    }

private:
    int wheels = 4;

};

void HelloWorld()
{
    std::cout << "Hello World\n";
}

std::string StringFunc()
{
    return "Hello";
}

void print(std::string value)
{
    std::cout << value << std::endl;
}

void print(int value) { std::cout << value << std::endl; }

int myFunc(int x, int y);

int main()
{ 
    Car toyota;
    if(rule == 0) {HelloWorld();}
    else if(rule == 1) {print(StringFunc());}
    else if(rule == 2) {print(myFunc(2, 3));}
    else if(rule == 3) {toyota.printWheels();}
}

int myFunc(int x, int y) {
    return x + y;
}