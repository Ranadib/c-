/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
//a C++ program to find the largest two elements in an array. 
using namespace std;

int main()
{   int number;
    int array[5] = {3,6,1,9,5};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if (array[j]>array[i]){
            number = array[i];
            array[i] = array[j];
            array[j] = number;
            }
        }
    }
    
    for(int i=0;i<5;i++){
    cout<<array[i]<<"\t";}
    
    cout<<"\n";
    
    cout<<"the largest two elements in an array:"<<array[0]<<"\t"<<array[1];
    return 0;
}
