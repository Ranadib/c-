/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   
    int number;
    int factorial = 1;
    cout << "please enter the number:";
    cin >> number;
    
    if (number<0)
    {
        cout<<"please enter the new number:";
    }
    
    else
    {
        
        for (int i = 1; i <= number; i++){
        factorial = factorial * i;} 
    }
    
    cout << "the factorial is:" << factorial;
    return 0;
}
