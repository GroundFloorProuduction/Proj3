#include "Mainwindow.h" 

using namespace System; 
using namespace System::Windows::Forms; 

[STAThread] 
void Main(array<String^>^ args) 
{ 
	Application::EnableVisualStyles(); 
	Application::SetCompatibleTextRenderingDefault(false); 
	Project3::MainWindow form; 
	Application::Run(%form);
}