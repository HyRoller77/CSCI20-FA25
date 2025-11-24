#include<cstdio>
#include<vector>

using std::vector;
using std::printf;

void print_queue(vector<int> q) {
    for(int i=0; i<q.size(); i=i+1) {
        printf("%d, ", q[i]);
    }
    printf("\n");
    return ;
}

vector<int> push_q(vector<int> q, int e) {
    q.push_back(e);
    return q;
}

int pop_q(vector<int> q) {
    int r = q.at(0);            //save the popped element
    q.erase(q.begin());         //pop the element
    return r;                   //return popped element 
   

    q = push_q(q, 10);
    q = push_q(q, 20);
    q = push_q(q, 30);

    print_queue(q);

    return 0;
}