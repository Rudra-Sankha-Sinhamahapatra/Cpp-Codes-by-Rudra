#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};


int main(){
  struct  Rectangle r;
cout<<"Enter the length of the rectangle"<<endl;
cin>>r.length;
cout<<"Enter the breadth of the rectangle"<<endl;
cin>>r.breadth;
cout<<"The area of the rectangle is "<<r.length*r.breadth<<endl;  
    return 0;
}