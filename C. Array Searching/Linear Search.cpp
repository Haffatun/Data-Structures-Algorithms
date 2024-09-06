#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Liner Search :" << endl;
    int arr[] = {3, 4, 5, 2, 1, 10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin >> key;
    for(int i = 0; i < sz; i++)
    {
        if(arr[i]==key)
        {
            printf("%d is found in index %d\n", key, i);
            break;
        }
    }
    return 0;
}
