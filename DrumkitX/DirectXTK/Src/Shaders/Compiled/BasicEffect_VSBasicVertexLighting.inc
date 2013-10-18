#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
//   fxc /nologo BasicEffect.fx /Tvs_4_0_level_9_1 /Zpc /Qstrip_reflect
//    /Qstrip_debug /EVSBasicVertexLighting
//    /FhCompiled\BasicEffect_VSBasicVertexLighting.inc
//    /VnBasicEffect_VSBasicVertexLighting
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_Position              0   xyzw        0     NONE  float   xyzw
// NORMAL                   0   xyz         1     NONE  float   xyz 
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// COLOR                    0   xyzw        0     NONE  float   xyzw
// COLOR                    1   xyzw        1     NONE  float   xyzw
// SV_Position              0   xyzw        2      POS  float   xyzw
//
//
// Constant buffer to DX9 shader constant mappings:
//
// Target Reg Buffer  Start Reg # of Regs        Data Conversion
// ---------- ------- --------- --------- ----------------------
// c1         cb0             0        13  ( FLT, FLT, FLT, FLT)
// c14        cb0            14         4  ( FLT, FLT, FLT, FLT)
// c18        cb0            19         7  ( FLT, FLT, FLT, FLT)
//
//
// Runtime generated constant mappings:
//
// Target Reg                               Constant Description
// ---------- --------------------------------------------------
// c0                              Vertex Shader position offset
//
//
// Level9 shader bytecode:
//
    vs_2_0
    def c25, 0, 1, 0, 0
    dcl_texcoord v0
    dcl_texcoord1 v1
    dp3 r0.x, v1, c18
    dp3 r0.y, v1, c19
    dp3 r0.z, v1, c20
    nrm r1.xyz, r0
    dp3 r0.x, -c4, r1
    dp3 r0.y, -c5, r1
    dp3 r0.z, -c6, r1
    sge r2.xyz, r0, c25.x
    mul r0.xyz, r0, r2
    mul r3.xyz, r0.y, c8
    mad r0.xyw, r0.x, c7.xyzz, r3.xyzz
    mad r0.xyz, r0.z, c9, r0.xyww
    mov r3.xyz, c1
    mad oT0.xyz, r0, r3, c2
    dp4 r0.x, v0, c15
    dp4 r0.y, v0, c16
    dp4 r0.z, v0, c17
    add r0.xyz, -r0, c13
    nrm r3.xyz, r0
    add r0.xyz, r3, -c4
    nrm r4.xyz, r0
    dp3 r0.x, r4, r1
    add r4.xyz, r3, -c5
    add r3.xyz, r3, -c6
    nrm r5.xyz, r3
    dp3 r0.z, r5, r1
    nrm r3.xyz, r4
    dp3 r0.y, r3, r1
    max r0.xyz, r0, c25.x
    mul r0.xyz, r2, r0
    log r1.x, r0.x
    log r1.y, r0.y
    log r1.z, r0.z
    mul r0.xyz, r1, c3.w
    exp r0.x, r0.x
    exp r0.y, r0.y
    exp r0.z, r0.z
    mul r1.xyz, r0.y, c11
    mad r0.xyw, r0.x, c10.xyzz, r1.xyzz
    mad r0.xyz, r0.z, c12, r0.xyww
    mul oT1.xyz, r0, c3
    dp4 oPos.z, v0, c23
    dp4 r0.x, v0, c14
    max r0.x, r0.x, c25.x
    min oT1.w, r0.x, c25.y
    dp4 r0.x, v0, c21
    dp4 r0.y, v0, c22
    dp4 r0.z, v0, c24
    mad oPos.xy, r0.z, c0, r0
    mov oPos.w, r0.z
    mov oT0.w, c1.w

