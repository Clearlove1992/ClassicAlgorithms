#include <iostream>
using namespace std;

int a[] = {5, 7, 3, 4, 8, 6, 9, 1, 2,5,7,10};

template <class T>
void tSwap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <class T>
int partition(T a[], int p, int r)
{
    //set the key value;
    T temp = a[p];
    int i, j;
    i = p;
    j = r;
    while(i < j)
    {
        while(a[j] >= temp && j > i)
            j--;
        while(a[i] <= temp && i < j)
            i++;
            //
        // tSwap(a[i], a[j]);
        if(i < j)
            tSwap(a[i], a[j]);
    }
    //tSwap(a[i],)
    a[p] = a[j];
    a[i] = temp;
    return i;

}

template <class T>
void quickSort(T a[], int p, int r)
{
    if(p < r)
    {
        int mid = partition(a, p, r);
        quickSort(a, p, mid-1);
        quickSort(a, mid+1, r);
        return ;
    }
    return ;
}


int main() {
    //
    cout<<"Quick Sort Test"<<endl;
    for(int i = 0; i < 12; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    quickSort(a,0,11);
    for(int i = 0; i < 12; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}