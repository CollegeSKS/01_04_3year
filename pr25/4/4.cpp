//Напишите программный код, позволяющий:
//-создать каталог с именем astra_MVA;
//-в этом каталоге создать подкаталог subastra_MVA;
//-переименовать каталог astra_MVA в astra_MVA_new(после этого шага нужно
//    очистить папку astra_MVA_new);
//-удалить каталог astra_MVA_new.


#include <windows.h>
#include <iostream>
using namespace std;
int main()
{

	// создаем каталог
	LPCWSTR dir = L"D:\\astra_MVA";
	if (!CreateDirectory(dir, NULL))
	{
		cerr << "Create directory failed." << endl
			<< "The last error code: " << GetLastError() << endl;
		cout << "Press any key to finish.";
		cin.get();
		return 0;
	}
	cout << "The directory is created." << endl;

	// создаем подкаталог
	LPCWSTR dir = L"D:\\astra_MVA";
	LPCWSTR subdir = L"D:\\astra_MVA\\subastra_MVA";
	if (!CreateDirectoryEx(dir, subdir, NULL))
	{
		cerr << "Create directory failed." << endl
			<< "The last error code: " << GetLastError() << endl;
		cout << "Press any key to finish.";
		cin.get();
		return 0;
	}
	cout << "The subdirectory is created." << endl;

	// перемещаем каталог
	LPCWSTR dir = L"D:\\astra_MVA";
	LPCWSTR dir_new = L"D:\\astra_MVA_new";
	if (!MoveFile(dir, dir_new))
	{
		cerr << "Move file failed." << endl
			<< "The last error code: " << GetLastError() << endl;
		cout << "Press any key to finish.";
		cin.get();
		return 0;
	}
	cout << "The directory is moved." << endl;

	// Очистить каталог
	LPCWSTR dir = L"D:\\astra_MVA_new";
	if (!RemoveDirectory(dir))
	{
		cerr << "Remove directory failed." << endl
			<< "The last error code: " << GetLastError() << endl;
		cout << "Press any key to finish.";
		cin.get();
		return 0;
	}
	cout << "The directory is removed." << endl;

	return 0;
}