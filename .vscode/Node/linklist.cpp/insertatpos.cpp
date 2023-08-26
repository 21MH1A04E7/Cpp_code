#include<iostream>
using namespace std;
class Node{
    public:
    int data;//data of nodes
    Node* next;//ponter of nodes .which point the address of next nodes
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
//for head 
void insertat_head(int data,Node* &head){
     Node* temp=new Node(data);
     temp->next=head;
     head=temp;
}
//for tail
void insertat_tail(int data,Node* &tail){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
// inserting at posion
void insertat_pos(Node* &tail,Node* &head, int pos,int data){
    Node* temp=head;
    if(pos==1){//handing the first posion 
        insertat_head(data,head);
        return ;
    }
    int c=1;
    while(c<pos-1){//traversing the nodes
        temp=temp->next;
        c++;
    }
    if(temp->next==NULL){//handing the last posion
        insertat_tail(data,tail);
        return ;
    }
    Node* insertpos=new Node(data);//inserting at posion
    insertpos->next=temp->next;
    temp->next=insertpos;


}
void print(Node* &head){//printing the nodes
    Node* temp=head;
    while(temp!=NULL){//cheacking the last nodes (address value is null or not)
        cout<<temp->data<<" ";//printing the data of nodes
        temp=temp->next;//traversing the nodes
    }
    cout<<endl;
}
int main(){
   Node* node1=new Node(8);
   Node* head=node1;
   Node* tail=node1;
   insertat_tail(58,tail);
   insertat_pos(tail,head,3,45);//inserting a value at one posion
   print(head);
   cout<<"head : "<<head->data<<endl;
   cout<<"tail : "<<tail->data<<endl;
}
