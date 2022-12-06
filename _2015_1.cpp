#include <fstream>

using namespace std;

void valg(int y, int x, int arr[20])
{
    arr[y] += x;
    for (int i = y + 1; i < y + 10 - x + 1; i++)
    {
        arr[i]++;
    }
}

int main()
{
    ifstream duom("Duomenys.txt");
    ofstream rez("Rezultatai.txt");
    int mer[10], visi[20] = { 0 };
    for (int i = 0; i < 10; i++)
    {
        duom >> mer[i];
    }
    for (int i = 0; i < 10; i++)
    {
        valg(i, mer[i], visi);
    }
    for (int i = 0; i < 20; i++)
    {
        rez << visi[i] << ' ';
    }
    return 0;
}