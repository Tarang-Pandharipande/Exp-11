# Exp-11

## Aim - 
To study and implement Classes and Objects

## Theory - 
Object Oriented Programming (OOP):
Object-oriented programming is based on the concept of objects. In object-oriented programming data structures, or objects are defined, each with its own properties or attributes. To understand OOP better, let us understand some key concepts of OOPS

*Classes* - 
A class is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class.
A C++ class is like a blueprint for an object. It defines a data structure by combining data (attributes) and methods (functions) that operate on the data. A class is defined using the class keyword followed by the class name and a block of code that includes its attributes and methods

For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, the Car is the class, and wheels, speed limits, and mileage are their properties.

A Class is a user-defined data type that has data members and member functions.
Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behaviour of the objects in a Class.
In the above example of class Car, the data member will be speed limit, mileage, etc, and member functions can be applying brakes, increasing speed, etc.

*Objects* - 
An object is created from a class. We have already created the class named MyClass, so now we can use this to create objects.
An instance of a class. It represents a specific realization of the class, holding actual values for the attributes defined by the class.An object is created by instantiating the class. 
This involves calling the class as if it were a function.

*Global and Local variables* - 

Global Variables:

Declared outside functions or blocks.
Accessible throughout the program.
Used for shared data across multiple parts.
Retain value for the program's lifetime.

Local Variables:

Declared within functions or blocks.
Accessible only within their specific block.
Used for temporary or context-specific data.
Created and destroyed with the block.

## Code - 
1. 
```
#include <iostream>
using namespace std;

class Cube {
    public:
    double height = 2.0;
    double width = 3.0;
    double length = 5.0;  
};

int main() {
    Cube c1;
    double vol = c1.height * c1.width * c1.length;  
    cout << "Volume: " << vol << endl;
}
```
2.
```
#include<iostream>
using namespace std;
class cube
{
    public:
    double height=3.0;
    double width=4.0;
    double length=5.0;

    double volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    double v = cube1.volume();
    cout<<"volume:"<<v<<endl;
}
```
3.
```
#include<iostream>
using namespace std;
//concept of public and private variables in class
class cube
{
    private:
    double height=4.0;
    double width=5.0;
    double length=6.0;

    public:
    double volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    double v = cube1.volume();
    cout<<"volume:"<<v<<endl;
}
```
4.
```
//23070123140
//Tarang
#include<iostream>
using namespace std;
//display function inside class
class cube
{
    public:
    double height=5.0;
    double width=6.0;
    double length=7.0;

    double volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
    void disp_vol(double vol)
    {
        cout<<"volume :"<<vol<<endl;
    }
};
int main()
{
    cube cube1;
    double v = cube1.volume();
    cout<<"volume:"<<v<<endl;
    cube1.disp_vol(v);
}
```
5.
```
//23070123140
//Tarang
#include<iostream>
using namespace std;
class volume{
    public:
    float height;
    float width;
    float length;
    void input()
    {
        cout<<"enter the value of length: ";
        cin>>length;
        cout<<"enter the value of width: ";
        cin>>width;
        cout<<"enter the value of height: ";
        cin>>height;
    }
    float vol()
    {
        float v=length*width*height;
        return v;
    }
    void display()
    {
        double a=vol();
        cout<<"the volume is :"<<a;
    }
};
int main()
{
    volume volume1;
    volume1.input();
    float a=volume1.vol();
    cout<<a;
}
```
## Ouput - 
1.![Screenshot 2024-09-02 152447](https://github.com/user-attachments/assets/34dd77b3-52b6-4d50-8c8b-719f2f634996)
2.![Screenshot 2024-09-02 152713](https://github.com/user-attachments/assets/ef56f8e3-3def-45ce-9634-d51c86f1b2eb)
3.![Screenshot 2024-09-02 152726](https://github.com/user-attachments/assets/7dfef3c4-6ba8-457a-8858-7e2c27281e06)
4.![Screenshot 2024-09-02 152750](https://github.com/user-attachments/assets/b9f3a435-62e3-4956-9aa7-87ccfc4f2885)
5.![Screenshot 2024-09-02 152545](https://github.com/user-attachments/assets/81126083-c627-4822-97c7-0e432f0f6ddc)

## Conclusion - 
→ We learnt about OOP in C++.
→ We learnt the use case of classes and objects in C++.



