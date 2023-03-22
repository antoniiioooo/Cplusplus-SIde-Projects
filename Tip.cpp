//This program askes user to enter the amout of their bill and how many people are spitting the bill and 
// how much they would like to leave in percentage and it will output the amount of tip and it will be splitted 
// between those who are going to pay.


#include <iostream>
using namespace std; 


int main ()
{
    string response; 

    cout << "Would you like to tip? ";
    cin >> response; 
    
    return 0;

}

void amountTip(string response )
{
    if(response == ' yes ' & 'Yes')
    {
        int num1, num2;
        cout << " Enter the amout on the bill: ";
        cin >> num1; 

        cout << "What percentage would you like to leave for tip: ";
        cin >> num2; 
        
        int total; 
                 
    }

}

