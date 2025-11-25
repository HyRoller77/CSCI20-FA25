#include "calc.hpp"
 
int main() {

    stack<int> st = {};


    st.push(9);
    st.push(9998);
    st.push(5);
    st.push(5);
    st.push(1001);

    st = evaluate(st);

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
        //check stack size
        if (st.empty()) {
            st.push(addition(y,z));
        }else {
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
      else if (x == 9997) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        st.push(multiplication(y,z));
      else if (x == 1001) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        st.push(division(y,z));
      }  
      }  
    }
} 




