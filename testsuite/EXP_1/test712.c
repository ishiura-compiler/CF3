#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 8;
int16_t x6 = INT16_MIN;
uint16_t x7 = UINT16_MAX;
int32_t x15 = INT32_MIN;
int32_t t4 = -7615;
uint64_t x25 = UINT64_MAX;
int32_t t7 = -226830826;
uint64_t x45 = 118995340LLU;
volatile int8_t x46 = 1;
int32_t t9 = 197865376;
uint8_t x57 = 1U;
static uint8_t x59 = 48U;
static volatile int32_t t12 = -775957;
int32_t x66 = INT32_MIN;
int8_t x73 = INT8_MIN;
int16_t x76 = -1;
int32_t t15 = 1192126;
static int64_t x88 = INT64_MAX;
int64_t x98 = INT64_MIN;
int64_t x100 = INT64_MIN;
int64_t x102 = -1LL;
int32_t x105 = INT32_MIN;
int32_t t21 = -99;
uint8_t x111 = 6U;
static int16_t x112 = INT16_MIN;
int32_t t22 = -354082;
static uint32_t x115 = 12108U;
int32_t x151 = 77599035;
uint64_t x154 = UINT64_MAX;
static int32_t t29 = 87908877;
static uint32_t x162 = 9949U;
int32_t t32 = 760;
volatile int8_t x186 = INT8_MIN;
volatile int16_t x189 = 1457;
int64_t x190 = INT64_MIN;
static int8_t x192 = INT8_MAX;
uint32_t x200 = UINT32_MAX;
int16_t x202 = -14386;
uint16_t x203 = 329U;
int16_t x204 = 796;
uint8_t x229 = UINT8_MAX;
static int16_t x231 = INT16_MAX;
static int8_t x239 = -2;
int32_t x259 = INT32_MAX;
static uint16_t x265 = 10U;
volatile int32_t t53 = 351;
uint64_t x277 = 3359220LLU;
int16_t x280 = INT16_MAX;
uint8_t x284 = 9U;
uint8_t x294 = UINT8_MAX;
volatile int32_t t60 = -8;
uint64_t x307 = UINT64_MAX;
volatile uint64_t x309 = UINT64_MAX;
volatile int32_t x321 = 383;
volatile uint64_t x331 = UINT64_MAX;
volatile int32_t x337 = INT32_MAX;
int16_t x342 = 71;
volatile int64_t x349 = INT64_MAX;
volatile uint16_t x357 = 0U;
static volatile int32_t x367 = 15892;
int16_t x368 = -1;
volatile int32_t x370 = 240376334;
int32_t t75 = -356623858;
uint32_t x381 = 1095184U;
static int64_t x382 = INT64_MIN;
uint16_t x384 = 7U;
static int16_t x387 = 0;
static int32_t t78 = -297392016;
int16_t x393 = INT16_MAX;
static uint64_t x394 = UINT64_MAX;
volatile uint64_t x400 = UINT64_MAX;
uint8_t x401 = 21U;
int16_t x403 = INT16_MAX;
int32_t t82 = -998989899;
int16_t x412 = -52;
int8_t x416 = INT8_MAX;
int16_t x418 = -1;
volatile int32_t x419 = INT32_MIN;
static int32_t x423 = -1;
static volatile int32_t t87 = 462;
volatile uint16_t x431 = 3U;
volatile int32_t t89 = -316053;
uint16_t x439 = UINT16_MAX;
int64_t x444 = INT64_MIN;
volatile int32_t t91 = 11033;
int8_t x455 = INT8_MIN;
int64_t x457 = INT64_MIN;
uint64_t x459 = UINT64_MAX;
uint8_t x461 = UINT8_MAX;
static int32_t x465 = -1;
int64_t x468 = INT64_MIN;
int16_t x470 = INT16_MAX;


