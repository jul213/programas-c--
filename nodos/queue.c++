# include <iostream>
using namespace std;

class Queue {
protected:
    int size;
    int* queue;

    public:
    Queue() {
        size = 0;
        queue = new int[50];
    }

    ~Queue(){
        delete[] queue;
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

    virtual void print(){
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
        queue[size] = valor;
        size++;
    }

    void operator+(const Queue&q){
        Queue resultado;

        for (int i=0;i<this->size;i++){
            resultado.Add(queue[i]);
        }

        for (int i=0;i<q.size;i++){
            resultado.Add(q.queue[i]);
        }

        return resultado;
        
}
};

class Queue2 : public Queue {
    public:
    void print(){
        if (size == 0){
            cout << "la cola esta vacia" << endl;
            return;
            }
        for (int i=0; i<size; i++){
            cout << queue[i] << endl;
            }
        }
};
int main() {
    Queue q;
    q.Add(20); q.Add(30); q.Add(40); q.Add(5);
    q.print();
    return 0;
}

