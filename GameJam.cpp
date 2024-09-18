#include "pch.h"
#include "Biblioteca GameJam.h"

int rescatados_per_v[8];

int main()
{
    for (int i = 0; i < 8; i++) {
        rescatados_per_v[i] = 0;
    }
    Console::ForegroundColor = ConsoleColor::Black;
    Console::BackgroundColor = ConsoleColor::White;
    srand(time(nullptr));
    ventana();
    bool otrapart = 0;
    do {
        Console::Clear();
        otrapart = 0;
        asignar_color_personas();
        inicio();
        int vehiculo1, vehiculo2, vehiculo3;
        eleccion_vehiculo(vehiculo1, vehiculo2, vehiculo3);
        int resca1 = 0, resca2 = 0, resca3 = 0;
        partida(vehiculo1, vehiculo2, vehiculo3, resca1, resca2, resca3);

        rescatados_per_v[vehiculo1] += resca1;
        rescatados_per_v[vehiculo2] += resca2;
        rescatados_per_v[vehiculo3] += resca3;
        char k;
        do {
            Console::Clear();
            cursor(86, 23); cout << char(168) << "Desea jugar otra partida?";
            cursor(50, 25); cout << "_______________________________________________";
            cursor(50, 26); cout << "|                                              |";
            cursor(50, 27); cout << "|                     S" << char(161) << "                       |";
            cursor(50, 28); cout << "|______________________________________________|";
            cursor(50, 29); cout << "       Presione '1' para esta opci" << char(162) << "n           ";
            cursor(102, 25); cout << "_______________________________________________";
            cursor(102, 26); cout << "|                                              |";
            cursor(102, 27); cout << "|                     No                       |";
            cursor(102, 28); cout << "|______________________________________________|";
            cursor(102, 29); cout << "       Presione '2' para esta opci" << char(162) << "n           ";
            k = _getch();
        } while (k != '1' && k != '2');
        switch (k) {
        case '1':
            otrapart = 1;
            break;
        case '2':
            otrapart = 0;
            break;
        }
    } while (otrapart == 1);
    Console::Clear();

    int podio[8], rescatados_copy[8];
    for (int i = 0; i < 8; i++) rescatados_copy[i] = rescatados_per_v[i];
    for (int i = 0; i < 8; i++)podio[i] = i;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (rescatados_copy[j] < rescatados_copy[j + 1]) {
                int temp = rescatados_copy[j + 1];
                rescatados_copy[j + 1] = rescatados_copy[j];
                rescatados_copy[j] = temp;
                temp = podio[j];
                podio[j] = podio[j + 1];
                podio[j + 1] = temp;
            };
        }
    }

    for (int i = 0; i < 47; i++)
    {
        Console::ForegroundColor = ConsoleColor::Black;
        cout << BGranking[i] << endl;
    }
    
    cursor(104, 12); cout << vehiculos[podio[0]][0];
    cursor(104, 13); cout << vehiculos[podio[0]][1];
    cursor(104, 14); cout << vehiculos[podio[0]][2];
    cursor(104, 15); cout << vehiculos[podio[0]][3];
    cursor(104, 16); cout << vehiculos[podio[0]][4];
    cursor(104, 17); cout << vehiculos[podio[0]][5];
    cursor(134, 13); cout << nombresv[podio[0]];
    cursor(134, 15); cout << "N. DE RESCATES: "<<rescatados_copy[0];

    cursor(104, 25); cout << vehiculos[podio[1]][0];
    cursor(104, 26); cout << vehiculos[podio[1]][1];
    cursor(104, 27); cout << vehiculos[podio[1]][2];
    cursor(104, 28); cout << vehiculos[podio[1]][3];
    cursor(104, 29); cout << vehiculos[podio[1]][4];
    cursor(104, 30); cout << vehiculos[podio[1]][5];
    cursor(134, 26); cout << nombresv[podio[1]];
    cursor(134, 28); cout << "N. DE RESCATES: " << rescatados_copy[1];

    cursor(104, 38); cout << vehiculos[podio[2]][0];
    cursor(104, 39); cout << vehiculos[podio[2]][1];
    cursor(104, 40); cout << vehiculos[podio[2]][2];
    cursor(104, 41); cout << vehiculos[podio[2]][3];
    cursor(104, 42); cout << vehiculos[podio[2]][4];
    cursor(104, 43); cout << vehiculos[podio[2]][5];
    cursor(134, 39); cout << nombresv[podio[2]];
    cursor(134, 41); cout << "N. DE RESCATES: " << rescatados_copy[2];
    int s;
    s = getch();

    Console::Clear();
    cursor(45,5); cout << "  ______   _______   ________  _______   ______  ________   ______    ______  ";
    cursor(45,6); cout << " /      \\ |       \\ |        \\|       \\ |      \\|        \\ /      \\  /      \\ ";
    cursor(45,7); cout << "|  $$$$$$\\| $$$$$$$\\| $$$$$$$$| $$$$$$$\\ \\$$$$$$ \\$$$$$$$$|  $$$$$$\\|  $$$$$$\\";
    cursor(45,8); cout << "| $$   \\$$| $$__| $$| $$__    | $$  | $$  | $$     | $$   | $$  | $$| $$___\\$$";
    cursor(45,9); cout << "| $$      | $$    $$| $$  \\   | $$  | $$  | $$     | $$   | $$  | $$ \\$$    \\ ";
    cursor(45,10); cout << "| $$   __ | $$$$$$$\\| $$$$$   | $$  | $$  | $$     | $$   | $$  | $$ _\\$$$$$$\\";
    cursor(45,11); cout << "| $$__/  \\| $$  | $$| $$_____ | $$__/ $$ _| $$_    | $$   | $$__/ $$|  \\__| $$";
    cursor(45,12); cout << " \\$$    $$| $$  | $$| $$     \\| $$    $$|   $$ \\   | $$    \\$$    $$ \\$$    $$";
    cursor(45,13); cout << "  \\$$$$$$  \\$$   \\$$ \\$$$$$$$$ \\$$$$$$$  \\$$$$$$    \\$$     \\$$$$$$   \\$$$$$$ ";
    cursor(60,16); cout << "IAN LANDAURO LA ROSA";
    cursor(60,17); cout << "VANESSA BARRIENTOS VILLALTA";
    cursor(60,18); cout << "SAYA SEZEN HUMALA";

    system("pause>0");
    return 0;
}



