//Jorge Segovia Tormo
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    cout<<"----Corrector de Secuencias----"<<endl;
    char entrada[128];
    cout<<"Introduce la secuencia requerida:";
    cin>>entrada;

    char archivo[128];
    cout<<"Introduce el nombre del archivo a comprobar:";
    cin>>archivo;

    ifstream fe(archivo);
    ofstream salida("salida.txt");

    bool noes= true;

    string linea;
    int i=0;
    while(!fe.eof()) {
        noes=true;
        //fe >> linea; //Guardamos la linea
        getline (fe,linea);
        for(int j=0;j<linea.size();j++){//Recorremos la linea
            if(linea[j]=='+'){
                if(
                    (linea[j-8]=='A'||linea[j-8]=='T'||linea[j-8]=='C'||linea[j-8]=='G')  &&
                    (linea[j-7]=='A'||linea[j-7]=='T'||linea[j-7]=='C'||linea[j-7]=='G')  &&
                    (linea[j-6]=='A'||linea[j-6]=='T'||linea[j-6]=='C'||linea[j-6]=='G')  &&
                    (linea[j-5]=='A'||linea[j-5]=='T'||linea[j-5]=='C'||linea[j-5]=='G')  &&
                    (linea[j-4]=='A'||linea[j-4]=='T'||linea[j-4]=='C'||linea[j-4]=='G')  &&
                    (linea[j-3]=='A'||linea[j-3]=='T'||linea[j-3]=='C'||linea[j-3]=='G')  &&
                    (linea[j-2]=='A'||linea[j-2]=='T'||linea[j-2]=='C'||linea[j-2]=='G')  &&
                    (linea[j-1]=='A'||linea[j-1]=='T'||linea[j-1]=='C'||linea[j-1]=='G')  &&
                    (linea[j+8]=='A'||linea[j+8]=='T'||linea[j+8]=='C'||linea[j+8]=='G')  &&
                    (linea[j+7]=='A'||linea[j+7]=='T'||linea[j+7]=='C'||linea[j+7]=='G')  &&
                    (linea[j+6]=='A'||linea[j+6]=='T'||linea[j+6]=='C'||linea[j+6]=='G')  &&
                    (linea[j+5]=='A'||linea[j+5]=='T'||linea[j+5]=='C'||linea[j+5]=='G')  &&
                    (linea[j+4]=='A'||linea[j+4]=='T'||linea[j+4]=='C'||linea[j+4]=='G')  &&
                    (linea[j+3]=='A'||linea[j+3]=='T'||linea[j+3]=='C'||linea[j+3]=='G')  &&
                    (linea[j+2]=='A'||linea[j+2]=='T'||linea[j+2]=='C'||linea[j+2]=='G')  &&
                    (linea[j+1]=='A'||linea[j+1]=='T'||linea[j+1]=='C'||linea[j+1]=='G')
                ){
                    string primeraParte = linea.substr (0,j-8);;
                    string fin = primeraParte + entrada;


                    salida << fin <<endl;
                    noes = false;
                }
            }
        }

        if(noes){
            salida << linea <<endl;
        }




    }
    fe.close();

    cout<< "Trabajo Realizado por Jorge Segovia Tormo - https://github.com/jst7";
}