// approximately 61 instruction slots used
vs_4_0
dcl_constantbuffer cb0[26], immediateIndexed
dcl_input v0.xyzw
dcl_input v1.xyz
dcl_output o0.xyzw
dcl_output o1.xyzw
dcl_output_siv o2.xyzw, position
dcl_temps 5
dp3 r0.x, v1.xyzx, cb0[19].xyzx
dp3 r0.y, v1.xyzx, cb0[20].xyzx
dp3 r0.z, v1.xyzx, cb0[21].xyzx
dp3 r0.w, r0.xyzx, r0.xyzx
rsq r0.w, r0.w
mul r0.xyz, r0.wwww, r0.xyzx
dp3 r1.x, -cb0[3].xyzx, r0.xyzx
dp3 r1.y, -cb0[4].xyzx, r0.xyzx
dp3 r1.z, -cb0[5].xyzx, r0.xyzx
ge r2.xyz, r1.xyzx, l(0.000000, 0.000000, 0.000000, 0.000000)
and r2.xyz, r2.xyzx, l(0x3f800000, 0x3f800000, 0x3f800000, 0)
mul r1.xyz, r1.xyzx, r2.xyzx
mul r3.xyz, r1.yyyy, cb0[7].xyzx
mad r1.xyw, r1.xxxx, cb0[6].xyxz, r3.xyxz
mad r1.xyz, r1.zzzz, cb0[8].xyzx, r1.xywx
mad o0.xyz, r1.xyzx, cb0[0].xyzx, cb0[1].xyzx
mov o0.w, cb0[0].w
dp4 r1.x, v0.xyzw, cb0[15].xyzw
dp4 r1.y, v0.xyzw, cb0[16].xyzw
dp4 r1.z, v0.xyzw, cb0[17].xyzw
add r1.xyz, -r1.xyzx, cb0[12].xyzx
dp3 r0.w, r1.xyzx, r1.xyzx
rsq r0.w, r0.w
mad r3.xyz, r1.xyzx, r0.wwww, -cb0[3].xyzx
dp3 r1.w, r3.xyzx, r3.xyzx
rsq r1.w, r1.w
mul r3.xyz, r1.wwww, r3.xyzx
dp3 r3.x, r3.xyzx, r0.xyzx
mad r4.xyz, r1.xyzx, r0.wwww, -cb0[4].xyzx
mad r1.xyz, r1.xyzx, r0.wwww, -cb0[5].xyzx
dp3 r0.w, r4.xyzx, r4.xyzx
rsq r0.w, r0.w
mul r4.xyz, r0.wwww, r4.xyzx
dp3 r3.y, r4.xyzx, r0.xyzx
dp3 r0.w, r1.xyzx, r1.xyzx
rsq r0.w, r0.w
mul r1.xyz, r0.wwww, r1.xyzx
dp3 r3.z, r1.xyzx, r0.xyzx
max r0.xyz, r3.xyzx, l(0.000000, 0.000000, 0.000000, 0.000000)
mul r0.xyz, r2.xyzx, r0.xyzx
log r0.xyz, r0.xyzx
mul r0.xyz, r0.xyzx, cb0[2].wwww
exp r0.xyz, r0.xyzx
mul r1.xyz, r0.yyyy, cb0[10].xyzx
mad r0.xyw, r0.xxxx, cb0[9].xyxz, r1.xyxz
mad r0.xyz, r0.zzzz, cb0[11].xyzx, r0.xywx
mul o1.xyz, r0.xyzx, cb0[2].xyzx
dp4_sat o1.w, v0.xyzw, cb0[14].xyzw
dp4 o2.x, v0.xyzw, cb0[22].xyzw
dp4 o2.y, v0.xyzw, cb0[23].xyzw
dp4 o2.z, v0.xyzw, cb0[24].xyzw
dp4 o2.w, v0.xyzw, cb0[25].xyzw
ret 
// Approximately 0 instruction slots used
#endif

