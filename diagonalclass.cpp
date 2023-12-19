#include <iostream>

using namespace std;

class Diagonal{
    int n;
    int *a;
    public:
    Diagonal(int n){
        this->n=n;
        a=new int[n];
    }
    void set(int i,int j,int key){
        if(i==j){
            a[i-1]=key;
        }
    }
    int get(int i,int j);
    void display();
    ~Diagonal();

};

int Diagonal::get(int i,int j){
    if(i==j){
        return a[i-1];
    }
    else{
        return 0;
    }
}

void Diagonal::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<a[i-1]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
Diagonal::~Diagonal(){
    delete []a;
}

int main(){
    Diagonal a(5);
    a.set(0,0,6);
    a.set(1,1,2);
    a.set(2,2,3);
    a.set(3,3,4);
    a.set(4,4,5);
 

    a.display();

    cout<<a.get(4,4);
}