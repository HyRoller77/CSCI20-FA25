#include <cstdio>
#include <iostream>

struct cart_point {
    int x;
    int y;
};

void print_cart(cart_point point) {
    printf("(%d, %d)", point.x, point.y);
    return ;
}

int main() {
    cart_point point_a = cart_point {5, 2};
    print_cart(point_a);

     return 0;
}