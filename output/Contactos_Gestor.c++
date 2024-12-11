#include<iostream>

#include<vector>
using namespace std;
std::string contacto;
std::vector<std::string> Contactos={};
void Menus(){
    cout<<"1. Agregar "<<std::endl;
    cout<<"2. mostrar contactos "<<std::endl;
    cout<<"3 buscar contactos "<<std::endl;
    cout<<"4 eliminar contacto  "<<std::endl;
    cout<<"5. salir del menu "<<std::endl;
}
void Agregar(){
 cout<<"Introduce el nombre que deseas agregar a la lista de usuarios:  "<<std::endl;
 cin>>contacto;
 Contactos.push_back("contacto");
}
void mostrar(){

for (int i = 0; i < Contactos.size(); i++)
{
cout<<Contactos[i]<<std::endl;
}

}
void buscar(){
    int id;
if (Contactos.size() ==0)
{
   cout<<"no hay nada que buscar ,no hay contactos en la base "<<std::endl; 
}else {
    cout<<"ingresa el numero (id )del contacto a buscar :  "<<std::endl;
    cin>>id;
    if (id < 0 )
    {
        cout<<"id tiene que ser = 0 o mayor a 0 , ingresa otro valor:  "<<std::endl;
        cin>>id;
    }else{
      for (int j = 0; j < Contactos.size(); j++){
       for (int i = 0; i < id; i++){
        if (j == id ){
            cout << "El usuario encontrado es: " << std::endl;
            cout << Contactos[j];
            break;
        }else{
       cout << "no encontrado : " << std::endl;
        }
       }
      }
        
    }
}


}
void elimar(){

}




int main(){



return 0 ;    
}