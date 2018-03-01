#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> myvec;

int main()
{
	freopen("input.txt", "r", stdin);
	int N; scanf("%d", &N);
	while(N--){
		int temp; scanf("%d", &temp);
		myvec.push_back(temp);
	}
	sort(myvec.begin(), myvec.end());
	int M; scanf("%d", &M);
	while(M--){
		bool check = false;
		int temp; scanf("%d", &temp);
		int left = 0, right= myvec.size()-1;
		while(left <= right){
			int middle = (right+left)/2;
			if( temp == myvec[middle] ){
				check = true;
				break;
			}
			else if( temp < myvec[middle] ){
				right = middle-1;
			}
			else if( temp > myvec[middle] ){
				left = middle+1;
			}
		}
		printf("%d ", check);
	}
	return 0;
}
