#include "Home.h"
#include <Windows.h>

using namespace ENJPROG;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Home^ home = gcnew Home();
	Application::Run(home);
	return 0;
}
