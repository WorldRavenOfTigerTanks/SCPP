//UserInterface.h
#include "Database.h" // Включення заголовочного файлу для класу Database
#include <string>

// Прототипи функцій, які будуть використовуватися у файлі "UserInterface.cpp"
using namespace std;
using namespace Records;
int displayMenu();
void doHire(Database &inDB);
void doFire(Database &inDB);
void doPromote(Database &inDB);
void doDemote(Database &inDB);
