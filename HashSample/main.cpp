#include <iostream>

using namespace std;


int main()
{
    int Num;
    int a[1000] = {0};
    while(cin>>Num)
    {
        for(int i = 0; i < Num; i++)
        {
            int random;
            cin>>random;
            a[random-1]++;
        }
        for(int i = 0; i < 1000; i++)
        {
            if(a[i] != 0)
            {
                cout<<i+1<<endl;
                a[i] = 0;
            }
        }
    }
    return 0;
}