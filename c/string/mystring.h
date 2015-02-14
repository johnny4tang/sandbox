//void    *memchr(const void *, int, size_t);
//int      memcmp(const void *, const void *, size_t);
//void    *memcpy(void *, const void *, size_t);
//void    *memmove(void *, const void *, size_t);
//void    *memset(void *, int, size_t);
//char    *strcat(char *, const char *);///////////////
//char    *strchr(const char *, int);///////////////
//int      strcmp(const char *, const char *);///////////////
//int      strcoll(const char *, const char *);
//char    *strcpy(char *, const char *);///////////////
//size_t   strcspn(const char *, const char *);
//char    *strerror(int) __DARWIN_ALIAS(strerror);
//size_t   strlen(const char *);///////////////
//char    *strncat(char *, const char *, size_t);///////////////
//int      strncmp(const char *, const char *, size_t);///////////////
//char    *strncpy(char *, const char *, size_t);///////////////
//char    *strpbrk(const char *, const char *);
//char    *strrchr(const char *, int);///////////////
//size_t   strspn(const char *, const char *);
//char    *strstr(const char *, const char *);
//char    *strtok(char *, const char *);
//size_t   strxfrm(char *, const char *, size_t);

char* mystrcat(char* dst, const char* src)
{
        char* tmp = dst;
        while(*tmp++ != '\0')
                ;
        tmp--;
        while((*tmp++ = *src++)!= '\0')
                ;
        return dst;
}
char* mystrcpy(char* dst, const char* src)
{
        char* tmp = dst;
        while((*tmp++ = *src++)!= '\0')
                ;
        return dst;
}
char* mystrchr(char* s, int c )
{
        char* tmp = s;
        while(*tmp != '\0')
        {
                tmp++;
                if(*tmp == (char)(c))
                {
                        break;
                }
        }
        //printf("%s\n",tmp);
        return tmp;
}
int mystrcmp(const char* s1, const char* s2)
{
	int res;
	while((*s1 != '\0') && (*s2 != '\0'))
	{	
		if(*s1 < *s2)
		{
			res = -1;
			return res;;
		}
		if(*s1 > *s2)
		{
			res = 1;
			return res;
		}
		s1++;s2++;
	}
	if(*s1 == '\0' && *s2 == '\0')
		return 0;
	else if(*s1 != '\0')
		return 2;
	else if(*s2 != '\0')
		return -2;
	return res;
}
int mystrlen(const char* s)
{
	int count = 0;
	while(*s++ != '\0')
	{
		count++;
	}
	return count;
}
