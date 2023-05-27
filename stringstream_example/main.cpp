#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {

	std::string str = "Hungry Molly ate banana";
	std::stringstream str_stream (str);

	std::vector<std::string> sep_string;
	std::string buffer;

	           // >> is an extraction operator
	while (str_stream>>buffer) {
		sep_string.push_back(buffer);
		std::cout << "Value the buffer contains: " << buffer << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < sep_string.size(); i++) {
		std::cout << sep_string.at(i) << std::endl;
	}

	str_stream.clear();

	return 0;
}