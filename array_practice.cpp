#include <iostream>
#include <string>

using namespace std;

int main() {

    int sum=0;// used brain for this step jo aage kaam aayega

    int numbers[5]={10,20,30,40,50} ;// highlight of the code
     
    cout<<"The sum of the array is : ";

    

    for (int i=0 ; i<5; i=i+1 ) { /// used for loop for extra clearity 

        sum = numbers[i]+sum; // jo sum=0 kiya tha vo yahan ke liye.. nhi to (sum=50) print ho rha tha       

    }    

    cout<<sum; // sun ki value print ki 
    
    return 0;

    




}

    
