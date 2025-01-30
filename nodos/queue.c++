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
            for (int i=0; i<size; i++){
                cout << queue[i] << "<---";
            }
            cout << endl;
    }

    void Add(int valor){
        queue[i] = valor;
        size++;
    }

    operator+(const Queue&q){
        Queue resultado;

        for (int i=0;i<this->size;i++){
            resultado.add(queue[i]);
        }

        for (int i=0;i<q.size;i++){
            resultado.add(Queue.q[i]);
        }

        return resultado;
        
}

int main() {
    Queue q;
    q.Add(20); q.Add(30); q.Add(40); q.Add(5);
    q.print();
    return 0;
}
