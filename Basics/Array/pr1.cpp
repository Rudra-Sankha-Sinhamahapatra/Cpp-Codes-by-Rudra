#include<iostream>
using namespace std;

int main(){
    int a[4]={1,2,3,4};
    for (int i = 0; i < 4; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<sizeof(a)<<endl;
    //for-each loop
    for (int x:a)
    {
        cout<<x<<endl;
    }
    
    return 0;
}