const BYTE BasicEffect_VSBasicVertexLighting[] =
{
     68,  88,  66,  67, 227,  79, 
     10,  21, 150, 232, 101, 180, 
    243, 182, 250, 185, 179,  99, 
     49, 164,   1,   0,   0,   0, 
     92,  11,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
    204,   3,   0,   0, 156,  10, 
      0,   0, 240,  10,   0,   0, 
     65, 111, 110,  57, 148,   3, 
      0,   0, 148,   3,   0,   0, 
      0,   2, 254, 255,  72,   3, 
      0,   0,  76,   0,   0,   0, 
      3,   0,  36,   0,   0,   0, 
     72,   0,   0,   0,  72,   0, 
      0,   0,  36,   0,   1,   0, 
     72,   0,   0,   0,   0,   0, 
     13,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  14,   0, 
      4,   0,  14,   0,   0,   0, 
      0,   0,   0,   0,  19,   0, 
      7,   0,  18,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   2, 254, 255,  81,   0, 
      0,   5,  25,   0,  15, 160, 
      0,   0,   0,   0,   0,   0, 
    128,  63,   0,   0,   0,   0, 
      0,   0,   0,   0,  31,   0, 
      0,   2,   5,   0,   0, 128, 
      0,   0,  15, 144,  31,   0, 
      0,   2,   5,   0,   1, 128, 
      1,   0,  15, 144,   8,   0, 
      0,   3,   0,   0,   1, 128, 
      1,   0, 228, 144,  18,   0, 
    228, 160,   8,   0,   0,   3, 
      0,   0,   2, 128,   1,   0, 
    228, 144,  19,   0, 228, 160, 
      8,   0,   0,   3,   0,   0, 
      4, 128,   1,   0, 228, 144, 
     20,   0, 228, 160,  36,   0, 
      0,   2,   1,   0,   7, 128, 
      0,   0, 228, 128,   8,   0, 
      0,   3,   0,   0,   1, 128, 
      4,   0, 228, 161,   1,   0, 
    228, 128,   8,   0,   0,   3, 
      0,   0,   2, 128,   5,   0, 
    228, 161,   1,   0, 228, 128, 
      8,   0,   0,   3,   0,   0, 
      4, 128,   6,   0, 228, 161, 
      1,   0, 228, 128,  13,   0, 
      0,   3,   2,   0,   7, 128, 
      0,   0, 228, 128,  25,   0, 
      0, 160,   5,   0,   0,   3, 
      0,   0,   7, 128,   0,   0, 
    228, 128,   2,   0, 228, 128, 
      5,   0,   0,   3,   3,   0, 
      7, 128,   0,   0,  85, 128, 
      8,   0, 228, 160,   4,   0, 
      0,   4,   0,   0,  11, 128, 
      0,   0,   0, 128,   7,   0, 
    164, 160,   3,   0, 164, 128, 
      4,   0,   0,   4,   0,   0, 
      7, 128,   0,   0, 170, 128, 
      9,   0, 228, 160,   0,   0, 
    244, 128,   1,   0,   0,   2, 
      3,   0,   7, 128,   1,   0, 
    228, 160,   4,   0,   0,   4, 
      0,   0,   7, 224,   0,   0, 
    228, 128,   3,   0, 228, 128, 
      2,   0, 228, 160,   9,   0, 
      0,   3,   0,   0,   1, 128, 
      0,   0, 228, 144,  15,   0, 
    228, 160,   9,   0,   0,   3, 
      0,   0,   2, 128,   0,   0, 
    228, 144,  16,   0, 228, 160, 
      9,   0,   0,   3,   0,   0, 
      4, 128,   0,   0, 228, 144, 
     17,   0, 228, 160,   2,   0, 
      0,   3,   0,   0,   7, 128, 
      0,   0, 228, 129,  13,   0, 
    228, 160,  36,   0,   0,   2, 
      3,   0,   7, 128,   0,   0, 
    228, 128,   2,   0,   0,   3, 
      0,   0,   7, 128,   3,   0, 
    228, 128,   4,   0, 228, 161, 
     36,   0,   0,   2,   4,   0, 
      7, 128,   0,   0, 228, 128, 
      8,   0,   0,   3,   0,   0, 
      1, 128,   4,   0, 228, 128, 
      1,   0, 228, 128,   2,   0, 
      0,   3,   4,   0,   7, 128, 
      3,   0, 228, 128,   5,   0, 
    228, 161,   2,   0,   0,   3, 
      3,   0,   7, 128,   3,   0, 
    228, 128,   6,   0, 228, 161, 
     36,   0,   0,   2,   5,   0, 
      7, 128,   3,   0, 228, 128, 
      8,   0,   0,   3,   0,   0, 
      4, 128,   5,   0, 228, 128, 
      1,   0, 228, 128,  36,   0, 
      0,   2,   3,   0,   7, 128, 
      4,   0, 228, 128,   8,   0, 
      0,   3,   0,   0,   2, 128, 
      3,   0, 228, 128,   1,   0, 
    228, 128,  11,   0,   0,   3, 
      0,   0,   7, 128,   0,   0, 
    228, 128,  25,   0,   0, 160, 
      5,   0,   0,   3,   0,   0, 
      7, 128,   2,   0, 228, 128, 
      0,   0, 228, 128,  15,   0, 
      0,   2,   1,   0,   1, 128, 
      0,   0,   0, 128,  15,   0, 
      0,   2,   1,   0,   2, 128, 
      0,   0,  85, 128,  15,   0, 
      0,   2,   1,   0,   4, 128, 
      0,   0, 170, 128,   5,   0, 
      0,   3,   0,   0,   7, 128, 
      1,   0, 228, 128,   3,   0, 
    255, 160,  14,   0,   0,   2, 
      0,   0,   1, 128,   0,   0, 
      0, 128,  14,   0,   0,   2, 
      0,   0,   2, 128,   0,   0, 
     85, 128,  14,   0,   0,   2, 
      0,   0,   4, 128,   0,   0, 
    170, 128,   5,   0,   0,   3, 
      1,   0,   7, 128,   0,   0, 
     85, 128,  11,   0, 228, 160, 
      4,   0,   0,   4,   0,   0, 
     11, 128,   0,   0,   0, 128, 
     10,   0, 164, 160,   1,   0, 
    164, 128,   4,   0,   0,   4, 
      0,   0,   7, 128,   0,   0, 
    170, 128,  12,   0, 228, 160, 
      0,   0, 244, 128,   5,   0, 
      0,   3,   1,   0,   7, 224, 
      0,   0, 228, 128,   3,   0, 
    228, 160,   9,   0,   0,   3, 
      0,   0,   4, 192,   0,   0, 
    228, 144,  23,   0, 228, 160, 
      9,   0,   0,   3,   0,   0, 
      1, 128,   0,   0, 228, 144, 
     14,   0, 228, 160,  11,   0, 
      0,   3,   0,   0,   1, 128, 
      0,   0,   0, 128,  25,   0, 
      0, 160,  10,   0,   0,   3, 
      1,   0,   8, 224,   0,   0, 
      0, 128,  25,   0,  85, 160, 
      9,   0,   0,   3,   0,   0, 
      1, 128,   0,   0, 228, 144, 
     21,   0, 228, 160,   9,   0, 
      0,   3,   0,   0,   2, 128, 
      0,   0, 228, 144,  22,   0, 
    228, 160,   9,   0,   0,   3, 
      0,   0,   4, 128,   0,   0, 
    228, 144,  24,   0, 228, 160, 
      4,   0,   0,   4,   0,   0, 
      3, 192,   0,   0, 170, 128, 
      0,   0, 228, 160,   0,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   0,   8, 192,   0,   0, 
    170, 128,   1,   0,   0,   2, 
      0,   0,   8, 224,   1,   0, 
    255, 160, 255, 255,   0,   0, 
     83,  72,  68,  82, 200,   6, 
      0,   0,  64,   0,   1,   0, 
    178,   1,   0,   0,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,  26,   0, 
      0,   0,  95,   0,   0,   3, 
    242,  16,  16,   0,   0,   0, 
      0,   0,  95,   0,   0,   3, 
    114,  16,  16,   0,   1,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   0,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   1,   0, 
      0,   0, 103,   0,   0,   4, 
    242,  32,  16,   0,   2,   0, 
      0,   0,   1,   0,   0,   0, 
    104,   0,   0,   2,   5,   0, 
      0,   0,  16,   0,   0,   8, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  70,  18,  16,   0, 
      1,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
     19,   0,   0,   0,  16,   0, 
      0,   8,  34,   0,  16,   0, 
      0,   0,   0,   0,  70,  18, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,  20,   0,   0,   0, 
     16,   0,   0,   8,  66,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  18,  16,   0,   1,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,  21,   0, 
      0,   0,  16,   0,   0,   7, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     68,   0,   0,   5, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    114,   0,  16,   0,   0,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     16,   0,   0,   9,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  32, 128,  65,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     16,   0,   0,   9,  34,   0, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  32, 128,  65,   0, 
      0,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     16,   0,   0,   9,  66,   0, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  32, 128,  65,   0, 
      0,   0,   0,   0,   0,   0, 
      5,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     29,   0,   0,  10, 114,   0, 
     16,   0,   2,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,  10, 114,   0,  16,   0, 
      2,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0, 128,  63,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
     56,   0,   0,   8, 114,   0, 
     16,   0,   3,   0,   0,   0, 
     86,   5,  16,   0,   1,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,   7,   0, 
      0,   0,  50,   0,   0,  10, 
    178,   0,  16,   0,   1,   0, 
      0,   0,   6,   0,  16,   0, 
      1,   0,   0,   0,  70, 136, 
     32,   0,   0,   0,   0,   0, 
      6,   0,   0,   0,  70,   8, 
     16,   0,   3,   0,   0,   0, 
     50,   0,   0,  10, 114,   0, 
     16,   0,   1,   0,   0,   0, 
    166,  10,  16,   0,   1,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  70,   3,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  11, 114,  32,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     54,   0,   0,   6, 130,  32, 
     16,   0,   0,   0,   0,   0, 
     58, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     17,   0,   0,   8,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  17,   0,   0,   8, 
     34,   0,  16,   0,   1,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     16,   0,   0,   0,  17,   0, 
      0,   8,  66,   0,  16,   0, 
      1,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  17,   0,   0,   0, 
      0,   0,   0,   9, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16, 128,  65,   0, 
      0,   0,   1,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,  12,   0,   0,   0, 
     16,   0,   0,   7, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  68,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  11, 114,   0, 
     16,   0,   3,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32, 128,  65,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,  16,   0,   0,   7, 
    130,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      3,   0,   0,   0,  70,   2, 
     16,   0,   3,   0,   0,   0, 
     68,   0,   0,   5, 130,   0, 
     16,   0,   1,   0,   0,   0, 
     58,   0,  16,   0,   1,   0, 
      0,   0,  56,   0,   0,   7, 
    114,   0,  16,   0,   3,   0, 
      0,   0, 246,  15,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   3,   0,   0,   0, 
     16,   0,   0,   7,  18,   0, 
     16,   0,   3,   0,   0,   0, 
     70,   2,  16,   0,   3,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  50,   0, 
      0,  11, 114,   0,  16,   0, 
      4,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
    246,  15,  16,   0,   0,   0, 
      0,   0,  70, 130,  32, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
     50,   0,   0,  11, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32, 128,  65,   0,   0,   0, 
      0,   0,   0,   0,   5,   0, 
      0,   0,  16,   0,   0,   7, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      4,   0,   0,   0,  70,   2, 
     16,   0,   4,   0,   0,   0, 
     68,   0,   0,   5, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    114,   0,  16,   0,   4,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   4,   0,   0,   0, 
     16,   0,   0,   7,  34,   0, 
     16,   0,   3,   0,   0,   0, 
     70,   2,  16,   0,   4,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  16,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  68,   0,   0,   5, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      1,   0,   0,   0, 246,  15, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  16,   0,   0,   7, 
     66,   0,  16,   0,   3,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     52,   0,   0,  10, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   3,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  47,   0,   0,   5, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   8, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
    246, 143,  32,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
     25,   0,   0,   5, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  86,   5,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
     10,   0,   0,   0,  50,   0, 
      0,  10, 178,   0,  16,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
     70, 136,  32,   0,   0,   0, 
      0,   0,   9,   0,   0,   0, 
     70,   8,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  10, 
    114,   0,  16,   0,   0,   0, 
      0,   0, 166,  10,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
     11,   0,   0,   0,  70,   3, 
     16,   0,   0,   0,   0,   0, 
     56,   0,   0,   8, 114,  32, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,  17,  32,   0,   8, 
    130,  32,  16,   0,   1,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     14,   0,   0,   0,  17,   0, 
      0,   8,  18,  32,  16,   0, 
      2,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  22,   0,   0,   0, 
     17,   0,   0,   8,  34,  32, 
     16,   0,   2,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,  23,   0, 
      0,   0,  17,   0,   0,   8, 
     66,  32,  16,   0,   2,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     24,   0,   0,   0,  17,   0, 
      0,   8, 130,  32,  16,   0, 
      2,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  25,   0,   0,   0, 
     62,   0,   0,   1,  73,  83, 
     71,  78,  76,   0,   0,   0, 
      2,   0,   0,   0,   8,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,  15, 
      0,   0,  68,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   7,   7, 
      0,   0,  83,  86,  95,  80, 
    111, 115, 105, 116, 105, 111, 
    110,   0,  78,  79,  82,  77, 
     65,  76,   0, 171,  79,  83, 
     71,  78, 100,   0,   0,   0, 
      3,   0,   0,   0,   8,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  80,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,   0, 
      0,   0,  86,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,  15,   0, 
      0,   0,  67,  79,  76,  79, 
     82,   0,  83,  86,  95,  80, 
    111, 115, 105, 116, 105, 111, 
    110,   0, 171, 171
};