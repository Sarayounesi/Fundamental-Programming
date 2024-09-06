#include<stdio.h>

int main()
{
	FILE *fpin, *fpout;
	char code[100000];
	int n, i = 0;

	fpin = fopen("input.txt", "r");
	if(fpin == NULL)
	{
		printf("Cannot open input file.\n");
		return -1;
	}
	
	fpout = fopen("out.txt", "w");
	if(fpout == NULL)
	{
		printf("Cannot open output file.\n");
		return -1;
	}
	
	while((code[i] = fgetc(fpin)) != EOF) 
		i++;
		
	n = i;
	for(i = 0; i < n; i++)
	{
		if(code[i] == 'a' || code[i] == 'A')
		{
			fputc('.', fpout); fputc('-', fpout);
		}
		
		if(code[i] == 'b' || code[i] == 'B')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 'c' || code[i] == 'C')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('-', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 'd' || code[i] == 'D')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 'e' || code[i] == 'E')
		{
			fputc('.', fpout);
		}
		
		if(code[i] == 'f' || code[i] == 'F')
		{
			fputc('.', fpout); fputc('.', fpout); fputc('-', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 'g' || code[i] == 'G')
		{
			fputc('-', fpout); fputc('-', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 'h' || code[i] == 'H')
		{
			fputc('.', fpout); fputc('.', fpout); fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 'i' || code[i] == 'I')
		{
			fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 'j' || code[i] == 'J')
		{
			fputc('.', fpout); fputc('-', fpout); fputc('-', fpout); fputc('-', fpout);
		}
		
		if(code[i] == 'k' || code[i] == 'K')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('-', fpout);
		}
		
		if(code[i] == 'l' || code[i] == 'L')
		{
			fputc('.', fpout); fputc('-', fpout); fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 'm' || code[i] == 'M')
		{
			fputc('-', fpout); fputc('-', fpout);
		}
		
		if(code[i] == 'n' || code[i] == 'N')
		{
			fputc('-', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 'o' || code[i] == 'O')
		{
			fputc('-', fpout); fputc('-', fpout); fputc('-', fpout);
		}
		
		if(code[i] == 'p' || code[i] == 'P')
		{
			fputc('.', fpout); fputc('-', fpout); fputc('-', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 'q' || code[i] == 'Q')
		{
			fputc('-', fpout); fputc('-', fpout); fputc('.', fpout); fputc('-', fpout);
		}
		
		if(code[i] == 'r' || code[i] == 'R')
		{
			fputc('.', fpout); fputc('-', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 's' || code[i] == 'S')
		{
			fputc('.', fpout); fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == 't' || code[i] == 'T')
		{
			fputc('-', fpout);
		}
		
		if(code[i] == 'u' || code[i] == 'U')
		{
			fputc('.', fpout); fputc('.', fpout); fputc('-', fpout);
		}
		
		if(code[i] == 'v' || code[i] == 'V')
		{
			fputc('.', fpout); fputc('.', fpout); fputc('.', fpout); fputc('-', fpout);
		}
		
		if(code[i] == 'w' || code[i] == 'W')
		{
			fputc('.', fpout); fputc('-', fpout); fputc('-', fpout);
		}
		
		if(code[i] == 'x' || code[i] == 'X')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('.', fpout); fputc('-', fpout);
		}
		
		if(code[i] == 'y' || code[i] == 'Y')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('-', fpout); fputc('-', fpout);
		}
		
		if(code[i] == 'z' || code[i] == 'Z')
		{
			fputc('-', fpout); fputc('-', fpout); fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == '1')
		{
			fputc('.', fpout); fputc('-', fpout); fputc('-', fpout); fputc('-', fpout); fputc('-', fpout);
		}
		
		if(code[i] == '2')
		{
			fputc('.', fpout); fputc('.', fpout); fputc('-', fpout); fputc('-', fpout); fputc('-', fpout);
		}
		
		if(code[i] == '3')
		{
			fputc('.', fpout); fputc('.', fpout); fputc('.', fpout); fputc('-', fpout); fputc('-', fpout);
		}
		
		if(code[i] == '4')
		{
			fputc('.', fpout); fputc('.', fpout); fputc('.', fpout); fputc('.', fpout); fputc('-', fpout);
		}
		
		if(code[i] == '5')
		{
			fputc('.', fpout); fputc('.', fpout); fputc('.', fpout); fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == '6')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('.', fpout); fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == '7')
		{
			fputc('-', fpout); fputc('-', fpout); fputc('.', fpout); fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == '8')
		{
			fputc('-', fpout); fputc('-', fpout); fputc('-', fpout); fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == '9')
		{
			fputc('-', fpout); fputc('-', fpout); fputc('-', fpout); fputc('-', fpout); fputc('.', fpout);
		}
		
		if(code[i] == '0')
		{
			fputc('-', fpout); fputc('-', fpout); fputc('-', fpout); fputc('-', fpout); fputc('-', fpout);
		}
		
		if(code[i] == ':')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('.', fpout); fputc('-', fpout); fputc('-', fpout);
		}
		
		if(code[i] == '.')
		{
			fputc('.', fpout); fputc('-', fpout); fputc('.', fpout); fputc('-', fpout); fputc('.', fpout); fputc('-', fpout);
		}
		
		if(code[i] == '?')
		{
			fputc('.', fpout); fputc('.', fpout); fputc('-', fpout); fputc('-', fpout); fputc('.', fpout); fputc('.', fpout);
		}
		
		if(code[i] == '/')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('.', fpout); fputc('-', fpout); fputc('.', fpout);
		}
		
		if(code[i] == '-')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('.', fpout); fputc('.', fpout); fputc('.', fpout); fputc('-', fpout);
		}
		
		if(code[i] == '(')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('-', fpout); fputc('-', fpout); fputc('.', fpout);
		}
		
		if(code[i] == ')')
		{
			fputc('-', fpout); fputc('.', fpout); fputc('-', fpout); fputc('-', fpout); fputc('.', fpout); fputc('-', fpout);
		}
		
		if(code[i] == ' ')
		{
			fputc(' ', fpout); fputc('/', fpout);
		}
		
		if(code[i] == '\n')
		{
			fputc('\n', fpout);
			continue;
		}
		
		fputc(' ', fpout);
	}
	
	fclose(fpin);
	fclose(fpout);
	
	return 0;
}
