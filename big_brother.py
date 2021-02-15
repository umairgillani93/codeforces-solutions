# limx and bob
def limx_and_bob():
    a, b = (int(x) for x in input().split())

    if a > 10 or b > 10:
        print(f'wrong weights: {a, b}')

    else:
        years = 1
        for _ in range(1, 100):
            limax_weight = a * 3
            bob_weight = b * 2

            if limax_weight > bob_weight:
                print(years)
                break

            else:
                years += 1
                a = limax_weight
                b = bob_weight

if __name__ == '__main__':
    limx_and_bob()
