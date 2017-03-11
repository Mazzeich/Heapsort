#include <PriorityQueue.h>

#include <iostream>
#include <vector>

using namespace std;

void heapsort(vector<int> &v);


int main()
{
    PriorityQueue myQ1;

    myQ1.push(6);
    myQ1.push(2);
    myQ1.push(11);
    myQ1.push(4);
    myQ1.push(3);
    myQ1.push(6);
    cout << myQ1.top() << "\n";

    myQ1.pop();
    myQ1.pop();
    cout << myQ1.top();

    vector<int> myV1;

    myV1.push_back(2);
    myV1.push_back(3);
    myV1.push_back(2);
    myV1.push_back(11);
    myV1.push_back(41);
    myV1.push_back(11);
    myV1.push_back(40);
    myV1.push_back(4);

    for (int i = 0; i < myV1.size(); i++) cout << myV1[i]<< " ";
    cout << "\n";

    heapsort(myQ1);

    for (int i = 0; i < myV1.size(); i++) cout << myV1 [i]<< " ";

    return 0;
}

void heapsort(vector<int> &v)
{
    PriorityQueue tmp;
    for (int i = 0; i < v.size(); i++)
        tmp.push(v[i]);

    for (int i = v.size() - 1; i >= 0; i--)
    {
        v[i] = tmp.top();
        tmp.pop();
        tmp.heapify(0);
    };
