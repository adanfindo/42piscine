/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   may_the_fourth_be_with_you.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:08:48 by afindo            #+#    #+#             */
/*   Updated: 2021/10/10 22:50:01 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int **alloc_matrix(int n)
{
    int    **mat;
    int i;

    mat = (int **)calloc(n,sizeof(int *));
    i = 0;
    while (i < n)
        mat[i++] = (int *)calloc(n,sizeof(int));
    return (mat);
}

char *array(char *s) {
    int i;
    int j;
    char *str = (char*)malloc(sizeof(char) * 16);

    i = 0;
    j = 0;
    while (i < 16) 
    {
        str[i++] = s[j];
        j += 2;
    }
    str[i] = '\0';
    return(str);
}

void input_line(int **mat, int n, char *s)
{
    int row;
    int col;
    int i;
    int j;

    row = 0;
    j = 0;
    while (row < n)
    {
        col = 0;
        i = 0;
        while (col < n)
        {
            if ((row == 0 && col == 0) || (row == n -1 && col == 0) ||
                    (col == n - 1 && row == 0) || (row == n -1 && col == n - 1))
            {
                mat[row][col] = 0;
                col++;
                continue ;
            }
            int x = i % 4;
            char y = s[i%4];
            if (row == 0)
                mat[row][col] = s[i++ % 4] - 48;
            else if (row == n - 1)
                mat[row][col] = s[i++ % 4 + 4] - 48;
            else if (col == 0)
                mat[row][col] = s[j % 4 + 8] - 48;
            else if (col == n - 1)
                mat[row][col] = s[j++ % 4 + 12] - 48;
            col++;
        }
    row++;
    }
}

void put_to_four_to_one_UpLeft(int **mat, int n, int index)
{	
	int up;
	int left;
	int i;

	if (index == n - 2)
		return;
	i = 0;
	up = mat[index / 4][(index % 4) + 1];
	left = mat[(index % 4) +1][(index / 4)];
	if (up == 4)
	{
		while (i < n - 2)
		   	mat[(i % 4) + 1][(index % 4) + 1] = n - (n - 1) + i++;
	}
	if (left ==  4)
	{
		while (i < n - 2)
			mat[(index % 4) + 1][i % 4] = n - (n - 1) + i++;
	}
	put_to_four_to_one_UpLeft(mat, n, index + 1);
}

void put_to_four_to_one_DownRight(int **mat, int n, int index)
{
	int down;
	int right;
	int i;

	if (index == n - 2)
		return;
	i = n - 1;
	down = mat[(index / 4) + 5 ][(index % 4) + 1];   //cinque fisso  					// uno due tre quattro cinque
	right  = mat[(index % 4) + 1][(index / 4) + 5];  //uno due tre quattro cinque 	// cinque fisso
	if (down == 4)
	{
		while (i > 1)
		   	mat[i % 1][(index % 4) + 1] = n - 1 - i;
	}
	if (right == 4)
	{
		while (i > 1)
			mat[(index % 4) + 1][i % 1] = n - 1 - i;
	}
	put_to_four_to_one_DownRight(mat, n, index + 1);
}

void fill_four_horizon(int **mat, int n, int index)
{
	int right;
	int left;

	if(index == n-2)
		return ;
	left = mat[(index % 4) +1][(index / 4)]; 
	right  = mat[(index % 4) + 1][(index / 4) + 5];
	if (left == 3)
	{
		if (right == 2)
			mat[1][3] = 4;
		else if (right == 1)
			mat[1][4] = 4;
	}
	else if (left == 2)
	{
		if (right == 3 || right == 2)
			mat[1][2] = 4;
		else if (right == 1)
			mat[1][4] = 4;
	}
	if (left == 4)
		put_to_four_to_one_UpLeft(mat, n, 0);
	fill_four_horizon(mat, n, index + 1);
}

void fill_four_vertical(int **mat, int n, int index)
{
	int	up;
	int	down;

	if (index == n - 2)
		return ;
	up = mat[index / 4][(index % 4) + 1];
	down = mat[(index / 4) + 5 ][(index % 4) + 1];
	if (up == 3 )
	{
		if (down == 2)
			mat[3][1] = 4;
		if (down == 1)
			mat[4][1] = 4; 
	}
	else if (up == 2)
	{
		if (down == 3 || down == 2)
			mat[2][1] = 4;
		else if (down == 1)
			mat[4][1] = 4;
	}
	else if (up == 4)
		put_to_four_to_one_DownRight(mat,n,0);
	fill_four_vertical(mat, n, index + 1);
}

int main (void)
{
    int n = 6;

    char *str = "3 4 3 2 1 2 3 2 1 2 3 2 1 2 3 4";
    int **mat = alloc_matrix(n);
    input_line(mat,n,array(str));
    printf("%s\n\n", str);
	fill_four_vertical(mat, n, 0);
	fill_four_horizon(mat, n, 0);
	for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
         }
        printf("\n");
    }
    return (0);
}
