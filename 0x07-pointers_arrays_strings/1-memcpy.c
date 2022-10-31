/**
 *
 * _memcpy - copies bytes of a given size from one memory area to another.
 * @dest: the address of the memory to copy to.
 * @src: source memory to copy from.
 * @n: the size of memory to copy.
 *
 * Return: address of @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    for(i=0;i<n;i++)
    dest[i]=src[i];
    return dest;
}



