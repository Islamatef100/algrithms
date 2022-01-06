
#include <iostream>
using namespace std;
template<class Newtype>
bool linear_search(Newtype arr[],int size,Newtype data)
{
    int i=0;
   // bool exist_or_not=false;
    for(i;;i++)
    /* i removed i<size becouse i added the element in the end of array by whn i creat array iincreases the size by 1 and in for loab it will  fint the ellement after for loap i check if i==size the the code found the element which i added it so the element in this condition will not exist.*/
    {
        if(arr[i]==data)
        {  // exist_or_not=true;
            break;
        }
        if(data<arr[i])
        {
            i=size;//to make algorithm know that this ellement not exist.
            break;
        }
    }
    return 1 ?i!=size:0;// i mean here if(i!=size)return 1 else return 0;
}
int main()
{
    int size,data=0;
    cout<<"enter size of array:";
    cin>>size;
    int *arr=new int[size+1];
    for(int i=0;i<size;i++)
    cin>>arr[i];
    cout<<"enter the ellement:";
    cin>>data;
    arr[size]=data;
  if(linear_search(arr,size,data))
      cout<<"the ellement exist:\n";
    else
        cout<<"the ellement not exist:\n";
}
