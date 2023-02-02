#include <iostream>
using namespace std;
class Stack{
    private:
    class Node{
        public:
        int data;
        Node * next;
        Node(int data){
            this->data = data;
            next = NULL;
        }
    };
    Node * head;
    public:
    Stack(){
        head = NULL;
    }
    void Push(int data){
        if(head == NULL){
            head = new Node(data);
        }
        else{
            Node * temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new Node(data);
        }
    }
    void Pop(){
        Node * temp = head , * temp2;
        while (temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = NULL;
        delete temp;
        temp = NULL;
    }
    void display(){
        Node * temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<" | ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Stack obj;
    obj.Push(1);
    obj.Push(2);
    obj.Push(3);
    obj.Push(4);
    obj.display();
    cout<<"- - - POP - - - "<<endl;
    obj.Pop();
    obj.display();
    return 0;
}