// Crack the PIN 6th kyu kata
// https://www.codewars.com/kata/5efae11e2d12df00331f91a6

#include <string.h>
#include <openssl/md5.h>
#include <stdlib.h>
#include <stdio.h>

char *passwd_hash(const char *passwd)
{
  unsigned char result[MD5_DIGEST_LENGTH];
  char *mdString = (char *)malloc(sizeof(char) * (2 * MD5_DIGEST_LENGTH + 1));

  MD5((unsigned char*)passwd, strlen(passwd), result);

  for(int i = 0; i < MD5_DIGEST_LENGTH; i++)
    sprintf(&mdString[i * 2], "%02x", result[i]);

  return mdString;
}

void crack(char *hash, char *expected) {
  char temp[6];
  for (int i = 0; i < 100000; ++i)
  {
    sprintf(&temp, "%05d", i);
    char *md5 = passwd_hash(temp);
    if (!strcmp(md5, hash))
    {
      strcpy(expected, temp);
      return;
    }
    free(md5);
  }
}
