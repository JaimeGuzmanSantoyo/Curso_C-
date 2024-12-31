#include <iostream>
#include<conio.h>
#include<windns.h>
#include <time.h>
#include <random>  //valores aleatorios 
#include <cstdlib>
#include <ctime>   /// valores aleatorios  en ciertos tiempos
using namespace std;
int x ,y;
// Función para dibujar el cráneo


void menu(){
cout<<"1. jugar "<<std::endl;
cout<<"2. creditos"<<std::endl;
cout<<"3. salir"<<std::endl;


}


void creditos(){
cout<<"Jose Jaime Guzman Santoyo "<<std::endl;
cout<<"FACULTAD DE ESTUDIOS SUPERIORES ARAGON "<<std::endl;
cout<<"INGENIERIA EN COMPUTACION"<<std::endl;



}

void gotoxy(int x1, y1){    // con esto creamos gotoxy , gotoxy nor permite poder movernos en patnalla 
HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwpos;
    dwpos.x = x1;   ///inidcamos el eje x
    dwpos.y = y1;   // indicamos el eje y 
    setconsolercursorposition(hcon,dwpos);

}
void llave_gotoxy(int x2, y2){
  HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwpos;
    dwpos.x = x2;
    dwpos.y = y2;
    setconsolercursorposition(hcon,dwpos);
    cout<<"k";    // que imrpima k 

}

void mover(){
    char opcion;
    int x = 10 , y = 10 ;
while (opcion =='z')
{
    system("cls");
    gotoxy(x,y);cout<<"*";
    opcion = getch();
    switch (opcion)
    {
    case 'w':
           y--;
        break;
        case 's':
        y++;
        break;
        case 'a': 
        x--;
        break;
        case 'd':
        x++;
        break;
    default:
        break;
    }

    }

 srand(time(0)); // Inicializa la semilla para números aleatorios

    int maxX = 80; // Ancho máximo de la consola
    int maxY = 85; // Alto máximo de la consola

    for (int i = 0; i < 100; i++) { // Imprime "k" en 100 posiciones aleatorias
        int x = rand() % maxX;
        int y = rand() % maxY;
        llave_gotoxy(x2, y2);
        Sleep(50);
    }

while (x1 == x2 && y1 == y2)
{
cout<<"fin del juego "<<std::endl;
}

}


void dibujarCraneo() {
    
    
cout << " Busqueda del Tesoro  \n";
cout <<  "\n";
cout << "  *************  \n";
cout << " *              *    \n";
cout << "*                 *  \n";
cout << "*  *****  ******   * \n";
cout << "* *     * *     *   * \n";
cout << "* *     * *     *   *   \n";
cout << "* *     * *     *   *     \n";
cout << "* * ***** * *****   *  \n";
cout << "*                   *    \n";
cout << " *       **       *      \n";
cout << "   * *          **        \n";
cout << "     *          *       \n";
cout << "     *  | |  |  *      \n";
cout << "      **********                 \n";
cout << "      **********                 \n";
}

int main() {
  // Llamar a la función para dibujar el cráneo
  dibujarCraneo();
  int opciones;
  
  do
  {
    menu();
    switch (opciones) 
    {
    case 1:
        mover();
        break;
    case 2 :
      creditos();
    break;
    case 3:
    cout<<"saliendo del programa ------"<<std::endl;
    default:
        break;
    }
  } while (opciones !=3);
  
  return 0;
}