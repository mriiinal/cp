#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        int arr[n+1];
        int hh[n+1];
        for(int i = 1; i<=n; i++)
        {
            cin >> arr[i];
            hh[arr[i]] = i;
        }
        int cnt = 0;
        for(int i  = 1; i<=n ;i++)
        {
            if(arr[i]!=i)
            {
                int idx1 = i;
                int idx2 = hh[i];
                int el1 = arr[i];
                int el2 = arr[hh[i]];
                swap(arr[i],arr[hh[i]]);
                hh[el1] = idx2;
                hh[el2] = idx1;
                cnt++;
//                for(int j = 1; j<=n; j++)
//                    cout << "arr[" << j << "]: " << arr[j] << " hh[" << j << "]: " << hh[j] << "\n";
//                cout << "\n";
            }

        }
        //cout << cnt << "\n";
        cout <<(cnt) << "\n";
    return 0;
}