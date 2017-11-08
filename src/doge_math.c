#include <math.h>
#include "../include/doge_math.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Vector2
 */

doge_vec2 *doge_vec2_new(float x, float y){
    doge_vec2 *vec2 = malloc(sizeof(doge_vec2));
    vec2->x = x;
    vec2->y = y;
    return vec2;
}

//Sums two vectors
doge_vec2 *doge_vec2_sum(doge_vec2 *vecA, doge_vec2 *vecB){
    doge_vec2 *vec = malloc(sizeof(doge_vec2));

    vec->x = vecA->x + vecB->x;
    vec->y = vecA->y + vecB->y;

    return vec;
}

//Subtracts two vectors
doge_vec2 *doge_vec2_sub(doge_vec2 *vecA, doge_vec2 *vecB){
    doge_vec2 *vec = malloc(sizeof(doge_vec2));

    vec->x = vecA->x - vecB->x;
    vec->y = vecA->y - vecB->y;

    return vec;
}

//Multiplies two vectors
doge_vec2 *doge_vec2_mult(doge_vec2 *vecA, doge_vec2 *vecB){
    doge_vec2 *vec = malloc(sizeof(doge_vec2));

    vec->x = vecA->x * vecB->x;
    vec->y = vecA->y * vecB->y;

    return vec;
}

//Divides two vectors
doge_vec2 *doge_vec2_div(doge_vec2 *vecA, doge_vec2 *vecB){
    doge_vec2 *vec = malloc(sizeof(doge_vec2));

    vec->x = vecA->x / vecB->x;
    vec->y = vecA->y / vecB->y;

    return vec;
}

doge_vec2 *doge_vec2_normalize(doge_vec2 *vec){
    float *length = doge_vec2_length(vec);
    if (*length == 0){
        fprintf(stderr, "Cannot divide by 0\n");
    }
    fprintf(stdout, "lenght: %f, x: %f, y: %f\n", *length, vec->x, vec->y);
    doge_vec2 *normalized = malloc(sizeof(doge_vec2));
    fprintf(stdout, "lenght: %f, x: %f, y: %f\n", *length, vec->x, vec->y);
    if (*length == 0){
        normalized->x = 0;
        normalized->y = 0;
    }
    else{
        normalized->x = vec->x / *length;
        normalized->y = vec->y / *length;
    }
    return normalized;
}

float *doge_vec2_length(doge_vec2 *vec){
	float x = vec->x * vec->x;
	float y = vec->y * vec->y;
    float sum = x + y;
    float squareroot = (float)sqrt(sum);
    float *squareroot_ptr = &squareroot;
	return squareroot_ptr;
}

float *doge_vec2_distance(doge_vec2 *vecA, doge_vec2 *vecB){
    doge_vec2 *vecDistance = malloc(sizeof(doge_vec2));

    vecDistance->x = vecA->x - vecB->x;
    vecDistance->y = vecA->y - vecB->y;

    float *length = doge_vec2_length(vecDistance);

    return length;
}

doge_vec2 *doge_vec2_direction(doge_vec2 *vecA, doge_vec2 *vecB){
    doge_vec2 *vecHeading = malloc(sizeof(doge_vec2));

    vecHeading->x = vecA->x - vecB->x;
    vecHeading->y = vecA->y - vecB->y;

    float *distance = doge_vec2_distance(vecA, vecB);

    doge_vec2 *vecDirection = malloc(sizeof(doge_vec2));

    vecDirection->x = vecHeading->x / *distance;
    vecDirection->y = vecHeading->y / *distance;

    return vecDirection;
}

/**
 * Vector3
 */

//Sums two vectors
doge_vec3 *doge_vec3_sum(doge_vec3 *vecA, doge_vec3 *vecB){
    doge_vec3 *vec = malloc(sizeof(doge_vec3));

    vec->x = vecA->x + vecB->x;
    vec->y = vecA->y + vecB->y;
    vec->z = vecA->z + vecB->z;

    return vec;
}

//Subtracts two vectors
doge_vec3 *doge_vec3_sub(doge_vec3 *vecA, doge_vec3 *vecB){
    doge_vec3 *vec = malloc(sizeof(doge_vec3));

    vec->x = vecA->x - vecB->x;
    vec->y = vecA->y - vecB->y;
    vec->z = vecA->z - vecB->z;

    return vec;
}

//Multiplies two vectors
doge_vec3 *doge_vec3_mult(doge_vec3 *vecA, doge_vec3 *vecB){
    doge_vec3 *vec = malloc(sizeof(doge_vec3));

    vec->x = vecA->x * vecB->x;
    vec->y = vecA->y * vecB->y;
    vec->z = vecA->z * vecB->z;

    return vec;
}

//Divides two vectors
doge_vec3 *doge_vec3_div(doge_vec3 *vecA, doge_vec3 *vecB){
    doge_vec3 *vec = malloc(sizeof(doge_vec3));

    vec->x = vecA->x / vecB->x;
    vec->y = vecA->y / vecB->y;
    vec->z = vecA->z / vecB->z;

    return vec;
}

doge_vec3 *doge_vec3_normalize(doge_vec3 *vec){
    float *length = doge_vec3_length(vec);
    if (length == 0){
        fprintf(stderr, "Cannot divide by 0\n");
    }
    doge_vec3 *normalized = malloc(sizeof(doge_vec3));
    normalized->x = vec->x / *length;
    normalized->y = vec->y / *length;
    normalized->z = vec->z / *length;
    return normalized;
}

float *doge_vec3_length(doge_vec3 *vec){
	float x = vec->x * vec->x;
	float y = vec->y * vec->y;
	float z = vec->z * vec->z;
    float sum = x + y + z;
    float squareroot = (float)sqrt(sum);
    float *squareroot_ptr = &squareroot;
	return squareroot_ptr;
}

float *doge_vec3_distance(doge_vec3 *vecA, doge_vec3 *vecB){
    doge_vec3 *vecDistance = malloc(sizeof(doge_vec3));

    vecDistance->x = vecA->x - vecB->x;
    vecDistance->y = vecA->y - vecB->y;
    vecDistance->z = vecA->z - vecB->z;

    float *length = doge_vec3_length(vecDistance);

    return length;
}

doge_vec3 *doge_vec3_direction(doge_vec3 *vecA, doge_vec3 *vecB){
    doge_vec3 *vecHeading = malloc(sizeof(doge_vec3));

    vecHeading->x = vecA->x - vecB->x;
    vecHeading->y = vecA->y - vecB->y;
    vecHeading->z = vecA->z - vecB->z;

    float *distance = doge_vec3_distance(vecA, vecB);

    doge_vec3 *vecDirection = malloc(sizeof(doge_vec3));

    vecDirection->x = vecHeading->x / *distance;
    vecDirection->y = vecHeading->y / *distance;
    vecDirection->z = vecHeading->z / *distance;

    return vecDirection;
}