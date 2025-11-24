# include <cstdio>
#include <vector>
int main () {
    int a = 1;
    int b = 1;
    int c = 10;
    bool check = true;
    std::vector<int> s = {};
    while (check) {
        s.push_back(c);
        if(a < c) { c = c-a; }
        else { check = false; }
        printf( "c is equal to %d\n", c);    
        }
        for(int i=0;i<s.size();i++) {
            printf("%d,",s[i]);
        }
        printf("\n");
        return 0;
}