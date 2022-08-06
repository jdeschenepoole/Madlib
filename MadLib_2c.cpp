// Title: Mad-Lib
// Name: Joseph Deschene-Poole
// Student ID: 100064439
// Date: September 22, 2007
// Description: Creates a story based on user input. That is set to a constant.

#include <iostream>
#include <string>

using namespace std;

//functions
string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main()
{
    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";
    
    string name = askText("Please enter a name: ");
    string noun = askText("Please enter a plural noun: ");
    int number = askNumber("Please enter a number: ");
    string bodyPart = askText("Please enter a body part: ");
    string verb = askText("Please enter a verb: ");
    
    tellStory(name, noun, number, bodyPart, verb);

    return 0;
}

//gets text
string askText(string prompt)
{
    string text;
    cout << prompt;
    cin >> text; 
    return text;
}

//gets a number
int askNumber(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

//displays the story
void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
    string& nom = name;
    string& nouns = noun;
   
    cout << "\nHere's your story:\n";
    cout << "The famous explorer ";
    cout << nom;
    cout << " had nearly given up a life-long quest to find\n";
    cout << "The Lost City of ";
    cout << nouns;
    cout << " when one day, the ";
    cout << nouns;
    cout << " found the explorer.\n";
    cout << "Surrounded by ";
    cout << number;
    cout << " " << nouns;
    cout << ", a tear came to ";
    cout << nom << "'s ";
    cout << bodyPart << ".\n";
    cout << "After all this time, the quest was finally over. ";
    cout << "And then, the ";
    cout << nouns << "\n";
    cout << "promptly devoured ";
    cout << nom << ". ";
    cout << "The moral of the story? Be careful what you ";
    cout << verb;
    cout << " for.";
}

