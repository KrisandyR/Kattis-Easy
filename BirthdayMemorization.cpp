#include<bits/stdc++.h>
using namespace std;

class Friend{
	private:
		string name;
		int point;
		string date;
		
	public:
		Friend(string name, int point, string date){
			this->name = name;
			this->point = point;
			this->date = date;
		}
		
		string getName(){
			return name;
		}
		
		int getPoint(){
			return point;
		}
		
		string getDate(){
			return date;
		}
		
		bool hasSmallerPointThan(Friend f){
			if(point < f.getPoint()){
				return true;
			}
			return false;
		}
		
		bool operator < (Friend& f){
			return name < f.getName();
		}
};

int checkDate(vector<Friend>& list, Friend f){
	string fDate = f.getDate();
	for(int i = 0; i<list.size(); i++){
		if(fDate == list.at(i).getDate()){
			return i;
		}
	}
	return -1;
}


int main(){
	
	int N;
	cin >> N;
	
	vector<Friend> list;
	
	for(int i = 0; i<N; i++){
		string name, date;
		int point;	
		
		cin >> name >> point >> date;
		Friend f(name, point, date);
		
		int flag = checkDate(list, f);
		if(flag == -1){
			list.push_back(f);
		} else {
			if(list.at(flag).hasSmallerPointThan(f)){
				list.at(flag) = f;
			}
		}
		
	}
	
	sort(list.begin(), list.end());
	cout << list.size() << endl;
	
	for(int i = 0; i<list.size(); i++){
		cout << list.at(i).getName() << endl;
	}
	
	return 0;
}
