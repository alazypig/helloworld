#include <stdio.h>

int main()
{
	int arr[50], n, *p, i, m, k;
	
	printf("ÊäÈëÈËµÄÊýÁ¿£º");
	scanf("%d", &n);
	p = arr;
	for (i = 0; i < n; i++)
		*(p + i) = i + 1;	//¸øÈË±àºÅ
	i = m = k = 0;	//³õÊ¼»¯ 
	while (m < n - 1) // Ñ­»·Ö±ÖÁÖ»Ê£Ò»ÈË 
	{
		if (*(p + i) != 0) k++;	// µ±Ç°ÈËÊÇÎª±»ÌÞ³ýµÄÈËÊ±£¬¸öÊý¼ÓÒ» 
		if (k == 3)
		{
			*(p + i) = 0;
			m++;	//ÌÞ³ýÈËÊý¼ÓÒ» 
			k = 0;	//¹éÁã 
		}
		i++;
		while (i == n) i = 0;	//¹éÁã 
	}
	while (*p == 0) p++;
	printf("±àºÅÎª %d µÄÈËÁôÁËÏÂÀ´\n", *p);
	
	return 0;
}
