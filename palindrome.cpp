#include "iostream"
using namespace std;

void checkPalindrome(int x){
int rev=0;
int y=x;
while(x>0){

    rev=rev*10+x%10;
    x=x/10;
}

if(y==rev){
    cout<<y<<" is Palindrome Number";
}
else {
    cout<<y<<" is not Palindrome Number";
}

}
int main(){

    checkPalindrome(1045454541);

}