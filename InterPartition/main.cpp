/*
 *
 *
 *
 * */


#include <iostream>
using namespace std;

int intPartition(int n, int m)
{
    if(n < 1 || m < 1)
        return 0;
    else if(n == 1 || m == 1)
        return 1;
    else if(n < m)
        return intPartition(n, n);
    else if(n == m)
        return intPartition(n, n-1) + 1;
    else
        return intPartition(n, m-1) + intPartition(n-m, m);
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    for(int i = 1; i < 10; i++)
    {
        cout<<i<<" "<<intPartition(i, i)<<endl;
    }
    return 0;
}