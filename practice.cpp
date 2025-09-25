#include <iostream>
#include <fstream>
#include <string>

void writeFile() {
	std::ofstream file ("practice.txt");
	if(file.is_open()) {
		file << "Data in file.";
		file.close();
	}
	else {
		std::cout << "Unable to open file." << std::endl;
	}
}

void readFile() {
	std::ifstream file ("practice.txt");
	std::string line;

	if(file.is_open()) {
		while(getline(file, line)) {
			std::cout << line << std::endl;
		}
		file.close();
	}
	else {
		std::cout << "Unable to open file." << std::endl;
	}
}

int main() {
	writeFile();	
	readFile();
}
