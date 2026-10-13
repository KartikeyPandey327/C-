#include <iostream>
#include <string>
 
using namespace std;

void swapValues(int* a, int* b) {
    if (a != nullptr && b != nullptr) {
        int temp = *a;
        *a= *b ;
        *b= temp ; 

    }
}
int main() {



    /*int* a = 20 ;
    int* b = 10 ;
    int* holds a memory address, not an integer value like 20. Assigning 20 directly 
    means you are telling C++: "Point to memory address #20", which will not compile 
    (or will crash if forced). */

    int a = 20 ;
    int b = 10 ;

    swapValues(&a, &b) ;

    cout<< a<< endl ;
    cout<< b ;

    return 0;


}

       

