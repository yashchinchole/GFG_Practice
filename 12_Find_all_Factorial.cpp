//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> ans;
        long long int fac = 1;

        for (int i = 2; fac <= N; i++)
        {
            ans.push_back(fac);
            fac *= i;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends