#include <iostream>

using namespace std;

void set(int a[],int i,int j,int key){
    if(i==j){
        a[i-1]=key;
    }
}

int get(int a[],int i,int j){
    if(i==j){
        return a[i-1];
    }
    else {
        return 0;
    }
}


int main(){
    int a[4];
    set(a,1,1,5);
    set(a,2,2,9);
    cout<<get(a,2,2);

}