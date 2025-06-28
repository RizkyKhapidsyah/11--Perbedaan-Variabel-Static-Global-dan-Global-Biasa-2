void printStaticVar();  // Deklarasi fungsi dari file1.cpp
void tryAccessStaticVar();  // Deklarasi fungsi dari file2.cpp

int main() {
    printStaticVar();      // Output: Nilai staticGlobalVar di file1.cpp: 100
    tryAccessStaticVar();  // Output: Tidak bisa akses staticGlobalVar dari file2.cpp!
    return 0;
}