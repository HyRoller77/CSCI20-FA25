#include "simple_objects.hpp"
#include "calc.hpp"

int main() {
    stack<char> st = {};

    st = evaluate(st);

    printf("result %d\n", st.top());
    return 0;
}


stack<char> evaluate (stack<char> st) {

    char x = st.top();
    st.pop();

    if (x == +) {
        char y = st.top();
        st.pop();
        char z = st.pop();
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
        char z = st.pop();
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
        char z = st.pop();
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
        char z = st.pop();
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

