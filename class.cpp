#include<bits/stdc++.h>
using namespace std;

class A {
    int a ;
    public:
    void show(){
        cout<<"A show"<<endl;
    }
};

class B:public A{
    public:
    // void show(){
    //     cout<<"B show"<<endl;
    // }
};

int main(){
    A *a;
    B b;
    a = &b;
    a->show();
}