
#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    int nim;
    string nama;

public: 
    Mahasiswa()
    {
        nim = 0;
        nama = "";

    };
    Mahasiswa(int iNim)
    {
        nim = iNim;
    }
    
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    void cetak();
};

int main()
{
    std::cout << "Hello World!\n";
}

