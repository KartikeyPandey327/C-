#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int number,i;

    cout<<"Enter the number:";
    cin>>number;

    for (i=1; i<=10 ; i=i+1) {
        cout<<number<<" x "<<i<<" = "<<number*i<<endl;

    }

    return 0;

}