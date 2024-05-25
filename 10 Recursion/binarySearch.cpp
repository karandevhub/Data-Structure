#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s, int e,int element){
   
    if(s>e)
        return false;
    int mid = s+(e-s)/2;

    if(arr[mid]==element)
        return true;
    else if(arr[mid]>element)
        return binarySearch(arr,s,mid-1,element);
    else if(arr[mid]<element)
        return binarySearch(arr,mid+1,e,element);
}

int main(){

    int arr[] = {1,4,8,10,12,17,30,54};
    int s = 0; // Start index should be 0
    int e = sizeof(arr)/sizeof(arr[0]) - 1;
   
    int element=12;
    bool x=binarySearch(arr,s,e, element);

    if(x==true)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;





    return 0;
}