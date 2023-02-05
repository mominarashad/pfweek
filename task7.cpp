#include<iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2,int result1);
main()
{
    int number1,number2;
    cout<<"enter the number:";
    cin>>number1;
    cout<<"enter the number:";
    cin>>number2;
    int result1=calculateGCD(number1,number2);
    cout<<"HCF is:"<<result1;
    int result2=calculateLCM(number1,number2, result1);
    cout<<"LCM is:"<<result2;

}
int calculateGCD(int number1, int number2)
{
   while(number1!=number2 )
   {
    if( number1>number2)
    {
    number1=number1-number2;
    }
    else 
    {
    number2=number2-number1;
    }
     
   }
   return number1;

}
int calculateLCM(int number1, int number2,int result1)
{
    int lCM=(number1*number2)/result1;
    return lCM;
}