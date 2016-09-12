#include <iostream>
using namespace std;

int fibnacciPolynomial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return fibnacciPolynomial(n - 1) + fibnacciPolynomial(n - 2);
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    cout<<"Fibnacci Polynomial Test"<<endl;

    int n = 20;
    for(int i = 0; i < n; i++)
    {
        cout<<fibnacciPolynomial(i)<<" ";
        if(i % 10 == 0)
            cout<<endl;
    }
    return 0;
}