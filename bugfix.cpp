#include <iostream>
#include <string>
using namespace std;
int main()
{
    int trunkHeight = 0;
    int trunkWidth = 0;
    int leavesWidth = 0;
    int preTrunkSpacing = 0;
    int preLeavesSpacing = 0;

    // Ask for trunk height until positive.
    cout << "Enter height of trunk: ";
    cin >> trunkHeight;
    cout << endl;
    
    while (trunkHeight <= 0)
    {
        cout << "Please enter a positive number for height of trunk: ";
        cin >> trunkHeight;
        cout << endl;
    }

    // Ask for trunk width until positive and odd.
    cout << "Enter width of trunk: ";
    cin >> trunkWidth;
    cout << endl;

    while ((trunkWidth <= 0) && (trunkWidth % 2) == 0)
    {
        if (trunkWidth <= 0)
        {
            cout << "Please enter a positive number for width of trunk: ";
        }
        else
        {
            cout << "Please enter an odd number for width of trunk: ";
        }
        cin >> trunkWidth;
        cout << endl;
    }

    // Ask for leaves width until greater than the trunk width + 1 and odd.
    cout << "Enter width of leaves: ";
    cin >> leavesWidth;
    cout << endl;
    while (leavesWidth <= (trunkWidth + 1) || (leavesWidth % 2) == 0)
    {
        if (leavesWidth <= trunkWidth + 1)
        {
            cout << "Please enter a number for width of leaves larger than " << (trunkWidth + 1) << ": ";
        }
        else
        {
            cout << "Please enter an odd number for width of leaves: ";
        }
        cin >> leavesWidth;
        cout << endl;
    }
    // Terminate all inputs with a single endline.
    cout << endl;

    // Output the tree top (i.e. leaves).
    for (int i = 1; i <= leavesWidth; i += 2)
    {
        // Output spacing before asterisks.
        preLeavesSpacing = (leavesWidth - i) / 2;
        for (int k = 1; k <= preLeavesSpacing; ++k)
        {
            cout << ' ';
        }

        // Output asterisks for the tree top row.
        for (int k = 1; k <= i; ++k)
        {
            cout << '*';
        }

        // Terminate tree top row.
        cout << endl;
    }

    // Calculate the number of spaces to offset trunk.
    // Use difference of middle points for tree top and trunk.
    preTrunkSpacing = (leavesWidth - trunkWidth) / 2;

    // Output the tree trunk.
    for (int i = 1; i <= trunkHeight; ++i)
    {
        // Output spacing before trunk asterisks.
        for (int k = 1; k <= preTrunkSpacing; ++k)
        {
            cout << ' ';
        }

        // Output trunk asterisks.
        for (int k = 1; k <= trunkWidth; ++k)
        {
            cout << '*';
        }

        cout << endl;

    }

    return 0;
}