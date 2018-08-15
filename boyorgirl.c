#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
    printf("Enter the user name: ");
	scanf("%s", str);
	
	int found[256] = {0};
	int i, cnt = 0;
	
	for (i = 0; i < strlen(str); i++)
	{
		if(!found[str[i]])
		{
			cnt++;
			found[str[i]] = 1;	
		}	
	}

    if(cnt % 2 == 0){
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }
	return 0;
}