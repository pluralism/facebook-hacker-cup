#include <iostream>
#include <vector>
#include <map>
#include <set>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::map;
using std::set;

int escolherElemento(int n, int k, int a, int b, int c, int r)
{
	//Vetor que armazena os valores k
	vector<int> valores_k;
	//Mapa que contem o numero de k usados
	map<int, int> k_usados;
	//Set que contem os k que ainda não foram utilizados(ordenados)
	set<int> n_ordenados;
	//Variavel que contem o ultimo valor atribuido a k(inicialmente 0)
	int anterior;
	//Variavel que contem o proximo valor de k
	int _k;
	
	//A primeira coisa a fazer no algoritmo é gerar os valores de K e armazenar num vetor
	for(int i = 0; i < k; i++)
	{
		if(i == 0)
			_k = a;
		else
			_k = (b * anterior + c) % r;
			
		//Inserir o valor no vetor
		valores_k.push_back(_k);
		//O valor anterior e o k atual
		anterior = _k;
	}
	
	//Marcar os k usados...
	for(vector<int>::size_type i = 0; i != valores_k.size(); i++)
		k_usados[valores_k[i]]++;
		
	//Adicionar ao set os k nao utilizados
	for(int i = 0; i <= k; i++)
		if(k_usados[i] == 0)
			n_ordenados.insert(i);
}


int main(int argc, char *argv[])
{
	int T;
	int n, k, a, b, c, r;
	
	cin >> T;
	
	
	for(int i = 1; i <= T; i++)
	{
		cin >> n >> k >> a >> b >> c >> r;
	}
	
	return 0;
}