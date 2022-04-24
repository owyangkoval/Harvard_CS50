#include "helpers.h"
#include <math.h>
#include <stdbool.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
        int red = image[i][j].rgbtRed;
        int green = image[i][j].rgbtGreen;
        int blue = image[i][j].rgbtBlue;
        int average = (((float)red + (float)blue + (float)green)/3.00);
            image[i][j].rgbtRed = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtBlue = average;
            }
        }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
        float sepiaRed = (.393 * image[i][j].rgbtRed) + (.769 * image[i][j].rgbtGreen) + (.189 * image[i][j].rgbtBlue);
        float sepiaGreen = (.349 * image[i][j].rgbtRed) + (.686 * image[i][j].rgbtGreen) + (.168 * image[i][j].rgbtBlue);
        float sepiaBlue = (.272 * image[i][j].rgbtRed) + (.534 * image[i][j].rgbtGreen) + (.131 * image[i][j].rgbtBlue);

        int SR = round(sepiaRed);
        int SG = round(sepiaGreen);
        int SB = round(sepiaBlue);

        if (SR > 255) {
            SR = 255;
        }
        if (SG > 255) {
            SG = 255;
        }
        if (SB > 255) {
            SB = 255;
        }
        image[i][j].rgbtRed = SR;
        image[i][j].rgbtGreen = SG;
        image[i][j].rgbtBlue = SB;
    }
}
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - (j + 1)];
            image[i][width - (j + 1)] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE new_image[height][width];

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            int rgbcount = 0;
            float sumRed = 0;
            float sumGreen = 0;
            float sumBlue = 0;
            for (int a = i-1; a <= i+1 ; a++) {
                for (int b = j-1; b <=j+1; b++) {
                    if (a <= (height-1) && a >= 0 && b <= (width-1) && b >= 0) {
                        sumRed += image[a][b].rgbtRed;
                        sumGreen += image[a][b].rgbtGreen;
                        sumBlue += image[a][b].rgbtBlue;
                        rgbcount++;
                    }
                }
            }
            new_image[i][j].rgbtRed = sumRed/rgbcount;
            new_image[i][j].rgbtGreen = sumGreen/rgbcount;
            new_image[i][j].rgbtBlue = sumBlue/rgbcount;
        }
    }
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            image[i][j] = new_image[i][j];
        }
    }
    return;
}

