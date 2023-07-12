#include<iostream>
#include<stdio.h>

using namespace std;
int Area(int length,int breadth){
 int a;
 a=length*breadth;
}
int Peri(int length,int breadth){
    int p;
    p=2*(length+breadth);
}
int main(){
    int length=0,breadth=0;
    printf("Enter length and breadth");
    cin>>length>>breadth;
    int area=length*breadth;
     int peri=2*(length+breadth);
     int a=Area(length,breadth);
     int p=Peri(length,breadth);
     printf("Area=%d\n Perimeter=%d\n",a,p);
    printf("Area=%d\nPerimeter=%d\n",area,peri);
    return 0;
}