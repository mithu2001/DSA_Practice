#include<iostream>
using namespace std;




int main(){
    int num =6;
    cout<<num<<endl;
    cout<<&num<<endl;

    int *ptr = &num;
    cout<<"Address using pointer "<<ptr<<endl;
    cout<<"value using pointer "<<*ptr<<endl;
    cout<<"Size of integer "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"value of pointer is "<<*ptr<<endl;
    //increment pointer 
    (*ptr)++;
    cout<<"incremented value is "<<*ptr<<endl;
    //copying pointer into q
    int *q =ptr;
    cout<<"copying value is "<<*q<<endl;

    float f =10.5;
    float p = 2.5;
    float *ptr1 = &f;
    (*ptr1)++;
    *ptr1 = p;
    cout<<*ptr1<<" "<<f<<" "<<p<<endl;

//character pointer

    char ch = 'a';
    char *chptr = &ch;
    ch++;
    cout<<*chptr<<endl;

    int g =7;
    int *h =&g;
    h = h+1;
    cout<<g<<" "<<*h<<endl;

    int arr[] = {1,2,3,4};
    cout<<*(arr)<<" "<<*(arr+1)<<endl;

    char gf[] = "xyz";
    char *bf = &gf[0];
    cout<<bf<<endl;

    char sf[] = "hello";
    char *pf = sf;
    cout<<sf[0]<<" "<<pf[0]<<endl;
    return 0;
}