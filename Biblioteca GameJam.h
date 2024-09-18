#pragma once
#include "iostream"
#include "conio.h"
#include "Windows.h"
using namespace std;
using namespace System;

int colores_personas[10];
void asignar_color_personas()
{
	for (int i = 0; i < 10; i++)
	{
		colores_personas[i] = 1 + rand() % 14;
	}
}
string persona[2][3]{
	{
		{" o"},
		{"-|-"},
		{ "/ \\"}
	},
	{
		{ " o" },
		{" |_"},
		{" //"}
	}
};
string soga[27]{
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},
	{"|"},

};
void ventana()
{
	Console::SetWindowSize(210, 47);
	Console::CursorVisible = false;
}
void cursor(int x, int y)
{
	Console::SetCursorPosition(x, y);
}
int aleatorio()
{
	return 12 + rand() % (15 - 12 + 1);
}
string nombresv[8]{
	{"VIENTO AGIL"},
	{" ALBATROS  "},
	{"TORBELLINO "},
	{"  AQUILA   "},
	{"  STRATOS  "},
	{"  AURORA   "},
	{"  SPARROW  "},
	{"   FENIX   " }
};
string vehiculos[8][6]
{
	{
		{" "},
		{"   -----|-----"},
		{"*>=====[_]L)"},
		{"      _'_`_ "},
		{" "},
		{" " }
	},


	{
		{" ____________ | __________"},
		{"/__|__|__|__(> <)__|__|__|__-"},
		{"          _ /   -_"},
		{"        (_ /     -_)"},
		{" "},
		{" "}
	},
	{
		{"-----------|--------"},
		{ "      /__ __-" },
		{ "     | __||__|" },
		{ "       -____/" },
		{ "    (_-    -_)" },
		{" "}
	},
	{
		{"      __"},
		{"      - -"},
		{"|-_____-_-__"},
		{"|\"\"\"\"\"\"\"  \" )"},
		{"/-     / /—-"},
		{"      /_/"},
	},
	{
		{"/\\"},
		{"\\ \\"},
		{"/--\\"},
		{"\\--/"},
		{"/ / "},
		{"\\/ "}
	},
	{
		{" _____"},
		{"/ /  \\ \\"},
		{"| |  | |"},
		{"\\_\\_/_/"},
		{"  |_| "},
		{"  \\_/"},
	},
	{
		{"       ________|______"},
		{"| \\            |      "},
		{"|  \\_______--------..._"},
		{"'-----------.._____..._|" },
		{"              /  / "},
		{"             0  0"},
	},
			{
		{" "},
		{"        -+-       "},
		{"-- - o--(_)--o-- -"},
				{"       0 \" 0     "},
				{" "},
				{" "}
	}


};

