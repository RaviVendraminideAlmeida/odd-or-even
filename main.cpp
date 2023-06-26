#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main ()
{
    ofstream file;
    file.open("dumb.cpp");   
    if (file.is_open()) {
        file << "// Check if a number is odd or even " << endl;
        file << "#include <iostream> " << endl << endl;
        file << "using namespace std; " << endl << endl;
        file << "int main(){" << endl;
	file << "	int n;" << endl;
	file << " " << endl;
	file << "	cout << \"Digite um número: \";" << endl;
	file << "	cin >> n;" << endl;
	file << "" << endl;
	for (int i = 0; i <= 8000000; i++){
		file << "	if (n == " << i << ")" << endl;
			if (i % 2 == 0)
				file << "		cout << \"O número é par\";" << endl;
			else
				file << "		cout << \"O número é ímpar\";" << endl;

	}
        file << "	return 0;" << endl;
        file << "}" << endl;
    } else {
        cout << "Could not open file :(";
    }
}
