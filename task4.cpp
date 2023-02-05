#include<iostream>
using namespace std;
int digitsum(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    int result=digitsum(number);
    cout<<result;
}
int digitsum(int number)
{
  int sum=0;
  int q1;
  while(number>0)
  {
     q1=number%10;
     sum=sum+q1; 
      number=number/10;
  }
  
  return sum; 
}
   



