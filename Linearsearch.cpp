/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int linearsearch(int size,int *arr,int element){
    bool found=false;
    int i=0;
    for(;i<size;i++){
        if(arr[i]==element){
            found=true;
            return i;
        }
    }
    if(!found){
        cout << "Element not found";
    }
}

int main(){
    int arr[10]={5,7,9,10,15,20,25,67,190,200};
    int address=linearsearch(10,arr,67);
    cout<<"Element at :"<<address+1;
    return 0;
}
/*
Output:-
Element at :8
*/
