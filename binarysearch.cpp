#include<iostream>
using namespace std;
int binarysearch(int arr[],int target,int sz){
    int start=0;
    int end=sz-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(target>arr[mid]){
            start=mid+1;
        }
        else if(target <arr[mid]){
            end=mid-1;
        }
        else
            return mid;
    }
    return -1;
}
int main(){
    int arr[]={-1,0,3,4,5,9,12};
    cout<<binarysearch(arr,12,7)<<endl;
   
