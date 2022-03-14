#include <iostream>
using namespace std;
int main() 
{	
	int choice;
	printf("1 to insert student details\n2 to search for student details\n3 to delete student details\n4 to update student details\n5 to display all student details");
    do
    {
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
               printf("Insert details ");
                break;
            case 2:
               printf("Search ");
                break;
            case 3:
                printf("Delete ");
                break;
            case 4:
                printf("Update");
                break;
            case 5:
                printf("Display ");
                break;
            default:
            	printf("Invalid ");
            	break;
        }
        
    } while (choice != 0);
}
