#include "Expenses.h"
#include <Windows.h>
using namespace expenses;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Expenses);
	return 0;
}
