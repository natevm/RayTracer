#pragma once

#define PICKED_X -1
#define PICKED_Y -1
#define SHOW_NORMALS false
#define TOTAL_BOUNCES 4
#define MAX_SAMPLES 256
#define MIN_SAMPLES 16
#define MAX_THRESHOLD .01
#define MIN_THRESHOLD .000001
#define USE_RAY_DIFFERENTIALS true
#define TEXTURE_SAMPLE_COUNT 32
#define RECONSTRUCTION_FILTER_SIZE 2.0

#define SPHERE_BIAS .001
#define PLANE_BIAS .0001
#define TRIANGLE_BIAS .000008

#define DISABLE_SHADOWS false
#define ENABLE_SOFT_SHADOWS true
#define EARLY_SHADOW_TERMINATION true
#define MAX_SHADOW_SAMPLES 256
#define MIN_SHADOW_SAMPLES 64
#define TOTAL_THREADS 4

#define SCENE "prj10.xml"