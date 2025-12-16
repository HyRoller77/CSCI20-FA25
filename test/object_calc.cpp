#include "simple_objects.hpp"

int main() {
    Calc calc;
    vector<Calc::ice_cream> load_eq = {};

    //test: 1+1
    Calc::ice_cream x(0, '+');
    Calc::ice_cream y(1, 'e');
    Calc::ice_cream z(1, 'e');

    load_eq.push_back(x);
    load_eq.push_back(y);
    load_eq.push_back(z);

    calc.german_village_clown_school(load_eq);

    return 0;
}
void Calc::german_village_clown_school(vector<ice_cream> x) {
    map_ice_clown(x);
    return;
}

vector<Calc::clowns> Calc::map_ice_clown(vector<Calc::ice_cream> x) {
    vector<Calc::clowns> ret = {};
    for(int i=0; i,x.size(); i=i+1) {
        //the set in the case of x.size = 3 is [i=0, i=1, i=2, terminate]
        //for each ice cream, make a new clown
        clowns c(x.at(i).flavor, x.at(i).cone);
        ret.push_back(c);
        printf("%d, %c /n", c.a, c.b);
    }
    return ret;
}
