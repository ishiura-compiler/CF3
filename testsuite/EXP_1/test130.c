#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -61248;
uint16_t x9 = 17U;
volatile int32_t x11 = INT32_MAX;
int32_t t2 = -6785278;
volatile uint8_t x13 = 1U;
int16_t x14 = -1776;
uint16_t x19 = 10U;
uint32_t x22 = 6U;
int16_t x28 = -1;
int16_t x31 = INT16_MIN;
volatile uint32_t t10 = 1546344U;
int32_t x55 = INT32_MIN;
int32_t x64 = 3363511;
uint16_t x65 = UINT16_MAX;
uint8_t x70 = 1U;
static int32_t x72 = INT32_MIN;
static uint32_t x74 = 1956U;
static int16_t x75 = INT16_MIN;
static int32_t x76 = 1270649;
int32_t t17 = 0;
int64_t x85 = 29368531986461LL;
volatile int16_t x90 = INT16_MIN;
static volatile int64_t x94 = INT64_MIN;
uint8_t x95 = UINT8_MAX;
volatile int32_t t22 = -826176711;
int16_t x103 = INT16_MIN;
volatile int32_t t23 = 103;
int32_t x110 = 1;
int32_t x115 = -1;
static uint64_t x117 = 240212511754215320LLU;
uint16_t x122 = 43U;
uint8_t x124 = UINT8_MAX;
int32_t t27 = 101002;
int32_t x125 = INT32_MAX;
int32_t x127 = INT32_MAX;
int32_t t28 = 4078971;
static volatile uint32_t t29 = 3U;
uint64_t x134 = UINT64_MAX;
int32_t t30 = 121;
int64_t x140 = 359LL;
static int8_t x144 = 57;
int32_t x149 = INT32_MAX;
int8_t x150 = -1;
static volatile uint16_t x155 = UINT16_MAX;
uint64_t x161 = 15LLU;
volatile uint64_t x166 = 4220529462586LLU;
int32_t x171 = INT32_MIN;
volatile int64_t t43 = -2449143378LL;
static int8_t x202 = INT8_MIN;
int32_t t46 = -50;
static int32_t t47 = 644092154;
int16_t x218 = INT16_MAX;
int32_t x221 = INT32_MIN;
int32_t t50 = -880672899;
uint64_t x232 = UINT64_MAX;
static volatile int64_t x233 = -1LL;
uint8_t x235 = 3U;
int64_t x236 = INT64_MAX;
int16_t x242 = INT16_MAX;
uint16_t x246 = UINT16_MAX;
int16_t x247 = INT16_MIN;
volatile uint64_t x256 = UINT64_MAX;
volatile int32_t t59 = -34477000;
uint64_t x266 = UINT64_MAX;
volatile int64_t x272 = INT64_MAX;
static volatile int16_t x283 = INT16_MAX;
static int8_t x285 = -1;
static int16_t x292 = INT16_MAX;
int8_t x293 = 0;
static int16_t x302 = INT16_MAX;
int32_t t68 = INT32_MAX;
int16_t x309 = INT16_MIN;
int32_t x310 = -1;
volatile int32_t t70 = 95;
int32_t t71 = 70634;
int32_t x317 = INT32_MAX;
uint16_t x328 = 27790U;
uint8_t x331 = 3U;
uint32_t x335 = 3946U;
uint8_t x337 = UINT8_MAX;
int32_t x345 = INT32_MIN;
int64_t x353 = INT64_MIN;
int64_t x358 = INT64_MAX;
volatile int32_t t82 = INT32_MIN;
int16_t x363 = 1;
static uint32_t x364 = UINT32_MAX;
int32_t t84 = -3472988;
int64_t x369 = -10LL;
volatile uint8_t x372 = 7U;
static int16_t x376 = -1;
int64_t x377 = INT64_MIN;
int32_t x387 = INT32_MIN;
volatile uint8_t x388 = 105U;
volatile uint64_t x393 = UINT64_MAX;
volatile uint64_t x394 = 0LLU;
static int16_t x396 = INT16_MIN;
volatile int16_t x403 = -885;
int64_t x409 = 6839984385036LL;
int64_t x411 = -1LL;
volatile int8_t x416 = -1;
static uint32_t x425 = UINT32_MAX;
static int16_t x426 = 27;
int16_t x427 = -1;
int16_t x429 = -8686;
int64_t x431 = -9449501319240LL;
int64_t x434 = -38685410863LL;
int8_t x439 = INT8_MAX;


