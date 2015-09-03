#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 3349154037876169083LLU;
volatile int16_t x10 = INT16_MAX;
static volatile int16_t x14 = -39;
static uint8_t x16 = 5U;
int32_t t3 = 35922919;
uint64_t x22 = 10457137508182903LLU;
uint32_t x26 = UINT32_MAX;
int16_t x32 = INT16_MIN;
static int64_t x41 = INT64_MIN;
volatile int32_t t8 = -25870415;
int32_t x46 = -1;
volatile uint16_t x52 = 0U;
int32_t x54 = INT32_MIN;
volatile int32_t t12 = -480271173;
int32_t x61 = 13552;
static int16_t x71 = -1909;
uint32_t x72 = 934U;
int32_t x73 = -1;
volatile int32_t x83 = 400;
int32_t x89 = -231;
int16_t x90 = 0;
static int16_t x92 = INT16_MAX;
int64_t x110 = -1LL;
int32_t x111 = -1;
static int32_t t22 = 0;
static uint32_t x115 = UINT32_MAX;
uint64_t x116 = 14137626713130LLU;
int32_t t23 = -38224;
static int32_t x122 = -1;
uint16_t x132 = UINT16_MAX;
volatile int32_t t25 = -1276848;
int32_t x133 = -1;
volatile uint32_t x137 = UINT32_MAX;
int32_t t27 = 58081765;
volatile uint32_t x141 = 19U;
int16_t x154 = -1;
volatile int16_t x163 = -791;
int16_t x164 = -1555;
static int32_t t34 = 63381075;
volatile int8_t x170 = -1;
volatile int32_t t35 = 1;
int16_t x173 = INT16_MAX;
static int32_t x175 = -1;
uint8_t x181 = 6U;
int8_t x194 = INT8_MIN;
int32_t t39 = 122502;
int8_t x197 = -2;
uint8_t x203 = 2U;
static volatile uint8_t x204 = 1U;
int16_t x209 = -1;
int16_t x212 = 131;
uint32_t x218 = UINT32_MAX;
volatile int32_t t44 = -579;
int32_t x225 = -1;
int32_t x229 = -1;
int8_t x231 = 3;
int8_t x233 = INT8_MAX;
uint32_t x234 = 558291U;
int32_t t49 = 59843070;
static uint8_t x249 = 0U;
static uint8_t x250 = UINT8_MAX;
int32_t t51 = -15659;
uint16_t x254 = UINT16_MAX;
int16_t x256 = INT16_MAX;
volatile int64_t x257 = INT64_MIN;
volatile uint64_t x262 = 91842LLU;
uint32_t x276 = 3734U;
static int8_t x281 = INT8_MIN;
uint64_t x283 = 7100185425807940LLU;
int16_t x284 = INT16_MAX;
int64_t x295 = INT64_MAX;
volatile int32_t x299 = -5;
int32_t x301 = INT32_MAX;
static uint8_t x306 = 10U;
int32_t x311 = INT32_MAX;
uint16_t x315 = 184U;
int8_t x326 = INT8_MIN;
int32_t t68 = 48;
int16_t x331 = INT16_MAX;
uint64_t x334 = UINT64_MAX;
uint16_t x341 = 9148U;
uint32_t x342 = UINT32_MAX;
int16_t x353 = INT16_MIN;
int16_t x354 = INT16_MIN;
static int64_t x366 = -1LL;
static uint8_t x374 = 0U;
uint32_t x375 = 69717995U;
int32_t t79 = 2020199;
volatile uint8_t x381 = 1U;
static int32_t t80 = -8181396;
int16_t x385 = -1;
volatile int32_t t81 = 902;
static int16_t x396 = INT16_MIN;
int16_t x399 = INT16_MAX;
volatile int32_t x406 = -1;
static volatile uint8_t x413 = 80U;
static int8_t x420 = INT8_MIN;
uint32_t x428 = 31U;
volatile int32_t x429 = 11926;
volatile int32_t t90 = -29552;
int8_t x438 = 15;
uint64_t x442 = UINT64_MAX;
volatile int8_t x446 = INT8_MAX;
static uint16_t x447 = UINT16_MAX;
int64_t x449 = INT64_MIN;
volatile int8_t x456 = INT8_MIN;
volatile int32_t x459 = 15532;
uint16_t x468 = 5719U;
uint64_t x470 = 3615134LLU;


