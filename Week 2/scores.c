#include <sc50.h>
#include <stdio.h>

int main()
{
  // int score1 = 72;
  // int score2 = 73;
  // int score3 = 33;
  const int N = 3;
  int scores[N];
  for (int i = 0; i < N; i++)
  {
    scores[i] = get_int("Score: ");
  }

  // Print average
  // printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
  printf("Average: %f\n", (scores[1] + (scores[1] + scores[2])) / (float) N);
}