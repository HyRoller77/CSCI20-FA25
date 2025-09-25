# include <iostream>
# include <array> // includes array library
# include <vector> // includes vector library
# include <cstdio> // includes printf library
# include <string> // includes string library
int main() {

    std::array<float, 4> squid = {1, 2, 3, 4};

    std::array<int, 5> a = {1, 2, 3, 4, 5};

    std::array<char, 8> b = {'h', 'i', ' ', 't', 'h', 'e', 'r', 'e'};

    std::vector<int> c = {6, 7, 8, 9};

    std::vector<char> d = { 'd', 'o', 'n', 't', ' ', 'p', 'a', 'n', 'i', 'c'};

    std::vector<float> e = {1, 2, 3, 4};

    std::printf("%i\n", b.at(1));

    std::array<std::string, 2> b_str = {"hi", "there"};

    std::printf("%s\n", b_str.at(0).c_str());
    return 0;
}