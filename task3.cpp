#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::string filename;
    
    // Prompt the user to enter the file name
    std::cout << "Enter the name of the text file: ";
    std::cin >> filename;
    
    // Open the file
    std::ifstream inputFile(filename);
    
    if (!inputFile.is_open()) {
        std::cout << "Error opening the file." << std::endl;
        return 1; // Return an error code
    }
    
    std::string line;
    int wordCount = 0;
    
    // Read the file line by line
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string word;
        
        // Count words in the line
        while (iss >> word) {
            wordCount++;
        }
    }
    
    // Close the file
    inputFile.close();
    
    // Display the total word count
    std::cout << "Total word count: " << wordCount << std::endl;
    
    return 0; // Return success code
}