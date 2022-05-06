#include <stdio.h>
#include <stdbool.h>

int main()
{
	int num;
	int a;
	int ans1, ans2;
	int a1, a2;

	bool tr1,tr2;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &a);

		if (a % 2 == 0)
		{
			a1 = a / 2;
			a2 = a / 2;
		}
		else
		{
			a1 = a / 2;
			a2 = a / 2 + 1;
		}

		while (a1 <= a2) {
			tr1 = true;
			tr2 = true;

			for (int j = 2; j <= a1 / 2; j++)
			{
				if (a1%j == 0) {
					tr1 = false;
				}
			}

			for (int j = 2; j <= a2 / 2; j++)
			{
				if (a2%j == 0)
				{
					tr2 = false;
				}
			}

			if (tr1 == true && tr2 == true)
			{
				ans1 = a1;
				ans2 = a2;
				break;
			}

			a1--;
			a2++;
		}

		printf("%d %d\n", ans1, ans2);
	}
}