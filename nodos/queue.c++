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

    void remove(){
        if (size == 0){
            cout << "la cola esta vacia" << endl;
            return;
        }
        else{
            for (int i=0; i<size -1; i++){
                queue[i] = queue[i + 1];

            }
            size--;
        }
    }

    void print(){
        if (size == 0){
            cout << "esta vacia la cola" << endl;
            return; 
        }
        else {
            
        }
    }
}