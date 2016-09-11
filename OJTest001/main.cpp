/*#include<iostream>
//#include<cstring>
using namespace std;

int main(){
    char str[5000];
    int num = 0;
    int i = 0;
    cin.getline(str,5000);
    while(str[i] != '\0')
        i++;
    i--;
    while(str[i] ==' ')
        i--;
    while(str[i] != ' '&& i >= 0) {
        i--;
        num++;
    }
    cout<<num<<endl;
    //cout<<i;
    return 0;
}*/


/*#include <iostream>
using namespace std;


int main()
{
    int a = 1, b = 32;
    cout<< (a<<b) << (1<<32);

    return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
    int a = 1, b = 32;
    cout<< (a<<b) << (1<<32);
    return 0;
}