#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
volatile int32_t t1 = 935994175;
uint64_t x11 = 130LLU;
volatile uint16_t x19 = 12U;
int16_t x22 = INT16_MIN;
int32_t t6 = 10998826;
volatile uint8_t x33 = 20U;
uint32_t x36 = 27U;
static int8_t x41 = INT8_MIN;
static uint64_t x45 = UINT64_MAX;
volatile int32_t t11 = 59;
volatile int32_t t13 = 7428719;
static uint64_t x57 = UINT64_MAX;
int32_t x61 = 115081590;
int64_t x64 = INT64_MIN;
uint16_t x79 = 16U;
int32_t t20 = -14;
uint64_t x85 = 3794709215480LLU;
int32_t x90 = INT32_MIN;
volatile uint64_t x94 = UINT64_MAX;
static int16_t x95 = INT16_MIN;
static int8_t x104 = INT8_MIN;
int32_t t25 = 466524090;
int64_t x115 = INT64_MAX;
int8_t x118 = INT8_MIN;
volatile int32_t t29 = -490;
int32_t t30 = -1088;
int64_t x132 = INT64_MIN;
int64_t x137 = INT64_MAX;
volatile int64_t x143 = INT64_MAX;
uint64_t x144 = 3333346163491796427LLU;
uint32_t x149 = 90995U;
volatile int64_t x150 = -24158931752733LL;
volatile int8_t x153 = INT8_MIN;
int64_t x155 = INT64_MAX;
uint32_t x156 = 3U;
int8_t x162 = -1;
int16_t x169 = INT16_MAX;
volatile uint16_t x171 = UINT16_MAX;
int32_t t42 = 1442204;
static int64_t x180 = INT64_MAX;
static volatile int32_t t45 = 206699449;
static int16_t x194 = INT16_MIN;
uint32_t x196 = 175628U;
int8_t x211 = INT8_MIN;
int16_t x212 = -1;
static volatile int32_t t52 = -172317193;
int8_t x218 = 0;
int64_t x219 = 303LL;
int32_t t54 = 40;
volatile uint8_t x221 = UINT8_MAX;
static int16_t x224 = -1;
volatile int32_t x232 = 1235032;
static int16_t x234 = -1;
int32_t x239 = -708;
volatile int32_t x240 = INT32_MAX;
int64_t x249 = INT64_MIN;
int32_t t62 = -19;
volatile int16_t x254 = -1113;
volatile int32_t t63 = -4768;
static int32_t x263 = 159203416;
int8_t x265 = INT8_MIN;
volatile int16_t x271 = INT16_MAX;
int64_t x273 = INT64_MAX;
int32_t x276 = -7;
uint16_t x279 = 813U;
int32_t x284 = INT32_MIN;
int32_t t70 = 90;
static int32_t t72 = 383353777;
int32_t x295 = -16242;
int32_t t73 = -38;
volatile int32_t x298 = 25;
int8_t x299 = -2;
int64_t x313 = INT64_MIN;
uint64_t x328 = 7144034419506LLU;
int32_t x330 = 2;
static int32_t t82 = 1;
int32_t x335 = -476;
uint32_t x336 = UINT32_MAX;
static int16_t x341 = INT16_MAX;
volatile int8_t x342 = INT8_MIN;
int8_t x347 = -10;
static volatile int32_t t86 = 422296;
int32_t x349 = INT32_MIN;
int8_t x352 = INT8_MAX;
uint8_t x355 = 6U;
static int8_t x361 = -1;
volatile int8_t x367 = 1;
static int16_t x368 = INT16_MIN;
volatile int32_t t91 = 1;
int32_t x370 = 116731;
int16_t x372 = INT16_MIN;
volatile int32_t t92 = 26;
int32_t x381 = 1548864;
int16_t x391 = -9;
volatile int64_t x392 = INT64_MIN;
volatile int32_t t98 = 224779015;
int16_t x400 = INT16_MAX;
static int32_t t99 = 14143810;


