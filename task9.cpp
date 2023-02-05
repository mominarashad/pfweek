#include<iostream>
using namespace std;
float calculatemoney(int age,int price,int pricew);
main()
{
    int age,price,pricew;
    cout<<"enter the age:";
    cin>>age;
    cout<<"enter the price of toy:";
    cin>>price;
    cout<<"enter the price of washing machine:";
    cin>>pricew;
    int result=calculatemoney(age,price,pricew);
    cout<<result;


}
float calculatemoney(int age,int price,int pricew)
{
    
    float toysCount=0;
    float moneySaved=0;
    float birthdayMoney=10.0; 
    float sum=0;
    int even = 1;
    for (int count=1; count<=age; count++)
    {
        if(count % 2 == 0)
        {
            moneySaved = moneySaved+ even *(birthdayMoney );
            moneySaved = moneySaved-1;
            even++;
            
        }    
        else 
        {
            toysCount++;
        }  
    }
        moneySaved =  moneySaved + toysCount*price;
     {   
    if (moneySaved >= pricew)
    {
        float left=moneySaved-pricew;
        cout << "Yes! " << left << endl;
    }
    if (moneySaved < pricew)
    {
        float left=pricew-moneySaved;
        cout << "No! " << left << endl;
    } 
     }
     return moneySaved;   
    
}


    









