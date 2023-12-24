//Client.cpp
#include "Client.h"
#include <iostream>
#include <string>

using namespace std;
namespace Records {
Client::Client() {
  mFirstName = "";
  mLastName = "";
  mClientAge = 18;
  mClientNumber = -1;
  mSalary = kDefaultStartingSalary;
  fHired = false;
  // Initialize new member variables
  mGender = "";
  mHeight = 0;
  mWeight = 0;
  mChildrenCount = 0;
  mMaritalStatus = "";
  mHarmfulHabits = "";
  mHobbies = "";
  mDescription = "";
  mZodiacSignCode = "";
  mRelationshipCode = "";
  mNationalityCode = "";
  mAddress = "";
  mPhoneNumber = "";
  mPassportData = "";
  mPartnerPreference = "";
}
void Client::promote(int inRaiseAmount) {
  setSalary(getSalary() + inRaiseAmount);
}
void Client::demote(int inDemeritAmount) {
  setSalary(getSalary() - inDemeritAmount);
}
void Client::hire() { fHired = true; }
void Client::fire() { fHired = false; }
void Client::display() {
  cout << "Client: \n" << getLastName() << ", " << getFirstName() <<", Age: "<<getClientAge()<<", Gender: "<<getGender() << ", Height: " <<  getHeight() << ", Weight: "
    << getWeight()<<", Chidren:" <<getChildrenCount()<<", Marital status: "    <<getMaritalStatus()<<", Harmful Habits: "<<getHarmfulHabits()<<", Hobbies: "<<getHobbies()<< ", \nAbout me: "
    <<getDescription()<<", Zodiac: "<< getZodiacSignCode()<<", Relationship: "<<getRelationshipCode()<<", Nationality: "<<getNationalityCode()<<", \nAddress: "<<getAddress()
    <<", Phone: "<< getPhoneNumber()<<", Passport Data: "<< getPassportData()
    <<", \nPartner Preference: "<<getPartnerPreference()<< endl;
  cout << "-------------------------" << endl;
  cout << (fHired ? "Current Client" : "Former Client") << endl;
  cout << "Client Number: " << getClientNumber() << endl;
  cout << "Subscription price: $" << getSalary() << endl;
  cout << endl;
}
// Accessors and setters
void Client::setFirstName(string inFirstName) { mFirstName = inFirstName; }
string Client::getFirstName() { return mFirstName; }
void Client::setLastName(string inLastName){
  mLastName = inLastName;
}
string Client::getLastName() { return mLastName; }

void Client::setClientAge(uint inClientAge)
{
  mClientAge = inClientAge;
}
uint Client::getClientAge() { return mClientAge; }
//-----------------------------------------
void Client::setGender(string inGender)
{
  mGender = inGender;
}
string Client::getGender() { return mGender; }


void Client::setHeight(uint inHeight)
{
  mHeight = inHeight;
}
uint Client::getHeight() { return mHeight; }

void Client::setWeight(uint inWeight)
{
  mWeight = inWeight;
}
uint Client::getWeight() { return mWeight; }

void Client::setChildrenCount(uint inChildrenCount)
{
  mChildrenCount = inChildrenCount;
}
uint Client::getChildrenCount() { return mChildrenCount; }


void Client::setMaritalStatus(string inMaritalStatus)
{
  mMaritalStatus = inMaritalStatus;
}
string Client::getMaritalStatus() { return mMaritalStatus; }

void Client::setHarmfulHabits(string inHarmfulHabits)
{
  mHarmfulHabits = inHarmfulHabits;
}
string Client::getHarmfulHabits() { return mHarmfulHabits; }

void Client::setHobbies(string inHobbies)
{
  mHobbies = inHobbies;
}
string Client::getHobbies() { return mHobbies; }


void Client::setDescription(string inDescription)
{
  mDescription = inDescription;
}
string Client::getDescription() { return mDescription; }


void Client::setZodiacSignCode(string inZodiacSignCode)
{
  mZodiacSignCode = inZodiacSignCode;
}
string Client::getZodiacSignCode() { return mZodiacSignCode; }

void Client::setRelationshipCode(string inRelationshipCode)
{
  mRelationshipCode = inRelationshipCode;
}
string Client::getRelationshipCode() { return mRelationshipCode; }



void Client::setNationalityCode(string inNationalityCode)
{
  mNationalityCode = inNationalityCode;
}
string Client::getNationalityCode() { return mNationalityCode; }


void Client::setAddress(string inAddress)
{
  mAddress = inAddress;
}
string Client::getAddress() { return mAddress; }

void Client::setPhoneNumber(string inPhoneNumber)
{
  mPhoneNumber = inPhoneNumber;
}
string Client::getPhoneNumber() { return mPhoneNumber; }




void Client::setPassportData(string inPassportData)
{
  mPassportData = inPassportData;
}
string Client::getPassportData() { return mPassportData; }



void Client::setPartnerPreference(string inPartnerPreference)
{
  mPartnerPreference = inPartnerPreference;
}
string Client::getPartnerPreference() { return mPartnerPreference; }



//-----------------------------------------

void Client::setClientNumber(int inClientNumber) {
  mClientNumber = inClientNumber;
}
int Client::getClientNumber() { return mClientNumber; }
void Client::setSalary(int inSalary) { mSalary = inSalary; }
int Client::getSalary() { return mSalary; }
bool Client::getIsHired() { return fHired; }
} // namespace Records
