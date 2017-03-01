#include <stdio.h>

int main(void) {
char flex_id[12];
char smtc_id[12];
    while(1)
    {

      printf("Enter string ");
      scanf("%s", flex_id);
      smtc_id[0] = flex_id[10];
      smtc_id[1] = flex_id[11];

      smtc_id[2] = flex_id[8];
      smtc_id[3] = flex_id[9];

      smtc_id[4] = flex_id[6];
      smtc_id[5] = flex_id[7];

      smtc_id[6] = flex_id[4];
      smtc_id[7] = flex_id[5];

      smtc_id[8] = flex_id[2];
      smtc_id[9] = flex_id[3];

      smtc_id[10] = flex_id[0];
      smtc_id[11] = flex_id[1];
      printf ("SMTC ID is %.12s \n", smtc_id);

    }

        return 0;
}



