//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends

int fun(int n)
{
    if (n == 0)
        return 0;

    int r = n % 10;
    if (r == 0)
        r = 5;

    return fun(n / 10) * 10 + r;
}

/*you are required to complete this method*/
int convertFive(int n)
{
    // Your code here
    if (n == 0)
        return 5;
    else
        fun(n);
}