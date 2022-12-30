#include <iostream>
using namespace std;

 //best case 
 void bestCase(int *arr,int n){
    for(int i = 0; i<n; i++){
        arr[i] =i; 
    }
}
 //worst case 
void worstCase(int*arr, int n ){
    for(int i = 0; i<n; i++){
        arr[i] = n-i; 
    }
}
//average case
void averageCase(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int m=rand()%n;
        arr[i]=m;
    }
}




void insertsort(int *arr,int len)
{

    

    for (int j = 1; j < len; j++)
    {
        int key = arr[j];
      
        int i = j - 1;

        while (i >= 0 && arr[i] > key)
        {

            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
}

/*void inputarr(int *arr,int len){
for(int i=0; i<len;i++){

    cout<<"Enter Element at "<<i<<" : ";
    cin>>arr[i];
}

}
void showarr(int *arr,int len){
cout<<"Array: ";
for(int i=0; i<len;i++){

    cout<<arr[i]<<" ";
    
}
cout<<"\n";
}*/

void merge(int *arr ,int beg,int mid,int end){

    int i=0,j=mid,k=end;
    int n2=(end-mid);
    int n1=(mid-beg)+1;

int arrl[n1];
int arrR[n2];

while(i<=mid){

    arrl[i]=arr[i];
    i++;
}

while(j<end){
    arrl[j]=arr[j];
    j++;
}

while(arrl[i]<=arrl[j]){

}
    void mergesort(arr ,int end ,int beg){
        if(beg<end){
            int mid=(beg+end)/2;
            mergesort(arr,beg,mid);
            mergesort(arr,mid+1,end);
            merge(a,beg,mid,end);
        }

    }
}




int main()
{

int len , opt;
cout<<"-----------------------------Array Sorting-----------------------------\n";
cout<<"Enter Size of array:";
cin>>len;
int arr[len];
//inputarr(arr,len);
//showarr(arr,len);


cout<<"****************************SELECT FROM OPTION.****************************\n";
cout<<"1. Insertion Sort\n2. Selection Sort\n3. Merge Sort\n4.Radix Sort\nEnter 1/2/3/4/5: ";

cin>>opt;
cout<<"Sorted ";
switch (opt)
{
case 1:
auto t=clock();
bestCase(arr,len);
    insertsort(arr,len);
    t=clock()-t;
    cout<<(float)t/CLOCKS_PER_SEC;
//showarr(arr,len);
    break;

default:
    break;
}


}

