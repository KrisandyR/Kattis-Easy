#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int N;
	int set = 1;
	
	while(cin >> N && N != 0){
		
		string u_arr[N+5];
		
		int top = 0;
		int bot = N-1;
		
		for(int i = 0; i<N; i++){
			if(i % 2 == 0){
				cin >> u_arr[top];
				top++;
			} else {
				cin >> u_arr[bot];
				bot--;
			}
		}
		cout << "SET " << set << endl;
		for(int i = 0; i<N; i++){
			cout << u_arr[i] << endl;
		}
	
		set++;
	}
	
	return 0;
}
