#include <iostream>
using namespace std;
int main()// prime no printing
{
   int d = 6;
    int n;
    bool divided = false;
    cin >> n ;
    
    while (d<n){
        if (n==0){
           cout<< "PM"<< endl;
           divided = true;
        }
        d=d+1;
    }
    if (!divided){
        cout<<"prome no";
    }
}
