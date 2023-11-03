/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
struct person{
    int age;
    
};
int main()
{
    struct person *ptr, p2;
    ptr=&p2;
    cin>>(*ptr).age;
    cout<<(*ptr).age;
    return 0;
};