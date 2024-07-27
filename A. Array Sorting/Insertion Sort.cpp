#include<bits/stdc++.h>
using namespace std;

void insertionSort(int ar[], int s)
{
  for(int i=1; i<s; i++)
  {
    int key=ar[i];
    int index =i-1;
    while(key<ar[index] && index>=0)
    {
        ar[index+1]=ar[index];
        index-=1;
    }
    ar[index+1]=key;
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
    cout << n << " ta integer input nen\n";
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    insertionSort(arr, n);
    cout << "Array after sorting: ";
    printArray(arr, n);
    return 0;
}
