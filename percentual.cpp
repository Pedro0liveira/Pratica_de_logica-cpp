#include <iostream>

using namespace std;

void mostrarPorcentagens(){
	double sp = 67836.43,
			rj = 36678.66, 
			mg = 27165.48,
			es = 27165.48,
			outros = 19849.53,
			total = sp + rj + mg + es + outros;
	
	cout << "----Percentual de faturamento----" << endl;
	cout << "Sao Paulo: " << sp/total*100 << "%%" << endl;
	cout << "Rio de Janeiro: " << rj/total*100 << "%%" << endl;
	cout << "Minas Gerais: " << mg/total*100 << "%%" << endl;
	cout << "Espirito Santo: " << es/total*100 << "%%" << endl;
	cout << "Outros: " << outros/total*100 << "%%" << endl;
}

int main(){
	 mostrarPorcentagens();
}
