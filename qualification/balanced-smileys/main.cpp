#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


bool smileyBalancado(string s)
{
	bool balancado = false;
	int abrir = 0, fechar = 0;
	//Variavel que armazena o comprimento da string
	int N = s.length();
	
	//Case base: Se a string estiver vazia entao nao vale a pena prosseguir
	if(N == 0) return true;
	
	
	//Analisar cada um dos caracteres da string
	for(int i = 0; i < N; i++)
	{
		if(s[i] == '(' && (i - 1) >= 0 && s[i - 1] != ':')
			abrir++; //Se encontrar um ( entao algures na string tem que ser fechado
			
		
	}
	
	return balancado;
}


int main(int argc, char *argv[])
{
	int T;
	
	cin >> T;
	cin.get(); //Para evitar uma falha de segmentacao
	
	//Para cada um dos T casos...
	for(int i = 1; i <= T; i++)
	{
		string s;
		
		getline(cin , s);
		cout << "Case #" << i << ": " << (smileyBalancado(s) ? "YES" : "NO") << endl;
	}
	
	return 0;
}