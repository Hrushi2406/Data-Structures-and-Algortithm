#include <iostream> 
using namespace std;


void merge(int a[], int l, int mid, int r) {
    int n1 = mid - l + 1; 
    int n2 =  r - mid; 
  
    int L[n1], R[n2]; 
  
    for (int i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (int j = 0; j < n2; j++) 
        R[j] = a[mid + 1+ j]; 
     
    int i = 0; 
    int j = 0;
    int k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            a[k] = L[i]; 
            i++; 
        } 
        else
        { 
            a[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        a[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 


}

void mergeSort(int a[], int l, int r) {
    if(l<r) {
        int mid = l+(r-l)/2;
        mergeSort(a, l, mid);
        mergeSort(a, mid+1, r);
        merge(a,l,mid,r);
    }
}


int main() {
    int a[5] = {5,9,7,8,2};
    mergeSort(a, 0, 5);
        for(int i = 0; i < 5 ; i++ ) {
        cout<<a[i]<<endl;
    } 
}