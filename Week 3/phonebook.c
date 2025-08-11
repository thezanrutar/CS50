#include <cs50.h>
#include <stdio.h>
#include <string.h>

struct Person
{
  string name;
  string number;
};

int main(void)
{
  // string names[] = {"David", "John", "Yulia"};
  // string numbers[] = {"+1-617-495-1000", "+1-949-468-2750", "+1-617-495-1000"};
  // string name = get_string("Name: ");

  // for (int i = 0; i < 3; i++)
  // {
    // if (strcmp(name, numbers[i]) == 0)
    // {
      // printf("Found %s\n", numbers[i]);
      // return 0;
    // }
  // }
  // printf("Not found\n");
  // return 1;

  Person people[3];

  people[0].name = "David";
  people[0].number = "+1-617-495-1000";

  people[1].name = "John";
  people[1].number = "+1-949-468-2750";

  people[2].name = "Yulia";
  people[2].number = "+1-617-495-1000";

  string name = get_string("Name: ");
  for (int i = 0; i < 3; i++)
  {
    if (strcmp(people[i].name, name) == 0)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}