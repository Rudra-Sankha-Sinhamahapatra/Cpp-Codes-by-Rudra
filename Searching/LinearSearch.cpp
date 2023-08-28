#include<iostream>
using namespace std;
int linearSearch(int start,int end,int arr[],int target);
int main(){
    
    cout<<"Enter the size of the array ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
     int target;
     cout<<"Enter the element to search ";
     cin>>target;

    int start,end;
    cout<<"Enter the start index ";
    cin>>start;
    cout<<"Enter the end index ";
    cin>>end;
    
    int index=linearSearch(start,end,arr,target);
     if(index!=-1){
      cout<<"Element found at index "<<index;
     }
     else{
      cout<<"Element not found !";
     }
    return 0;
}

 int linearSearch(int start,int end,int arr[],int target){

    for(int i=start;i<=end;i++){
     if(arr[i]==target){
        return i;
     }
     
    }
    return -1;
 }