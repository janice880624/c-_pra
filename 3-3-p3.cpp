#include<iostream>
using namespace std;

int main(){
	int temp;
	int h, m, s;
	
	cin >> temp;
	
	h = temp/3600;
	temp = temp%3600;
	
	m = temp/60;
	temp = temp%60;
	
	s = temp;
	
	cout << h << " hr " << m << " min " << s << " sec " << endl;
	
	return 0;
}
