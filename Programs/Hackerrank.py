def minimumDistances(a):

    if __name__ == '__main__':
        fptr = open(os.environ['OUTPUT_PATH'], 'w')

        n = int(raw_input())

        a = map(int, raw_input().rstrip().split())

        l_dist = []
        for i in range(0, len(a)):
            for j in range(i, len(a)):
                if (a[i] == a[j]):
                    l_dist.append(abs(j-i))

        if len(l_dist) == 0:
            result = -1
        else:
            temp = 0;
            for x in range(0, len(l_dist)):
                if (l_dist[temp] > l_dist[x]):
                    temp = x

            result = l_dist[temp]

        fptr.write(str(result) + '\n')

        fptr.close()
