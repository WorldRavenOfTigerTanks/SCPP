//main.cpp
#include "UserInterface.h" // Підключення файлу UserInterface.cpp
#include <iostream>
using namespace std;
int main(int argc, char **argv) {
  Database clientDB;
  bool done = false;
  ClientData client1 = {"Ivan",
                        "Petrov",
                        25,
                        "male",
                        175,
                        70,
                        0,
                        "Married",
                        "No",
                        "Reading",
                        "I love traveling",
                        "Aquarius",
                        "Single",
                        "Ukrainian",
                        "Kyiv, Main St, 123",
                        "+380987654321",
                        "AA123456",
                        "No partner"};

  ClientData client2 = {"Elena",
                        "Smith",
                        30,
                        "female",
                        165,
                        55,
                        1,
                        "Single",
                        "No",
                        "Painting",
                        "I enjoy cooking",
                        "Cancer",
                        "Single",
                        "American",
                        "New York, Elm St, 456",
                        "+11234567890",
                        "BB654321",
                        "No partner"};
  ClientData client3 = {"John",
                        "Doe",
                        40,
                        "male",
                        180,
                        80,
                        2,
                        "Divorced",
                        "Yes",
                        "Sports",
                        "Music lover",
                        "Taurus",
                        "Single",
                        "British",
                        "London, Park Ave, 789",
                        "+442233445566",
                        "CC789012",
                        "No partner"};
  ClientData client4 = {"Maria",
                        "Gonzalez",
                        28,
                        "female",
                        160,
                        50,
                        0,
                        "Single",
                        "No",
                        "Dancing",
                        "I'm a foodie",
                        "Gemini",
                        "Single",
                        "Spanish",
                        "Madrid, Plaza Mayor, 567",
                        "+34987654321",
                        "DD567890",
                        "No partner"};
  ClientData client5 = {"Michael",
                        "Kim",
                        35,
                        "male",
                        175,
                        75,
                        1,
                        "Married",
                        "Yes",
                        "Gaming",
                        "Tech enthusiast",
                        "Libra",
                        "Married",
                        "Korean",
                        "Seoul, Tech St, 890",
                        "+822233344455",
                        "EE678901",
                        "Spouse"};

  clientDB.addClient(client1);
  clientDB.addClient(client2);
  clientDB.addClient(client3);
  clientDB.addClient(client4);
  clientDB.addClient(client5);
  ClientData *client6 = new ClientData();
  client6->inFirstName = "Maria";
  client6->inLastName = "Sidorova";
  client6->inClientAge = 28;
  client6->inGender = "female";
  client6->inHeight = 162;
  client6->inWeight = 55;
  client6->inChildrenCount = 1;
  client6->inMaritalStatus = "Single";
  client6->inHarmfulHabits = "Yes";
  client6->inHobbies = "Painting";
  client6->inDescription = "I love music";
  client6->inZodiacSignCode = "Pisces";
  client6->inRelationshipCode = "In a relationship";
  client6->inNationalityCode = "Ukrainian";
  client6->inAddress = "Lviv, Central St, 45";
  client6->inPhoneNumber = "+380955555555";
  client6->inPassportData = "BB654321";
  client6->inPartnerPreference = "Looking for a relationship";

  clientDB.addClient(*client6);

  ClientData *client7 = new ClientData();
  client7->inFirstName = "James";
  client7->inLastName = "Smith";
  client7->inClientAge = 32;
  client7->inGender = "male";
  client7->inHeight = 180;
  client7->inWeight = 75;
  client7->inChildrenCount = 0;
  client7->inMaritalStatus = "Single";
  client7->inHarmfulHabits = "No";
  client7->inHobbies = "Playing guitar";
  client7->inDescription = "Love outdoor activities";
  client7->inZodiacSignCode = "Leo";
  client7->inRelationshipCode = "Single";
  client7->inNationalityCode = "American";
  client7->inAddress = "New York, Broadway St, 789";
  client7->inPhoneNumber = "+112233445566";
  client7->inPassportData = "CC123456";
  client7->inPartnerPreference = "Looking for a partner";

  clientDB.addClient(*client7);
  ClientData *client8 = new ClientData();
  client8->inFirstName = "Anna";
  client8->inLastName = "Müller";
  client8->inClientAge = 27;
  client8->inGender = "female";
  client8->inHeight = 168;
  client8->inWeight = 60;
  client8->inChildrenCount = 0;
  client8->inMaritalStatus = "Single";
  client8->inHarmfulHabits = "No";
  client8->inHobbies = "Reading";
  client8->inDescription = "Passionate about travel";
  client8->inZodiacSignCode = "Libra";
  client8->inRelationshipCode = "Single";
  client8->inNationalityCode = "German";
  client8->inAddress = "Berlin, Hauptstrasse, 123";
  client8->inPhoneNumber = "+491234567890";
  client8->inPassportData = "DD987654";
  client8->inPartnerPreference = "Looking for a serious relationship";

  clientDB.addClient(*client8);
  ClientData *client9 = new ClientData();
  client9->inFirstName = "Alex";
  client9->inLastName = "Garcia";
  client9->inClientAge = 35;
  client9->inGender = "male";
  client9->inHeight = 175;
  client9->inWeight = 70;
  client9->inChildrenCount = 1;
  client9->inMaritalStatus = "Married";
  client9->inHarmfulHabits = "No";
  client9->inHobbies = "Cooking";
  client9->inDescription = "Enjoy family time";
  client9->inZodiacSignCode = "Cancer";
  client9->inRelationshipCode = "Married";
  client9->inNationalityCode = "Spanish";
  client9->inAddress = "Madrid, Plaza España, 567";
  client9->inPhoneNumber = "+34987654321";
  client9->inPassportData = "EE123456";
  client9->inPartnerPreference = "Not looking for a partner";

  clientDB.addClient(*client9);
  ClientData *client10 = new ClientData();
  client10->inFirstName = "John";
  client10->inLastName = "Johnson";
  client10->inClientAge = 30;
  client10->inGender = "male";
  client10->inHeight = 185;
  client10->inWeight = 80;
  client10->inChildrenCount = 2;
  client10->inMaritalStatus = "Divorced";
  client10->inHarmfulHabits = "Yes";
  client10->inHobbies = "Playing sports";
  client10->inDescription = "Passionate about music";
  client10->inZodiacSignCode = "Scorpio";
  client10->inRelationshipCode = "Single";
  client10->inNationalityCode = "British";
  client10->inAddress = "London, Park Lane, 456";
  client10->inPhoneNumber = "+441234567890";
  client10->inPassportData = "FF123456";
  client10->inPartnerPreference = "Looking for a serious relationship";

  clientDB.addClient(*client10);

  while (!done) {
    int selection = displayMenu();
    switch (selection) {
    case 1:
      doHire(clientDB);
      break;
    case 2:
      doFire(clientDB);
      break;
    case 3:
      doPromote(clientDB);
      break;
    case 4:
      clientDB.displayAll();
      break;
    case 5:
      clientDB.displayCurrent();
      break;
    case 6:
      clientDB.displayFormer();
      break;
    case 7:
      clientDB.displayMale();
      break;
    case 8:
      clientDB.displayFemale();
      break;
    case 0:
      done = true;
      break;
    default:
      cerr << "Unknown command." << endl;
    }
  }
  delete client6;
  delete client7;
  delete client8;
  delete client9;
  delete client10;
}
