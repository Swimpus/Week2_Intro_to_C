# include <stdio.h>

int main(void){

    // Switch/Case
    // Only usable for integer and char only.

    // switch (condition){
    // (cases go here)
    // }

    char rank = 'S';

    switch (rank) { 
        case 'S':
            printf("The best of the best\n");
            break; // Break tells the switch loop to stop!
        case 'A':
            printf("Very good!\n");
            break;
        case 'B':
            printf("Good!\n");
            break;
        case 'C':
            printf("Okay\n");
            break;
        case 'D':
            printf("Not good\n");
            break;
        case 'F':
            printf("Terrible!\n");
            break;
        default: // You can add a default case, similar to else in a way.
            printf("Unranked");
            break;
    }

    //-----------------------------------------------------------------------
    // COOL TRIKZZZ!!
    // Intentational fall through!

    // Scale of pain
    // 0-10
    int pain;
    printf("How much pain are you in?\n");
    fscanf(stdin,"%d",&pain);

    switch (pain){
        case 0: // *FALL THROUGH//
        case 1: // *FALL THROUGH//
        case 2: // *FALL THROUGH//
        case 3: // *FALL THROUGH//
            printf("Not in too much pain\n");
            break;
        case 4: // *FALL THROUGH//
        case 5: // *FALL THROUGH//
        case 6: // *FALL THROUGH//
        case 7: // *FALL THROUGH//
            printf("Moderate pain\n");
            break;
        case 8: // *FALL THROUGH//
        case 9: // *FALL THROUGH//
        case 10: // *FALL THROUGH//
            printf("TONS OF PAIN!!\n");
            break;
        default:
            printf("Error, cannot quantify pain\n");
    }


    return 0;
}