#include<iostream>
using namespace std;

struct Listnode{
    int data;
    struct Listnode* next;
};
int listlength(struct Listnode*head);
int main(){
    //creating nodes
    Listnode* head=new Listnode{10,nullptr};
    Listnode* second= new Listnode{20,nullptr};
    Listnode* third=new Listnode{49,nullptr};
    Listnode* fourth=new Listnode{44,nullptr};
    head->next=second;
    second->next=third;
    third->next=fourth;
    
    cout<<"first node data:"<<head->data<<endl;
    cout<<"second node data:"<<head->next->data<<endl;
    cout<<"third node data:"<<second->next->data<<endl;
    cout<<"fourth node data:"<<third->next->data<<endl;
    cout<<"the list of node is:"<<listlength(head);//here we are passing the argument head so that the function know that count start from the head

}
//traversing
int listlength(struct Listnode*head){
    int count=0;
    struct Listnode*current=head;
    while(current!=NULL){
        count++;
        current=current->next;
    }
    return count;


}