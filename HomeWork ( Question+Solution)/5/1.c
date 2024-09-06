#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char arr[n][500];
    for(int i = 0; i < n; i++){
        scanf("%s", &arr[i]);
    }

    int q;
    scanf("%d", &q);
    int item[q];
    int state[q];//1 -> lex , 2 -> vow, 3 -> distinct, 0 -> prime
    for(int i = 0; i < q; i++){
        scanf("%d", &item[i]);
        if(item[i] == 2){
            char s[9];
            scanf("%s", &s);
            if(strcmp(s, "LEX") == 0)
                state[i] = 1;
            else if(strcmp(s, "VOW") == 0)
                state[i] = 2;
            else if(strcmp(s, "DISTINCT") == 0)
                state[i] = 3;
        }
        else{
            if(i != 0)
                state[i] = state[i-1];
            else
                state[0] = 0;
        }
    }

    /*  *************************  LEX  ************************* */
    char lex[n][100];
    for(int i = 0; i < n; i++){
        strcpy(lex[i], arr[i]);
    }

    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
        if (strcmp(lex[j], lex[j+1]) > 0)
            {
            char temp[100];
            strcpy(temp, lex[j]);
            strcpy(lex[j], lex[j+1]);
            strcpy(lex[j+1], temp);
            }
        }
    }

    /*  *************************  VOW  ************************* */
    char vow[n][100];
    for(int i = 0; i < n; i++){
        strcpy(vow[i], arr[i]);
    }

    int total_vow[n];
    for(int i = 0; i < n; i++){
        total_vow[i] = 0;
        for(int j = 0; vow[i][j] != '\0'; j++){
            if(vow[i][j] == 'a' || vow[i][j] == 'e' || vow[i][j] == 'i' || vow[i][j] == 'u' || vow[i][j] == 'o')
                total_vow[i]++;
        }
    }

    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
        if (total_vow[j] < total_vow[j+1])
            {
            char temp[100];
            strcpy(temp, vow[j]);
            strcpy(vow[j], vow[j+1]);
            strcpy(vow[j+1], temp);
            int tmp;
            tmp = total_vow[j];
            total_vow[j] = total_vow[j+1];
            total_vow[j+1] = tmp;
            }
        }
    }

    /*  *************************  DISTINCT  ************************* */
    char dis[n][100];
    for(int i = 0; i < n; i++){
        strcpy(dis[i], arr[i]);
    }

    int total_dis[n];
    for(int i = 0; i < n; i++){
        total_dis[i] = 0;
        char ch[26];
        for(int j = 0; j < 26; j++)
            ch[j] = 0;
        for(int j = 0; dis[i][j] != '\0'; j++){
            if(ch[dis[i][j]-'a'] == 0){
                total_dis[i]++;
                ch[dis[i][j]-'a']++;
            }
        }
    }

    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
        if (total_dis[j] < total_dis[j+1])
            {
            char temp[100];
            strcpy(temp, dis[j]);
            strcpy(dis[j], dis[j+1]);
            strcpy(dis[j+1], temp);
            int tmp;
            tmp = total_dis[j];
            total_dis[j] = total_dis[j+1];
            total_dis[j+1] = tmp;
            }
        }
    }


    /* !!!!!!!!!!!!!!!!!!!!!! RESULTS !!!!!!!!!!!!!!!!!!!!! */
    for(int i = 0; i < q; i++){
        if(item[i] == 1){
            if(state[i] == 1){
                for(int j = 0; j < n; j++){
                    printf("%s ", lex[j]);
                }
            }
            else if(state[i] == 0){
                for(int j = 0; j < n; j++){
                    printf("%s ", arr[j]);
                }
            }
            else if(state[i] == 2){
                for(int j = 0; j < n; j++){
                    printf("%s ", vow[j]);
                }
            }
            else if(state[i] == 3){
                for(int j = 0; j < n; j++){
                    printf("%s ", dis[j]);
                }
            }
            printf("\n");
        }
    }


    return 0;
}
