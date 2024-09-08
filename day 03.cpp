#include <iostream>
#include <vector>

using namespace std;

// Function to find the minimum coins for a given amount
vector<int> MinimumCoins(int n) {
    vector<int> result;
    int i = 8;  // Start from the largest coin
    int curr[9] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};  // Available coin denominations

    // Iterate until n becomes 0
    while(n > 0 && i >= 0) {
        // While the current coin can be used, subtract it from n and add to result
        while(n >= curr[i]) {
            result.push_back(curr[i]);
            n -= curr[i];
        }
        // Move to the next smaller coin
        i--;
    }
    return result;
}

int main() {
    int amount;
    
    // Input the amount for which we need to find minimum coins
    cout << "Enter the amount: ";
    cin >> amount;
    
    // Get the result
    vector<int> coins = MinimumCoins(amount);
    
    // Output the result
    cout << "The minimum coins to make " << amount << " are: ";
    for(int coin : coins) {
        cout << coin << " ";
    }
    cout << endl;

    return 0;
}
