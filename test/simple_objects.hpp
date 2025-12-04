#include<cstdio>
#include<stack>
#include<vector>

using std::stack;
using std::vector;

class A {
private:
    stack<char> st;
public:
    // constructor
    A();
    // loads character vector to be uploaded in st
    void load(vector<char>);
    //prints all contents of stack
    void st_print();
   //obfuscation
    void vec_print(vector<char>);
};