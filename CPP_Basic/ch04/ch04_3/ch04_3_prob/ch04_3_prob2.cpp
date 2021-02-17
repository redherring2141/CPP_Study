#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
    enum
    {
        CLERK,
        SENIOR,
        ASSIST,
        MANAGER
    };

    char* IdentifyRank(int employeeRank)
    {
        char *rankName = new char[10];
        switch(employeeRank)
        {
            case CLERK:
                //cout << "Staff" << endl;
                strcpy(rankName, "Staff");
                break;
            case SENIOR:
                //cout << "Senior" << endl;
                strcpy(rankName, "Senior");
                break;
            case ASSIST:
                //cout << "Assist" << endl;
                strcpy(rankName, "Assist");
                break;
            case MANAGER:
                //cout << "Manager" << endl;
                strcpy(rankName, "Manager");
                break;
        }
        return rankName;
    }
};


class NameCard
{
private:
    char *employeeName;
    char *companyName;
    char *phoneNumber;
    int employeeRank;
public:
    NameCard(char *_employeeName, char *_companyName, char *_phoneNumber, int _employeeRank)
        : employeeRank(_employeeRank)
    {
        employeeName = new char[strlen(_employeeName)+1];
        companyName = new char[strlen(_companyName)+1];
        phoneNumber = new char[strlen(_phoneNumber)+1];
        strcpy(employeeName, _employeeName);
        strcpy(companyName, _companyName);
        strcpy(phoneNumber, _phoneNumber);
    }

    ~NameCard()
    {
        delete []employeeName;
        delete []companyName;
        delete []phoneNumber;
    }
    //IdentifyRank();
    void ShowNameCardInfo();
};


void NameCard::ShowNameCardInfo()
{
    char *rankName = COMP_POS::IdentifyRank(employeeRank);
    cout << "Name: " << employeeName << endl;
    cout << "Company: " << companyName << endl;
    cout << "Phone: " << phoneNumber << endl;
    cout << "Rank: " << rankName << endl << endl;
    delete []rankName;
}

int main(void)
{
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;
}