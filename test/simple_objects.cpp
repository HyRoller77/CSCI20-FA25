#include "simple_objects.hpp"

int main() {
    int b = 1;
    int c = 4;
    A squid;

    squid.road_in(5, 12);
    c = squid.road_out();
    

    std::printf("b + c = %d", c);
    return 0;
}

void A::road_in(int z, int squid) {
    b = z;
    c = squid;
    return ;
}

int A::road_out() {
    return b+c;
}

A::A() {
    b = 5;
    c = 5;
}