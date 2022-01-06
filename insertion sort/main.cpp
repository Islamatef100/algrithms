//mohamed shoshan course data strucure.
#include <iostream>
#include<algorithm>
using namespace std;
//this algorithm not perfect in nprmal arrray but perfect in linked list.
template<class newtype>
void shift_insertion_sort(int _begin,int _end,newtype arr[])
{
    newtype x=arr[_end];
    for(int i=_end;i>_begin;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[_begin]=x;
}
template<class newtype>
void insertion_sort(int size,newtype arr[])
{
    //{10,29,7,1,9,30};
    for(int i=0;i<size-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            for(int t=0;t<=i;t++)
            {
                if(arr[i+1]<arr[t])
                {
                    shift_insertion_sort(t,i+1,arr);
                    continue;
                }
            }
        }
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
    //insertion sort. smart but if array not sorted and need more to be sorted it no suitable
    //o(n^2) in worse case o(n^2)+o(n^2);
    //this algorithm  always use in linked list becouse linked list dont need to do shift but in array i must do shift and it take long time.
    string arr3[]={"islam","atef","nagy","abdelhamid","abdelrahman","elnahaas"};
    insertion_sort(6,arr3);
    print(6, arr3);
    
    
    
}
