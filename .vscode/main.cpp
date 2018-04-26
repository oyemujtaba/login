#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	std::ofstream outfile;
	string username;
	string password;
	int i;
	outfile.open("users.txt", std::ios_base::app); //create file
	for (i = 0; i < 5 ; i++)  //enter username & pass
	{
		cout << "enter username: ";
		cin >> username;
		cout << "enter password: " ;
		cin >> password;
        outfile << "username : " << username << endl;
		outfile << "password : " << password << endl;
	}
	outfile.close();
	ifstream inFile;
	inFile.open("users.txt");
	//check file is opened
	if (inFile.fail()) {
	cerr << "file not opened" << endl;
	exit(1);
	}
	//check which username and passwords are present in file
	string item;
	int count = 0;
	while (!inFile.eof())//check what is in file till the file ends
	{
	inFile >> item;
	count++;
	cout << item << " ";
    }
	cout << endl;
	inFile.close();
	system("pause");
}