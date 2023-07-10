#include<iostream>
using namespace std;

int main(){
    
  int a[5]={2,3,4,5,6};
  int *p;
  p=&a[0];
  cout<<p<<endl;
    cout<<*p<<endl;
    return 0;
}