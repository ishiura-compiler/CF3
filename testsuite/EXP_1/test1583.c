#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MIN;
volatile int32_t x2 = -2;
uint8_t x12 = 1U;
static volatile int64_t x13 = -1LL;
int64_t x16 = -3572LL;
int32_t t4 = -3616;
static uint8_t x30 = 6U;
int16_t x31 = -1;
static volatile int32_t t8 = -19;
volatile int32_t t9 = -40;
int32_t x41 = 682147;
int64_t x46 = INT64_MIN;
int32_t x47 = INT32_MIN;
int16_t x54 = -1;
int64_t x66 = INT64_MIN;
volatile int32_t x73 = INT32_MAX;
int16_t x74 = INT16_MIN;
volatile int8_t x77 = INT8_MIN;
volatile int32_t t19 = 745;
static int32_t x81 = INT32_MIN;
int16_t x85 = -232;
static uint8_t x93 = 11U;
static uint8_t x95 = 89U;
volatile int32_t t23 = 62219;
int32_t t24 = 1;
volatile int32_t x101 = INT32_MIN;
int32_t x102 = -72183122;
int16_t x107 = INT16_MIN;
int32_t t26 = 31706781;
uint32_t x115 = 64166U;
int32_t t28 = 1;
uint8_t x119 = 7U;
int64_t x120 = INT64_MIN;
uint16_t x130 = 1271U;
int64_t x141 = INT64_MAX;
volatile int64_t x146 = INT64_MAX;
volatile uint8_t x151 = 54U;
static volatile int32_t t36 = -16458931;
int32_t x158 = INT32_MAX;
int8_t x161 = INT8_MAX;
uint16_t x173 = 8U;
int16_t x174 = 0;
uint8_t x180 = UINT8_MAX;
int16_t x186 = 16369;
uint8_t x190 = 0U;
volatile uint16_t x199 = 6086U;
static volatile int8_t x207 = -1;
volatile int32_t t51 = 6517597;
uint32_t x213 = 13674198U;
static int64_t x222 = INT64_MAX;
int16_t x225 = INT16_MIN;
static int64_t x229 = INT64_MAX;
int64_t x231 = 1956935722LL;
uint16_t x233 = 16336U;
int16_t x235 = -1;
static int8_t x236 = INT8_MIN;
volatile int16_t x239 = INT16_MAX;
static int16_t x245 = -1;
static volatile int16_t x247 = -1;
int8_t x252 = 0;
volatile int32_t x254 = -1;
uint32_t x258 = UINT32_MAX;
int16_t x260 = -61;
volatile uint8_t x263 = 1U;
volatile int16_t x264 = INT16_MIN;
int16_t x267 = INT16_MIN;
uint8_t x280 = 1U;
int8_t x296 = INT8_MIN;
volatile int64_t x303 = INT64_MAX;
uint32_t x309 = 255U;
uint8_t x311 = UINT8_MAX;
int16_t x316 = INT16_MAX;
int16_t x324 = -1;
int32_t t79 = 12859;
uint32_t x331 = UINT32_MAX;
uint8_t x338 = UINT8_MAX;
int8_t x339 = -1;
uint8_t x341 = 41U;
int64_t x343 = INT64_MAX;
int16_t x347 = -1;
static volatile int32_t t86 = -2291064;
int8_t x354 = 0;
uint16_t x358 = 0U;
uint16_t x361 = 34U;
uint16_t x366 = 416U;
uint32_t x367 = UINT32_MAX;
int16_t x371 = -1;
int16_t x377 = -1;
uint8_t x381 = UINT8_MAX;
uint16_t x384 = 183U;
volatile int8_t x385 = INT8_MAX;
volatile uint64_t x386 = 120824537525454660LLU;
int32_t x387 = -1;
int32_t x388 = -1;
uint8_t x389 = UINT8_MAX;
int64_t x397 = -59149651763291583LL;
static int32_t x398 = -336632;
int32_t x399 = -518694648;
volatile int32_t x400 = INT32_MAX;
int8_t x403 = INT8_MAX;
int32_t t99 = -418823557;


