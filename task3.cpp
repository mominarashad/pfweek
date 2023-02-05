#include<iostream>
using namespace std;
int frequencychecker(int number,int digit);
main()
{
    int number;
    int digit;
    cout<<"enter the number:";
    cin>>number;
    cout<<"enter the digit:";
    cin>>digit;
    int frequency=frequencychecker(number,digit);


}
int frequencychecker(int number,int digit)
{
    int i,j,freq;
    int rem;
   for (i = 0; i < 10; i++) 
    {
        cout << "The frequency of " << i << " = ";
        freq = 0;
        for (j = number; j > 0; j = j / 10) 
        {
            rem = j % 10;
            if (rem == i) 
            {
                freq++;
            }
        }
        cout << freq << endl;
    }

 
    return freq;
}