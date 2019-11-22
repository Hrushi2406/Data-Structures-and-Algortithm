#include <iostream>
using namespace std;


void insertionSort(int a[], int l) {
    for(int i = 1; i < l; i++ ){
        int key = a[i];
        int j = i-1;
        while (j>=0 && a[j] > key)  {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }
    for (int i = 0; i < l; i++)
    {
        cout<<a[i]<<endl;
    }
    
}

int main() {
    int a[5] = {5,9,8,6,2};
    insertionSort(a, 5);
    return 0 ;
}