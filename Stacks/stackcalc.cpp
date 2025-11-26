#include "calc.hpp"
 
int main() {
    // need a stack b/c stack based calculator    
    stack<int> st = {};

    // load the stack carefully
    st.push(8);
    st.push(9998);
    st.push(3);
    st.push(9);
    st.push(9999);

    // run evaluate to evaluate the stack as an equation
    st = evaluate(st);

    // printing the result
    printf("result: %d\n", st.top());
    return 0;
}

stack<int> evaluate (stack<int> st) {

    int x = st.top();
    st.pop();

    if (x == 9999) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        //check stack to see if anything is left
        if (st.empty()) {
            st.push(addition(y,z));
        } else {
            // reorganize the top of the stack to house the result
            int temp = st.top();
            st.pop();
            st.push(addition(y,z));
            st.push(temp);
            return evaluate(st);
        }  
    } else if (x == 9998) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        st.push(subtraction(y,z));
    } else if (x == 9997) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        st.push(multiplication(y,z));
    } else if (x == 10001) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        st.push(division(y,z));
    } else {
        printf("FAIL\n");
    }

    return st;    
}

int addition(int l, int r)          { return l + r; }
int subtraction(int l, int r)       { return l - r; }
int multiplication(int l, int r)    { return l * r; }
int division(int l, int r)          { return l / r; }