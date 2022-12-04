int main() {
  char str[20], *pt;
  int i = 0, c = 0;
  printf("Pointer Example Program : Count Vowels In String \n");
  printf("\nEnter Any string in small [below 20 chars] : ");
  gets(str);
  pt = str;
  while (*pt != '\0') {
    if (*pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u')
      c++;
    i++;
    pt++;
  }
  printf("\nLength of String : %d", i);
  printf("\nVowels Count In the String : %d", c);
  printf("\nConstant Count in the String : %d", (i - c));

  return 0;
}
