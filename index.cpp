#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Police 
{
protected:
    int bribeMoney;
    int suspicionLevel;
    string troopName;
    char option;
    int bribe;
    bool raid = 0;
  
public:
    Police() 
    {
        bribeMoney = 0;
        suspicionLevel = 40;
        troopName = "Eagle Watch";
    }
    void showpolice()
    {
        cout << "\n ============ POLICE ===============\n";
        cout << "\n Police troop Name : " << troopName;
        cout << "\n Initial suspestion level: " << suspicionLevel << "% ";
        cout << "\n Inital bribe money :" << bribeMoney;
    }
};
class OpponentGang
{
protected:
    string oname;
    int opower; // power or strenght
    int oterritories;
    int omembers;
    string aggressionLevel;
public:
    
    OpponentGang() 
    {
        oname = "The Snakes";
        omembers = 30;
    }
    void showopponent()
    {
        cout << "\n ============= OPPONENT ============ \n";
        cout << "\n NAME : " << oname;
        cout << "\n Total Members: " << omembers;
        generateRandomPower();
    }


    // Generate power randomly 
    void generateRandomPower()
    {
       
        opower = 50 + rand() % 51;
        if (opower >= 50 && opower <= 60)
        {
            cout << "\n POWER : " << opower;
            aggressionLevel = "LOW";
            cout << "\n AGGRESSION LEVEL : " << aggressionLevel;
            oterritories = 1;
            cout << "\n Territories Occupied :" << oterritories;
        }

        else if (opower > 60 && opower <= 70)
        {
            cout << "\n POWER : " << opower;
            aggressionLevel = "MODERATE";
            cout << "\n AGGRESSION LEVEL : " << aggressionLevel;
            oterritories = 3;
            cout << "\n Territories Occupied :" << oterritories;
        }

        else if (opower > 70 && opower <= 80)
        {
            cout << "\n POWER : " << opower;
            aggressionLevel = "HIGH";
            cout << "\n AGGRESSION LEVEL : " << aggressionLevel;
            oterritories = 5;
            cout << "\n Territories Occupied :" << oterritories;
        } 
        
        else if (opower > 80 && opower <= 90)
        {
            cout << "\n POWER : " << opower;
            aggressionLevel = "VERY HIGH";
            cout << "\n AGGRESSION LEVEL : " << aggressionLevel;
            oterritories = 6;
            cout << "\n Territories Occupied :" << oterritories;
        }

        else if (opower > 90 && opower <= 100)
        {
            cout << "\n POWER : " << opower;
            aggressionLevel = "EXTREME";
            cout << "\n AGGRESSION LEVEL : " << aggressionLevel;
            oterritories = 8;
            cout << "\n Territories Occupied :" << oterritories;
        }
    }

};

class MafiaBoss:public Police, public OpponentGang
{
private:
    string name;
    int gangMembers;
    int loyalty;
    int money;
    int strenght;
    int territories;
    int finish = 0;
   
   

public:
    MafiaBoss()
    {
        cout << "\n ======= YOUR GANG ====== \n";
        name = "The Shadows";
        cout << "\n NAME :" << name;
        gangMembers = 25;
        cout << "\n Total Members: " << gangMembers;
        loyalty = 90;
        cout << "\n Overall loyality level : " << loyalty << "% ";
        money = 500000;
        cout << "\n Total Assestes present : " << money;
        territories = 3;
        cout << "\n Total Territories occupied : " << territories;
        generateStrenght();
        
    }
    void generateStrenght()
    {
       
        strenght = 50 + rand() % 51;
        cout << "\n Strength : " << strenght<<endl;
    }

