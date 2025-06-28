#include <iostream>

// Jika kita coba deklarasikan `extern`, tetap tidak bisa diakses!
// extern int staticGlobalVar;  // ERROR: unresolved external symbol

void tryAccessStaticVar() {
    // std::cout << staticGlobalVar;  // ERROR: staticGlobalVar tidak dikenal
    std::cout << "Tidak bisa akses staticGlobalVar dari file2.cpp!" << std::endl;
}