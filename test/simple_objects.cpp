#include "simple_objects.hpp"

int main() {
    vector<char> v = {'h', 'a', 'p', 'p', 'y'};
    A obj;
   // obj.load(v);
    //obj.st_print();

    obj.vec_print(x);

    return 0;
}

void A::load(vector<char> input)  {
    for(int i=0;i<input.size();i=i+1)  {
        
        //load all elements of input
        st.push(input.at(i));

    }
    return ;
}


void A::st_print() {

    stack<char> buffer;

    for(int i=0;i,x.size();i=i+1) {
        if(i>=20) {
            break;
        }
        st.push(x.at(i));
    }
    
    for(;!st.empty();) {

       buffer.push(st.top());
       st.pop();

    printf("\n");
}    
    
    return ;
}



A::A() {
    st = {};
}