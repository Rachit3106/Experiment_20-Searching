/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/

#include <iostream>
using namespace std;

int binarysearch(int size,int *arr,int element){
    int left=0,right=size-1,mid;
    while(left<=right){
        mid=left+(right-left)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(element<arr[mid]){
            right=mid-1;
        }
        else if(element>arr[mid]){
            left=mid+1;
        }
    }
}

int main(){
    int arr[10]={5,7,9,10,15,20,25,67,190,200};
    int address=binarysearch(10,arr,25);
    cout<<"Element at :"<<address+1;
    return 0;
}

/*
Output:-
Element at :7
*/
