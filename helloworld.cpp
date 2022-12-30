#include "iostream"
using namespace std;

int main(){
    cout<<"Helllo World";
    int b=*0x61ff08;
    int *a=&b;
    cout<<*a;
    return 0;
}