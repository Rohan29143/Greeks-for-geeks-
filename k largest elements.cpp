/*Given an array arr of n positive integers and an integer k, Your task is to return k largest elements in decreasing order. 

Examples

Input: arr[] = {12, 5, 787, 1, 23}, n = 5, k = 2
Output: 787 23
Explanation: 1st largest element in the array is 787 and second largest is 23.
Input: arr[] = {1, 23, 12, 9, 30, 2, 50}, n = 7, k = 3 
Output: 50 30 23
Explanation: 3 Largest element in the array are 50, 30 and 23.
*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> ve;
	    sort(arr,arr+n,greater<int>());
	    for(int i=0;i<k;i++)
	    {
	        ve.push_back(arr[i]);
	    }
	    return ve;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
