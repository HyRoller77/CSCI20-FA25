#include "simple_objects.hpp"

int main() {
    stack<int> st = {};

    st = evaluate(st);

    printf("result %d\n", st.top());
    return 0;
}

int addition (int l, int r) { return l + r; }
int subtraction (int l, int r)  { return l - r; }

stack<int> evaluate (stack<int> st) {

    char x = st.top();
    st.pop();

    if (x = "+") {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();

        if (st.empty()) {
            st.push(addition(y,z));

        } else {
            char temp = st.top();
            st.pop();
            st.push(addition(y,z));
            st.push(temp);
            return evaluate (st);
        }

    } else if (x == -) {
        char y = st.top();
        st.pop();
        char z = st.top();
        st.pop();

        if (st.empty()) {
            st.push(subtraction(y,z));

        } else {
            char temp = st.top();
            st.pop();
            st.push(subtraction(y,z));
            st.push(temp);
            return evaluate (st);
        }

    } else if (x == *) {
        char y = st.top();
        st.pop();
        char z = st.top();
        st.pop();

        if (st.empty()) {
            st.push(multiplication(y,z));

        } else {
            char temp = st.top();
            st.pop();
            st.push(multiplication(y,z));
            st.push(temp);
            return evaluate (st);
        }
    } else if (x == /) {
        char y = st.top();
        st.pop();
        char z = st.top();
        st.pop();
    
        if (st.empty()) {
            st.push(division(y,z));

        } else {
            char temp = st.top();
            st.pop();
            st.push(division(y,z));
            st.push(temp);
            return evaluate (st);
        }
    } else {
        printf("FAIL \n");
    }

    return st;

}

