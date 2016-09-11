/*
 *
 *
 *
 * */
#include <iostream>
using namespace std;

template <class T>
void Tswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

/*
 * m+1 the length of list[]
 * k the start of permutation location
 * */
template <class T>
void permutation(T list[], int k, int m)
{
    if(k == m)
    {
        for(int i = 0; i <= m; i++)
        {
            cout<<list[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i = k; i <= m; i++)
        {
            Tswap(list[k],list[i]);
            permutation(list, k+1, m);
            Tswap(list[k],list[i]);
        }
    }
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    cout<<"Permutation Test"<<endl;
    int list[3];
    for(int i = 0; i < 3; i++)
    {
        list[i] = 2*i +1;
    }
    permutation(list, 0, 2);
    return 0;
}