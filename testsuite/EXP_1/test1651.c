#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 15U;
volatile uint32_t t1 = 24U;
static uint32_t x9 = 747696009U;
static int32_t x11 = -1;
int32_t x16 = INT32_MAX;
int8_t x19 = INT8_MIN;
static int8_t x21 = 0;
volatile int64_t t6 = -11316431091669LL;
static int64_t x34 = -1LL;
static uint8_t x35 = 62U;
uint64_t x61 = 68808732554766LLU;
int16_t x63 = -1;
static volatile int32_t t15 = 3205619;
int32_t x67 = -1;
volatile int32_t t16 = INT32_MIN;
volatile int16_t x75 = -511;
int8_t x83 = INT8_MIN;
uint16_t x90 = 2547U;
int64_t x91 = INT64_MIN;
int32_t t23 = -1;
volatile int16_t x107 = INT16_MIN;
static int32_t t26 = -33682;
static volatile int8_t x118 = -1;
static int8_t x119 = -34;
volatile uint32_t t29 = 814877864U;
static int16_t x121 = -3442;
int8_t x135 = INT8_MAX;
volatile int64_t t33 = 287228385677003448LL;
int64_t x137 = 286540803LL;
static int64_t x139 = 8331725076226783LL;
volatile int16_t x140 = -113;
int16_t x143 = -341;
int64_t x144 = INT64_MIN;
static int64_t x147 = 119077642101LL;
uint64_t x151 = 23627402121241LLU;
static uint32_t x152 = UINT32_MAX;
static int32_t t38 = 53;
static int8_t x158 = 15;
static int32_t t39 = -446201;
static volatile int32_t t41 = -633996592;
int16_t x170 = 4593;
volatile int32_t t42 = 14599817;
int16_t x181 = INT16_MIN;
uint8_t x186 = UINT8_MAX;
static volatile int16_t x188 = INT16_MIN;
volatile int32_t t48 = 0;
int64_t t50 = INT64_MIN;
volatile int8_t x209 = -10;
uint8_t x210 = 2U;
int16_t x212 = INT16_MIN;
uint16_t x215 = 32092U;
static int16_t x220 = -1;
static volatile int32_t x222 = -2;
volatile int32_t x223 = 24;
uint8_t x232 = UINT8_MAX;
volatile int32_t t57 = -7;
int32_t t58 = 3;
volatile int32_t x239 = INT32_MIN;
volatile int8_t x240 = -1;
int32_t t59 = 636644;
uint16_t x243 = 64U;
static int16_t x244 = -1;
static int32_t t60 = -24;
static volatile int16_t x246 = INT16_MAX;
uint16_t x249 = UINT16_MAX;
static volatile uint32_t t62 = 4966505U;
int64_t x253 = 12705758269811LL;
volatile int8_t x255 = 0;
int64_t x257 = INT64_MIN;
int16_t x258 = 0;
int64_t x261 = INT64_MIN;
int64_t x266 = -1LL;
int32_t x267 = -18893270;
static uint8_t x270 = 42U;
int64_t t67 = -405476612LL;
static int32_t x274 = -1;
int32_t x277 = INT32_MIN;
uint16_t x281 = 23U;
static int16_t x287 = INT16_MAX;
volatile int32_t t72 = 5;
volatile int32_t x293 = 0;
int64_t x304 = 1440873322246LL;
int8_t x306 = 27;
volatile int64_t x310 = -1LL;
volatile int64_t x311 = -1731768441493624LL;
int32_t x315 = 6;
static volatile int32_t t78 = 177878;
uint16_t x318 = UINT16_MAX;
int32_t t79 = -821;
int32_t x323 = INT32_MAX;
static volatile int32_t t81 = -185;
uint16_t x329 = 4U;
static uint32_t x334 = 778981272U;
volatile uint16_t x337 = 7548U;
int8_t x338 = 0;
int64_t x341 = -1LL;
static uint64_t x353 = 2946060755149776LLU;
int32_t x355 = INT32_MIN;
int32_t t88 = 357;
volatile int16_t x357 = -1;
static volatile uint16_t x360 = 3U;
uint8_t x362 = 4U;
volatile int64_t x365 = INT64_MIN;
static int16_t x367 = INT16_MIN;
volatile int32_t x368 = -1881607;
static volatile int64_t x369 = INT64_MIN;
volatile int32_t t92 = -31507613;
int64_t x374 = -1LL;
uint16_t x375 = 1U;
int16_t x389 = INT16_MAX;
volatile int16_t x392 = INT16_MIN;
static uint64_t x396 = 3492862513684LLU;
static int64_t x398 = 1052641600042LL;
int32_t t99 = 154191268;


