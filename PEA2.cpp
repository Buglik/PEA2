
#include <iostream>
#include <string>
#include "menu.h"
#include "dataManagment.h"
#include "LocalSearch.h"

using namespace std;

int main()
{
    srand(time(NULL));
    std::cout << "Hello World!\n";
    int matrixSize=0,menu,tsMenu=0;
    int** matrix = NULL ;
    int stopTime = 0;
    double cooler = 0;
    double initTemp = 0;
    int iterLimit = 0;
    double minTemp = 0;
    string file;

    do
    {
        menu = showMenu();
        system("cls");
        switch (menu) {
        case 1: {
            string name;
            cout << "==============================================================" << endl;
            cout << "Wprowadz nazwe pliku: " << endl;
            cout << "==============================================================" << endl;
            //name = "ftv47.atsp";
            cin >> name;
            matrix = getData(name);
            matrixSize = matrix[0][0];
            matrix[0][0] = matrix[1][1];
            //showData(matrix,matrixSize);
            break;
        }
        case 2: {
            cout << "Aktualnie ustawiony:" << stopTime << endl;
            stopTime = showStopTimeMenu();
            break;
        }
        case 3: {
            cout << "Aktualnie wybrane:" << tsMenu << endl;
            tsMenu = showTSMenu();
            break;
        }
        case 4: {
            /*if (matrixSize == 0 || stopTime == 0) {
                cout << "Blad w danych !" << endl;
                break;
            }*/

            LocalSearch ts;
            ts.setMatrix(matrix, matrixSize);
            ts.setTS(stopTime, tsMenu);
            ts.startTS();
            ts.saveToFileTabu("test");

            
            
            /*for (int i = 0;i < 3;i++)
            {
                for (int j = 0;j < 10;j++)
                {
                    ts.setMatrix(matrix, matrixSize);
                    ts.setTS(stopTime, i);
                    ts.startTS();
                    ts.saveToFileTabu("test");
                }
            }*/

             
           /* int neigh[] = {2,1,0};
            string files[] = {"rbg403.atsp","ftv170.atsp","ftv47.atsp" };
            int times[] = {180,120,60};
            for(int k=2;k<3;k++)
            {
                for(int j=2; j<3;j++)
                {
                    
                        for (int p = 0;p < 10;p++) 
                        {
                        matrix = getData(files[k]);
                        matrixSize = matrix[0][0];
                        matrix[0][0] = matrix[1][1];

                        ts.setMatrix(matrix, matrixSize);
                        ts.setTS(times[k],neigh[j]);
                        ts.startTS();
                        ts.saveToFileTabu("test");
                        }
                    
                }
            }*/
        
            //int cadenceTab[] = {10,15,20,30,50}; //kadencja
            //int iterTab[] = {50,200,500,1000};//limit iteracji bez poprawy, po osiagnieciu ktorego jest generowana nowa sciezka
            ////int divCadTab[] = {0,2,4,8}; //dzielnik kadencji (intensyfikacja) w przypadku znalezienia globalnie najlepszego rozwiazania
            //int typesTab[] = {0,1,2};//rodzaj sasiedztwa


            //for (int i = 0;i < sizeof(cadenceTab)/sizeof(int);i++) {
            //    for (int j = 0;j < sizeof(iterTab) / sizeof(int);j++) {
            //        /*for (int k = 0;k < sizeof(divCadTab) / sizeof(int);k++) {*/
            //            for (int l = 0;l < sizeof (typesTab) / sizeof(int);l++) {

            //                ts.setTS(stopTime, cadenceTab[i], iterTab[j], 0, typesTab[l]);
            //                ts.startTS();
            //                ts.saveToFileTabu("test");
            //            }
            //        /*}*/
            //    }
            //}





            break;
        }
        case 5: {
            cout << "Aktualnie wybrane:" << cooler << endl;
            cooler = showCoolerMenu();
            break;
        }
        
        case 6: {
            /*if (matrixSize == 0) {
                cout << "BRAK MACIERZY" << endl;
                break;
            }*/
            LocalSearch sa ;
            sa.setMatrix(matrix, matrixSize);

            

            sa.setSA(cooler,stopTime); 
            sa.startSA();
            sa.saveToFileSA("test");


            //string files[] = {"ftv47.atsp","ftv170.atsp","rbg403.atsp"};
            //int times[] = { 60 , 120 ,180 };
            //double coolers[] = { 0.9998,0.9995,0.999};
            //for (int i = 0;i < 3;i++) {
            //    for (int j = 0;j < 10;j++) {
            //        matrix = getData(files[i]);
            //        matrixSize = matrix[0][0];
            //        matrix[0][0] = matrix[1][1];

            //        sa.setMatrix(matrix, matrixSize);
            //        sa.setSA(coolers[i], times[i]);
            //        sa.startSA();
            //        sa.saveToFileSA("test");
            //    }
            //}
            
            /*double coolers[] = {0.999,0.9995,0.9999};
            for (int i = 0; i<3 ;i++)
            {
                for (int j = 0;j < 2;j++) {
                    sa.setSA(coolers[i], stopTime);
                    sa.startSA();
                    sa.saveToFileSA("test");
                }
            }*/

            break;
        }
        case 0: {
            system("pause");
            break;
        }
        }
    } while (menu != 0);


}

