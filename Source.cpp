#include <string>
#include <iostream>
#include <random>
#include <bitset>
#include <fstream>
#include <algorithm> 
using namespace std;



string generator()
{
	srand(time(nullptr));
	float res = 0;
	string str;
	while (size(str) < 128)
	{
		string binary = bitset<8>(rand()%256 + 0).to_string();

		str += binary;
	}
	std::random_shuffle(&str[1], &str[str.length()]);
	return str;
}
int main()
{	
	string str = generator();
	cout << str;
	ofstream file("generated_sequence.txt");
	file << str;
	file.close();
	system("pause");
	return 0;
}