//Database.h
#include "Client.h"
#include <iostream>
namespace Records {
const int kMaxClients = 100;
const int kFirstClientNumber = 1000;
struct ClientData{
    std::string inFirstName;
    std::string inLastName;
    uint inClientAge;
    std::string inGender;
    uint inHeight;
    uint inWeight;
    uint inChildrenCount;
    std::string inMaritalStatus;
    std::string inHarmfulHabits;
    std::string inHobbies;
    std::string inDescription;
    std::string inZodiacSignCode;
    std::string inRelationshipCode;
    std::string inNationalityCode;
    std::string inAddress;
    std::string inPhoneNumber;
    std::string inPassportData;
    std::string inPartnerPreference;
};
class Database {
public:
  Database();
  ~Database();
  Client &addClient(const ClientData &clientData) ;
  Client &getClient(int inClienteNumber);
  Client &getClient(const ClientData &clientData) ;
  void displayAll();
  void displayMale();
  void displayFemale();
  void displayCurrent();
  void displayFormer();

protected:
  Client mClients[kMaxClients];
  int mNextSlot;
  int mNextClientNumber;
};
} // namespace Records
