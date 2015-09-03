#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 0U;
uint16_t x8 = 6733U;
static int32_t t1 = -73;
uint32_t x12 = 172711U;
volatile uint64_t x16 = UINT64_MAX;
int16_t x23 = INT16_MIN;
uint8_t x26 = 12U;
uint32_t x31 = 0U;
static volatile int64_t x34 = INT64_MAX;
int16_t x42 = -166;
int32_t t11 = 19006;
int32_t t12 = 1;
uint16_t x56 = 3515U;
uint64_t x59 = 122879058326LLU;
int8_t x62 = 16;
int32_t t15 = -273145813;
int8_t x65 = INT8_MIN;
volatile int16_t x66 = -1;
int16_t x68 = INT16_MIN;
static int32_t t16 = -1;
int16_t x69 = INT16_MAX;
uint64_t x87 = 414LLU;
volatile int32_t t22 = 745582;
int32_t x94 = -1;
int8_t x96 = 18;
int32_t x98 = 102393510;
volatile int8_t x104 = INT8_MIN;
volatile int32_t t25 = 15960;
static int8_t x105 = 7;
int32_t x111 = 1371100;
int8_t x114 = INT8_MIN;
static int32_t x133 = INT32_MIN;
volatile int32_t t33 = 31931949;
int16_t x142 = 3256;
volatile uint8_t x146 = 34U;
volatile uint16_t x155 = 2112U;
static int8_t x157 = INT8_MIN;
uint16_t x161 = 9U;
int16_t x162 = 133;
int64_t x179 = INT64_MIN;
uint8_t x180 = 0U;
int8_t x183 = -1;
uint64_t x186 = 203526118227179395LLU;
static int32_t x195 = INT32_MAX;
volatile int32_t t50 = 348;
int8_t x206 = INT8_MAX;
int32_t t51 = -52966;
uint8_t x211 = 1U;
int32_t t53 = -32666208;
uint8_t x222 = 0U;
int16_t x231 = -1;
static uint8_t x251 = 0U;
static volatile int64_t x252 = INT64_MIN;
volatile int32_t t62 = 26;
int16_t x255 = INT16_MIN;
int8_t x258 = -1;
uint32_t x260 = 52U;
volatile int32_t t64 = -685;
uint8_t x262 = 8U;
int32_t x264 = -1;
volatile int16_t x267 = -1;
volatile uint64_t x269 = UINT64_MAX;
int16_t x279 = 4075;
int32_t t70 = -4;
uint32_t x286 = 23255027U;
static int32_t x287 = INT32_MIN;
int8_t x288 = INT8_MAX;
static int16_t x291 = 340;
int32_t t74 = -7829575;
volatile int32_t t76 = -170714327;
int16_t x314 = INT16_MIN;
volatile int16_t x316 = -1;
volatile int32_t t78 = 61;
volatile int16_t x321 = -1;
static int64_t x329 = INT64_MIN;
int8_t x330 = INT8_MIN;
uint8_t x335 = UINT8_MAX;
int8_t x338 = -1;
uint16_t x342 = UINT16_MAX;
int64_t x343 = 0LL;
static int16_t x346 = INT16_MIN;
static volatile int32_t t86 = 0;
int8_t x349 = -1;
static uint64_t x351 = 891494443374575LLU;
int8_t x353 = 42;
int8_t x358 = INT8_MAX;
static uint16_t x360 = 883U;
static int32_t t89 = -332866674;
int16_t x367 = -1;
volatile int32_t t91 = -1;
volatile int32_t x372 = 70;
int32_t t92 = -18986;
int16_t x381 = INT16_MIN;
uint8_t x382 = 79U;
int32_t t95 = 8187062;
int32_t t96 = -1;
volatile int32_t t97 = -9792387;
uint8_t x393 = 3U;


