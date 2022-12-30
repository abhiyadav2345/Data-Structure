 #include "iostream"
 #include "math.h"
 using namespace std;
 
 
 
 
 int countrec(long long int x){
        int res=0;
        if(x==0){
          return res;  
        }else {
            return 1 + countrec(x/10);
        }
    }


    int count(long long int x){
      int res=0;
      while(x>0){
      x=x/10;
      res++;
        }
         return res;

    }


    int countlog(long long int x){
        return floor(log10(x)+1);
    }
  int  main() {

        cout<<(count(14645464544));
        return 0;
    }
