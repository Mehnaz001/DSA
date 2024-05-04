#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello world";//tp print anything onn screen
    cout<<endl;//for a new line
    cout<<"\n";//also for a new line

    /*Variables*/
    //It is the name of memory location
    int x; //x is a variable
    x=5; //5 is the value stored in x
    int x=5; //Declaration and initialization of variable at same time

/*Data types
It is used to declare the type of variable .(which type of value can be stored in variable)*/
int x = 5; //int is the data type which means variable x can only store integer values.
char ch = 'a'; //used to store character values
bool ans = true; //only store true(1) or false(0).takes 1 bit in memory
float  price = 23.5; //used to store floating values 
double salary = 3500.50; //store decimal values with better precission

/*sizeof() operator
used to know the size of variable*/
cout<<sizeof(x);

/*Type Casting
Change one data type into another*/
//Implicit conversion - done by compiler automatically
int a = 'a';//typecasted into integer value automatically by compiler
cout<<a;//Output will be 97 ASCII value
//Explicit conversion - done manually
int x = 5;
float y = float(x);//typecasting x value into float
cout<<y;//5.00

}