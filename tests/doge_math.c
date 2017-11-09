#include "../include/doge_math.h"
#include "test.h"

int test_doge_vec2_new(){
    doge_vec2 *vec = doge_vec2_new(0, 1);
    if (!vec)
        return -1;

    if (vec->x != 0)
        return -1;
                
    if (vec->y != 1)
        return -1;

    return 0;
}

int test_doge_vec2_sum(){
    doge_vec2 *vecA = doge_vec2_new(8, 3);
    if (!vecA)
        return -1;
    doge_vec2 *vecB = doge_vec2_new(3, 4);
    if (!vecB)
        return -1;

    doge_vec2 *vecSum = doge_vec2_sum(vecA, vecB);
    if (!vecSum)
        return -1;

    if (vecSum->x != 11)
        return -1;

    if (vecSum->y != 7)
        return -1;
    
    return 0;
}

int test_doge_vec2_sub(){
    doge_vec2 *vecA = doge_vec2_new(8, 3);
    if (!vecA)
        return -1;
    doge_vec2 *vecB = doge_vec2_new(3, 4);
    if (!vecB)
        return -1;

    doge_vec2 *vecSub = doge_vec2_sub(vecA, vecB);
    if (!vecSub)
        return -1;

    if (vecSub->x != 5)
        return -1;

    if (vecSub->y != -1)
        return -1;
    
    return 0;
}

int test_doge_vec2_mult(){
    doge_vec2 *vecA = doge_vec2_new(8, 3);
    if (!vecA)
        return -1;
    doge_vec2 *vecB = doge_vec2_new(3, 4);
    if (!vecB)
        return -1;

    doge_vec2 *vec = doge_vec2_mult(vecA, vecB);
    if (!vec)
        return -1;

    if (vec->x != 24)
        return -1;

    if (vec->y != 12)
        return -1;
    
    return 0;
}

int test_doge_vec2_div(){
    doge_vec2 *vecA = doge_vec2_new(8, 4);
    if (!vecA)
        return -1;
    doge_vec2 *vecB = doge_vec2_new(2, 4);
    if (!vecB)
        return -1;

    doge_vec2 *vec = doge_vec2_div(vecA, vecB);
    if (!vec)
        return -1;

    if (vec->x != 4)
        return -1;

    if (vec->y != 1)
        return -1;
    
    return 0;
}

int test_doge_vec2_length(){
    doge_vec2 *vecA = doge_vec2_new(8, 4);
    if (!vecA)
        return -1;

    float vec = doge_vec2_length(vecA);
    if (vec < 8.94 || vec > 8.95)
        return -1;
    
    return 0;
}

int test_doge_vec2_normalize(){
    doge_vec2 *vecA = doge_vec2_new(8, 4);
    if (!vecA)
        return -1;

    doge_vec2 *vec = doge_vec2_normalize(vecA);
	
    if (vec->x < 0.894 || vec->x > 0.895)
        return -1;
    
    if (vec->y < 0.447 || vec->y > 0.448)
        return -1;
    
    return 0;
}

void test_doge_vec2_run(){
    test(test_doge_vec2_new);
    test(test_doge_vec2_sum);
    test(test_doge_vec2_sub);
    test(test_doge_vec2_mult);
    test(test_doge_vec2_div);
    test(test_doge_vec2_length);
    test(test_doge_vec2_normalize);
}