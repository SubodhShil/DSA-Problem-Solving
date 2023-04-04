def isValid(boards: list, k: int, n: int, mid: int) -> bool:
    paintersCount = 1
    totalBoardLenght = 0

    for i in range(n):
        if (boards[i] + totalBoardLenght) <= mid:
            totalBoardLenght += boards[i]
        else:
            paintersCount += 1

            # ^ check whether painter count overflows
            if paintersCount > k or boards[i] > mid:
                return False
            totalBoardLenght = boards[i]

    return True


def findLargestMinDistance(boards: list, k: int):
    start, end = 0, sum(boards)
    ans = 0

    while start <= end:
        mid = start + (end - start) // 2
        if isValid(boards, k, len(boards), mid):
            ans = mid
            end = mid - 1
        else:
            start = mid + 1

    return ans
