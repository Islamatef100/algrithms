// code of algorithm quick sort.from mohamed shoshan.
// in this algorithm i make every element smaller from next element and larger from previos element.not from enternet.
//this algorithm i write it
//o(n^2)
//not smart ass bublle sort .
#include <iostream>
using namespace std;
template<class ItemType>//to make code more valiable for any type
void swap_help_quick_sort(ItemType arr[],int high,int low)
{
    ItemType x=arr[high];
    arr[high]=arr[low];
    arr[low]=x;
}
template<class ItemType>
void quick_sort(ItemType arr[],int siz)
{
    for(int i=0;i<siz-1;i++)
    {
        for(int t=siz-1;t>i;t--)
        {
            if(arr[i]>arr[t])
                swap_help_quick_sort(arr, t, i);
        }
    }
}
int main()
{
    int array_numpr;
    cout<<"entr the number of array number:";
    cin>>array_numpr;
    string *data=new string[array_numpr];// i can make array any type
    for(int i=0;i<array_numpr;i++)
    {
        cout<<"enter the element number "<<i<<":"<<endl;
        cin>>data[i];}
    quick_sort(data,array_numpr);
    for(int i=0;i<array_numpr;i++)
    cout<<data[i]<<" "<<endl;
}
