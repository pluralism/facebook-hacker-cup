#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int escolherElemento(int n, int k, int a, int b, int c, int r)
{
	//Vetor que armazena os valores k
	vector<int> valores_k;
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