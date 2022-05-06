#include <stdio.h>

int main()
{
	int N, X, A[10001];

	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < N; i++)
	{
		if (A[i] < X) printf("%d ", A[i]);
	}
}