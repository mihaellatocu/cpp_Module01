#include <iostream>
#include <cstring>
#include <fstream>

std::string new_line(std::string line, std::string s1, std::string s2)
{
    int poz = 0;
    std::string result= "";
    while ((poz = line.find(s1, poz)) != std::string::npos)
    {
        result += line.substr(0, poz);
        result += s2;
        poz += s1.length();
        line = line.substr(poz);
        poz = 0;
    }
    result += line;
    return (result);
}

int main(int ac, char* argv[])
{ 
    if (ac != 4)
    {
        std::cerr << "The format is incorrect: please add file, s1, and s2\n";
        std::cerr << "[1] File name - [2] Word to replace - [3] Word replacer" << std::endl;
        return (1);
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string filename = argv[1];
    
    std::ifstream MyFile(filename); // open file
    if (!MyFile.is_open())
    {
        std::cerr <<"The file cannot be opened\n";
        return (1);
    }
    std::ofstream outputFile(filename + ".replace"); // create new file
    if (!outputFile.is_open())
    {
        std::cerr << "The file cannot be opened\n";
        return (1);
    }
    std::string line;
    while (std::getline(MyFile, line))// reading each line
    {
        line = new_line(line, s1, s2);
        outputFile << line << "\n";
    }
    MyFile.close();
    outputFile.close();
   
    return (0);
}
