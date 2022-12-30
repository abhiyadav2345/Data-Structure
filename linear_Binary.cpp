#include <iostream>
#include <ctime>
using namespace std;

//------------------------------------------------------Array creation------------------------------------------
// best case
void bestCase(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
}
// worst case
void worstCase(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }
}
// average case
void averageCase(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int m = rand() % n;

        arr[i] = m;
    }
}

void reverseSortedArray(int n, int *arr)
{
    for (int i = n; i > 0; i--)
    {
        arr[n - i] = i;
    }
}

//----------------------------------------------------Array creation end---------------------------------------------
int linear(int[], int, int);
int Binary(int[], int, int);
int main()
{
    int arr[10000];
    clock_t t;
    // int ar[50], size, item, i, pos;
    // cout << "Enter number of elements=";
    // cin >> size;
    // cout << "Enter Array's Elements=";
    // for (i = 0; i < size; i++)
    //     cin >> ar[i];
    // cout << "Enter element which to be searched=";
    // cin >> item;
    // pos = linear(ar, size, item);
    // if (pos == -1)
    //     cout << "Element not Found";
    // else
    //     cout << "Element Found at=" << (pos + 1);

    cout << "\nSize of Array : 10000" << endl;
    cout << "Best, Average and Worst Case for Linear and Binary search" << endl;

    /* Best Case*/
    bestCase(arr, 10000);
    t = clock();
    int index = linear(arr, 10000, 9999);
    t = clock() - t;
    cout << "Element at " << index << endl;
    cout << "time taken for best case in Binary Search: " << (float)t / CLOCKS_PER_SEC << endl;

    index = Binary(arr, 10000, 100);
    t = clock() - t;
    cout << "Element at " << index << endl;
    cout << "time taken for best case in Linear Search: " << (float)t / CLOCKS_PER_SEC << endl;
    // /* Average*/
    // averageCase(arr, 10000);
    // t = clock();
    // bubbleSort(arr, 10000);
    // t = clock() - t;
    // cout << "time taken for Average case in Heap sort: " << (float)t / CLOCKS_PER_SEC << endl;

    // /* Worst */
    // worstCase(arr, 10000);
    // t = clock();
    // bubbleSort(arr, 10000);
    // t = clock() - t;
    // cout << "time taken for Worst case in Heap sort: " << (float)t / CLOCKS_PER_SEC << endl;
    // End

    return 0;
}
int linear(int ar[], int size, int item)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (ar[i] == item)
            return i;
    }

    return -1;
}

int Binary(int ar[], int size, int item)
{
    int low, high, mid;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (item == ar[mid])
            return mid;
        else if (item < ar[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}