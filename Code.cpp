

#include <iostream>
#include <string>
#include <cstring>

using namespace std;


/////////////////////////////////////DP Approach////////////////////////////////////////


long long dp[20][11][2][2];

long long digit_DP(const string &num,int pos,int prev,bool tight,bool leading_zero) {

	if (pos == num.size())
		return 1;
	
	long long &res = dp[pos][prev + 1][tight][leading_zero];
	if (res != -1)
		return res;
	res = 0;
	int limit = tight ? num[pos] - '0' : 9;

	bool new_tight;
	bool new_leading;
	for (int d = 0; d <= limit; d++)
	{
		new_tight = tight && (d == limit);
		new_leading = leading_zero && (d == 0);
		
		if (!leading_zero && abs(d - prev) == 1)
			continue;

		res += digit_DP(num, pos + 1, new_leading ? -1:d,new_tight,new_leading);
	}

	return res;
}

long long countNumbersWithoutConsecutiveDigits_DP(long long N) {
	memset(dp, -1, sizeof(dp));
	return digit_DP(to_string(N),0,-1,true,true);
}


////////////////////////////////////////BruteForce Approach///////////////////////////

int hasConsecutiveDigit(int num) {

	int prev = -1;
	while (num > 0)
	{
		int cur = num % 10;
		if (prev != -1 && abs(cur - prev) == 1)
			return true;
		prev = cur;
		num /= 10;
	}
	return false;
}

int countNumbersWithoutConsecutiveDigits_BruteForce(int N) {
	int count = 0;
	for (int i = 0; i <= N; i++)
	{
		if (!hasConsecutiveDigit(i))
			count++;
	}
	return count;
}


int main()
{
	long long N;
	cout << "Enter N: ";
	cin >> N;
	cout << "Count with Dynamic Programming approach: "<<countNumbersWithoutConsecutiveDigits_DP(N)<<endl;
	cout << "Count with Brute Force approach: " << countNumbersWithoutConsecutiveDigits_BruteForce(N) << endl;


}

