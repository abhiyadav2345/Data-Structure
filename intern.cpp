#include<iostream>
#include<string>

using namespace std;
int main(){

int len;
cout<<"Enter size of array";
cin>>len;
String msg;
cout<<"Enter msg";
for(int i=0;i<len;i++){
    cin>>msg[i];
    
cout<<msg[i];
}
for(int i=0;i<len;i++){
    if (msg[i]=="idiot")
{
    msg[i]="******";
}

}

    return 0;
}
