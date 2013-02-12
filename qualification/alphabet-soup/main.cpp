#include <iostream>
#include <map>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;

int placeWord(string s)
{
	string word = "HACKERUP";
	int N = s.size(), min;
	map<char, int> wordCount;
	
	for(int i = 0; i < N; i++)
		if(isalpha(s[i]))
			wordCount[s[i]]++;
			
	wordCount['C'] /= 2;
	
	min = wordCount['H'];
	
	for(int i = 0; i < word.size(); i++)
		if(wordCount[word[i]] < min)
			min = wordCount[word[i]];
			
	return min;
}

int main(int argc, char *argv[])
{
	int T;
	
	cin >> T;
	cin.get();
	
	for(int i = 1; i <= T; i++)
	{
		string s;
		getline(cin, s);
		
		cout << "Case #" << i << ": " << placeWord(s) << endl;
	}
	
	return 0;
}