//mohamed shoshan course data strucure.
#include <iostream>
#include<algorithm>
using namespace std;
template<class newtype>
void bubble_sort(int size,newtype arr[])
{
    for(int i=0;i<size-1;i++)
    {
        int x=0;
        for(int t=size-1;t>i;t--)
        {
            if(arr[t]<arr[t-1])
            {
                swap(arr[t],arr[t-1]);
                ++x;
            }
        }
        if(x==0)
            return;
        else x=0;
    }
}
template<class newtype>
void print(int size,newtype arr[])
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    //more smart;
    //in worse case o(n^2) but this algorithm smart dont work if array is sorted.
    int arr2[]={10,29,7,1,9,30};
      bubble_sort(6,arr2);
      print(6, arr2);
    
    
    
}
