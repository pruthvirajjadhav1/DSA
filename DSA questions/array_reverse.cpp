#include <iostream>

using namespace std;

void reverse(int arr[],int left,int right){
    while(left<=right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
}

int main()
{
    int num;
    cout<<"Enter the size of array"<<endl;
    cin>>num;
    int arr[num];
    cout<<"Enter the array"<<endl;
    for(int i;i<num;i++){
        cin>>arr[i];
    }
    reverse(arr,0,num-1);
    
    for(int i;i<4;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}