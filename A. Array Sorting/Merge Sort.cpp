#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];
    for(i = 0; i < n1; i++)
        L[i]=arr[left+i];
    for(j = 0; j < n2; j++)
        R[j] = arr[mid+1+j];

    i = 0, j = 0; k = left;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
           {
               arr[k] = L[i];
                i++;
           }
        else
           {
               arr[k] = R[j];
                j++;
           }
           k++;
    }
    while(i < n1)
    {
        arr[k] = L[i];
        i++; k++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j++; k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = left+(right-left)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
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
    
    mergeSort(arr, 0, n);
    cout << "Array after sorting: ";
    printArray(arr, n);
    return 0;
}
