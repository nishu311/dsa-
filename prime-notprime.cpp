// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
        cout<<"not prime"<<endl;
    }
    else{
        cout<<"prime for"<<i<<endl;
    }
    // Write C++ code here
       i=i+1;
    

    }    
}