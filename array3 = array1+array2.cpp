/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    int size;
    
    cout<<"Pleaze enter the size";
    cin>>size;
    
    int array1[size];
    int array2[size];
    int array3[size];
    int sum;
    
    for(int i = 0; i<size;i++){
        cin>>array1[i];
    }
        
    for(int i = 0; i<size;i++){
        cin>>array2[i];
    }
        
    for(int i = 0; i<size;i++){
        sum = 0;
        sum = array1[i] + array2[i];
        array3[i] = sum;}
    
    for(int i = 0; i<size;i++){
        cout<<array3[i]<<" ";}
    return 0;
}
