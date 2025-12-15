#include<cstdio>
#include<stack>
#include<vector>

using std::stack;
using std::printf;
using std::vector;



class Calc {
private:
    struct dicho {
        int num;
        char op;
    };
    stack<dicho> st;
    int addition        (int, int);
    int subtraction     (int, int);
    int multiplication  (int, int);
    int division        (int, int);

    stack<int> evaluate( stack<int> );


public:
    Calc();
 //   void road_in(vector<char>);
    struct holding {
        int num;
        int op;
    } 
}