#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_choice(int choice) {
    switch(choice) {
        case 0:
            printf("    ___\n---'   _)\n      ()\n      ()\n      ()\n---.()\n");
            break;
        case 1:
            printf("    ______\n---'   ___)\n          ______)\n          _______)\n         _______)\n---.)\n");
            break;
        case 2:
            printf("    ______\n---'   ___)\n          _____)\n       __________)\n      ()\n---.()\n");
            break;
    }
}

int main() {
    int user_choice, computer_choice;
    printf("Type 0 for rock, 1 for paper, 2 for scissors\n");
    printf("What do you choose?: ");
    scanf("%d", &user_choice);
    
    if (user_choice >= 0 && user_choice <= 2) {
        print_choice(user_choice);
    } else {
        printf("Invalid input. You lose!\n");
        return 1;
    }
    
    srand(time(NULL));
    computer_choice = rand() % 3;
    printf("Computer chose: \n");
    print_choice(computer_choice);

    if (user_choice == 0 && computer_choice == 2) {
        printf("You win!\n");
    } else if (user_choice == 2 && computer_choice == 0) {
        printf("You lose!\n");
    } else if (computer_choice > user_choice) {
        printf("You lose!\n");
    } else if (user_choice > computer_choice) {
        printf("You win!\n");
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}
