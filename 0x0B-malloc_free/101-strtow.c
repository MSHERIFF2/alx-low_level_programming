#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
* **strtow - function that splits a string into words.
* @str : pointer
* Return: Char
*/

bool is_space(char c)
{
	return c == ' ' || c == '\t' || c == '\n';
}


int count_words(char *str) {
    int count = 0;
    bool in_word = false;
    
    while (*str) {
        if (is_space(*str)) {
            in_word = false;
        } else if (!in_word) {
            in_word = true;
            count++;
        }
        str++;
    }
    
    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_count = 0;
    char *start = str;
    bool in_word = false;

    while (*str) {
        if (is_space(*str)) {
            if (in_word) {
                int word_length = str - start;
                words[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[word_count] == NULL) {
                    // Free previously allocated memory and return NULL
                    for (int i = 0; i < word_count; i++) {
                        free(words[i]);
                    }
                    free(words);
                    return NULL;
                }
                strncpy(words[word_count], start, word_length);
                words[word_count][word_length] = '\0';
                word_count++;
                in_word = false;
            }
        } else {
            if (!in_word) {
                start = str;
                in_word = true;
            }
        }
        str++;
    }

    if (in_word) {
        int word_length = str - start;
        words[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_count] == NULL) {
            // Free previously allocated memory and return NULL
            for (int i = 0; i < word_count; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }
        strncpy(words[word_count], start, word_length);
        words[word_count][word_length] = '\0';
        word_count++;
    }

    words[word_count] = NULL;
    return words;
}
