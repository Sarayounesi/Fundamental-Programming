#include <stdio.h>

int main()
{
	int p, n, i, temp, spec, num = 2, counter = 0;
	
	scanf("%d", &n);
    
	while(1)
	{
		temp = num;
		spec = 0;
		
		while(temp != 0)
		{
			spec = spec * 10;
        	spec = spec + temp % 10;
			temp = temp / 10;
        }
        
		if(spec == num)
		{
            p = 0;
            
            for(i = 3; i <= num / 3; i += 2)
			{
                if(num % i == 0)
				{
                    p = 1;
                    break;
                }
            }
            
            if(p == 0)
			{
                counter++;
                
                if(counter == n)
				{
                    printf("%d", num);
                    return 0;
                }
            }

        }
        
        if(num == 2)
			num++;
		else
            num += 2;
	}

    return 0;
}