void f0(void) {
	uint64_t x1 = 67986669LLU;
	static uint32_t x2 = 74392U;
	int64_t x3 = INT64_MIN;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 7457531;

	t0 = (((x1|x2)^x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	static int32_t x7 = INT32_MIN;

	t1 = (((x5|x6)^x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int32_t x10 = -1;
	int64_t x11 = -1LL;
	int32_t t2 = 153697;

	t2 = (((x9|x10)^x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = 412;
	int64_t x15 = -75546987632LL;
	volatile int32_t t3 = -5125321;

	t3 = (((x13|x14)^x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x17 = 58171378299052LL;
	static uint32_t x18 = 36U;
	volatile int16_t x19 = INT16_MAX;
	int8_t x20 = INT8_MIN;
	int32_t t4 = -11746;

	t4 = (((x17|x18)^x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	volatile int8_t x22 = INT8_MIN;
	static volatile uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = -1;

	t5 = (((x21|x22)^x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint32_t x27 = UINT32_MAX;
	volatile uint8_t x28 = 21U;
	static volatile int32_t t6 = -6039;

	t6 = (((x25|x26)^x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int64_t x30 = INT64_MAX;
	volatile uint64_t x32 = UINT64_MAX;
	static int32_t t7 = -19603795;

	t7 = (((x29|x30)^x31)==x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 1U;
	int64_t x35 = INT64_MIN;
	int64_t x36 = INT64_MAX;
	int32_t t8 = 157396;

	t8 = (((x33|x34)^x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint64_t x38 = UINT64_MAX;
	volatile int32_t x39 = INT32_MIN;
	int64_t x40 = -1LL;
	int32_t t9 = 44;

	t9 = (((x37|x38)^x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 0U;
	int64_t x43 = -101210469304827095LL;
	int64_t x44 = -1LL;
	int32_t t10 = 795868447;

	t10 = (((x41|x42)^x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	uint16_t x46 = 254U;
	volatile int32_t x47 = INT32_MAX;
	volatile int32_t x48 = -1;

	t11 = (((x45|x46)^x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x49 = UINT64_MAX;
	uint64_t x50 = 305418398849784LLU;
	int16_t x51 = 1;
	int64_t x52 = INT64_MIN;

	t12 = (((x49|x50)^x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile uint32_t x54 = UINT32_MAX;
	int32_t x55 = INT32_MIN;
	int32_t t13 = 1;

	t13 = (((x53|x54)^x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 2401115831LL;
	int8_t x58 = INT8_MIN;
	volatile int16_t x60 = -1;
	int32_t t14 = 26;

	t14 = (((x57|x58)^x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile int32_t x63 = -1674882;
	int64_t x64 = -1LL;

	t15 = (((x61|x62)^x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x67 = INT32_MIN;

	t16 = (((x65|x66)^x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -2017;
	int8_t x71 = INT8_MIN;
	int8_t x72 = -1;
	volatile int32_t t17 = 12842081;

	t17 = (((x69|x70)^x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 12;
	static int8_t x74 = INT8_MIN;
	uint64_t x75 = 7LLU;
	static uint8_t x76 = 46U;
	int32_t t18 = 13;

	t18 = (((x73|x74)^x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	uint64_t x78 = UINT64_MAX;
	static int16_t x79 = INT16_MAX;
	static int32_t x80 = INT32_MIN;
	int32_t t19 = -4;

	t19 = (((x77|x78)^x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = UINT32_MAX;
	volatile int8_t x82 = 7;
	int64_t x83 = 932186967LL;
	static int16_t x84 = 1559;
	volatile int32_t t20 = 416;

	t20 = (((x81|x82)^x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	int32_t x86 = -1;
	volatile int16_t x88 = -1;
	static int32_t t21 = -190235439;

	t21 = (((x85|x86)^x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int64_t x90 = 28255573082LL;
	int8_t x91 = INT8_MAX;
	static int64_t x92 = INT64_MIN;

	t22 = (((x89|x90)^x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	volatile uint64_t x95 = UINT64_MAX;
	static volatile int32_t t23 = -18486718;

	t23 = (((x93|x94)^x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 1U;
	int8_t x99 = INT8_MIN;
	int16_t x100 = -11977;
	int32_t t24 = 42935;

	t24 = (((x97|x98)^x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint8_t x102 = 0U;
	volatile uint8_t x103 = 7U;

	t25 = (((x101|x102)^x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MAX;
	uint64_t x107 = 13LLU;
	int32_t x108 = INT32_MIN;
	int32_t t26 = -532927;

	t26 = (((x105|x106)^x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 9U;
	static int8_t x110 = INT8_MIN;
	volatile int64_t x112 = INT64_MIN;
	int32_t t27 = 76520317;

	t27 = (((x109|x110)^x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 6391904U;
	uint32_t x115 = UINT32_MAX;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = -621576;

	t28 = (((x113|x114)^x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int8_t x118 = -1;
	uint8_t x119 = 2U;
	static int8_t x120 = -42;
	volatile int32_t t29 = 43015;

	t29 = (((x117|x118)^x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -2;
	uint32_t x122 = UINT32_MAX;
	int32_t x123 = 137652923;
	int16_t x124 = INT16_MAX;
	int32_t t30 = 765171521;

	t30 = (((x121|x122)^x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	uint16_t x126 = 3U;
	static uint16_t x127 = UINT16_MAX;
	uint8_t x128 = 0U;
	int32_t t31 = 38691;

	t31 = (((x125|x126)^x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = UINT8_MAX;
	static int64_t x130 = 416LL;
	volatile uint8_t x131 = UINT8_MAX;
	int64_t x132 = -63483LL;
	int32_t t32 = -181;

	t32 = (((x129|x130)^x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MAX;
	static int8_t x135 = INT8_MIN;
	volatile uint64_t x136 = UINT64_MAX;

	t33 = (((x133|x134)^x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -6850684LL;
	volatile uint8_t x138 = UINT8_MAX;
	volatile int64_t x139 = INT64_MIN;
	int32_t x140 = -8657;
	volatile int32_t t34 = -103714572;

	t34 = (((x137|x138)^x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	int32_t x143 = -1;
	volatile uint8_t x144 = UINT8_MAX;
	int32_t t35 = 21406;

	t35 = (((x141|x142)^x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 3U;
	int64_t x147 = -1LL;
	volatile int64_t x148 = INT64_MIN;
	volatile int32_t t36 = 7317343;

	t36 = (((x145|x146)^x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 12U;
	uint8_t x150 = UINT8_MAX;
	uint8_t x151 = 105U;
	int16_t x152 = INT16_MAX;
	volatile int32_t t37 = 57577279;

	t37 = (((x149|x150)^x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x153 = -890569;
	int64_t x154 = -1LL;
	uint16_t x156 = 5U;
	volatile int32_t t38 = 22675;

	t38 = (((x153|x154)^x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = UINT8_MAX;
	uint64_t x159 = 7LLU;
	static uint16_t x160 = 340U;
	volatile int32_t t39 = 1;

	t39 = (((x157|x158)^x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x163 = INT16_MIN;
	static uint64_t x164 = UINT64_MAX;
	volatile int32_t t40 = -21092;

	t40 = (((x161|x162)^x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 59875U;
	int32_t x166 = INT32_MAX;
	int16_t x167 = 2074;
	static volatile int32_t x168 = -725399374;
	int32_t t41 = 18365834;

	t41 = (((x165|x166)^x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	uint16_t x170 = 74U;
	static int8_t x171 = INT8_MIN;
	uint16_t x172 = UINT16_MAX;
	static volatile int32_t t42 = 40918186;

	t42 = (((x169|x170)^x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 127U;
	uint8_t x174 = 0U;
	uint32_t x175 = 373465941U;
	int64_t x176 = INT64_MIN;
	int32_t t43 = 293;

	t43 = (((x173|x174)^x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	static int8_t x178 = 14;
	static volatile int32_t t44 = 100402;

	t44 = (((x177|x178)^x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	int8_t x182 = -1;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t45 = 601517791;

	t45 = (((x181|x182)^x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 980140LLU;
	int16_t x187 = INT16_MIN;
	int64_t x188 = -1LL;
	int32_t t46 = -674771792;

	t46 = (((x185|x186)^x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -92897LL;
	int16_t x190 = 0;
	int32_t x191 = INT32_MIN;
	int16_t x192 = -1;
	volatile int32_t t47 = -3865325;

	t47 = (((x189|x190)^x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x193 = INT16_MIN;
	uint64_t x194 = 129704196095023LLU;
	uint32_t x196 = 1130769U;
	volatile int32_t t48 = 2;

	t48 = (((x193|x194)^x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 4U;
	int8_t x198 = INT8_MIN;
	uint8_t x199 = UINT8_MAX;
	int64_t x200 = INT64_MAX;
	int32_t t49 = 67;

	t49 = (((x197|x198)^x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x201 = -1LL;
	volatile int64_t x202 = 3340488865416607LL;
	int64_t x203 = -1LL;
	volatile int8_t x204 = 0;

	t50 = (((x201|x202)^x203)==x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -140129500570373LL;
	uint8_t x207 = 12U;
	static uint32_t x208 = 6110U;

	t51 = (((x205|x206)^x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -33;
	uint16_t x210 = 2U;
	static int32_t x212 = 749691522;
	volatile int32_t t52 = -8;

	t52 = (((x209|x210)^x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 0U;
	int16_t x214 = 2876;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = 8824817776556045628LLU;

	t53 = (((x213|x214)^x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 805;
	static int64_t x218 = 2738260LL;
	static int32_t x219 = -1;
	int16_t x220 = -1;
	static volatile int32_t t54 = 0;

	t54 = (((x217|x218)^x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -58;
	volatile int64_t x223 = -667325518735019LL;
	int64_t x224 = INT64_MAX;
	volatile int32_t t55 = 1;

	t55 = (((x221|x222)^x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 15U;
	static int64_t x226 = 403LL;
	volatile int16_t x227 = 1;
	volatile int16_t x228 = INT16_MAX;
	static int32_t t56 = 640463;

	t56 = (((x225|x226)^x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 2738U;
	int8_t x230 = -6;
	int16_t x232 = INT16_MIN;
	int32_t t57 = 12863680;

	t57 = (((x229|x230)^x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	int16_t x234 = 183;
	volatile int64_t x235 = INT64_MIN;
	volatile uint8_t x236 = UINT8_MAX;
	static volatile int32_t t58 = 764;

	t58 = (((x233|x234)^x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = -1490;
	uint16_t x238 = 17U;
	uint64_t x239 = UINT64_MAX;
	int16_t x240 = 1;
	volatile int32_t t59 = 11171226;

	t59 = (((x237|x238)^x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 55;
	uint32_t x242 = UINT32_MAX;
	volatile int64_t x243 = 32940684463841674LL;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -162932;

	t60 = (((x241|x242)^x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -61;
	int16_t x246 = INT16_MIN;
	int64_t x247 = -1LL;
	static uint8_t x248 = 1U;
	volatile int32_t t61 = 23660936;

	t61 = (((x245|x246)^x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = 306230U;
	volatile int64_t x250 = INT64_MIN;

	t62 = (((x249|x250)^x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MIN;
	uint32_t x254 = 4U;
	uint32_t x256 = 1U;
	volatile int32_t t63 = -11811664;

	t63 = (((x253|x254)^x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	static int8_t x259 = INT8_MIN;

	t64 = (((x257|x258)^x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x263 = UINT8_MAX;
	volatile int32_t t65 = 113519281;

	t65 = (((x261|x262)^x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	static uint64_t x266 = 23892LLU;
	static int64_t x268 = INT64_MAX;
	volatile int32_t t66 = -28;

	t66 = (((x265|x266)^x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = 30U;
	volatile uint32_t x271 = 397U;
	int8_t x272 = INT8_MIN;
	int32_t t67 = 3263745;

	t67 = (((x269|x270)^x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MIN;
	int32_t x274 = 0;
	int8_t x275 = INT8_MIN;
	int64_t x276 = -22LL;
	volatile int32_t t68 = 0;

	t68 = (((x273|x274)^x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint8_t x278 = UINT8_MAX;
	volatile uint8_t x280 = 7U;
	volatile int32_t t69 = 259938;

	t69 = (((x277|x278)^x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 10;
	int8_t x282 = INT8_MIN;
	uint64_t x283 = 434LLU;
	static int32_t x284 = INT32_MAX;

	t70 = (((x281|x282)^x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	int32_t t71 = -8586;

	t71 = (((x285|x286)^x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = 382507024414399224LLU;
	int32_t x290 = -28;
	static volatile int32_t x292 = -1;
	int32_t t72 = -6;

	t72 = (((x289|x290)^x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 24U;
	int64_t x294 = INT64_MIN;
	int8_t x295 = 7;
	int8_t x296 = INT8_MAX;
	int32_t t73 = -1022;

	t73 = (((x293|x294)^x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = 408178274U;
	uint32_t x300 = 21987U;

	t74 = (((x297|x298)^x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 2391563U;
	int16_t x302 = -234;
	int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = -1;

	t75 = (((x301|x302)^x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x306 = UINT32_MAX;
	uint64_t x307 = 2825LLU;
	volatile int16_t x308 = 111;

	t76 = (((x305|x306)^x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 7871U;
	static int32_t x310 = INT32_MAX;
	uint8_t x311 = 1U;
	uint64_t x312 = 43045734890392620LLU;
	volatile int32_t t77 = 70587923;

	t77 = (((x309|x310)^x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MAX;
	volatile uint8_t x315 = 0U;

	t78 = (((x313|x314)^x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 2904;
	int64_t x318 = INT64_MIN;
	static volatile int8_t x319 = -1;
	static volatile int8_t x320 = 1;
	volatile int32_t t79 = -17;

	t79 = (((x317|x318)^x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x322 = 3U;
	int16_t x323 = 1;
	static int64_t x324 = -1LL;
	int32_t t80 = 23;

	t80 = (((x321|x322)^x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 18;
	int32_t x326 = -1;
	uint32_t x327 = 6258312U;
	volatile uint8_t x328 = 2U;
	int32_t t81 = 76020632;

	t81 = (((x325|x326)^x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x331 = INT8_MAX;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = -214777533;

	t82 = (((x329|x330)^x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	uint32_t x334 = 168U;
	static int64_t x336 = INT64_MAX;
	static volatile int32_t t83 = 1219;

	t83 = (((x333|x334)^x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = -1;
	uint8_t x339 = UINT8_MAX;
	int32_t x340 = -3653787;
	static volatile int32_t t84 = -447403;

	t84 = (((x337|x338)^x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	uint8_t x344 = 12U;
	volatile int32_t t85 = 131;

	t85 = (((x341|x342)^x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 1461U;
	static uint8_t x347 = 29U;
	int32_t x348 = 190;

	t86 = (((x345|x346)^x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x350 = 873771721LLU;
	int16_t x352 = -1;
	int32_t t87 = -2;

	t87 = (((x349|x350)^x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x354 = -1;
	int16_t x355 = INT16_MAX;
	static uint64_t x356 = 46874003240112567LLU;
	static volatile int32_t t88 = -434;

	t88 = (((x353|x354)^x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = 313359987569827LLU;
	int16_t x359 = INT16_MIN;

	t89 = (((x357|x358)^x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = 5LLU;
	int16_t x362 = INT16_MIN;
	static int32_t x363 = 22724570;
	int16_t x364 = -161;
	volatile int32_t t90 = -3;

	t90 = (((x361|x362)^x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1848;
	volatile int8_t x366 = INT8_MAX;
	volatile uint32_t x368 = UINT32_MAX;

	t91 = (((x365|x366)^x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = 6;
	static int8_t x370 = 0;
	static uint32_t x371 = 27397U;

	t92 = (((x369|x370)^x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 4368510LL;
	int32_t x374 = -23;
	int16_t x375 = INT16_MIN;
	uint64_t x376 = 1434LLU;
	static int32_t t93 = 0;

	t93 = (((x373|x374)^x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MAX;
	uint16_t x379 = 49U;
	int8_t x380 = INT8_MIN;
	int32_t t94 = -7987729;

	t94 = (((x377|x378)^x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x383 = 0;
	volatile int32_t x384 = 3;

	t95 = (((x381|x382)^x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 3;
	int16_t x386 = -1;
	uint8_t x387 = 108U;
	uint64_t x388 = 77048566LLU;

	t96 = (((x385|x386)^x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	static uint16_t x390 = UINT16_MAX;
	static int8_t x391 = 15;
	static int64_t x392 = INT64_MAX;

	t97 = (((x389|x390)^x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = -1;
	int32_t x395 = 23;
	int32_t x396 = INT32_MIN;
	int32_t t98 = -732;

	t98 = (((x393|x394)^x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 0U;
	int16_t x398 = INT16_MAX;
	uint32_t x399 = 153184U;
	uint32_t x400 = 127154U;
	volatile int32_t t99 = 133200;

	t99 = (((x397|x398)^x399)==x400);

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

