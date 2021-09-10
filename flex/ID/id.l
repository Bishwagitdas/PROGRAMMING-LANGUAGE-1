%{
int flag = 0 ;
%}
%%
[0-9]{2}+[-]+[0-9]{5}+[-]+[1-3] {flag=1;}
\n {return 0;}
%%
int yywrap()
{
return 1;
}
int main()
{
yylex();
if(flag==1)
{
    printf("\nThis is a Valid Aiub University Id");
}
else
{
    printf("\nThis is Not a Valid Aiub University Id");
}

 


return 0;

 

}