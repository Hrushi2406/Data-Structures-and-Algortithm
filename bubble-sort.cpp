#include <iostream>
using namespace std;

void bubbleSort(int a[], int l) {
    for (int i = 0; i < l; i++) {
        for(int j = 0; j< l-1; j++) {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < l; i++)
    {
        cout<<a[i]<<endl;
    }
    
}

int main() {
    int a[5] = {5,9,8,7,2};
    bubbleSort(a, 5);
}