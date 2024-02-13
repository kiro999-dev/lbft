void    *ft_memset(void *s, int c, size_t n)
{
size_t i=0;
unsigned char *ptr=(unsigned char*) s;
while (i<n)
{
    *ptr=c;
    i++;
    ptr++;
}

return s;
}
