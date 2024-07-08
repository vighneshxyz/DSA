#include <iostream>
using namespace std;

bool linear_search(int arr[],int key,int size){
    for (int i=0;i<size;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int arr[5]={45,89,56,-89,566};
    int key=56;
    cout<<linear_search(arr,0,5);

    return 0;
}