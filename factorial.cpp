#include "iostream" 
using namespace std;

int fact(long long int x){
 long long int f=1;  int i=2;


while(i<=x){
f=f*i;
i++;
}


 return f;}





int main(){


cout<<fact(20);
    return 0;
}