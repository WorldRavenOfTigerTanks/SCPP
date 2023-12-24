//Client.h
#include <iostream>

namespace Records {
const int kDefaultStartingSalary = 100;
class Client {
public:
  Client();
 // Info_client client;
  void promote(int inRaiseAmount = 10);
  void demote(int inDemeritAmount = 10);
  void hire();    // hires or re-hires the employee
  void fire();    // dismisses the employee
  void display(); // outputs employee info to the console
  // Accessors and setters
  void setFirstName(std::string inFirstName);
  std::string getFirstName();
  void setLastName(std::string inLastName);
  std::string getLastName();
  //its my
  void setClientAge(uint inClientAge);
  uint getClientAge();
  //
  void setClientNumber(int inClientNumber);
  int getClientNumber();
  void setSalary(int inNewSalary);
  int getSalary();
  bool getIsHired();
  // New member variables
  void setGender(std::string inGender);
  std::string getGender();

  void setHeight(uint inHeight);
  uint getHeight();

  void setWeight(uint inWeight);
  uint getWeight();

  void setChildrenCount(uint inChildrenCount);
  uint getChildrenCount();

  void setMaritalStatus(std::string inMaritalStatus);
  std::string getMaritalStatus();

  void setHarmfulHabits(std::string inHarmfulHabits);
  std::string getHarmfulHabits();

  void setHobbies(std::string inHobbies);
  std::string getHobbies();

  void setDescription(std::string inDescription);
  std::string getDescription();

  void setZodiacSignCode(std::string inZodiacSignCode);
  std::string getZodiacSignCode();

  void setRelationshipCode(std::string inRelationshipCode);
  std::string getRelationshipCode();

  void setNationalityCode(std::string inNationalityCode);
  std::string getNationalityCode();

  void setAddress(std::string inAddress);
  std::string getAddress();

  void setPhoneNumber(std::string inPhoneNumber);
  std::string getPhoneNumber();

  void setPassportData(std::string inPassportData);
  std::string getPassportData();

  void setPartnerPreference(std::string inPartnerPreference);
  std::string getPartnerPreference();

private:
  std::string mFirstName;
  std::string mLastName;
  uint mClientAge;
  int mClientNumber;
  int mSalary;
  bool fHired;
  std::string mGender;
  uint mHeight;
  uint mWeight;
  uint mChildrenCount;
  std::string mMaritalStatus;
  std::string mHarmfulHabits;
  std::string mHobbies;
  std::string mDescription;
  std::string mZodiacSignCode;
  std::string mRelationshipCode;
  std::string mNationalityCode;
  std::string mAddress;
  std::string mPhoneNumber;
  std::string mPassportData;
  std::string mPartnerPreference;
};
} // namespace Records
