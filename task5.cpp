#include<iostream>
using namespace std;
void printTable(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    printTable(number);

}
void printTable(int number)
{
  int i;
for(i=1; i<=10; i++)
{
   cout<<number<<"*"<<i<<"="<<number*i<<endl; 
    
}
  
}











