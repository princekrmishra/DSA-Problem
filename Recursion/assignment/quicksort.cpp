#include <iostream> 
#include <vector> 
using namespace std;

// Function to return the maximum value that can be put in a knapsack of capacity W
int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
     vector<vector<int>> dp(n+1, vector<int>(W+1, 0));

// Build table dp[][] in bottom-up manner for (int i = 1; i <= n; i++) {
for (int w = 1; w <= W; w++) { 
    if (wt[i-1] <= w) {
dp[i][w] = max(dp[i-1][w], val[i-1] + dp[i-1][w - wt[i-1]]);
} else {
dp[i][w] = dp[i-1][w];
}
}
}

// The maximum value in the knapsack with capacity W return dp[n][W];
}

int main() {
// Input values
vector<int> val = {60, 100, 120};
vector<int> wt = {10, 20, 30}; int W = 50;
int n = val.size();

// Descriptive Output
 
cout << "	\n";
cout << " 0-1 KNAPSACK PROBLEM \n";
cout << "	\n\n";

cout << "Item Details:\n";
cout << "	\n"; cout << "Item | Weight | Value\n"; cout << "	\n"; for (int i = 0; i < n; i++) {
cout << " " << i+1 << " |	" << wt[i] << "	| " << val[i] << "\n";
}

cout << "\nMaximum Capacity of Knapsack: " << W << "\n"; cout << "	\n\n";
int result = knapsack(W, wt, val, n); cout << "	\n";
cout << "Maximum Value that can be placed in the knapsack = " << result
<< "\n";
cout << "	\n";

return 0;
}
