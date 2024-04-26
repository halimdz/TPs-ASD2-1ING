#include <stdio.h>
#include <stdlib.h>

int main()
{
  	char str[100];
  	int i, j, k;

  	printf("\n Please Enter any String :  ");
  	gets(str);

  	for(i = 0; str[i] != '\0'; i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{

  			if(str[j] == str[i])
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
				j--;
 			}
		}
	}

	printf("\n The Final String after Removing All Duplicates = %s ", str);

  	return 0;
}

/*
#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int len = strlen(str);
    if (len <= 1) {
        // No duplicates to remove
        return;
    }

    int i, index = 0; // Index to keep track of non-duplicate characters

    for (i = 0; i < len; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break; // Found a duplicate
            }
        }
        if (j == i) {
            // Unique character, add it to the result
            str[index++] = str[i];
        }
    }

    // Null-terminate the result
    str[index] = '\0';
}

int main() {
    char str[] = "aaafghhaf";
    printf("Original string: %s\n", str);

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);
    return 0;
}
*/
