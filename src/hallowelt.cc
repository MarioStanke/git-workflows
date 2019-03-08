#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
    enum languages {german, english, french};
    string greetings[3] = {"Hallo Welt!", "Hello world!", "Salut monde!"};
    languages lang = french;
    cout << greetings[lang] << endl;
    return 0;
}
