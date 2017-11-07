#ifndef RENDER_H
#define RENDER_H

#include "scene.h"
#include "objects.h"
#include <iostream>

/* Common calculations among camera rays*/
struct CommonRayInfo {
	float h, w, l;
	cyPoint3f startPos;
	cyPoint3f up, left, forward;
	cyPoint3f nearPlaneTopLeft;
	cyPoint3f dXPixel, dYPixel;
};

CommonRayInfo getCommonCameraRayInfo();
Ray getCameraRay(float i, float j, float ddi, float ddj, float dpi, float dpj, const CommonRayInfo &cri);
void Trace(Rays rays, Node &n, HitInfo &info, int hitSide=HIT_FRONT, float t_max = BIGFLOAT);
void Trace_internal(Rays rays, Node &n, HitInfo &info, int hitSide = HIT_FRONT, float t_max = BIGFLOAT);

inline bool compareRay(Ray &a, Ray &b) {
	if (a.p.x - b.p.x > .00001f) return false;
	if (a.p.y - b.p.y > .00001f) return false;
	if (a.p.z - b.p.z > .00001f) return false;
	if (a.dir.x - b.dir.x > .00001f) return false;
	if (a.dir.y - b.dir.y > .00001f) return false;
	if (a.dir.z - b.dir.z >.00001f) return false;
	return true;
}

inline bool comparePoint(cyPoint3f &a, cyPoint3f &b) {
	if (a.x - b.x > .00001f) return false;
	if (a.y - b.y > .00001f) return false;
	if (a.z - b.z > .00001f) return false;
	return true;
}

inline cyPoint3f invertPoint(cyPoint3f in) {
	cyPoint3f out;
	out[0] = 1.0 / in[0];
	out[1] = 1.0 / in[1];
	out[2] = 1.0 / in[2];
	return out;
}

#endif