void f0(void) {
	static volatile int16_t x2 = -1;
	static int16_t x3 = -293;
	int64_t x4 = -1LL;
	volatile int32_t t0 = 17138848;

	t0 = ((x1<(x2-x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = -56;
	int16_t x7 = -1;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 78;

	t1 = ((x5<(x6-x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 937U;
	uint16_t x11 = 29U;
	int8_t x12 = -1;
	int32_t t2 = -2477782;

	t2 = ((x9<(x10-x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	int8_t x15 = INT8_MIN;

	t3 = ((x13<(x14-x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	static volatile uint16_t x23 = 73U;
	int32_t x24 = INT32_MIN;
	volatile int32_t t4 = -10448042;

	t4 = ((x21<(x22-x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = 1;
	int32_t x27 = -1;
	uint32_t x28 = UINT32_MAX;
	int32_t t5 = 205;

	t5 = ((x25<(x26-x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 1980625408U;
	int64_t x30 = INT64_MAX;
	int32_t x31 = 4079329;
	volatile int32_t t6 = 824;

	t6 = ((x29<(x30-x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x37 = INT16_MIN;
	static uint8_t x38 = 73U;
	static uint16_t x39 = 63U;
	int8_t x40 = -1;
	static int32_t t7 = -3298972;

	t7 = ((x37<(x38-x39))==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x42 = -1;
	uint64_t x43 = 20587713LLU;
	int64_t x44 = 4978730404805LL;

	t8 = ((x41<(x42-x43))==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x45 = -8585LL;
	int16_t x47 = INT16_MIN;
	int16_t x48 = 0;
	int32_t t9 = -1;

	t9 = ((x45<(x46-x47))==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = INT8_MIN;
	int64_t x50 = -11835473989LL;
	uint32_t x51 = 4925294U;
	volatile int32_t t10 = -1;

	t10 = ((x49<(x50-x51))==x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MAX;
	volatile int8_t x55 = INT8_MIN;
	volatile int64_t x56 = -1LL;
	int32_t t11 = -2537;

	t11 = ((x53<(x54-x55))==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	static uint8_t x58 = UINT8_MAX;
	static int16_t x59 = -1;
	uint8_t x60 = UINT8_MAX;

	t12 = ((x57<(x58-x59))==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = -1;
	int16_t x63 = INT16_MIN;
	int64_t x64 = -1LL;
	volatile int32_t t13 = 9281614;

	t13 = ((x61<(x62-x63))==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = INT64_MIN;
	volatile uint32_t x66 = 432343406U;
	int16_t x67 = INT16_MAX;
	int32_t x68 = -23425523;
	int32_t t14 = 458;

	t14 = ((x65<(x66-x67))==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	uint8_t x70 = 9U;
	volatile int32_t t15 = 128400372;

	t15 = ((x69<(x70-x71))==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = -1;
	static int8_t x75 = -1;
	int8_t x76 = INT8_MIN;
	volatile int32_t t16 = -40774743;

	t16 = ((x73<(x74-x75))==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 1U;
	uint8_t x82 = UINT8_MAX;
	static volatile int64_t x84 = -102437032371664LL;
	volatile int32_t t17 = -23;

	t17 = ((x81<(x82-x83))==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 108U;
	uint8_t x86 = UINT8_MAX;
	int16_t x87 = 1912;
	uint32_t x88 = 3487U;
	static int32_t t18 = 785669;

	t18 = ((x85<(x86-x87))==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x91 = -1;
	int32_t t19 = -32251;

	t19 = ((x89<(x90-x91))==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = INT64_MAX;
	int8_t x94 = INT8_MAX;
	static uint16_t x95 = 633U;
	static uint16_t x96 = 70U;
	int32_t t20 = 502706;

	t20 = ((x93<(x94-x95))==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = 101598LL;
	static volatile int8_t x102 = INT8_MAX;
	static uint32_t x103 = 277U;
	int32_t x104 = 46410;
	int32_t t21 = 26059;

	t21 = ((x101<(x102-x103))==x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = INT16_MIN;
	uint64_t x112 = 101034872107552LLU;

	t22 = ((x109<(x110-x111))==x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = 3;
	int16_t x114 = 3;

	t23 = ((x113<(x114-x115))==x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x121 = 240918U;
	volatile int16_t x123 = INT16_MIN;
	int32_t x124 = INT32_MIN;
	volatile int32_t t24 = -30;

	t24 = ((x121<(x122-x123))==x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MAX;
	int16_t x130 = INT16_MAX;
	int16_t x131 = 58;

	t25 = ((x129<(x130-x131))==x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x134 = -147365899524421LL;
	static int16_t x135 = INT16_MAX;
	int64_t x136 = -1LL;
	volatile int32_t t26 = -100108;

	t26 = ((x133<(x134-x135))==x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x138 = INT16_MAX;
	int8_t x139 = -40;
	uint32_t x140 = 2368U;

	t27 = ((x137<(x138-x139))==x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x142 = 55334775584LL;
	int16_t x143 = INT16_MAX;
	uint16_t x144 = 153U;
	static int32_t t28 = 51;

	t28 = ((x141<(x142-x143))==x144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x145 = INT32_MAX;
	static int8_t x146 = -1;
	volatile uint64_t x147 = 12408LLU;
	static int8_t x148 = -12;
	static int32_t t29 = 178;

	t29 = ((x145<(x146-x147))==x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x149 = -1;
	static int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MIN;
	volatile int64_t x152 = -1LL;
	volatile int32_t t30 = 230759393;

	t30 = ((x149<(x150-x151))==x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = -228829811LL;
	int32_t x155 = INT32_MIN;
	int64_t x156 = -22095770650114661LL;
	static volatile int32_t t31 = -1;

	t31 = ((x153<(x154-x155))==x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x157 = UINT8_MAX;
	int8_t x158 = INT8_MIN;
	static uint64_t x159 = 75LLU;
	int8_t x160 = -1;
	volatile int32_t t32 = -15;

	t32 = ((x157<(x158-x159))==x160);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x161 = 4611U;
	int64_t x162 = -1LL;
	volatile int32_t t33 = -27;

	t33 = ((x161<(x162-x163))==x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = -1LL;
	int16_t x166 = INT16_MAX;
	uint64_t x167 = 13331493521679790LLU;
	volatile int16_t x168 = INT16_MIN;

	t34 = ((x165<(x166-x167))==x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 33U;
	volatile int16_t x171 = INT16_MAX;
	uint8_t x172 = 118U;

	t35 = ((x169<(x170-x171))==x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x174 = 4U;
	uint64_t x176 = 26868LLU;
	int32_t t36 = 43;

	t36 = ((x173<(x174-x175))==x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x182 = -1;
	int32_t x183 = -1;
	static volatile uint32_t x184 = 28U;
	int32_t t37 = -7089;

	t37 = ((x181<(x182-x183))==x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x189 = INT8_MAX;
	uint64_t x190 = 18839245LLU;
	static int32_t x191 = 418;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t38 = 102660808;

	t38 = ((x189<(x190-x191))==x192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = INT8_MIN;
	int64_t x195 = -1510464973468136LL;
	volatile uint32_t x196 = 491U;

	t39 = ((x193<(x194-x195))==x196);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x198 = 42U;
	int64_t x199 = -1LL;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t40 = -24;

	t40 = ((x197<(x198-x199))==x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = -1;
	int32_t t41 = -27276205;

	t41 = ((x201<(x202-x203))==x204);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x210 = INT8_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	volatile int32_t t42 = 9845;

	t42 = ((x209<(x210-x211))==x212);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x217 = 2104716699LLU;
	uint32_t x219 = UINT32_MAX;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t43 = -15;

	t43 = ((x217<(x218-x219))==x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = 0LLU;
	uint64_t x222 = 7LLU;
	uint64_t x223 = 14177578369937315LLU;
	int64_t x224 = -1LL;

	t44 = ((x221<(x222-x223))==x224);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x226 = 15791637087467LLU;
	int16_t x227 = -828;
	int64_t x228 = -1LL;
	int32_t t45 = 1;

	t45 = ((x225<(x226-x227))==x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x230 = UINT8_MAX;
	uint8_t x232 = 62U;
	static int32_t t46 = -88;

	t46 = ((x229<(x230-x231))==x232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x235 = -426547671LL;
	int16_t x236 = INT16_MIN;
	static int32_t t47 = 115;

	t47 = ((x233<(x234-x235))==x236);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x237 = INT32_MAX;
	int16_t x238 = INT16_MAX;
	static int16_t x239 = INT16_MAX;
	uint8_t x240 = UINT8_MAX;
	int32_t t48 = -3142623;

	t48 = ((x237<(x238-x239))==x240);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x241 = 3U;
	uint16_t x242 = UINT16_MAX;
	volatile uint32_t x243 = UINT32_MAX;
	volatile int32_t x244 = -1;

	t49 = ((x241<(x242-x243))==x244);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x245 = 28U;
	static volatile int64_t x246 = INT64_MIN;
	static int8_t x247 = INT8_MIN;
	int64_t x248 = 6202844128140740LL;
	volatile int32_t t50 = -1546716;

	t50 = ((x245<(x246-x247))==x248);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x251 = 68;
	int8_t x252 = INT8_MAX;

	t51 = ((x249<(x250-x251))==x252);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x253 = 54U;
	volatile uint32_t x255 = UINT32_MAX;
	volatile int32_t t52 = -2280107;

	t52 = ((x253<(x254-x255))==x256);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x258 = -1;
	int8_t x259 = INT8_MAX;
	int8_t x260 = INT8_MAX;
	volatile int32_t t53 = -2337;

	t53 = ((x257<(x258-x259))==x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = INT64_MIN;
	int64_t x263 = INT64_MIN;
	uint64_t x264 = 324656246732909854LLU;
	int32_t t54 = -6260;

	t54 = ((x261<(x262-x263))==x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = INT8_MAX;
	int16_t x270 = -1;
	int32_t x271 = INT32_MAX;
	int16_t x272 = INT16_MAX;
	static volatile int32_t t55 = -1404761;

	t55 = ((x269<(x270-x271))==x272);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = -2044367687775LL;
	static int32_t x274 = -1;
	int16_t x275 = 3;
	int32_t t56 = -1065360;

	t56 = ((x273<(x274-x275))==x276);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x277 = 6659476349737LL;
	int8_t x278 = INT8_MIN;
	int32_t x279 = INT32_MIN;
	int32_t x280 = -1;
	int32_t t57 = -79121;

	t57 = ((x277<(x278-x279))==x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x282 = 152U;
	volatile int32_t t58 = 53465249;

	t58 = ((x281<(x282-x283))==x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x285 = -1;
	int64_t x286 = -119LL;
	static volatile uint32_t x287 = 258876U;
	uint8_t x288 = UINT8_MAX;
	int32_t t59 = 850906;

	t59 = ((x285<(x286-x287))==x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x289 = -1;
	uint16_t x290 = 340U;
	int16_t x291 = 1;
	int8_t x292 = 0;
	int32_t t60 = 698;

	t60 = ((x289<(x290-x291))==x292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x293 = 314LLU;
	int32_t x294 = -1;
	int8_t x296 = -1;
	int32_t t61 = -4063;

	t61 = ((x293<(x294-x295))==x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x297 = INT64_MIN;
	uint64_t x298 = 681731840LLU;
	int64_t x300 = INT64_MAX;
	int32_t t62 = 36828219;

	t62 = ((x297<(x298-x299))==x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x302 = 69U;
	static uint64_t x303 = 30260573955115LLU;
	uint64_t x304 = 553866509014LLU;
	static int32_t t63 = -47;

	t63 = ((x301<(x302-x303))==x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x305 = 1;
	int16_t x307 = INT16_MAX;
	volatile int32_t x308 = INT32_MIN;
	int32_t t64 = 984;

	t64 = ((x305<(x306-x307))==x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MAX;
	uint32_t x312 = 0U;
	int32_t t65 = -58;

	t65 = ((x309<(x310-x311))==x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = 0;
	static int16_t x314 = -1;
	static uint64_t x316 = 341387759508531LLU;
	int32_t t66 = 2557;

	t66 = ((x313<(x314-x315))==x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x321 = -1261958881481594276LL;
	static int8_t x322 = INT8_MAX;
	static volatile uint16_t x323 = 0U;
	volatile int8_t x324 = 13;
	static volatile int32_t t67 = -91220217;

	t67 = ((x321<(x322-x323))==x324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x325 = INT32_MAX;
	uint16_t x327 = 2U;
	volatile uint64_t x328 = 2199935787LLU;

	t68 = ((x325<(x326-x327))==x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x329 = 1879498971U;
	int16_t x330 = -1;
	static uint8_t x332 = 16U;
	int32_t t69 = -39353408;

	t69 = ((x329<(x330-x331))==x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x333 = UINT16_MAX;
	uint16_t x335 = 1093U;
	int8_t x336 = INT8_MAX;
	int32_t t70 = 56;

	t70 = ((x333<(x334-x335))==x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x337 = 376U;
	int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MIN;
	int64_t x340 = -10546552LL;
	int32_t t71 = -121667837;

	t71 = ((x337<(x338-x339))==x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x343 = 152461;
	int16_t x344 = -1;
	int32_t t72 = 41518;

	t72 = ((x341<(x342-x343))==x344);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x345 = 7U;
	int64_t x346 = INT64_MAX;
	uint32_t x347 = 1710U;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t73 = -16004;

	t73 = ((x345<(x346-x347))==x348);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x349 = INT8_MAX;
	uint64_t x350 = 7925LLU;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t74 = -1;

	t74 = ((x349<(x350-x351))==x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x355 = 8;
	static uint8_t x356 = 3U;
	static volatile int32_t t75 = 92050052;

	t75 = ((x353<(x354-x355))==x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x361 = 2U;
	int64_t x362 = 544217823304938103LL;
	int32_t x363 = 22238305;
	int16_t x364 = INT16_MIN;
	int32_t t76 = 185644;

	t76 = ((x361<(x362-x363))==x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x365 = INT16_MIN;
	int8_t x367 = -1;
	int8_t x368 = INT8_MIN;
	int32_t t77 = -11517919;

	t77 = ((x365<(x366-x367))==x368);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x373 = -1;
	static int64_t x376 = -1LL;
	volatile int32_t t78 = -9697;

	t78 = ((x373<(x374-x375))==x376);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x377 = UINT32_MAX;
	int64_t x378 = -968251625692LL;
	static int16_t x379 = INT16_MAX;
	int32_t x380 = INT32_MIN;

	t79 = ((x377<(x378-x379))==x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x382 = -1LL;
	static int64_t x383 = -62432938LL;
	volatile uint16_t x384 = UINT16_MAX;

	t80 = ((x381<(x382-x383))==x384);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x386 = UINT8_MAX;
	static volatile int64_t x387 = -255176340LL;
	volatile uint64_t x388 = UINT64_MAX;

	t81 = ((x385<(x386-x387))==x388);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x389 = INT64_MIN;
	int8_t x390 = -1;
	int32_t x391 = INT32_MIN;
	volatile uint64_t x392 = 137988645LLU;
	int32_t t82 = 3;

	t82 = ((x389<(x390-x391))==x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x393 = 245U;
	uint16_t x394 = UINT16_MAX;
	int64_t x395 = INT64_MAX;
	int32_t t83 = 6845692;

	t83 = ((x393<(x394-x395))==x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MAX;
	volatile int32_t x400 = INT32_MIN;
	static int32_t t84 = -513603366;

	t84 = ((x397<(x398-x399))==x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x405 = INT8_MIN;
	volatile int8_t x407 = 16;
	static int64_t x408 = INT64_MIN;
	volatile int32_t t85 = 102;

	t85 = ((x405<(x406-x407))==x408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x414 = INT16_MIN;
	uint8_t x415 = 0U;
	int16_t x416 = INT16_MIN;
	int32_t t86 = 65;

	t86 = ((x413<(x414-x415))==x416);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x417 = -1;
	int8_t x418 = INT8_MAX;
	volatile int8_t x419 = -5;
	volatile int32_t t87 = 3159;

	t87 = ((x417<(x418-x419))==x420);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x421 = INT16_MIN;
	volatile int8_t x422 = 63;
	uint64_t x423 = UINT64_MAX;
	static uint8_t x424 = UINT8_MAX;
	volatile int32_t t88 = 1385;

	t88 = ((x421<(x422-x423))==x424);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x425 = 0U;
	int64_t x426 = -3345825452208589LL;
	volatile int32_t x427 = 1793;
	volatile int32_t t89 = -8;

	t89 = ((x425<(x426-x427))==x428);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x430 = -1;
	int64_t x431 = 115260987625146564LL;
	uint8_t x432 = UINT8_MAX;

	t90 = ((x429<(x430-x431))==x432);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x433 = UINT16_MAX;
	static int8_t x434 = INT8_MAX;
	static int64_t x435 = INT64_MAX;
	uint32_t x436 = UINT32_MAX;
	int32_t t91 = 5286893;

	t91 = ((x433<(x434-x435))==x436);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x437 = 4U;
	volatile uint16_t x439 = 31U;
	uint64_t x440 = 1751504087650675LLU;
	static int32_t t92 = 14;

	t92 = ((x437<(x438-x439))==x440);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x441 = -27393;
	int32_t x443 = INT32_MIN;
	volatile int32_t x444 = -2067;
	volatile int32_t t93 = 709266;

	t93 = ((x441<(x442-x443))==x444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x445 = 6U;
	static volatile uint64_t x448 = 593978LLU;
	volatile int32_t t94 = 2;

	t94 = ((x445<(x446-x447))==x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x450 = -17;
	int64_t x451 = INT64_MIN;
	uint64_t x452 = 446184560305157LLU;
	volatile int32_t t95 = 3007;

	t95 = ((x449<(x450-x451))==x452);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = 14307866;
	static int8_t x454 = -1;
	static uint32_t x455 = UINT32_MAX;
	volatile int32_t t96 = 9312740;

	t96 = ((x453<(x454-x455))==x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x457 = INT8_MAX;
	int64_t x458 = -394116942562209LL;
	uint8_t x460 = UINT8_MAX;
	int32_t t97 = -167;

	t97 = ((x457<(x458-x459))==x460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x465 = 1;
	uint8_t x466 = 31U;
	int16_t x467 = 2837;
	int32_t t98 = -106593823;

	t98 = ((x465<(x466-x467))==x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x469 = UINT32_MAX;
	static volatile int8_t x471 = -3;
	int32_t x472 = INT32_MIN;
	volatile int32_t t99 = -13046;

	t99 = ((x469<(x470-x471))==x472);

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

