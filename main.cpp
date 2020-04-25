#include <iostream>
#include <string>
using namespace std;

int main(int argc , char * argv[]) {
    string filename;
    if(argc>1){
        cout << "Primeiro argumento "<< argv[0]<<endl;
        cout << "Segundo argumento "<< argv[1]<<endl;
        cout << "Terceiro argumento "<< argv[2]<<endl;
        //cout << "Quarto argumento "<< argv[3]<<endl;

        filename = argv[1];
        cout << "Nome do ficheiro :"<<filename<<endl;
    }else{
        // inicialização da máquina "normal"
        cout << "Não foram passados argumentos pela linha de comandos" << endl;
    }


    return 0;
}
