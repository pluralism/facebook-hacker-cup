#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

int fit(int maxWidth, int maxHeight, int fontSize, string s)
{
	int totalW = 0, lines = 1;
	vector<string> words;
	istringstream is(s);
	
	copy(istream_iterator<string>(is), istream_iterator<string>(), back_inserter<vector<string> >(words));
	
	
	for(int i = 0; i < words.size(); i++)
	{
		if(fontSize * words[i].size() >= maxWidth) return fit(maxWidth, maxHeight, fontSize - 1, s) + 2;
		
		if((totalW + (fontSize * words[i].size()) + fontSize) <= maxWidth)
			totalW += (fontSize * words[i].size()) + fontSize;
		else if(totalW + (fontSize * words[i].size()) <= maxWidth) {
			lines++;
			totalW = 0;
		} else {
			i--;
			lines++;
			totalW = 0;
		}
	}
	
	return lines;
}

int getMax(int W, int H, string s)
{
	int size = 1;
	
	while(fit(W, H, size, s) * size <= H)
		size++;
		
	return size - 1;
}

int main(int argc, char *argv[])
{
	int T;
	
	cin >> T;
	
	for(int i = 1; i <= T; i++)
	{
		int W, H;
		
		cin >> W >> H;
		cin.get();
		string s;
		getline(cin, s);
		
		cout << "Case #" << i << ": " << getMax(W, H, s) << endl;
	}
	
	return 0;
}