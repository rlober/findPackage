#include <iostream>
#include <fstream>

void writeCmakeFile(const char *_packageName)
{
    std::string packageName(packageName);

    ofstream cmakeFile;

    std::string dir(".crazyLongDirNameIHopeDoesntAlreadyExistInThisWorkingDirectory")
    boost::filesystem::create_directory(dir);
    cmakeFile.open (dir+"/CMakeLists.txt");
    cmakeFile << "Writing this to a file.\n";
    cmakeFile.close();
}


int main(int argc, char const *argv[]) {
    if (argc>1) {
        for (int i=1; i<argc; ++i) {
            std::cout << "Looking for package: " << argv[i] << std::endl;
        }
    } else {
        std::cout << "Type 'findPackage -h' for help" << std::endl;
    }
    return 0;
}