void instrucciones()
{
	int a;
	Console::Clear();
	cursor(60, 2); cout << " ______  __    __   ______   ________  _______   __    __   ______    ______   ______   ______   __    __  ________   ______  ";
	cursor(60, 3); cout << "/      |/  \\  /  | /      \\ /        |/       \\ /  |  /  | /      \\  /      \\ /      | /      \\ /  \\  /  |/        | /      \\ ";
	cursor(60, 4); cout << "$$$$$$/ $$  \\ $$ |/$$$$$$  |$$$$$$$$/ $$$$$$$  |$$ |  $$ |/$$$$$$  |/$$$$$$  |$$$$$$/ /$$$$$$  |$$  \\ $$ |$$$$$$$$/ /$$$$$$  |";
	cursor(60, 5); cout << "  $$ |  $$$  \\$$ |$$ \\__$$/    $$ |   $$ |__$$ |$$ |  $$ |$$ |  $$/ $$ |  $$/   $$ |  $$ |  $$ |$$$  \\$$ |$$ |__    $$ \\__$$/ ";
	cursor(60, 6); cout << "  $$ |  $$$$  $$ |$$      \\    $$ |   $$    $$< $$ |  $$ |$$ |      $$ |        $$ |  $$ |  $$ |$$$$  $$ |$$    |   $$      \\ ";
	cursor(60, 7); cout << "  $$ |  $$ $$ $$ | $$$$$$  |   $$ |   $$$$$$$  |$$ |  $$ |$$ |   __ $$ |   __   $$ |  $$ |  $$ |$$ $$ $$ |$$$$$/     $$$$$$  |";
	cursor(60, 8); cout << " _$$ |_ $$ |$$$$ |/  \\__$$ |   $$ |   $$ |  $$ |$$ \\__$$ |$$ \\__/  |$$ \\__/  | _$$ |_ $$ \\__$$ |$$ |$$$$ |$$ |_____ /  \\__$$ |";
	cursor(60, 9); cout << "/ $$   |$$ | $$$ |$$    $$/    $$ |   $$ |  $$ |$$    $$/ $$    $$/ $$    $$/ / $$   |$$    $$/ $$ | $$$ |$$       |$$    $$/ ";
	cursor(60, 10); cout << "$$$$$$ / $$ / $$ / $$$$$$ / $$ / $$ / $$ / $$$$$$ / $$$$$$ / $$$$$$ / $$$$$$ / $$$$$$ / $$ / $$ / $$$$$$$$ / $$$$$$ / $$$$";

	cursor(5, 15); cout << " _____________    __  _    __ ___ ___ ___  __ _  _  _    _ ";
	cursor(5, 16); cout << "|  _________  |   |_ |_ |  |_ |   |    |  |  ||\\ | |_    _|";
	cursor(5, 17); cout << "|      |      |   __||_ |_ |_ |__ |__ _|_ |__|| \\| |_    _|";
	cursor(5, 18); cout << "|      |      |   __   __ _     ___ ___ _  _    __  __     ";
	cursor(5, 19); cout << "|      |      |    \\   / |_ |__| |  |   |  ||  |  | |_     ";
	cursor(5, 20); cout << "|  ____|____  |     \\_/  |_ |  |_|_ |__ |__||_ |__| __|    ";
	cursor(5, 21); cout << "|_____________|                                             ";

	cursor(5, 25); cout << "                _____________ ";
	cursor(5, 26); cout << "               |      _      |";
	cursor(5, 27); cout << "               |     /|\\     |";
	cursor(5, 28); cout << "               |    / | \\    |";
	cursor(5, 29); cout << "               |      |      |";
	cursor(5, 30); cout << "               |      |      |";
	cursor(5, 31); cout << "               |_____________|";
	cursor(5, 32); cout << " _____________  _____________  _____________ ";
	cursor(5, 33); cout << "|             ||             ||             |";
	cursor(5, 34); cout << "|   /         ||      |      ||         \\   |";
	cursor(5, 35); cout << "|  {-------   ||      |      ||   -------}  |";
	cursor(5, 36); cout << "|   \\         ||    \\ | /    ||         /   |";
	cursor(5, 37); cout << "|             ||     \\_/     ||             |";
	cursor(5, 38); cout << "|_____________||_____________||_____________|";
	cursor(5, 40); cout << "          |\\/| _       __ _  __  __";
	cursor(5, 41); cout << "          |  || | \\  / |_ |> |_  |_";
	cursor(5, 42); cout << "          |  ||_|  \\/  |_ |\\ __| |_";

	cursor(55, 25); cout << "____________________";
	cursor(55, 26); cout << "|                   | ";
	cursor(55, 27); cout << "| __ _  _ ___ __ _  |";
	cursor(55, 28); cout << "| |_ |\\ |  |  |_ |> |";
	cursor(55, 29); cout << "| |_ | \\|  |  |_ |\\ |";
	cursor(55, 30); cout << "|                   |";
	cursor(55, 31); cout << "|---------|         |";
	cursor(55, 32); cout << "          |         |";
	cursor(55, 33); cout << "          |         |";
	cursor(55, 34); cout << "          |_________|";
	cursor(55, 35); cout << "__   __ ____ ___ _ ";
	cursor(55, 36); cout << "|_ | |_ | __  |  |>";
	cursor(55, 37); cout << "|_ |_|_ |__| _|_ |\\";

	cursor(77, 15); cout << "|";
	cursor(77, 16); cout << "|";
	cursor(77, 17); cout << "|";
	cursor(77, 18); cout << "|";
	cursor(77, 19); cout << "|";
	cursor(77, 20); cout << "|";
	cursor(77, 21); cout << "|";
	cursor(77, 22); cout << "|";
	cursor(77, 23); cout << "|";
	cursor(77, 24); cout << "|";
	cursor(77, 25); cout << "|";
	cursor(77, 26); cout << "|";
	cursor(77, 27); cout << "|";
	cursor(77, 28); cout << "|";
	cursor(77, 29); cout << "|";
	cursor(77, 30); cout << "|";
	cursor(77, 31); cout << "|";
	cursor(77, 32); cout << "|";
	cursor(77, 33); cout << "|";
	cursor(77, 34); cout << "|";
	cursor(77, 35); cout << "|";
	cursor(77, 36); cout << "|";
	cursor(77, 37); cout << "|";
	cursor(77, 38); cout << "|";
	cursor(77, 39); cout << "|";
	cursor(77, 40); cout << "|";
	cursor(77, 41); cout << "|";

	cursor(80, 15); cout << " _________     O                                              O     _      ";
	cursor(80, 16); cout << " | _____ |   __| ___ ____ _  _ ____  ___ _  _ ___ ___ ___  _  |__  |_|   LA SIMULACION DEL RESCATE INCIA INMEDIATAMENTE";
	cursor(80, 17); cout << " | _|_|_ |  |    |   |  | |\\/| |  |   |  |\\ |  |  |    |  |_|    |  _    DESPUES DE SELECCIONAR LOS 3 VEHICULOS. ES UNA";
	cursor(80, 18); cout << " |_______|  |___ |__ |__| |  | |__|  _|_ | \\| _|_ |__ _|_ | | ___| |_|   SUMULACION, POR LO QUE DEBE ESPERAR A QUE TERMINE.";
	cursor(80, 23); cout << " ___________     O                                            O     _                                                          ";
	cursor(80, 24); cout << " | _______ |   __| ___ ____ _  _ ____  __ __  ____  _ _  _ _  |__  |_|   POR SIMULACION HAY UN VEHICULO GANADOR. ESTE SE";
	cursor(80, 25); cout << " | _|_|_|_ |  |    |   |  | |\\/| |  |  |_ |_  | __ |_||\\ ||_|    |  _    DEFINE POR LA CANTIDAD DE PERSONAS RESCATADAS.";
	cursor(80, 26); cout << " |_________|  |___ |__ |__| |  | |__|  __||_  |__| | || \\|| | ___| |_|   ES DECIR, GANA EL QUE RESCATE MAS.";
	cursor(80, 31); cout << " _________     O                                                     O     _    LUEGO DE CADA SIMULACION SE GENERARA UNA PANTALLA  ";
	cursor(80, 32); cout << " | _____ |   __| ___ _  _  _ _  _ _  __   ___ __ _ _  _ ___ _  _  _  |__  |_|   DE FINAL. AHI PREGUNTARA SI QUIERE REALIZAR OTRA ";
	cursor(80, 33); cout << " | _\\/|_ |  |    |   |  | |_||\\ | |\\|  |   |  |_ |>|\\/|  |  |\\ | |_|    |  _    SIMULACION O NO, SI SELECCIONA QUE NO, SE MOSTRARA";
	cursor(80, 34); cout << " |_______|  |___ |__ |__| | || \\| |/|__|   |  |_ |\\|  | _|_ | \\| | | ___| |_|   UNA TABLA DE RANKINGS DE PERSONAS RESCATADAS. ";
	a = _getch();
	Console::Clear();
}
void inicio() {
	int k, y = 21, op = 1;
	bool first = 0;
	Console::Clear();
	do {
		if (!first) {
			cursor(40, 1); cout << "$$$$$$$\\  $$$$$$$$\\  $$$$$$\\   $$$$$$\\   $$$$$$\\ $$$$$$$$\\ $$$$$$$$\\       $$$$$$$\\   $$$$$$\\  $$$$$$$\\ $$$$$$\\ $$$$$$$\\   $$$$$$\\     ";
			cursor(40, 2); cout << "$$  __$$\\ $$  _____|$$  __$$\\ $$  __$$\\ $$  __$$\\\\__$$  __|$$  _____|      $$  __$$\\ $$  __$$\\ $$  __$$\\\\_$$  _|$$  __$$\\ $$  __$$\\   ";
			cursor(40, 3); cout << "$$ |  $$ |$$ |      $$ /  \\__|$$ /  \\__|$$ /  $$ |  $$ |   $$ |            $$ |  $$ |$$ /  $$ |$$ |  $$ | $$ |  $$ |  $$ |$$ /  $$ |$$\\";
			cursor(40, 4); cout << "$$$$$$$  |$$$$$\\    \\$$$$$$\\  $$ |      $$$$$$$$ |  $$ |   $$$$$\\          $$$$$$$  |$$$$$$$$ |$$$$$$$  | $$ |  $$ |  $$ |$$ |  $$ |\\__|";
			cursor(40, 5); cout << "$$  __$$< $$  __|    \\____$$\\ $$ |      $$  __$$ |  $$ |   $$  __|         $$  __$$< $$  __$$ |$$  ____/  $$ |  $$ |  $$ |$$ |  $$ |    ";
			cursor(40, 6); cout << "$$ |  $$ |$$ |      $$\\   $$ |$$ |  $$\\ $$ |  $$ |  $$ |   $$ |            $$ |  $$ |$$ |  $$ |$$ |       $$ |  $$ |  $$ |$$ |  $$ |$$\\ ";
			cursor(40, 7); cout << "$$ |  $$ |$$$$$$$$\\ \\$$$$$$  |\\$$$$$$  |$$ |  $$ |  $$ |   $$$$$$$$\\       $$ |  $$ |$$ |  $$ |$$ |     $$$$$$\\ $$$$$$$  | $$$$$$  |\\__|";
			cursor(40, 8); cout << "\\__|  \\__|\\________| \\______/  \\______/ \\__|  \\__|  \\__|   \\________|      \\__|  \\__|\\__|  \\__|\\__|     \\______|\\_______/  \\______/    ";
			cursor(30, 10); cout << "$$\\      $$\\ $$$$$$\\  $$$$$$\\  $$$$$$\\  $$$$$$\\  $$\\   $$\\        $$$$$$\\   $$$$$$\\  $$\\   $$\\    $$\\  $$$$$$\\  $$\\      $$\\ $$$$$$$$\\ $$\\   $$\\ $$$$$$$$\\  $$$$$$\\ ";
			cursor(30, 11); cout << "$$$\\    $$$ |\\_$$  _|$$  __$$\\ \\_$$  _|$$  __$$\\ $$$\\  $$ |      $$  __$$\\ $$  __$$\\ $$ |  $$ |   $$ |$$  __$$\\ $$$\\    $$$ |$$  _____|$$$\\  $$ |\\__$$  __|$$  __$$\\";
			cursor(30, 12); cout << "$$$$\\  $$$$ |  $$ |  $$ /  \\__|  $$ |  $$ /  $$ |$$$$\\ $$ |      $$ /  \\__|$$ /  $$ |$$ |  $$ |   $$ |$$ /  $$ |$$$$\\  $$$$ |$$ |      $$$$\\ $$ |   $$ |   $$ /  $$ |";
			cursor(30, 13); cout << "$$\\$$\\$$ $$ |  $$ |  \\$$$$$$\\    $$ |  $$ |  $$ |$$ $$\\$$ |      \\$$$$$$\\  $$$$$$$$ |$$ |  \\$$\\  $$  |$$$$$$$$ |$$\\$$\\$$ $$ |$$$$$\\    $$ $$\\$$ |   $$ |   $$ |  $$ |";
			cursor(30, 14); cout << "$$ \\$$$  $$ |  $$ |   \\____$$\\   $$ |  $$ |  $$ |$$ \\$$$$ |       \\____$$\\ $$  __$$ |$$ |   \\$$\\$$  / $$  __$$ |$$ \\$$$  $$ |$$  __|   $$ \\$$$$ |   $$ |   $$ |  $$ |";
			cursor(30, 15); cout << "$$ |\\$  /$$ |  $$ |  $$\\   $$ |  $$ |  $$ |  $$ |$$ |\\$$$ |      $$\\   $$ |$$ |  $$ |$$ |    \\$$$  /  $$ |  $$ |$$ |\\$  /$$ |$$ |      $$ |\\$$$ |   $$ |   $$ |  $$ |";
			cursor(30, 16); cout << "$$ | \\_/ $$ |$$$$$$\\ \\$$$$$$  |$$$$$$\\  $$$$$$  |$$ | \\$$ |      \\$$$$$$  |$$ |  $$ |$$$$$$$$\\\\$  /   $$ |  $$ |$$ | \\_/ $$ |$$$$$$$$\\ $$ | \\$$ |   $$ |    $$$$$$  |";
			cursor(30, 17); cout << "\\__|     \\__|\\______| \\______/ \\______| \\______/ \\__|  \\__|       \\______/ \\__|  \\__|\\________|\\_/    \\__|  \\__|\\__|     \\__|\\________|\\__|  \\__|   \\__|    \\______/";

			cursor(69, 21); cout << " ____________________________________________________________________";
			cursor(69, 22); cout << "||                       ____      ____                              ||";
			cursor(69, 23); cout << "||                      |    | |  |    | \\   |                       ||";
			cursor(69, 24); cout << "||                      |____| |  |____|  \\__|                       ||";
			cursor(69, 25); cout << "||                      |      |_ |    |  ___|                       ||";
			cursor(69, 26); cout << "||___________________________________________________________________||";


			cursor(69, 28); cout << " _____________________________________________________________________";
			cursor(69, 29); cout << "||  ___ .     .___  ___  ____  _   _ ____ ___  ___  ___  .   . .___   ||";
			cursor(69, 30); cout << "||   |  |\\  | |___   |   |___| |   | |     |    |  |   | |\\  | |___   ||";
			cursor(69, 31); cout << "||   |  | \\ |     |  |   | \\   |   | |     |    |  |   | | \\ |     |  ||";
			cursor(69, 32); cout << "||  _|_ |  \\| ____|  |   |  \\_ |___| |___  |   _|_ |___| |  \\| ____|  ||";
			cursor(69, 33); cout << "||____________________________________________________________________||";

		}
		cursor(55, y); cout << "       | \\";
		cursor(55, y + 1); cout << "_______|  \\ ";
		cursor(55, y + 2); cout << "|          \\  ";
		cursor(55, y + 3); cout << "|_______   /  ";
		cursor(55, y + 4); cout << "       |  / ";
		cursor(55, y + 5); cout << "       | /";
		k = _getch();
		cursor(55, y); cout << "          ";
		cursor(55, y + 1); cout << "            ";
		cursor(55, y + 2); cout << "              ";
		cursor(55, y + 3); cout << "              ";
		cursor(55, y + 4); cout << "            ";
		cursor(55, y + 5); cout << "          ";
		if (k == 72)op = 1;
		if (k == 80)op = 2;
		if (k == 13 && op == 2) {
			instrucciones();
			first = 0;
		}
		y = ((op == 1) * 21) + ((op == 2) * 28);


	} while (k != 13 || op != 1);
}


