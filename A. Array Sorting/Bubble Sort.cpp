#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int ar[], int n)
{
    for(int i=0; i<n-1; ++i)
    {
        for(int j=0; j<n-1 -i; ++j)
        {
            if(ar[j] > ar[j+1])
                swap(ar[j], ar[j+1]);
        }
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
    
    bubbleSort(arr, n);
    cout << "Array after sorting: ";
    printArray(arr, n);
    return 0;
}
