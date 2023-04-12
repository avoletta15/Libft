size_t	ft_strlcat(char *dest, const char *src, size_t finalsize)
{
    size_t  i;
    size_t	j;

    if (finalsize <= ft_strlen(dest)) /* se tamaho possivel a nossa string final
	for menor ou igual ao tamanho da nossa last string*/
    {
        return (finalsize + ft_strlen(src)); /* retornamos o valor do da first string */
    }
    i = ft_strlen(dest); /* igualamos ao comprimento do dest > começa no final dela, para concatenar
	(colar uma na outra) */
    j = 0; /* inicio da source */
    while (src[j] != '\0' && (i + 1) < finalsize) /* enquanto nao chegarmos no final da origem &&
	o tamamho da string inicial (considerando o nulo) for menor do que o size da string final */
    {
        dest[i] = src[j]; /* concatenamos */
        i++; /* aumenta o i > estamos literalmente colando uma na outra */
        j++; /* le a source */
    }
    dest[i] = '\0'; /* adiciona o null */
    return (i); /* retorna o comprimento da string final > ja concatenada */
}