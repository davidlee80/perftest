#define LOAD_WIDTH 2
#define LOAD_LINEAR
Texture2D<float2> sourceData : register(t0);
SamplerState texSampler : register(s0); 
#include "sampleTexBody.hlsli"