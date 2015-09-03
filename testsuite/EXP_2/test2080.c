#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
int16_t x6 = -1;
uint8_t x7 = 87U;
volatile uint8_t x11 = 6U;
volatile int64_t t2 = 41741LL;
int64_t t3 = INT64_MIN;
int16_t x19 = INT16_MAX;
int8_t x23 = INT8_MIN;
int32_t x24 = INT32_MIN;
uint32_t x35 = UINT32_MAX;
volatile int8_t x39 = INT8_MIN;
volatile int32_t x42 = INT32_MIN;
int64_t t11 = -17809738247434303LL;
uint64_t x49 = 441848LLU;
uint64_t x52 = 670075318110034LLU;
int8_t x61 = -1;
int64_t x64 = -121504508595113891LL;
volatile int64_t t16 = 1LL;
volatile int16_t x73 = INT16_MIN;
int8_t x83 = 57;
int32_t t20 = -88;
static int32_t x86 = -3888;
int8_t x87 = INT8_MIN;
volatile int16_t x88 = INT16_MAX;
uint8_t x89 = 11U;
uint32_t t22 = UINT32_MAX;
uint64_t t23 = 0LLU;
volatile uint32_t t24 = 21U;
static int8_t x114 = INT8_MIN;
volatile int16_t x116 = INT16_MAX;
int64_t x119 = 71036140646LL;
uint8_t x121 = 57U;
uint16_t x131 = 7U;
volatile int8_t x136 = INT8_MIN;
int64_t x137 = INT64_MAX;
static volatile uint32_t x140 = 6833680U;
int64_t t32 = -7800LL;
static int8_t x143 = INT8_MIN;
volatile uint16_t x149 = 35U;
uint8_t x152 = UINT8_MAX;
int64_t x155 = -3510144180707000LL;
uint16_t x159 = 22U;
volatile int32_t x169 = INT32_MIN;
volatile uint8_t x170 = UINT8_MAX;
volatile int32_t x178 = INT32_MAX;
int16_t x180 = -1;
volatile int32_t t39 = -2884;
int8_t x182 = 13;
volatile int32_t t42 = -1;
uint64_t x197 = 33771126186LLU;
volatile uint32_t x200 = 752794U;
int8_t x203 = 28;
int64_t x205 = -1LL;
volatile uint64_t t46 = 531991237LLU;
volatile int64_t x213 = INT64_MIN;
int16_t x214 = 185;
static volatile uint64_t x220 = UINT64_MAX;
int32_t x236 = 171920670;
volatile int16_t x242 = -2114;
uint16_t x245 = UINT16_MAX;
int8_t x248 = INT8_MIN;
int32_t t53 = 11865;
static volatile int32_t x250 = -1;
uint32_t x251 = 6487U;
volatile uint32_t t54 = 148854676U;
int64_t t55 = -131155857LL;
uint64_t x257 = UINT64_MAX;
int64_t t60 = 67808928987LL;
uint16_t x279 = 1809U;
int32_t x280 = INT32_MAX;
volatile uint16_t x282 = UINT16_MAX;
static volatile int32_t x286 = 67189532;
int32_t x292 = INT32_MAX;
int32_t t64 = -229033;
int16_t x293 = INT16_MIN;
static uint16_t x296 = 0U;
int16_t x297 = INT16_MIN;
int16_t x299 = -4;
static int16_t x300 = INT16_MAX;
static uint8_t x304 = 0U;
int8_t x311 = 1;
volatile uint64_t t69 = 7235LLU;
int32_t x315 = 1;
int32_t x319 = INT32_MIN;
static int8_t x324 = INT8_MIN;
int8_t x331 = 0;
uint16_t x335 = UINT16_MAX;
volatile int64_t t77 = -3LL;
int8_t x347 = INT8_MIN;
uint16_t x348 = UINT16_MAX;
int32_t x351 = INT32_MAX;
int64_t x354 = INT64_MIN;
uint8_t x360 = 0U;
int8_t x362 = INT8_MAX;
volatile uint8_t x367 = UINT8_MAX;
uint64_t t84 = 1309285772273309555LLU;
uint64_t x386 = 5890LLU;
volatile int32_t x407 = INT32_MIN;
int32_t x412 = -1;
uint8_t x418 = UINT8_MAX;
volatile int32_t t94 = 2281953;
uint64_t x422 = 389398585050953991LLU;
static uint16_t x424 = 863U;
int16_t x429 = INT16_MIN;
static int8_t x435 = INT8_MIN;
static int16_t x440 = INT16_MAX;


