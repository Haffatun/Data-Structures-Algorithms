#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int left, int right)
{
    int pivot = a[right];
    int i = left -1;
    for(int j = left; j < right; j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(a[j], a[i]);
        }
    }
    swap(a[i+1], a[right]);
    return i+1;
}

void quickSort(int ar[], int left, int right)
{
    if(left < right)
    {
        int partition_idx = partition(ar, left, right);
        quickSort(ar, left, partition_idx-1);
        quickSort(ar, partition_idx+1, right);
    }
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    cout << "Koyta integer nite can?\n";
    int n; cin >> n;
    int arr[n];
    cout << n << " ta integer input nen\n";
    for(int i=0; i<n; ++i)
        cin >> arr[i];

    quickSort(arr, 0, n);
    cout << "Array after sorting: ";
    printArray(arr, n);
    return 0;
}
