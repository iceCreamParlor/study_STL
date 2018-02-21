#include <stdio.h>
char temp[1000001]; int cnt;
int main()
{
	freopen("input.txt", "r", stdin);
	while(scanf("%s", temp) != EOF) cnt++;
	printf("%d", cnt);
}
