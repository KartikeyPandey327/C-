#include <iostream>
#include <string>

using namespace std;

double celsius_to_fahrenheit(double celsius) {

    double answer=(celsius * 1.8) + 32;
    return(answer);

}

int main() {
    double celsius;

    cout<<"Enter the temperature in degree celsius : ";
    cin>>celsius;
    
    cout<<celsius_to_fahrenheit(celsius);
    return 0;
    


}