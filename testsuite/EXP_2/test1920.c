#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x6 = -1;
int16_t x11 = -160;
int32_t t2 = -12;
volatile uint64_t x16 = 1363146826021988LLU;
int8_t x17 = -1;
int64_t x25 = INT64_MIN;
int8_t x27 = -1;
int32_t t6 = -3;
int32_t t7 = 401200159;
volatile int32_t x35 = INT32_MIN;
int16_t x36 = -1;
int32_t t8 = 52450443;
volatile int32_t t9 = 187265;
static int16_t x55 = -6;
volatile int32_t t13 = 35144727;
static uint32_t x57 = 1315825799U;
int16_t x58 = INT16_MIN;
int64_t x64 = -7931257240308102LL;
uint64_t x65 = 63497LLU;
static int32_t t16 = 56;
uint32_t x83 = 928706U;
int32_t x93 = -251279923;
int64_t x94 = -1LL;
volatile int8_t x97 = INT8_MIN;
int64_t x98 = 68LL;
int32_t x131 = 27;
volatile int32_t t33 = 45;
int64_t x139 = -263629LL;
uint32_t x142 = 1357216U;
static volatile int64_t x149 = -1LL;
int32_t x158 = INT32_MIN;
int64_t x164 = INT64_MAX;
int64_t x166 = 204347625472992935LL;
static int32_t t42 = -114016848;
int8_t x177 = INT8_MAX;
uint32_t x179 = 244122U;
uint16_t x180 = UINT16_MAX;
int32_t x195 = INT32_MIN;
int64_t x208 = -1LL;
static int16_t x209 = -84;
volatile int64_t x210 = INT64_MIN;
int32_t t52 = -1;
volatile uint32_t x214 = 178U;
volatile uint64_t x215 = 411516776967891LLU;
volatile int16_t x216 = -1;
uint16_t x217 = 3U;
static int8_t x222 = 1;
static int32_t t58 = 128330077;
static volatile int8_t x238 = INT8_MIN;
volatile int64_t x241 = INT64_MIN;
volatile int8_t x244 = 0;
volatile int32_t t60 = -613731;
volatile uint8_t x245 = UINT8_MAX;
volatile int8_t x248 = -1;
int32_t t61 = -6;
int32_t t62 = 2380249;
uint64_t x257 = 187LLU;
static int16_t x260 = -16226;
uint32_t x264 = 1883672969U;
volatile int32_t t65 = 91030087;
uint64_t x265 = UINT64_MAX;
int32_t x271 = INT32_MIN;
static volatile int32_t t67 = -111333;
static int32_t t68 = 2;
int64_t x279 = INT64_MIN;
int16_t x281 = INT16_MIN;
volatile int32_t t70 = 506550;
int16_t x285 = INT16_MIN;
static volatile uint64_t x288 = 99926939LLU;
int16_t x290 = INT16_MIN;
uint8_t x292 = 0U;
volatile int32_t t74 = 74979401;
int16_t x304 = INT16_MAX;
static int32_t x305 = INT32_MAX;
static volatile int8_t x308 = -2;
static volatile uint8_t x310 = UINT8_MAX;
uint8_t x312 = UINT8_MAX;
volatile int16_t x317 = INT16_MIN;
int64_t x319 = INT64_MIN;
int32_t t79 = 4000;
int16_t x331 = INT16_MIN;
int16_t x334 = INT16_MIN;
int64_t x338 = INT64_MAX;
static int16_t x340 = 25;
int64_t x346 = -1LL;
volatile int32_t t88 = 12264761;
int8_t x370 = -2;
int32_t t93 = -439;
int32_t x377 = -43469;
uint8_t x378 = 0U;
int32_t x379 = 97224422;
uint64_t x386 = 4140883681LLU;
uint64_t x387 = UINT64_MAX;
uint64_t x394 = 221266451357144LLU;


