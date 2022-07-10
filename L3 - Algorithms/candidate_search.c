#include <cs50.h>
#include <stdio.h>

typedef struct
{
  string name;
  string party;
  float probability;
} candidate;

// Define SIZE as an integer that is global (accessible anywhere) and constant (cannot change).
const int SIZE = 3;

candidate get_candidate(string prompt);

int main(void)
{
  // Declare array of candidates with size equal to SIZE
  candidate candidates[SIZE];

  // Add candidates to array using get_candidate and array value assignment
  for (int i = 0; i < SIZE; i++)
  {
    candidate new_candidate = get_candidate("Enter a candidate: ");
    candidates[i] = new_candidate;
  }

  // Find candidate with probability > 0.5 by looping through array
  bool found = false;
  for (int i = 0; i < SIZE; i++)
  {
    if (candidates[i].probability > 0.5)
    {
      printf("Found %s with probability %f.\n", candidates[i].name, candidates[i].probability);
      found = true;
      break;
    }
  }

  // Check if candidate was found
  if (found == false)
  {
    printf("Not found.\n");
  }
}

candidate get_candidate(string prompt)
{
  printf("%s\n", prompt);
  candidate new_candidate;

  new_candidate.name = get_string("What's the candidate's name? ");
  new_candidate.party = get_string("What's the candidate's party? ");
  new_candidate.probability = get_float("What's the candidate probability? ");

  return new_candidate;
}