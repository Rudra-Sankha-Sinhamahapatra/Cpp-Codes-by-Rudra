#include<iostream>
using namespace std;
int goodcode(int a,int b){
    
    return a%b;
        

 }

int main(){
    int c,d;
    cout<<"First number is \n";
    cin>>" ">>c;
    cout<<"Second number is \n";
    cin>>" ">>d;

    
    cout<<"coding is necessary for placements\n";
int e=goodcode(c,d);
    cout<<"The remainder is "<<e;
    return 0;
}
 
 