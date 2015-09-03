#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = -1LL;
int64_t x8 = -151741898730LL;
int32_t x20 = 14;
int64_t t6 = 1069955678953835979LL;
static volatile int16_t x30 = -3;
int64_t x33 = -105533680LL;
volatile int16_t x43 = INT16_MIN;
int16_t x48 = INT16_MAX;
volatile int16_t x49 = -1;
uint8_t x51 = UINT8_MAX;
int64_t x54 = -8130LL;
int16_t x57 = 0;
volatile int32_t x64 = -1;
int16_t x65 = 8074;
volatile uint32_t x66 = 3101U;
uint16_t x68 = 6348U;
int16_t x72 = INT16_MAX;
int64_t x75 = -1LL;
int8_t x77 = INT8_MIN;
static volatile uint8_t x83 = 4U;
uint32_t x86 = 7946821U;
static int64_t x94 = -1LL;
int16_t x96 = 7250;
static uint64_t t22 = 700LLU;
int8_t x111 = INT8_MIN;
static int32_t x119 = 10616;
int8_t x124 = INT8_MIN;
int32_t t31 = 248336;
uint16_t x138 = 1390U;
int32_t x144 = INT32_MIN;
int64_t t35 = 297780848LL;
static int16_t x163 = INT16_MIN;
volatile int16_t x168 = -119;
int16_t x169 = 775;
static int64_t t41 = INT64_MIN;
int32_t x193 = INT32_MIN;
uint32_t x195 = 120436484U;
static int8_t x197 = INT8_MAX;
volatile int64_t t45 = 3668320532578520360LL;
volatile int64_t t46 = 3261528LL;
static int32_t x205 = -1;
int32_t t47 = 1373098;
int8_t x210 = INT8_MIN;
volatile int64_t t48 = 56LL;
volatile int64_t x214 = INT64_MIN;
int16_t x216 = -1;
int32_t x218 = INT32_MIN;
uint16_t x220 = 3U;
uint32_t x221 = 455584U;
volatile uint64_t x224 = UINT64_MAX;
uint32_t x228 = 6570617U;
uint64_t t53 = UINT64_MAX;
static uint8_t x235 = UINT8_MAX;
int32_t x236 = INT32_MIN;
static int64_t x240 = -7768253383LL;
int64_t x251 = -1LL;
static volatile int64_t t58 = 3136939595064LL;
int64_t x255 = INT64_MAX;
uint32_t x256 = 1753782785U;
uint16_t x257 = 882U;
int16_t x258 = -14;
static uint32_t x262 = UINT32_MAX;
int64_t x264 = INT64_MAX;
static uint16_t x267 = 13U;
volatile uint16_t x270 = UINT16_MAX;
static uint16_t x271 = 9U;
int64_t x277 = -1LL;
int64_t x278 = -930118383505475LL;
uint64_t x279 = 64592LLU;
static volatile uint16_t x281 = UINT16_MAX;
int32_t t66 = INT32_MIN;
uint16_t x292 = UINT16_MAX;
int64_t t68 = -4569505949122LL;
int16_t x299 = -1;
uint16_t x302 = UINT16_MAX;
volatile int32_t x303 = INT32_MAX;
uint64_t x305 = 114877623368725739LLU;
volatile uint64_t t72 = 164128149716611LLU;
int8_t x315 = INT8_MIN;
int32_t t74 = -919;
int16_t x329 = 0;
volatile int64_t t80 = 393795LL;
int16_t x346 = -2163;
int16_t x350 = INT16_MIN;
static uint64_t x358 = 15881838151743398LLU;
uint16_t x363 = 6U;
static uint32_t t85 = 1835525713U;
uint16_t x376 = 5U;
static uint32_t x377 = UINT32_MAX;
int8_t x378 = INT8_MIN;
int32_t x382 = INT32_MAX;
uint32_t x396 = UINT32_MAX;
static volatile int64_t x399 = INT64_MIN;
uint64_t t94 = 41LLU;
volatile int64_t x406 = -1LL;
int8_t x407 = INT8_MIN;
volatile uint32_t x415 = UINT32_MAX;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	int16_t x3 = 1;
	static volatile int8_t x4 = INT8_MAX;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = ((x1&(x2/x3))|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint8_t x6 = UINT8_MAX;
	int64_t x7 = INT64_MIN;
	volatile int64_t t1 = 11LL;

	t1 = ((x5&(x6/x7))|x8);

	if (t1 != -151741898730LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int32_t x10 = 56;
	int64_t x11 = -1LL;
	static volatile int32_t x12 = INT32_MIN;
	int64_t t2 = 0LL;

	t2 = ((x9&(x10/x11))|x12);

	if (t2 != -56LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int8_t x14 = INT8_MAX;
	volatile uint8_t x15 = 25U;
	volatile uint16_t x16 = 1368U;
	int32_t t3 = 1;

	t3 = ((x13&(x14/x15))|x16);

	if (t3 != 1373) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -13;
	uint32_t x18 = 63913U;
	int16_t x19 = -1;
	uint32_t t4 = 138385U;

	t4 = ((x17&(x18/x19))|x20);

	if (t4 != 14U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	volatile int32_t x22 = -99;
	int16_t x23 = INT16_MIN;
	int8_t x24 = 1;
	int32_t t5 = -65568648;

	t5 = ((x21&(x22/x23))|x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int64_t x26 = -5354884106160LL;
	uint32_t x27 = 486884U;
	volatile int64_t x28 = -256704816525242739LL;

	t6 = ((x25&(x26/x27))|x28);

	if (t6 != -422259LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int8_t x31 = -2;
	static int32_t x32 = INT32_MAX;
	static volatile int32_t t7 = INT32_MAX;

	t7 = ((x29&(x30/x31))|x32);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MAX;
	static uint16_t x35 = UINT16_MAX;
	static int8_t x36 = INT8_MIN;
	volatile int64_t t8 = -15499736134186764LL;

	t8 = ((x33&(x34/x35))|x36);

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	int64_t x42 = INT64_MIN;
	uint16_t x44 = UINT16_MAX;
	static int64_t t9 = 24488691942LL;

	t9 = ((x41&(x42/x43))|x44);

	if (t9 != 65535LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = INT8_MIN;
	static volatile int32_t x46 = -1;
	int32_t x47 = 7760;
	static int32_t t10 = -307910;

	t10 = ((x45&(x46/x47))|x48);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x50 = 13LLU;
	uint32_t x52 = 129110U;
	volatile uint64_t t11 = 2657783148968LLU;

	t11 = ((x49&(x50/x51))|x52);

	if (t11 != 129110LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MIN;
	int64_t x55 = -1LL;
	static uint8_t x56 = 34U;
	int64_t t12 = 2499215885236LL;

	t12 = ((x53&(x54/x55))|x56);

	if (t12 != 34LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = INT16_MIN;
	volatile uint8_t x59 = 18U;
	uint32_t x60 = UINT32_MAX;
	static volatile uint32_t t13 = UINT32_MAX;

	t13 = ((x57&(x58/x59))|x60);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 4U;
	int32_t x62 = -19;
	static uint16_t x63 = 217U;
	volatile int32_t t14 = 1070157;

	t14 = ((x61&(x62/x63))|x64);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x67 = 24786;
	uint32_t t15 = 423462686U;

	t15 = ((x65&(x66/x67))|x68);

	if (t15 != 6348U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = -7;
	static uint8_t x70 = 12U;
	int64_t x71 = 4194616756LL;
	int64_t t16 = 115969750391727LL;

	t16 = ((x69&(x70/x71))|x72);

	if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = INT64_MIN;
	int16_t x74 = INT16_MIN;
	uint8_t x76 = 5U;
	volatile int64_t t17 = 3842624500LL;

	t17 = ((x73&(x74/x75))|x76);

	if (t17 != 5LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x78 = INT8_MIN;
	uint8_t x79 = 1U;
	int16_t x80 = -2673;
	int32_t t18 = -59655;

	t18 = ((x77&(x78/x79))|x80);

	if (t18 != -113) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 7U;
	static uint16_t x82 = 5U;
	static int32_t x84 = -30863310;
	volatile int32_t t19 = 496;

	t19 = ((x81&(x82/x83))|x84);

	if (t19 != -30863309) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = -1;
	int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MIN;
	static int64_t t20 = 1658643LL;

	t20 = ((x85&(x86/x87))|x88);

	if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x89 = 14506457LL;
	static uint32_t x90 = 747294021U;
	uint16_t x91 = 6676U;
	int8_t x92 = -1;
	int64_t t21 = -1LL;

	t21 = ((x89&(x90/x91))|x92);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x93 = UINT64_MAX;
	static int32_t x95 = INT32_MIN;

	t22 = ((x93&(x94/x95))|x96);

	if (t22 != 7250LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MAX;
	int16_t x98 = INT16_MIN;
	int8_t x99 = -1;
	int32_t x100 = INT32_MAX;
	int64_t t23 = -1062112570LL;

	t23 = ((x97&(x98/x99))|x100);

	if (t23 != 2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = INT64_MIN;
	static uint16_t x102 = 12U;
	static uint32_t x103 = UINT32_MAX;
	volatile int32_t x104 = INT32_MIN;
	static int64_t t24 = 1730340542838LL;

	t24 = ((x101&(x102/x103))|x104);

	if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = -11;
	static uint8_t x107 = UINT8_MAX;
	static int16_t x108 = 53;
	volatile int64_t t25 = 62718669LL;

	t25 = ((x105&(x106/x107))|x108);

	if (t25 != 53LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1LL;
	int64_t x110 = INT64_MIN;
	static volatile int32_t x112 = INT32_MIN;
	int64_t t26 = 10031567757962LL;

	t26 = ((x109&(x110/x111))|x112);

	if (t26 != -2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MAX;
	uint16_t x114 = UINT16_MAX;
	volatile int32_t x115 = -7;
	static int8_t x116 = 1;
	static volatile int32_t t27 = -4319;

	t27 = ((x113&(x114/x115))|x116);

	if (t27 != 111) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = -1;
	uint8_t x120 = UINT8_MAX;
	int32_t t28 = 6;

	t28 = ((x117&(x118/x119))|x120);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 2247U;
	int16_t x122 = 151;
	static uint8_t x123 = 6U;
	volatile uint32_t t29 = 84346U;

	t29 = ((x121&(x122/x123))|x124);

	if (t29 != 4294967169U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -50926;
	uint16_t x126 = 477U;
	uint64_t x127 = 5911LLU;
	static volatile int8_t x128 = INT8_MIN;
	uint64_t t30 = 4045453992086283LLU;

	t30 = ((x125&(x126/x127))|x128);

	if (t30 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x129 = -1;
	int8_t x130 = INT8_MAX;
	uint16_t x131 = 1542U;
	int16_t x132 = INT16_MIN;

	t31 = ((x129&(x130/x131))|x132);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = -1;
	static uint16_t x135 = UINT16_MAX;
	int64_t x136 = -1LL;
	static volatile int64_t t32 = 567406273461380987LL;

	t32 = ((x133&(x134/x135))|x136);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x137 = INT8_MIN;
	static int16_t x139 = INT16_MIN;
	static int8_t x140 = INT8_MIN;
	volatile int32_t t33 = -80200114;

	t33 = ((x137&(x138/x139))|x140);

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x141 = UINT32_MAX;
	uint32_t x142 = 757129U;
	uint32_t x143 = 38U;
	uint32_t t34 = 165321782U;

	t34 = ((x141&(x142/x143))|x144);

	if (t34 != 2147503572U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1;
	int64_t x146 = INT64_MAX;
	static int64_t x147 = INT64_MIN;
	static int8_t x148 = INT8_MIN;

	t35 = ((x145&(x146/x147))|x148);

	if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x149 = -1;
	int8_t x150 = 0;
	int64_t x151 = -13734366179628972LL;
	volatile uint16_t x152 = 167U;
	int64_t t36 = 1178417202081285066LL;

	t36 = ((x149&(x150/x151))|x152);

	if (t36 != 167LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 23698097681LLU;
	volatile int16_t x154 = 1;
	uint64_t x155 = 130883961LLU;
	static int8_t x156 = -3;
	static volatile uint64_t t37 = 2751212LLU;

	t37 = ((x153&(x154/x155))|x156);

	if (t37 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x157 = 10U;
	uint16_t x158 = 704U;
	uint16_t x159 = 1156U;
	uint8_t x160 = 118U;
	static int32_t t38 = -1813285;

	t38 = ((x157&(x158/x159))|x160);

	if (t38 != 118) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -1;
	int8_t x162 = INT8_MIN;
	int8_t x164 = INT8_MAX;
	volatile int32_t t39 = 181221305;

	t39 = ((x161&(x162/x163))|x164);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x165 = 1;
	static uint8_t x166 = UINT8_MAX;
	int8_t x167 = INT8_MIN;
	volatile int32_t t40 = 6492;

	t40 = ((x165&(x166/x167))|x168);

	if (t40 != -119) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x170 = INT32_MIN;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = INT64_MIN;

	t41 = ((x169&(x170/x171))|x172);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x185 = 55U;
	uint8_t x186 = 54U;
	volatile int32_t x187 = -1;
	static int32_t x188 = INT32_MIN;
	int32_t t42 = -232635;

	t42 = ((x185&(x186/x187))|x188);

	if (t42 != -2147483646) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = -1;
	static uint16_t x190 = UINT16_MAX;
	int16_t x191 = INT16_MIN;
	int64_t x192 = 0LL;
	volatile int64_t t43 = 7LL;

	t43 = ((x189&(x190/x191))|x192);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x194 = -6;
	static int64_t x196 = INT64_MIN;
	static int64_t t44 = INT64_MIN;

	t44 = ((x193&(x194/x195))|x196);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x198 = INT64_MIN;
	volatile uint16_t x199 = 53U;
	static int8_t x200 = -10;

	t45 = ((x197&(x198/x199))|x200);

	if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x202 = 146U;
	static int8_t x203 = 32;
	volatile int64_t x204 = -130526571LL;

	t46 = ((x201&(x202/x203))|x204);

	if (t46 != -130526571LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MAX;
	int32_t x208 = -1881785;

	t47 = ((x205&(x206/x207))|x208);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x209 = UINT16_MAX;
	int64_t x211 = -1LL;
	volatile int32_t x212 = -1;

	t48 = ((x209&(x210/x211))|x212);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = -1;
	uint16_t x215 = UINT16_MAX;
	volatile int64_t t49 = 4538249497125LL;

	t49 = ((x213&(x214/x215))|x216);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = INT64_MIN;
	static int8_t x219 = INT8_MIN;
	volatile int64_t t50 = 48322LL;

	t50 = ((x217&(x218/x219))|x220);

	if (t50 != 3LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x222 = -1;
	int64_t x223 = INT64_MIN;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = ((x221&(x222/x223))|x224);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = INT16_MIN;
	int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MIN;
	volatile int64_t t52 = 384671LL;

	t52 = ((x225&(x226/x227))|x228);

	if (t52 != 6570617LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x229 = 78U;
	volatile int32_t x230 = -1;
	int32_t x231 = INT32_MAX;
	uint64_t x232 = UINT64_MAX;

	t53 = ((x229&(x230/x231))|x232);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MAX;
	volatile int32_t t54 = INT32_MIN;

	t54 = ((x233&(x234/x235))|x236);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x237 = 312950047051130186LLU;
	int32_t x238 = 295;
	int8_t x239 = INT8_MAX;
	volatile uint64_t t55 = 646686LLU;

	t55 = ((x237&(x238/x239))|x240);

	if (t55 != 18446744065941298235LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 2045708U;
	uint32_t x242 = 1540855U;
	volatile int8_t x243 = -1;
	volatile int64_t x244 = 124560076966025LL;
	volatile int64_t t56 = 3LL;

	t56 = ((x241&(x242/x243))|x244);

	if (t56 != 124560076966025LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 1U;
	static int8_t x246 = INT8_MIN;
	int64_t x247 = -1LL;
	static uint8_t x248 = 18U;
	volatile int64_t t57 = 1LL;

	t57 = ((x245&(x246/x247))|x248);

	if (t57 != 18LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	int16_t x252 = 10;

	t58 = ((x249&(x250/x251))|x252);

	if (t58 != 32778LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = -15;
	int32_t x254 = 2921;
	int64_t t59 = -66587661519LL;

	t59 = ((x253&(x254/x255))|x256);

	if (t59 != 1753782785LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x259 = 23;
	uint64_t x260 = 14LLU;
	volatile uint64_t t60 = 596608LLU;

	t60 = ((x257&(x258/x259))|x260);

	if (t60 != 14LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = -277691182269318402LL;
	int64_t x263 = INT64_MIN;
	int64_t t61 = INT64_MAX;

	t61 = ((x261&(x262/x263))|x264);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = 1;
	uint64_t x266 = 186303245187LLU;
	int32_t x268 = INT32_MIN;
	volatile uint64_t t62 = 219LLU;

	t62 = ((x265&(x266/x267))|x268);

	if (t62 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MAX;
	uint64_t x272 = UINT64_MAX;
	uint64_t t63 = UINT64_MAX;

	t63 = ((x269&(x270/x271))|x272);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = UINT8_MAX;
	static int8_t x274 = -11;
	int8_t x275 = -5;
	static int16_t x276 = 1767;
	volatile int32_t t64 = 4158693;

	t64 = ((x273&(x274/x275))|x276);

	if (t64 != 1767) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x280 = -7150270077401LL;
	volatile uint64_t t65 = 54186868018LLU;

	t65 = ((x277&(x278/x279))|x280);

	if (t65 != 18446739673309232999LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x282 = 1;
	uint16_t x283 = 23639U;
	static int32_t x284 = INT32_MIN;

	t66 = ((x281&(x282/x283))|x284);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x285 = INT32_MAX;
	static uint32_t x286 = 8605U;
	static int32_t x287 = INT32_MIN;
	volatile int8_t x288 = INT8_MIN;
	volatile uint32_t t67 = 8U;

	t67 = ((x285&(x286/x287))|x288);

	if (t67 != 4294967168U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = INT64_MAX;
	int64_t x290 = -1LL;
	int16_t x291 = INT16_MIN;

	t68 = ((x289&(x290/x291))|x292);

	if (t68 != 65535LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MAX;
	int8_t x294 = -1;
	volatile int64_t x295 = -917076941LL;
	uint64_t x296 = 1644755LLU;
	uint64_t t69 = 28LLU;

	t69 = ((x293&(x294/x295))|x296);

	if (t69 != 1644755LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MAX;
	int64_t x300 = INT64_MIN;
	int64_t t70 = INT64_MIN;

	t70 = ((x297&(x298/x299))|x300);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	int64_t x304 = 23LL;
	static volatile int64_t t71 = 13653756726LL;

	t71 = ((x301&(x302/x303))|x304);

	if (t71 != 23LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x306 = INT32_MIN;
	uint16_t x307 = UINT16_MAX;
	static uint32_t x308 = 13280U;

	t72 = ((x305&(x306/x307))|x308);

	if (t72 != 114877623368725472LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MIN;
	int64_t x311 = -117470227220991529LL;
	static int8_t x312 = INT8_MIN;
	int64_t t73 = -41191309716LL;

	t73 = ((x309&(x310/x311))|x312);

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MIN;
	int16_t x316 = INT16_MIN;

	t74 = ((x313&(x314/x315))|x316);

	if (t74 != -32512) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = INT32_MIN;
	static int64_t x322 = INT64_MIN;
	static volatile int32_t x323 = -3550;
	int32_t x324 = 0;
	int64_t t75 = 132LL;

	t75 = ((x321&(x322/x323))|x324);

	if (t75 != 2598130944049152LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x325 = 55U;
	uint8_t x326 = 1U;
	uint8_t x327 = UINT8_MAX;
	int32_t x328 = INT32_MAX;
	int32_t t76 = INT32_MAX;

	t76 = ((x325&(x326/x327))|x328);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x330 = INT8_MIN;
	uint16_t x331 = 1869U;
	int32_t x332 = INT32_MIN;
	volatile int32_t t77 = INT32_MIN;

	t77 = ((x329&(x330/x331))|x332);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = 4737153425680191658LLU;
	int64_t x334 = INT64_MIN;
	static int8_t x335 = INT8_MIN;
	static uint16_t x336 = UINT16_MAX;
	volatile uint64_t t78 = 100689LLU;

	t78 = ((x333&(x334/x335))|x336);

	if (t78 != 72057594037993471LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	volatile int64_t x338 = INT64_MIN;
	int16_t x339 = 624;
	uint16_t x340 = UINT16_MAX;
	int64_t t79 = -7573LL;

	t79 = ((x337&(x338/x339))|x340);

	if (t79 != -14781044930838529LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MAX;
	static int8_t x342 = INT8_MAX;
	int8_t x343 = INT8_MAX;
	volatile int32_t x344 = -1;

	t80 = ((x341&(x342/x343))|x344);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = INT16_MAX;
	static volatile uint8_t x347 = UINT8_MAX;
	volatile int64_t x348 = 50LL;
	volatile int64_t t81 = 16223530805LL;

	t81 = ((x345&(x346/x347))|x348);

	if (t81 != 32762LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x349 = 28U;
	uint16_t x351 = 2U;
	uint32_t x352 = 3U;
	uint32_t t82 = 2021921179U;

	t82 = ((x349&(x350/x351))|x352);

	if (t82 != 3U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x353 = INT32_MAX;
	static uint64_t x354 = 3934768384749279170LLU;
	static volatile uint16_t x355 = 10238U;
	static volatile int64_t x356 = -1LL;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = ((x353&(x354/x355))|x356);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = 6;
	uint32_t x359 = 20247347U;
	int32_t x360 = -244636;
	volatile uint64_t t84 = 2055939056030817LLU;

	t84 = ((x357&(x358/x359))|x360);

	if (t84 != 18446744073709306980LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = 359;
	volatile int16_t x362 = INT16_MAX;
	static uint32_t x364 = 534010105U;

	t85 = ((x361&(x362/x363))|x364);

	if (t85 != 534010365U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = INT64_MIN;
	int16_t x366 = 450;
	uint32_t x367 = 59668U;
	int32_t x368 = INT32_MIN;
	static volatile int64_t t86 = -324782LL;

	t86 = ((x365&(x366/x367))|x368);

	if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x369 = UINT16_MAX;
	int64_t x370 = INT64_MAX;
	uint8_t x371 = 42U;
	int32_t x372 = -1;
	int64_t t87 = 6898980450LL;

	t87 = ((x369&(x370/x371))|x372);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = -483536;
	static uint32_t x374 = 11751U;
	volatile int8_t x375 = INT8_MAX;
	uint32_t t88 = 87344U;

	t88 = ((x373&(x374/x375))|x376);

	if (t88 != 21U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x379 = INT16_MIN;
	static int32_t x380 = INT32_MAX;
	static volatile uint32_t t89 = 30638371U;

	t89 = ((x377&(x378/x379))|x380);

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x381 = 1U;
	int16_t x383 = -1;
	static int8_t x384 = -1;
	volatile int32_t t90 = -2468124;

	t90 = ((x381&(x382/x383))|x384);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = -113444128343094697LL;
	int32_t x386 = -1;
	int64_t x387 = INT64_MIN;
	volatile uint32_t x388 = 9U;
	int64_t t91 = 142758433235073LL;

	t91 = ((x385&(x386/x387))|x388);

	if (t91 != 9LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x389 = UINT16_MAX;
	uint32_t x390 = 4773910U;
	int16_t x391 = -1;
	static int64_t x392 = INT64_MAX;
	static volatile int64_t t92 = INT64_MAX;

	t92 = ((x389&(x390/x391))|x392);

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x393 = INT64_MIN;
	int16_t x394 = INT16_MIN;
	int32_t x395 = -39657751;
	static volatile int64_t t93 = -48407LL;

	t93 = ((x393&(x394/x395))|x396);

	if (t93 != 4294967295LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = INT8_MAX;
	int32_t x398 = INT32_MIN;
	static uint64_t x400 = 15174097337010024LLU;

	t94 = ((x397&(x398/x399))|x400);

	if (t94 != 15174097337010024LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -5868;
	uint64_t x402 = 2922805368026LLU;
	volatile int8_t x403 = -1;
	static uint32_t x404 = UINT32_MAX;
	uint64_t t95 = 6904LLU;

	t95 = ((x401&(x402/x403))|x404);

	if (t95 != 4294967295LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = INT32_MIN;
	uint32_t x408 = UINT32_MAX;
	volatile int64_t t96 = 37051LL;

	t96 = ((x405&(x406/x407))|x408);

	if (t96 != 4294967295LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = 6;
	int32_t x410 = 121496010;
	volatile int32_t x411 = INT32_MAX;
	int64_t x412 = 195756885LL;
	volatile int64_t t97 = 16650LL;

	t97 = ((x409&(x410/x411))|x412);

	if (t97 != 195756885LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x413 = UINT32_MAX;
	volatile uint32_t x414 = UINT32_MAX;
	int16_t x416 = INT16_MAX;
	uint32_t t98 = 12U;

	t98 = ((x413&(x414/x415))|x416);

	if (t98 != 32767U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x417 = INT32_MIN;
	volatile uint16_t x418 = 0U;
	int16_t x419 = INT16_MAX;
	uint32_t x420 = UINT32_MAX;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = ((x417&(x418/x419))|x420);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

