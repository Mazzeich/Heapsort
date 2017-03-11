#ifndef PRIORITYQUEUE_HPP
#define PRIORITYQUEUE_HPP

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

#endif // PRIORITYQUEUE_HPP
