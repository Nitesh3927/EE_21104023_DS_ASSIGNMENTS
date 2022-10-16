// CIRCULAR LINKED LIST
// NOW DESTORYED


#include <iostream>
using namespace std;

// NODE CLASS
class Node
{
public:
    int data;
    Node *next;
    // CONST
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertElement(Node *&head, int x)
{
    Node *n = new Node(x);
    if (head == NULL)
    {
        // cout<<"check inst1"<<endl;
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        // cout<<"check inst2"<<endl;
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node* &head)
{
    Node *temp = head;

    if(temp== NULL) {
        cout << "List is empty "<< endl;
        return ;
    }

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;

}

void binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x){
            cout<<"key "<<x<<" found"<<endl;
            return;
        }
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
    cout<<"key "<<x<<" not found"<<endl;

}

void binarySearchInLinkedList(Node* &head, int key){

    Node* temp = head;
    int cnt;
    cnt = 0;
    
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    int arr[cnt];
    temp = head;
    int k =0;
    while (temp != NULL)
    {
        arr[k] = temp->data;
        temp = temp->next;
        k++;
    }
   
    binarySearch(arr, arr[0], arr[cnt],key);
}

void linearSearchInLinkedList(Node* &head, int key){

    Node* temp = head;
    while (temp != NULL)
    {
        if (key == temp->data){
            cout<<"key "<<temp->data<<" found"<<endl;
            return;
        }
        temp = temp->next;
    }
    cout<<"key "<<key<<" not found"<<endl;
}

int main()
{
    Node *head = NULL;

    insertElement(head, 10);
    insertElement(head, 20);
    insertElement(head, 30);
    insertElement(head, 40);
    insertElement(head, 50);
    insertElement(head, 60);
    insertElement(head, 70);

    display(head);
    linearSearchInLinkedList(head, 40);
    linearSearchInLinkedList(head, 45);
    binarySearchInLinkedList(head ,25);

    return 0;
}

