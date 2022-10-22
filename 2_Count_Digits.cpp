//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int evenlyDivides(int n)
    {
        int count = 0, rem, N = n;
        while (n > 0)
        {
            rem = n % 10;
            if (rem != 0)
            {
                if (N % rem == 0)
                    count++;
            }
            n /= 10;
        }
        // code here
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}
// } Driver Code Ends