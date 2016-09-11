#include <iostream>
using namespace std;

template <class T>
int binarySearch(T list[], const T & x, int n)
{
    int left, right, mid;
    left = 0;
    right = n-1;
    while(left <= right)
    {
        mid = (left + right) >> 1;
        if(x == list[mid])
            return mid;
        else if(x > mid)
            left = mid + 1;
        else
            right = mid -1;
    }
    return -1;
}


int main()
{
    //std::cout << "Hello, World!" << std::endl;

    int list[10];
    for(int i = 0; i < 10; i++)
    {
        list[i] = 2*i;
        cout<<list[i]<<" ";
    }
    //cout<<list;

    cout<<binarySearch(list, 3, 10);


    return 0;
}