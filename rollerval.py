miners = {
    70 : 2,
    10 : 7,
    11 : 7,
    9 : 1,
}
minerBase = 0
# int(input("Enter current base power from miners: "))
racks = {
    6 : 35,
    8 : 10,
    8 : 6,
    6 : 4,
    6 : 3,
    8 : 2,
    6 : 2,
    8 : 0,
    8 : 0,
    6 : 0,
    6 : 0,
    6 : 0,
}
bonusPer = int(input("Enter bonus percentage: "))
for i in racks:
    for j in range(len(miners)):
        minerBase += miners[j]
        print(miners[j])
        bonusPer += miners[j]
        print(bonusPer)
        print(minerBase)
        print(minerBase + bonusPer)
        print("----------")
# print(minerBase)
# print(bonusPer)
# print(minerBase + bonusPer]
