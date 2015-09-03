#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 24U;
int8_t x6 = -1;
int8_t x15 = -1;
uint8_t x22 = 30U;
int64_t x24 = -4165509419LL;
volatile int64_t t5 = INT64_MAX;
static int8_t x31 = -1;
uint32_t x32 = 6U;
volatile uint64_t t8 = UINT64_MAX;
volatile uint32_t t9 = UINT32_MAX;
volatile int32_t t10 = -1068604862;
volatile int16_t x64 = INT16_MAX;
int64_t x68 = -1LL;
uint64_t x70 = UINT64_MAX;
uint16_t x71 = 21550U;
uint64_t x76 = 211LLU;
int8_t x79 = 2;
volatile int32_t x89 = -404;
uint32_t x104 = 601829U;
uint64_t x110 = 3483159024191LLU;
int16_t x111 = 542;
int64_t x115 = -1LL;
static uint32_t x122 = UINT32_MAX;
static int64_t x127 = -1LL;
volatile int64_t x130 = INT64_MIN;
uint8_t x144 = 15U;
static volatile int32_t t30 = -766186;
int64_t x145 = -1LL;
uint32_t x149 = UINT32_MAX;
uint8_t x158 = 0U;
int32_t t33 = 246908;
int64_t x163 = -356470LL;
int16_t x167 = -2;
int64_t x169 = -29004505LL;
int32_t x186 = -37;
int8_t x187 = -1;
int8_t x190 = INT8_MIN;
volatile int64_t t40 = 1LL;
volatile int32_t t42 = -1;
int64_t x205 = INT64_MAX;
static volatile uint8_t x207 = 2U;
static volatile uint64_t x211 = 819LLU;
static uint16_t x212 = UINT16_MAX;
static int64_t x213 = INT64_MAX;
uint8_t x217 = UINT8_MAX;
uint64_t x218 = 1795151738803LLU;
int8_t x219 = INT8_MIN;
int32_t x232 = -151131093;
uint64_t x252 = UINT64_MAX;
volatile int16_t x255 = -23;
static uint8_t x256 = UINT8_MAX;
int8_t x260 = INT8_MIN;
int16_t x271 = INT16_MIN;
int8_t x275 = 0;
volatile int8_t x276 = -1;
int64_t t60 = -1624722065544LL;
uint8_t x289 = 2U;
static int8_t x293 = -1;
int32_t x294 = INT32_MIN;
int8_t x309 = -1;
int64_t x310 = -1317388688000317105LL;
int16_t x313 = INT16_MAX;
int64_t x318 = -1LL;
uint8_t x319 = 1U;
volatile uint64_t x330 = 65628706952199179LLU;
int8_t x332 = 0;
uint32_t x335 = 26856386U;
int8_t x351 = -1;
volatile int32_t t73 = 1348869;
int16_t x363 = -1;
int8_t x371 = INT8_MAX;
int8_t x373 = -1;
static int64_t x374 = 1591380364375403554LL;
uint64_t x378 = UINT64_MAX;
uint32_t x381 = 10223714U;
int16_t x393 = INT16_MIN;
uint16_t x411 = UINT16_MAX;
int32_t t86 = 87472344;
volatile int64_t x415 = -52453138001640291LL;
int32_t t87 = 491;
int8_t x420 = -1;
int8_t x426 = -1;
static uint64_t x433 = UINT64_MAX;
volatile int32_t t93 = -46047192;
int16_t x456 = INT16_MIN;
int32_t x457 = INT32_MAX;


