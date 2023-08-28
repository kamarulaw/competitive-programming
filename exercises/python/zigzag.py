import sys
import itertools

def solution():
  input = sys.argv[1]
  # check if input is an integer
  if (is_num_integer(input) == False):
    print(input + " is not an integer.")
    return
  input = int(input)

  # output total number of zigzag permutations
  num_zigzag = 0
  num_permutations = factorial(input)
  permutations = itertools.permutations(list(range(1, input + 1)))
  for perm in permutations:
    if is_zigzag(perm):
      num_zigzag += 1
  print(str(num_zigzag) + " " + str(num_permutations) + " " + str(num_zigzag / float(num_permutations)))

# checks whether an arrary has the zigzag property
def is_zigzag(arr):
  gl_arr = []
  for i in range(len(arr) - 1):
    if arr[i] > arr[i + 1]:
      gl_arr.append(1)
    else:
      gl_arr.append(-1)
  for i in range(len(gl_arr) - 1):
    if gl_arr[i] + gl_arr[i+1] != 0:
      return False
  return True

# checks whether input is an integer
def is_num_integer(num):
  try:
    float(num)
  except ValueError:
    return False
  return float(num).is_integer()

# calculate the number of permutations
def factorial(n):
  factorial = 1
  for i in range (1, int(n) + 1):
    factorial = factorial * i
  return factorial

if __name__ == "__main__":
  solution()
