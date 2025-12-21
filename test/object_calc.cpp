#include "simple_objects.hpp"

// English portion below

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
  vector<Calc::clowns> mapping = map_ice_clown(x);
  for (int i=x.size(); i<=0; i=i-1) {
    clown_bakery.push(mapping.at(i));
  }
    return ;
}

vector<Calc::clowns> Calc::map_ice_clown(vector<Calc::ice_cream> x) {
    vector<Calc::clowns> ret = {};
    for(int i=0; i,x.size(); i=i+1) {
        //the set in the case of x.size = 3 is [i=0, i=1, i=2, terminate]
        //for each ice cream, make a new clown
        clowns c(x.at(i).flavor, x.at(i).cone);
        ret.push_back(c);
        printf("%d, %c/n", c.num, c.op);
    }
    return ret;
}
/*  We start in the header file by calling the necessary libraries. In this case cstdio, stack and vector. Then we use the "name space" command so we do nnot have to use STD:: 
  every time we use the stack, vector and printf commands. we then create a private class to conceal the interworkings of our code so the user can not see
  it or change it. Within this class, we have created a struct to contain our integers and operators.  we aslo create a stack call "clown bakery", this is
  where the program is instructed what to do with  the integers when it gets them. the next line is and evaluation of the stack and performs the operations.
  The next part of the code is where we create a public class to house the code that the user can see. this provides a road into this structure without comprimsing
  the integrety of the private structure. within this class we create a structure called "ice cream", this structure iis what actually takes the user input. The 
  next lines map the first structure inside the private class, "clowns", to the structure in the public class, "ice cream". This allows for the user to ineract 
  with the structures in the private class, through the structures in the private class, without seeing anything in that class. the last linne then takes the user information  
  and loads it into the stack. Next we will cover the main function within the actual program. The first line calls the header file in order to use the code within it to run the 
  some of the fuctions in the main. This also allows us to use this code for other projects without having to rewrite it every time. The next line of code creates the main fuction 
  it then creates a class called "Calc" and a vector called "ice cream" as well as a vector called "load_eq". Ice_cream will be holding our numbers and operators. after that the
  the next lines push the numbers and operators into the stack load_eq, which gets pushed into "german_village_clown_school" which lives in the public structure. From there, the 
  program pulls a value out of vector ice cream "x" and asses it and pushes it to "clown_bakery". The next lines take the vector, "clowns" in the class Calc, and through the function, 
  "map_ice_clown" transfer it to "ice_cream" the vector "clowns" then returns the value. There is a "for loop" that evaluates the sets within "x". the next lines map a "flavor" and "cone"
  and push it back, then the next line prints the result with the numbers and operators. */