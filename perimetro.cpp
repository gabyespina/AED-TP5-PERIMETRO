//EL PROGRAMA PIDE DOS DATOS POSITIVOS, GRAFICA EL RECTANGULO Y DEVUELVE EL PERIMETRO Y EL AREA DE ESTE.
//GABRIEL ESPINA - K1091
//12/05/15
#include <cstdlib>
#include <iostream>
#include<stdlib.h> 
using namespace std;

double getPositivo();
double getPerimetro(double,double);
void graficar (double,double);

int main(int argc, char *argv[])
{
    system ("color 3F" );
    double b,h; 
    string res;
    bool continuar;
    cout<<endl<< " DATOS DE UN RECTANGULO " <<endl;
    cout<<endl<< " [Si ingresa numeros con decimales ingrese con punto y no con coma] " <<endl<<endl;
    do{
       cout <<"   INGRESE BASE: "; b = getPositivo();
       cout <<"   INGRESE ALTURA: ";  h = getPositivo();
       
       graficar (b,h);
       
       cout<< "  Perimetro : " << getPerimetro(b,h) << " cm"<<endl<<endl;
       cout<< "  Area : " << b*h << " cm2"<<endl<<endl;
       
       cout<<" DESEA CONTINUAR? Y/N" <<endl;cin>>res;
      
       if ((res=="Y") or (res=="y")){
         continuar = true;
       }else{
         continuar = false;
       }
       cout<<endl<<endl;     
      
    }while (continuar);
    system("PAUSE");
    return EXIT_SUCCESS;
}

double getPerimetro (double b, double h){
    return ((2*b)+(2*h));
}

double getPositivo(){
    double dato; 
    bool repetir = true;
    do{
        cin>>dato;
        if (dato>0) {
           repetir = false;
        }else{
           cout<<"DATO INCORRECTO INGRESE NUEVAMENTE : ";
        }
    }while (repetir);
    cout<<endl;
    return dato;
}


void graficar (double b, double h){
    if (b>h) {
          cout   << "    .----------------------.  \\"<<endl
                 << "    |//////////////////////|  |"<<endl
                 << "    |//////////////////////|  |"<<endl
                 << "    |//////////////////////|  | "<<h <<" cm"<<endl
                 << "    |//////////////////////|  |"<<endl
                 << "    |//////////////////////|  |"<<endl
                 << "    .----------------------.  /"<<endl<<endl
                 << "     \\____________________/"<<endl
                 << "              "<< b <<" cm"<<endl;
       }         
    
       if (b<h) {
          cout   << "    .-----------.  \\"<<endl
                 << "    |///////////|  |"<<endl
                 << "    |///////////|  |"<<endl
                 << "    |///////////|  |"<<endl
                 << "    |///////////|  |"<<endl
                 << "    |///////////|  |"<<endl
                 << "    |///////////|  | "<<h<<" cm"<<endl
                 << "    |///////////|  |"<<endl
                 << "    |///////////|  |"<<endl
                 << "    |///////////|  |"<<endl
                 << "    |///////////|  |"<<endl
                 << "    |///////////|  |"<<endl
                 << "    .-----------.  /"<<endl<<endl
                 << "    \\___________/"<<endl
                 << "        " << b <<" cm"<<endl;
      }
      
      if (b==h) {
          cout   << "    .----------------.  \\"<<endl
                 << "    |////////////////|  |"<<endl
                 << "    |////////////////|  |"<<endl
                 << "    |////////////////|  |"<<endl
                 << "    |////////////////|  |"<<endl
                 << "    |////////////////|  | "<<h<<" cm"<<endl
                 << "    |////////////////|  |"<<endl
                 << "    |////////////////|  |"<<endl
                 << "    |////////////////|  |"<<endl
                 << "    |////////////////|  |"<<endl
                 << "    .----------------.  /"<<endl<<endl
                 << "    \\________________/"<<endl
                 << "          " << b <<" cm"<<endl;
      }
      cout<<endl;
}
