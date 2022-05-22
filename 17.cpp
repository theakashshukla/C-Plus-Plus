// Write a C++ Program That Displays the Size (in Bytes) of a Given File. the Name of the File is
// Specified as Command Line Argument.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    FILE *fp;
    fp = fopen(argv[1], "r");
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    cout << "Size of the file is " << size << " bytes";
    fclose(fp);
    return 0;
}