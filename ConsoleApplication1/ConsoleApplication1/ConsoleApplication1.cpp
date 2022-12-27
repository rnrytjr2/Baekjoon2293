// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
using namespace std;
int N, K, answer, coins[101], DP[10001];
int main()
{
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
	{
		cin >> coins[i];
	}
	DP[0] = 1;
	for (int i = 1; i <= N; i++)
	{
		for (int j = coins[i]; j <= K; j++)
		{
			DP[j] += DP[j - coins[i]];
		}
	}
	cout << DP[K];
}