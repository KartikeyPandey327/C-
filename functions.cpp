#include <iostream>
#include <string>

using namespace std;

double times_2(double number) {
    double answer = number*2;
    return(answer);

}

int main() {
    int number;
    cout<<"Enter the number which you want to get multiplied by 2 : ";
    cin>>number;
    cout<<"Your answer is : "<<times_2(number);
    return 0;




}