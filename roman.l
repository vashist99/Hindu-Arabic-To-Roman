%{
    #include "y.tab.h"
%}

%%


[0-9]          {yylval.num = atoi(yytext); return digit;}
[ \t\n]        {return print;}

%%
int yywrap (void) 
{
    return 1;
}