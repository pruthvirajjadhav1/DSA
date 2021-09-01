#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    } 
    temp->next = n;
}

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

bool search(node* &head,int val){
    node* temp=head;
    while(head!=NULL){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void DeleteAtHead(node* &head){
    node* temp=head;
    head=head->next;
    delete temp;
}

void Deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        DeleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<"->";
        temp = temp ->next;
    }
    cout <<"NULL" <<endl;
}

int main(){

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,6);
    display(head);
    cout<<search(head,2)<<endl;
    Deletion(head,3);
    display(head);
    DeleteAtHead(head);
    display(head);

return 0;
}