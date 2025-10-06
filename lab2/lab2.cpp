#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>

void createFile(const std::string filename){
    std::ofstream outFile(filename);
    if (!outFile){
        std::cerr << "cannot open file" << filename << std::endl;
    return;
    }

    for (int i=0; i<10; ++i) {
        int randomNumber = rand() % 10+1;
        outFile << randomNumber;
        if (i < 9) {
            outFile << " ";
        }
    }
    outFile.close();
}

int main(){
    srand(static_cast<unsigned int> (time(0)));
    createFile("file1.txt");
    createFile("file2.txt");
    createFile("file3.txt");

    std::cout<<"files created"<<std::endl;
    return 0;
}
