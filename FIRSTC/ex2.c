#include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char subject,maths,science;
//     printf("which subjects have you passed?");
//     scanf("%c", &subject);

//     if (subject=maths)
//     {
//         printf("you get 15 rupees cash prize!");
//     }
//     else if (subject==science)  
//     {
//         printf("you get 15 rupees cash prize!");
//     }
//     else{
//         printf("wohoo you got 45 rupees!");
//     }

    int main() {
    int passedMaths, passedScience;
    
    // Input whether the student has passed in Maths
    printf("Did the student pass in Maths? (1 for Yes, 0 for No): ");
    scanf("%d", &passedMaths);

    // Input whether the student has passed in Science
    printf("Did the student pass in Science? (1 for Yes, 0 for No): ");
    scanf("%d", &passedScience);

    // Calculate cash prize based on the conditions
    if (passedMaths && passedScience) {
        printf("Congratulations! You have won a cash prize of 45 rupees.\n");
    } else if (passedMaths || passedScience) {
        printf("Congratulations! You have won a cash prize of 15 rupees.\n");
    } else {
        printf("Sorry, you did not win any cash prize.\n");
    }

    return 0;
}

    
    



