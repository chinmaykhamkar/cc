def minNum(threshold, points):
    if len(points) <=0:
        return 0
    if points[len(points)-1] -points[0] < threshold:
        return len(points)
    else:
        return minNumRecursive(threshold, points) +1

def minNumRecursive(threshold, points):
    if len(points) ==1:
        return 0
    if len(points) ==2:
        return 1
    if len(points) >=3:
        return minNumRecursive(threshold-points[0], points[2: len(points)]) +1
li = [162,206,224,264,288,334,364,367,389,405,454,478,479,482,509,517,545,578,626,657,692,705,720,734,747]
print(minNum(402,li))