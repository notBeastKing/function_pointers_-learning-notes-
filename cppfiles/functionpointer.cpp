#include<iostream>
#include<stdlib.h>

using namespace std;

void hello()
{
    cout<<"hallooo"<<"\n";
}
void print(int junk)
{
    cout<<"bingus is learning"<<"\n";
    cout<<"printing junk : "<<junk<<"\n";
}
int main()
{
    typedef void(*typefucntion)(int); //this is called typedef giving a different name to a data type
                                      // we put int in the brackets to specify what type it can take in 
    typedef void(*typefucntion1)();

    hello();//how we normall call functions

    auto function1 = &hello; // this is called a function pointer
                            // we are assigning the memory address of the function hello to the variable function
    // auto <variable_name> = &<function_name>;


    int b = 9;   //this is how we normall create a pointer
    int *a = &b;

    auto function5 = &print;
    void(*function2)(int a) = &print; // function are of the type void(*<variable _ name);
    typefucntion1 function3 = hello;
    typefucntion function4 = print;

    function3();  //now we can call the same print functions with a different name :)
    function4(5);

    return 0;
}