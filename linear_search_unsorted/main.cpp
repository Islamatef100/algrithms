//linear search
//i write the code from my understanding the algorithm and i can write it by any data type not just array.
//o(n);
#include <iostream>
using namespace std;
bool linear_search(int arr[],int size,int data)
{
    bool exist_or_not=false;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==data)
        {   exist_or_not=true;
            break;
        }
    }
    return exist_or_not;
}
int main()
{
    int size,data=0;
    cout<<"enter size of array:";
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++)
    cin>>arr[i];
    cout<<"enter the ellement:";
    cin>>data;
  if(linear_search(arr,size,data))
      cout<<"the ellement exist:\n";
    else
        cout<<"the ellement not exist:\n";
}
