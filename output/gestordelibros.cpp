#include<iostream>
#include <nlohmann/json.hpp>
#include <nlohmann/json.hpp>
using namespace std;
using json = nlohmann::json; // para trabajar con onjetos yeison xd

vector<std::string> usuario={};

void agregar  (){
    std::string titulo, autor,fecha_publicacion ;
json BibliotecaDeAlexandria = json::array();
cout<<"humano ingresa el  titulo del libro"<<std::endl;
cin>>titulo;
cout<<"humano ingresa el  autor"<<std::endl;
cin>>autor;
cout<<"humano ingresa el año de publicación"<<std::endl;
cin>>fecha_publicacion;
 json libro{
    "titulo", titulo,
    "autor", autor,
    "fecha_publicacion", fecha_publicacion
 }; 
BibliotecaDeAlexandria.push_back(libro);
cout<<"porfavor ingrese el usuario que acaba de dodar este libro :  "<<std::endl;
cin>>usuario;
}
void mostrarlibros(){
for ( int  i = 0; i < BibliotecaDeAlexandria.size(); i++)
{
    cout<<BibliotecaDeAlexandria[i]<<std::endl;
}

}
void mostrarusuarios() {

cout<<"los usuarios que han donado libros son los siguientes :  "<<std::endl;
for (int  j = 0; j < usuario.size(); i++)
{
    cout<<usuario[j]<<std::endl;
}

}

void prestar() {
std::string titulo;
cout<<"ingresa el titulo que quieres que te presete : "<<std::endl;
cin>>titulo;
if (BibliotecaDeAlexandria.size()==0){
cout<<"no hay nada que prestar ,no hay nada almacenado en la bibliteca "<<std::endl;
}else{
    for (int i = 0; i < BibliotecaDeAlexandria.size(); i++)
    {
        if (titulo==BibliotecaDeAlexandria[i]["titulo"])
        {   
            cout<<"aqui esta tu chingadera humano pendejo : "<<std:: endl;
            cout<<titulo;
            BibliotecaDeAlexandria.erase(BibliotecaDeAlexandria.begin ()+ i);
             break;
       
        }
        
    }else{
        cout<<"el titulo no  esta"<<std::endl;
    }
    
}
}
void devolver(){
     std::string titulo, autor,fecha_publicacion ;
     bool devuleto = true;
json BibliotecaDeAlexandria = json::array();
cout<<"humano ingresa el  titulo del libro"<<std::endl;
cin>>titulo;
cout<<"humano ingresa el  autor"<<std::endl;
cin>>autor;
cout<<"humano ingresa el año de publicación"<<std::endl;
cin>>fecha_publicacion;
 json libro{
    "titulo", titulo,
    "autor", autor,
    "fecha_publicacion", fecha_publicacion
    "devuelto",devuleto;
 }; 
}
void menu(){
    cout<<"1. agregar libros"<<std::endl;
    cout<<"2. mostrar libros"<<std::endl;
    cout<<"3. prestar libros"<<std::endl;
    cout<<"4. devolver  libros"<<std::endl;
    cout<<"5. mostrar usuarios"<<std::endl;
    cout<<"6. salir"<<std::endl;
}
using namespace std;
int main(){

int opciones;

    
do


{
    menu();
switch (opciones)
{
case 1:
    void agregar();
    break;

case 2:
    void mostrarlibros();
    break;
    case 3:
    void prestar();
    break;
    case 4:
    void devolver();
    break;
    case 5:
    void mostrar
    break;
    case 6:
    cout<<"saliendp del progrma --------------------------------"<<std::endl;
default:
    break;
}
} while (opciones!=6);




return 0 ;    

}