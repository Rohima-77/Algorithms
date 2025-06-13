#include <iostream>
#include <stack>  // Stack header
using namespace std;

int main() {
    stack<int> st;  // Declare a stack of integers

    // Pushing elements into the stack
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element of stack: " << st.top() << endl;

    // Popping element from the stack
    st.pop();  // removes 30

    cout << "Top element after pop: " << st.top() << endl;

    // Check if the stack is empty
    if (st.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Print all elements by popping
    cout << "Remaining stack elements: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;

    return 0;
}