void f0(void) {
	int8_t x1 = 62;
	int8_t x2 = INT8_MIN;
	static int8_t x3 = INT8_MIN;
	uint32_t x4 = 263U;
	int32_t t0 = -29403;

	t0 = ((x1%(x2|x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = 3;
	volatile int32_t t1 = 1;

	t1 = ((x5%(x6|x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 6350LLU;
	uint8_t x10 = 28U;
	static volatile uint16_t x12 = 78U;

	t2 = ((x9%(x10|x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = -1LL;
	int8_t x15 = -1;
	volatile int32_t t3 = 1009898336;

	t3 = ((x13%(x14|x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	int16_t x19 = -14;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = 856;

	t4 = ((x17%(x18|x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -841437335LL;
	int64_t x22 = INT64_MIN;
	uint16_t x23 = 793U;
	int8_t x24 = -1;
	volatile int32_t t5 = -79435652;

	t5 = ((x21%(x22|x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x26 = -1;
	static int16_t x28 = 0;

	t6 = ((x25%(x26|x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x30 = UINT64_MAX;
	uint8_t x31 = 5U;
	uint32_t x32 = 2U;

	t7 = ((x29%(x30|x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -2;
	uint16_t x34 = 2U;

	t8 = ((x33%(x34|x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 2U;
	int32_t x38 = -1;
	int32_t x39 = INT32_MIN;
	volatile int16_t x40 = 201;

	t9 = ((x37%(x38|x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	volatile int64_t x42 = INT64_MIN;
	uint32_t x43 = UINT32_MAX;
	uint64_t x44 = 1377301679018LLU;
	static volatile int32_t t10 = -3;

	t10 = ((x41%(x42|x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = -784837LL;
	int64_t x46 = -1LL;
	uint64_t x47 = UINT64_MAX;
	uint32_t x48 = 228123U;
	volatile int32_t t11 = -17001960;

	t11 = ((x45%(x46|x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	volatile uint32_t x50 = UINT32_MAX;
	int8_t x51 = INT8_MIN;
	int16_t x52 = 0;
	static volatile int32_t t12 = 1;

	t12 = ((x49%(x50|x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1;
	static int8_t x54 = INT8_MIN;
	int16_t x56 = -1;

	t13 = ((x53%(x54|x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x59 = 2229707151993498084LLU;
	int8_t x60 = INT8_MIN;
	static int32_t t14 = 39324;

	t14 = ((x57%(x58|x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MAX;
	volatile uint64_t x63 = 670450671604208LLU;
	int32_t t15 = -54;

	t15 = ((x61%(x62|x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 1543U;
	uint8_t x67 = 78U;
	static int8_t x68 = 47;

	t16 = ((x65%(x66|x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 6U;
	int64_t x70 = INT64_MAX;
	int32_t x71 = -22;
	int8_t x72 = INT8_MIN;
	int32_t t17 = -179075;

	t17 = ((x69%(x70|x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	static int32_t x74 = -47563140;
	int64_t x75 = -852LL;
	int64_t x76 = INT64_MAX;
	int32_t t18 = 244038608;

	t18 = ((x73%(x74|x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	volatile uint64_t x78 = 14165081569LLU;
	uint8_t x79 = 10U;
	int8_t x80 = 34;
	int32_t t19 = -66;

	t19 = ((x77%(x78|x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = -1;
	uint16_t x82 = UINT16_MAX;
	int8_t x84 = 3;
	volatile int32_t t20 = 314;

	t20 = ((x81%(x82|x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 11585LL;
	int8_t x86 = 63;
	static int32_t x87 = INT32_MIN;
	volatile int16_t x88 = -1;
	int32_t t21 = 3756988;

	t21 = ((x85%(x86|x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 2156LLU;
	int64_t x90 = -7262648322279LL;
	static volatile int64_t x91 = INT64_MIN;
	int64_t x92 = 426685LL;
	int32_t t22 = 29;

	t22 = ((x89%(x90|x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x95 = 2U;
	uint64_t x96 = 42082424718LLU;
	int32_t t23 = 44357223;

	t23 = ((x93%(x94|x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x99 = INT32_MAX;
	static int32_t x100 = INT32_MIN;
	volatile int32_t t24 = 410;

	t24 = ((x97%(x98|x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	uint16_t x102 = 83U;
	int32_t x103 = INT32_MIN;
	uint32_t x104 = 1U;
	volatile int32_t t25 = -3819;

	t25 = ((x101%(x102|x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int16_t x106 = INT16_MAX;
	static int64_t x107 = 20684728907725730LL;
	uint32_t x108 = UINT32_MAX;
	int32_t t26 = 4799;

	t26 = ((x105%(x106|x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 319U;
	int16_t x110 = INT16_MAX;
	int32_t x111 = INT32_MAX;
	int16_t x112 = -3;
	int32_t t27 = 7255;

	t27 = ((x109%(x110|x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int8_t x114 = 7;
	volatile int8_t x115 = INT8_MIN;
	static volatile int16_t x116 = 0;
	int32_t t28 = 89;

	t28 = ((x113%(x114|x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	volatile uint8_t x118 = UINT8_MAX;
	int16_t x119 = INT16_MIN;
	static int16_t x120 = INT16_MIN;
	int32_t t29 = 3649;

	t29 = ((x117%(x118|x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 75U;
	int8_t x122 = -15;
	int32_t x123 = -1;
	int64_t x124 = 31911070286613060LL;
	int32_t t30 = -1;

	t30 = ((x121%(x122|x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 1;
	int16_t x126 = -1;
	volatile uint16_t x127 = 21U;
	int16_t x128 = -1;
	int32_t t31 = -58200;

	t31 = ((x125%(x126|x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MIN;
	volatile uint64_t x130 = 30907953933579LLU;
	static uint8_t x132 = 0U;
	volatile int32_t t32 = 442813;

	t32 = ((x129%(x130|x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 0U;
	int64_t x134 = INT64_MIN;
	int64_t x135 = 924656LL;
	int16_t x136 = -186;

	t33 = ((x133%(x134|x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	static int8_t x138 = 1;
	int64_t x140 = -1LL;
	static int32_t t34 = 107724048;

	t34 = ((x137%(x138|x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 8LLU;
	uint32_t x143 = 2385345U;
	int64_t x144 = -1LL;
	int32_t t35 = -3;

	t35 = ((x141%(x142|x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	static uint32_t x146 = 861272695U;
	uint32_t x147 = UINT32_MAX;
	int8_t x148 = INT8_MIN;
	int32_t t36 = 2257;

	t36 = ((x145%(x146|x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = UINT64_MAX;
	volatile int16_t x151 = -1;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = 0;

	t37 = ((x149%(x150|x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MAX;
	uint64_t x154 = UINT64_MAX;
	volatile int32_t x155 = -1;
	int64_t x156 = INT64_MIN;
	volatile int32_t t38 = -9;

	t38 = ((x153%(x154|x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 956420LL;
	volatile int32_t x159 = -1;
	int16_t x160 = -1;
	int32_t t39 = -8047;

	t39 = ((x157%(x158|x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x161 = UINT16_MAX;
	int8_t x162 = 1;
	int64_t x163 = INT64_MIN;
	static int32_t t40 = 533215131;

	t40 = ((x161%(x162|x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	static volatile int64_t x167 = INT64_MIN;
	uint32_t x168 = 5U;
	int32_t t41 = 91103831;

	t41 = ((x165%(x166|x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 116567LL;
	static int32_t x170 = INT32_MAX;
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = INT64_MIN;

	t42 = ((x169%(x170|x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	volatile int8_t x174 = 3;
	int8_t x175 = -1;
	int16_t x176 = INT16_MIN;
	int32_t t43 = -499723;

	t43 = ((x173%(x174|x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x178 = -1LL;
	static int32_t t44 = 1;

	t44 = ((x177%(x178|x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 475;
	volatile int64_t x182 = -106928033740649LL;
	int8_t x183 = -58;
	int64_t x184 = -1LL;
	volatile int32_t t45 = 2;

	t45 = ((x181%(x182|x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MIN;
	static volatile uint64_t x187 = UINT64_MAX;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = -41;

	t46 = ((x185%(x186|x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -19116312LL;
	volatile uint8_t x190 = 1U;
	int16_t x191 = INT16_MIN;
	int32_t x192 = 209728;
	int32_t t47 = -2069;

	t47 = ((x189%(x190|x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	int16_t x194 = -1;
	int64_t x196 = -2347841378398620LL;
	int32_t t48 = 1;

	t48 = ((x193%(x194|x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 664415465;
	int16_t x198 = -1;
	int64_t x199 = -11210835205LL;
	uint16_t x200 = 67U;
	int32_t t49 = 396;

	t49 = ((x197%(x198|x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile int8_t x202 = 0;
	int16_t x203 = 803;
	int64_t x204 = INT64_MIN;
	static int32_t t50 = 1869448;

	t50 = ((x201%(x202|x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MAX;
	static uint64_t x207 = 2352006068105869LLU;
	volatile int32_t t51 = 2884550;

	t51 = ((x205%(x206|x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x211 = INT64_MIN;
	uint64_t x212 = 290713813360LLU;

	t52 = ((x209%(x210|x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = 5060945U;
	int32_t t53 = 166264;

	t53 = ((x213%(x214|x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MAX;
	int32_t x220 = -1;
	int32_t t54 = -128306;

	t54 = ((x217%(x218|x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 2U;
	volatile uint32_t x223 = 875U;
	int8_t x224 = INT8_MAX;
	volatile int32_t t55 = 428434796;

	t55 = ((x221%(x222|x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MAX;
	volatile uint32_t x226 = 4426U;
	int8_t x227 = -10;
	uint16_t x228 = 530U;
	volatile int32_t t56 = -12582;

	t56 = ((x225%(x226|x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = INT64_MIN;
	int64_t x230 = -1LL;
	int16_t x231 = INT16_MIN;
	static int32_t x232 = -1;
	int32_t t57 = 207;

	t57 = ((x229%(x230|x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x233 = -1;
	int16_t x234 = 0;
	static uint64_t x235 = UINT64_MAX;
	int16_t x236 = -114;

	t58 = ((x233%(x234|x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	volatile uint16_t x239 = UINT16_MAX;
	static uint8_t x240 = 1U;
	volatile int32_t t59 = -308913709;

	t59 = ((x237%(x238|x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x242 = UINT16_MAX;
	volatile uint64_t x243 = UINT64_MAX;

	t60 = ((x241%(x242|x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = 29686585U;
	volatile uint8_t x247 = 7U;

	t61 = ((x245%(x246|x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = 458311450635649LLU;
	uint32_t x250 = 121550861U;
	int16_t x251 = 15915;
	static int8_t x252 = -9;

	t62 = ((x249%(x250|x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	int16_t x254 = INT16_MAX;
	volatile int32_t x255 = INT32_MIN;
	static volatile int8_t x256 = 1;
	static int32_t t63 = -1;

	t63 = ((x253%(x254|x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MAX;
	uint32_t x259 = 1244568U;
	int32_t t64 = 30;

	t64 = ((x257%(x258|x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -319114299385486280LL;
	int8_t x262 = -1;
	int32_t x263 = INT32_MAX;

	t65 = ((x261%(x262|x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = INT16_MAX;
	int64_t x267 = -44356908810152LL;
	int8_t x268 = -39;
	static int32_t t66 = -20;

	t66 = ((x265%(x266|x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = INT32_MIN;
	int64_t x270 = -1LL;
	static int64_t x272 = INT64_MIN;

	t67 = ((x269%(x270|x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -15;
	uint32_t x274 = 3901320U;
	int8_t x275 = INT8_MIN;
	volatile int8_t x276 = INT8_MAX;

	t68 = ((x273%(x274|x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 44U;
	static volatile int64_t x278 = -1LL;
	static uint64_t x280 = 0LLU;
	volatile int32_t t69 = 871;

	t69 = ((x277%(x278|x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x282 = UINT16_MAX;
	volatile int8_t x283 = 0;
	int16_t x284 = INT16_MAX;

	t70 = ((x281%(x282|x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = INT16_MIN;
	int16_t x287 = -1654;
	int32_t t71 = -15;

	t71 = ((x285%(x286|x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int64_t x291 = INT64_MAX;
	volatile int32_t t72 = 1;

	t72 = ((x289%(x290|x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 983U;
	int8_t x294 = -1;
	uint16_t x295 = 3U;
	int64_t x296 = INT64_MIN;
	int32_t t73 = -458975034;

	t73 = ((x293%(x294|x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	int32_t x298 = INT32_MIN;
	int64_t x299 = 27LL;
	int64_t x300 = INT64_MAX;

	t74 = ((x297%(x298|x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 5;
	volatile uint16_t x302 = UINT16_MAX;
	int16_t x303 = 3;
	volatile int32_t t75 = -207268520;

	t75 = ((x301%(x302|x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = INT32_MIN;
	int16_t x307 = 3;
	int32_t t76 = -13865809;

	t76 = ((x305%(x306|x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 17U;
	volatile int64_t x311 = INT64_MIN;
	int32_t t77 = 5547;

	t77 = ((x309%(x310|x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 5U;
	int64_t x314 = -582478591LL;
	uint64_t x315 = UINT64_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t78 = 98;

	t78 = ((x313%(x314|x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x318 = 22;
	volatile int64_t x320 = INT64_MAX;

	t79 = ((x317%(x318|x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 1U;
	uint16_t x322 = UINT16_MAX;
	int16_t x323 = -1;
	volatile int16_t x324 = INT16_MAX;
	volatile int32_t t80 = -654589620;

	t80 = ((x321%(x322|x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	uint8_t x326 = 0U;
	static uint16_t x327 = 18U;
	int16_t x328 = -1;
	static volatile int32_t t81 = 6228070;

	t81 = ((x325%(x326|x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 1;
	int16_t x330 = INT16_MAX;
	int16_t x332 = -1;
	volatile int32_t t82 = 14107;

	t82 = ((x329%(x330|x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	volatile uint8_t x335 = 3U;
	static uint32_t x336 = 179U;
	volatile int32_t t83 = 1;

	t83 = ((x333%(x334|x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	uint8_t x339 = 30U;
	volatile int32_t t84 = -81829249;

	t84 = ((x337%(x338|x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 495904927196LLU;
	uint64_t x342 = 15LLU;
	volatile int16_t x343 = INT16_MIN;
	int8_t x344 = -1;
	int32_t t85 = -47;

	t85 = ((x341%(x342|x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int32_t x347 = -1;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = -19083;

	t86 = ((x345%(x346|x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 1U;
	int64_t x350 = -66LL;
	volatile uint32_t x351 = 0U;
	volatile int64_t x352 = -87539395374944971LL;
	int32_t t87 = -10;

	t87 = ((x349%(x350|x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	int64_t x354 = -1LL;
	uint8_t x355 = 27U;
	int8_t x356 = 52;

	t88 = ((x353%(x354|x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	uint64_t x358 = UINT64_MAX;
	static int16_t x359 = 1483;
	uint8_t x360 = 3U;
	volatile int32_t t89 = 871310258;

	t89 = ((x357%(x358|x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	int64_t x362 = 18874756841540670LL;
	int16_t x363 = INT16_MAX;
	int16_t x364 = -27;
	int32_t t90 = -612901809;

	t90 = ((x361%(x362|x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = -1;
	int16_t x366 = INT16_MAX;
	volatile uint32_t x367 = 946967U;
	static volatile int8_t x368 = INT8_MIN;
	volatile int32_t t91 = -7;

	t91 = ((x365%(x366|x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int8_t x371 = -7;
	uint16_t x372 = 530U;
	volatile int32_t t92 = -31;

	t92 = ((x369%(x370|x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 13U;
	static int32_t x374 = -1;
	int64_t x375 = INT64_MAX;
	int64_t x376 = INT64_MIN;

	t93 = ((x373%(x374|x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x380 = -10482LL;
	int32_t t94 = -86295;

	t94 = ((x377%(x378|x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	int64_t x382 = 10515LL;
	static uint8_t x383 = 1U;
	volatile uint16_t x384 = UINT16_MAX;
	static int32_t t95 = 39;

	t95 = ((x381%(x382|x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MIN;
	volatile uint32_t x388 = 4982330U;
	int32_t t96 = -141;

	t96 = ((x385%(x386|x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 582;
	int16_t x390 = INT16_MIN;
	volatile int32_t x391 = INT32_MAX;
	uint64_t x392 = 12LLU;
	int32_t t97 = 4731097;

	t97 = ((x389%(x390|x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x393 = INT32_MAX;
	int32_t x395 = -1;
	uint64_t x396 = 205178553715759638LLU;
	static volatile int32_t t98 = -9345;

	t98 = ((x393%(x394|x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 123;
	int64_t x398 = INT64_MIN;
	int64_t x399 = -1575014932LL;
	static int32_t x400 = INT32_MAX;
	int32_t t99 = 1433;

	t99 = ((x397%(x398|x399))<x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

