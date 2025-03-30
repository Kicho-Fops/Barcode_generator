#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);


// Este es como el Main.cpp

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("C++ GUI");
	// Esto hace que solo el client sea 800,600, si lo hubieramos pasado a MainFrame y a la clase de la que hereda, hubiera hecho que todo el programa, incluida la cabecera del titulo y los botones fuera en total 800*600
	mainFrame->SetClientSize(800, 600);
	mainFrame->Center();
	mainFrame->Show();
	return true;
}