 #include<iostream>
using namespace std;
int totaldigits(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    int totaldigit=totaldigits(number);
    cout<<"digits are:"<<totaldigit;
}
int totaldigits(int number)
{
    int counter=0;
    while(number>0)
    {
        number=number/10;
        counter=counter+1;
    }
    return counter;
     
}