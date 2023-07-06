#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string file;
int N, M;
void readText() {
  ifstream input(file);
  if(!input) {
    cout << "File open failed!" << endl;
    exit(1);
  }
  char buffer[1000];
  input.getline(buffer, 100);
  char x, eq, num1, y, num2;
  input >> x >> eq >> num1 >>  y >> eq >> num2;
   
}

int main(int argc, char** argv) {
  if (argc < 2) {
    cout << "Please enter the file name you want to process !" << endl;
    exit(1);
  }
  string tmp(argv[1]);
  file = tmp;
  readText();
}