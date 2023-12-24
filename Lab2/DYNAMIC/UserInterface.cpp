// UserInterface.cpp
#include "Database.h"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
using namespace Records;
int displayMenu();
void doHire(Database &inDB);
void doFire(Database &inDB);
void doPromote(Database &inDB);
void doDemote(Database &inDB);

int displayMenu() {
  int selection;
  cout << endl;
  cout << "Clients Database" << endl;
  cout << "-----------------" << endl;
  cout << "1) Create a new Account of Client" << endl;
  cout << "2) Delete an Account of Client" << endl;
  cout << "3) Change subscription price" << endl;
  cout << "4) List all Clients" << endl;
  cout << "5) List all current Clients" << endl;
  cout << "6) List all previous Clients" << endl;
  cout << "7) List all Males" << endl;
  cout << "8) List all Females" << endl;
  cout << "0) Quit" << endl;
  cout << endl;

  cout << "---> ";
  cin >> selection;
  return selection;
}
void doHire(Database &inDB) {
  ClientData clientData;

  cout << "First name? ";
  cin >> clientData.inFirstName;
  cout << "Last name? ";
  cin >> clientData.inLastName;

  do {
    string age;
    cout << "Your age? ";
    cin >>age;
    clientData.inClientAge=std::stoi(age);
    if (clientData.inClientAge >= 18) {
      break;
    } else {
      cout << "You must be at leat 18!!\n";
    }
  } while (true);
  do {
    std::cout << "Gender (male/female)? ";
    std::cin >> clientData.inGender;

    // Перевірка, чи введено допустиме значення
    if (clientData.inGender != "male" && clientData.inGender != "female") {
      std::cout << "Invalid input. Please enter 'male' or 'female'."
                << std::endl;
    }
  } while (clientData.inGender != "male" && clientData.inGender != "female");

  std::cout << "Selected gender: " << clientData.inGender << std::endl;

  cout << "Height (cm)? ";
  cin >> clientData.inHeight;

  cout << "Weight (kg)? ";
  cin >> clientData.inWeight;

  cout << "Number of children? ";
  cin >> clientData.inChildrenCount;

  cout << "Marital status? ";
  cin.ignore();
  getline(cin, clientData.inMaritalStatus);


  cout << "Harmful habits? ";
  cin.ignore();
  getline(cin, clientData.inHarmfulHabits);

  cout << "Hobbies? ";
  cin.ignore(); // Clear newline character from previous input
  getline(cin, clientData.inHobbies);

  cout << "Description? ";
  cin.ignore(); // Clear newline character from previous input
  getline(cin, clientData.inDescription);

  cout << "Zodiac Sign Code? ";
  cin >> clientData.inZodiacSignCode;

  cout << "Relationship Code? ";
  cin >> clientData.inRelationshipCode;

  cout << "Nationality Code? ";
  cin >> clientData.inNationalityCode;

  cout << "Address? ";
  cin.ignore(); // Clear newline character from previous input
  getline(cin, clientData.inAddress);

  cout << "Phone Number? ";
  cin >> clientData.inPhoneNumber;

  cout << "Passport Data? ";
  cin.ignore(); // Clear newline character from previous input
  getline(cin, clientData.inPassportData);

  cout << "Partner Preference? ";
  cin.ignore(); // Clear newline character from previous input
  getline(cin, clientData.inPartnerPreference);

  try {
    inDB.addClient(clientData);
  } catch (const std::exception &ex) {
    cerr << "Unable to add new Client!" << endl;
  }
}
void doFire(Database &inDB) {
  string client_Number;
  cout << "Client number? ";
  cin >> client_Number;

  int clientNumber = std::stoi(client_Number);

  try {
    Client &emp = inDB.getClient(clientNumber);
    emp.fire();
    cout << "Client " << clientNumber << " has been terminated." << endl;
  } catch (const std::invalid_argument &e) {
    std::cerr << "Invalid argument: " << e.what() << std::endl;
  } catch (const std::out_of_range &e) {
    std::cerr << "Out of range: " << e.what() << std::endl;
  } catch (const std::exception &ex) {
    cerr << "Unable to terminate employee!" << endl;
  }
}
void doPromote(Database &inDB) {
  string client_Number;
  string new_Amount;
  cout << "Client number? ";
  cin >> client_Number;
  int clientNumber = std::stoi(client_Number);
  cout << "Do you want to increase or decrease the subscription price? \nEnter "
          "i for increase or d for decrease: ";

  bool flag = false;
  while (!flag) {
    char choice;
    cin >> choice;
    choice = tolower(choice);
    if (choice == 'i') {
      cout << "Increase subscribe price on: ";
      cin >> new_Amount;
      int newAmount = std::stoi(new_Amount);
      flag = true;
      try {
        Client &emp = inDB.getClient(clientNumber);
        emp.promote(newAmount);
      } catch (...) {
        cerr << "Unable to promote Client! " << endl;
      }
    } else if (choice == 'd') {
      cout << "Decrease subscribe price on: ";
      cin >> new_Amount;
      int newAmount = std::stoi(new_Amount);
      flag = true;
      try {
        Client &emp = inDB.getClient(clientNumber);
        emp.demote(newAmount);
      } catch (...) {
        cerr << "Unable to demote Client! " << endl;
      }

    } else {
      cout << "Enter 'i' for increase or 'd' for decrease: ";
    }
  }
}
