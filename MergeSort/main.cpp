/*
 * MergeSort
 *
 *
 * */

#include <iostream>
using namespace std;



template <class T>
void merge(T list1[], T list2[], int left, int mid, int right)
{
    int i, j, k;
    i = left;
    j = mid + 1;
    k = left;
    while((i <= mid) && (j <= right))
    {
        if(list1[i] <= list1[j])
        {
            list2[k++] = list1[i++];
        }
        else
            list2[k++] = list1[j++];
    }


    if(i > mid)
    {
        for(int q = j; q <= right; q++)
            list2[k++] = list1[q];
    }
    else
    {
        for(int q = i; q<= mid; q++)
            list2[k++] = list1[q];
    }
}

template <class T>
void mergeSort(T list1[], T list2[], int left, int right)
{
    if(left < right)
    {
        int mid = (left + right)/2;

        mergeSort(list1, list2, left, mid);
        mergeSort(list1, list2, mid+1, right);

        merge(list1, list2, left, mid, right);

        for(int g = left; g <= right; g++)
            list1[g] = list2[g];
    }

}
int main() {
    //std::cout << "Hello, World!" << std::endl;
    cout<<"MergeSort Test"<<endl;

    int a[] = {10, 5, 9, 4, 3,7, 8,3,7,2};
    int b[10] = {0};


    for(int i = 0; i < 10; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    mergeSort(a,b, 0, 9);

    for(int i = 0; i < 10; i++)
        cout<<a[i]<<" ";


    return 0;
}



/*#include <iostream>
using namespace std;

int a[] = {10,5,9,4,3,7,8};
int b[7];

template <class Type>
void Merge(Type c[],Type d[],int l,int m,int r);

template <class Type>
void MergeSort(Type a[],int left,int right);

int main()
{
    for(int i=0; i<7; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    MergeSort(a,0,6);
    for(int i=0; i<7; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

template <class Type>
void Merge(Type c[],Type d[],int l,int m,int r)
{
    int i = l,j = m + 1,k = l;
    while((i<=m)&&(j<=r))
    {
        if(c[i]<=c[j])
        {
            d[k++] = c[i++];
        }
        else
        {
            d[k++] = c[j++];
        }
    }

    if(i>m)
    {
        for(int q=j; q<=r; q++)
        {
            d[k++] = c[q];
        }
    }
    else
    {
        for(int q=i; q<=m; q++)
        {
            d[k++] = c[q];
        }
    }
}

template <class Type>
void MergeSort(Type a[],int left,int right)
{
    if(left<right)
    {
        int i = (left + right)/2;
        MergeSort(a,left,i);
        MergeSort(a,i+1,right);
        Merge(a,b,left,i,right);//合并到数组b

        //复制回数组a
        for(int g=left; g<=right; g++)
        {
            a[g] = b[g];
        }
    }
}  */