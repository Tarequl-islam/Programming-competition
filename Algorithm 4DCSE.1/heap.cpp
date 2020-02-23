#include <iostream>
using namespace std;
void max_heapify(int arr[], int n, int i){
    int largest = i; // parent = i
    int l = 2*i;     // left = 2*i
    int r = 2*i + 1; // right = 2*i + 1
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i){
        swap(arr[i], arr[largest]);
        max_heapify(arr, n, largest);
    }
}
void heap_Sort(int arr[], int n){
    for (int i = n/2-1; i>=0; i--)
        max_heapify(arr, n, i);

    for (int i=n-1; i>=0; i--){
        swap(arr[0], arr[i]);
        max_heapify(arr, i, 0);
    }
}
int main(){
    int arr[100];
    int n=6;
    cout<<"Enter array....\n";
    for (int i=0; i<n; i++){
        cin>> arr[i];
    }
    heap_Sort(arr, n);
    cout << "Sorted array is ...\n";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}


