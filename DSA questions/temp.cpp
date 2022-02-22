#include <iostream>

using namespace std;

class stack{
  public:
  int top;
  int arr[5];
  
  stack(){
      top = -1;
      for(int i=0;i<=5;i++){
          arr[i]=0;
      }
  }
  
  bool isFull(){
      if(top == 5){
          return true;
      }
      else{
          return false;
      }
  }
  
  bool isEmpty(){
      if(top == -1){
          return true;
      }
      else{
          return false;
      }
  }
  
  void push(int data){
      if(isFull()){
        cout<<"stack is full";
      }
      else{
          top++;
          arr[top]=data;
      }
  }
  
  void display(){
      for(int i=5;i>=0;i--){
          cout<<arr[i]<<" ";
      }
  }
    
};

int main()
{
    stack s1;
    s1.push(32);
    s1.push(3);
    s1.push(72);
    s1.display();

    return 0;
}
