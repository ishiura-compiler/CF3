#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = -1;
volatile int64_t t2 = 51675470316255LL;
static int64_t x15 = -2723139140LL;
int8_t x16 = INT8_MIN;
int8_t x19 = -9;
volatile int64_t t5 = -1LL;
int32_t x43 = INT32_MIN;
int32_t x60 = -8125058;
uint16_t x66 = UINT16_MAX;
int64_t x72 = INT64_MAX;
int64_t x78 = INT64_MIN;
static volatile int32_t x83 = INT32_MAX;
volatile int32_t t15 = 31;
uint32_t x85 = 215884U;
uint64_t t16 = 629LLU;
int32_t x90 = INT32_MIN;
volatile uint32_t t17 = 0U;
int16_t x94 = -1;
uint64_t x107 = UINT64_MAX;
static uint64_t t20 = 475LLU;
uint16_t x110 = 3U;
static int64_t x114 = INT64_MIN;
int16_t x122 = INT16_MAX;
volatile int32_t x126 = -1;
int32_t t27 = -259339;
int64_t x158 = INT64_MIN;
volatile uint8_t x159 = 10U;
int16_t x167 = 16061;
volatile uint64_t t32 = 34333180866961LLU;
static int64_t x190 = INT64_MAX;
int8_t x198 = 1;
uint16_t x209 = 7726U;
int64_t x210 = INT64_MIN;
uint16_t x211 = UINT16_MAX;
static int32_t x236 = -1;
int64_t x243 = 4296300345939090LL;
int64_t t42 = 531034513635LL;
int16_t x250 = -1;
uint16_t x252 = 11U;
int8_t x253 = INT8_MAX;
volatile uint16_t x256 = 27062U;
static volatile int16_t x258 = INT16_MAX;
int64_t t46 = 2051631LL;
int64_t x289 = 325782LL;
int32_t x291 = INT32_MIN;
uint32_t x303 = 1929234U;
volatile int8_t x310 = INT8_MIN;
static int16_t x323 = 45;
static int8_t x326 = 1;
volatile int32_t x328 = -11534;
int16_t x356 = -1421;
int8_t x361 = 1;
volatile int64_t t62 = -3237LL;
int8_t x379 = INT8_MIN;
uint32_t x380 = 22U;
static int32_t t65 = 2;
uint64_t x406 = 54781967813499238LLU;
static volatile uint64_t t70 = 455403LLU;
int32_t x415 = -167643514;
int8_t x426 = INT8_MIN;
int64_t x443 = INT64_MIN;
static int16_t x457 = 0;
int8_t x460 = INT8_MIN;
int8_t x462 = 60;
int8_t x473 = 0;
static int64_t x475 = INT64_MIN;
static int64_t t81 = -18957025635007LL;
uint64_t x490 = 25184978504022LLU;
static int32_t x491 = -1;
uint64_t x492 = UINT64_MAX;
static int16_t x496 = 3703;
int8_t x503 = INT8_MIN;
static int16_t x506 = INT16_MIN;
static volatile int64_t x516 = -13LL;
int64_t x521 = INT64_MIN;
int8_t x526 = -1;
uint16_t x530 = 656U;
uint8_t x535 = UINT8_MAX;
int16_t x544 = INT16_MIN;
volatile int32_t t95 = 554695459;
int32_t x545 = INT32_MIN;
uint32_t x549 = UINT32_MAX;
int16_t x550 = INT16_MIN;
int64_t x551 = INT64_MIN;
uint8_t x562 = UINT8_MAX;
volatile int8_t x565 = INT8_MAX;
int64_t x568 = -1LL;