void f0(void) {
	volatile int32_t x1 = -117901;
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MAX;
	static int64_t x4 = 3737556773LL;

	t0 = (((x1%x2)*x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	uint32_t x8 = 2205U;
	volatile int32_t t1 = 805011;

	t1 = (((x5%x6)*x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile uint16_t x10 = 3U;
	int32_t x11 = -132330914;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 1;

	t2 = (((x9%x10)*x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile uint8_t x14 = 16U;
	static uint64_t x16 = 263563LLU;
	volatile int32_t t3 = -474344839;

	t3 = (((x13%x14)*x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x21 = -1;
	uint16_t x22 = UINT16_MAX;
	uint16_t x23 = 250U;
	volatile uint8_t x24 = 8U;

	t4 = (((x21%x22)*x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x26 = UINT64_MAX;
	static int64_t x27 = 3863022LL;
	uint8_t x28 = UINT8_MAX;
	static volatile int32_t t5 = -17480;

	t5 = (((x25%x26)*x27)<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 0U;
	int8_t x30 = INT8_MIN;
	volatile int8_t x31 = INT8_MIN;
	volatile uint8_t x32 = UINT8_MAX;
	int32_t t6 = -1977;

	t6 = (((x29%x30)*x31)<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1;
	uint16_t x38 = 1335U;
	volatile int8_t x39 = -1;
	int16_t x40 = INT16_MAX;

	t7 = (((x37%x38)*x39)<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	int32_t x42 = INT32_MAX;
	int8_t x43 = INT8_MIN;
	static int8_t x44 = INT8_MAX;
	int32_t t8 = 1891;

	t8 = (((x41%x42)*x43)<=x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x47 = INT32_MAX;
	int8_t x48 = INT8_MIN;

	t9 = (((x45%x46)*x47)<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = UINT32_MAX;
	int32_t x50 = -418472;
	int32_t x51 = -1;
	int64_t x52 = INT64_MIN;
	int32_t t10 = 3654;

	t10 = (((x49%x50)*x51)<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 521U;
	uint32_t x54 = 23722U;
	int8_t x55 = -10;
	int64_t x56 = -13795936273554935LL;
	static volatile int32_t t11 = -19881412;

	t11 = (((x53%x54)*x55)<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x58 = 3607229485267689LLU;
	volatile uint8_t x60 = UINT8_MAX;

	t12 = (((x57%x58)*x59)<=x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = -1;
	uint64_t x62 = 1097323921LLU;
	int64_t x63 = -1LL;
	uint64_t x64 = 2388LLU;
	volatile int32_t t13 = -45973;

	t13 = (((x61%x62)*x63)<=x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = INT16_MIN;
	uint32_t x67 = UINT32_MAX;
	static int32_t x68 = INT32_MIN;
	volatile int32_t t14 = 3901740;

	t14 = (((x65%x66)*x67)<=x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x74 = INT16_MIN;
	volatile int16_t x75 = -1;

	t15 = (((x73%x74)*x75)<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	uint8_t x78 = UINT8_MAX;
	volatile int64_t x79 = -3LL;
	static int8_t x80 = -1;
	static volatile int32_t t16 = -4982;

	t16 = (((x77%x78)*x79)<=x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MAX;
	int32_t x87 = -103294;
	int32_t t17 = 11867438;

	t17 = (((x85%x86)*x87)<=x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = 1525;
	int32_t x94 = INT32_MIN;
	int8_t x95 = 30;
	uint8_t x96 = UINT8_MAX;
	int32_t t18 = -207;

	t18 = (((x93%x94)*x95)<=x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x97 = -1;
	static uint64_t x99 = UINT64_MAX;
	static volatile int32_t t19 = 1052;

	t19 = (((x97%x98)*x99)<=x100);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x101 = 54478LLU;
	uint32_t x103 = 7238U;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t20 = 21;

	t20 = (((x101%x102)*x103)<=x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x106 = 217U;
	static volatile uint32_t x107 = 0U;
	volatile uint16_t x108 = 12U;

	t21 = (((x105%x106)*x107)<=x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x109 = 119368296026LL;
	int16_t x110 = -1;

	t22 = (((x109%x110)*x111)<=x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = 0;
	int64_t x114 = INT64_MIN;
	static int8_t x116 = INT8_MIN;
	static int32_t t23 = 796876419;

	t23 = (((x113%x114)*x115)<=x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = -1;
	int8_t x122 = INT8_MIN;
	volatile int64_t x123 = 6786LL;
	volatile uint64_t x124 = UINT64_MAX;
	static int32_t t24 = 279;

	t24 = (((x121%x122)*x123)<=x124);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x125 = INT32_MIN;
	int32_t x126 = INT32_MAX;
	uint16_t x127 = 461U;
	uint16_t x128 = UINT16_MAX;
	static volatile int32_t t25 = 97285;

	t25 = (((x125%x126)*x127)<=x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x133 = INT16_MIN;
	volatile uint8_t x134 = 3U;
	volatile int16_t x135 = INT16_MAX;
	static int8_t x136 = INT8_MIN;
	static volatile int32_t t26 = 1;

	t26 = (((x133%x134)*x135)<=x136);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	volatile int32_t x139 = -683093;
	uint32_t x140 = 154U;
	int32_t t27 = -10388078;

	t27 = (((x137%x138)*x139)<=x140);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x149 = UINT16_MAX;
	uint32_t x150 = 1U;
	int32_t x152 = 89;
	static volatile int32_t t28 = -12;

	t28 = (((x149%x150)*x151)<=x152);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x153 = INT16_MAX;
	static int32_t x155 = INT32_MIN;
	static int16_t x156 = INT16_MIN;

	t29 = (((x153%x154)*x155)<=x156);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x157 = UINT64_MAX;
	static uint64_t x158 = 8760176973LLU;
	uint16_t x159 = 56U;
	int8_t x160 = 4;
	int32_t t30 = -32702;

	t30 = (((x157%x158)*x159)<=x160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x161 = INT8_MIN;
	static int8_t x163 = -1;
	int8_t x164 = 5;
	volatile int32_t t31 = 351;

	t31 = (((x161%x162)*x163)<=x164);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x169 = -1LL;
	uint32_t x170 = UINT32_MAX;
	static uint64_t x171 = 349405438166811LLU;
	volatile int32_t x172 = INT32_MIN;

	t32 = (((x169%x170)*x171)<=x172);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x173 = INT8_MAX;
	volatile uint64_t x174 = 179804119893LLU;
	static uint16_t x175 = 100U;
	int64_t x176 = INT64_MAX;
	int32_t t33 = -1819476;

	t33 = (((x173%x174)*x175)<=x176);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = -598778929;
	int32_t x178 = -4464544;
	static int16_t x179 = -1;
	int8_t x180 = -3;
	volatile int32_t t34 = 59383736;

	t34 = (((x177%x178)*x179)<=x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = 6;
	int16_t x187 = INT16_MAX;
	static volatile uint16_t x188 = 7784U;
	volatile int32_t t35 = 0;

	t35 = (((x185%x186)*x187)<=x188);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x191 = -54;
	static volatile int32_t t36 = -10230279;

	t36 = (((x189%x190)*x191)<=x192);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = 0;
	uint8_t x194 = 25U;
	static uint64_t x195 = 10896239LLU;
	int64_t x196 = INT64_MIN;
	int32_t t37 = 1;

	t37 = (((x193%x194)*x195)<=x196);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x197 = 432038623U;
	static uint8_t x198 = 1U;
	int16_t x199 = INT16_MAX;
	int32_t t38 = -42;

	t38 = (((x197%x198)*x199)<=x200);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x201 = INT64_MIN;
	int32_t t39 = -9404;

	t39 = (((x201%x202)*x203)<=x204);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x205 = 514082810;
	volatile int8_t x206 = -7;
	int8_t x207 = -1;
	int8_t x208 = INT8_MAX;
	int32_t t40 = 62407;

	t40 = (((x205%x206)*x207)<=x208);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x209 = 195U;
	static int16_t x210 = INT16_MIN;
	uint8_t x211 = 2U;
	static uint8_t x212 = 8U;
	volatile int32_t t41 = -250;

	t41 = (((x209%x210)*x211)<=x212);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x213 = -4429661501087819LL;
	int32_t x214 = 24;
	uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = INT16_MAX;
	volatile int32_t t42 = -821;

	t42 = (((x213%x214)*x215)<=x216);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x221 = UINT32_MAX;
	uint16_t x222 = UINT16_MAX;
	uint32_t x223 = UINT32_MAX;
	uint64_t x224 = 269023047124216LLU;
	int32_t t43 = 11;

	t43 = (((x221%x222)*x223)<=x224);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x225 = INT8_MIN;
	volatile int64_t x226 = INT64_MIN;
	static uint32_t x227 = 261776U;
	static int16_t x228 = INT16_MAX;
	static int32_t t44 = -50422;

	t44 = (((x225%x226)*x227)<=x228);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x230 = INT16_MIN;
	int16_t x232 = -1;
	static int32_t t45 = 0;

	t45 = (((x229%x230)*x231)<=x232);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x233 = INT64_MIN;
	volatile int64_t x234 = 9724LL;
	uint16_t x235 = 0U;
	volatile int32_t x236 = -31592158;
	volatile int32_t t46 = -4;

	t46 = (((x233%x234)*x235)<=x236);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x237 = 206U;
	int64_t x238 = 1492653LL;
	int64_t x240 = INT64_MAX;
	volatile int32_t t47 = -126760;

	t47 = (((x237%x238)*x239)<=x240);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x241 = 175086019;
	int16_t x242 = -1;
	uint64_t x243 = 27451LLU;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t48 = -4002963;

	t48 = (((x241%x242)*x243)<=x244);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x245 = 112;
	int32_t x246 = INT32_MIN;
	int8_t x247 = INT8_MIN;
	int64_t x248 = -1LL;
	static volatile int32_t t49 = 2040;

	t49 = (((x245%x246)*x247)<=x248);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = INT32_MAX;
	int64_t x254 = -3348373228714LL;
	uint32_t x255 = 67793U;
	int64_t x256 = 223530228993810886LL;
	volatile int32_t t50 = 32;

	t50 = (((x253%x254)*x255)<=x256);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x257 = -207;
	int64_t x258 = INT64_MAX;
	int16_t x260 = INT16_MIN;
	int32_t t51 = 0;

	t51 = (((x257%x258)*x259)<=x260);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x261 = UINT32_MAX;
	volatile int16_t x262 = INT16_MAX;
	uint64_t x263 = UINT64_MAX;
	static int64_t x264 = INT64_MIN;
	volatile int32_t t52 = 3219;

	t52 = (((x261%x262)*x263)<=x264);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x266 = 3U;
	volatile uint8_t x267 = 1U;
	static volatile int32_t x268 = INT32_MIN;

	t53 = (((x265%x266)*x267)<=x268);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x269 = -1LL;
	static uint16_t x270 = 5U;
	volatile int8_t x271 = -25;
	volatile int16_t x272 = -2;
	volatile int32_t t54 = 18352;

	t54 = (((x269%x270)*x271)<=x272);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x273 = UINT8_MAX;
	int8_t x274 = -1;
	volatile uint32_t x275 = 465090107U;
	uint8_t x276 = 1U;
	volatile int32_t t55 = 12348771;

	t55 = (((x273%x274)*x275)<=x276);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x278 = INT8_MIN;
	static volatile int16_t x279 = INT16_MIN;
	int32_t t56 = -55;

	t56 = (((x277%x278)*x279)<=x280);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x281 = -31LL;
	uint32_t x282 = UINT32_MAX;
	volatile int32_t x283 = INT32_MIN;
	volatile int32_t t57 = 39;

	t57 = (((x281%x282)*x283)<=x284);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x285 = -10217083954747LL;
	uint8_t x286 = 2U;
	volatile uint32_t x287 = 6662730U;
	int8_t x288 = -1;
	int32_t t58 = 59;

	t58 = (((x285%x286)*x287)<=x288);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x289 = INT32_MIN;
	volatile uint8_t x290 = 5U;
	int32_t x291 = -103915;
	static uint64_t x292 = 27493265013484LLU;
	int32_t t59 = 1;

	t59 = (((x289%x290)*x291)<=x292);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int64_t x295 = INT64_MIN;
	static int32_t x296 = INT32_MAX;

	t60 = (((x293%x294)*x295)<=x296);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x297 = -1;
	volatile uint64_t x298 = 995928LLU;
	int32_t x299 = INT32_MIN;
	uint8_t x300 = UINT8_MAX;
	int32_t t61 = 5414;

	t61 = (((x297%x298)*x299)<=x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x301 = -1;
	uint16_t x302 = 76U;
	int8_t x303 = 0;
	uint16_t x304 = 28266U;
	static int32_t t62 = -1;

	t62 = (((x301%x302)*x303)<=x304);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	static int64_t x308 = -5351837LL;
	int32_t t63 = -359;

	t63 = (((x305%x306)*x307)<=x308);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x310 = 3506;
	uint16_t x311 = 55U;
	static uint8_t x312 = 13U;
	volatile int32_t t64 = 1;

	t64 = (((x309%x310)*x311)<=x312);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x322 = 30287545;
	static int32_t x323 = -1;
	int16_t x324 = INT16_MIN;
	volatile int32_t t65 = -14;

	t65 = (((x321%x322)*x323)<=x324);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x329 = INT8_MIN;
	int32_t x330 = -8183;
	static uint16_t x332 = 7543U;
	int32_t t66 = -92;

	t66 = (((x329%x330)*x331)<=x332);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x333 = 293439779U;
	volatile int8_t x334 = INT8_MAX;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t67 = 106;

	t67 = (((x333%x334)*x335)<=x336);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x338 = INT32_MAX;
	static int8_t x339 = -1;
	int32_t x340 = INT32_MIN;
	static volatile int32_t t68 = -578249222;

	t68 = (((x337%x338)*x339)<=x340);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x341 = UINT8_MAX;
	volatile int16_t x343 = INT16_MAX;
	int32_t x344 = -9;
	volatile int32_t t69 = -2474;

	t69 = (((x341%x342)*x343)<=x344);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x350 = -1;
	uint16_t x351 = 85U;
	int16_t x352 = INT16_MAX;
	static int32_t t70 = 907;

	t70 = (((x349%x350)*x351)<=x352);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x353 = -18;
	int64_t x354 = INT64_MIN;
	int64_t x355 = -6625938298571228LL;
	volatile uint32_t x356 = UINT32_MAX;
	static int32_t t71 = -1447840;

	t71 = (((x353%x354)*x355)<=x356);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	static int32_t x360 = -1;
	int32_t t72 = 3;

	t72 = (((x357%x358)*x359)<=x360);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x365 = 1349U;
	uint8_t x366 = 5U;
	volatile int32_t t73 = -788697;

	t73 = (((x365%x366)*x367)<=x368);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x369 = -1LL;
	static uint8_t x371 = 10U;
	uint16_t x372 = 279U;
	int32_t t74 = -1658569;

	t74 = (((x369%x370)*x371)<=x372);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x373 = UINT32_MAX;
	int32_t x374 = INT32_MIN;
	uint32_t x375 = 12U;
	static int8_t x376 = INT8_MIN;

	t75 = (((x373%x374)*x375)<=x376);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x377 = 0;
	int32_t x378 = -1;
	uint64_t x379 = 667517905LLU;
	int64_t x380 = INT64_MIN;
	static int32_t t76 = 178372296;

	t76 = (((x377%x378)*x379)<=x380);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x383 = -1;
	static int32_t t77 = 18;

	t77 = (((x381%x382)*x383)<=x384);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x385 = INT64_MIN;
	int32_t x386 = 61138423;
	static int32_t x388 = INT32_MAX;

	t78 = (((x385%x386)*x387)<=x388);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x389 = 28U;
	volatile int16_t x390 = INT16_MAX;
	int32_t x391 = -1;
	int32_t x392 = INT32_MIN;
	static int32_t t79 = -903;

	t79 = (((x389%x390)*x391)<=x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x395 = -5;
	int8_t x396 = -1;
	static volatile int32_t t80 = 187349;

	t80 = (((x393%x394)*x395)<=x396);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x397 = INT32_MIN;
	volatile int64_t x398 = INT64_MIN;
	static volatile int16_t x399 = INT16_MIN;
	int32_t t81 = 29723554;

	t81 = (((x397%x398)*x399)<=x400);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x402 = INT16_MAX;
	static uint64_t x404 = UINT64_MAX;

	t82 = (((x401%x402)*x403)<=x404);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x405 = 172145;
	static int8_t x406 = -1;
	static int8_t x407 = INT8_MAX;
	int64_t x408 = INT64_MIN;
	int32_t t83 = 18828025;

	t83 = (((x405%x406)*x407)<=x408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x409 = 3347474U;
	uint8_t x410 = UINT8_MAX;
	int16_t x411 = -1;
	int32_t t84 = -27952105;

	t84 = (((x409%x410)*x411)<=x412);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x413 = -1;
	uint8_t x414 = UINT8_MAX;
	int8_t x415 = -5;
	int32_t t85 = -35542733;

	t85 = (((x413%x414)*x415)<=x416);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x417 = UINT32_MAX;
	int8_t x420 = -46;
	static volatile int32_t t86 = 0;

	t86 = (((x417%x418)*x419)<=x420);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x421 = INT64_MIN;
	volatile int16_t x422 = INT16_MAX;
	static int64_t x424 = -3132LL;

	t87 = (((x421%x422)*x423)<=x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x429 = 98313U;
	uint64_t x430 = UINT64_MAX;
	static int8_t x432 = 1;
	int32_t t88 = 48;

	t88 = (((x429%x430)*x431)<=x432);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x433 = 159210U;
	int8_t x434 = INT8_MAX;
	int8_t x435 = 6;
	uint32_t x436 = 108677U;

	t89 = (((x433%x434)*x435)<=x436);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x437 = INT8_MIN;
	static int64_t x438 = INT64_MIN;
	int16_t x440 = -1;
	volatile int32_t t90 = -1;

	t90 = (((x437%x438)*x439)<=x440);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x441 = 2U;
	static uint64_t x442 = 91484459339235LLU;
	int64_t x443 = -1LL;

	t91 = (((x441%x442)*x443)<=x444);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x445 = 7955170521291202153LLU;
	volatile uint32_t x446 = 1914U;
	volatile int8_t x447 = INT8_MIN;
	int8_t x448 = -3;
	int32_t t92 = 0;

	t92 = (((x445%x446)*x447)<=x448);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x449 = INT8_MIN;
	int16_t x450 = INT16_MIN;
	volatile int16_t x451 = -1;
	volatile int32_t x452 = -36028;
	int32_t t93 = 29373;

	t93 = (((x449%x450)*x451)<=x452);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x453 = INT32_MIN;
	volatile uint64_t x454 = UINT64_MAX;
	int16_t x456 = -6045;
	int32_t t94 = -14416;

	t94 = (((x453%x454)*x455)<=x456);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x458 = INT8_MIN;
	uint8_t x460 = 8U;
	volatile int32_t t95 = 6774;

	t95 = (((x457%x458)*x459)<=x460);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x462 = INT32_MAX;
	uint8_t x463 = 18U;
	int64_t x464 = -1LL;
	volatile int32_t t96 = -1;

	t96 = (((x461%x462)*x463)<=x464);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x466 = -1;
	int32_t x467 = INT32_MIN;
	int32_t t97 = -1;

	t97 = (((x465%x466)*x467)<=x468);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x469 = INT32_MAX;
	int16_t x471 = 3;
	volatile uint8_t x472 = 71U;
	volatile int32_t t98 = 306813167;

	t98 = (((x469%x470)*x471)<=x472);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x473 = 758877440;
	int8_t x474 = -1;
	static int32_t x475 = INT32_MIN;
	static int16_t x476 = -1;
	int32_t t99 = -175676690;

	t99 = (((x473%x474)*x475)<=x476);

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

