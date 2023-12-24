//Database.cpp
#include "Database.h"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
namespace Records {
Database::Database() {
  mNextSlot = 0;
  mNextClientNumber = kFirstClientNumber;
}

Database::~Database() {}
Client &Database::addClient(const ClientData &clientData) {
  if (mNextSlot >= kMaxClients) {
    cerr << "There is no more room to add the new Client!" << endl;
    throw exception();
  }
Client &theClient = mClients[mNextSlot++];
        theClient.setFirstName(clientData.inFirstName);
        theClient.setLastName(clientData.inLastName);
        theClient.setClientAge(clientData.inClientAge);
        theClient.setClientNumber(mNextClientNumber++);
        theClient.hire();
        // Set the new member variables
        theClient.setGender(clientData.inGender);
        theClient.setHeight(clientData.inHeight);
        theClient.setWeight(clientData.inWeight);
        theClient.setChildrenCount(clientData.inChildrenCount);
        theClient.setMaritalStatus(clientData.inMaritalStatus);
        theClient.setHarmfulHabits(clientData.inHarmfulHabits);
        theClient.setHobbies(clientData.inHobbies);
        theClient.setDescription(clientData.inDescription);
        theClient.setZodiacSignCode(clientData.inZodiacSignCode);
        theClient.setRelationshipCode(clientData.inRelationshipCode);
        theClient.setNationalityCode(clientData.inNationalityCode);
        theClient.setAddress(clientData.inAddress);
        theClient.setPhoneNumber(clientData.inPhoneNumber);
        theClient.setPassportData(clientData.inPassportData);
        theClient.setPartnerPreference(clientData.inPartnerPreference);

        return theClient;
}
Client &Database::getClient(int inClientNumber) {
  for (int i = 0; i < mNextSlot; i++) {
    if (mClients[i].getClientNumber() == inClientNumber) {
      return mClients[i];
    }
  }
  cerr << "No Client with Client number " << inClientNumber << endl;
  throw exception();
}
Client &Database::getClient(const ClientData &clientData) {
  for (int i = 0; i < mNextSlot; i++) {
    if (mClients[i].getFirstName() == clientData.inFirstName &&
        mClients[i].getLastName() == clientData.inLastName &&
        mClients[i].getClientAge() == clientData.inClientAge &&
        mClients[i].getGender() == clientData.inGender &&
        mClients[i].getHeight() == clientData.inHeight &&
        mClients[i].getWeight() == clientData.inWeight &&
        mClients[i].getChildrenCount() == clientData.inChildrenCount &&
        mClients[i].getMaritalStatus() == clientData.inMaritalStatus &&
        mClients[i].getHarmfulHabits() == clientData.inHarmfulHabits &&
        mClients[i].getHobbies() == clientData.inHobbies &&
        mClients[i].getDescription() == clientData.inDescription &&
        mClients[i].getZodiacSignCode() == clientData.inZodiacSignCode &&
        mClients[i].getRelationshipCode() == clientData.inRelationshipCode &&
        mClients[i].getNationalityCode() == clientData.inNationalityCode &&
        mClients[i].getAddress() == clientData.inAddress &&
        mClients[i].getPhoneNumber() == clientData.inPhoneNumber &&
        mClients[i].getPassportData() == clientData.inPassportData &&
        mClients[i].getPartnerPreference() == clientData.inPartnerPreference) {
      return mClients[i];
    }
  }
  cerr << "No match with name " << clientData.inFirstName << " "
  << clientData.inLastName << " "
  << clientData.inClientAge << endl;
    throw exception();
}
void Database::displayAll() {
  for (int i = 0; i < mNextSlot; i++) {
    mClients[i].display();
  }
}
void Database::displayMale() {
  for (int i = 0; i < mNextSlot; i++) {
    if (mClients[i].getGender() == "male") {
      mClients[i].display();
    }
  }
}
void Database::displayFemale() {
  for (int i = 0; i < mNextSlot; i++) {
    if (mClients[i].getGender() == "female") {
      mClients[i].display();
    }
  }
}
void Database::displayCurrent() {
  for (int i = 0; i < mNextSlot; i++) {
    if (mClients[i].getIsHired()) {
      mClients[i].display();
    }
  }
}
void Database::displayFormer() {

  for (int i = 0; i < mNextSlot; i++) {
    if (!mClients[i].getIsHired()) {
      mClients[i].display();
    }
  }
}
} // namespace Records
