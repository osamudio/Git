/* 
 * File:   main.cpp
 * Author: iper
 *
 * Created on 15 de septiembre de 2017, 17:15
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * Hola mundo cybernetico
 */
 class oagenda{
    public:
    int aux;
    int max;
    int numer[100];
    string nombre[100];
    oagenda();
    void setreguistro(int numero, string nom){
    int i = 0;
    while(i < max){
        std::cout << "numer  " << numer[i] << "\n";
        if(numer[i] == 0){
            break;
        }
        i++;
    }
    aux = i;
    std::cout << i << "    \n";
    nombre[aux] = nom; 
    numer[aux] = numero;
    std::cout << nombre[aux] << "   \n";
    }
    void mostrar(){
        std::cout << "viendo la agenda: \n";
        for(int i = 0; i < max; i++){
            if(numer[i] != 0 || nombre[i] != "0" ){
            std::cout << "numero:  " << numer[i] << "\n" << "nombre: "<< nombre[i] << "  \n";
            }
        
        }
        
    
    }
    void rmn(string nom){
        int a;
        string scambio;
        std::cout << "El nombre a eliminar es ....   " << nom << "\n";
        a = aux;
        for(int i = 0; i <= a; i++){
            if(nom == nombre[i]){
                nombre[i] = "0";
                numer[i] = 0;
                aux--;
            }
        }
        int i = 0;
        int cambio = 0;
        //std::cout << "\n max - aux  " << max -aux << "\n";
       //int b; 
       //std::cin >> b; las lienas comentadas a continuacion son para depurar el programa
        a = 0;
        while(a < (max - aux) || a == (max - aux)){
            if(numer[i] == 0 ){
                a++;
            }else{
                      cambio = numer[i];
                      numer[i] = numer[i + 1];
                      numer[i + 1] = cambio;
                      scambio = nombre[i];
                      nombre[i] = nombre[i + 1];
                      nombre[i + 1] = scambio;
                a--;
            }
            if(i >= max - 2){
                i = 0;
            }
            i++;
            //std::cout << "NUMER DE RM " << numer[i] << " nombre " <<  nombre[i] <<"\n"; 
        }
        
        
        }
 };
 oagenda::oagenda(){
     aux = 100;
     max = aux;
     numer[aux];
     nombre[aux];
     for(int i = 0; i < max; i++){
         numer[i] = 0;
         nombre[i] = "0";
         std::cout << "numer    " << numer[i] << " nombre   " << nombre[i] << "  " << i <<  "\n";
     }
 
 }
void fin(){
    std::cout << "Iniciando la agenda\n";
    oagenda alex2 ;
    string nom = "laura";
    int imput2;
    for(int i = 0; i < 10; i++){
    alex2.setreguistro(34, nom);
    alex2.setreguistro(12390, "desconocido");
    }
    alex2.mostrar();
    alex2.rmn(nom);
    alex2.mostrar();
    oagenda alex;
    std::cout << "Fin de la prueva \n Para salir de la agenda es de Fin \n";
    while(nom != "FIN"){
        std::cout << "Que quieres hacer poner(p) un nombre eliminar(e)  mostrar agenda(m) salir(FIN)\n";
        std::cin >> nom ;
        if(nom == "p"){
            std::cout << "El numero";
            std::cin >> imput2;
            std::cout << "El nombre";
            std::cin >> nom;
            alex.setreguistro(imput2, nom);
    } if(nom == "e"){
        std::cout << "Nombre a eliminar\n";
        std::cin >> nom; 
        alex.rmn(nom);
    } if(nom == "m"){
        alex.mostrar();
    }
    }   
    //std::cout << alex.setnombre();
}
void p1(){
    int aux = 5;
    int precios[aux];
for(int i=0; i<5; i++)
{
    if(i > 0){
    precios[i] = i * 2;
    }else{
        precios[i] = 0;
    }
}
for(int i=0; i<5; i++)
{
    std::cout << "precios[" << i << "] " << " = " << precios[i] << "\n";
}

}
void p2(){
   int aux = 5;
    int precios[aux];

for(int i=0; i<5; i++)
{
     if(i > 0){
    precios[i] = i * 2;
    }else{
        precios[i] = 0;
    }
    std::cout << "precios[" << i << "] " << " = " << precios[i] << "\n";
}

}
void p3(){
    //tengo que hacer una funcion generica de esto que me devuelva los char.
    int aux = 10;
    int aux2 = 25;
    int a = 0;
    string nom[aux];
    std::cout << "Nombres\n";
    for(int i = 0; i < aux; i++){
        std::cin >> nom[i];
        a++;
        if(nom[i] == "FIN"){
            break;
        }
    }
   
    std::cout << "El numbre de la escritura es \n";
    for(int i = a; i >= 0 ; i--){
        for(int ii = 0; ii < aux2; ii++){
	if(nom[i][ii] == '1' ){
		break;
	}
        std::cout << nom[i][ii] << "  ";
        }
        std::cout << "\n";
    }

}

void p4(){
//completar aquí
    int aux[3] = {4, 5, 0};
    int precios[aux[0]][aux[1]];
    for(int i = 0; i < aux[0]; i++){
        for(int o = 0; o < aux[1]; o++){
        aux[2]++;
            precios[i][o] =  aux[2];
        }
    }
for(int i=0; i<4; i++)
{
for(int j=0; j<5; j++)
{
cout << precios[i][j] << " ";
}
cout << endl;
}

}


int main(int argc, char** argv) {
    p1();
    cin.get();
    p2();
    cin.get();
    p3();//falta mirar el array de char.
    cin.get();
    p4();
    cin.get();
    fin();
    cin.get();
    return 0;
}

