#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::string filename;
    
    
    std::cout << "Enter the name of the text file: ";
    std::cin >> filename;
    
   
    std::ifstream inputFile(filename);
    
    if (!inputFile.is_open()) {
        std::cout << "Error opening the file." << std::endl;
        return 1; 
    }
    
    std::string line;
    int wordCount = 0;
    
    
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string word;
        
        
        while (iss >> word) {
            wordCount++;    
        }
    }
    
    
    inputFile.close();
    

    std::cout << "Total word count: " << wordCount << std::endl;
    
    return 0; }