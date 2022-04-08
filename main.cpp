#include <iostream>
#include <string>
#include <fstream>
#include <errno.h>


using namespace std;

int main() {

    ifstream arq("/home/wagner/CLionProjects/2022_1/normaliza_nome/teste.txt");

    if (! arq.is_open()) {
        perror("Ao abrir /etc/hosts");
        return errno;
    }

string linha;

        while(getline(arq, linha)){
            // encontra o último espaço
            int pos =  linha.rfind(" ");

            //se encontrou o espaço...
            if(pos != string::npos){

                cout << linha.substr(pos) <<", " << linha.substr(0,pos) << endl;

            }

        }
}