    void attackOpponent()  // Attacking opponent
    {
        if (strenght<opower)
        {
            cout << "\n !! Your strenght was lower !! ";
            cout << "\n Opponent attacked on you!!\n";
            suspicionLevel += 10;
            cout << "\n Police suspection increased to : " << suspicionLevel;
            loyalty -= 5;
            cout << "\n Loyality of the group Decreased to : " << loyalty;
            money -= 20000;
            cout << "\n Assestes Decreased to : " << money;
            gangMembers -= 2;
            cout << "\n Members were killed !!";
            cout << "\n Total members Left: " << gangMembers;
        }
        else 
        {
            cout << "You successfully attacked the opponent.\n";
            strenght += 5;
            cout << "\n STrenght increased : " << strenght;
            territories += 1;
            cout << "\n Total  terrotries occupied now are : " << territories;
            money += 25000;
            cout << "\n Assests increased to : " << money;
            omembers -= 2;
            cout << "\n " << oname << " Gang members decresed to : " << omembers;
            opower -= 5;
            cout << "\n " << oname << " Gang power decresed to : " << opower;
        }
    }
    void attemptBribe(int amount)   // Bribing Police
    {
        if (amount > 0)
        {
            if ((suspicionLevel >= 40 && suspicionLevel <= 50) && (amount >= 50000))
            {
                cout << "\n Bribe money accepted of amount : " << amount;
                bribeMoney = bribeMoney + amount;
                cout << "\n Total Bribe money colleted till now : " << bribeMoney;
                suspicionLevel = suspicionLevel - 10;
                cout << "\n Suspection level decreased to : " << suspicionLevel;
            }

            else if ((suspicionLevel > 50 && suspicionLevel <= 60) && (amount >= 60000))
            {
                cout << "\n Bribe money accepted of amount : " << amount;
                bribeMoney = bribeMoney + amount;
                cout << "\n Total Bribe money colleted till now : " << bribeMoney;
                suspicionLevel = suspicionLevel - 10;
                cout << "\n Suspection level decreased to : " << suspicionLevel;
            }

            else if ((suspicionLevel > 60 && suspicionLevel <= 70) && (amount >= 78000))
            {
                cout << "\n Bribe money accepted of amount : " << amount;
                bribeMoney = bribeMoney + amount;
                cout << "\n Total Bribe money colleted till now : " << bribeMoney;
                suspicionLevel = suspicionLevel - 10;
                cout << "\n Suspection level decreased to : " << suspicionLevel;
            }

            else if ((suspicionLevel > 70 && suspicionLevel <= 80) && (amount >= 90000))
            {
                cout << "\n Bribe money accepted of amount : " << amount;
                bribeMoney = bribeMoney + amount;
                cout << "\n Total Bribe money colleted till now : " << bribeMoney;
                suspicionLevel = suspicionLevel - 10;
                cout << "\n Suspection level decreased to : " << suspicionLevel;
            }

            else if ((suspicionLevel > 80 && suspicionLevel <= 90) && (amount >= 95000))
            {
                cout << "\n Bribe money accepted of amount : " << amount;
                bribeMoney = bribeMoney + amount;
                cout << "\n Total Bribe money colleted till now : " << bribeMoney;
                suspicionLevel = suspicionLevel - 10;
                cout << "\n Suspection level decreased to : " << suspicionLevel;
            }

            else if ((suspicionLevel > 90 && suspicionLevel <= 95) && (amount >= 100000))
            {
                cout << "\n \t !! HIGH ALERT !! ";
                cout << "\n Police already has " << suspicionLevel << "% suspicion." << endl;
                cout << "\nDo you still want to offer the bribe? " << endl;
                cout << "\n Press Y for 'YES' or N for 'NO' :  ";
                cin >> option;
                if (option == 'Y')
                {
                    cout << "\n Bribe money accepted of amount : " << amount;
                    bribeMoney = bribeMoney + amount;
                    cout << "\n Total Bribe money colleted till now : " << bribeMoney;
                    suspicionLevel = suspicionLevel - 20;
                    cout << "\n Suspection level decreased to : " << suspicionLevel;
                }
                else
                {
                    cout << "\n Bribe cancelled !!";
                }
            }
            else if (suspicionLevel >= 100)
            {
                cout << "\n Police has now Suspection level increased to 100%";
                cout << "\n !! NO WAY TO GO OUT !!";
                cout << "\n POLICE RAID ON YOU !!!";

                raid = 1;
                exit(0);
            }
            else
            {
                cout << "\n Your Bribe has been Rejected !!!";
                suspicionLevel = suspicionLevel + 20;
                cout << "\n Police suspection level Icreased to :  " << suspicionLevel << "% ";
                cout << "\n BEAWARE OF YOUR NEXT MOVE !!! ";
            }
        }
        else
            cout << "\n Amount entered was 0 or incorrect ";
        money -= amount;
       cout << "\n Your assests now : " << money;

    }

    void increaseGang()   // increasing gang
    {
        int spend, m;
        if (loyalty <= 40 && loyalty >=20)
        {
            cout << "\n Warning: Loyalty too low. Members may join opponent!!\n";
        }
        else if (loyalty < 20)
        {
            cout << "\n !! LOYALITY FINISHED !! ";
            cout << "\n Members joined the opponent !!";
            finish = 1;
            return;
        }
        cout << "\n 1 Member = 50000 \n ";
        cout << "\n Enter the amount : ";
        cin >> spend;
        cout << "\n Enter the number of membrs you want to increase : ";
        cin >> m;
       

      
        if (spend < (m*50000))
        {
            cout << "\n Not enough money to recruit.\n";
            return;
        }
        else
        {
            gangMembers += m;
            cout << "\n Total gang members now are :" << gangMembers;
            money -= spend;
            cout << "\n Assestes :" << money;
            suspicionLevel += 5;
            cout << "\n Police suspection : " << suspicionLevel;
            loyalty -= 3;
            cout << "\n Gang loyality : " << loyalty;
            cout << "Gang expanded. Keep Watch on suspiction and loyalty levels.\n";
        }
      
    }
    void gameover()
    {
        if (raid == 1 || finish == 1 ||gangMembers<=2 || money<=0) // 4 conditions loss game
        {
            // police raid | finished loyality of gang | members left are 2 or less | assest finished
            cout << "\n Game Over !!";
            cout << "\n You Loss !!";
            exit(0);
        }
        else if (territories == 10 || omembers <= 2)  // 2 conditions to WIN
        {
            cout << "\n Game Over !! ";
            cout << "\n YOU WON !!";
            exit(0);
        }
    }
};
int main()
{
    srand(static_cast<unsigned int>(time(0))); 
    MafiaBoss m; 
    m.showpolice();
    cout << endl;
    m.showopponent();
    cout << endl;
    int c, b;

    while (true)  // Game loop
    {
        cout << "\n\n==================== MENU ====================";
        cout << "\n 1. Attack Opponent";
        cout << "\n 2. Bribe Police";
        cout << "\n 3. Increase Gang";
        cout << "\n 4. Exit Game";
        cout << "\n=============================================";
        cout << "\n Enter your choice: ";
        cin >> c;

        switch (c)
        {
        case 1:
            m.attackOpponent();
            break;
        case 2:
            cout << "\n Enter the Money to Bribe: ";
            cin >> b;
            m.attemptBribe(b);
            break;
        case 3:
            m.increaseGang();
            break;
        case 4:
            cout << "\n Exiting game by player choice.";
            exit(0);
        default:
            cout << "\n Invalid input. Please try again.";
            break;
        }

        // After each action, check if the game should end
        m.gameover();
    }
    return 0;
}