void f0(void) {
	int64_t x1 = 297321544587033924LL;
	int64_t x2 = 65501462155LL;
	uint8_t x3 = 27U;
	volatile int64_t t0 = -11711102096LL;

	t0 = ((x1/(x2%x3))/x4);

	if (t0 != -13514615663046996LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 0U;
	volatile int64_t x6 = -1LL;
	uint32_t x7 = 1661403858U;
	int64_t x8 = -12190LL;
	static volatile int64_t t1 = 1978917723142797LL;

	t1 = ((x5/(x6%x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -4;
	uint16_t x10 = 24664U;
	int16_t x11 = INT16_MIN;
	int64_t x12 = -130LL;

	t2 = ((x9/(x10%x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 6442183;
	int64_t x14 = INT64_MIN;
	volatile int64_t t3 = -3LL;

	t3 = ((x13/(x14%x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	int64_t x18 = -119794LL;
	static volatile int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 145412LL;

	t4 = ((x17/(x18%x19))/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	static int8_t x22 = INT8_MIN;
	volatile int64_t x23 = INT64_MIN;
	int16_t x24 = 63;

	t5 = ((x21/(x22%x23))/x24);

	if (t5 != -1143771333935364LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = UINT64_MAX;
	volatile int32_t x38 = -1676;
	volatile uint32_t x39 = UINT32_MAX;
	int16_t x40 = INT16_MAX;
	uint64_t t6 = 25945083LLU;

	t6 = ((x37/(x38%x39))/x40);

	if (t6 != 131076LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -54;
	int64_t x42 = -1LL;
	int64_t x44 = INT64_MIN;
	int64_t t7 = -996LL;

	t7 = ((x41/(x42%x43))/x44);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = 2949;
	static int64_t x54 = 8096669LL;
	uint32_t x55 = 93U;
	volatile int16_t x56 = INT16_MAX;
	int64_t t8 = 24843908687LL;

	t8 = ((x53/(x54%x55))/x56);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x57 = -57;
	int16_t x58 = INT16_MIN;
	volatile uint16_t x59 = 28U;
	volatile int32_t t9 = 19;

	t9 = ((x57/(x58%x59))/x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MIN;
	static int32_t x63 = 2978204;
	volatile int32_t x64 = 12043;
	static volatile int32_t t10 = -57519109;

	t10 = ((x61/(x62%x63))/x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x65 = UINT32_MAX;
	static volatile int64_t x67 = -16815573413LL;
	int32_t x68 = -25088641;
	int64_t t11 = -21101LL;

	t11 = ((x65/(x66%x67))/x68);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x69 = UINT64_MAX;
	volatile uint64_t x70 = 6821LLU;
	int16_t x71 = -1;
	volatile uint64_t t12 = 520682257913762LLU;

	t12 = ((x69/(x70%x71))/x72);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x73 = 3567369LLU;
	uint16_t x74 = 1396U;
	uint64_t x75 = 53894LLU;
	uint64_t x76 = UINT64_MAX;
	static uint64_t t13 = 783273LLU;

	t13 = ((x73/(x74%x75))/x76);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = -1LL;
	uint16_t x79 = 3U;
	int64_t x80 = INT64_MAX;
	int64_t t14 = -74LL;

	t14 = ((x77/(x78%x79))/x80);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x81 = 199U;
	int32_t x82 = INT32_MIN;
	volatile int16_t x84 = INT16_MIN;

	t15 = ((x81/(x82%x83))/x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x86 = 4;
	uint64_t x87 = 287LLU;
	static int64_t x88 = INT64_MIN;

	t16 = ((x85/(x86%x87))/x88);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = -31;
	uint32_t x91 = UINT32_MAX;
	static int32_t x92 = INT32_MIN;

	t17 = ((x89/(x90%x91))/x92);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x93 = 5;
	int32_t x95 = INT32_MAX;
	uint32_t x96 = 252299867U;
	volatile uint32_t t18 = 178749U;

	t18 = ((x93/(x94%x95))/x96);

	if (t18 != 17U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = -1;
	int32_t x98 = -1;
	int16_t x99 = 54;
	int64_t x100 = 23089928205719LL;
	volatile int64_t t19 = 11LL;

	t19 = ((x97/(x98%x99))/x100);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x105 = INT64_MIN;
	volatile int16_t x106 = 875;
	static int32_t x108 = 9;

	t20 = ((x105/(x106%x107))/x108);

	if (t20 != 1171221845949812LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x109 = 205354U;
	int64_t x111 = 15161878168361LL;
	int16_t x112 = INT16_MIN;
	static int64_t t21 = 1194LL;

	t21 = ((x109/(x110%x111))/x112);

	if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x113 = INT32_MIN;
	uint64_t x115 = 3821LLU;
	int8_t x116 = INT8_MIN;
	uint64_t t22 = 17689636009364387LLU;

	t22 = ((x113/(x114%x115))/x116);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x121 = UINT8_MAX;
	volatile uint8_t x123 = 42U;
	int16_t x124 = INT16_MAX;
	volatile int32_t t23 = 1;

	t23 = ((x121/(x122%x123))/x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = INT64_MIN;
	uint32_t x127 = 3975576U;
	int8_t x128 = INT8_MAX;
	volatile int64_t t24 = -3054415351209512428LL;

	t24 = ((x125/(x126%x127))/x128);

	if (t24 != -53987635187LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x133 = INT64_MAX;
	uint16_t x134 = 11U;
	int32_t x135 = 364;
	uint16_t x136 = 2U;
	static volatile int64_t t25 = -63218192718LL;

	t25 = ((x133/(x134%x135))/x136);

	if (t25 != 419244183493398900LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = 271LL;
	volatile uint32_t x146 = UINT32_MAX;
	int16_t x147 = 6;
	int16_t x148 = INT16_MAX;
	volatile int64_t t26 = 10LL;

	t26 = ((x145/(x146%x147))/x148);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x149 = 26U;
	int8_t x150 = -1;
	uint16_t x151 = UINT16_MAX;
	int16_t x152 = 3;

	t27 = ((x149/(x150%x151))/x152);

	if (t27 != -8) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x157 = 4U;
	int16_t x160 = -489;
	int64_t t28 = -248430LL;

	t28 = ((x157/(x158%x159))/x160);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x165 = 62U;
	int16_t x166 = INT16_MIN;
	volatile uint64_t x168 = 170658LLU;
	uint64_t t29 = 58397612LLU;

	t29 = ((x165/(x166%x167))/x168);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x169 = -1;
	int16_t x170 = 1;
	int16_t x171 = INT16_MAX;
	volatile int16_t x172 = INT16_MAX;
	int32_t t30 = 255351;

	t30 = ((x169/(x170%x171))/x172);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x173 = -1LL;
	uint64_t x174 = UINT64_MAX;
	uint16_t x175 = 695U;
	int32_t x176 = -1266802;
	uint64_t t31 = 24603574620946LLU;

	t31 = ((x173/(x174%x175))/x176);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x185 = INT64_MIN;
	volatile uint64_t x186 = 26341689848110568LLU;
	uint64_t x187 = 5LLU;
	static uint8_t x188 = 34U;

	t32 = ((x185/(x186%x187))/x188);

	if (t32 != 90425216047595841LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = 81;
	volatile uint32_t x191 = 186U;
	int32_t x192 = INT32_MAX;
	volatile int64_t t33 = -42742264302LL;

	t33 = ((x189/(x190%x191))/x192);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x193 = INT64_MAX;
	int8_t x194 = 6;
	static uint64_t x195 = 316805LLU;
	int32_t x196 = -480915;
	static uint64_t t34 = 4547228936935LLU;

	t34 = ((x193/(x194%x195))/x196);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x197 = INT32_MAX;
	volatile int64_t x199 = INT64_MAX;
	int8_t x200 = INT8_MIN;
	volatile int64_t t35 = 6621147056444321LL;

	t35 = ((x197/(x198%x199))/x200);

	if (t35 != -16777215LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x205 = -1LL;
	uint16_t x206 = 21133U;
	volatile int16_t x207 = INT16_MAX;
	static uint16_t x208 = 20U;
	volatile int64_t t36 = -641462LL;

	t36 = ((x205/(x206%x207))/x208);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x212 = -1;
	int64_t t37 = 66392856118144LL;

	t37 = ((x209/(x210%x211))/x212);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x221 = 1;
	volatile uint32_t x222 = UINT32_MAX;
	volatile int8_t x223 = INT8_MIN;
	int32_t x224 = INT32_MIN;
	volatile uint32_t t38 = 126433U;

	t38 = ((x221/(x222%x223))/x224);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x225 = 32923297;
	int16_t x226 = 147;
	int32_t x227 = -1700407;
	int16_t x228 = INT16_MIN;
	volatile int32_t t39 = -28082;

	t39 = ((x225/(x226%x227))/x228);

	if (t39 != -6) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x233 = INT64_MIN;
	int64_t x234 = -12LL;
	uint64_t x235 = UINT64_MAX;
	volatile uint64_t t40 = 130748555LLU;

	t40 = ((x233/(x234%x235))/x236);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x237 = 1U;
	int32_t x238 = 944957508;
	volatile uint32_t x239 = 134817U;
	int32_t x240 = -3;
	uint32_t t41 = 10153U;

	t41 = ((x237/(x238%x239))/x240);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x241 = INT32_MAX;
	int8_t x242 = -1;
	int16_t x244 = INT16_MAX;

	t42 = ((x241/(x242%x243))/x244);

	if (t42 != -65538LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x245 = 19382949020724523LLU;
	volatile uint32_t x246 = UINT32_MAX;
	static int32_t x247 = INT32_MIN;
	volatile uint32_t x248 = 45952U;
	uint64_t t43 = 1096533LLU;

	t43 = ((x245/(x246%x247))/x248);

	if (t43 != 196LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x249 = INT32_MAX;
	static volatile int16_t x251 = INT16_MAX;
	volatile int32_t t44 = 481535;

	t44 = ((x249/(x250%x251))/x252);

	if (t44 != -195225786) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x254 = INT32_MAX;
	static int8_t x255 = INT8_MAX;
	int32_t t45 = -469;

	t45 = ((x253/(x254%x255))/x256);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x257 = -1LL;
	uint16_t x259 = 17456U;
	volatile int8_t x260 = INT8_MIN;

	t46 = ((x257/(x258%x259))/x260);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x269 = UINT16_MAX;
	static int16_t x270 = INT16_MIN;
	uint32_t x271 = 3521U;
	int16_t x272 = 91;
	volatile uint32_t t47 = 788U;

	t47 = ((x269/(x270%x271))/x272);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x277 = 0;
	static int16_t x278 = -1;
	uint32_t x279 = 3638U;
	int64_t x280 = INT64_MIN;
	static volatile int64_t t48 = 63LL;

	t48 = ((x277/(x278%x279))/x280);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x290 = INT8_MAX;
	volatile int16_t x292 = -10151;
	volatile int64_t t49 = 1LL;

	t49 = ((x289/(x290%x291))/x292);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = INT64_MIN;
	int8_t x295 = INT8_MAX;
	int32_t x296 = INT32_MIN;
	volatile int64_t t50 = -65477LL;

	t50 = ((x293/(x294%x295))/x296);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x297 = -6;
	uint32_t x298 = 230491U;
	static int32_t x299 = INT32_MAX;
	static uint64_t x300 = UINT64_MAX;
	uint64_t t51 = 3155617782094LLU;

	t51 = ((x297/(x298%x299))/x300);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x301 = 5LLU;
	uint64_t x302 = UINT64_MAX;
	volatile int8_t x304 = -1;
	uint64_t t52 = 288LLU;

	t52 = ((x301/(x302%x303))/x304);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x305 = 136U;
	uint8_t x306 = 35U;
	static volatile uint64_t x307 = 236656882558LLU;
	int64_t x308 = -209986023364386LL;
	uint64_t t53 = 129164125349288LLU;

	t53 = ((x305/(x306%x307))/x308);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x309 = UINT64_MAX;
	int64_t x311 = 1341394740620167861LL;
	int64_t x312 = INT64_MIN;
	uint64_t t54 = 56877611662627LLU;

	t54 = ((x309/(x310%x311))/x312);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x313 = INT8_MAX;
	volatile uint16_t x314 = 5276U;
	uint32_t x315 = 338U;
	int16_t x316 = INT16_MAX;
	static volatile uint32_t t55 = 5U;

	t55 = ((x313/(x314%x315))/x316);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x317 = INT64_MAX;
	int32_t x318 = INT32_MAX;
	static volatile int64_t x319 = 51176860196794LL;
	uint16_t x320 = 350U;
	volatile int64_t t56 = -635252291170721393LL;

	t56 = ((x317/(x318%x319))/x320);

	if (t56 != 12271335LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = -331362543682273LL;
	static int32_t x324 = -1;
	int64_t t57 = 22524493535762LL;

	t57 = ((x321/(x322%x323))/x324);

	if (t57 != -2520LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x325 = INT64_MAX;
	static uint16_t x327 = 3106U;
	volatile int64_t t58 = -14441LL;

	t58 = ((x325/(x326%x327))/x328);

	if (t58 != -799668114865161LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x337 = -6;
	uint8_t x338 = 3U;
	int32_t x339 = 90526673;
	uint16_t x340 = 193U;
	int32_t t59 = -7;

	t59 = ((x337/(x338%x339))/x340);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x353 = INT32_MIN;
	static int64_t x354 = INT64_MAX;
	static int32_t x355 = INT32_MIN;
	int64_t t60 = -152306059561106230LL;

	t60 = ((x353/(x354%x355))/x356);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x362 = INT32_MIN;
	volatile int32_t x363 = INT32_MAX;
	static uint16_t x364 = 3157U;
	int32_t t61 = 856734117;

	t61 = ((x361/(x362%x363))/x364);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x365 = INT32_MIN;
	static uint16_t x366 = 19179U;
	int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MIN;

	t62 = ((x365/(x366%x367))/x368);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x369 = INT16_MAX;
	volatile int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MIN;
	uint16_t x372 = UINT16_MAX;
	volatile int64_t t63 = 1844258172564783LL;

	t63 = ((x369/(x370%x371))/x372);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x377 = INT32_MIN;
	int64_t x378 = -1LL;
	volatile int64_t t64 = -4687LL;

	t64 = ((x377/(x378%x379))/x380);

	if (t64 != 97612893LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x381 = 114U;
	int8_t x382 = -13;
	uint16_t x383 = 73U;
	int8_t x384 = INT8_MIN;

	t65 = ((x381/(x382%x383))/x384);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x385 = -5LL;
	int16_t x386 = -339;
	int64_t x387 = INT64_MIN;
	uint8_t x388 = 7U;
	volatile int64_t t66 = 70099543700674LL;

	t66 = ((x385/(x386%x387))/x388);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x389 = INT16_MAX;
	uint32_t x390 = 168933454U;
	int64_t x391 = INT64_MAX;
	int64_t x392 = INT64_MAX;
	volatile int64_t t67 = 467301683165237334LL;

	t67 = ((x389/(x390%x391))/x392);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x393 = INT16_MIN;
	uint64_t x394 = 105199015883419LLU;
	uint64_t x395 = 5585116656365LLU;
	uint32_t x396 = UINT32_MAX;
	uint64_t t68 = 5015104467616634037LLU;

	t68 = ((x393/(x394%x395))/x396);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x401 = 6U;
	uint64_t x402 = 14203996108LLU;
	uint32_t x403 = 9728U;
	static volatile uint8_t x404 = 53U;
	volatile uint64_t t69 = 2LLU;

	t69 = ((x401/(x402%x403))/x404);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x405 = INT64_MIN;
	int8_t x407 = -1;
	static int8_t x408 = INT8_MIN;

	t70 = ((x405/(x406%x407))/x408);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x409 = 13;
	static volatile int32_t x410 = INT32_MAX;
	int64_t x411 = -62716LL;
	static int16_t x412 = -25;
	int64_t t71 = -84480172641LL;

	t71 = ((x409/(x410%x411))/x412);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x413 = 1047934840070LLU;
	int16_t x414 = INT16_MIN;
	int32_t x416 = -51;
	uint64_t t72 = 24488022383813998LLU;

	t72 = ((x413/(x414%x415))/x416);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x417 = INT16_MIN;
	int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MIN;
	uint64_t x420 = 135741724693320609LLU;
	uint64_t t73 = 836822401096LLU;

	t73 = ((x417/(x418%x419))/x420);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x425 = INT8_MIN;
	volatile int32_t x427 = 22611106;
	int64_t x428 = -1LL;
	volatile int64_t t74 = -1619LL;

	t74 = ((x425/(x426%x427))/x428);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x429 = INT8_MIN;
	volatile int8_t x430 = -1;
	int8_t x431 = INT8_MIN;
	volatile int16_t x432 = INT16_MAX;
	int32_t t75 = -365;

	t75 = ((x429/(x430%x431))/x432);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x441 = UINT8_MAX;
	static int8_t x442 = -1;
	static int8_t x444 = -1;
	volatile int64_t t76 = 4155176LL;

	t76 = ((x441/(x442%x443))/x444);

	if (t76 != 255LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x445 = 11818400LL;
	int16_t x446 = -17;
	static int16_t x447 = 14;
	volatile int32_t x448 = -40615;
	volatile int64_t t77 = 44593922646265LL;

	t77 = ((x445/(x446%x447))/x448);

	if (t77 != 96LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x453 = 1992U;
	static uint32_t x454 = 2070360U;
	volatile uint32_t x455 = UINT32_MAX;
	int32_t x456 = -4917177;
	uint32_t t78 = 387130046U;

	t78 = ((x453/(x454%x455))/x456);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x458 = INT32_MAX;
	uint64_t x459 = UINT64_MAX;
	static volatile uint64_t t79 = 511841437170LLU;

	t79 = ((x457/(x458%x459))/x460);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x461 = 35959052629174LL;
	int8_t x463 = INT8_MIN;
	uint8_t x464 = 7U;
	int64_t t80 = 3627761LL;

	t80 = ((x461/(x462%x463))/x464);

	if (t80 != 85616791974LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x474 = UINT32_MAX;
	int64_t x476 = 1021550900LL;

	t81 = ((x473/(x474%x475))/x476);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x477 = INT16_MIN;
	int8_t x478 = -26;
	uint64_t x479 = 11LLU;
	volatile int32_t x480 = 2092857;
	volatile uint64_t t82 = 239940612LLU;

	t82 = ((x477/(x478%x479))/x480);

	if (t82 != 8814144527652LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x485 = 4U;
	static int32_t x486 = 11614335;
	volatile int64_t x487 = INT64_MIN;
	static int16_t x488 = -1;
	volatile int64_t t83 = -9LL;

	t83 = ((x485/(x486%x487))/x488);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x489 = 355U;
	static uint64_t t84 = 165LLU;

	t84 = ((x489/(x490%x491))/x492);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x493 = 4260980974893LL;
	uint64_t x494 = 535612289LLU;
	uint64_t x495 = UINT64_MAX;
	uint64_t t85 = 384LLU;

	t85 = ((x493/(x494%x495))/x496);

	if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x501 = 0U;
	int32_t x502 = 20;
	int8_t x504 = -1;
	int32_t t86 = -618;

	t86 = ((x501/(x502%x503))/x504);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x505 = 22U;
	volatile int64_t x507 = 72252033LL;
	int16_t x508 = 11;
	static volatile int64_t t87 = -1LL;

	t87 = ((x505/(x506%x507))/x508);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x513 = INT64_MIN;
	static int8_t x514 = 20;
	int64_t x515 = INT64_MIN;
	static int64_t t88 = 12536LL;

	t88 = ((x513/(x514%x515))/x516);

	if (t88 != 35474507834056830LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x517 = 1;
	static volatile int8_t x518 = INT8_MAX;
	uint16_t x519 = UINT16_MAX;
	uint16_t x520 = 2539U;
	volatile int32_t t89 = 1;

	t89 = ((x517/(x518%x519))/x520);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x522 = 54;
	static volatile uint16_t x523 = 86U;
	volatile int16_t x524 = -249;
	volatile int64_t t90 = -1782656426256090LL;

	t90 = ((x521/(x522%x523))/x524);

	if (t90 != 685956569749723LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x525 = -1;
	volatile uint32_t x527 = 765U;
	volatile int16_t x528 = -457;
	volatile uint32_t t91 = 618805U;

	t91 = ((x525/(x526%x527))/x528);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x529 = UINT32_MAX;
	uint8_t x531 = 89U;
	int16_t x532 = INT16_MAX;
	uint32_t t92 = 768039U;

	t92 = ((x529/(x530%x531))/x532);

	if (t92 != 3972U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x533 = UINT32_MAX;
	int32_t x534 = INT32_MIN;
	int16_t x536 = -4;
	volatile uint32_t t93 = 14879008U;

	t93 = ((x533/(x534%x535))/x536);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x537 = -506;
	static volatile int32_t x538 = INT32_MAX;
	uint32_t x539 = 1363316215U;
	int32_t x540 = INT32_MIN;
	uint32_t t94 = 45U;

	t94 = ((x537/(x538%x539))/x540);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x541 = 14;
	int8_t x542 = -1;
	static uint8_t x543 = UINT8_MAX;

	t95 = ((x541/(x542%x543))/x544);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x546 = INT16_MIN;
	int64_t x547 = INT64_MIN;
	uint8_t x548 = UINT8_MAX;
	int64_t t96 = -2299307LL;

	t96 = ((x545/(x546%x547))/x548);

	if (t96 != 257LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x552 = INT8_MIN;
	int64_t t97 = 273458712330692LL;

	t97 = ((x549/(x550%x551))/x552);

	if (t97 != 1023LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x561 = 33U;
	volatile int64_t x563 = INT64_MIN;
	int16_t x564 = 587;
	int64_t t98 = 30LL;

	t98 = ((x561/(x562%x563))/x564);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x566 = -1;
	volatile int8_t x567 = INT8_MIN;
	int64_t t99 = 51709LL;

	t99 = ((x565/(x566%x567))/x568);

	if (t99 != 127LL) { NG(); } else { ; }
	
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

