def BruteForce(li):
    i = 0
    j = len(li) -1
    while i < j:
        li[i], li[j] = li[j], li[i]
        i += 1
        j -= 1
    print("Brute Force :", li)

def ArraySlicing(li):
    li = li[::-1]
    print("Array Slicing :", li)

if __name__ == "__main__":
    li = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    BruteForce(li)
    ArraySlicing(li)

