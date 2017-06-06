int cadena(char *cadenaA,char *cadenaB)
{
    while(*cadenaA!='\0'and *cadenaB!='\0')
    {
    if(*cadenaA<*cadenaB)
            return 1;

    if(*cadenaA>*cadenaB)
        return -1;
        //    cout<<"-1";
    cadenaA ++;
    cadenaB ++;
    return 0;
    }
}
