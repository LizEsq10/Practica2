#include <iostream>
#include <string>

using namespace std;

class usuario
{
protected:
   string nombre; 
   string numero; 
   int edad; 
   string password;
public:
 usuario(string nombreU, string numeroU, int edadU, string passwordU){
   this -> nombre = nombreU;
   this -> numero = numeroU;
   this -> edad = edadU;
   this -> password = passwordU;
 }

 void login (string nombreU, string passwordU){
   cout << "se ha logueado al sistema"<<endl;
 }

 void logout (){
   cout<<"se ha a cerrado la secion"<<endl;
 }    

 void CambiarPassword (string old, string passwordNew){
   if (old == password){
      password = passwordNew;
      cout<<"se ha cambiado el password"<<endl;
   }else {
      cout << "La contraseña antigua no coincide. No se pudo cambiar la contraseña." << endl;
    }
   }

};

class cliente : public usuario
{
public:

   cliente (string nombreU, string numeroU, int edadU, string passwordU): usuario (nombreU, numeroU, edadU, passwordU){
   }

   void comprar (){
      cout<<"Has comprado un nuevo porducto"<<endl;
   }

   void reclamar (){
      cout<<"Has reclamado tu porducto"<<endl;
   }

   void devolver (){
      cout<<"Has devuelto un porducto"<<endl;
   }

};

class vendedor : public usuario
{
public:

   vendedor (string nombreU, string numeroU, int edadU, string passwordU): usuario (nombreU, numeroU, edad, passwordU){
   }

   void vender (){
      cout<<"has vendido un nuevo prodecto"<<endl;
   }

   void actualizar (){
      cout<<"Tus productos han sido actualizados"<<endl;
   }

};

int main() {

   cliente iluso1("paulo", "5518456738", 30, "SiUnGatoCambeara");
   vendedor manoso1 ("caleb", "32456789890", 60, "SiUnManosoFueraMasBuenaOnda");

   iluso1.login("paulo", "SiUnGatoCambeara");
   iluso1.CambiarPassword("SiUnGatoCambeara", "SiUnGatoChambeara");
   iluso1.comprar();
   iluso1.reclamar();
   iluso1.devolver();
   iluso1.logout();

   manoso1.login("caleb", "SiUnManosoFueraMasBuenaOnda");
   manoso1.CambiarPassword("SiUnManosoFueraMasBuenaOnda", "CachaiO_NoCachai");
   manoso1.vender();
   manoso1.actualizar();
   manoso1.logout();

  return 0;
}