void f0(void) {
	volatile int8_t x1 = -4;
	int16_t x2 = 15;
	static int32_t x3 = -1;
	volatile int32_t t0 = -1475275;

	t0 = (((x1^x2)<=x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -248;
	int64_t x6 = INT64_MAX;
	static volatile int32_t x7 = INT32_MIN;
	int32_t x8 = 2;

	t1 = (((x5^x6)<=x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 44U;
	uint16_t x10 = 0U;
	uint8_t x12 = 14U;
	static int32_t t2 = -1862;

	t2 = (((x9^x10)<=x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	volatile int16_t x14 = 27;
	uint8_t x15 = UINT8_MAX;
	uint64_t x16 = 3930069999432612807LLU;
	int32_t t3 = 3895;

	t3 = (((x13^x14)<=x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 15U;
	uint16_t x18 = UINT16_MAX;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -2054463;

	t4 = (((x17^x18)<=x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	uint64_t x23 = 101LLU;
	uint64_t x24 = 592127342LLU;
	int32_t t5 = 2014143;

	t5 = (((x21^x22)<=x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x25 = 333452055U;
	volatile uint16_t x26 = UINT16_MAX;
	static int16_t x27 = 105;
	uint64_t x28 = 614087679LLU;

	t6 = (((x25^x26)<=x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	int64_t x32 = INT64_MAX;
	int32_t t7 = -349354261;

	t7 = (((x29^x30)<=x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x34 = 1580405465LLU;
	static int8_t x35 = INT8_MAX;
	static volatile int32_t t8 = 1265429;

	t8 = (((x33^x34)<=x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MAX;
	int32_t x38 = INT32_MAX;
	static uint32_t x39 = UINT32_MAX;
	int8_t x40 = 29;
	int32_t t9 = 97;

	t9 = (((x37^x38)<=x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = 993LL;
	uint8_t x43 = 41U;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -61251;

	t10 = (((x41^x42)<=x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 502U;
	uint32_t x47 = 128U;
	uint32_t x48 = 8063853U;

	t11 = (((x45^x46)<=x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 51U;
	int32_t x50 = INT32_MIN;
	int16_t x51 = INT16_MAX;
	int32_t x52 = -5297285;
	int32_t t12 = -6858;

	t12 = (((x49^x50)<=x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = UINT32_MAX;
	volatile uint8_t x54 = 15U;
	static int32_t x55 = -1;
	int32_t x56 = 168;

	t13 = (((x53^x54)<=x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = 1417203841431931LL;
	static volatile int8_t x59 = -1;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 225786287;

	t14 = (((x57^x58)<=x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x62 = INT16_MAX;
	static volatile int8_t x63 = 0;
	int32_t t15 = 1;

	t15 = (((x61^x62)<=x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	static int32_t x66 = 102848;
	int8_t x67 = -1;
	int32_t x68 = -1;
	volatile int32_t t16 = 3866780;

	t16 = (((x65^x66)<=x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	static int64_t x70 = 12832LL;
	static uint64_t x71 = 1433902598LLU;
	volatile int64_t x72 = INT64_MAX;
	volatile int32_t t17 = 1039983492;

	t17 = (((x69^x70)<=x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MAX;
	int32_t x75 = INT32_MAX;
	int16_t x76 = 5;
	volatile int32_t t18 = 36;

	t18 = (((x73^x74)<=x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -1;
	int8_t x78 = -1;
	static int8_t x80 = INT8_MIN;
	static int32_t t19 = -48502;

	t19 = (((x77^x78)<=x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = -1;
	volatile int8_t x83 = INT8_MAX;
	int16_t x84 = -3;

	t20 = (((x81^x82)<=x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = 336;
	static int32_t x87 = 24;
	int32_t x88 = -203618;
	volatile int32_t t21 = 52560;

	t21 = (((x85^x86)<=x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	uint64_t x91 = 47910011094358423LLU;
	int32_t x92 = INT32_MAX;
	volatile int32_t t22 = 0;

	t22 = (((x89^x90)<=x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	static uint16_t x96 = 1U;
	volatile int32_t t23 = 15010;

	t23 = (((x93^x94)<=x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 16639512U;
	int8_t x98 = -42;
	volatile uint8_t x99 = 5U;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -121;

	t24 = (((x97^x98)<=x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = UINT16_MAX;
	volatile uint16_t x102 = 5629U;
	static int16_t x103 = INT16_MIN;

	t25 = (((x101^x102)<=x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = 207111581440835LLU;
	static uint8_t x106 = 60U;
	int16_t x107 = INT16_MAX;
	static volatile int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -1352;

	t26 = (((x105^x106)<=x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	static volatile uint8_t x110 = 9U;
	uint64_t x111 = 695945172613754880LLU;
	static int16_t x112 = 13;
	static int32_t t27 = -435876;

	t27 = (((x109^x110)<=x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x113 = 36256442596140LLU;
	uint16_t x114 = 1603U;
	static uint64_t x116 = 325LLU;
	volatile int32_t t28 = 8446197;

	t28 = (((x113^x114)<=x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 2;
	volatile int32_t x119 = -1062;
	int64_t x120 = 394LL;

	t29 = (((x117^x118)<=x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	volatile uint16_t x122 = 0U;
	int32_t x123 = -2502;
	uint32_t x124 = UINT32_MAX;

	t30 = (((x121^x122)<=x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	int8_t x126 = 3;
	int64_t x127 = -1LL;
	static int64_t x128 = 5012196330692268LL;
	int32_t t31 = -15;

	t31 = (((x125^x126)<=x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 0LL;
	uint64_t x130 = 1122758LLU;
	static int16_t x131 = INT16_MAX;
	int32_t t32 = -477;

	t32 = (((x129^x130)<=x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	int64_t x134 = INT64_MIN;
	uint32_t x135 = 104411186U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = 634801;

	t33 = (((x133^x134)<=x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -15LL;
	static int64_t x139 = INT64_MIN;
	volatile uint8_t x140 = UINT8_MAX;
	static int32_t t34 = 3741529;

	t34 = (((x137^x138)<=x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	int16_t x142 = INT16_MIN;
	int32_t t35 = 61324;

	t35 = (((x141^x142)<=x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	uint8_t x146 = 3U;
	int8_t x147 = INT8_MAX;
	static uint32_t x148 = 0U;
	int32_t t36 = 5887;

	t36 = (((x145^x146)<=x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x151 = 3858;
	uint32_t x152 = 1381407904U;
	int32_t t37 = 52832008;

	t37 = (((x149^x150)<=x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x154 = 2028405452LL;
	int32_t t38 = 494828351;

	t38 = (((x153^x154)<=x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 5U;
	volatile int8_t x158 = 0;
	int32_t x159 = INT32_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -241501;

	t39 = (((x157^x158)<=x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = 33U;
	static uint32_t x163 = 6U;
	int8_t x164 = INT8_MAX;
	int32_t t40 = 5;

	t40 = (((x161^x162)<=x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = UINT16_MAX;
	int32_t x166 = INT32_MAX;
	uint8_t x167 = 39U;
	uint16_t x168 = UINT16_MAX;
	int32_t t41 = 896313;

	t41 = (((x165^x166)<=x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = INT16_MIN;
	volatile uint8_t x172 = 76U;

	t42 = (((x169^x170)<=x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = 542;
	static int32_t x174 = INT32_MAX;
	uint32_t x175 = 1U;
	uint16_t x176 = UINT16_MAX;
	int32_t t43 = 1;

	t43 = (((x173^x174)<=x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 0;
	volatile int16_t x178 = INT16_MAX;
	int8_t x179 = 1;
	int32_t t44 = -76189;

	t44 = (((x177^x178)<=x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 2U;
	uint32_t x182 = UINT32_MAX;
	uint16_t x183 = UINT16_MAX;
	int32_t x184 = INT32_MIN;

	t45 = (((x181^x182)<=x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MIN;
	volatile int16_t x187 = -7608;
	volatile int8_t x188 = -1;
	int32_t t46 = 13268;

	t46 = (((x185^x186)<=x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 2;
	volatile uint32_t x190 = UINT32_MAX;
	int16_t x191 = 7451;
	uint32_t x192 = UINT32_MAX;
	volatile int32_t t47 = 1991653;

	t47 = (((x189^x190)<=x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	uint8_t x195 = UINT8_MAX;
	int32_t t48 = 217178;

	t48 = (((x193^x194)<=x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MAX;
	volatile int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MAX;
	volatile int16_t x200 = INT16_MIN;
	int32_t t49 = -116097441;

	t49 = (((x197^x198)<=x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = UINT32_MAX;
	volatile int64_t x202 = INT64_MAX;
	uint8_t x203 = 1U;
	volatile uint32_t x204 = 1U;
	volatile int32_t t50 = -474196334;

	t50 = (((x201^x202)<=x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 17396U;
	uint32_t x206 = UINT32_MAX;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = UINT16_MAX;
	int32_t t51 = 554191116;

	t51 = (((x205^x206)<=x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -27;
	volatile uint32_t x210 = 7535U;

	t52 = (((x209^x210)<=x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 0;
	volatile int8_t x214 = INT8_MAX;
	int16_t x215 = -1138;
	uint32_t x216 = 172898U;
	volatile int32_t t53 = 509508;

	t53 = (((x213^x214)<=x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	uint32_t x220 = 108016U;

	t54 = (((x217^x218)<=x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = 1;
	static int16_t x223 = INT16_MIN;
	volatile int32_t t55 = -17406299;

	t55 = (((x221^x222)<=x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = 59U;
	static int8_t x226 = 2;
	uint8_t x227 = 62U;
	int16_t x228 = INT16_MAX;
	volatile int32_t t56 = 7455;

	t56 = (((x225^x226)<=x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = 3111LLU;
	static int8_t x230 = INT8_MAX;
	static int16_t x231 = 0;
	static int32_t t57 = 5834604;

	t57 = (((x229^x230)<=x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	int32_t x235 = INT32_MIN;
	uint64_t x236 = 24440LLU;
	volatile int32_t t58 = -88723;

	t58 = (((x233^x234)<=x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	int32_t t59 = 3863844;

	t59 = (((x237^x238)<=x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	uint16_t x242 = 4U;
	int64_t x243 = -1LL;
	int16_t x244 = INT16_MAX;
	int32_t t60 = -824335280;

	t60 = (((x241^x242)<=x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MAX;
	volatile int32_t t61 = 48041;

	t61 = (((x245^x246)<=x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = INT16_MIN;
	volatile int32_t x251 = 1;
	int32_t x252 = INT32_MIN;

	t62 = (((x249^x250)<=x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 1;
	int64_t x255 = INT64_MAX;
	static int16_t x256 = -1;

	t63 = (((x253^x254)<=x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = 6375U;
	int16_t x258 = INT16_MIN;
	static uint8_t x259 = 5U;
	int64_t x260 = INT64_MIN;
	volatile int32_t t64 = 3225;

	t64 = (((x257^x258)<=x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	static volatile int8_t x262 = INT8_MAX;
	uint8_t x264 = 109U;
	int32_t t65 = -8593774;

	t65 = (((x261^x262)<=x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x266 = UINT64_MAX;
	int32_t x267 = -1;
	uint8_t x268 = UINT8_MAX;
	int32_t t66 = 43529;

	t66 = (((x265^x266)<=x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	static int8_t x270 = 0;
	int8_t x272 = -10;
	volatile int32_t t67 = -9;

	t67 = (((x269^x270)<=x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = 1;
	int32_t x275 = INT32_MIN;
	volatile int32_t t68 = -35014109;

	t68 = (((x273^x274)<=x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MIN;
	int16_t x280 = -1;
	volatile int32_t t69 = -10611;

	t69 = (((x277^x278)<=x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 7492877727282887519LLU;
	int16_t x282 = -1;
	uint8_t x283 = 27U;

	t70 = (((x281^x282)<=x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 0;
	volatile uint16_t x286 = 13U;
	uint64_t x287 = 1130853LLU;
	volatile int32_t x288 = -1;
	volatile int32_t t71 = -3;

	t71 = (((x285^x286)<=x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int8_t x290 = -1;
	int32_t x291 = 51479217;
	uint8_t x292 = 51U;

	t72 = (((x289^x290)<=x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = 556512578LLU;
	uint64_t x294 = UINT64_MAX;
	uint32_t x296 = UINT32_MAX;

	t73 = (((x293^x294)<=x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = 110;
	int32_t x300 = INT32_MAX;
	static volatile int32_t t74 = 0;

	t74 = (((x297^x298)<=x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -34;
	int64_t x302 = INT64_MAX;
	volatile uint32_t x303 = UINT32_MAX;
	static int8_t x304 = INT8_MIN;
	static volatile int32_t t75 = 15;

	t75 = (((x301^x302)<=x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = -3;
	int64_t x306 = 14845243203LL;
	static uint8_t x307 = UINT8_MAX;
	int32_t x308 = -1;
	int32_t t76 = 205;

	t76 = (((x305^x306)<=x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = INT8_MIN;
	volatile int16_t x310 = 7768;
	int64_t x311 = -1LL;
	volatile int16_t x312 = 1638;
	volatile int32_t t77 = 326094402;

	t77 = (((x309^x310)<=x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = 3;
	static volatile int32_t x315 = -1;
	int32_t x316 = INT32_MIN;
	static int32_t t78 = -3071811;

	t78 = (((x313^x314)<=x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 6U;
	uint8_t x318 = 3U;
	int64_t x319 = INT64_MIN;
	static volatile int64_t x320 = -6569291723162091LL;
	int32_t t79 = 34770677;

	t79 = (((x317^x318)<=x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = -1;
	uint8_t x322 = 6U;
	volatile int32_t x323 = -1;
	uint16_t x324 = 8U;
	volatile int32_t t80 = 121186970;

	t80 = (((x321^x322)<=x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	int8_t x326 = -1;
	int64_t x327 = -1LL;
	volatile int32_t t81 = -6280052;

	t81 = (((x325^x326)<=x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	static int32_t x331 = -1;
	static volatile int16_t x332 = -15114;

	t82 = (((x329^x330)<=x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	int32_t t83 = -691;

	t83 = (((x333^x334)<=x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 84531205U;
	int64_t x338 = INT64_MAX;
	int8_t x339 = -1;
	int8_t x340 = INT8_MAX;
	volatile int32_t t84 = -257;

	t84 = (((x337^x338)<=x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MIN;
	int32_t t85 = -58001640;

	t85 = (((x341^x342)<=x343)<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = 1;
	int8_t x346 = -6;
	uint8_t x348 = 3U;

	t86 = (((x345^x346)<=x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x350 = UINT8_MAX;
	static volatile int16_t x351 = INT16_MAX;
	volatile int32_t t87 = -46;

	t87 = (((x349^x350)<=x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	int16_t x354 = 18;
	int64_t x356 = -1LL;
	int32_t t88 = -1;

	t88 = (((x353^x354)<=x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	static int64_t x358 = INT64_MIN;
	uint32_t x359 = 1952U;
	uint16_t x360 = 1327U;
	volatile int32_t t89 = -21823;

	t89 = (((x357^x358)<=x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MAX;
	uint8_t x363 = 2U;
	volatile int16_t x364 = -1;
	static int32_t t90 = 12;

	t90 = (((x361^x362)<=x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x365 = INT16_MIN;
	static uint64_t x366 = 4398216398957LLU;

	t91 = (((x365^x366)<=x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 59U;
	uint64_t x371 = UINT64_MAX;

	t92 = (((x369^x370)<=x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -883;
	uint16_t x374 = 577U;
	volatile uint32_t x375 = 1U;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = 14;

	t93 = (((x373^x374)<=x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 13939U;
	uint16_t x378 = UINT16_MAX;
	uint32_t x379 = 31212524U;
	uint32_t x380 = 8U;
	int32_t t94 = -15890151;

	t94 = (((x377^x378)<=x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -59;
	uint64_t x383 = 3961343324LLU;
	int16_t x384 = -1;
	volatile int32_t t95 = -21557;

	t95 = (((x381^x382)<=x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int32_t x386 = -1;
	int8_t x387 = INT8_MIN;
	static int32_t x388 = INT32_MIN;
	int32_t t96 = -233;

	t96 = (((x385^x386)<=x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = 144932;
	int32_t x390 = -14;
	volatile int32_t t97 = 4;

	t97 = (((x389^x390)<=x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = INT8_MAX;
	static volatile int32_t x394 = INT32_MIN;
	static uint16_t x395 = UINT16_MAX;
	volatile uint8_t x396 = 5U;

	t98 = (((x393^x394)<=x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = 574U;
	uint8_t x399 = UINT8_MAX;

	t99 = (((x397^x398)<=x399)<=x400);

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

