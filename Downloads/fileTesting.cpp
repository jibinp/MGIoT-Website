#include <iostream>
#include <fstream>
using namespace std;

char sysValues[100][100];
int _read__SysValues (void);
int main ()
    {
        _read__SysValues ();
    }

int _read__SysValues ()
    {
    int matX = 0;
    int matY = 0;
    char read_sysValues;
    ifstream inFile;
    inFile.open("filetsting.txt");
    if (!inFile)
        {
        cout << "Unable to open file";
        return 1; // terminate with error
        }

    while (inFile >> read_sysValues)
        {
        //cout << endl << read_sysValues
        if (read_sysValues != '.')
            {
            if (read_sysValues == ',')
                {
                //cout << "\nMatx = " << matX;
                 sysValues[matX][matY] = '\0';
                 matX++;
                 matY = 0;
                }
            else
                {
                //cout << "\n\tMaty = " << matY;
                sysValues[matX][matY] = read_sysValues;
                matY++;
                }
            }


        }
        //cout << endl;
        for(int i = 0; i <=matX; i++)
            {
             for(int j = 0; sysValues[i][j] != '\0'; j++)
                cout << sysValues[i][j];
             cout << endl;
            }
    }
