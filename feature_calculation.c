#include <stdio.h>
int main()
{
    int i, x, y, sizeX, sizeY, width, height, count, c;

    /* All five shape types */
    const int features = 2;
    const int feature[][2] = {{2,1}, {1,2}};
    const int frameSize = 19;

    count = 0;
    /* Each shape */
    for (i = 0; i < features; i++) {
        sizeX = feature[i][0];
        sizeY = feature[i][1];
        printf("%dx%d shapes:\n", sizeX, sizeY);

        /* each size (multiples of basic shapes) */
        for (width = sizeX; width <= frameSize; width+=sizeX) {
            for (height = sizeY; height <= frameSize; height+=sizeY) {
                printf("\tsize: %dx%d => ", width, height);
                c=count;

                /* each possible position given size */
                for (x = 0; x <= frameSize-width; x++) {
                    for (y = 0; y <= frameSize-height; y++) {
                        count++;
                    }
                }
                printf("count: %d\n", count-c);
            }
        }
    }
    printf("%d\n", count);

    return 0;
}