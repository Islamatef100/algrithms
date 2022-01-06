
#include <iostream>
#include<algorithm>
using namespace std;
template<class newtype>
void selection_sort(int size,newtype arr[])
{
    
    for(int i=0;i<size-1;i++)
    {
        
        newtype value=arr[i];
        int min=i;
        for(int t=i+1;t<size;t++)
        {
            if(value>arr[t])
            {min=t;value=arr[t];}
        }
         swap(arr[i],arr[min]);
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
    //template function work without determine the data type in main function.but template in  class not
    //selection sort.
    //this algorithm is stupet if the aray is already sorted it will work also.
    //o(n^2);
    string arr[]={"islam","atef","nagy","abdelhamid","abdelrahman","elnahaas"};
    selection_sort(6,arr);
    print(6,arr);
    
}
