#include<iostream>
#include<vector>

using namespace std;

class Stack{     
    public:
        vector<int> arr;
        int top, inp;

    void get_input(int n){
        cout<<"Enter the elements to be pushed into stack: ";
        for(top = 0; top<n;++top){
            cin >> inp;
            arr.push_back(inp);
        }
    }

    void printit(){
        cout<<"The elements inserted are: ";
        for(int x: arr){
            cout<<x<<",";
        }
        cout<<"\n";
    }   

    void push(){
        cout<<"Enter the element to be pushed into stack: ";
        int element;
        cin >> element ;
        arr.push_back(element);
    }

    void pop(){
        int pop_ele;
        if (arr.empty()){
            cout<<"Stack is empty\n";
        }
        else{
            arr.pop_back();
            cout<<"Element is deleted: "<<"\n";
        }
    }
};


int main(){
    Stack stack;
    int n, inp;
    cout<<"Enter the size of the stack: ";
    cin >> n ;
    while (true){
        cout<<" 1: Create Stack\n 2: Push\n 3: PrintStack\n 4: pop\n";
        cin >> inp;
        if(inp == 1){
            stack.get_input(n);
        }

        else if(inp == 2){
            stack.push();
        }

        else if(inp == 3){
            stack.printit();
        }

        else if(inp == 4){
            stack.pop();
        }

        else{
            break;
        }
}

    return 0;
    }