void f0(void) {
	volatile int64_t x1 = 47941376471977LL;
	static int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MAX;
	uint16_t x4 = 11U;
	volatile int32_t t0 = -3384550;

	t0 = (((x1<=x2)<=x3)^x4);

	if (t0 != 10) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	uint64_t x7 = 1717LLU;
	uint32_t x8 = UINT32_MAX;

	t1 = (((x5<=x6)<=x7)^x8);

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x10 = INT64_MIN;
	int64_t x12 = INT64_MIN;
	int64_t t2 = INT64_MIN;

	t2 = (((x9<=x10)<=x11)^x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int16_t x14 = INT16_MIN;
	volatile int8_t x15 = INT8_MIN;
	volatile int32_t t3 = INT32_MAX;

	t3 = (((x13<=x14)<=x15)^x16);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int32_t x18 = INT32_MIN;
	int32_t x20 = INT32_MIN;
	static int32_t t4 = INT32_MIN;

	t4 = (((x17<=x18)<=x19)^x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 358U;
	static uint64_t x23 = 1LLU;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 14883855;

	t5 = (((x21<=x22)<=x23)^x24);

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	int32_t x26 = INT32_MAX;
	volatile uint8_t x27 = 9U;
	int64_t x28 = INT64_MAX;

	t6 = (((x25<=x26)<=x27)^x28);

	if (t6 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	int64_t x30 = 19462549LL;
	int32_t x31 = INT32_MIN;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -394330380;

	t7 = (((x29<=x30)<=x31)^x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 35188;
	static int16_t x36 = -25;
	volatile int32_t t8 = 26100284;

	t8 = (((x33<=x34)<=x35)^x36);

	if (t8 != -26) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = UINT64_MAX;
	int16_t x38 = INT16_MIN;
	uint16_t x39 = 1912U;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = 39303496LL;

	t9 = (((x37<=x38)<=x39)^x40);

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 90067U;
	int16_t x42 = INT16_MIN;
	int32_t x43 = -1;
	volatile int64_t x44 = -1LL;
	static volatile int64_t t10 = -941178773825725198LL;

	t10 = (((x41<=x42)<=x43)^x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 94731053U;
	int64_t x46 = INT64_MAX;
	uint16_t x47 = 0U;
	volatile int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = 8725978;

	t11 = (((x45<=x46)<=x47)^x48);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 17U;
	uint32_t x50 = UINT32_MAX;
	int32_t x51 = 1326;
	volatile int16_t x52 = INT16_MAX;
	int32_t t12 = -746402987;

	t12 = (((x49<=x50)<=x51)^x52);

	if (t12 != 32766) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint32_t x54 = 13841788U;
	int32_t x55 = -1;
	static volatile int16_t x56 = -1;
	int32_t t13 = -1994;

	t13 = (((x53<=x54)<=x55)^x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 0LLU;
	int64_t x58 = -115081736257876LL;
	static volatile uint64_t x59 = 9LLU;
	int32_t x60 = 11;
	volatile int32_t t14 = -1;

	t14 = (((x57<=x58)<=x59)^x60);

	if (t14 != 10) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x62 = INT16_MAX;
	volatile int16_t x64 = INT16_MAX;

	t15 = (((x61<=x62)<=x63)^x64);

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = -1704LL;
	int32_t x66 = INT32_MIN;
	volatile int32_t x68 = INT32_MIN;

	t16 = (((x65<=x66)<=x67)^x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int32_t x70 = 32361;
	int32_t x71 = INT32_MAX;
	int64_t x72 = INT64_MIN;
	static volatile int64_t t17 = -7376907219428980LL;

	t17 = (((x69<=x70)<=x71)^x72);

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 5192;
	uint32_t x74 = 68930774U;
	int64_t x76 = INT64_MIN;
	static int64_t t18 = INT64_MIN;

	t18 = (((x73<=x74)<=x75)^x76);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	static uint8_t x78 = 18U;
	int16_t x79 = -1;
	int16_t x80 = -6769;
	int32_t t19 = -86405;

	t19 = (((x77<=x78)<=x79)^x80);

	if (t19 != -6769) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -5;
	uint8_t x82 = 1U;
	int16_t x84 = -1;
	volatile int32_t t20 = 1547;

	t20 = (((x81<=x82)<=x83)^x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -355866LL;
	int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MAX;
	int64_t x88 = -1LL;
	int64_t t21 = -9180LL;

	t21 = (((x85<=x86)<=x87)^x88);

	if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	int64_t x92 = INT64_MAX;
	static volatile int64_t t22 = INT64_MAX;

	t22 = (((x89<=x90)<=x91)^x92);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	uint8_t x94 = 0U;
	int64_t x95 = -2097586729060460184LL;
	int32_t x96 = -710072213;

	t23 = (((x93<=x94)<=x95)^x96);

	if (t23 != -710072213) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 7U;
	int8_t x98 = INT8_MAX;
	int64_t x99 = INT64_MIN;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (((x97<=x98)<=x99)^x100);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MAX;
	static uint32_t x104 = 393U;
	static uint32_t t25 = 1U;

	t25 = (((x101<=x102)<=x103)^x104);

	if (t25 != 392U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 13;
	static int16_t x106 = -3;
	static uint16_t x108 = 13028U;

	t26 = (((x105<=x106)<=x107)^x108);

	if (t26 != 13028) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 0U;
	static int32_t x110 = -1;
	uint64_t x111 = 8361117LLU;
	static int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -12274;

	t27 = (((x109<=x110)<=x111)^x112);

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MAX;
	int16_t x114 = INT16_MIN;
	int32_t x115 = -777337;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -12086;

	t28 = (((x113<=x114)<=x115)^x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	uint32_t x120 = 3181810U;

	t29 = (((x117<=x118)<=x119)^x120);

	if (t29 != 3181810U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -1LL;
	int64_t x123 = -1617LL;
	static uint16_t x124 = 30U;
	volatile int32_t t30 = -539619;

	t30 = (((x121<=x122)<=x123)^x124);

	if (t30 != 30) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	uint64_t x126 = 153LLU;
	int8_t x127 = 3;
	static int16_t x128 = INT16_MAX;
	volatile int32_t t31 = -32249884;

	t31 = (((x125<=x126)<=x127)^x128);

	if (t31 != 32766) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 689641069;
	int32_t x130 = 237307791;
	volatile int8_t x131 = INT8_MIN;
	uint32_t x132 = UINT32_MAX;
	uint32_t t32 = UINT32_MAX;

	t32 = (((x129<=x130)<=x131)^x132);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	volatile int64_t x134 = INT64_MIN;
	int64_t x136 = INT64_MIN;

	t33 = (((x133<=x134)<=x135)^x136);

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = 3;
	static volatile int32_t t34 = 67194;

	t34 = (((x137<=x138)<=x139)^x140);

	if (t34 != -114) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	volatile int64_t x142 = -25231LL;
	int64_t t35 = INT64_MIN;

	t35 = (((x141<=x142)<=x143)^x144);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	uint8_t x146 = 11U;
	volatile uint64_t x148 = 0LLU;
	volatile uint64_t t36 = 3437411048741LLU;

	t36 = (((x145<=x146)<=x147)^x148);

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 479241343713686LLU;
	int16_t x150 = -6480;
	volatile uint32_t t37 = 102534407U;

	t37 = (((x149<=x150)<=x151)^x152);

	if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 240872930376LL;
	int64_t x154 = INT64_MAX;
	int16_t x155 = -1048;
	static int32_t x156 = 19;

	t38 = (((x153<=x154)<=x155)^x156);

	if (t38 != 19) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	uint32_t x159 = UINT32_MAX;
	uint16_t x160 = UINT16_MAX;

	t39 = (((x157<=x158)<=x159)^x160);

	if (t39 != 65534) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = INT32_MIN;
	int64_t x162 = INT64_MIN;
	uint8_t x163 = UINT8_MAX;
	int64_t x164 = -1LL;
	int64_t t40 = -922835LL;

	t40 = (((x161<=x162)<=x163)^x164);

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 2U;
	int16_t x166 = INT16_MIN;
	int64_t x167 = -13LL;
	uint16_t x168 = UINT16_MAX;

	t41 = (((x165<=x166)<=x167)^x168);

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 1;
	uint8_t x171 = UINT8_MAX;
	volatile int8_t x172 = INT8_MIN;

	t42 = (((x169<=x170)<=x171)^x172);

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = 83796570U;
	uint32_t x174 = UINT32_MAX;
	static int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = INT32_MIN;

	t43 = (((x173<=x174)<=x175)^x176);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MAX;
	int64_t x178 = INT64_MIN;
	int16_t x179 = 2;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 1;

	t44 = (((x177<=x178)<=x179)^x180);

	if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MIN;
	volatile int32_t x184 = -12092;
	int32_t t45 = -5696;

	t45 = (((x181<=x182)<=x183)^x184);

	if (t45 != -12092) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MIN;
	int16_t x187 = INT16_MAX;
	volatile int32_t t46 = 6270507;

	t46 = (((x185<=x186)<=x187)^x188);

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = UINT16_MAX;
	int8_t x190 = -1;
	volatile uint32_t x191 = 79570U;
	uint32_t x192 = 8596688U;
	uint32_t t47 = 134425U;

	t47 = (((x189<=x190)<=x191)^x192);

	if (t47 != 8596689U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 4U;
	volatile uint16_t x194 = 7U;
	static int8_t x195 = -3;
	int8_t x196 = INT8_MAX;

	t48 = (((x193<=x194)<=x195)^x196);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -16;
	int16_t x198 = INT16_MAX;
	int32_t x199 = -1;
	int16_t x200 = -1;
	volatile int32_t t49 = -3375361;

	t49 = (((x197<=x198)<=x199)^x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MAX;
	static int64_t x203 = INT64_MIN;
	volatile int64_t x204 = INT64_MIN;

	t50 = (((x201<=x202)<=x203)^x204);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -1;
	int16_t x206 = -5069;
	int16_t x207 = -1;
	int64_t x208 = INT64_MIN;
	volatile int64_t t51 = INT64_MIN;

	t51 = (((x205<=x206)<=x207)^x208);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x211 = UINT8_MAX;
	volatile int32_t t52 = -1161;

	t52 = (((x209<=x210)<=x211)^x212);

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = UINT64_MAX;
	volatile int64_t x214 = -837868LL;
	volatile int16_t x216 = INT16_MAX;
	volatile int32_t t53 = -797832;

	t53 = (((x213<=x214)<=x215)^x216);

	if (t53 != 32766) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int64_t x218 = -1LL;
	int32_t x219 = INT32_MIN;
	static volatile int32_t t54 = -24269242;

	t54 = (((x217<=x218)<=x219)^x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = 13;
	volatile int8_t x224 = INT8_MIN;
	int32_t t55 = 96184435;

	t55 = (((x221<=x222)<=x223)^x224);

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = 65928994;
	uint64_t x226 = 5LLU;
	uint64_t x227 = 573400301856683392LLU;
	volatile int8_t x228 = INT8_MAX;
	static volatile int32_t t56 = 188782;

	t56 = (((x225<=x226)<=x227)^x228);

	if (t56 != 126) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = 4LLU;
	int16_t x230 = 7078;
	uint16_t x231 = 151U;

	t57 = (((x229<=x230)<=x231)^x232);

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 1;
	volatile int16_t x234 = INT16_MIN;
	static int8_t x235 = -14;
	volatile int16_t x236 = INT16_MIN;

	t58 = (((x233<=x234)<=x235)^x236);

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = -1LL;
	int32_t x238 = -10597510;

	t59 = (((x237<=x238)<=x239)^x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	volatile uint64_t x242 = 6LLU;

	t60 = (((x241<=x242)<=x243)^x244);

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	int64_t x247 = -150513176884LL;
	int32_t x248 = -1;
	static volatile int32_t t61 = 1015;

	t61 = (((x245<=x246)<=x247)^x248);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x250 = UINT64_MAX;
	int64_t x251 = -7108189112527693LL;
	volatile uint32_t x252 = 23555U;

	t62 = (((x249<=x250)<=x251)^x252);

	if (t62 != 23555U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x254 = 229U;
	uint64_t x256 = 1570379446959625LLU;
	static volatile uint64_t t63 = 87456LLU;

	t63 = (((x253<=x254)<=x255)^x256);

	if (t63 != 1570379446959624LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 1;

	t64 = (((x257<=x258)<=x259)^x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x262 = INT64_MIN;
	static volatile int64_t x263 = INT64_MIN;
	int8_t x264 = -1;
	static volatile int32_t t65 = 1752;

	t65 = (((x261<=x262)<=x263)^x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 77U;
	int64_t x268 = -121971056118070LL;
	volatile int64_t t66 = -573307548730502LL;

	t66 = (((x265<=x266)<=x267)^x268);

	if (t66 != -121971056118070LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 2U;
	uint32_t x271 = 1818815639U;
	int64_t x272 = -1LL;

	t67 = (((x269<=x270)<=x271)^x272);

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 10541U;
	uint32_t x275 = UINT32_MAX;
	uint32_t x276 = 4347882U;
	volatile uint32_t t68 = 58511U;

	t68 = (((x273<=x274)<=x275)^x276);

	if (t68 != 4347883U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = 2376958;
	uint64_t x279 = 185220195LLU;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 1;

	t69 = (((x277<=x278)<=x279)^x280);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = 116U;
	static int32_t x283 = INT32_MAX;
	volatile int64_t x284 = INT64_MIN;
	int64_t t70 = 47170LL;

	t70 = (((x281<=x282)<=x283)^x284);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = 21;
	uint8_t x286 = 39U;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t71 = 84;

	t71 = (((x285<=x286)<=x287)^x288);

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	volatile int64_t x290 = INT64_MIN;
	int8_t x291 = -1;
	volatile int8_t x292 = 0;

	t72 = (((x289<=x290)<=x291)^x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = 9823LLU;
	int16_t x295 = INT16_MAX;
	int64_t x296 = 1LL;
	volatile int64_t t73 = -224LL;

	t73 = (((x293<=x294)<=x295)^x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 1U;
	uint8_t x298 = UINT8_MAX;
	static int64_t x299 = INT64_MIN;
	volatile uint16_t x300 = 63U;
	int32_t t74 = 3409567;

	t74 = (((x297<=x298)<=x299)^x300);

	if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 0U;
	static volatile int32_t x302 = INT32_MAX;
	uint64_t x303 = 588LLU;
	volatile int64_t t75 = 2727114LL;

	t75 = (((x301<=x302)<=x303)^x304);

	if (t75 != 1440873322247LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	static uint16_t x307 = 1872U;
	volatile int8_t x308 = -61;
	int32_t t76 = 62630618;

	t76 = (((x305<=x306)<=x307)^x308);

	if (t76 != -62) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	static int32_t x312 = INT32_MAX;
	int32_t t77 = INT32_MAX;

	t77 = (((x309<=x310)<=x311)^x312);

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = 6633812286207LLU;
	int16_t x314 = INT16_MIN;
	int8_t x316 = INT8_MIN;

	t78 = (((x313<=x314)<=x315)^x316);

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = 176;
	int32_t x319 = 132580;
	static volatile int32_t x320 = -1;

	t79 = (((x317<=x318)<=x319)^x320);

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = -1LL;
	int8_t x322 = 14;
	static volatile int8_t x324 = -54;
	int32_t t80 = 1355293;

	t80 = (((x321<=x322)<=x323)^x324);

	if (t80 != -53) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 110U;
	uint16_t x326 = UINT16_MAX;
	int64_t x327 = -2LL;
	static int16_t x328 = -1;

	t81 = (((x325<=x326)<=x327)^x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = UINT64_MAX;
	uint64_t x331 = 565005575900889514LLU;
	uint64_t x332 = 3291LLU;
	volatile uint64_t t82 = 98855682891LLU;

	t82 = (((x329<=x330)<=x331)^x332);

	if (t82 != 3290LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = 8019288U;
	uint32_t x335 = 208198U;
	int8_t x336 = INT8_MAX;
	int32_t t83 = 10;

	t83 = (((x333<=x334)<=x335)^x336);

	if (t83 != 126) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x339 = 2U;
	static int64_t x340 = -5952118390491663LL;
	volatile int64_t t84 = -1LL;

	t84 = (((x337<=x338)<=x339)^x340);

	if (t84 != -5952118390491664LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = UINT8_MAX;
	volatile int32_t x343 = INT32_MIN;
	volatile int16_t x344 = -1;
	int32_t t85 = -400408872;

	t85 = (((x341<=x342)<=x343)^x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	volatile int64_t x346 = -1LL;
	static uint32_t x347 = 28980U;
	int64_t x348 = 1762838115530307LL;
	int64_t t86 = -2396LL;

	t86 = (((x345<=x346)<=x347)^x348);

	if (t86 != 1762838115530306LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 250001208695LL;
	volatile int32_t x350 = INT32_MIN;
	static uint8_t x351 = UINT8_MAX;
	uint8_t x352 = 57U;
	static volatile int32_t t87 = -5087001;

	t87 = (((x349<=x350)<=x351)^x352);

	if (t87 != 56) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x354 = 27U;
	uint16_t x356 = 1919U;

	t88 = (((x353<=x354)<=x355)^x356);

	if (t88 != 1919) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x358 = UINT8_MAX;
	int64_t x359 = -524565567859280LL;
	int32_t t89 = 0;

	t89 = (((x357<=x358)<=x359)^x360);

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = 15U;
	volatile uint16_t x363 = UINT16_MAX;
	uint32_t x364 = 564273739U;
	volatile uint32_t t90 = 130883U;

	t90 = (((x361<=x362)<=x363)^x364);

	if (t90 != 564273738U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = INT64_MAX;
	volatile int32_t t91 = -32531354;

	t91 = (((x365<=x366)<=x367)^x368);

	if (t91 != -1881607) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MIN;
	volatile int64_t x371 = 33975943115LL;
	int16_t x372 = INT16_MIN;

	t92 = (((x369<=x370)<=x371)^x372);

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	int8_t x376 = -26;
	volatile int32_t t93 = -577266720;

	t93 = (((x373<=x374)<=x375)^x376);

	if (t93 != -25) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	static uint32_t x378 = 8120U;
	volatile int32_t x379 = -1079;
	int32_t x380 = -1;
	int32_t t94 = -28;

	t94 = (((x377<=x378)<=x379)^x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -23;
	volatile int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MIN;
	int64_t x384 = 1544839LL;
	int64_t t95 = 366LL;

	t95 = (((x381<=x382)<=x383)^x384);

	if (t95 != 1544839LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MIN;
	int32_t x387 = INT32_MIN;
	volatile int16_t x388 = INT16_MIN;
	int32_t t96 = 132793379;

	t96 = (((x385<=x386)<=x387)^x388);

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = INT32_MIN;
	int16_t x391 = INT16_MIN;
	int32_t t97 = 118852010;

	t97 = (((x389<=x390)<=x391)^x392);

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = UINT64_MAX;
	uint64_t x394 = 1981LLU;
	int8_t x395 = 14;
	uint64_t t98 = 12863812170534LLU;

	t98 = (((x393<=x394)<=x395)^x396);

	if (t98 != 3492862513685LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	volatile int32_t x399 = -21;
	volatile int32_t x400 = -305;

	t99 = (((x397<=x398)<=x399)^x400);

	if (t99 != -305) { NG(); } else { ; }
	
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

