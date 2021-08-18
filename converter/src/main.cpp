#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//#include "functions.h"
#include "functions_str.h"
#include "FontManager_class.h"
#include "ConfigFont_class.h"
#include "Debug_class.h"


using namespace std;





int main(int argc, char* argv[], char* envp[])
{
    
    vector<string> vecOfAllChars;
    vector<string> vecOfAChar;
    string strResult;
    string fileName;
    Debug_class::log("=========================");
    Debug_class::log("initializing converting");
    if (argc > 1) {
        FontManager_class fontsLoder;
        //fontsLoder.load("fonts\\Speed.flf");
        
        strResult=fontsLoder.load(argv[1]);

        if (argc > 2) {
            fileName = argv[2];
        }
        else {
            fileName = "default.cpp";
        }
            writeFile(fileName,strResult);

        //printStrVector(fontsLoder.getFullStringOfChars());
    } 
    return 0;
}


