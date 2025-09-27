
#include<fstream>
#include<iostream>
#include<sstream>
#include<string>

void readFile() {
	std::stringstream converter;
	std::stringstream ss;

	std::ifstream file ("data.csv");
	std::string line;

	int num1;
	int num2;

	std::string sNum1;
	std::string sNum2;
	std::string word;

	if(file.is_open()) {
		while(getline(file, line)) {
			ss.clear();
			ss.str("");
			converter.clear();
			converter.str("");

			num1 = 0;
			num2 = 0;
			word = "";

			ss.str(line);
			getline(ss, sNum1, ',');
			getline(ss, sNum2, ',');
			getline(ss, word);

			converter << sNum1;
			converter >> num1;
			
			converter.clear();
			converter.str("");

			converter << sNum2;
			converter >> num2;

			int count = num1 + num2;
			for(int i = 0; i < count; i++) {
				std::cout << word << " ";
			}
			std::cout << "" << std::endl;
		}
		file.close();
	} 
	else {
		std::cout << "Unable to open file." << std::endl;
	}
}

int main() {
	readFile();

	return 0;
}
