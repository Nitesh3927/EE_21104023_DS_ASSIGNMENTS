// NAME : NITESH BHRADWAJ
// SID : 21104023
// DATA STRUCTURES ASSIGNMENT 1 :FAMILY LINKED LIST

#include <iostream>
#include <string>
using namespace std ;

// we define a class called Node consisting of 
// name age next and prev
class Node{
    
    public:
    Node* prev;
    string name;
    int age;
    Node* next;

    // CONSTRUCTOR
    Node(string name , int age){
        this->name = name ;
        this->age = age;
        this->next = NULL ;
        this->prev = NULL ;
    }
};
// We make a linked list containing info about four cosuin brothers
// cause brothers are
int main(){
    cout<<endl;

    //define node pointer
    Node* one = NULL ;
    Node* two = NULL ;
    Node* three = NULL ;
    Node* four = NULL ;

    //allocate memory
    one = new Node("Cheten ", 25);
    two = new Node("Bharat", 21);
    three = new Node("Nipun", 19);
    four = new Node("Nitesh", 19);

    //link them
    one -> next = two; 
    one -> prev = NULL;

    two -> next = three; 
    two -> prev = one; 
    
    three -> next = four; 
    three -> prev = two; 

    four -> next = NULL; 
    four -> prev = three; 

    //print them
    Node* eye;
    eye = one;
    while(eye != NULL){
        cout<<eye->name<<" : "<<eye->age<<endl<<endl;
        eye = eye->next;
    }

    cout<<endl;
    return 0;
}
