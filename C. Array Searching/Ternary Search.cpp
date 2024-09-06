#include<bits/stdc++.h>
using namespace std;


int ternarySearch(int arr[], int n, int tar)
{
    int left=0, right=n;

    if(tar >= arr[left] && tar <= arr[right])
    {
        if(tar == arr[left])
            return left;
        if(tar == arr[right])
            return right;
        else
        {
            while(left<=right)
            {
                int mid1=left+(right-left)/3;
                int mid2=right-(right-left)/3;

                if(tar == arr[mid1])
                    return mid1;
                else if(tar<arr[mid1])
                    right =mid1-1;
                else if(tar==arr[mid2])
                    return mid2;
                else if(tar<arr[mid2])
                {
                    left=mid1+1;
                    right=mid2-1;
                }
                else
                    left=mid2+1;
            }
        }
    }
    return -1;
}
int main()
{
    cout << "Ternary Search :" << endl;
    int arr_[] = {3, 4, 5, 2, 1, 10};
    int sz_ = sizeof(arr_)/sizeof(arr_[0]);
    sort(arr_, arr_+sz_);
    int key_;
    cin >> key_;
    int index = ternarySearch(arr_, sz_-1, key_);
    if(index==-1)
        cout << key_ << " is not found\n";
    else
        cout << key_ << " is found in index: " << index;

}
