#include <iostream>
using namespace std;
class Stack{
    private:
    int sizes = 15;
    int arr[15] , top = 0 , j= 0;
    public:
    Stack(){
        for(int i = 0 ; i<sizes; i++){
            arr[i] = 0;
        }
    }
    void push(int data){
        if(top == sizes){
            return;
        }
        else{
            arr[top] = data;
            top ++ ;
        }
    }
    void pop(){
        if(top == 0){
            return;
        }
        else{
            arr[top] = 0;
            top --;
        }
    }
    void display(){
        display(j);
    }
    void display(int j){
        if(j  == top){
            return;
        }
        else{
            cout<<arr[j]<<" | ";
            j++;
            display(j);
        }
    }
};
int main(){
    Stack obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    obj.display();
    cout<<"\n - - - POP - - - "<<endl;
    obj.pop();
    obj.display();
    return 0;
}