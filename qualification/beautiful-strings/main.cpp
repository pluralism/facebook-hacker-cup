#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::sort;

int stringBeauty(string s)
{
	int max = 26, total = 0;
	vector<int> valores(27);
	
	for(int i = 0; i < s.size(); i++)
		if(isalpha(s[i]))
			valores[(char)tolower(s[i]) - 'a']++;
	
	sort(valores.begin(), valores.end());
	
	for(int i = valores.size() - 1; i >= 0; i--)
		total += (max-- * valores[i]);
	
	return total;
}


int main(int argc, char *argv[])
{
	int m;
	
	cin >> m;
	cin.get(); //Para impedir uma falha de segmentação
	
	
	//Avaliar cada um dos m casos
	for(int i = 1; i <= m; i++)
	{
		string s;
		getline(cin, s);
		
		cout << "Case #" << i << ": " << stringBeauty(s) << endl;
	}
	
	return 0;
}