void f0(void) {
	uint8_t x1 = 96U;
	static uint32_t x2 = 323U;
	int16_t x4 = INT16_MAX;
	static volatile uint32_t t0 = 253154U;

	t0 = ((x1/(x2^x3))^x4);

	if (t0 != 32767U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	int8_t x8 = INT8_MIN;
	int64_t t1 = -2LL;

	t1 = ((x5/(x6^x7))^x8);

	if (t1 != 104811045873349667LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int16_t x10 = -2;
	int64_t x12 = INT64_MIN;

	t2 = ((x9/(x10^x11))^x12);

	if (t2 != -9223372036854771712LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int16_t x14 = INT16_MIN;
	int32_t x15 = -259021;
	int64_t x16 = INT64_MIN;

	t3 = ((x13/(x14^x15))^x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1836U;
	volatile uint8_t x18 = 23U;
	int64_t x20 = -1LL;
	volatile int64_t t4 = -211870222LL;

	t4 = ((x17/(x18^x19))^x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = 6;
	int32_t t5 = 673958;

	t5 = ((x21/(x22^x23))^x24);

	if (t5 != -2147483380) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int8_t x26 = 1;
	static int32_t x27 = INT32_MIN;
	int8_t x28 = 20;
	volatile int32_t t6 = 293885;

	t6 = ((x25/(x26^x27))^x28);

	if (t6 != -21) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	static int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MAX;
	int64_t x32 = INT64_MAX;
	int64_t t7 = 11525LL;

	t7 = ((x29/(x30^x31))^x32);

	if (t7 != 9223372032559808257LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	volatile int8_t x34 = INT8_MAX;
	uint8_t x36 = UINT8_MAX;
	volatile uint64_t t8 = 51029453699081778LLU;

	t8 = ((x33/(x34^x35))^x36);

	if (t8 != 4294967423LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -1;
	volatile uint8_t x38 = 61U;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = INT32_MIN;

	t9 = ((x37/(x38^x39))^x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -31;
	int16_t x43 = -1;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = INT64_MIN;

	t10 = ((x41/(x42^x43))^x44);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 3576;
	int8_t x46 = INT8_MAX;
	int16_t x47 = -1;
	int64_t x48 = 26684158515769LL;

	t11 = ((x45/(x46^x47))^x48);

	if (t11 != -26684158515748LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x50 = 0U;
	int16_t x51 = INT16_MAX;
	uint64_t t12 = 83878429439165LLU;

	t12 = ((x49/(x50^x51))^x52);

	if (t12 != 670075318110047LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	uint64_t x54 = 1919187904709258LLU;
	int16_t x55 = 0;
	uint8_t x56 = 1U;
	uint64_t t13 = 28568477937723932LLU;

	t13 = ((x53/(x54^x55))^x56);

	if (t13 != 9610LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int8_t x58 = INT8_MIN;
	int16_t x59 = -223;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = INT32_MIN;

	t14 = ((x57/(x58^x59))^x60);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -1;
	int64_t x63 = INT64_MIN;
	int64_t t15 = 27140802146481795LL;

	t15 = ((x61/(x62^x63))^x64);

	if (t15 != -121504508595113891LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	static volatile int16_t x66 = -146;
	int64_t x67 = 2924229LL;
	int16_t x68 = INT16_MIN;

	t16 = ((x65/(x66^x67))^x68);

	if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -12678496LL;
	volatile int32_t x70 = INT32_MIN;
	volatile int8_t x71 = 0;
	uint64_t x72 = UINT64_MAX;
	uint64_t t17 = UINT64_MAX;

	t17 = ((x69/(x70^x71))^x72);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	int8_t x75 = 2;
	uint32_t x76 = UINT32_MAX;
	uint32_t t18 = UINT32_MAX;

	t18 = ((x73/(x74^x75))^x76);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x77 = -1LL;
	int16_t x78 = -1;
	volatile int64_t x79 = INT64_MIN;
	uint16_t x80 = 66U;
	int64_t t19 = 22LL;

	t19 = ((x77/(x78^x79))^x80);

	if (t19 != 66LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 44;
	int8_t x82 = -1;
	uint16_t x84 = 1U;

	t20 = ((x81/(x82^x83))^x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	static volatile int64_t t21 = -1515129230081426LL;

	t21 = ((x85/(x86^x87))^x88);

	if (t21 != -2352901029802270LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x90 = INT16_MIN;
	uint32_t x91 = 388774U;
	uint32_t x92 = UINT32_MAX;

	t22 = ((x89/(x90^x91))^x92);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	static int64_t x94 = -1683499993LL;
	int64_t x95 = -10LL;
	static uint16_t x96 = UINT16_MAX;

	t23 = ((x93/(x94^x95))^x96);

	if (t23 != 10957402613LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	volatile uint32_t x98 = 182768U;
	uint8_t x99 = UINT8_MAX;
	volatile int32_t x100 = INT32_MAX;

	t24 = ((x97/(x98^x99))^x100);

	if (t24 != 2147460119U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MAX;
	static uint8_t x106 = UINT8_MAX;
	uint16_t x107 = 1U;
	int32_t x108 = -125376861;
	static int32_t t25 = -4282;

	t25 = ((x105/(x106^x107))^x108);

	if (t25 != -133700441) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = INT64_MIN;
	static int64_t x115 = 48805801LL;
	int64_t t26 = -1109320591215654240LL;

	t26 = ((x113/(x114^x115))^x116);

	if (t26 != 188980859843LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x117 = 4005U;
	uint8_t x118 = 1U;
	static int32_t x120 = 59;
	int64_t t27 = 6664639931LL;

	t27 = ((x117/(x118^x119))^x120);

	if (t27 != 59LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x122 = 6091U;
	static int64_t x123 = INT64_MAX;
	uint64_t x124 = 69LLU;
	volatile uint64_t t28 = 2751306753LLU;

	t28 = ((x121/(x122^x123))^x124);

	if (t28 != 69LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = -30;
	static uint64_t x126 = UINT64_MAX;
	uint32_t x127 = UINT32_MAX;
	static int64_t x128 = -226337248583246779LL;
	volatile uint64_t t29 = 98633170LLU;

	t29 = ((x125/(x126^x127))^x128);

	if (t29 != 18220406825126304836LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -1;
	uint64_t x130 = 200778LLU;
	int64_t x132 = 1043669537LL;
	volatile uint64_t t30 = 431LLU;

	t30 = ((x129/(x130^x131))^x132);

	if (t30 != 91875584974251LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x133 = -4093330;
	volatile uint64_t x134 = UINT64_MAX;
	int64_t x135 = 68942541636907865LL;
	volatile uint64_t t31 = 6590934LLU;

	t31 = ((x133/(x134^x135))^x136);

	if (t31 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x138 = -217897098;
	int8_t x139 = 2;

	t32 = ((x137/(x138^x139))^x140);

	if (t32 != -42335856725LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 50967819823LLU;
	static int64_t x142 = INT64_MIN;
	uint8_t x144 = UINT8_MAX;
	uint64_t t33 = 184LLU;

	t33 = ((x141/(x142^x143))^x144);

	if (t33 != 255LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x150 = UINT8_MAX;
	int16_t x151 = -5646;
	volatile int32_t t34 = 107326;

	t34 = ((x149/(x150^x151))^x152);

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x153 = -1;
	static volatile int64_t x154 = 3532832212767693LL;
	volatile uint64_t x156 = UINT64_MAX;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x153/(x154^x155))^x156);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x158 = 61U;
	volatile int32_t x160 = -9021;
	int32_t t36 = 104;

	t36 = ((x157/(x158^x159))^x160);

	if (t36 != 49948891) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x165 = -1;
	volatile uint32_t x166 = 1059533875U;
	static int32_t x167 = INT32_MIN;
	uint32_t x168 = 201762U;
	volatile uint32_t t37 = 325U;

	t37 = ((x165/(x166^x167))^x168);

	if (t37 != 201763U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x171 = UINT32_MAX;
	int64_t x172 = INT64_MIN;
	static int64_t t38 = INT64_MIN;

	t38 = ((x169/(x170^x171))^x172);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x177 = 17U;
	int8_t x179 = INT8_MIN;

	t39 = ((x177/(x178^x179))^x180);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x181 = 5137LL;
	static int64_t x183 = INT64_MAX;
	int8_t x184 = INT8_MAX;
	volatile int64_t t40 = 147LL;

	t40 = ((x181/(x182^x183))^x184);

	if (t40 != 127LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x185 = 0U;
	static volatile int32_t x186 = INT32_MIN;
	int16_t x187 = 407;
	static int32_t x188 = -198095;
	static int32_t t41 = 0;

	t41 = ((x185/(x186^x187))^x188);

	if (t41 != -198095) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = -1;
	static uint8_t x190 = UINT8_MAX;
	uint8_t x191 = 15U;
	int16_t x192 = INT16_MIN;

	t42 = ((x189/(x190^x191))^x192);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x193 = INT16_MIN;
	int16_t x194 = INT16_MAX;
	static volatile int64_t x195 = INT64_MAX;
	int8_t x196 = INT8_MIN;
	volatile int64_t t43 = 0LL;

	t43 = ((x193/(x194^x195))^x196);

	if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x198 = INT16_MIN;
	static uint16_t x199 = UINT16_MAX;
	volatile uint64_t t44 = 37LLU;

	t44 = ((x197/(x198^x199))^x200);

	if (t44 != 752794LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x201 = INT64_MAX;
	int8_t x202 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	int64_t t45 = -1000LL;

	t45 = ((x201/(x202^x203))^x204);

	if (t45 != 9131138316486228050LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x206 = 31;
	static int16_t x207 = -1;
	uint64_t x208 = 8796565052293654LLU;

	t46 = ((x205/(x206^x207))^x208);

	if (t46 != 8796565052293654LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x209 = 29U;
	uint8_t x210 = 14U;
	volatile uint16_t x211 = 4344U;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t47 = 1951;

	t47 = ((x209/(x210^x211))^x212);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x215 = INT64_MAX;
	int8_t x216 = -1;
	volatile int64_t t48 = 24LL;

	t48 = ((x213/(x214^x215))^x216);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = -1;
	static int8_t x218 = INT8_MAX;
	static volatile int8_t x219 = INT8_MIN;
	uint64_t t49 = 2196261163106540639LLU;

	t49 = ((x217/(x218^x219))^x220);

	if (t49 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x221 = INT32_MIN;
	uint16_t x222 = 346U;
	volatile int32_t x223 = INT32_MIN;
	static int32_t x224 = INT32_MAX;
	static volatile int32_t t50 = 379;

	t50 = ((x221/(x222^x223))^x224);

	if (t50 != 2147483646) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MIN;
	volatile int64_t x234 = -1LL;
	int64_t x235 = 1078289403568LL;
	int64_t t51 = -80962598300069731LL;

	t51 = ((x233/(x234^x235))^x236);

	if (t51 != 171920670LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = INT64_MIN;
	volatile int32_t x243 = INT32_MIN;
	uint16_t x244 = 5451U;
	int64_t t52 = 101LL;

	t52 = ((x241/(x242^x243))^x244);

	if (t52 != -4294968777LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x246 = 20U;
	static int16_t x247 = INT16_MIN;

	t53 = ((x245/(x246^x247))^x248);

	if (t53 != 126) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x249 = 4275U;
	volatile int32_t x252 = 129671;

	t54 = ((x249/(x250^x251))^x252);

	if (t54 != 129671U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x253 = 72U;
	volatile int64_t x254 = INT64_MIN;
	int16_t x255 = -1;
	volatile int16_t x256 = -1;

	t55 = ((x253/(x254^x255))^x256);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x258 = INT64_MAX;
	int8_t x259 = INT8_MAX;
	int8_t x260 = 6;
	static volatile uint64_t t56 = 15484LLU;

	t56 = ((x257/(x258^x259))^x260);

	if (t56 != 4LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = -23364LL;
	int32_t x262 = 26;
	int32_t x263 = 3999;
	int32_t x264 = -1;
	int64_t t57 = 1LL;

	t57 = ((x261/(x262^x263))^x264);

	if (t57 != 4LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x265 = UINT8_MAX;
	int16_t x266 = 12;
	int16_t x267 = INT16_MIN;
	int32_t x268 = INT32_MAX;
	static volatile int32_t t58 = INT32_MAX;

	t58 = ((x265/(x266^x267))^x268);

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = INT16_MIN;
	volatile int8_t x270 = -1;
	int32_t x271 = INT32_MAX;
	int16_t x272 = 19;
	int32_t t59 = -34226;

	t59 = ((x269/(x270^x271))^x272);

	if (t59 != 19) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x273 = -195;
	int64_t x274 = -8450691LL;
	uint8_t x275 = 93U;
	volatile int32_t x276 = INT32_MIN;

	t60 = ((x273/(x274^x275))^x276);

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int32_t x278 = -8;
	static uint32_t t61 = 1U;

	t61 = ((x277/(x278^x279))^x280);

	if (t61 != 2147483646U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x281 = 92U;
	int32_t x283 = INT32_MIN;
	int32_t x284 = INT32_MAX;
	int32_t t62 = INT32_MAX;

	t62 = ((x281/(x282^x283))^x284);

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x285 = INT8_MIN;
	uint64_t x287 = 2455LLU;
	uint64_t x288 = 3209742159398678LLU;
	static volatile uint64_t t63 = 5976639952LLU;

	t63 = ((x285/(x286^x287))^x288);

	if (t63 != 3209481855323549LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = INT32_MAX;
	static int8_t x290 = INT8_MIN;
	int32_t x291 = INT32_MIN;

	t64 = ((x289/(x290^x291))^x292);

	if (t64 != 2147483646) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x294 = UINT32_MAX;
	int32_t x295 = 876;
	volatile uint32_t t65 = 5U;

	t65 = ((x293/(x294^x295))^x296);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x298 = UINT64_MAX;
	uint64_t t66 = 2LLU;

	t66 = ((x297/(x298^x299))^x300);

	if (t66 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = -594;
	volatile int8_t x302 = 56;
	int16_t x303 = INT16_MAX;
	volatile int32_t t67 = -107333;

	t67 = ((x301/(x302^x303))^x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x305 = UINT16_MAX;
	int8_t x306 = -6;
	int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MAX;
	volatile int32_t t68 = 2587;

	t68 = ((x305/(x306^x307))^x308);

	if (t68 != 32230) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = UINT64_MAX;
	int32_t x310 = INT32_MIN;
	uint64_t x312 = UINT64_MAX;

	t69 = ((x309/(x310^x311))^x312);

	if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x313 = 3010U;
	uint16_t x314 = UINT16_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t70 = -973;

	t70 = ((x313/(x314^x315))^x316);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x317 = 0LL;
	volatile int64_t x318 = INT64_MAX;
	uint32_t x320 = UINT32_MAX;
	int64_t t71 = 536450LL;

	t71 = ((x317/(x318^x319))^x320);

	if (t71 != 4294967295LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = 16;
	static int8_t x322 = -2;
	uint32_t x323 = 159031131U;
	uint32_t t72 = 176U;

	t72 = ((x321/(x322^x323))^x324);

	if (t72 != 4294967168U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = 0U;
	uint16_t x326 = 2789U;
	uint64_t x327 = 2LLU;
	uint16_t x328 = 11U;
	static uint64_t t73 = 8961307839623971679LLU;

	t73 = ((x325/(x326^x327))^x328);

	if (t73 != 11LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x329 = 1;
	static int16_t x330 = -1;
	static uint64_t x332 = 102942LLU;
	volatile uint64_t t74 = 122830LLU;

	t74 = ((x329/(x330^x331))^x332);

	if (t74 != 18446744073709448673LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = 54224LL;
	static int16_t x334 = -95;
	int16_t x336 = 1;
	volatile int64_t t75 = 1943318604891LL;

	t75 = ((x333/(x334^x335))^x336);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = INT64_MAX;
	static uint32_t x338 = 1U;
	volatile uint8_t x339 = 77U;
	uint64_t x340 = UINT64_MAX;
	static volatile uint64_t t76 = 108452480982LLU;

	t76 = ((x337/(x338^x339))^x340);

	if (t76 != 18325383915329883513LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = -15747179LL;
	volatile int64_t x342 = -1LL;
	uint8_t x343 = UINT8_MAX;
	volatile int8_t x344 = 1;

	t77 = ((x341/(x342^x343))^x344);

	if (t77 != 61513LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = -1;
	volatile uint64_t x346 = UINT64_MAX;
	volatile uint64_t t78 = 965971712986653LLU;

	t78 = ((x345/(x346^x347))^x348);

	if (t78 != 145249953336295165LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x349 = 1036LLU;
	uint16_t x350 = 13U;
	static int32_t x352 = INT32_MAX;
	static volatile uint64_t t79 = 15841336621755916LLU;

	t79 = ((x349/(x350^x351))^x352);

	if (t79 != 2147483647LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x353 = INT32_MIN;
	static int16_t x355 = INT16_MIN;
	volatile int64_t x356 = INT64_MIN;
	int64_t t80 = INT64_MIN;

	t80 = ((x353/(x354^x355))^x356);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x357 = INT16_MIN;
	int64_t x358 = INT64_MIN;
	int16_t x359 = INT16_MIN;
	int64_t t81 = 34433894826336LL;

	t81 = ((x357/(x358^x359))^x360);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x361 = -1;
	uint32_t x363 = UINT32_MAX;
	static uint16_t x364 = UINT16_MAX;
	volatile uint32_t t82 = 504954491U;

	t82 = ((x361/(x362^x363))^x364);

	if (t82 != 65534U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = 742;
	static uint16_t x366 = 975U;
	volatile uint64_t x368 = UINT64_MAX;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = ((x365/(x366^x367))^x368);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x369 = 167U;
	int8_t x370 = INT8_MIN;
	volatile uint64_t x371 = 7LLU;
	int8_t x372 = -3;

	t84 = ((x369/(x370^x371))^x372);

	if (t84 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x373 = 50U;
	uint32_t x374 = 1231U;
	int64_t x375 = INT64_MIN;
	uint16_t x376 = 109U;
	volatile int64_t t85 = -54954LL;

	t85 = ((x373/(x374^x375))^x376);

	if (t85 != 109LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x377 = INT32_MIN;
	uint8_t x378 = 7U;
	uint64_t x379 = 591770939161900118LLU;
	int8_t x380 = INT8_MIN;
	uint64_t t86 = 30594LLU;

	t86 = ((x377/(x378^x379))^x380);

	if (t86 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x385 = INT64_MIN;
	volatile uint64_t x387 = UINT64_MAX;
	volatile int32_t x388 = 400;
	volatile uint64_t t87 = 523906720LLU;

	t87 = ((x385/(x386^x387))^x388);

	if (t87 != 400LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x393 = 13LL;
	volatile int8_t x394 = 6;
	uint64_t x395 = 14399921661LLU;
	static uint64_t x396 = 35LLU;
	volatile uint64_t t88 = 189462012LLU;

	t88 = ((x393/(x394^x395))^x396);

	if (t88 != 35LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x397 = -14417079;
	int64_t x398 = -1LL;
	volatile uint8_t x399 = UINT8_MAX;
	static uint16_t x400 = 4U;
	volatile int64_t t89 = -1431837503468LL;

	t89 = ((x397/(x398^x399))^x400);

	if (t89 != 56312LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x401 = UINT64_MAX;
	int64_t x402 = INT64_MIN;
	uint32_t x403 = UINT32_MAX;
	int32_t x404 = -1;
	volatile uint64_t t90 = 84LLU;

	t90 = ((x401/(x402^x403))^x404);

	if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = -29726721560LL;
	uint16_t x406 = 1U;
	int16_t x408 = 10;
	volatile int64_t t91 = 473978124626329456LL;

	t91 = ((x405/(x406^x407))^x408);

	if (t91 != 7LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x409 = INT64_MIN;
	int64_t x410 = INT64_MAX;
	static uint32_t x411 = 110U;
	int64_t t92 = 24LL;

	t92 = ((x409/(x410^x411))^x412);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x413 = -138530912388641LL;
	uint8_t x414 = 114U;
	int16_t x415 = -1;
	volatile uint16_t x416 = 1U;
	static volatile int64_t t93 = 8241724LL;

	t93 = ((x413/(x414^x415))^x416);

	if (t93 != 1204616629467LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x417 = 3U;
	int8_t x419 = INT8_MIN;
	int16_t x420 = 574;

	t94 = ((x417/(x418^x419))^x420);

	if (t94 != 574) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = -13;
	int8_t x423 = INT8_MIN;
	uint64_t t95 = 2179885443373LLU;

	t95 = ((x421/(x422^x423))^x424);

	if (t95 != 862LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = -1;
	static uint16_t x426 = 12U;
	uint16_t x427 = 346U;
	static uint8_t x428 = 0U;
	static volatile int32_t t96 = 877;

	t96 = ((x425/(x426^x427))^x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x430 = 9U;
	int8_t x431 = INT8_MIN;
	int32_t x432 = -1;
	int32_t t97 = -81;

	t97 = ((x429/(x430^x431))^x432);

	if (t97 != -276) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x433 = INT64_MAX;
	int16_t x434 = -587;
	int16_t x436 = INT16_MIN;
	int64_t t98 = -4374112428877LL;

	t98 = ((x433/(x434^x435))^x436);

	if (t98 != -16324552277593728LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x437 = 1408508449U;
	int16_t x438 = 0;
	int64_t x439 = INT64_MAX;
	volatile int64_t t99 = -58837LL;

	t99 = ((x437/(x438^x439))^x440);

	if (t99 != 32767LL) { NG(); } else { ; }
	
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

