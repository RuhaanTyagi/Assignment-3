#include<stdio.h>
#include<string.h>

char* word_sort(char []);

int main()
{
  char s1[20], s2[20];
  scanf("%s%s",s1,s2);

  char sorted_s1[strlen(s1)];
  char sorted_s2[strlen(s2)];

  strcpy(sorted_s1,word_sort(s1));
  strcpy(sorted_s2,word_sort(s2));

  if(strcmp(sorted_s1,sorted_s2) == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }

}

char* word_sort(char s[])
{
  char t;
  int n = (int)strlen(s);
  int i,j;

  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(s[i]>s[j])
      {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
      }
    }
  }
  return s;
}
