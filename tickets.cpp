#include <iostream>
#include <string>

using namespace std;


int main(){
    int age;

    cout<<"Welcome to our Cinema \n";
    cout<<"Please enter your age :";
    cin>>age;
    if (age<=12) {
        cout<<"You have to pay 100Rs..";
    } else if (12<=age<=60){
        cout<<"You have to pay 150Rs..";
    } else{
        cout<<"You have to pay 120Rs..";
    }

    return 0;

    }



