#include<cstdio>
#include<stack>
#include<vector>

using std::stack;
using std::printf;
using std::vector;



class Calc {
private:
    struct clowns {
        int num;
        char op;
        clowns(int a, char b) {
            num = a;
            op =b;
        }
    };
    stack<clowns> clown_bakery;
    int addition        (int, int);
    int subtraction     (int, int);
    int multiplication  (int, int);
    int division        (int, int);
public:
   // Calc(); // initializes values
    struct ice_cream {
        int flavor;
        int cone;
        ice_cream(int a, char b) {
            flavor = a;
            cone = b;
        }
       
    };
    //tool function   
    vector<clowns> map_ice_clown(vector<ice_cream>);
    //Calc(); //intiializes values
    // loads the stack
    void german_village_clown_school(vector<ice_cream>);
    

};