void eleccion_vehiculo(int& op1, int& op2, int& op3)
{
	Console::Clear();
	int y = 15, x = 11, ndeops = 0, op = 0, x1 = 20, y1 = 15;
	char k;
	cursor(27, 2); cout << " ________  __        ______   ______   ________         ______         __     __  ________  __    __  ______   ______   __    __  __         ______    ______  ";
	cursor(27, 3); cout << "/        |/  |      /      | /      \\ /        |       /      \\       /  |   /  |/        |/  |  /  |/      | /      \\ /  |  /  |/  |       /      \\  /      \\ ";
	cursor(27, 4); cout << "$$$$$$$$/ $$ |      $$$$$$/ /$$$$$$  |$$$$$$$$/       /$$$$$$  |      $$ |   $$ |$$$$$$$$/ $$ |  $$ |$$$$$$/ /$$$$$$  |$$ |  $$ |$$ |      /$$$$$$  |/$$$$$$  |";
	cursor(27, 5); cout << "$$ |__    $$ |        $$ |  $$ | _$$/ $$ |__          $$ ___$$ |      $$ |   $$ |$$ |__    $$ |__$$ |  $$ |  $$ |  $$/ $$ |  $$ |$$ |      $$ |  $$ |$$ \\__$$/ ";
	cursor(27, 6); cout << "$$    |   $$ |        $$ |  $$ |/    |$$    |           /   $$<       $$  \\ /$$/ $$    |   $$    $$ |  $$ |  $$ |      $$ |  $$ |$$ |      $$ |  $$ |$$      \\ ";
	cursor(27, 7); cout << "$$$$$/    $$ |        $$ |  $$ |$$$$ |$$$$$/           _$$$$$  |       $$  /$$/  $$$$$/    $$$$$$$$ |  $$ |  $$ |   __ $$ |  $$ |$$ |      $$ |  $$ | $$$$$$  |";
	cursor(27, 8); cout << "$$ |_____ $$ |_____  _$$ |_ $$ \\__$$ |$$ |_____       /  \\__$$ |        $$ $$/   $$ |_____ $$ |  $$ | _$$ |_ $$ \\__/  |$$ \\__$$ |$$ |_____ $$ \\__$$ |/  \\__$$ |";
	cursor(27, 9); cout << "$$       |$$       |/ $$   |$$    $$/ $$       |      $$    $$/          $$$/    $$       |$$ |  $$ |/ $$   |$$    $$/ $$    $$/ $$       |$$    $$/ $$    $$/ ";
	cursor(27, 10); cout << "$$$$$$$$/ $$$$$$$$/ $$$$$$/  $$$$$$/  $$$$$$$89$/      $$$$$$/            $/     $$$$$$$$/ $$/   $$/ $$$$$$/  $$$$$$/   $$$$$$/  $$$$$$$$/  $$$$$$/   $$$$$$/";


	cursor(5, 12); cout << "__________________________________________________________________________________________________________________________________________________________________________________________";
	cursor(20, 15); cout << vehiculos[0][0];
	cursor(20, 16); cout << vehiculos[0][1];
	cursor(20, 17); cout << vehiculos[0][2];
	cursor(20, 18); cout << vehiculos[0][3];
	cursor(20, 19); cout << vehiculos[0][4];
	cursor(20, 20); cout << vehiculos[0][5];
	cursor(22, 22); cout << nombresv[0];


	cursor(52, 15); cout << vehiculos[1][0];
	cursor(52, 16); cout << vehiculos[1][1];
	cursor(52, 17); cout << vehiculos[1][2];
	cursor(52, 18); cout << vehiculos[1][3];
	cursor(52, 19); cout << vehiculos[1][4];
	cursor(52, 20); cout << vehiculos[1][5];
	cursor(54, 22); cout << nombresv[1];


	cursor(100, 15); cout << vehiculos[2][0];
	cursor(100, 16); cout << vehiculos[2][1];
	cursor(100, 17); cout << vehiculos[2][2];
	cursor(100, 18); cout << vehiculos[2][3];
	cursor(100, 19); cout << vehiculos[2][4];
	cursor(100, 20); cout << vehiculos[2][5];
	cursor(102, 22); cout << nombresv[2];


	cursor(151, 14); cout << vehiculos[3][0];
	cursor(151, 15); cout << vehiculos[3][1];
	cursor(151, 16); cout << vehiculos[3][2];
	cursor(151, 17); cout << vehiculos[3][3];
	cursor(151, 18); cout << vehiculos[3][4];
	cursor(151, 19); cout << vehiculos[3][5];
	cursor(153, 22); cout << nombresv[3];


	cursor(26, 26); cout << vehiculos[4][0];
	cursor(26, 27); cout << vehiculos[4][1];
	cursor(26, 28); cout << vehiculos[4][2];
	cursor(26, 29); cout << vehiculos[4][3];
	cursor(26, 30); cout << vehiculos[4][4];
	cursor(26, 31); cout << vehiculos[4][5];
	cursor(28, 33); cout << nombresv[4];


	cursor(63, 26); cout << vehiculos[5][0];
	cursor(63, 27); cout << vehiculos[5][1];
	cursor(63, 28); cout << vehiculos[5][2];
	cursor(63, 29); cout << vehiculos[5][3];
	cursor(63, 30); cout << vehiculos[5][4];
	cursor(63, 31); cout << vehiculos[5][5];
	cursor(65, 33); cout << nombresv[5];


	cursor(103, 26); cout << vehiculos[6][0];
	cursor(103, 27); cout << vehiculos[6][1];
	cursor(103, 28); cout << vehiculos[6][2];
	cursor(103, 29); cout << vehiculos[6][3];
	cursor(103, 30); cout << vehiculos[6][4];
	cursor(103, 31); cout << vehiculos[6][5];
	cursor(105, 33); cout << nombresv[6];


	cursor(149, 26); cout << vehiculos[7][0];
	cursor(149, 27); cout << vehiculos[7][1];
	cursor(149, 28); cout << vehiculos[7][2];
	cursor(149, 29); cout << vehiculos[7][3];
	cursor(149, 30); cout << vehiculos[7][4];
	cursor(149, 31); cout << vehiculos[7][5];
	cursor(151, 33); cout << nombresv[7];
	cursor(5, 39); cout << "______________________________________________________________________________________________________________________________________________________________________________________";
	do {
		Console::ForegroundColor = ConsoleColor::Blue;
		cursor(x, y);     cout << "| \\";
		cursor(x, y + 1); cout << "|  \\";
		cursor(x, y + 2); cout << "|   \\";
		cursor(x, y + 3); cout << "|   /  ";
		cursor(x, y + 4); cout << "|  / ";
		cursor(x, y + 5); cout << "| /";
		k = _getch();
		cursor(x, y);     cout << "   ";
		cursor(x, y + 1); cout << "     ";
		cursor(x, y + 2); cout << "      ";
		cursor(x, y + 3); cout << "      ";
		cursor(x, y + 4); cout << "     ";
		cursor(x, y + 5); cout << "   ";
		switch (k) {
		case 13:
			switch (ndeops) {
			case 0:
				ndeops++;
				op1 = op;
				break;
			case 1:
				if (op1 != op) {
					op2 = op;
					ndeops++;
				}
				break;
			case 2:
				if (op2 != op && op1 != op) {
					op3 = op;
					ndeops++;
				}
				break;
			}
			break;
		case 72:
			if (op > 3) {
				op -= 4;
				y = 15;
			}
			break;
		case 80:
			if (op < 4) {
				op += 4;
				y = 26;
			}
			break;
		case 77:
			if (op != 3 && op != 7) {
				if (op == 4 || op == 0)x = 40;
				else if (op == 1 || op == 5)x = 90;
				else if (op == 2 || op == 6)x = 140;
				op++;
			}
			break;
		case 75:
			if (op != 0 && op != 4) {
				if (op == 3 || op == 7)x = 90;
				else if (op == 1 || op == 5)x = 11;
				else if (op == 2 || op == 6)x = 40;
				op--;
			}
			break;
		}
		switch (op) {
		case 0:
			x1 = 20; y1 = 15;
			break;
		case 1:
			x1 = 52; y1 = 15;
			break;
		case 2:
			x1 = 100; y1 = 15;
			break;
		case 3:
			x1 = 151; y1 = 14;
			break;
		case 4:
			x1 = 26; y1 = 26;
			break;
		case 5:
			x1 = 63; y1 = 26;
			break;
		case 6:
			x1 = 103; y1 = 26;
			break;
		case 7:
			x1 = 149; y1 = 26;
			break;
		}
		if (k == 13) {
			Console::ForegroundColor = ConsoleColor::Red;
			cursor(x1, y1); cout << vehiculos[op][0];
			cursor(x1, y1 + 1); cout << vehiculos[op][1];
			cursor(x1, y1 + 2); cout << vehiculos[op][2];
			cursor(x1, y1 + 3); cout << vehiculos[op][3];
			cursor(x1, y1 + 4); cout << vehiculos[op][4];
			cursor(x1, y1 + 5); cout << vehiculos[op][5];
			cursor(x1 + 2, y + 7); cout << nombresv[op];
		}
	} while (ndeops != 3);
	Console::ForegroundColor = ConsoleColor::Black;
	Console::Clear();
}


