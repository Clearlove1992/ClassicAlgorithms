#include <iostream>
#include <string>
#include<vector>
#include<algorithm>


using namespace std;


/*int main(){
    //int m, n = 0;
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
}*/
/*
int main()
{
    string str,str1;

    //getline(cin,str);
    //cin>>str;
    //cout<<str<<endl;
    //while(getline(cin,str))
    while(cin>>str)
    {
        cin>>str1;
        //getline(cin,str1);
        cout<<str<<' '<<str1<<endl;
        //cin.ignore();
    }
    return 0;
}*/
struct Student{
    int grades;
    string str;
};
bool comp1(Student &a, Student &b)
{
    return a.grades > b.grades;
}
bool comp2(Student &a, Student &b)
{
    return a.grades < b.grades;
}


int main()
{
    vector<Student> myStu;
    for(int i = 0 ; i < 5; i++) {
        string name;
        int grade;
        Student single;
        cin >> name;
        cin >> grade;
        single.grades = grade;
        single.str = name;
        myStu.push_back(single);
    }

    vector<Student>::iterator iter;
    for(iter = myStu.begin(); iter != myStu.end(); iter++)
    {
        cout<<iter->str<<' '<<iter->grades<<endl;
    }

    sort(myStu.begin(),myStu.end(),comp2);



    for(int i = 0; i < myStu.size(); i++)
    {
        cout<<myStu[i].str<<' '<<myStu[i].grades<<endl;
    }
}