#include <bits/stdc++.h>
#define ll long long

using namespace std;


void solution(){
	
	int t, n, cases = 0;
	int jumps[1001];
	cin >> t;
	while(t--){
		cin >> n;
		cases++;
		//high and low
		int h = 0, l = 0;
		for(int i = 0; i < n; i++){
			cin >> jumps[i];	
		}

		for(int j = 1; j <= n - 1; j++){
			if(jumps[j] > jumps[j-1]){
				h++;
			}
			else if(jumps[j] < jumps[j-1]){
				l++;
			}
		}

		cout << "Case " << cases << ": " << h << " " << l << "\n";
	}

}
int main(){
	ios::sync_with_stdio(false);
	solution();

return 0;
}
