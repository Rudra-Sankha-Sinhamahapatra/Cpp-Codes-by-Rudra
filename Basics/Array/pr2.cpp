#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int& x:a){
        cin>>x;
    }
    cout<<"The elements of the array"<<endl;
    for(int x:a){
        cout<<x<<endl;
    }
    return 0;
}