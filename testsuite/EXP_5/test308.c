#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
int16_t x5 = -1736;
volatile int16_t x8 = -273;
volatile int16_t x9 = -1;
int16_t x17 = 115;
static volatile int64_t x25 = 10561379926905LL;
int8_t x36 = -1;
uint64_t x44 = UINT64_MAX;
static int32_t t9 = 9;
int64_t x54 = INT64_MAX;
int64_t x64 = INT64_MIN;
static uint16_t x67 = UINT16_MAX;
int64_t x72 = INT64_MIN;
volatile int32_t t14 = -498310;
volatile uint64_t x75 = UINT64_MAX;
volatile int32_t t15 = 27136555;
volatile int8_t x85 = -1;
int32_t x88 = -1;
int32_t t17 = -786;
int8_t x91 = INT8_MIN;
static int32_t x95 = -1;
int8_t x102 = INT8_MIN;
int32_t t22 = -3227;
uint64_t x111 = 7194957LLU;
static volatile int8_t x119 = INT8_MIN;
uint16_t x120 = 1073U;
uint16_t x131 = 31734U;
int32_t t28 = 71521832;
int8_t x136 = 0;
static uint64_t x138 = 6713318200741LLU;
static volatile uint32_t x147 = UINT32_MAX;
uint8_t x159 = 3U;
int32_t x173 = INT32_MIN;
volatile int32_t t41 = -178251725;
int64_t x194 = -1LL;
int32_t t43 = -14930;
volatile int32_t t44 = 134;
int8_t x217 = -1;
static volatile uint64_t x220 = UINT64_MAX;
uint64_t x228 = UINT64_MAX;
int32_t t47 = 749;
int32_t x229 = INT32_MAX;
static int32_t x230 = INT32_MIN;
int64_t x231 = INT64_MIN;
volatile int8_t x232 = -12;
static uint8_t x235 = UINT8_MAX;
static int32_t x248 = INT32_MAX;
static int32_t t51 = -2603461;
int64_t x249 = -3832097940LL;
volatile int32_t t52 = 15;
static volatile uint64_t x253 = 66735378336023LLU;
static int8_t x265 = 13;
int8_t x266 = INT8_MIN;
uint16_t x273 = UINT16_MAX;
uint16_t x275 = 15210U;
volatile int64_t x295 = INT64_MIN;
volatile int64_t x299 = INT64_MIN;
volatile int32_t t63 = 7978;
uint32_t x304 = UINT32_MAX;
int32_t t64 = -116;
volatile int64_t x309 = -1LL;
int32_t x316 = INT32_MAX;
int8_t x322 = 0;
static volatile int8_t x339 = -38;
int8_t x340 = INT8_MIN;
static int32_t x347 = INT32_MIN;
int32_t t73 = -1;
uint16_t x350 = 15813U;
int32_t x351 = 212603776;
volatile int16_t x353 = INT16_MIN;
int16_t x356 = INT16_MIN;
static volatile int32_t t77 = 58;
uint32_t x366 = 1634857489U;
volatile int16_t x377 = -1;
volatile int32_t t82 = 52;
static volatile int32_t t83 = 211;
uint16_t x396 = UINT16_MAX;
volatile int32_t t85 = 518892458;
int64_t x400 = INT64_MAX;
volatile int32_t t86 = 1;
static int16_t x407 = INT16_MIN;
static int32_t x408 = INT32_MIN;
static uint64_t x409 = 7298367097831408244LLU;
static int32_t x425 = -1;
int16_t x426 = 1728;
volatile int16_t x444 = 188;
static int32_t x462 = -1;