void f0(void) {
	static int32_t x1 = 6;
	static volatile int16_t x2 = INT16_MAX;
	uint64_t x3 = 2979511985502LLU;
	int64_t x4 = -110475200LL;
	int64_t t0 = 905343669724708LL;

	t0 = (((x1+x2)<=x3)^x4);

	if (t0 != -110475199LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 28920U;
	uint8_t x6 = UINT8_MAX;
	int64_t x7 = INT64_MIN;
	volatile int16_t x8 = -118;

	t1 = (((x5+x6)<=x7)^x8);

	if (t1 != -118) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x10 = 9U;
	static int16_t x12 = -118;

	t2 = (((x9+x10)<=x11)^x12);

	if (t2 != -117) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x15 = UINT32_MAX;
	volatile int32_t x16 = 7523;
	volatile int32_t t3 = -996097;

	t3 = (((x13+x14)<=x15)^x16);

	if (t3 != 7522) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	int32_t x18 = INT32_MIN;
	int8_t x20 = 1;
	int32_t t4 = -54;

	t4 = (((x17+x18)<=x19)^x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static int64_t x23 = -1LL;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = INT32_MAX;

	t5 = (((x21+x22)<=x23)^x24);

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = 37LLU;
	volatile int32_t t6 = 1364;

	t6 = (((x25+x26)<=x27)^x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 3U;
	uint8_t x30 = 0U;
	int8_t x32 = -1;
	volatile int32_t t7 = 4218;

	t7 = (((x29+x30)<=x31)^x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	volatile uint8_t x34 = 0U;
	int16_t x35 = -1;
	uint8_t x36 = 1U;
	static volatile int32_t t8 = -346885232;

	t8 = (((x33+x34)<=x35)^x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = 114;
	int64_t x42 = INT64_MIN;
	volatile int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MIN;
	volatile int32_t t9 = 352938798;

	t9 = (((x41+x42)<=x43)^x44);

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 919451112367125910LLU;
	uint64_t x46 = 430099LLU;
	int64_t x47 = -1LL;
	uint32_t x48 = 4359025U;

	t10 = (((x45+x46)<=x47)^x48);

	if (t10 != 4359024U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MAX;
	volatile uint8_t x51 = UINT8_MAX;
	uint32_t x52 = UINT32_MAX;
	uint32_t t11 = 841U;

	t11 = (((x49+x50)<=x51)^x52);

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 523767374325609267LLU;
	uint32_t x54 = UINT32_MAX;
	int64_t x56 = INT64_MAX;
	volatile int64_t t12 = 1641153248LL;

	t12 = (((x53+x54)<=x55)^x56);

	if (t12 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	int64_t x58 = -1LL;
	int64_t x59 = INT64_MIN;
	volatile int8_t x60 = -1;
	int32_t t13 = 1;

	t13 = (((x57+x58)<=x59)^x60);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x62 = 6U;
	int32_t x63 = -1;
	static volatile int32_t t14 = 115;

	t14 = (((x61+x62)<=x63)^x64);

	if (t14 != 3363510) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = 57;
	static int64_t x67 = -8243879LL;
	static uint8_t x68 = 76U;
	int32_t t15 = 5313819;

	t15 = (((x65+x66)<=x67)^x68);

	if (t15 != 76) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	volatile int16_t x71 = -1;
	int32_t t16 = -156358;

	t16 = (((x69+x70)<=x71)^x72);

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x73 = 1U;

	t17 = (((x73+x74)<=x75)^x76);

	if (t17 != 1270648) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = 3;
	uint8_t x78 = 17U;
	int32_t x79 = 927352;
	volatile int8_t x80 = INT8_MAX;
	volatile int32_t t18 = -1;

	t18 = (((x77+x78)<=x79)^x80);

	if (t18 != 126) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 1U;
	static int16_t x82 = -1;
	int64_t x83 = INT64_MIN;
	volatile int8_t x84 = INT8_MIN;
	int32_t t19 = -342353;

	t19 = (((x81+x82)<=x83)^x84);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x86 = 1840897;
	int32_t x87 = -1;
	int64_t x88 = -1194747190871LL;
	static volatile int64_t t20 = 474257522456057LL;

	t20 = (((x85+x86)<=x87)^x88);

	if (t20 != -1194747190871LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 1953U;
	int64_t x91 = -1LL;
	uint64_t x92 = 19LLU;
	volatile uint64_t t21 = 232580LLU;

	t21 = (((x89+x90)<=x91)^x92);

	if (t21 != 18LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 1981745932LL;
	int16_t x96 = INT16_MIN;

	t22 = (((x93+x94)<=x95)^x96);

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 104LLU;
	int16_t x102 = -1;
	int16_t x104 = INT16_MAX;

	t23 = (((x101+x102)<=x103)^x104);

	if (t23 != 32766) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = -21;
	int16_t x111 = -14850;
	int32_t x112 = INT32_MIN;
	volatile int32_t t24 = INT32_MIN;

	t24 = (((x109+x110)<=x111)^x112);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = -1;
	int16_t x116 = -1;
	int32_t t25 = 135465;

	t25 = (((x113+x114)<=x115)^x116);

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x118 = INT64_MIN;
	int32_t x119 = INT32_MIN;
	static int32_t x120 = -1;
	volatile int32_t t26 = -254;

	t26 = (((x117+x118)<=x119)^x120);

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1;
	uint64_t x123 = 481370734LLU;

	t27 = (((x121+x122)<=x123)^x124);

	if (t27 != 254) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x126 = 2004U;
	volatile int32_t x128 = -1;

	t28 = (((x125+x126)<=x127)^x128);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = 13832437595LLU;
	volatile uint8_t x130 = 22U;
	int32_t x131 = INT32_MIN;
	uint32_t x132 = 1U;

	t29 = (((x129+x130)<=x131)^x132);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x133 = -13;
	uint64_t x135 = 138973009001360LLU;
	static int8_t x136 = 24;

	t30 = (((x133+x134)<=x135)^x136);

	if (t30 != 24) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = 0LL;
	int16_t x138 = -1;
	int64_t x139 = INT64_MAX;
	volatile int64_t t31 = -2LL;

	t31 = (((x137+x138)<=x139)^x140);

	if (t31 != 358LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = -1;
	static uint8_t x142 = 4U;
	volatile int8_t x143 = -23;
	volatile int32_t t32 = 1;

	t32 = (((x141+x142)<=x143)^x144);

	if (t32 != 57) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MIN;
	static int16_t x146 = INT16_MIN;
	static uint32_t x147 = 10757U;
	int64_t x148 = INT64_MIN;
	int64_t t33 = INT64_MIN;

	t33 = (((x145+x146)<=x147)^x148);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x151 = 3U;
	static int16_t x152 = -1;
	int32_t t34 = -24999;

	t34 = (((x149+x150)<=x151)^x152);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	int16_t x154 = INT16_MIN;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t35 = 38645;

	t35 = (((x153+x154)<=x155)^x156);

	if (t35 != 254) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = 383009776U;
	uint64_t x158 = UINT64_MAX;
	int64_t x159 = -1LL;
	int32_t x160 = -1;
	int32_t t36 = -48;

	t36 = (((x157+x158)<=x159)^x160);

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x162 = 0;
	int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MAX;
	volatile int64_t t37 = -3390284517928LL;

	t37 = (((x161+x162)<=x163)^x164);

	if (t37 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	int32_t x167 = -1;
	int8_t x168 = -1;
	int32_t t38 = 41426;

	t38 = (((x165+x166)<=x167)^x168);

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = 269875385589412234LL;
	int32_t x170 = INT32_MIN;
	uint8_t x172 = UINT8_MAX;
	int32_t t39 = -41349;

	t39 = (((x169+x170)<=x171)^x172);

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 782U;
	uint8_t x174 = UINT8_MAX;
	int8_t x175 = 2;
	int8_t x176 = -62;
	int32_t t40 = 113945723;

	t40 = (((x173+x174)<=x175)^x176);

	if (t40 != -62) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = 1;
	volatile uint8_t x182 = 18U;
	int64_t x183 = INT64_MIN;
	static int32_t x184 = -1;
	volatile int32_t t41 = 1176586;

	t41 = (((x181+x182)<=x183)^x184);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = -25172940;
	uint32_t x190 = 223U;
	static int64_t x191 = INT64_MIN;
	volatile uint64_t x192 = UINT64_MAX;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (((x189+x190)<=x191)^x192);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = 64U;
	uint8_t x194 = UINT8_MAX;
	int32_t x195 = INT32_MIN;
	volatile int64_t x196 = -1LL;

	t43 = (((x193+x194)<=x195)^x196);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = 65LLU;
	uint64_t x198 = UINT64_MAX;
	int32_t x199 = 3;
	volatile int8_t x200 = -26;
	int32_t t44 = 2946766;

	t44 = (((x197+x198)<=x199)^x200);

	if (t44 != -26) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x201 = UINT16_MAX;
	uint32_t x203 = 1438U;
	volatile uint32_t x204 = UINT32_MAX;
	static volatile uint32_t t45 = UINT32_MAX;

	t45 = (((x201+x202)<=x203)^x204);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MAX;
	volatile int32_t x206 = -22303;
	int32_t x207 = INT32_MIN;
	int8_t x208 = INT8_MAX;

	t46 = (((x205+x206)<=x207)^x208);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x209 = 1569U;
	static uint64_t x210 = UINT64_MAX;
	int16_t x211 = 0;
	int16_t x212 = INT16_MAX;

	t47 = (((x209+x210)<=x211)^x212);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = -9265;
	int64_t x214 = 51323009566173296LL;
	static volatile int16_t x215 = INT16_MIN;
	static volatile int64_t x216 = INT64_MIN;
	static int64_t t48 = INT64_MIN;

	t48 = (((x213+x214)<=x215)^x216);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = 2314622118LLU;
	static int32_t x219 = -264571771;
	volatile uint32_t x220 = 12346092U;
	volatile uint32_t t49 = 397758U;

	t49 = (((x217+x218)<=x219)^x220);

	if (t49 != 12346093U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x222 = 100645056U;
	volatile uint32_t x223 = 250252480U;
	int16_t x224 = 1561;

	t50 = (((x221+x222)<=x223)^x224);

	if (t50 != 1561) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x225 = -13;
	int16_t x226 = -432;
	static volatile int32_t x227 = -1;
	static int32_t x228 = INT32_MIN;
	int32_t t51 = 388;

	t51 = (((x225+x226)<=x227)^x228);

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = INT8_MAX;
	volatile int8_t x230 = -31;
	int16_t x231 = -9686;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (((x229+x230)<=x231)^x232);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x234 = INT64_MAX;
	volatile int64_t t53 = INT64_MAX;

	t53 = (((x233+x234)<=x235)^x236);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MIN;
	static volatile uint64_t x238 = UINT64_MAX;
	int64_t x239 = -74LL;
	int64_t x240 = 194257LL;
	static volatile int64_t t54 = 1022859361170001LL;

	t54 = (((x237+x238)<=x239)^x240);

	if (t54 != 194256LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -333310278;
	uint16_t x243 = 28853U;
	uint16_t x244 = 475U;
	volatile int32_t t55 = -466;

	t55 = (((x241+x242)<=x243)^x244);

	if (t55 != 474) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = 18;
	int64_t x248 = INT64_MIN;
	int64_t t56 = INT64_MIN;

	t56 = (((x245+x246)<=x247)^x248);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = 580766692263253LL;
	volatile int16_t x250 = INT16_MIN;
	int64_t x251 = INT64_MIN;
	uint16_t x252 = 7U;
	int32_t t57 = 1777918;

	t57 = (((x249+x250)<=x251)^x252);

	if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x253 = UINT32_MAX;
	static volatile uint64_t x254 = 11LLU;
	int64_t x255 = -1LL;
	volatile uint64_t t58 = 14LLU;

	t58 = (((x253+x254)<=x255)^x256);

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 8U;
	static uint16_t x258 = UINT16_MAX;
	uint32_t x259 = 0U;
	uint16_t x260 = 2754U;

	t59 = (((x257+x258)<=x259)^x260);

	if (t59 != 2754) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x265 = 260200275LLU;
	volatile int16_t x267 = 4;
	uint64_t x268 = 1400074LLU;
	volatile uint64_t t60 = 114645175530291LLU;

	t60 = (((x265+x266)<=x267)^x268);

	if (t60 != 1400074LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = 13913426689LL;
	static volatile uint32_t x270 = 418028289U;
	int8_t x271 = -1;
	int64_t t61 = INT64_MAX;

	t61 = (((x269+x270)<=x271)^x272);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x273 = 26;
	int8_t x274 = -1;
	int16_t x275 = -10052;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (((x273+x274)<=x275)^x276);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x277 = UINT8_MAX;
	volatile uint8_t x278 = 0U;
	int64_t x279 = INT64_MAX;
	uint32_t x280 = 2U;
	uint32_t t63 = 1U;

	t63 = (((x277+x278)<=x279)^x280);

	if (t63 != 3U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x281 = 89LLU;
	static volatile uint64_t x282 = 1508661041LLU;
	int8_t x284 = -1;
	volatile int32_t t64 = -52368;

	t64 = (((x281+x282)<=x283)^x284);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x286 = UINT16_MAX;
	int32_t x287 = INT32_MAX;
	uint8_t x288 = 1U;
	static volatile int32_t t65 = -255922629;

	t65 = (((x285+x286)<=x287)^x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = INT64_MIN;
	volatile uint8_t x290 = UINT8_MAX;
	int32_t x291 = 173541420;
	int32_t t66 = 80543;

	t66 = (((x289+x290)<=x291)^x292);

	if (t66 != 32766) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x294 = UINT32_MAX;
	int64_t x295 = INT64_MIN;
	volatile int8_t x296 = INT8_MIN;
	int32_t t67 = 5802;

	t67 = (((x293+x294)<=x295)^x296);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x301 = UINT8_MAX;
	int32_t x303 = -110100428;
	int32_t x304 = INT32_MAX;

	t68 = (((x301+x302)<=x303)^x304);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x305 = 344554820471632093LLU;
	volatile uint32_t x306 = UINT32_MAX;
	int32_t x307 = INT32_MAX;
	uint64_t x308 = 63LLU;
	volatile uint64_t t69 = 47270463890LLU;

	t69 = (((x305+x306)<=x307)^x308);

	if (t69 != 63LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x311 = UINT64_MAX;
	uint8_t x312 = UINT8_MAX;

	t70 = (((x309+x310)<=x311)^x312);

	if (t70 != 254) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x313 = 1244900849LLU;
	int8_t x314 = 4;
	volatile uint64_t x315 = UINT64_MAX;
	static int8_t x316 = INT8_MAX;

	t71 = (((x313+x314)<=x315)^x316);

	if (t71 != 126) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x318 = 25U;
	int16_t x319 = -5896;
	uint8_t x320 = UINT8_MAX;
	static int32_t t72 = 0;

	t72 = (((x317+x318)<=x319)^x320);

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = -218;
	static int16_t x322 = -1;
	volatile int16_t x323 = 284;
	int64_t x324 = 937546043899LL;
	volatile int64_t t73 = 637348009000LL;

	t73 = (((x321+x322)<=x323)^x324);

	if (t73 != 937546043898LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = INT32_MAX;
	volatile int32_t x326 = INT32_MIN;
	uint32_t x327 = UINT32_MAX;
	volatile int32_t t74 = -11;

	t74 = (((x325+x326)<=x327)^x328);

	if (t74 != 27791) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x329 = INT16_MAX;
	int32_t x330 = 0;
	static volatile uint32_t x332 = UINT32_MAX;
	uint32_t t75 = UINT32_MAX;

	t75 = (((x329+x330)<=x331)^x332);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = -664845520090753LL;
	static int8_t x334 = INT8_MAX;
	uint64_t x336 = UINT64_MAX;
	uint64_t t76 = 1036076738LLU;

	t76 = (((x333+x334)<=x335)^x336);

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x338 = INT32_MIN;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = -1;
	volatile int32_t t77 = 318;

	t77 = (((x337+x338)<=x339)^x340);

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = INT64_MIN;
	volatile uint64_t x342 = 3177410954375178775LLU;
	volatile int8_t x343 = INT8_MIN;
	uint64_t x344 = 65039188213539LLU;
	volatile uint64_t t78 = 4271224656574LLU;

	t78 = (((x341+x342)<=x343)^x344);

	if (t78 != 65039188213538LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x346 = 0;
	static int64_t x347 = 235LL;
	uint32_t x348 = 2U;
	uint32_t t79 = 22U;

	t79 = (((x345+x346)<=x347)^x348);

	if (t79 != 3U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = 0;
	int64_t x350 = INT64_MIN;
	uint32_t x351 = 825U;
	int64_t x352 = INT64_MIN;
	int64_t t80 = 467834700002LL;

	t80 = (((x349+x350)<=x351)^x352);

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x354 = INT8_MAX;
	int64_t x355 = -56513552127LL;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t81 = -144;

	t81 = (((x353+x354)<=x355)^x356);

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	volatile int32_t x360 = INT32_MIN;

	t82 = (((x357+x358)<=x359)^x360);

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x361 = INT64_MIN;
	uint8_t x362 = UINT8_MAX;
	volatile uint32_t t83 = 96598525U;

	t83 = (((x361+x362)<=x363)^x364);

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = INT8_MIN;
	static int8_t x366 = -48;
	volatile int32_t x367 = -1;
	int8_t x368 = 10;

	t84 = (((x365+x366)<=x367)^x368);

	if (t84 != 11) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x370 = -97;
	static volatile uint64_t x371 = 1LLU;
	volatile int32_t t85 = -234222;

	t85 = (((x369+x370)<=x371)^x372);

	if (t85 != 7) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = INT32_MIN;
	uint64_t x374 = 178491086593LLU;
	volatile uint32_t x375 = 35U;
	volatile int32_t t86 = -550673036;

	t86 = (((x373+x374)<=x375)^x376);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x378 = 8U;
	int32_t x379 = -7330637;
	uint16_t x380 = UINT16_MAX;
	int32_t t87 = 1;

	t87 = (((x377+x378)<=x379)^x380);

	if (t87 != 65534) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = -1LL;
	int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;
	int64_t x384 = -4738850581LL;
	int64_t t88 = -436747052481660396LL;

	t88 = (((x381+x382)<=x383)^x384);

	if (t88 != -4738850582LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = -1;
	volatile int32_t t89 = -30098;

	t89 = (((x385+x386)<=x387)^x388);

	if (t89 != 105) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x389 = 496200;
	int16_t x390 = 3;
	static int8_t x391 = INT8_MAX;
	int64_t x392 = INT64_MAX;
	int64_t t90 = INT64_MAX;

	t90 = (((x389+x390)<=x391)^x392);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x395 = 3U;
	int32_t t91 = 16;

	t91 = (((x393+x394)<=x395)^x396);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = 5;
	int32_t x402 = 30755806;
	volatile int32_t x404 = INT32_MIN;
	static volatile int32_t t92 = INT32_MIN;

	t92 = (((x401+x402)<=x403)^x404);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x410 = INT64_MIN;
	uint64_t x412 = 395115585816072LLU;
	volatile uint64_t t93 = 1187704812LLU;

	t93 = (((x409+x410)<=x411)^x412);

	if (t93 != 395115585816073LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x413 = UINT32_MAX;
	uint16_t x414 = UINT16_MAX;
	volatile int64_t x415 = INT64_MAX;
	int32_t t94 = 10633402;

	t94 = (((x413+x414)<=x415)^x416);

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x417 = 194047;
	static int16_t x418 = 98;
	int8_t x419 = 3;
	int64_t x420 = INT64_MAX;
	int64_t t95 = INT64_MAX;

	t95 = (((x417+x418)<=x419)^x420);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x428 = -792;
	volatile int32_t t96 = -227;

	t96 = (((x425+x426)<=x427)^x428);

	if (t96 != -791) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x430 = -3;
	static int16_t x432 = INT16_MAX;
	volatile int32_t t97 = -7;

	t97 = (((x429+x430)<=x431)^x432);

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x433 = INT32_MIN;
	uint64_t x435 = UINT64_MAX;
	int32_t x436 = INT32_MIN;
	volatile int32_t t98 = 12;

	t98 = (((x433+x434)<=x435)^x436);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x437 = -1;
	uint16_t x438 = 7U;
	int32_t x440 = INT32_MAX;
	int32_t t99 = 87;

	t99 = (((x437+x438)<=x439)^x440);

	if (t99 != 2147483646) { NG(); } else { ; }
	
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

