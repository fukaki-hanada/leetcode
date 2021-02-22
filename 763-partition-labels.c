/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* partitionLabels(char * S, int* returnSize)
{
  int start[26], end[26];
  int index = 0;
  int len = strlen(S);
  

  
  /* Initialize start/end */ 
  for (int i = 0; i < 26; ++i)
  {
    start[i] = len;
    end[i] = 0;
  }
  
  /* Partition the input to start/end point */
  for (int i = 0; i < len; ++i)
  {
    index = S[i]-'a';
    if (start[index] > i)
    {
      start[index] = i;
    }
    if (end[index] < i)
    {
      end[index] = i;
    }
  }
  
  int * result = malloc(sizeof(int) * len);
  int result_size = 0;
  
  int i = 0;
  bool updated;
  while (i < len)
  {
    updated = false;
    for (int j = 0; j < 26; ++j)
    {
      if (i >= start[j] && i < end[j])
      {
        i = end[j];
        updated = true;
      }
    }
    if (!updated)
    {
      result[result_size] = i;
      printf("%d ", result[result_size]);
      ++result_size;
      ++i;
    }
  }
  for (int i = result_size-1; i >= 1; --i)
  {
    result[i] -= result[i-1];
  }
  result[0] += 1;
  *returnSize = result_size;
  return result;
}
