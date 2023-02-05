#include<iostream>
using namespace std;


 main()
{    int number;
     cout<<"enter the number:";
     cin>>number;
    int previous=0;
    int current=1;
    int next;
    cout<<previous<<","<<current;
   for(int count=1; count<=number-2; count=count+1)
   { 
    
     next=previous+current;
     cout<<","<<next;
    previous=current;
    current=next;
   }
   
   

}