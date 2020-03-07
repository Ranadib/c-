/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>

using namespace std;


    int calc_sum(int nb1,int nb2,int nb3){
    int sum;
    sum = nb1 + nb2 + nb3;
    return sum;}

float calc_average(int sum){
    float avg;
    avg = sum / 3;
    return avg;
}

void print_out(int sum, float average){
    cout << "the sum is:  "<<sum;
    cout << "the average is:  "<<average;
}


int main()
   
{    int sum,nb1,nb2,nb3;
    cout << "please enter a first number:   ";
    cin >> nb1;
    cout << "please enter a second number:  ";
    cin >> nb2;
    cout << "please enter a therty number:  ";
    cin >> nb3;

    sum = calc_sum( nb1, nb2, nb3);
    float avg = calc_average( sum);
    print_out( sum,  avg);
    
    return 0;
}
