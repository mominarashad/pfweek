#include<iostream>
using namespace std;
void count(float number, float lines);


main()
{
    float lines;
    float number;
    cout << "Enter Number of lines: ";
    cin >> lines;
    count(number, lines);     
}


void count(float number, float lines)
{
    float countP1=0;
    float countP2=0;
    float countP3=0;
    float countP4=0;
    float countP5=0;
    for(float count=0; count < lines; count++)
    {
        cout << "Enter number: ";
        cin >> number;
        
        
        if(number < 200)
        {
            countP1=countP1+1;
        }
        
        else if(number >= 200 && number <= 399)
        {
            countP2=countP2+1;
        }
        
        else if(number >= 400 && number <= 599)
        {
            
            countP3=countP3+1;        
        }
            
        else if(number >= 600 && number <= 799)
        {

             
            countP4=countP4+1;        
        }
           
        else if(number > 800)
        {
            
            countP5=countP5+1;        
        }  
    }
        float percentage1;
        
        percentage1=(countP1*100.0)/lines;
        cout << percentage1 << "%" << endl; 
    
    

        float percentage2;
        percentage2=(countP2*100.0)/lines;
        cout << percentage2 << "%" << endl;


        float percentage3;
        percentage3=(countP3*100.0)/lines;
        cout << percentage3 << "%" << endl;        
        

        float percentage4;
        percentage4=(countP4*100.0)/lines;
        cout << percentage4 << "%" << endl;        
    

        float percentage5;
        percentage5=(countP5*100.0)/lines;
        cout << percentage5 << "%" << endl;
     
}


