/*
NAME : NITESH BHARDWAJ
SID : 21104023
*/

// this the condition tells that the traversing pointer variable(temp) has reached head(i.e the start again)

/*
  
  do{
        cout<<temp->data <<" ";
        temp = temp->next;
    } while (temp != head);
    
*/


#include <iostream>
using namespace std ;

// NODE CLASS
class Node{
    public:
    int data;
    Node* next;
	
    // CONSTRUCTOR
    Node (int data){
        this ->data = data;
        this ->next = NULL;
    }
};

void insertElement(Node* &head, int x){
    Node* n = new Node(x);
    Node* temp = head;
    
    // temp is used for traversing the linked list
    // when list is epmpty
    if (head == NULL){
        n->next = n;
        head = n;
        return;
    }
    // adding elements to the linked list
    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = n;
    n->next =head;
}

void display(Node* &head){
    Node* temp = head;
    // temp is used for traversing the linked list
    
    // this the condition tells that the traversing pointer variable(temp) has reached head(i.e the start again)
    //////////////////////////////////////////////////////////////////////////////////
    do{
        cout<<temp->data <<" ";
        temp = temp->next;
    } while (temp != head);
    ////////////////////////////////////////////////////////////////////////////////
}

int main(){
    
    Node* head = NULL;
   
    insertElement(head, 10);
    insertElement(head, 20);
    insertElement(head, 30);
    insertElement(head, 40);
    insertElement(head, 50);
    insertElement(head, 60);
    insertElement(head, 70);

    display(head);
 
    return 0;
}
