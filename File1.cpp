#include <iostream>

// Variabel statis global (hanya bisa diakses di file1.cpp)
static int staticGlobalVar = 100;

void printStaticVar() {
    std::cout << "Nilai staticGlobalVar di file1.cpp: " << staticGlobalVar << std::endl;
}