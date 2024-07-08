#include <iostream>
using namespace std;



void printarray(int arr[],int n){
        for (int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}

void alternate_swap(int arr[],int n){
    for (int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}


int main(){

    int arr[6]={1,2,3,4,5,6};
    alternate_swap(arr,6);
    printarray(arr,6);
    return 0;
}