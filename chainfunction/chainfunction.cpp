#include <iostream>
using namespace std;

class buku
{
    string judul;
public:
    buku setHudul(string judul)
    {
        this->judul = judul;
        return *this;

    }
    string getjudul()
    {
        return this->judul;
    }

};

int main()
{
    
}
