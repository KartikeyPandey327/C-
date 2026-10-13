#include <iostream>
#include <string>

using namespace std;

int main(){

    int size;
    cout<<"Enter the number of items : ";
    cin>>size;

    string items[size] ; // is array me kitne items hoge yeh decide kar liya maine 
    double price[size] ; 

    for(int i=0 ; i<size ; i++){
        cout << "Enter name of item : ";
        cin >> items[i]; // Store input directly into index i
        cout << "Enter the price of the item : ";
        cin >> price[i];
        cout<<endl;

    }
    
    cout<<endl<<"***Bill***"<<endl; // acha dikhna chahiye n isiliye 


    for( int i=0 ; i<size ; i++){
        cout<<items[i]<<" = "<<price[i]<<endl;
    }
    
    double total_bill=0; // assing the value of the bill to add the price latter

    for (int i=0 ; i<size ; i++){
        total_bill = price[i] + total_bill ;
    }
    cout<<endl<<"Your total is : "<<total_bill; 


}