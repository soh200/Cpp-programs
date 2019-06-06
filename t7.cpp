
#include<iostream>
using namespace std;

void swap(int *x ,int *y );

int main()
{
   
    int a,b;
    cout<<"Enter Two Number You Want To Swap: ";
    cin>>a>>b;
    
    swap(&a,&b);
    
 cout<<"After Swapping Numbers Are Given below: ";
    cout<<a<<"   "<<b<<" \n";
    
    return 0;
}
void swap(int *x,int *y)
{
 int z;
 z=*x;
 *x=*y;
 *y=z; 
 
}

