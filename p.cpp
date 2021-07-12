#include <iostream>
using namespace std;

int main()
{
    int a=5;
    int *p=&a;
    int **q=&p;
    cout<<a<<"\t"<<*p<<"\t"<<**q<<endl;
    cout<<&a<<"\t"<<p<<"\t"<<*q<<endl;
    cout<<&p<<"\t"<<q<<endl;
}
