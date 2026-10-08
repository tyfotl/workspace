#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Lets try chars
    // const int N = 3;
    // char ch[N];
    // for (int i = 0; i < N; i++)
    // {
    //     ch[i] = get_char("Enter char: ");
    // }
    // printf("%c%c%c\n", ch[0], ch[1], ch[2]);
    // printf("%i%i%i\n", ch[0], ch[1], ch[2]);

    // Hmmm, what if we define a string as a collection of these chars?
    // string s = ch;
    // printf("%s\n", s);
    // printf("%c%c%c%c\n", s[0], s[1], s[2], s[3]);
    // printf("%i%i%i %i\n", ch[0], ch[1], ch[2], s[3]);

    // Hmmm, what if we define it separately?
    string S = "HI!";
    printf("%s\n", S);
    printf("%c%c%c%c%c\n", S[0], S[1], S[2], S[3], S[4]);
    printf("%i %i %i %i %i\n", S[0], S[1], S[2], S[3], S[4]);

    // So going by logic...
    printf(" %c %c %c %c %c\n", 'H', 'I', '!', '\n', '\0');
    printf(" %i %i %i %i %i\n", 'H', 'I', '!', '\n', '\0');

    // There we go the NULL char '\0'
}
