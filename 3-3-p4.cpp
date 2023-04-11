#include<iostream>
using namespace std;

int main(){
	
	int a;
	int b;
	int c;
	int X;
	int ans;
	
	while(cin >> a >> b >> c >> X){
		cout << a*X*X + b*X + c << endl;
	}
	
	return 0;
}
