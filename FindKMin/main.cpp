#include <iostream>
using namespace std;

template <class T>
void tSwap(T & x, T &y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

template <class T>
T kMin(T a[], int left, int right, int k)
{
    int i, j;
    T tmp;
    i = left;
    j = right;
    tmp = a[left];
    while(i < j)
    {
        while(a[j] >= tmp && j > i)
            j--;
        while(a[i] <= tmp && i < j)
            i++;
        if(i < j)
        {
            tSwap(a[i], a[j]);
        }
    }
    a[left] = a[i];
    a[i] = tmp;


    if((i + 1) == k)
        return a[i];
    else if((i + 1) < k)
        return kMin(a, i+1, right, k);
    else
        return kMin(a, left, i-1, k);
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    cout<<"Find K Min Test";
    int a[] = {1, 9, 1, 7, 6,2, 9, 8, 5, 5};
    for(int i = 0; i < 10; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    int k = 4;
    int theKMin = kMin(a,0,9,k);
    cout<<theKMin;
    return 0;
}