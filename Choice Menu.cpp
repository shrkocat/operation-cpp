#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    // Declare
	int value;
	string choice;
	
	do {
		system("cls");
	// Decision to do process
    cout << "****************MENU****************" << endl;
    cout << "[1] PRIME NUMBER                    " << endl;
    cout << "[2] RIGHT TRIANGLE                  " << endl;
    cout << "[3] FIBONACCI SERIES                " << endl;
    cout << "[4] FACTORIAL                       " << endl;
    cout << "[5] EXIT                            " << endl;
    cout << "************************************" << endl;
    
    	do {
			cout << "ENTER YOUR CHOICE: ";
	    	cin >> value;
			
			if (value < 1 || value > 5)
			{
				cout << "Invalid number, enter again" << endl;
			}
		} while (value < 1 || value > 5);
		
	
	// Switch Case Operations

	switch(value){
		case 1: // THe Prime Number
			{
				// Declare for Case 1
				int num, i, count;
				
				count = 0;
							
				// Input a number for Case 3 please :)	
				cout << "Enter a Number: ";
				cin >> num;
				
				// Execution for Case 1
				for (i = 1; i <= num; i++)
				{
					if (num % i == 0)
					{
						count++;
					}
				}
				
				// Output for Case 1
				if (count == 2)
				{
					cout << num << " is a Prime Number" << endl;
				}
				
				else
				{
					cout << num << " is not a Prime Number" << endl;
				}
			} break;
			
		case 2: // The Right Triangle
            {
                // Declare for Case 2
                int num, iRow, iCol;
                
                // Input a number for Case 2 please :)
				cout << "Enter the Size of Right Triangle: ";
				cin >> num;
                
                // Execution for Case 2
                for (iRow = 1; iRow <= num; iRow++)
                {
                    for (iCol = 1; iCol <= num; iCol++)
                    {
                        // Output for Case 2
                        if (iCol <= iRow)
                            cout << setw(3) << iCol;
                        else
                            cout << setw(3) << " ";
                    }
                    cout << endl;
                }
            } break;
            
		case 3: // The Fibonacci Series
			{
				// Declare for Case 3
				int num, i, given1, given2, fiboNum;
			
				given1 = 1;
				given2 = 1;
				
				// Input a number for Case 3 please :)
				cout << "Enter a Number: ";
				cin >> num;
				
				// Execution for Case 3
				for (i = 0; i < num; i++)
				{
				    // Ouput for Case 3
					cout << given1 << setw(3);
					
					fiboNum = given1 + given2;
					given1 = given2;
					given2 = fiboNum;
				}		
				cout << endl;	
			} break;
			
		case 4: // The Factorial
		    {
		        // Declare for Case 4
		        int num, i, prod;
		        
		        prod = 1;
		        
		        // Input a number for Case 4 please :)
		        cout << "Enter a Number: ";
				cin >> num;
		        
		        cout << "Factorial of ";
		        
		        // Execution for Case 4
		        for (i = num; i >= 1; --i)
		        {
		            prod *= i;
		            
		            // Ouput for Case 4
		            if (i > 1)
		            {
		                cout << i << "*";
		            }
		            
		            else
		            {
		                cout << i;
		            }
		        }
		        cout << " is " << prod << endl;
		    } break;
		    
		case 5:
			{
				exit (5);
			} break;
	}
	// Option to choose from selection
	cout << "Return to Main Menu? [Y/N]";
	cin >> choice;
	} while (choice == "Y");
	
 return 0;
}
