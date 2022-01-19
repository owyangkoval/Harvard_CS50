#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    int points[26];

        points[1] = (A, E, I, L, N, O, R, S, T, U)
        points[2] = (D, G)
        points[3] = (B, C, M, D)
        points[4] = ([F, H, V, W, Y)
        points[5] = K
        points[8] = (J, X)
        points[10] = Q, Z)



print f
}
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");


    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    printf("Player x wins!");

}]


int compute_score(string word)
{
    // TODO: Compute and return score for string
}
