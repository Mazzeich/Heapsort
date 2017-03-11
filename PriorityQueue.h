#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <vector>


using namespace std;

class PriorityQueue
{
    vector <int> que;
public:
    void heapify(int i);
    void push(int el);
    void pop();
    int top();
};

#endif // PRIORITYQUEUE_H
