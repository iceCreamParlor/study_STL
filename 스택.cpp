#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;
stack<int> mystack;
int main()
{
	char cmd[10]; int num, inp;
	freopen("input.txt", "r", stdin);
	scanf("%d", &num);
	for(int i=0; i<num ; i++){
		scanf("%s", cmd);
		if( !strcmp(cmd, "push") ){
			scanf("%d", &inp);
			mystack.push(inp);
		}
		else if( !strcmp(cmd, "top") ){
			if(mystack.empty() ) printf("-1\n");
			else printf("%d\n", mystack.top());
		}
		else if( !strcmp(cmd, "size") ){
			printf("%d\n", mystack.size());
		}
		else if( !strcmp(cmd, "empty") ){
			if( mystack.empty() )
				printf("1\n");
			else printf("0\n");
		}
		else if( !strcmp(cmd, "pop") ){
			if(mystack.empty() ) printf("-1\n");
			else{
				printf("%d\n", mystack.top());
				mystack.pop();
			}
		}
	}
	return 0;
}
