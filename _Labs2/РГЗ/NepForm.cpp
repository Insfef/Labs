#include "NepForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ���::NepForm form; // mathpro �������� ������� , hello �������� ���� (�����)
    Application::Run(% form);
}
