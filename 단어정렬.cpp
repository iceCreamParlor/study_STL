#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> myvec;

bool cmp(string s1, string s2){
	if( s1.size() != s2.size() )
		return s1.size() < s2.size();
	else{
		int i;
		for( i=0; i< s1.size() && s1[i] - s2[i] ==0 ; i++ );
		return s1[i] <	s2[i];
	}
}
int main()
{
	//freopen("input.txt", "r", stdin);
	
	int num;	scanf("%d", &num);
	while(num--){
		string str;
		cin >> str;
		myvec.push_back( str );
	}
	sort( myvec.begin(), myvec.end(), cmp );

	auto end_itr = unique(myvec.begin(), myvec.end());
	for( auto itr= myvec.begin() ; itr!= end_itr ; itr++ )
		cout << *itr << "\n";
	return 0;
}