void f0(void) {
	int8_t x1 = -1;
	volatile int64_t x3 = INT64_MIN;
	volatile uint64_t x4 = 1273056500010551150LLU;
	int32_t t0 = -577577;

	t0 = (x1<((x2-x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x6 = UINT64_MAX;
	uint32_t x7 = 108512797U;
	int32_t t1 = 6889;

	t1 = (x5<((x6-x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	int8_t x11 = INT8_MAX;
	volatile int64_t x12 = 623126662169877833LL;
	int32_t t2 = 177;

	t2 = (x9<((x10-x11)&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 95586494412362LLU;
	int32_t x14 = INT32_MIN;
	int32_t x15 = INT32_MIN;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -54703967;

	t3 = (x13<((x14-x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = -8;
	static uint64_t x19 = UINT64_MAX;
	int64_t x20 = -1LL;
	volatile int32_t t4 = 1;

	t4 = (x17<((x18-x19)&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = -1;
	volatile uint32_t x23 = UINT32_MAX;
	uint32_t x24 = 4735398U;
	int32_t t5 = -1;

	t5 = (x21<((x22-x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 15072U;
	volatile uint16_t x27 = UINT16_MAX;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -9;

	t6 = (x25<((x26-x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	volatile int16_t x34 = INT16_MIN;
	static int8_t x35 = -1;
	static volatile int32_t t7 = 15;

	t7 = (x33<((x34-x35)&x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = -1LL;
	volatile int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MAX;
	static int32_t x40 = 15606195;
	volatile int32_t t8 = 332951;

	t8 = (x37<((x38-x39)&x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 3;
	uint16_t x42 = 9U;
	static uint64_t x43 = 3LLU;

	t9 = (x41<((x42-x43)&x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -32435437;
	volatile int32_t x50 = INT32_MIN;
	volatile int32_t x51 = -1;
	int64_t x52 = INT64_MIN;
	static volatile int32_t t10 = 2550900;

	t10 = (x49<((x50-x51)&x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 32LLU;
	uint8_t x55 = 4U;
	int16_t x56 = INT16_MIN;
	int32_t t11 = 1925714;

	t11 = (x53<((x54-x55)&x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x61 = 3U;
	int16_t x62 = 467;
	volatile uint32_t x63 = UINT32_MAX;
	volatile int32_t t12 = 201685;

	t12 = (x61<((x62-x63)&x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x65 = 1808323818LLU;
	volatile int32_t x66 = -563459;
	static int64_t x68 = -1581795094816811LL;
	int32_t t13 = -48061060;

	t13 = (x65<((x66-x67)&x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x70 = 73;
	volatile uint8_t x71 = 102U;

	t14 = (x69<((x70-x71)&x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x73 = INT8_MAX;
	volatile int16_t x74 = INT16_MIN;
	uint16_t x76 = UINT16_MAX;

	t15 = (x73<((x74-x75)&x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x77 = 5716U;
	uint32_t x78 = 2092U;
	static uint64_t x79 = 130642597LLU;
	volatile int64_t x80 = INT64_MIN;
	int32_t t16 = -1;

	t16 = (x77<((x78-x79)&x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x86 = 15750LLU;
	static uint16_t x87 = UINT16_MAX;

	t17 = (x85<((x86-x87)&x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = 0;
	int32_t x90 = 1117895;
	uint32_t x92 = 344512U;
	static volatile int32_t t18 = 0;

	t18 = (x89<((x90-x91)&x92));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x93 = 12480068522LL;
	int16_t x94 = -1;
	uint32_t x96 = 5031067U;
	static int32_t t19 = 38063427;

	t19 = (x93<((x94-x95)&x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = INT64_MIN;
	volatile int8_t x98 = INT8_MAX;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = INT8_MAX;
	static volatile int32_t t20 = -39018;

	t20 = (x97<((x98-x99)&x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x101 = INT32_MIN;
	int64_t x103 = INT64_MIN;
	static int32_t x104 = INT32_MIN;
	static volatile int32_t t21 = -910;

	t21 = (x101<((x102-x103)&x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = INT64_MAX;
	int8_t x106 = 1;
	static int8_t x107 = INT8_MIN;
	uint64_t x108 = UINT64_MAX;

	t22 = (x105<((x106-x107)&x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MIN;
	int8_t x112 = INT8_MAX;
	int32_t t23 = 0;

	t23 = (x109<((x110-x111)&x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = INT8_MIN;
	static int8_t x114 = 12;
	int32_t x115 = INT32_MAX;
	int16_t x116 = INT16_MAX;
	int32_t t24 = -147;

	t24 = (x113<((x114-x115)&x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = UINT32_MAX;
	static int8_t x118 = INT8_MIN;
	volatile int32_t t25 = 0;

	t25 = (x117<((x118-x119)&x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x121 = 0U;
	volatile uint32_t x122 = 27144921U;
	int64_t x123 = INT64_MAX;
	static int16_t x124 = -13;
	int32_t t26 = -6;

	t26 = (x121<((x122-x123)&x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x125 = 1LLU;
	volatile int64_t x126 = 388178LL;
	volatile uint32_t x127 = UINT32_MAX;
	uint32_t x128 = 548829U;
	static int32_t t27 = -27;

	t27 = (x125<((x126-x127)&x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x129 = 3883U;
	int64_t x130 = 50LL;
	uint64_t x132 = 3256016080935129LLU;

	t28 = (x129<((x130-x131)&x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = 59;
	volatile uint32_t x134 = 1U;
	static uint32_t x135 = UINT32_MAX;
	volatile int32_t t29 = -108696160;

	t29 = (x133<((x134-x135)&x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MIN;
	static volatile int8_t x139 = 0;
	uint32_t x140 = 3U;
	volatile int32_t t30 = 683508989;

	t30 = (x137<((x138-x139)&x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -1;
	int8_t x142 = 14;
	static int16_t x143 = 12486;
	int16_t x144 = -737;
	volatile int32_t t31 = -5852;

	t31 = (x141<((x142-x143)&x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = -1LL;
	int64_t x146 = -318525132LL;
	uint32_t x148 = 448105290U;
	int32_t t32 = -55700239;

	t32 = (x145<((x146-x147)&x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = UINT32_MAX;
	volatile int32_t x150 = -1;
	int8_t x151 = -1;
	volatile int32_t x152 = -1;
	static volatile int32_t t33 = 144816;

	t33 = (x149<((x150-x151)&x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 412958779U;
	volatile int64_t x154 = 456787860719LL;
	uint16_t x155 = 2304U;
	volatile int8_t x156 = -1;
	int32_t t34 = 160909674;

	t34 = (x153<((x154-x155)&x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = -1;
	volatile uint16_t x158 = 591U;
	int32_t x160 = INT32_MIN;
	volatile int32_t t35 = -11796;

	t35 = (x157<((x158-x159)&x160));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = 2158;
	uint16_t x167 = UINT16_MAX;
	uint16_t x168 = UINT16_MAX;
	int32_t t36 = -48986044;

	t36 = (x165<((x166-x167)&x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = -1;
	int32_t x170 = 71034;
	uint64_t x171 = 140059663863246428LLU;
	int16_t x172 = -174;
	int32_t t37 = -180116;

	t37 = (x169<((x170-x171)&x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x174 = INT32_MIN;
	int16_t x175 = INT16_MIN;
	static volatile int8_t x176 = -1;
	volatile int32_t t38 = -131784773;

	t38 = (x173<((x174-x175)&x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x177 = 11U;
	uint16_t x178 = UINT16_MAX;
	int64_t x179 = 1607LL;
	volatile int16_t x180 = INT16_MAX;
	volatile int32_t t39 = -4;

	t39 = (x177<((x178-x179)&x180));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x185 = -1;
	uint32_t x186 = 828107067U;
	volatile uint16_t x187 = 10415U;
	static volatile uint8_t x188 = UINT8_MAX;
	int32_t t40 = 0;

	t40 = (x185<((x186-x187)&x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x189 = 51;
	volatile uint16_t x190 = UINT16_MAX;
	int16_t x191 = INT16_MIN;
	static int32_t x192 = INT32_MAX;

	t41 = (x189<((x190-x191)&x192));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = UINT32_MAX;
	int64_t x195 = INT64_MAX;
	int64_t x196 = 6105LL;
	static volatile int32_t t42 = -1;

	t42 = (x193<((x194-x195)&x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = 1926158LL;
	static uint64_t x198 = 18LLU;
	int64_t x199 = INT64_MAX;
	int8_t x200 = 2;

	t43 = (x197<((x198-x199)&x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = 1620586;
	static uint8_t x210 = UINT8_MAX;
	static volatile int16_t x211 = 4;
	int32_t x212 = INT32_MAX;

	t44 = (x209<((x210-x211)&x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x213 = INT8_MAX;
	int8_t x214 = INT8_MAX;
	int8_t x215 = 3;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t45 = 257;

	t45 = (x213<((x214-x215)&x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x218 = -1LL;
	uint16_t x219 = UINT16_MAX;
	static int32_t t46 = 16606454;

	t46 = (x217<((x218-x219)&x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x225 = INT64_MIN;
	volatile int64_t x226 = -1LL;
	int8_t x227 = 7;

	t47 = (x225<((x226-x227)&x228));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t t48 = -23662;

	t48 = (x229<((x230-x231)&x232));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = -1;
	int8_t x234 = 1;
	static volatile int8_t x236 = INT8_MIN;
	static volatile int32_t t49 = 11;

	t49 = (x233<((x234-x235)&x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x241 = 337LLU;
	static int64_t x242 = 2398LL;
	int32_t x243 = -1;
	int64_t x244 = INT64_MIN;
	static volatile int32_t t50 = 2452130;

	t50 = (x241<((x242-x243)&x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x245 = INT64_MIN;
	static int8_t x246 = INT8_MIN;
	volatile int32_t x247 = -6338;

	t51 = (x245<((x246-x247)&x248));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x250 = UINT8_MAX;
	uint32_t x251 = 162308U;
	static int8_t x252 = -1;

	t52 = (x249<((x250-x251)&x252));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x254 = UINT32_MAX;
	int16_t x255 = INT16_MIN;
	static int64_t x256 = -494389453LL;
	volatile int32_t t53 = -230533;

	t53 = (x253<((x254-x255)&x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = -3;
	int64_t x258 = -1LL;
	static uint16_t x259 = 9242U;
	int64_t x260 = INT64_MIN;
	volatile int32_t t54 = 49900835;

	t54 = (x257<((x258-x259)&x260));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x261 = UINT16_MAX;
	static int16_t x262 = INT16_MIN;
	volatile int64_t x263 = 258361022LL;
	uint8_t x264 = 0U;
	volatile int32_t t55 = -126635885;

	t55 = (x261<((x262-x263)&x264));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x267 = INT32_MIN;
	static int32_t x268 = INT32_MIN;
	int32_t t56 = 8;

	t56 = (x265<((x266-x267)&x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x269 = 1U;
	volatile int8_t x270 = -1;
	int32_t x271 = INT32_MIN;
	volatile int64_t x272 = INT64_MIN;
	int32_t t57 = 1;

	t57 = (x269<((x270-x271)&x272));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x274 = 12594353U;
	int8_t x276 = 2;
	int32_t t58 = 389;

	t58 = (x273<((x274-x275)&x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x277 = 46;
	static int8_t x278 = INT8_MIN;
	static int16_t x279 = 2440;
	volatile int16_t x280 = INT16_MAX;
	int32_t t59 = 29;

	t59 = (x277<((x278-x279)&x280));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = -1;
	volatile int64_t x286 = -3430LL;
	volatile int8_t x287 = -1;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t60 = 1517;

	t60 = (x285<((x286-x287)&x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x289 = INT32_MAX;
	int16_t x290 = -1;
	int32_t x291 = INT32_MIN;
	static int32_t x292 = 1694547;
	int32_t t61 = 1925;

	t61 = (x289<((x290-x291)&x292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = -1;
	int32_t x294 = -1;
	int16_t x296 = -14814;
	int32_t t62 = -2774569;

	t62 = (x293<((x294-x295)&x296));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x297 = 1U;
	static int8_t x298 = -1;
	int64_t x300 = INT64_MIN;

	t63 = (x297<((x298-x299)&x300));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x301 = 2U;
	volatile uint64_t x302 = 163589279347030704LLU;
	volatile uint32_t x303 = UINT32_MAX;

	t64 = (x301<((x302-x303)&x304));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x305 = -1;
	static int32_t x306 = 206926784;
	int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;
	int32_t t65 = -767;

	t65 = (x305<((x306-x307)&x308));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x310 = -181;
	uint32_t x311 = 1223177U;
	static uint64_t x312 = 2847350LLU;
	volatile int32_t t66 = -2;

	t66 = (x309<((x310-x311)&x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = -797077922676LL;
	uint32_t x314 = 23980U;
	uint64_t x315 = 1152194242048LLU;
	volatile int32_t t67 = 75312;

	t67 = (x313<((x314-x315)&x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	uint32_t x323 = UINT32_MAX;
	volatile int32_t x324 = 0;
	volatile int32_t t68 = -3;

	t68 = (x321<((x322-x323)&x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x325 = 2U;
	int32_t x326 = INT32_MIN;
	int64_t x327 = 933706LL;
	uint32_t x328 = UINT32_MAX;
	static int32_t t69 = -1112713;

	t69 = (x325<((x326-x327)&x328));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = -51724;
	int16_t x330 = INT16_MAX;
	uint16_t x331 = UINT16_MAX;
	int16_t x332 = 47;
	volatile int32_t t70 = 0;

	t70 = (x329<((x330-x331)&x332));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x333 = -1;
	static volatile uint16_t x334 = 338U;
	uint32_t x335 = 962858U;
	int64_t x336 = INT64_MAX;
	volatile int32_t t71 = -31;

	t71 = (x333<((x334-x335)&x336));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x337 = INT8_MIN;
	volatile int16_t x338 = INT16_MAX;
	volatile int32_t t72 = -218;

	t72 = (x337<((x338-x339)&x340));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x345 = UINT32_MAX;
	int8_t x346 = -1;
	volatile uint8_t x348 = 0U;

	t73 = (x345<((x346-x347)&x348));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = -1LL;
	int64_t x352 = -3786LL;
	int32_t t74 = -8;

	t74 = (x349<((x350-x351)&x352));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x354 = -1;
	uint64_t x355 = UINT64_MAX;
	volatile int32_t t75 = -74;

	t75 = (x353<((x354-x355)&x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x357 = 5U;
	static int16_t x358 = -1;
	volatile int64_t x359 = 1LL;
	int8_t x360 = 0;
	volatile int32_t t76 = 2675;

	t76 = (x357<((x358-x359)&x360));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x361 = 60U;
	uint32_t x362 = 1880U;
	static int16_t x363 = 509;
	int64_t x364 = -1LL;

	t77 = (x361<((x362-x363)&x364));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x365 = -1;
	int16_t x367 = 1610;
	static uint32_t x368 = UINT32_MAX;
	volatile int32_t t78 = -505304;

	t78 = (x365<((x366-x367)&x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x369 = 0;
	int8_t x370 = -1;
	int64_t x371 = -1LL;
	uint16_t x372 = 3813U;
	int32_t t79 = -1845641;

	t79 = (x369<((x370-x371)&x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x373 = 5U;
	static int32_t x374 = 152;
	uint32_t x375 = 0U;
	volatile uint32_t x376 = UINT32_MAX;
	static int32_t t80 = -45066753;

	t80 = (x373<((x374-x375)&x376));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x378 = 2468365774LLU;
	static volatile uint32_t x379 = UINT32_MAX;
	uint8_t x380 = UINT8_MAX;
	int32_t t81 = -2;

	t81 = (x377<((x378-x379)&x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = -20;
	int8_t x382 = -29;
	static int8_t x383 = INT8_MIN;
	static int8_t x384 = INT8_MAX;

	t82 = (x381<((x382-x383)&x384));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = -1;
	volatile int8_t x386 = INT8_MIN;
	uint8_t x387 = 4U;
	volatile uint32_t x388 = 16571222U;

	t83 = (x385<((x386-x387)&x388));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x389 = 1;
	static uint16_t x390 = 10649U;
	int64_t x391 = INT64_MAX;
	int16_t x392 = 95;
	static volatile int32_t t84 = -7890562;

	t84 = (x389<((x390-x391)&x392));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x393 = 2U;
	volatile int8_t x394 = INT8_MIN;
	uint32_t x395 = UINT32_MAX;

	t85 = (x393<((x394-x395)&x396));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x397 = UINT64_MAX;
	volatile int32_t x398 = 0;
	static int8_t x399 = INT8_MIN;

	t86 = (x397<((x398-x399)&x400));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x401 = INT32_MIN;
	static uint8_t x402 = 5U;
	int8_t x403 = INT8_MIN;
	int16_t x404 = INT16_MIN;
	int32_t t87 = 39;

	t87 = (x401<((x402-x403)&x404));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x405 = -940591750085556LL;
	static uint8_t x406 = 1U;
	volatile int32_t t88 = -623150693;

	t88 = (x405<((x406-x407)&x408));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x410 = 13031744351LLU;
	static uint16_t x411 = 477U;
	uint8_t x412 = UINT8_MAX;
	int32_t t89 = 111232;

	t89 = (x409<((x410-x411)&x412));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x413 = 0;
	uint16_t x414 = 1295U;
	int16_t x415 = -8314;
	int64_t x416 = 18LL;
	int32_t t90 = 441971;

	t90 = (x413<((x414-x415)&x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x417 = 5U;
	int8_t x418 = 1;
	int8_t x419 = -1;
	static int16_t x420 = INT16_MIN;
	static int32_t t91 = 429826537;

	t91 = (x417<((x418-x419)&x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x421 = INT64_MAX;
	uint32_t x422 = 23991236U;
	static int32_t x423 = INT32_MIN;
	uint32_t x424 = 97U;
	volatile int32_t t92 = 810105712;

	t92 = (x421<((x422-x423)&x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x427 = 398482485LLU;
	int32_t x428 = INT32_MIN;
	volatile int32_t t93 = 3272;

	t93 = (x425<((x426-x427)&x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x429 = UINT32_MAX;
	int32_t x430 = INT32_MAX;
	uint64_t x431 = UINT64_MAX;
	static int8_t x432 = INT8_MIN;
	volatile int32_t t94 = 41744294;

	t94 = (x429<((x430-x431)&x432));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x433 = -736890;
	volatile uint8_t x434 = 28U;
	static int32_t x435 = INT32_MAX;
	volatile uint16_t x436 = 19739U;
	volatile int32_t t95 = -86788;

	t95 = (x433<((x434-x435)&x436));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x441 = INT16_MAX;
	volatile int32_t x442 = INT32_MAX;
	static uint16_t x443 = UINT16_MAX;
	static volatile int32_t t96 = 5;

	t96 = (x441<((x442-x443)&x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x449 = INT32_MIN;
	int64_t x450 = -1LL;
	int8_t x451 = INT8_MIN;
	int64_t x452 = INT64_MIN;
	int32_t t97 = 7976;

	t97 = (x449<((x450-x451)&x452));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x453 = 21U;
	volatile int32_t x454 = INT32_MAX;
	uint16_t x455 = 28U;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t98 = 24;

	t98 = (x453<((x454-x455)&x456));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = UINT64_MAX;
	int8_t x463 = 2;
	int16_t x464 = INT16_MIN;
	volatile int32_t t99 = 521997923;

	t99 = (x461<((x462-x463)&x464));

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

