#include <iostream>
#include <map>
using namespace std;

int fibnacciPolynomial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return fibnacciPolynomial(n - 1) + fibnacciPolynomial(n - 2);
}

int fibnacciPolynomialImprovement(int n, map<int, int> storageMap)
{
    if(n == 0 || n == 1)
        return 1;
    else
    {
        auto iter = storageMap.find(n);
        if(iter == storageMap.end())
        {
            int temp = fibnacciPolynomialImprovement(n - 1, storageMap) + fibnacciPolynomialImprovement(n-2, storageMap);
            storageMap.insert(pair<int,int>(n, temp));
            return temp;
        }
        else
            return iter->second;
    }
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    cout<<"Fibnacci Polynomial Test"<<endl;

    int n = 40;
    //int model = 1;
    map<int, int> myMap;
    for(int i = 0; i < n; i++)
    {
        //cout<<fibnacciPolynomial(i)<<" ";

        //the improvement of fibnacciPolynomial;
        cout<<fibnacciPolynomialImprovement(i, myMap)<<" ";
        if(i % 10 == 0)
            cout<<endl;
    }

    return 0;
}