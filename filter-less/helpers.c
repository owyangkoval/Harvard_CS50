#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
        int third = RGBTRIPLE image[i][j].rgbtRed + RGBTRIPLE image[i][j].rgbtGreen + RGBTRIPLE image[i][j].rgbtBlue/3.0;
            RGBTRIPLE image[i][j].rgbtRed = third;
            RGBTRIPLE image[i][j].rgbtGreen = third;
            RGBTRIPLE image[i][j].rgbtBlue = third;
            }
        }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}