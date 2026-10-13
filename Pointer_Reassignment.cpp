#include <iostream>

using namespace std;

int main() {

    int val1 = 10 ;
    int val2 = 20 ;

    int* ptr = &val1;
    
    cout<<"The value of val1 is : "<<val1<<endl;
    *ptr=100;
    cout<<"The value of val1 after changing is : "<<val1<<endl;
    cout<<ptr<<endl;
    

    ptr = &val2;

    cout<<"The value of val2 is : "<<val2<<endl;

    *ptr = 200;

    cout<<"The value of val2 after chaning is : "<<val2<<endl;

}
/*
#include <iostream>

using namespace std;

int main() {
    int val1 = 10;
    int val2 = 20;

    // 1. ptr points to val1
    int* ptr = &val1;
    cout << "The value of val1 is: " << val1 << endl;

    // Value update via dereference (*)
    *ptr = 100;
    cout << "The value of val1 after changing is: " << val1 << endl;

    // 2. Naya pointer nahi banaya! ptr ka address reassign kar diya val2 pe:
    ptr = &val2;

    cout << "The value of val2 is: " << val2 << endl;

    // Ab wahi ptr val2 ki value change karega
    *ptr = 200;
    cout << "The value of val2 after changing is: " << val2 << endl;

    return 0;
}
    */
   