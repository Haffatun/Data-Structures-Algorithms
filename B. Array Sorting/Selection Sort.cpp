#include<bits/stdc++.h>
using namespace std;

void selectionSort(int ar[], int n)
{
    for(int i=0; i<n-1 ; ++i)
    {
        int min_idx = i;
        for(int j=i+1; j<n; ++j)
        {
            if(ar[min_idx] > ar[j])
            {
                min_idx = j;
            }
        }
        swap(ar[min_idx], ar[i]);
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
    
    selectionSort(arr, n);
    cout << "Array after sorting: ";
    printArray(arr, n);
    return 0;
}
