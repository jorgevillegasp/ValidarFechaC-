#include <iostream>

using namespace std;

int main(int argc, char **argv)

{

    setlocale(LC_ALL, "spanish");

    int dd, mm, aa, dds, mms, aas;

    {
        cout << "             ==================== " << endl;
        cout << "             | ingrese una fecha|" << endl;
        cout << "             ====================" << endl;
        cout << "" << endl;
        cout << "    dia: ";
        cin >> dd;
        cout << "    mes: ";
        cin >> mm;
        cout << "    año: ";
        cin >> aa;
        cout << "" << endl;
        cout << "    _" << dd;
        cout << "_/_" << mm;
        cout << "_/_" << aa;
        cout << "_" << endl;
        cout << "" << endl;

        if (aa >= 2000)

        {
            switch (mm)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (dd >= 1 && dd <= 31)
                {
                    cout << "la fecha introducida es correcta" << endl;
                }
                else
                {
                    cout << "el dia indresado no es correcto" << endl;
                }

                break;
            case 4:
            case 6:
            case 9:
            case 11:

                if (dd >= 1 && dd <= 30)
                {
                    cout << "la fecha ingresada es correcta." << endl;
                }
                else
                {
                    cout << "el dia ingresado no es valido" << endl;
                }

                break;

            case 2:
                if (dd >= 1 && dd <= 28)
                {
                    cout << "la fecha ingresada es correcta" << endl;
                }
                else
                {
                    cout << "el dia indresado no es el correcto" << endl;
                }
                break;
            default:
                cout << "el mes ingresado no es valido" << endl;
            }
        }

        else
        {
            cout << "debe ingresas un año perteneciente al siglo XXI." << endl;
        }
        cout << "\n\n\n";
        cout << "         ==============================" << endl;
        cout << "         | LA FECHA DEL SIGUIENTE DIA |" << endl;
        cout << "         ==============================" << endl;

        // utiliza una linea if and else
    }

    // Validamos si el año es bisiestos
    if ((dd == 30 && (mm == 4 || mm == 6 || mm == 9 || mm == 11)) || (dd == 29 && mm == 2) || (dd == 28 && mm == 2 && ((aa % 4 != 0) || (aa % 100) == 0) && (aa % 400) != 0) || dd == 31)
    {
        mms = mm + 1;
        dds = 1;
    }
    else
    {
        // Para los años que no son bisiestos
        dds = dd + 1;
        mms = mm;
    }

    // Validamos si el dia el el ultimo dia del año
    if (dds == 1 && mms == 13)
    {
        mms = 1;
        aas = aa + 1;
    }
    else
    {
        aas = aa;
    }

    cout << "    año: " << aas << endl;
    cout << "    mes: " << mms << endl;
    cout << "    dia: " << dds << endl;
    cout << "" << endl;
    cout << "    ==================" << endl;
    cout << "    |_" << dds;
    cout << "_/_" << mms;
    cout << "_/_" << aas;
    cout << "_|" << endl;
    cout << "" << endl;

    system("pause");

    return 0;
}
