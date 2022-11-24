#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str){
    char *lower = "aeotl";
    char *upper = "AEOTL";
    char *num = "43071";
    
    int i, j;
    for(i=0; str[i] != '\0'; i++){
        for(j=0; j<5; j++){
            if(str[i] == lower[j] || str[i] == upper[j]){
                str[i] = num[j];
                break;
            }
        }
    }
    return (str);