string fondo[47]{
{"|\\ _      _       |\\  _           |            VELOCIDADES           |            DIMENSIONES           |           P. RESCATADOS          |           TIEMPO PASADO            |                      "},
{"|/|_||\\ ||_ |     | ||_           |           =============          |           ==============         |          ===============         |          =================         |                       "},
{"| | || \\||_ |_    |/ |_           |    V. Vehiculo 1:                |    D. Vehiculo 1:                |    R. Vehiculo 1:                |                                    |                       "},
{"   _  _     ___ |>  _  |          |    V. Vehiculo 2:                |    D. Vehiculo 2:                |    R. Vehiculo 2:                |                                    |                       "},
{"  |_ |_| |\\| |  |\\ |_| |_         |    V. Vehiculo 3:                |    D. Vehiculo 3:                |    R. Vehiculo 3:                |                                    |                       "},
{"__________________________________|__________________________________|__________________________________|__________________________________|____________________________________|                       "},
{"                                                                                                                                                                                                        "},
{"                                ++ - . - ++ + ++--++ + -.++-- +                                                                                                                                         "},
{"                        +-.   .+-        -             .+                                                                                                                                               "},
{"                     -+                            ++++                                                                                                                                                 "},
{"                     -                           ---                                                                                                                                                    "},
{"                   --                   -    +----                                                                                                                                                      "},
{"                  -                   .+ --                                                                                                                                                             "},
{"                +-                 -+                                                                                                                                                                   "},
{"                +.            -++-                                                                                                                                                                      "},
{"                -+-         +-                                                                                                                                                                          "},
{"                  +      +.                                                                                                                                                                             "},
{"                   -    -                                                                                                                                                                               "},
{"                 ...------...                                                                                                                                                                           "},
{"                -............-                                                                                                                                     ####################                 "},
{"               ................                                                                                                                                    #                  #                 "},
{"              -................-                                                                                                                                   #      |----|      #                 "},
{"             --................--                                                                                                                                  #      |    |      #                 "},
{"            -...+#+....+.........-                                                                                                                         #########  |---      ----| ########          "},
{"           -...#+-+...#++....#+...-                                                                                                                         ########  |             | #######           "},
{"          ... ++.-#...+-+....#+#...-                                                                                                                         + #      |___      ____|     #             "},
{"          ##+++-...+..#+.++...#.+#...-                                                                                                           ##########.##     #      |    |      #   ##.########## "},
{"         #+........-++-..-+...#..+#...-                                                                                                         ##          ##     #      |----|      #   ##          ##"},
{"        #-................++..+...+#...-.                                                                                                       ##############     #                  #   ##############"},
{"       ##-.................-++++....+++....                                                                                                       #          #                            #          #  "},
{"      ##.............................-++-...                                                                                                      #  ###### ##                            ## ######  #  "},
{"     ##................................-+++##                                                                                                     #  #    # ##   # # #   ######   # # #   ## #    #  #  "},
{"    #+......................................+#                                                                                                    #  #    # ##   #   #   #    #   #   #   ## #    #  #  "},
{"   ##-........................................-##                                                                                                 #  #    # ##   #-#.#   ######   #.#-#   ## #    #  #  "},
{"  ##............................................## -----                                                                                          #         ##                            ##         #  "},
{" #-..............................................-#      \\                                                                                        #         ##   #####   ######   #####   ##         #  "},
{"######################################################     ---------                                                                              #  ###### ##   #   #   #    #   #   #   ## ######  #  "},
{"                                                                    \\                                                                             #  #    # ##   #   #   #    #   #   #   ## #    #  #  "},
{"                                                                      -------                                                                     #  ###### ##     # ############## #     ## ######  #  "},
{"                                                                               \\                                          ________________________#         ##       #     ##     #       ##         #  "},
{"                                                                                  ----------\\                             /                       #  ###### +#       #     ##     #       ## ######  #  "},
{"                                                                                              \\                          /                        #         ##       #     ##     #       ##         #  "},
{"                                                                                                \\                       /                        #######################################################"},
{"                                                                                                 |                     /                       #########################################################"},
{"                                                                                                 |                    /                                                                                 "},
{"                                                                                                 |                   /                                                                                  "},
{"                                                                                                 |                  ------------------------------------------------------------------------------------"}
};

