#include <iostream>
#include <string>
using namespace std;

bool smileyBalancado(string s)
{
	int count = 0;
	if(s.length() == 0) return true;
	
	for(int i = 0; i < s.length();)
	{
		if(s[i] == ':')
		{
			i += 2;
			continue;
		}
		
		if(s[i] == ')')
			count--;
			if(count < 0) return false;
		
		if(s[i] == '(')
			count++;
		
		i++;
	}
	
	if(count != 0)
	{
		count = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == ')')
				count--;
			
			if(count < 0) return false;
			
			if(s[i] == '(')
				count++;
		}
	} else return true;
	
	if(count == 0)
		return true;
	
	return false;
}


int main(int argc, char *argv[])
{
	int T;
	
	cin >> T;
	cin.get(); //Para evitar uma falha de segmentacao
	
	for(int i = 1; i <= T; i++)
	{
		string s;
		
		getline(cin , s);
		cout << "Case #" << i << ": " << (smileyBalancado(s) ? "YES" : "NO") << endl;
	}
	
	return 0;
}