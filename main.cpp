#include "formLogin.h"
#include "formMain.h"
#include "formSettings.h"


using namespace kursgabinet;

[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	kursgabinet::formLogin form;
	Application::Run(% form);

	return 0;
}