int color_vehiculo[8][6][27]{
	{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
		{8,8,3,3,3,3,3,8,8,8,3,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,1,3,1,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{
		{0,4,4,4,4,4,4,4,4,4,4,4,4,0,4,0,4,4,4,4,4,4,4,4,4,4,0},
		{4,4,4,14,4,4,14,4,4,14,4,4,9,9,0,9,9,4,4,14,4,4,14,4,4,14},
		{0,0,0,0,0,0,0,0,0,0,8,0,8,0,8,8,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,8,8,0,8,0,8,8,8,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{{0,9,9,9,9,9,9,9,9,9,0,9,0,9,0,9,9,9,9,9,9,9,9,0,0,0,0},
		{0,0,0,0,0,0,2,3,3,0,3,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,2,0,3,3,3,3,3,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,2,2,2,2,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,2,2,2,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4}
	},
	{{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}
	},
	{{6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
{6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
{6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
{6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
{6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
{6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6}
},
	{{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
{7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7}
	},
	{
		{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8}
	},
};
void coloress(int color) {
	switch (color) {
	case 1:
		Console::ForegroundColor = ConsoleColor::DarkBlue;
		break;
	case 2:
		Console::ForegroundColor = ConsoleColor::DarkGreen;
		break;
	case 3:
		Console::ForegroundColor = ConsoleColor::DarkCyan;
		break;
	case 4:
		Console::ForegroundColor = ConsoleColor::DarkRed;
		break;
	case 5:
		Console::ForegroundColor = ConsoleColor::DarkMagenta;
		break;
	case 6:
		Console::ForegroundColor = ConsoleColor::DarkYellow;
		break;
	case 7:
		Console::ForegroundColor = ConsoleColor::Gray;
		break;
	case 8:
		Console::ForegroundColor = ConsoleColor::DarkGray;
		break;
	case 9:
		Console::ForegroundColor = ConsoleColor::Blue;
		break;
	case 10:
		Console::ForegroundColor = ConsoleColor::Green;
		break;
	case 11:
		Console::ForegroundColor = ConsoleColor::Cyan;
		break;
	case 12:
		Console::ForegroundColor = ConsoleColor::Red;
		break;
	case 13:
		Console::ForegroundColor = ConsoleColor::Magenta;
		break;
	case 14:
		Console::ForegroundColor = ConsoleColor::Yellow;
		break;
	}
}

void panel(int vel1, int vel2, int vel3, int op1, int op2, int op3)
{
	cursor(54, 2); cout << 200 - vel1 << " km/h";
	cursor(54, 3); cout << 200 - vel2 << " km/h";
	cursor(54, 4); cout << 200 - vel3 << " km/h";
	cursor(89, 2); switch (op1)
	{
	case 0: cout << "14 x 3"; break;
	case 1: cout << "29 x 4"; break;
	case 2: cout << "36 x 5"; break;
	case 3: cout << "12 x 6"; break;
	case 4: cout << "4 x 6"; break;
	case 5: cout << "8 x 6"; break;
	case 6: cout << "24 x 6"; break;
	case 7: cout << "18 x 3"; break;
	}
	cursor(89, 3); switch (op2)
	{
	case 0: cout << "14 x 3"; break;
	case 1: cout << "29 x 4"; break;
	case 2: cout << "36 x 5"; break;
	case 3: cout << "12 x 6"; break;
	case 4: cout << "4 x 6"; break;
	case 5: cout << "8 x 6"; break;
	case 6: cout << "24 x 6"; break;
	case 7: cout << "18 x 3"; break;
	}
	cursor(89, 4); switch (op3)
	{
	case 0: cout << "14 x 3"; break;
	case 1: cout << "29 x 4"; break;
	case 2: cout << "36 x 5"; break;
	case 3: cout << "12 x 6"; break;
	case 4: cout << "4 x 6"; break;
	case 5: cout << "8 x 6"; break;
	case 6: cout << "24 x 6"; break;
	case 7: cout << "18 x 3"; break;
	}
	cursor(124, 2); cout << "0";
	cursor(124, 3); cout << "0";
	cursor(124, 4); cout << "0";
}

void imprimir_escenario() {
	for (int i = 0; i < 46; i++) {
		cursor(0, i);
		cout << fondo[i];
	}
}


void imprimir_vehiculo(int& vehi1, int& x1, int& y1) {
	for (int i = 0; i < 6; i++) {
		cursor(x1, y1 + i);
		for (int j = 0; j < vehiculos[vehi1][i].size(); j++) {
			coloress(color_vehiculo[vehi1][i][j]);
			if (vehiculos[vehi1][i][j] == 32)cursor(x1 + j + 1, y1 + i);
			else {
				cout << vehiculos[vehi1][i][j];
			}
		}
	}
	Console::ForegroundColor = ConsoleColor::Black;

}
void borrar(int vehiculo, int x, int y) {
	for (int i = 0; i < 6; i++) {
		cursor(x, y + i);
		for (int j = 0; j < vehiculos[vehiculo][i].size(); j++) {
			cout << fondo[y + i][x + j];
		}
	}
}
void imprimir_persona(int posi, int color, int x, int y) {
	coloress(colores_personas[color]);
	for (int i = 0; i < 3; i++) {
		cursor(x, y + i);
		for (int j = 0; j < persona[posi][i].size(); j++) {
			if (persona[posi][i][j] == 32) cursor(x + j + 1, y + i);
			else {
				cout << persona[posi][i][j];
			}
		}
	}
	Console::ForegroundColor = ConsoleColor::Black;
}
void borrar_persona(int posi, int x, int y) {
	for (int i = 0; i < 4; i++) {
		cursor(x, y + i);
		for (int j = 0; j < persona[posi][i].size(); j++) {
			cout << fondo[y + i][x + j];
		}
	}
	//cursor(x, y+3); cout << fondo[y +3][x];
}
void borrar_soga(int x, int y) {
	for (int i = y; i < 42; i++) {
		cursor(x, i);
		cout << fondo[i][x];
	}
}
void imprimir_soga(int x, int y, int presca) {
	for (int i = y; i < presca; i++) {
		cursor(x, i);
		cout << soga[y];
	}
}
void partida(int vehi1, int vehi2, int vehi3, int& rescat1, int& rescat2, int& rescat3) {

	int vel1, vel2, vel3;
	int x1 = 169, x2 = 169, x3 = 169, y1 = 10, y2 = 17, y3 = 24;
	int dx1 = -1, dx2 = -1, dx3 = -1;
	int last1 = 0, last2 = 0, last3 = 0, new1 = 0, new2 = 0, new3 = 0, presca1 = 0, presca2 = 0, presca3 = 0;
	vel1 = aleatorio() * 1000 / 120;
	vel2 = aleatorio() * 1000 / 110;
	vel3 = aleatorio() * 1000 / 100;
	imprimir_vehiculo(vehi1, x1, y1);
	imprimir_vehiculo(vehi2, x2, y2);
	imprimir_vehiculo(vehi3, x3, y3);

	int xper, yper = 40;
	imprimir_escenario();
	int rescatados = 0, cnt = 0;
	int tiempo_dx01 = 0, tiempo_dx02 = 0, tiempo_dx03 = 0;

	panel(vel1, vel2, vel3, vehi1, vehi2, vehi3);
	int semirescatados = 10;
	int xpresca = 75;
	int ypresca1 = 42, ypresca2 = 42, ypresca3 = 42;
	do {
		xper = 30;
		for (int i = 0; i < semirescatados; i++) {
			imprimir_persona(0, colores_personas[i], xper, yper);
			xper += 5;
		}

		if (x1 < 51 || x1>170) {
			borrar(vehi1, x1, y1);
			if (x1 == 50) {
				dx1 = 0;
				x1++; presca1 = semirescatados;
				semirescatados--;
				borrar_persona(0, xpresca, 40);
				xpresca -= 5;
			}
			if (x1 == 171) {
				x1--;
				rescatados++;
				rescat1++;
				cursor(124, 2); cout << rescat1;
			}
			dx1 *= -1;
			x1 += dx1;
			imprimir_vehiculo(vehi1, x1, y1);
		}
		else if (x2 < 61 || x2>170) {
			borrar(vehi2, x2, y2);
			if (x2 == 60) {
				dx2 = 0; x2++;
				presca2 = semirescatados;
				semirescatados--;
				borrar_persona(0, xpresca, 40);
				xpresca -= 5;
			}
			if (x2 == 171) {
				x2--;
				rescatados++;
				rescat2++;
				cursor(124, 3); cout << rescat2;
			}
			dx2 *= -1;
			x2 += dx2;
			imprimir_vehiculo(vehi2, x2, y2);
		}
		else if (x3 < 71 || x3>170) {
			borrar(vehi3, x3, y3);
			if (x3 == 70) {
				dx3 = 0; x3++;
				presca3 = semirescatados;
				semirescatados--;
				borrar_persona(0, xpresca, 40);
				xpresca -= 5;
			}
			if (x3 == 171) {
				x3--;
				rescatados++;
				rescat3++;
				cursor(124, 4); cout << rescat3;
			}
			dx3 *= -1;
			x3 += dx3;
			imprimir_vehiculo(vehi3, x3, y3);
		}


		if (dx1 == 0 && semirescatados > -1) {
			tiempo_dx01++;
			imprimir_soga(49, y1, ypresca1);
			imprimir_persona(1, presca1, 49, ypresca1);
			if (tiempo_dx01 % 2 == 0) {
				borrar_persona(1, 49, ypresca1);
				ypresca1 -= 1;
			}
			if (tiempo_dx01 > 60) {
				borrar_persona(1, 49, ypresca1);
				dx1 = 1; ypresca1 = 42;
				tiempo_dx01 = 0;
				borrar_soga(49, y1);
			}
		}
		if (dx2 == 0 && semirescatados > -1) {
			tiempo_dx02++;
			imprimir_soga(59, y2, ypresca2);
			imprimir_persona(1, presca2, 59, ypresca2);
			if (tiempo_dx02 % 3 == 2) {
				borrar_persona(1, 59, ypresca2);
				ypresca2 -= 1;
			}
			if (tiempo_dx02 > 50) {
				borrar_persona(1, 59, ypresca2);
				dx2 = 1; ypresca2 = 42;
				tiempo_dx02 = 0;
				borrar_soga(59, y2);
			}
		}
		if (dx3 == 0 && semirescatados > -1) {
			tiempo_dx03++;

			imprimir_soga(69, y3, ypresca3);
			imprimir_persona(1, presca3, 69, ypresca3);
			if (tiempo_dx03 % 5 == 0) {
				borrar_persona(1, 69, ypresca3);
				ypresca3 -= 1;
			}
			if (tiempo_dx03 > 40) {
				borrar_persona(1, 69, ypresca3);
				dx3 = 1; ypresca3 = 42;
				tiempo_dx03 = 0;
				borrar_soga(69, y3);
			}
		}


		if (new1 != last1) {
			borrar(vehi1, x1, y1);
			x1 += dx1;
			last1 = new1;
			imprimir_vehiculo(vehi1, x1, y1);

		}
		if (new2 != last2) {
			borrar(vehi2, x2, y2);
			x2 += dx2;
			last2 = new2;
			imprimir_vehiculo(vehi2, x2, y2);
		}
		if (new3 != last3) {
			borrar(vehi3, x3, y3);
			x3 += dx3;
			last3 = new3;
			imprimir_vehiculo(vehi3, x3, y3);
		}
		new1 = cnt / vel1;
		new2 = cnt / vel2;
		new3 = cnt / vel3;
		_sleep(10);
		cnt += 40;
		if (cnt > 1000 && cnt % 1000 == 0) {
			cursor(155, 3); cout << cnt / 1000 << " s";
		}

	} while (rescatados != 10);
	Console::Clear();
}

void final()
{
	cursor(70, 15); cout << " ________  ______  __    __        _______   ________        __         ______  ";
	cursor(70, 16); cout << "/        |/      |/  \\  /  |      /       \\ /        |      /  |       /      \\ ";
	cursor(70, 17); cout << "$$$$$$$$/ $$$$$$/ $$  \\ $$ |      $$$$$$$  |$$$$$$$$/       $$ |      /$$$$$$  |";
	cursor(70, 18); cout << "$$ |__      $$ |  $$$  \\$$ |      $$ |  $$ |$$ |__          $$ |      $$ |__$$ |";
	cursor(70, 19); cout << "$$    |     $$ |  $$$$  $$ |      $$ |  $$ |$$    |         $$ |      $$    $$ |";
	cursor(70, 20); cout << "$$$$$/      $$ |  $$ $$ $$ |      $$ |  $$ |$$$$$/          $$ |      $$$$$$$$ |";
	cursor(70, 21); cout << "$$ |       _$$ |_ $$ |$$$$ |      $$ |__$$ |$$ |_____       $$ |_____ $$ |  $$ |";
	cursor(70, 22); cout << "$$ |      / $$   |$$ | $$$ |      $$    $$/ $$       |      $$       |$$ |  $$ |";
	cursor(70, 23); cout << "$$/       $$$$$$/ $$/   $$/       $$$$$$$/  $$$$$$$$/       $$$$$$$$/ $$/   $$/ ";


	cursor(70, 25); cout << "  ______   ______  __       __  __    __  __         ______    ______   ______   ______   __    __ ";
	cursor(70, 26); cout << " /      \\ /      |/  \\     /  |/  |  /  |/  |       /      \\  /      \\ /      | /      \\ /  \\  /  |";
	cursor(70, 27); cout << "/$$$$$$  |$$$$$$/ $$  \\   /$$ |$$ |  $$ |$$ |      /$$$$$$  |/$$$$$$  |$$$$$$/ /$$$$$$  |$$  \\ $$ |";
	cursor(70, 28); cout << "$$ \\__$$/   $$ |  $$$  \\ /$$$ |$$ |  $$ |$$ |      $$ |__$$ |$$ |  $$/   $$ |  $$ |  $$ |$$$  \\$$ |";
	cursor(70, 29); cout << "$$      \\   $$ |  $$$$  /$$$$ |$$ |  $$ |$$ |      $$    $$ |$$ |        $$ |  $$ |  $$ |$$$$  $$ |";
	cursor(70, 30); cout << " $$$$$$  |  $$ |  $$ $$ $$/$$ |$$ |  $$ |$$ |      $$$$$$$$ |$$ |   __   $$ |  $$ |  $$ |$$ $$ $$ |";
	cursor(70, 31); cout << "/  \\__$$ | _$$ |_ $$ |$$$/ $$ |$$ \\__$$ |$$ |_____ $$ |  $$ |$$ \\__/  | _$$ |_ $$ \\__$$ |$$ |$$$$ |";
	cursor(70, 32); cout << "$$    $$/ / $$   |$$ | $/  $$ |$$    $$/ $$       |$$ |  $$ |$$    $$/ / $$   |$$    $$/ $$ | $$$ |";
	cursor(70, 33); cout << " $$$$$$/  $$$$$$/ $$/      $$/  $$$$$$/  $$$$$$$$/ $$/   $$/  $$$$$$/  $$$$$$/  $$$$$$/  $$/   $$/ ";
	Sleep(5000);
}
string BGranking[47]
{
{"                                                                                                                                                                                                        "},
{"                                                                        (                   )       )   (         )                                                                                     "},
{"                                                                         )\\ )     (       ( /(    ( /(   )\\ )   ( /(   (                                                                                "},
{"                                                                        (()/(     )\\      )\\())   )\\()) (()/(   )\\())  )\\ )                                                                             "},
{"                                                                         /(_)) ((((_)(   ((_)\\  |((_)\\   /(_)) ((_)\\  (()/(                                                                             "},
{"                                                                        (_))    )\\ _ )\\   _((_) |_ ((_) (_))    _((_)  /(_))_                                                                           "},
{"                                                                        | _ \\   (_)_\\(_) | \\| | | |/ /  |_ _|  | \\| | (_)) __|                                                                          "},
{"                                                                        |   /    / _ \\   | .` |   ' <    | |   | .` |   | (_ |                                                                          "},
{"                                                                        |_|_\\   /_/ \\_\\  |_|\\_|  _|\\_\\  |___|  |_|\\_|    \\___|                                                                          "},
{"                                                                                                                                                                                                        "},
{"                                       -----------------                                                                                                                                                "},
{"                                      | _--------------_ |                                           +++++++++++++++++++++++++++++++++++++++++++++++++++++++++                                          "},
{"                                    ---\\                /---                                         +                                                       +                                          "},
{"                                   |  ( |      /|      | )  |                                        +                                                       +                                          "},
{"                                    --- |       |      | ---                                         +                                                       +                                          "},
{"                                         \\      |     /                                              +                                                       +                                          "},
{"                                          \\          /                                               +                                                       +                                          "},
{"                                           \\_     _/                                                 +                                                       +                                          "},
{"                                              )  (                                                   +                                                       +                                          "},
{"                                             )____(                                                  +                                                       +                                          "},
{"                                           |________|                                                +++++++++++++++++++++++++++++++++++++++++++++++++++++++++                                          "},
{"                                                                                                                                                                                                        "},
{"                                                                                                                                                                                                        "},
{"                                       -----------------                                                                                                                                                "},
{"                                      | _--------------_ |                                           +++++++++++++++++++++++++++++++++++++++++++++++++++++++++                                          "},
{"                                    ---\\                /---                                         +                                                       +                                          "},
{"                                   |  ( |    /---|     | )  |                                        +                                                       +                                          "},
{"                                    --- |      _/      | ---                                         +                                                       +                                          "},
{"                                         \\   |___    /                                              +                                                       +                                          "},
{"                                          \\          /                                               +                                                       +                                          "},
{"                                           \\_     _/                                                 +                                                       +                                          "},
{"                                              )  (                                                   +                                                       +                                          "},
{"                                             )____(                                                  +                                                       +                                          "},
{"                                           |________|                                                +++++++++++++++++++++++++++++++++++++++++++++++++++++++++                                          "},
{"                                                                                                                                                                                                        "},
{"                                                                                                                                                                                                        "},
{"                                       -----------------                                                                                                                                                "},
{"                                      | _--------------_ |                                           +++++++++++++++++++++++++++++++++++++++++++++++++++++++++                                          "},
{"                                    ---\\                /---                                         +                                                       +                                          "},
{"                                   |  ( |     ---|     | )  |                                        +                                                       +                                          "},
{"                                    --- |     __/      | ---                                         +                                                       +                                          "},
{"                                         \\      \\     /                                              +                                                       +                                          "},
{"                                          \\   ___|   /                                               +                                                       +                                          "},
{"                                           \\_     _/                                                 +                                                       +                                          "},
{"                                              )  (                                                   +                                                       +                                          "},
{"                                             )____(                                                  +                                                       +                                          "},
{"                                           |________|                                                +++++++++++++++++++++++++++++++++++++++++++++++++++++++++                                          "}
};
