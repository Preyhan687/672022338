 #include <stdio.h>


 int main()  {
    int i,  j,  n;

    printf("Menu\n") ;
    printf("1.Menu 1\n") ;
    printf("2.Menu 2\n") ;
    printf("3.Menu 3\n") ;
    printf("Pilih Menu 1 = ");
    scanf("%d", &n);

switch (n){
    case 1:
    printf("ini adalah menu 1\n");
    int i,j,n;

  printf("Input angka: ");
  scanf("%i",&n);
  printf("\n");

  for (i = 0; i <= n; i++) {
    for (j = 0; j <= i; j++) {
      printf("%d%", i+j);
    }
    printf("\n");

  }
  return 0;
  case 2:
    printf("ini adalah menu 1\n");
    int x,y,z;

  printf("Input angka: ");
  scanf("%i",&z);
  printf("\n");

  for (x = 1; x <= z; x++) {
    for (y = 1; y <= x; y++) {
      printf("%d%", x * 1);
    }
    printf("\n");
  }
  return 0;
}
 }
