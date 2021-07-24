#include<iostream>
using namespace std;

void bubblesort(int arr[]){
    for(int i=0;i<5;i++){
        for(int j=0;j<(5-i-1);j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

int main(){
    int arr[5]={4,2,1,3,5};
    bubblesort(arr);

    for(int i;i<5;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}