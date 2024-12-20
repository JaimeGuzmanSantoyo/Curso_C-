#include<iostream>
using namespace std;

using json= nlohmann::json;

json alamacenamineto = json::array();
std::string usuario; std::string contraseña;
bool registroexitoso == true;
void menuprincipal(){
  cout<<"1. Registrarse"<<std::endl;
  cout<<"2. iniair secion"<<std::endl;
  cout<<"3. salir"<<std::endl;
}




void menu_registro(){
std::string usuario; std::string contraseña;
cout<<"ingresa el usuario que deseas registrar"<<std::endl;
std::getline(cin, usuario);
cout<<"ngresa la contraseña que deseas almacenar"<<std::endl;
std::getline(cin, contraseña);
json registro{
"usuario", usuario,
"contraseña",contraseña,
};
while (registroexitoso !=false){
    cout<<"-------menu inicio------" <<std::endl;
    cout<<"...bienvenido al inicio de la beta ,red social "<<std::endl;
    cout<<"simulacion de menu clasico de una red social "<<std::endl;
    
}
}

void menu_inicio(){
cout<<"ingresa el usuario"<<std::endl;
std::getline(cin, usuario);
cout<<"ngresa la contraseña que deseas almacenar"<<std::endl;
std::getline(cin, contraseña);


while (registroexitoso !=false){
    cout<<"-------menu inicio------" <<std::endl;
    cout<<"...bienvenido al inicio de la beta ,red social "<<std::endl;
    cout<<"simulacion de menu clasico de una red social "<<std::endl;
    
}


}



int main(){
int opciones;
do

{
    menuprincipal ();
    switch (opciones)
    {
    case 1:
        menu_registro();
        break;
     case 2:
       menu_inicio();
        break;

         case 3:
         cout<<" ------saliendo del pograma-.............."<<std::endl;
        break;
    default:
        break;
    }
} while (opciones !=3);



return 0;    
}