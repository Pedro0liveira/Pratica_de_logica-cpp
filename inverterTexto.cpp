#include <iostream>
#include <string>
#include <stack>

using namespace std;

string inverter(string txt){
	stack<char> p;
	string invertida;
	for(char c : txt){
		p.push(c);
	}
	for(char x : txt){
		invertida += p.top();
		p.pop();
	}
	return invertida;
}

int main(){
	string texto;
	cin >> texto;
	
	cout << inverter(texto);
}
