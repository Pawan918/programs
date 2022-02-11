
#include <bits/stdc++.h>
using namespace std;
void primeInRange(int L, int R)
{
	int i, j, flag;
	for (i = L; i <= R; i++) {
		if (i == 1 || i == 0)
			continue;
		flag = 1;
		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", i);
	}
}

int main()
{

	int x ,y;
    cin>>x>>y;
	primeInRange(x+1, y-1);

	return 0;
}
