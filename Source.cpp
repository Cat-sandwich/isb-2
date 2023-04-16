#include <string>
#include <iostream>
#include <random>
#include <bitset>
#include <fstream>
using namespace std;



string generator()
{
	srand(time(nullptr));
	float res = 0;
	string str;
	while(size(str) < 128)
	{
		string binary = bitset<8>(rand()).to_string();
			
		str += binary;
	}
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