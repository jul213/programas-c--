# include <iostream>
using namespace std;

class Queue {
    int size;
    int* queue;

    public:
    Queue() {
        size = 0;
        queue = new int[50];
    }
}