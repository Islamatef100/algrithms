/*---------------------------------------o(log n)-----------------------------------------------*/
/*---------------------------------------o(log n)-----------------------------------------------*/
/*---------------------------------------o(log n)-----------------------------------------------*/
/*---------------------------------------o(log n)-----------------------------------------------*/
/*---------------------------------------o(log n)-----------------------------------------------*/
/*---------------------------------------o(log n)-----------------------------------------------*/
/*-----------------------------------must be sortd-----------------------------------------------*/
/*-----------------------------------must be sortd-----------------------------------------------*/
/*-----------------------------------must be sortd-----------------------------------------------*/
/*-----------------------------------must be sortd-----------------------------------------------*/
/*-----------------------------------must be sortd-----------------------------------------------*/
/*-----------------------------------must be sortd-----------------------------------------------*/
/*-----------------------------------must be sortd-----------------------------------------------*/
/*-----------------------------------must be sortd-----------------------------------------------*/
/*-----------------------------------must be sortd-----------------------------------------------*/
//this algorithm for search at element but by binary search to get o(n) complexity.
//i write this algorithm at array normal
//this algorthm easy at tree beacouse binary search tree already builded at this idea of binary search.
#include <iostream>
using namespace std;
template<class Newtype>
int binary_search(Newtype arr[],int first,int last,Newtype element )
{
    if(first<=last)//this condition is the condition of stop recursion if element not exist.
    {
        int new_index_for_search=((last-first)/2)+first;
        if(element==arr[new_index_for_search])
            return new_index_for_search;
        else if(element>arr[new_index_for_search])
        {
            // first=new_index_for_search+1; write it in function.
            // new_index_for_search=((last-first)/2)+first;
            return binary_search(arr, new_index_for_search+1, last,element);
            //this return in call up recursion to when ifound the element or i known it not exist dont do any thing again and return al recursion without continue any rcursion from previouse recursion but if i want do any thing again from previouse dont write retutn in call up recursion .
        }
        else
        {
            // last=new_index_for_search-1; write it in function.
            return binary_search( arr, first,new_index_for_search-1, element );
        }
    }
    else
        return -1;
    /*
     last-first/2  to move at new element
     ((last-first)/2)+i    +i==> to move at new element in next round.
     */
}
int main()
{
    int size;
    cout<<"enterthe size of array\n";
    cin>>size;
    auto elements=new int[size];
    for(int i=0;i<size;i++)
    {cout<<"enter element "<<i<<":";cin>>elements[i];}
    cout<<"enter the element which you wanted it:";
    int element;
    cin>>element;
    if( binary_search(elements, 0, size-1, element)>=0)//>1 becouse index in array minus 1 from u know.
        cout<<"element is exist.\n";
    else
        cout<<"element not xist.\n";
}








/*
//this another idea with little changes
 #include <iostream>
 using namespace std;
 template<class Newtype>
 bool binary_search(Newtype arr[],int first,int last,Newtype element )
 {
 int new_index_for_search;
 new_index_for_search =((last-first)/2)+first;
 if(last==first==new_index_for_search)
 {cout<<"no\n"; return false;}
 else
 {cout<<"yes\n";return true;}
 
 if(element==arr[new_index_for_search])
 return true;
 else if(element>arr[new_index_for_search])
 {
 first=new_index_for_search+1;
 // new_index_for_search=((last-first)/2)+first;
 return binary_search( arr, first, last, element );
 }
 else
 {
 last=new_index_for_search-1;
 return binary_search( arr, first, last, element );
 }
 last-first/2  to move at new element
 ((last-first)/2)+i    +i==> to move at new element in next round.
}
int main()
{
    int size;
    cout<<"enterthe size of array\n";
    cin>>size;
    auto elements=new int[size];
    for(int i=0;i<size;i++)
    {cout<<"enter element "<<i<<":";cin>>elements[i];}
    cout<<"enter the element which you wanted it:";
    int element;
    cin>>element;
    if( binary_search(elements, 0, size-1, element))
        cout<<"element is exist.\n";
    else
        cout<<"element not xist.\n";
}
*/
