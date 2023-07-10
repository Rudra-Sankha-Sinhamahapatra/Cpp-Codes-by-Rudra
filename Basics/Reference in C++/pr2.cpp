#include<iostream>
using namespace std;
struct Rectangle{
int length;
int breadth;
};
int main(){
    //we will use dot here
    Rectangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    //we will  use arrow here
    Rectangle *p=&r;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}