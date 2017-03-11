#include "PriorityQueue.hpp"
#include <iostream>


void PriorityQueue::heapify(int i)
{
    int leftChild;
    int rightChild;
    int largestChild;

    for ( ; ; )
    {
        leftChild = 2 * i + 1;
        rightChild = 2 * i + 2;
        largestChild = i;

        if (leftChild < que.size() && que[leftChild] > que[largestChild])
        {
            largestChild = leftChild;
        }

        if (rightChild < que.size() && que[rightChild] > que[largestChild])
        {
            largestChild = rightChild;
        }

        if (largestChild == i)
        {
            break;
        }

        int temp = que[i];
        que[i] = que[largestChild];
        que[largestChild] = temp;
        i = largestChild;
    }
};

void PriorityQueue::push(int el)
{
    que.push_back(el);
    int i = que.size()-1;
    int parent = (i - 1) / 2;

    while (i > 0 && que[parent] < que[i])
    {
        int temp = que[i];
        que[i] = que[parent];
        que[parent] = temp;

        i = parent;
        parent = (i - 1) / 2;
    }
};

void PriorityQueue::pop()
{
    if (que.empty())
        std::cerr << "Queue is empty.";
    que[0] = que[que.size()-1];
    que.pop_back();
    heapify (0);
};

int PriorityQueue::top()
{
    if (que.empty())
        std::cerr << "Queue is empty.";
    return que.front();
};
