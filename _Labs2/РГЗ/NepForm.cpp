#include "NepForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    setlocale(LC_CTYPE, "Russian");
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    РГЗ::NepForm form;
    Application::Run(% form);
}
