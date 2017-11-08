#include <math.h>

typedef struct
{
	float x;
	float y;
}doge_vec2;

doge_vec2 *doge_vec2_new(float, float);
doge_vec2 *doge_vec2_sum(doge_vec2 *, doge_vec2 *);
doge_vec2 *doge_vec2_sub(doge_vec2 *, doge_vec2 *);
doge_vec2 *doge_vec2_mult(doge_vec2 *, doge_vec2 *);
doge_vec2 *doge_vec2_div(doge_vec2 *, doge_vec2 *);
float *doge_vec2_length(doge_vec2 *);
doge_vec2 *doge_vec2_normalize(doge_vec2 *);
float *doge_vec2_distance(doge_vec2 *, doge_vec2 *);
doge_vec2 *doge_vec2_direction(doge_vec2 *, doge_vec2 *);


typedef struct
{
	float x;
	float y;
	float z;
}doge_vec3;

float *doge_vec3_length(doge_vec3 *);
doge_vec3 *doge_vec3_normalize(doge_vec3 *);
float *doge_vec3_distance(doge_vec3 *, doge_vec3 *);
doge_vec3 *doge_vec3_direction(doge_vec3 *, doge_vec3 *);

union doge_vec
{
	doge_vec2 vec2;
	doge_vec3 vec3;
};