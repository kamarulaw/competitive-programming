import sys, csv

def solution():
  input = sys.argv[1]
  matrix_rows = []
  with open(input) as tsvfile:
    tsvreader = csv.reader(tsvfile, delimiter = "\t")
    for line in tsvreader:
      matrix_rows.append(line)
  ut = upper_triangular_vector(matrix_rows)
  lt = lower_triangular_vector(matrix_rows)
  dp = dot_product(ut, lt)
  print("v1 = " + str(ut).strip('[]'))
  print("v2 = " + str(lt).strip('[]'))
  print("v1.v2 = " + str(dp))


def dot_product(v1, v2):
  dp = 0
  assert(len(v1) == len(v2))
  for i in range(len(v1)):
    dp += v1[i] * v2[i]
  return dp

def upper_triangular_vector(matrix_rows):
  n = len(matrix_rows[0])
  temp = []
  vector = []
  for i in range(1, n + 1):
    row = matrix_rows[i - 1]
    for j in range(n - 1,i - 2, -1):
      temp.append(int(row[j]))
    vector.extend(temp[::-1])
    temp = []
  return vector

def lower_triangular_vector(matrix_rows):
  n = len(matrix_rows[0])
  temp = []
  vector = []
  for i in range(1, n + 1):
    row = matrix_rows[i - 1]
    for j in range(i):
      temp.append(int(row[j]))
    vector.extend(temp)
    temp = []
  return vector

if __name__ == "__main__":
  solution()