void f0(void) {
	static volatile int16_t x1 = INT16_MIN;
	uint8_t x2 = 2U;
	static int16_t x4 = INT16_MAX;
	int32_t t0 = 796661;

	t0 = (x1-(x2==(x3*x4)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 13930U;
	int32_t x7 = INT32_MIN;
	static uint32_t x8 = 96550997U;
	uint32_t t1 = 39090U;

	t1 = (x5-(x6==(x7*x8)));

	if (t1 != 13930U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	int16_t x10 = -1;
	uint16_t x11 = 6138U;
	int8_t x12 = INT8_MAX;
	int32_t t2 = 103;

	t2 = (x9-(x10==(x11*x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	static uint64_t x14 = 2512421440LLU;
	uint32_t x16 = 0U;
	volatile int64_t t3 = INT64_MAX;

	t3 = (x13-(x14==(x15*x16)));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int64_t x18 = INT64_MIN;
	uint64_t x19 = UINT64_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t4 = -4;

	t4 = (x17-(x18==(x19*x20)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int8_t x23 = 0;

	t5 = (x21-(x22==(x23*x24)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static volatile uint64_t x26 = UINT64_MAX;
	static uint16_t x27 = UINT16_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t6 = INT32_MIN;

	t6 = (x25-(x26==(x27*x28)));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int8_t x30 = INT8_MAX;
	int32_t t7 = INT32_MAX;

	t7 = (x29-(x30==(x31*x32)));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x37 = UINT64_MAX;
	uint32_t x38 = 745U;
	int32_t x39 = INT32_MIN;
	volatile uint32_t x40 = 49U;

	t8 = (x37-(x38==(x39*x40)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x41 = UINT32_MAX;
	static uint32_t x42 = 11193U;
	uint32_t x43 = 946854U;
	volatile int16_t x44 = INT16_MIN;

	t9 = (x41-(x42==(x43*x44)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -3501;
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MAX;
	int16_t x48 = -1;

	t10 = (x45-(x46==(x47*x48)));

	if (t10 != -3501) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = INT32_MAX;
	int32_t x50 = INT32_MIN;
	int32_t x51 = 53310146;
	int64_t x52 = -1LL;
	int32_t t11 = INT32_MAX;

	t11 = (x49-(x50==(x51*x52)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x53 = UINT64_MAX;
	int16_t x54 = INT16_MIN;
	int16_t x55 = -1;
	int32_t x56 = INT32_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = (x53-(x54==(x55*x56)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	volatile int8_t x62 = INT8_MIN;
	static int8_t x63 = 60;
	int64_t t13 = INT64_MIN;

	t13 = (x61-(x62==(x63*x64)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -15;
	uint16_t x66 = 9U;
	int8_t x67 = -1;
	int32_t t14 = 13;

	t14 = (x65-(x66==(x67*x68)));

	if (t14 != -15) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x69 = 26U;
	static uint32_t x72 = UINT32_MAX;
	static volatile int32_t t15 = -577918752;

	t15 = (x69-(x70==(x71*x72)));

	if (t15 != 26) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = -1;
	static int16_t x74 = INT16_MIN;
	int8_t x75 = -7;
	int32_t t16 = 7;

	t16 = (x73-(x74==(x75*x76)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -6;
	int8_t x78 = INT8_MIN;
	static int16_t x80 = -1;
	int32_t t17 = 4642396;

	t17 = (x77-(x78==(x79*x80)));

	if (t17 != -6) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x90 = 363U;
	uint16_t x91 = 718U;
	uint8_t x92 = 2U;
	volatile int32_t t18 = 1512;

	t18 = (x89-(x90==(x91*x92)));

	if (t18 != -404) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x93 = 866792192359LLU;
	static int8_t x94 = INT8_MIN;
	int8_t x95 = 1;
	int32_t x96 = INT32_MAX;
	static volatile uint64_t t19 = 1146209132368340461LLU;

	t19 = (x93-(x94==(x95*x96)));

	if (t19 != 866792192359LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = -608;
	volatile uint64_t x98 = 3361139663151616LLU;
	volatile uint8_t x99 = UINT8_MAX;
	int64_t x100 = -135LL;
	int32_t t20 = -14;

	t20 = (x97-(x98==(x99*x100)));

	if (t20 != -608) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = 443793944512LL;
	static uint8_t x102 = 43U;
	uint64_t x103 = 33LLU;
	volatile int64_t t21 = -282179967354749897LL;

	t21 = (x101-(x102==(x103*x104)));

	if (t21 != 443793944512LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x105 = 730LLU;
	int32_t x106 = -1;
	uint16_t x107 = 7319U;
	volatile int8_t x108 = INT8_MIN;
	volatile uint64_t t22 = 161274032126405LLU;

	t22 = (x105-(x106==(x107*x108)));

	if (t22 != 730LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x109 = -1;
	static uint64_t x112 = 2311756667308173808LLU;
	static volatile int32_t t23 = 63922975;

	t23 = (x109-(x110==(x111*x112)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = -1;
	volatile int8_t x114 = INT8_MIN;
	static int32_t x116 = -1;
	volatile int32_t t24 = 14;

	t24 = (x113-(x114==(x115*x116)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MIN;
	volatile uint16_t x118 = 2033U;
	uint8_t x119 = 69U;
	volatile uint32_t x120 = 341U;
	volatile int64_t t25 = INT64_MIN;

	t25 = (x117-(x118==(x119*x120)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x121 = -1LL;
	int8_t x123 = 1;
	uint64_t x124 = 35528922LLU;
	volatile int64_t t26 = -1427285758LL;

	t26 = (x121-(x122==(x123*x124)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MIN;
	uint16_t x126 = UINT16_MAX;
	static int16_t x128 = -1077;
	int64_t t27 = INT64_MIN;

	t27 = (x125-(x126==(x127*x128)));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 1;
	volatile int16_t x131 = -1;
	int16_t x132 = INT16_MAX;
	volatile int32_t t28 = 1914145;

	t28 = (x129-(x130==(x131*x132)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MAX;
	int8_t x139 = 35;
	uint8_t x140 = 25U;
	volatile int32_t t29 = INT32_MIN;

	t29 = (x137-(x138==(x139*x140)));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = -1;
	uint32_t x142 = 6U;
	uint64_t x143 = UINT64_MAX;

	t30 = (x141-(x142==(x143*x144)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x146 = INT32_MAX;
	volatile uint64_t x147 = 395536714495866421LLU;
	int64_t x148 = INT64_MIN;
	int64_t t31 = -1089705417770LL;

	t31 = (x145-(x146==(x147*x148)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x150 = -1;
	volatile int32_t x151 = -1;
	volatile int32_t x152 = INT32_MAX;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x149-(x150==(x151*x152)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = 1;
	volatile uint64_t x159 = UINT64_MAX;
	int64_t x160 = -1LL;

	t33 = (x157-(x158==(x159*x160)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = -1;
	int32_t x162 = INT32_MIN;
	volatile uint8_t x164 = UINT8_MAX;
	static volatile int32_t t34 = 3925891;

	t34 = (x161-(x162==(x163*x164)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 3U;
	int16_t x166 = INT16_MIN;
	volatile uint32_t x168 = 34162U;
	static volatile int32_t t35 = -2092892;

	t35 = (x165-(x166==(x167*x168)));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x170 = 1799U;
	static int8_t x171 = -1;
	uint64_t x172 = 5568164687LLU;
	volatile int64_t t36 = -774701030240690540LL;

	t36 = (x169-(x170==(x171*x172)));

	if (t36 != -29004505LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x177 = INT32_MIN;
	int16_t x178 = 11829;
	uint32_t x179 = 1U;
	int32_t x180 = 13921;
	volatile int32_t t37 = INT32_MIN;

	t37 = (x177-(x178==(x179*x180)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = 58597LLU;
	static volatile int8_t x182 = INT8_MIN;
	volatile uint64_t x183 = 391294451583234668LLU;
	static int32_t x184 = INT32_MIN;
	uint64_t t38 = 8286232043626860766LLU;

	t38 = (x181-(x182==(x183*x184)));

	if (t38 != 58597LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x185 = INT32_MIN;
	uint16_t x188 = 12U;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x185-(x186==(x187*x188)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = 5143994LL;
	static volatile int16_t x191 = 1;
	static int8_t x192 = INT8_MIN;

	t40 = (x189-(x190==(x191*x192)));

	if (t40 != 5143993LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x197 = 5U;
	static int16_t x198 = INT16_MIN;
	static volatile int16_t x199 = -79;
	int64_t x200 = 1435426844704LL;
	int32_t t41 = -67465;

	t41 = (x197-(x198==(x199*x200)));

	if (t41 != 5) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x201 = 3U;
	int64_t x202 = INT64_MIN;
	int32_t x203 = -667;
	static volatile int64_t x204 = 559404960382LL;

	t42 = (x201-(x202==(x203*x204)));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x206 = UINT32_MAX;
	int16_t x208 = INT16_MIN;
	static volatile int64_t t43 = INT64_MAX;

	t43 = (x205-(x206==(x207*x208)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int64_t x210 = -254LL;
	int32_t t44 = 606561;

	t44 = (x209-(x210==(x211*x212)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x214 = 1U;
	volatile int8_t x215 = INT8_MAX;
	int8_t x216 = 47;
	int64_t t45 = INT64_MAX;

	t45 = (x213-(x214==(x215*x216)));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x220 = -205967940LL;
	static volatile int32_t t46 = -2;

	t46 = (x217-(x218==(x219*x220)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x221 = UINT8_MAX;
	static uint16_t x222 = 4218U;
	volatile int32_t x223 = INT32_MIN;
	static volatile uint64_t x224 = 595688382326LLU;
	volatile int32_t t47 = -6227797;

	t47 = (x221-(x222==(x223*x224)));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x225 = 2U;
	static uint8_t x226 = 85U;
	static volatile uint64_t x227 = UINT64_MAX;
	volatile uint64_t x228 = UINT64_MAX;
	volatile int32_t t48 = 210914;

	t48 = (x225-(x226==(x227*x228)));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = INT64_MIN;
	static uint8_t x231 = 0U;
	volatile int32_t t49 = -33421405;

	t49 = (x229-(x230==(x231*x232)));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x233 = 1744459LLU;
	uint64_t x234 = UINT64_MAX;
	uint16_t x235 = UINT16_MAX;
	volatile uint8_t x236 = 71U;
	volatile uint64_t t50 = 2757974809LLU;

	t50 = (x233-(x234==(x235*x236)));

	if (t50 != 1744459LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = 0LLU;
	int64_t x238 = 475706699LL;
	int16_t x239 = -1;
	static uint16_t x240 = 22U;
	volatile uint64_t t51 = 2200507391765067719LLU;

	t51 = (x237-(x238==(x239*x240)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = 1808U;
	uint64_t x242 = UINT64_MAX;
	int16_t x243 = -3;
	static int8_t x244 = 0;
	int32_t t52 = -620;

	t52 = (x241-(x242==(x243*x244)));

	if (t52 != 1808) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x249 = UINT32_MAX;
	int8_t x250 = INT8_MIN;
	uint32_t x251 = UINT32_MAX;
	volatile uint32_t t53 = UINT32_MAX;

	t53 = (x249-(x250==(x251*x252)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x253 = INT16_MIN;
	int8_t x254 = -8;
	volatile int32_t t54 = -20;

	t54 = (x253-(x254==(x255*x256)));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x257 = 12;
	int8_t x258 = INT8_MIN;
	static int8_t x259 = INT8_MIN;
	volatile int32_t t55 = -20;

	t55 = (x257-(x258==(x259*x260)));

	if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x261 = 15083099U;
	static volatile int32_t x262 = INT32_MAX;
	uint16_t x263 = UINT16_MAX;
	int8_t x264 = 63;
	volatile uint32_t t56 = 1685573430U;

	t56 = (x261-(x262==(x263*x264)));

	if (t56 != 15083099U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x265 = 907U;
	int32_t x266 = 639817431;
	int8_t x267 = INT8_MIN;
	static int32_t x268 = -1;
	volatile int32_t t57 = 1;

	t57 = (x265-(x266==(x267*x268)));

	if (t57 != 907) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x269 = 225988149U;
	int32_t x270 = INT32_MIN;
	int8_t x272 = -1;
	static uint32_t t58 = 486U;

	t58 = (x269-(x270==(x271*x272)));

	if (t58 != 225988149U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x273 = UINT16_MAX;
	uint16_t x274 = 8166U;
	int32_t t59 = 9;

	t59 = (x273-(x274==(x275*x276)));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = -1783LL;
	int8_t x282 = -2;
	static uint64_t x283 = UINT64_MAX;
	int8_t x284 = INT8_MAX;

	t60 = (x281-(x282==(x283*x284)));

	if (t60 != -1783LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = INT16_MIN;
	int64_t x286 = INT64_MIN;
	uint64_t x287 = 4162708035LLU;
	int64_t x288 = 1177555LL;
	int32_t t61 = -1021;

	t61 = (x285-(x286==(x287*x288)));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x290 = UINT16_MAX;
	int8_t x291 = 14;
	int64_t x292 = -1LL;
	volatile int32_t t62 = 495587;

	t62 = (x289-(x290==(x291*x292)));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x295 = -7;
	int16_t x296 = INT16_MAX;
	int32_t t63 = 4357451;

	t63 = (x293-(x294==(x295*x296)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MIN;
	int64_t x299 = 71936703305LL;
	int16_t x300 = 21;
	int32_t t64 = 3956339;

	t64 = (x297-(x298==(x299*x300)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x311 = -1;
	int64_t x312 = -1LL;
	int32_t t65 = -1160578;

	t65 = (x309-(x310==(x311*x312)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x314 = -5;
	int16_t x315 = 12617;
	volatile int16_t x316 = -30;
	static int32_t t66 = 0;

	t66 = (x313-(x314==(x315*x316)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x317 = 4081U;
	int8_t x320 = -1;
	int32_t t67 = 77;

	t67 = (x317-(x318==(x319*x320)));

	if (t67 != 4080) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x329 = 2332U;
	static int16_t x331 = 67;
	static uint32_t t68 = 375U;

	t68 = (x329-(x330==(x331*x332)));

	if (t68 != 2332U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = -1;
	static int16_t x334 = INT16_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t69 = -232974;

	t69 = (x333-(x334==(x335*x336)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x337 = 5776U;
	volatile int64_t x338 = 8153349201LL;
	volatile int8_t x339 = INT8_MIN;
	uint8_t x340 = UINT8_MAX;
	int32_t t70 = -585424055;

	t70 = (x337-(x338==(x339*x340)));

	if (t70 != 5776) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = -1;
	volatile int64_t x343 = -1LL;
	volatile int8_t x344 = INT8_MIN;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x341-(x342==(x343*x344)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x349 = INT16_MIN;
	int64_t x350 = INT64_MAX;
	uint16_t x352 = 8U;
	volatile int32_t t72 = -9823;

	t72 = (x349-(x350==(x351*x352)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x357 = INT16_MAX;
	uint16_t x358 = 0U;
	volatile uint8_t x359 = 12U;
	uint64_t x360 = 467805LLU;

	t73 = (x357-(x358==(x359*x360)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x361 = 1;
	uint64_t x362 = UINT64_MAX;
	int8_t x364 = INT8_MAX;
	int32_t t74 = 940384;

	t74 = (x361-(x362==(x363*x364)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x365 = INT64_MIN;
	volatile int16_t x366 = -134;
	int32_t x367 = 10;
	int16_t x368 = INT16_MAX;
	int64_t t75 = INT64_MIN;

	t75 = (x365-(x366==(x367*x368)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x369 = INT32_MIN;
	static int8_t x370 = INT8_MIN;
	uint16_t x372 = 52U;
	int32_t t76 = INT32_MIN;

	t76 = (x369-(x370==(x371*x372)));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x375 = 5U;
	static uint64_t x376 = 36109LLU;
	int32_t t77 = 91;

	t77 = (x373-(x374==(x375*x376)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x377 = -27;
	static uint32_t x379 = 480843U;
	uint32_t x380 = 0U;
	static volatile int32_t t78 = -420671;

	t78 = (x377-(x378==(x379*x380)));

	if (t78 != -27) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x382 = INT8_MAX;
	int8_t x383 = 1;
	int32_t x384 = -1;
	uint32_t t79 = 1555958U;

	t79 = (x381-(x382==(x383*x384)));

	if (t79 != 10223714U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x385 = INT8_MIN;
	static int32_t x386 = 11;
	int8_t x387 = 4;
	volatile uint8_t x388 = 1U;
	int32_t t80 = -61;

	t80 = (x385-(x386==(x387*x388)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x389 = INT16_MIN;
	static int64_t x390 = -1LL;
	int64_t x391 = -1LL;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t81 = -51066624;

	t81 = (x389-(x390==(x391*x392)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x394 = INT16_MAX;
	uint8_t x395 = 0U;
	static volatile int16_t x396 = INT16_MIN;
	static int32_t t82 = -1002442555;

	t82 = (x393-(x394==(x395*x396)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x397 = INT64_MIN;
	int8_t x398 = INT8_MAX;
	int16_t x399 = -1;
	volatile uint64_t x400 = 160291104054599LLU;
	static volatile int64_t t83 = INT64_MIN;

	t83 = (x397-(x398==(x399*x400)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x401 = INT64_MIN;
	static volatile int32_t x402 = 6;
	int64_t x403 = -1LL;
	int8_t x404 = INT8_MAX;
	static volatile int64_t t84 = INT64_MIN;

	t84 = (x401-(x402==(x403*x404)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x405 = UINT8_MAX;
	int16_t x406 = INT16_MIN;
	static volatile int32_t x407 = 855;
	static int16_t x408 = INT16_MAX;
	volatile int32_t t85 = 1381176;

	t85 = (x405-(x406==(x407*x408)));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x409 = 12638;
	uint64_t x410 = 5624468025540614998LLU;
	uint64_t x412 = UINT64_MAX;

	t86 = (x409-(x410==(x411*x412)));

	if (t86 != 12638) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x413 = -2400247;
	volatile int64_t x414 = INT64_MIN;
	static int8_t x416 = -1;

	t87 = (x413-(x414==(x415*x416)));

	if (t87 != -2400247) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x417 = 15357796097018493LL;
	int8_t x418 = -6;
	int16_t x419 = INT16_MIN;
	static int64_t t88 = -64481LL;

	t88 = (x417-(x418==(x419*x420)));

	if (t88 != 15357796097018493LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x421 = INT16_MIN;
	static int8_t x422 = -1;
	static uint32_t x423 = UINT32_MAX;
	volatile int16_t x424 = INT16_MAX;
	static int32_t t89 = -31;

	t89 = (x421-(x422==(x423*x424)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x425 = 0U;
	volatile int64_t x427 = -1LL;
	static uint64_t x428 = 10350474301LLU;
	int32_t t90 = -34;

	t90 = (x425-(x426==(x427*x428)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x429 = 7741LLU;
	int16_t x430 = INT16_MIN;
	static int32_t x431 = INT32_MAX;
	static int32_t x432 = -1;
	uint64_t t91 = 90904811330LLU;

	t91 = (x429-(x430==(x431*x432)));

	if (t91 != 7741LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x434 = UINT8_MAX;
	int16_t x435 = 6652;
	uint8_t x436 = 36U;
	static volatile uint64_t t92 = UINT64_MAX;

	t92 = (x433-(x434==(x435*x436)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x441 = INT16_MAX;
	static volatile int16_t x442 = INT16_MIN;
	int64_t x443 = -1LL;
	static volatile uint64_t x444 = 97341LLU;

	t93 = (x441-(x442==(x443*x444)));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = 944;
	uint16_t x450 = 14U;
	volatile int64_t x451 = -1LL;
	static int8_t x452 = INT8_MAX;
	int32_t t94 = -1271;

	t94 = (x449-(x450==(x451*x452)));

	if (t94 != 944) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x453 = INT32_MIN;
	int8_t x454 = INT8_MIN;
	volatile uint16_t x455 = 3U;
	static int32_t t95 = INT32_MIN;

	t95 = (x453-(x454==(x455*x456)));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x458 = -1;
	uint8_t x459 = 0U;
	uint16_t x460 = 3U;
	int32_t t96 = INT32_MAX;

	t96 = (x457-(x458==(x459*x460)));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x461 = 17787U;
	uint16_t x462 = 1207U;
	volatile int8_t x463 = -5;
	static uint64_t x464 = 21656LLU;
	int32_t t97 = -4;

	t97 = (x461-(x462==(x463*x464)));

	if (t97 != 17787) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x465 = INT8_MIN;
	volatile uint64_t x466 = 103044605LLU;
	int16_t x467 = 2670;
	uint32_t x468 = UINT32_MAX;
	int32_t t98 = 13419;

	t98 = (x465-(x466==(x467*x468)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x473 = UINT8_MAX;
	uint32_t x474 = UINT32_MAX;
	static uint16_t x475 = UINT16_MAX;
	int64_t x476 = -1LL;
	int32_t t99 = -383;

	t99 = (x473-(x474==(x475*x476)));

	if (t99 != 255) { NG(); } else { ; }
	
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

