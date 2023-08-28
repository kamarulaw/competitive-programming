import sys

def solution():
  start = int(sys.argv[1])
  num = start
  count = 0
  while (num != 1):
    count += 1
    if (num % 2 == 0):
      num = num / 2
    else:
      num = 3*num + 1
  print(str(start) + " is wondrous.  It converges in " + str(count) + " steps.")

if __name__ == "__main__":
  solution()

