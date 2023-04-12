#include <iostream>

using namespace std;

bool fibonacci(int n){
	if(n == 0 || n == 1){
		return true;
	}
	int i, atual, menosUm = 1, menosDois = 0;
	for (;;){
		atual = menosUm + menosDois;
		menosDois = menosUm;
		menosUm = atual;
		if(atual > n)
			return false;
		else if (atual == n)
			return true;
	}
}    

int main(){
	int n;
   	cin >> n;
   	if(fibonacci(n))
   		cout << "Este numero pertence a sequencia de Fibonacci!!!";
   	else
   		cout << "Este numero NAO pertence a sequencia de Fibonacci";
   	return 0;
}
