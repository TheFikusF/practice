#include <iostream>
#include <fstream>
#include <string>
#include <locale>


using namespace std;
int main()
{
    cout << "previous string:"<< endl;      //відкриття файлу
    string line;
    ifstream myfile("..\\Alphabet\\Alphabet.txt");
    getline(myfile, line);
    if (myfile.is_open())                   //дешифровка файлу 
    {
        for (int i = 0; i < line.length(); i++) {           //програма працює для двух мов
            if (!(line[i] == 32 || line[i] == 65 || line[i] == 90 || line[i] == 97 || line[i] == 122 || line[i] == 192 || line[i] == 223 || line[i] == 224 || line[i] == 255)) {
                line[i] = line[i] - 1;
            }
            if (line[i] == 65) {
                line[i] = 90;
            }
            if (line[i] == 90) {
                line[i] = 65;
            }
            if (line[i] == 97) {
                line[i] = 122;
            }
            if (line[i] == 122) {
                line[i] = 97;
            }
            if (line[i] == 192) {
                line[i] = 223;
            }
            if (line[i] == 223) {
                line[i] = 192;
            }
            if (line[i] == 224) {
                line[i] = 255;
            }
            if (line[i] == 255) {
                line[i] = 224;
            }
            if (line[i] == 32) {
                line[i] = 32;
            }
        }
        cout << line << endl;
        myfile.close();
    }

    string TextUkr;
    setlocale(LC_ALL, "Ukrainian");
    cout << "new string:" << endl;
    getline(cin, TextUkr);                      //введення нового тексту
    cout << "encoded string:" << endl;              //шифровка тексту
    for (int i = 0; i < TextUkr.length(); i++) {
        if (!(TextUkr[i] == 32 || TextUkr[i] == 65 || TextUkr[i] == 90 || TextUkr[i] == 97 || TextUkr[i] == 122 || TextUkr[i] == 192 || TextUkr[i] == 223 || TextUkr[i] == 224 || TextUkr[i] == 255)) {
            TextUkr[i] = TextUkr[i] + 1;
        }
        if (TextUkr[i] == 65) {
            TextUkr[i] = 90;
        }
        if (TextUkr[i] == 90) {
            TextUkr[i] = 65;
        }
        if (TextUkr[i] == 97) {
            TextUkr[i] = 122;
        }
        if (TextUkr[i] == 122) {
            TextUkr[i] = 97;
        }
        if (TextUkr[i] == 192) {
            TextUkr[i] = 223;
        }
        if (TextUkr[i] == 223) {
            TextUkr[i] = 192;
        }
        if (TextUkr[i] == 224) {
            TextUkr[i] = 255;
        }
        if (TextUkr[i] == 255) {
            TextUkr[i] = 224;
        }
        if (TextUkr[i] == 32) {
            TextUkr[i] = 32;
        }
        cout << TextUkr[i];
    }
    cout << endl;

    ofstream outfile("..\\Alphabet\\Alphabet.txt");         //запис зашифрованого тексту до файлу

    outfile << TextUkr << endl;

    outfile.close();
}
