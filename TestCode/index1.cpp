
#include <bits/stdc++.h>
using namespace std;


void subArraySum(vector<int> arr, int n, int sum)
{
	int minEle = INT_MAX;


	for (int i = 0; i < n; i++)
		minEle = min(arr[i], minEle);

	int curr_sum = arr[0] + abs(minEle), start = 0, i;

	int targetSum = sum;
	for (i = 1; i <= n; i++) {

		// If curr_sum exceeds the sum,
		// then remove the starting elements
		while (curr_sum - (i - start) * abs(minEle) > targetSum && start < i) {
			curr_sum = curr_sum - arr[start] - abs(minEle);
			start++;
		}

		// If curr_sum becomes equal to sum, then return true
		if (curr_sum - (i - start) * abs(minEle) == targetSum) {
			for(int j=start;j<i;j++){
                cout<<arr[j]<<" ";
            }
			return;
		}

		// Add this element to curr_sum
		if (i < n) {
			curr_sum = curr_sum + arr[i] + abs(minEle);
		}
	}

	// If we reach here, then no subarray
	cout << -1;
}

// Driver Code
int main()
{
	
	int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	int sum ;
    cin>>sum;

	subArraySum(arr, n, sum);

	return 0;
}
