#include <stdio.h>
#include <string.h>
#include <conio.h>
void caesar();
void polyaplha();
void main_frame();
int main()
{
    main_frame();
    return 0;
}

void caesar()
{
    int a;
    printf("[1] To Encryprt and [2] To Decrypt [0] Back to main menu\n");
    scanf("%d", &a);
    if (a == 1)
    {
        char message[100], ch;
        int i, key;
        printf("Enter a message to encrypt: \n");
        fflush(stdin);
        gets(message);
        printf("Enter key: ");
        scanf("%d", &key);
        for (i = 0; message[i] != '\0'; ++i)
        {
            ch = message[i];
            if (ch >= 'a' && ch <= 'z')
            {
                ch = ch + key;
                if (ch > 'z')
                {
                    ch = ch - 'z' + 'a' - 1;
                }
                message[i] = ch;
            }
            else if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch + key;
                if (ch > 'Z')
                {
                    ch = ch - 'Z' + 'A' - 1;
                }
                message[i] = ch;
            }
        }
        printf("Encrypted message: %s\n", message);
    }
    else if (a == 2)
    {
        char message[100], ch;
        int i, key;
        printf("Enter a message to decrypt: ");
        fflush(stdin);
        gets(message);
        printf("Enter key: ");
        scanf("%d", &key);
        for (i = 0; message[i] != '\0'; ++i)
        {
            ch = message[i];
            if (ch >= 'a' && ch <= 'z')
            {
                ch = ch - key;
                if (ch < 'a')
                {
                    ch = ch + 'z' - 'a' + 1;
                }
                message[i] = ch;
            }
            else if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch - key;
                if (ch < 'A')
                {
                    ch = ch + 'Z' - 'A' + 1;
                }
                message[i] = ch;
            }
        }
        printf("Decrypted message: %s\n", message);
    }
    else if (a == 0)
    {
        char c;
        printf("Are you sure you want to go back?(  (y)es or (N)o  )");
        fflush(stdin);
        scanf("%c", &c);
        if (c == 121)
        {
            main_frame();
        }
        if (c == 110)
        {
            caesar();
        }
    }
    else
    {
        printf("invalid choice.. try again");
        caesar();
		
		
		
    }
}

void polyalpha()
    {
        int a;
		char b[20]={'\0'},e[20]={'\0'},k[20]={'\0'},en[20]={'\0'},de[20]={'\0'};
    printf("[1] To encrypt and [2] To decrypt [0] Back to main menu\n");
	scanf("%d",&a);
	if(a==1)
	{
	
	int i,j;
    printf("\n Enter the text to encrypt:");
	fflush(stdin);
    scanf("%[^\n]s",b);
    printf("\n Enter the key:");
    scanf("%s",k);
	j=0;
    for(i=strlen(k);i<strlen(b);i++)
    {
    if(j==strlen(k))
    {
    j=0;
    }
    k[i]=k[j];
    j++;
    }
    printf("\n New key is:%s",k);
	//Encryption
    for(i=0;i<strlen(b);i++)
    {
        e[i]=(((b[i]-97)+(k[i]-97))%26)+97;
    }
    printf("\n \n Encrypted text is:%s",e);
	}
	else if(a==2)
	{
		
	int i,j;
    printf("\n Enter the encrypted text to decrypt:");
	fflush(stdin);
    scanf("%[^\n]s",en);
    printf("\n Enter the key:");
    scanf("%s",k);
	j=0;
    for(i=strlen(k);i<strlen(en);i++)
    {
    if(j==strlen(k))
    {
    j=0;
    }
    k[i]=k[j];
    j++;
    }
    printf("\n New key is:%s",k);
	
	//Decryption
	for(i=0;i<strlen(en);i++)
    {
		if(en[i]<k[i])
			{
				de[i]=26+((en[i]-97)-(k[i]-97))+97;
			}
		else
			de[i]=(((en[i]-97)-(k[i]-97))%26)+97;
    }
		printf("\n \n Decrypted text is:%s",de);
		
    }
	else if(a==0)
	{
		char c;
        printf("Are you sure you want to go back?(  (y)es or (N)o  )");
        fflush(stdin);
        scanf("%c", &c);
        if (c == 121)
        {
            main_frame();
        }
        if (c == 110)
        {
            polyalpha();
        }
    }
    else
    {
        printf("invalid choice.. try again");
        polyalpha();
    }
}

void main_frame()
{
    int n;
    printf("_________________________________________--**************--______________________________________________\n");
    printf("Hello everyone!!\nWelcome to Cipher Head\nWhich of the following do you want to try?\n");
    printf("[1] The caesar cipher!\n[2] The Polyalphabetic cipher !!\n[0]Exit\n");
    printf("enter number = ");
    scanf("%d", &n);
    if (n == 1)
    {
        caesar();
    }
    else if (n == 2)
    {
        polyalpha();
    }
    else if (n == 0)
    {
        printf("Thank you for trying out cipher head !!\n");
    }
    else
    {
        printf("Invalid choice.....Try again\n");
        main_frame();
    }
	printf("\n thats it Folks!!.....^_~");
}
