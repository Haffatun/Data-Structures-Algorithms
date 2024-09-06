#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int key)
{
    if(left <= right)
    {
        int mid = left+(right-left)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            return binarySearch(arr, mid+1, right, key);
        else
            return binarySearch(arr, left, mid-1, key);
    }
    return -1;
}
int main()
{
    cout << "Binary Search :" << endl;
    int arr_[] = {3, 4, 5, 2, 1, 10};
    int sz_ = sizeof(arr_)/sizeof(arr_[0]);
    sort(arr_, arr_+sz_);
    int key_;
    cin >> key_;
    int index = binarySearch(arr_, 0, sz-1, key_);
     if(index==-1)
        cout << key_ << " is not found\n";
    else
        cout << key_ << " is found in index: " << index;
    return 0;
}
