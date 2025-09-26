# include <iostream>
# include <array> // includes array library
# include <vector> // includes vector library
# include <cstdio> // includes printf library
# include <string> // includes string library
int main() {

    std::array<float, 4> a = {.1, .2, .3, .4};

    std::array<int, 5> b = {1, 2, 3, 4, 5};

    std::array<char, 8> c = {'h', 'i', ' ', 't', 'h', 'e', 'r', 'e'};

    std::vector<int> d = {6, 7, 8, 9};

    std::vector<char> e = { 'd', 'o', 'n', 't', ' ', 'p', 'a', 'n', 'i', 'c'};

    std::vector<float> f = {.1, .2, .3, .4};

    std::printf("%i\n", c.at(1));

    std::array<std::string, 2> e_str = {"dont", "panic"};

    std::array<std::string, 2> c_str = {"hi", "there"};

    std::printf("%f\n", a.at(3));

    std::printf("%i\n", b.at(3));

    std::printf("%i\n", d.at(2));

    std::printf("%s\n", c_str.at(0).c_str());

    std::printf("%s\n", c_str.at(1).c_str());

    std::printf("%s\n", e_str.at(0).c_str());

    std::printf("%s\n", e_str.at(1).c_str());

    std::printf("%f\n", f.at(1));

    return 0;
}