void f0(void) {
	static int8_t x3 = -1;
	static volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -12939;

	t0 = (((x1<=x2)%x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int8_t x6 = -1;
	int16_t x7 = INT16_MIN;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 7;

	t1 = (((x5<=x6)%x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 0U;
	int32_t x10 = -1;
	volatile int32_t x11 = -1;
	volatile int32_t t2 = -1;

	t2 = (((x9<=x10)%x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = INT32_MIN;
	static int16_t x15 = -3318;
	int32_t t3 = 415;

	t3 = (((x13<=x14)%x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 375894LLU;
	int8_t x18 = -1;
	static int16_t x19 = -2;
	volatile uint8_t x20 = 2U;

	t4 = (((x17<=x18)%x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int64_t x22 = INT64_MAX;
	volatile int64_t x23 = -750202524LL;
	int16_t x24 = -27;
	static volatile int32_t t5 = -480;

	t5 = (((x21<=x22)%x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 61946562U;
	static int16_t x26 = -3;
	int8_t x27 = -30;
	int16_t x28 = INT16_MIN;
	static volatile int32_t t6 = -1;

	t6 = (((x25<=x26)%x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	static int8_t x32 = INT8_MIN;
	static int32_t t7 = 18561;

	t7 = (((x29<=x30)%x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 46402935035743718LLU;
	static int16_t x34 = 0;
	uint8_t x35 = 1U;
	int64_t x36 = INT64_MIN;

	t8 = (((x33<=x34)%x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = INT8_MAX;
	int8_t x38 = INT8_MIN;
	volatile int64_t x39 = 721105LL;
	static int64_t x40 = -354051641036144019LL;

	t9 = (((x37<=x38)%x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = 4;
	volatile int64_t x43 = INT64_MIN;
	static int64_t x44 = INT64_MIN;
	int32_t t10 = 35;

	t10 = (((x41<=x42)%x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	volatile int32_t x48 = -45;
	static volatile int32_t t11 = -38729427;

	t11 = (((x45<=x46)%x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 1062U;
	volatile uint8_t x50 = 35U;
	volatile int16_t x51 = 26;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 156447794;

	t12 = (((x49<=x50)%x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	int16_t x55 = 3;
	static int64_t x56 = -637LL;
	volatile int32_t t13 = -53;

	t13 = (((x53<=x54)%x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -24;
	int32_t x58 = INT32_MIN;
	static int16_t x59 = -1;
	int64_t x60 = INT64_MIN;
	int32_t t14 = 1353;

	t14 = (((x57<=x58)%x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 40U;
	int16_t x62 = INT16_MIN;
	static volatile int32_t x63 = INT32_MIN;
	uint8_t x64 = 1U;
	volatile int32_t t15 = 53581;

	t15 = (((x61<=x62)%x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 4U;
	int16_t x67 = INT16_MIN;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = -703159;

	t16 = (((x65<=x66)%x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -11;
	uint8_t x70 = UINT8_MAX;
	uint32_t x71 = 16741U;
	volatile int16_t x72 = INT16_MAX;
	static int32_t t17 = 4326;

	t17 = (((x69<=x70)%x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x75 = UINT64_MAX;
	int8_t x76 = INT8_MIN;
	static int32_t t18 = 1;

	t18 = (((x73<=x74)%x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 30U;
	static volatile int32_t x79 = 2;
	int16_t x80 = -1;

	t19 = (((x77<=x78)%x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x82 = INT64_MIN;
	int32_t x83 = 15613;
	uint8_t x84 = 17U;
	int32_t t20 = 7;

	t20 = (((x81<=x82)%x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = UINT8_MAX;
	int32_t x87 = INT32_MAX;
	volatile int8_t x88 = -1;
	int32_t t21 = -2032799;

	t21 = (((x85<=x86)%x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	uint8_t x90 = 2U;
	uint32_t x91 = UINT32_MAX;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = -14;

	t22 = (((x89<=x90)%x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -1;
	static int8_t x96 = 0;

	t23 = (((x93<=x94)%x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 21915778385248744LLU;
	int16_t x98 = INT16_MIN;
	int64_t x99 = INT64_MIN;
	int16_t x100 = INT16_MAX;

	t24 = (((x97<=x98)%x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x103 = UINT32_MAX;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = 169;

	t25 = (((x101<=x102)%x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -3LL;
	int8_t x106 = 1;
	uint64_t x108 = UINT64_MAX;

	t26 = (((x105<=x106)%x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MIN;
	static int64_t x112 = INT64_MIN;
	static int32_t t27 = -560;

	t27 = (((x109<=x110)%x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = 546186LL;
	volatile int32_t x114 = -162584853;
	uint32_t x116 = 681036U;

	t28 = (((x113<=x114)%x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint32_t x118 = 818U;
	int32_t t29 = 447944;

	t29 = (((x117<=x118)%x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MIN;
	static int8_t x127 = 62;
	int32_t x128 = INT32_MIN;
	volatile int32_t t30 = 397469847;

	t30 = (((x125<=x126)%x127)<=x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	volatile int16_t x131 = -343;
	static int8_t x132 = -1;
	int32_t t31 = 63513;

	t31 = (((x129<=x130)%x131)<=x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = UINT8_MAX;
	int32_t x134 = INT32_MIN;
	int64_t x135 = 2067048123LL;
	static uint8_t x136 = 31U;
	static volatile int32_t t32 = -1786261;

	t32 = (((x133<=x134)%x135)<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x137 = 107U;
	int32_t x138 = INT32_MAX;
	volatile uint8_t x139 = 37U;
	static volatile int32_t x140 = INT32_MAX;
	static int32_t t33 = 636835;

	t33 = (((x137<=x138)%x139)<=x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x142 = -1;
	int32_t x143 = -1;
	uint64_t x144 = UINT64_MAX;
	int32_t t34 = -1471;

	t34 = (((x141<=x142)%x143)<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = 5;
	static int32_t x147 = INT32_MAX;
	uint32_t x148 = 84453U;
	volatile int32_t t35 = 2876943;

	t35 = (((x145<=x146)%x147)<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -1;
	volatile int32_t x150 = -2475;
	uint64_t x152 = 6167319873841LLU;

	t36 = (((x149<=x150)%x151)<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -1LL;
	int32_t x154 = INT32_MIN;
	uint64_t x155 = 6585153477LLU;
	int32_t x156 = INT32_MAX;
	volatile int32_t t37 = 502;

	t37 = (((x153<=x154)%x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MIN;
	int32_t x159 = INT32_MIN;
	uint32_t x160 = UINT32_MAX;
	int32_t t38 = -77608;

	t38 = (((x157<=x158)%x159)<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x162 = INT32_MIN;
	volatile uint64_t x163 = 3140658LLU;
	int64_t x164 = INT64_MIN;
	int32_t t39 = -24815;

	t39 = (((x161<=x162)%x163)<=x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x165 = INT32_MAX;
	static int32_t x166 = -68271335;
	int8_t x167 = INT8_MAX;
	static uint64_t x168 = UINT64_MAX;
	static volatile int32_t t40 = 32527310;

	t40 = (((x165<=x166)%x167)<=x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MAX;
	volatile int16_t x171 = -3;
	uint8_t x172 = 4U;
	int32_t t41 = 7;

	t41 = (((x169<=x170)%x171)<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x175 = UINT16_MAX;
	uint32_t x176 = UINT32_MAX;
	volatile int32_t t42 = 20;

	t42 = (((x173<=x174)%x175)<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = -1;
	uint16_t x178 = 108U;
	uint16_t x179 = UINT16_MAX;
	static int32_t t43 = 1;

	t43 = (((x177<=x178)%x179)<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MAX;
	volatile uint32_t x182 = 1U;
	uint16_t x183 = 47U;
	volatile uint16_t x184 = 3U;
	static volatile int32_t t44 = -60743;

	t44 = (((x181<=x182)%x183)<=x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 0U;
	uint16_t x187 = UINT16_MAX;
	int8_t x188 = 5;
	volatile int32_t t45 = 218;

	t45 = (((x185<=x186)%x187)<=x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = INT32_MIN;
	volatile uint64_t x191 = 10947176713LLU;
	static int32_t x192 = -656;
	static int32_t t46 = -3738463;

	t46 = (((x189<=x190)%x191)<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = -1;
	int16_t x194 = INT16_MIN;
	volatile int32_t x195 = -1;
	static int16_t x196 = -1;
	int32_t t47 = -66;

	t47 = (((x193<=x194)%x195)<=x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MIN;
	volatile uint32_t x200 = UINT32_MAX;
	volatile int32_t t48 = 39952158;

	t48 = (((x197<=x198)%x199)<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -1LL;
	uint64_t x202 = UINT64_MAX;
	int8_t x203 = INT8_MIN;
	int16_t x204 = INT16_MIN;
	volatile int32_t t49 = 9173060;

	t49 = (((x201<=x202)%x203)<=x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = -1;
	int8_t x206 = -12;
	static volatile int8_t x208 = -1;
	int32_t t50 = -7303;

	t50 = (((x205<=x206)%x207)<=x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -1;
	int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -43;

	t51 = (((x209<=x210)%x211)<=x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x214 = -1;
	uint32_t x215 = 14594U;
	uint64_t x216 = 2951796LLU;
	int32_t t52 = 78690453;

	t52 = (((x213<=x214)%x215)<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = 3943U;
	static volatile int32_t x218 = INT32_MIN;
	uint32_t x219 = 10275U;
	uint16_t x220 = 15427U;
	volatile int32_t t53 = 23;

	t53 = (((x217<=x218)%x219)<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MAX;
	uint32_t x223 = 1764268879U;
	static uint64_t x224 = UINT64_MAX;
	volatile int32_t t54 = 41;

	t54 = (((x221<=x222)%x223)<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x226 = 8084740014544895364LLU;
	static uint8_t x227 = 6U;
	int64_t x228 = INT64_MIN;
	volatile int32_t t55 = 178018458;

	t55 = (((x225<=x226)%x227)<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x230 = 8;
	uint8_t x232 = 6U;
	int32_t t56 = 1;

	t56 = (((x229<=x230)%x231)<=x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x234 = 3027464058742675726LLU;
	volatile int32_t t57 = -5755;

	t57 = (((x233<=x234)%x235)<=x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x237 = 735U;
	int16_t x238 = INT16_MIN;
	static int16_t x240 = INT16_MAX;
	int32_t t58 = 3;

	t58 = (((x237<=x238)%x239)<=x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MIN;
	volatile int32_t x243 = -930217;
	int16_t x244 = INT16_MIN;
	int32_t t59 = -14969972;

	t59 = (((x241<=x242)%x243)<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x246 = 4036323U;
	static uint32_t x248 = 322U;
	volatile int32_t t60 = -67595633;

	t60 = (((x245<=x246)%x247)<=x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x249 = UINT8_MAX;
	volatile int64_t x250 = -1LL;
	static uint16_t x251 = UINT16_MAX;
	volatile int32_t t61 = 91393;

	t61 = (((x249<=x250)%x251)<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x253 = -1;
	int16_t x255 = 14952;
	volatile int32_t x256 = -1;
	volatile int32_t t62 = 105404320;

	t62 = (((x253<=x254)%x255)<=x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x257 = UINT8_MAX;
	volatile int64_t x259 = -1094677031749LL;
	static int32_t t63 = 0;

	t63 = (((x257<=x258)%x259)<=x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MIN;
	int64_t x262 = -1LL;
	static int32_t t64 = 462850189;

	t64 = (((x261<=x262)%x263)<=x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = 30218092242269947LLU;
	static int16_t x266 = INT16_MAX;
	volatile int16_t x268 = INT16_MIN;
	static int32_t t65 = 105354;

	t65 = (((x265<=x266)%x267)<=x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = INT64_MIN;
	int32_t x270 = 0;
	int32_t x271 = INT32_MAX;
	volatile int32_t x272 = INT32_MIN;
	int32_t t66 = -10390915;

	t66 = (((x269<=x270)%x271)<=x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x273 = INT64_MIN;
	static volatile uint64_t x274 = UINT64_MAX;
	volatile int16_t x275 = -1;
	int32_t x276 = INT32_MIN;
	volatile int32_t t67 = 21035379;

	t67 = (((x273<=x274)%x275)<=x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x277 = 18879;
	uint16_t x278 = 34U;
	uint32_t x279 = 3176062U;
	static int32_t t68 = 1876;

	t68 = (((x277<=x278)%x279)<=x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = 1968203U;
	int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MIN;
	volatile uint16_t x284 = UINT16_MAX;
	static int32_t t69 = -4497;

	t69 = (((x281<=x282)%x283)<=x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x285 = INT32_MAX;
	int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MIN;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t70 = 1574;

	t70 = (((x285<=x286)%x287)<=x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 46U;
	uint32_t x290 = 12359364U;
	uint32_t x291 = 195719U;
	int32_t x292 = INT32_MAX;
	int32_t t71 = -352;

	t71 = (((x289<=x290)%x291)<=x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = -16204;
	int8_t x294 = -1;
	int8_t x295 = -6;
	volatile int32_t t72 = 47411756;

	t72 = (((x293<=x294)%x295)<=x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MAX;
	int16_t x298 = INT16_MIN;
	static int8_t x299 = INT8_MIN;
	static int8_t x300 = INT8_MAX;
	volatile int32_t t73 = -101283;

	t73 = (((x297<=x298)%x299)<=x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MAX;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t74 = 201;

	t74 = (((x301<=x302)%x303)<=x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x305 = -1LL;
	uint64_t x306 = 18396062LLU;
	static uint16_t x307 = UINT16_MAX;
	int32_t x308 = INT32_MIN;
	int32_t t75 = -1;

	t75 = (((x305<=x306)%x307)<=x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x310 = -1;
	uint8_t x312 = 3U;
	volatile int32_t t76 = -11;

	t76 = (((x309<=x310)%x311)<=x312);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x313 = -342923932;
	static volatile int8_t x314 = INT8_MIN;
	static volatile uint8_t x315 = UINT8_MAX;
	volatile int32_t t77 = 208175262;

	t77 = (((x313<=x314)%x315)<=x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MIN;
	volatile int16_t x318 = -1;
	uint32_t x319 = UINT32_MAX;
	int64_t x320 = 135150850261023LL;
	volatile int32_t t78 = 117;

	t78 = (((x317<=x318)%x319)<=x320);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x321 = 2494;
	int16_t x322 = INT16_MIN;
	volatile uint64_t x323 = 1030426LLU;

	t79 = (((x321<=x322)%x323)<=x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = 519412694LL;
	uint64_t x326 = 4405212640774018LLU;
	static uint64_t x327 = 3976212271928LLU;
	int8_t x328 = -6;
	static volatile int32_t t80 = 10481;

	t80 = (((x325<=x326)%x327)<=x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = -1;
	volatile int32_t x330 = INT32_MIN;
	int64_t x332 = INT64_MIN;
	int32_t t81 = 53587644;

	t81 = (((x329<=x330)%x331)<=x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MAX;
	static int64_t x334 = INT64_MAX;
	volatile uint8_t x335 = 3U;
	static uint32_t x336 = 230801U;
	static int32_t t82 = 46184;

	t82 = (((x333<=x334)%x335)<=x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 15U;
	int8_t x340 = INT8_MIN;
	static int32_t t83 = 510;

	t83 = (((x337<=x338)%x339)<=x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x342 = UINT64_MAX;
	uint16_t x344 = 4115U;
	volatile int32_t t84 = 48;

	t84 = (((x341<=x342)%x343)<=x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x345 = 960530U;
	int8_t x346 = INT8_MAX;
	int64_t x348 = -1LL;
	static volatile int32_t t85 = 2;

	t85 = (((x345<=x346)%x347)<=x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = -1LL;
	uint16_t x350 = 3417U;
	static int16_t x351 = INT16_MIN;
	volatile int8_t x352 = -31;

	t86 = (((x349<=x350)%x351)<=x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = 7;
	volatile int8_t x355 = -1;
	volatile uint8_t x356 = 11U;
	volatile int32_t t87 = 389316801;

	t87 = (((x353<=x354)%x355)<=x356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x357 = 17061U;
	int8_t x359 = INT8_MIN;
	uint8_t x360 = 8U;
	volatile int32_t t88 = 29;

	t88 = (((x357<=x358)%x359)<=x360);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x362 = 441U;
	int16_t x363 = INT16_MAX;
	volatile int32_t x364 = INT32_MAX;
	static volatile int32_t t89 = 43480;

	t89 = (((x361<=x362)%x363)<=x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x365 = UINT16_MAX;
	int32_t x368 = INT32_MAX;
	int32_t t90 = 85626528;

	t90 = (((x365<=x366)%x367)<=x368);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x369 = 1;
	volatile int32_t x370 = 312068051;
	int32_t x372 = INT32_MIN;
	static int32_t t91 = 13;

	t91 = (((x369<=x370)%x371)<=x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x373 = INT8_MAX;
	int16_t x374 = -1;
	int16_t x375 = 1;
	int16_t x376 = INT16_MAX;
	int32_t t92 = 234619;

	t92 = (((x373<=x374)%x375)<=x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x378 = INT64_MAX;
	int8_t x379 = -1;
	int32_t x380 = 14661;
	int32_t t93 = -222250;

	t93 = (((x377<=x378)%x379)<=x380);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x382 = 0;
	static uint32_t x383 = UINT32_MAX;
	int32_t t94 = 452033126;

	t94 = (((x381<=x382)%x383)<=x384);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t t95 = -21;

	t95 = (((x385<=x386)%x387)<=x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MAX;
	uint8_t x392 = 7U;
	static volatile int32_t t96 = 1;

	t96 = (((x389<=x390)%x391)<=x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = -1;
	int16_t x394 = 27;
	uint64_t x395 = 2LLU;
	uint64_t x396 = 36390LLU;
	volatile int32_t t97 = 374185710;

	t97 = (((x393<=x394)%x395)<=x396);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t t98 = 41670;

	t98 = (((x397<=x398)%x399)<=x400);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = -1;
	static uint8_t x402 = 49U;
	int16_t x404 = INT16_MAX;

	t99 = (((x401<=x402)%x403)<=x404);

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

