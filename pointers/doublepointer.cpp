#include<bits/stdc++.h>
using namespace std;

void fun(int a[]){
    cout<<a[0]<<" ";
}
void square(int *p){
    int a =10;
    p = &a;
    *p =(*p)*(*p);
}

void f(int x, int *py , int **ppz){
    int y,z;
    **ppz+= 1;
    z = **ppz;
    *py += 2;
    y =*py;
    x+=3;
    cout<<x<<" "<<y<<" "<<z<<endl;
    cout<<(x+y+z);
}

int main(){
    // int i=5;
    // int *p = &i;
    // int ** p2 = &p;
    // cout<<endl;
    // cout<<"printing p "<<p<<endl;
    // cout<<"Address of p "<<&p<<endl;
    // cout<<"Address of p "<<*p2<<endl;
    // int a[] = {1,2,3,4};
    // fun(a+1);
    // cout<<a[0];
    // int a =10;
    // square(&a);
    // cout<<a<<endl;

    int c, *b, **a;
    c=4;
    b = &c;
    a = &b;
    f(c,b,a);
    

    return 0;
}