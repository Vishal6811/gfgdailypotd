//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
    {
        // Your code goes here
        int num1 = 0;
        int num2 = (n * n) - 1;
        int i = 0;
        int j = 0;
        int k = 0;
        int l = 0;
        int cnt = 0;
        bool first = true;
        bool second = true;
        int num11 = 0;
        int num22 = 0;

        while (num1 < n * n && num2 >= 0)
        {

            if (first)
            {
                i = num1 / n;
                j = num1 % n;
                num11 = mat1[i][j];
                // cout<<"num11 "<<num11<<endl;
                first = false;
            }
            if (second)
            {
                k = num2 / n;
                l = num2 % n;
                num22 = mat2[k][l];
                // cout<<"num22 "<<num22<<endl;
                second = false;
            }
            int sum = num11 + num22;
            // cout<<"sum "<<sum<<endl;
            if (sum > x)
            {
                num2--;
                second = true;
            }
            else if (sum < x)
            {
                num1++;
                first = true;
            }
            else
            {
                first = true;
                num1++;
                cnt++;
                // cout<<"cnt "<<cnt<<endl;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main()
{

    // ios_base::sync_with_stdio(0);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat1[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat2[i][j];
            }
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";
    }

    return 0;
}
// } Driver Code Ends