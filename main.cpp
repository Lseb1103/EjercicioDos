#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a = 0;
  cout << "\t Ejercicios del taller en grupo \t\n";
  cout << "1.Ejercicio #3\n";
  cout << "(Ahorros Juanito)\n";
  cout << "2.Ejercicio #7\n";
  cout << "(La potencia de un # de formarecursiva)\n";
  cout << "3.Ejercicio #8\n";
  cout << "(Hamburguesas “McDonald's)\n";
  cout << "4.Ejercicio #9\n";
  cout << "(El nuevo sueldo de los empleados)\n";
  cout << "5.Salir\n";
  cout << "\tSeleccione una opcion \t\n";
  cin >> a;
  switch (a) {
    case 1 :{
         bool ingresa = false;
         double t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12;
         int opc;
         do
         {
         system("cls");
         cout << "\tAhorro juanito" << endl;
         cout << "1.depositar dinero" << endl;
         cout << "2.consultar dinero" << endl;
         cout << "3.salir" << endl;
         cout << "ingresa una opcion: " << endl;
         cin >> opc;
         switch (opc)
         {
         case 1:
         {   
            cout << "ingrese la cantidad a depositar para el mes de enero: " ;
            cin >> t1;
            cout << "ingrese la cantidad a depositar para el mes de febrero: " ;
            cin >> t2;
            cout << "ingrese la cantidad a depositar para el mes de marzo: " ;
            cin >> t3;
            cout << "ingrese la cantidad a depositar para el mes de abril: ";
            cin >> t4;
            cout << "ingrese la cantidad a depositar para el mes de mayo: " ;
            cin >> t5;
            cout << "ingrese la cantidad a depositar para el mes de junio: " ;
            cin >> t6;
            cout << "ingrese la cantidad a depositar para el mes de julio: " ;
            cin >> t7;
            cout << "ingrese la cantidad a depositar para el mes de agosto: " ;
            cin >> t8;
            cout << "ingrese la cantidad a depositar para el mes de septiembre: " ;
            cin >> t9;
            cout << "ingrese la cantidad a depositar para el mes de octubre: " ;
            cin >> t10;
            cout << "ingrese la cantidad a depositar para el mes de noviembre: " ;
            cin >> t11;
            cout << "ingrese la cantidad a depositar para el mes de diciembre: " ;
            cin >> t12;
            system("pause");
            break;
         }
         case 2:
         {
            cout << "enero: " << t1 << endl;
            cout << "febrero: " << t2 << endl;
            cout << "marzo: " << t3 << endl;
            cout << "abril: " << t4 << endl;
            cout << "mayo: " << t5 << endl;
            cout << "junio: " << t6 << endl;
            cout << "julio: " << t7 << endl;
            cout << "agosto: " << t8 << endl;
            cout << "septiembre: " << t9 << endl;       
            cout << "octubre: " << t10 << endl;
            cout << "noviembre: " << t11 << endl;
            cout << "diciembre: " << t12 << endl;
            cout << "su dinero total es: " << t1+t2+t3+t4+t5+t6+t7+t8+t9+t10+t11+t12 << "$" << endl;
            system("pause");
            break;

          }
          case 3:
          {
            ingresa = true;
            break;
          }
          default:
            cout << "opcion no valida" << endl;
           system("pause");
            break;
          }
          } while (ingresa == false);
           return 0;
         break;
         break;
    }
    case 2 :{
         double a,fact=1;
         int b;
         cout<<"ingrese un número: ";
         cin>> a;
         cout<<"ingrese el exponente: ";
         cin>> b;
         for(int i =1; i<=b; i++){
         fact=fact*a;
        }
       cout<<a<<" elevado a "<<b<<" es: "<<fact<<endl;
     }
       break;
  
    case 3 :{
          double a= 1.5,b=2.5,c=3.25, tot=0;
          int op=0,d=0, num;
          while (d==0) {
          cout<<"1. Hamburgues simple"<<endl;
          cout <<"2. Hamburguesa doble" << endl;
          cout <<"3. Hamburguesa triple" << endl;
          cout <<"4. Hamburguesa" << endl;
          cout <<"Seleccione una opción " << endl;
          cin>> op;
          if(op>0 && op<4){
          d=1;
          }else{
          cout<<"La opción no es valida"<<endl;
          }
         }
          cout<<"ingrese el número de hamburguesas que desea: "<< endl;
          cin>>num;
          switch (op) {
           case 1:
            tot= num*a;
            break;
           case 2:
            tot= num*b;
            break;
           case 3:
            tot= num*c;
            break;
          }
          d =0;
          while (d==0) {
        cout<<"1. Efectivo"<<endl;
        cout <<"2. Tarjeta de crédito"<<endl;
        cout<<"Seleccione su forma de pago: ";
        cin>> op;
        if(op>0 && op<3){
        d=1;
       }else{
       cout<<"La opción no es valida"<<endl;
       }
       }
        switch (op) {
       case 1:
        cout<<"Su total es: $"<<tot<<endl;
        break;
       case 2:
        tot=tot+tot*5/100;
        cout<<"Su total es: $"<<tot<<endl;
        break;
       }
       } 
   break ;

  case 4 :{
    double a=0, b=0, cond=0;
    int op=0;
    cout<< "Ingrese el sueldo del empleado (USD): ";
    cin>> a;
    while(cond==0){
    cout<<"Categoria 1"<<endl;
    cout<<"Categoria 2"<<endl;
    cout<<"Categoria3"<<endl;
    cout<<"Ingrese el número de categoria: ";
    cin>>op;
    if(op<4 && op>0){
       cond=1;
    }else{
    cout<<"Categoria no valida"<<endl;
    }
    }
    switch (op) {
    case 1:
    b=a+a*1/10;
    break;
    case 2:
    b=a+a*2/10;
    break;
    case 3:
    b=a+a*5/10;
    break;
   }
    cout<<endl<<"Sueldo anterior:$"<<a<<endl;
    cout<<"Categoria:"<<op<<endl;
     cout<<"Nuevo sueldo: $"<<b<<endl;
   }
   break;
    case 5:
    {
       cout << "Gracias por venir vuelva pronto/n" ;
  default :
       cout << " valor incorrecto" << endl;
  }   
}
}