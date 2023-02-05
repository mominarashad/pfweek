#include<iostream>
using namespace std;
int totaldigits(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    int result=totaldigits(number);
    cout<<"total digit is:"<<result;
}
int totaldigits(int number)
{
    int num =0;
    while(number>0)
    {
      number=number/10;
     num=num+1;

    }
    return num;
}