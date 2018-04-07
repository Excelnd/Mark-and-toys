// Mark and toys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long n, k, sum = 0; cin >> n >> k;
	vector<int> prices;
	for (int i = 0; i < n; i++)
	{
		int p; cin >> p;
		prices.push_back(p);
	}
	int answer = 0;
	int i = 0;
	sort(prices.begin(), prices.end());
	while (sum + prices[i] <= k) {
		sum += prices[i];
		answer++;
	}

	cout << answer << endl;

    return 0;
}

