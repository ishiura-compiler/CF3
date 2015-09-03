#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
static uint8_t x9 = UINT8_MAX;
volatile int32_t x33 = -1;
int16_t x39 = INT16_MAX;
volatile int8_t x40 = 0;
volatile int64_t t6 = 301636LL;
uint64_t x45 = 8499513356LLU;
static int8_t x46 = -2;
uint64_t t7 = 2309758110255LLU;
static int16_t x50 = -10;
static volatile uint64_t t9 = 1244063638LLU;
volatile int8_t x74 = -1;
uint32_t x86 = 3200428U;
volatile int8_t x91 = 54;
int64_t x95 = INT64_MIN;
uint64_t t15 = 1LLU;
int8_t x113 = -1;
int8_t x114 = INT8_MIN;
volatile int32_t t17 = -117;
static int16_t x133 = -256;
volatile int64_t t22 = -42LL;
static int32_t t23 = -28255147;
static volatile int64_t x151 = INT64_MIN;
volatile int64_t t26 = -8283394686313415LL;
static uint64_t x162 = 10934LLU;
static uint16_t x164 = 460U;
uint8_t x174 = UINT8_MAX;
int8_t x196 = INT8_MAX;
int32_t x202 = INT32_MAX;
uint32_t x205 = 16U;
uint32_t t35 = 6236758U;
volatile int16_t x216 = 1703;
volatile int16_t x231 = INT16_MIN;
static uint32_t x238 = UINT32_MAX;
volatile int8_t x240 = INT8_MIN;
volatile int8_t x260 = INT8_MIN;
volatile uint64_t t45 = 2LLU;
volatile uint32_t x261 = 4295U;
int8_t x274 = INT8_MAX;
volatile int8_t x277 = INT8_MAX;
static int64_t x288 = -1LL;
volatile int8_t x296 = -8;
int32_t x310 = INT32_MAX;
uint8_t x318 = 30U;
volatile int8_t x320 = -1;
volatile uint64_t t57 = 412833883325138845LLU;
static volatile int32_t x332 = -1;
int64_t x336 = 1LL;
volatile int16_t x342 = INT16_MIN;
uint32_t x351 = 2017647U;
int16_t x360 = INT16_MIN;
volatile int64_t x363 = 22773094201870LL;
int16_t x364 = -502;
uint64_t x368 = 14175LLU;
volatile int8_t x373 = -1;
volatile int16_t x374 = INT16_MIN;
int32_t x389 = INT32_MIN;
volatile int32_t x394 = INT32_MAX;
volatile uint64_t t73 = 57596104728952LLU;
int64_t x406 = INT64_MAX;
volatile int32_t t74 = -260123175;
volatile int16_t x410 = -859;
int16_t x432 = 1763;
volatile int32_t t77 = -1859;
static uint8_t x443 = 5U;
uint32_t x446 = 581540U;
uint16_t x448 = 376U;
static volatile int32_t t80 = -3;
volatile int64_t x449 = -1LL;
volatile uint8_t x451 = UINT8_MAX;
int16_t x457 = -1;
int8_t x458 = INT8_MIN;
int16_t x460 = INT16_MAX;
static uint32_t x474 = 8721843U;
int8_t x478 = INT8_MIN;
static int64_t x479 = -1LL;
static int32_t x482 = -1;
int16_t x487 = -1;
int32_t x488 = -1653;
static int32_t x497 = -1;
int16_t x498 = INT16_MAX;
uint32_t x505 = 43U;
static int8_t x516 = -1;
uint16_t x518 = 161U;
volatile int32_t t95 = 724834191;
int64_t x529 = 817997241906988LL;
int64_t x535 = -443LL;
static uint64_t t98 = 6995731646331442LLU;
int64_t x553 = INT64_MIN;
static uint16_t x554 = UINT16_MAX;


void f0(void) {
	static volatile int8_t x1 = -60;
	int8_t x3 = INT8_MIN;
	static int16_t x4 = -13826;
	static int32_t t0 = -343;

	t0 = ((x1|(x2<x3))*x4);

	if (t0 != 829560) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MAX;
	volatile int8_t x7 = INT8_MIN;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 1443433U;

	t1 = ((x5|(x6<x7))*x8);

	if (t1 != 2147483648U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	volatile int8_t x11 = 0;
	volatile int16_t x12 = -50;
	volatile int32_t t2 = -1;

	t2 = ((x9|(x10<x11))*x12);

	if (t2 != -12750) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 26U;
	static uint8_t x14 = 106U;
	uint8_t x15 = 12U;
	volatile uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 89195619987LLU;

	t3 = ((x13|(x14<x15))*x16);

	if (t3 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x25 = 0U;
	static uint16_t x26 = UINT16_MAX;
	volatile int32_t x27 = -196534048;
	static uint8_t x28 = 14U;
	volatile int32_t t4 = 17879;

	t4 = ((x25|(x26<x27))*x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x34 = -1;
	static uint64_t x35 = 0LLU;
	static int64_t x36 = INT64_MAX;
	volatile int64_t t5 = -134039451884959850LL;

	t5 = ((x33|(x34<x35))*x36);

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = -1LL;
	uint16_t x38 = UINT16_MAX;

	t6 = ((x37|(x38<x39))*x40);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x47 = INT16_MIN;
	volatile int32_t x48 = -1;

	t7 = ((x45|(x46<x47))*x48);

	if (t7 != 18446744065210038260LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = UINT16_MAX;
	uint32_t x51 = 15134U;
	uint32_t x52 = UINT32_MAX;
	uint32_t t8 = 59889036U;

	t8 = ((x49|(x50<x51))*x52);

	if (t8 != 4294901761U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x69 = 2197191506188LLU;
	uint8_t x70 = 3U;
	static int32_t x71 = 54;
	int32_t x72 = INT32_MIN;

	t9 = ((x69|(x70<x71))*x72);

	if (t9 != 3933651804276916224LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x73 = 15U;
	static uint64_t x75 = 3662301338966879LLU;
	static uint32_t x76 = UINT32_MAX;
	volatile uint32_t t10 = 17930U;

	t10 = ((x73|(x74<x75))*x76);

	if (t10 != 4294967281U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x77 = 1U;
	uint16_t x78 = 1798U;
	uint8_t x79 = UINT8_MAX;
	volatile int16_t x80 = -1;
	volatile int32_t t11 = -613906;

	t11 = ((x77|(x78<x79))*x80);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x81 = 53646617560LLU;
	uint64_t x82 = 2591325289831918386LLU;
	int32_t x83 = INT32_MIN;
	uint32_t x84 = UINT32_MAX;
	uint64_t t12 = 14514115024302LLU;

	t12 = ((x81|(x82<x83))*x84);

	if (t12 != 9049539027353048103LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x85 = 20U;
	int8_t x87 = INT8_MAX;
	volatile int8_t x88 = INT8_MAX;
	volatile int32_t t13 = 535139956;

	t13 = ((x85|(x86<x87))*x88);

	if (t13 != 2540) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x89 = UINT32_MAX;
	uint16_t x90 = 3296U;
	uint64_t x92 = 58765LLU;
	uint64_t t14 = 1063819426498252LLU;

	t14 = ((x89|(x90<x91))*x92);

	if (t14 != 252393753090675LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x93 = 485140241883549LLU;
	volatile int32_t x94 = INT32_MAX;
	int16_t x96 = INT16_MAX;

	t15 = ((x93|(x94<x95))*x96);

	if (t15 != 15896590305798250083LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x97 = INT16_MAX;
	uint32_t x98 = 250307U;
	uint16_t x99 = UINT16_MAX;
	volatile int32_t x100 = 15499;
	volatile int32_t t16 = 15;

	t16 = ((x97|(x98<x99))*x100);

	if (t16 != 507855733) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x115 = 1278U;
	uint16_t x116 = 450U;

	t17 = ((x113|(x114<x115))*x116);

	if (t17 != -450) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x117 = -1;
	int32_t x118 = INT32_MIN;
	uint8_t x119 = 28U;
	int16_t x120 = INT16_MAX;
	volatile int32_t t18 = 50680;

	t18 = ((x117|(x118<x119))*x120);

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x121 = 53U;
	volatile int64_t x122 = -1LL;
	int16_t x123 = -1;
	uint8_t x124 = 28U;
	int32_t t19 = -352366;

	t19 = ((x121|(x122<x123))*x124);

	if (t19 != 1484) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x129 = 0;
	int32_t x130 = -1;
	static int64_t x131 = INT64_MAX;
	int8_t x132 = -1;
	volatile int32_t t20 = -481;

	t20 = ((x129|(x130<x131))*x132);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x134 = -1;
	static uint64_t x135 = UINT64_MAX;
	int32_t x136 = -1;
	volatile int32_t t21 = 8088281;

	t21 = ((x133|(x134<x135))*x136);

	if (t21 != 256) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x137 = 55303018LL;
	volatile int64_t x138 = -1LL;
	static int32_t x139 = -1;
	static volatile int16_t x140 = -1;

	t22 = ((x137|(x138<x139))*x140);

	if (t22 != -55303018LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x141 = UINT16_MAX;
	int16_t x142 = -1;
	volatile int8_t x143 = -50;
	int8_t x144 = INT8_MIN;

	t23 = ((x141|(x142<x143))*x144);

	if (t23 != -8388480) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x145 = INT16_MAX;
	int32_t x146 = 1;
	int8_t x147 = INT8_MIN;
	uint16_t x148 = 1U;
	volatile int32_t t24 = 2460;

	t24 = ((x145|(x146<x147))*x148);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x149 = 1U;
	volatile int32_t x150 = -1;
	int32_t x152 = 181044;
	int32_t t25 = 502;

	t25 = ((x149|(x150<x151))*x152);

	if (t25 != 181044) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x153 = INT64_MAX;
	static volatile int8_t x154 = INT8_MAX;
	int16_t x155 = INT16_MIN;
	int32_t x156 = -1;

	t26 = ((x153|(x154<x155))*x156);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x161 = INT16_MIN;
	uint64_t x163 = 216LLU;
	int32_t t27 = -391012383;

	t27 = ((x161|(x162<x163))*x164);

	if (t27 != -15073280) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x173 = UINT32_MAX;
	int64_t x175 = -303932334992174LL;
	uint8_t x176 = 54U;
	volatile uint32_t t28 = 2529117U;

	t28 = ((x173|(x174<x175))*x176);

	if (t28 != 4294967242U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x177 = -1;
	int16_t x178 = 2226;
	static int8_t x179 = INT8_MIN;
	int16_t x180 = -1;
	volatile int32_t t29 = 34508;

	t29 = ((x177|(x178<x179))*x180);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x185 = INT16_MAX;
	int8_t x186 = -1;
	static int16_t x187 = -3;
	int64_t x188 = -1LL;
	volatile int64_t t30 = -35043481685078330LL;

	t30 = ((x185|(x186<x187))*x188);

	if (t30 != -32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MAX;
	int8_t x191 = -30;
	uint64_t x192 = 437LLU;
	uint64_t t31 = 28156951LLU;

	t31 = ((x189|(x190<x191))*x192);

	if (t31 != 18446743135259197440LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x193 = INT8_MAX;
	volatile uint64_t x194 = UINT64_MAX;
	volatile int16_t x195 = INT16_MIN;
	volatile int32_t t32 = -6;

	t32 = ((x193|(x194<x195))*x196);

	if (t32 != 16129) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x197 = 3657;
	uint32_t x198 = 45U;
	static int16_t x199 = INT16_MAX;
	volatile int64_t x200 = -53494671LL;
	volatile int64_t t33 = 2903496898LL;

	t33 = ((x197|(x198<x199))*x200);

	if (t33 != -195630011847LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x201 = -1LL;
	int64_t x203 = INT64_MIN;
	int16_t x204 = 453;
	int64_t t34 = 23226687547LL;

	t34 = ((x201|(x202<x203))*x204);

	if (t34 != -453LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x206 = -427285984517345LL;
	volatile int16_t x207 = INT16_MIN;
	volatile int8_t x208 = INT8_MIN;

	t35 = ((x205|(x206<x207))*x208);

	if (t35 != 4294965120U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x209 = 106200295091374276LLU;
	int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	static int32_t x212 = 273;
	static volatile uint64_t t36 = 1021003358382LLU;

	t36 = ((x209|(x210<x211))*x212);

	if (t36 != 10545936486235625732LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x213 = INT8_MAX;
	static int32_t x214 = -1;
	int64_t x215 = INT64_MIN;
	volatile int32_t t37 = 3262760;

	t37 = ((x213|(x214<x215))*x216);

	if (t37 != 216281) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x221 = 1;
	static volatile int32_t x222 = INT32_MAX;
	int16_t x223 = INT16_MIN;
	volatile uint64_t x224 = UINT64_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x221|(x222<x223))*x224);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x225 = -94719LL;
	volatile int8_t x226 = INT8_MIN;
	static int16_t x227 = INT16_MAX;
	static int8_t x228 = INT8_MAX;
	int64_t t39 = 51244LL;

	t39 = ((x225|(x226<x227))*x228);

	if (t39 != -12029313LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x229 = INT32_MIN;
	static int16_t x230 = INT16_MIN;
	uint64_t x232 = 242017239LLU;
	uint64_t t40 = 53677377162LLU;

	t40 = ((x229|(x230<x231))*x232);

	if (t40 != 17927016010422943744LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x237 = 6425807LL;
	uint64_t x239 = UINT64_MAX;
	static volatile int64_t t41 = -33300469899025235LL;

	t41 = ((x237|(x238<x239))*x240);

	if (t41 != -822503296LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x241 = UINT64_MAX;
	int64_t x242 = INT64_MIN;
	static int16_t x243 = INT16_MIN;
	static int16_t x244 = INT16_MIN;
	uint64_t t42 = 231LLU;

	t42 = ((x241|(x242<x243))*x244);

	if (t42 != 32768LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x249 = 102U;
	volatile uint16_t x250 = 358U;
	int32_t x251 = INT32_MAX;
	uint16_t x252 = 6317U;
	volatile uint32_t t43 = 0U;

	t43 = ((x249|(x250<x251))*x252);

	if (t43 != 650651U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x253 = -1;
	int16_t x254 = -1;
	volatile int64_t x255 = -11015755278045001LL;
	uint8_t x256 = UINT8_MAX;
	int32_t t44 = 40060855;

	t44 = ((x253|(x254<x255))*x256);

	if (t44 != -255) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x257 = 1LLU;
	volatile int64_t x258 = -1LL;
	uint32_t x259 = 15U;

	t45 = ((x257|(x258<x259))*x260);

	if (t45 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x262 = INT64_MIN;
	volatile int8_t x263 = INT8_MIN;
	int32_t x264 = INT32_MAX;
	static volatile uint32_t t46 = 5378U;

	t46 = ((x261|(x262<x263))*x264);

	if (t46 != 2147479353U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x265 = 297196263693914225LLU;
	volatile uint64_t x266 = 8733778881LLU;
	uint64_t x267 = 2251216LLU;
	static int64_t x268 = 0LL;
	volatile uint64_t t47 = 2085782678981LLU;

	t47 = ((x265|(x266<x267))*x268);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x269 = UINT64_MAX;
	int32_t x270 = 167259898;
	int32_t x271 = -24;
	int8_t x272 = -29;
	uint64_t t48 = 4167454651147LLU;

	t48 = ((x269|(x270<x271))*x272);

	if (t48 != 29LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x273 = INT8_MIN;
	uint16_t x275 = 28647U;
	uint16_t x276 = 266U;
	int32_t t49 = -1070334120;

	t49 = ((x273|(x274<x275))*x276);

	if (t49 != -33782) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x278 = -1;
	int8_t x279 = -1;
	volatile int32_t x280 = 249;
	volatile int32_t t50 = 56625;

	t50 = ((x277|(x278<x279))*x280);

	if (t50 != 31623) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x281 = 117182;
	int8_t x282 = -1;
	int8_t x283 = -2;
	int8_t x284 = INT8_MIN;
	volatile int32_t t51 = 10074202;

	t51 = ((x281|(x282<x283))*x284);

	if (t51 != -14999296) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x285 = INT16_MIN;
	int8_t x286 = -2;
	volatile uint16_t x287 = 192U;
	int64_t t52 = -203983LL;

	t52 = ((x285|(x286<x287))*x288);

	if (t52 != 32767LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x293 = 1572U;
	uint32_t x294 = 20U;
	int32_t x295 = INT32_MIN;
	uint32_t t53 = 88421U;

	t53 = ((x293|(x294<x295))*x296);

	if (t53 != 4294954712U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x305 = -1;
	int64_t x306 = INT64_MIN;
	static int8_t x307 = -1;
	int64_t x308 = -246317895558838730LL;
	int64_t t54 = 445827510LL;

	t54 = ((x305|(x306<x307))*x308);

	if (t54 != 246317895558838730LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x309 = INT8_MIN;
	int8_t x311 = -1;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t55 = -968552378;

	t55 = ((x309|(x310<x311))*x312);

	if (t55 != 16384) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x313 = UINT64_MAX;
	int8_t x314 = 0;
	volatile uint16_t x315 = 6301U;
	int16_t x316 = -1;
	volatile uint64_t t56 = 6LLU;

	t56 = ((x313|(x314<x315))*x316);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x317 = 123858479830458304LLU;
	static int8_t x319 = INT8_MAX;

	t57 = ((x317|(x318<x319))*x320);

	if (t57 != 18322885593879093311LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x321 = 12217;
	int32_t x322 = -169;
	uint16_t x323 = 36U;
	int8_t x324 = INT8_MIN;
	volatile int32_t t58 = -115662017;

	t58 = ((x321|(x322<x323))*x324);

	if (t58 != -1563776) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = 117054LL;
	uint8_t x327 = 34U;
	int8_t x328 = INT8_MIN;
	int32_t t59 = 231203873;

	t59 = ((x325|(x326<x327))*x328);

	if (t59 != 16384) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x329 = 30168U;
	uint8_t x330 = 89U;
	int32_t x331 = -1;
	int32_t t60 = 86;

	t60 = ((x329|(x330<x331))*x332);

	if (t60 != -30168) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x333 = UINT32_MAX;
	uint16_t x334 = 1342U;
	uint32_t x335 = 342568U;
	static volatile int64_t t61 = 333159591807510659LL;

	t61 = ((x333|(x334<x335))*x336);

	if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x337 = 658575U;
	int8_t x338 = INT8_MIN;
	int16_t x339 = -37;
	int16_t x340 = INT16_MIN;
	static volatile uint32_t t62 = 121U;

	t62 = ((x337|(x338<x339))*x340);

	if (t62 != 4189618176U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x341 = INT8_MIN;
	int16_t x343 = INT16_MIN;
	static uint32_t x344 = 137231U;
	volatile uint32_t t63 = 27847827U;

	t63 = ((x341|(x342<x343))*x344);

	if (t63 != 4277401728U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x345 = INT16_MIN;
	volatile int16_t x346 = -1;
	volatile int16_t x347 = -1;
	uint8_t x348 = 0U;
	volatile int32_t t64 = 240530;

	t64 = ((x345|(x346<x347))*x348);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x349 = -11;
	static int8_t x350 = INT8_MIN;
	static int16_t x352 = INT16_MIN;
	static volatile int32_t t65 = -20325;

	t65 = ((x349|(x350<x351))*x352);

	if (t65 != 360448) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x353 = INT32_MAX;
	volatile uint16_t x354 = UINT16_MAX;
	int64_t x355 = -437990759764581516LL;
	static volatile uint64_t x356 = 843252714288395LLU;
	volatile uint64_t t66 = 332293LLU;

	t66 = ((x353|(x354<x355))*x356);

	if (t66 != 9888738845950888693LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x357 = UINT8_MAX;
	int32_t x358 = INT32_MAX;
	uint8_t x359 = 2U;
	static volatile int32_t t67 = 3227117;

	t67 = ((x357|(x358<x359))*x360);

	if (t67 != -8355840) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x361 = 13088;
	static int16_t x362 = INT16_MIN;
	static int32_t t68 = 1;

	t68 = ((x361|(x362<x363))*x364);

	if (t68 != -6570678) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x365 = -8207902651994LL;
	int32_t x366 = -1;
	volatile int64_t x367 = 986888LL;
	volatile uint64_t t69 = 50733336664054LLU;

	t69 = ((x365|(x366<x367))*x368);

	if (t69 != 18330397053617550841LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x375 = -1;
	volatile int8_t x376 = -55;
	int32_t t70 = 10149877;

	t70 = ((x373|(x374<x375))*x376);

	if (t70 != 55) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x381 = 3311;
	int8_t x382 = 0;
	int64_t x383 = -1465880434267003287LL;
	int16_t x384 = INT16_MIN;
	int32_t t71 = -5602886;

	t71 = ((x381|(x382<x383))*x384);

	if (t71 != -108494848) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x390 = 0;
	int16_t x391 = -179;
	uint64_t x392 = 5165LLU;
	uint64_t t72 = 59LLU;

	t72 = ((x389|(x390<x391))*x392);

	if (t72 != 18446732981956509696LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x393 = 293915579U;
	uint32_t x395 = 268683627U;
	uint64_t x396 = 224771873102957LLU;

	t73 = ((x393|(x394<x395))*x396);

	if (t73 != 6164698016228930207LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x405 = 55;
	int32_t x407 = -1;
	uint8_t x408 = UINT8_MAX;

	t74 = ((x405|(x406<x407))*x408);

	if (t74 != 14025) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x409 = 2U;
	volatile uint64_t x411 = UINT64_MAX;
	static uint8_t x412 = 4U;
	volatile int32_t t75 = -414212858;

	t75 = ((x409|(x410<x411))*x412);

	if (t75 != 12) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x417 = 11U;
	int8_t x418 = INT8_MAX;
	int32_t x419 = -1;
	int32_t x420 = -1767268;
	int32_t t76 = -8;

	t76 = ((x417|(x418<x419))*x420);

	if (t76 != -19439948) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x429 = -7;
	int64_t x430 = INT64_MAX;
	static uint32_t x431 = UINT32_MAX;

	t77 = ((x429|(x430<x431))*x432);

	if (t77 != -12341) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x433 = 549220133659LLU;
	uint8_t x434 = 1U;
	volatile uint32_t x435 = UINT32_MAX;
	volatile uint16_t x436 = 21645U;
	uint64_t t78 = 58766428000613LLU;

	t78 = ((x433|(x434<x435))*x436);

	if (t78 != 11887869793049055LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x441 = 21709687U;
	int64_t x442 = -1LL;
	uint32_t x444 = UINT32_MAX;
	volatile uint32_t t79 = 111U;

	t79 = ((x441|(x442<x443))*x444);

	if (t79 != 4273257609U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x445 = 18;
	int32_t x447 = INT32_MIN;

	t80 = ((x445|(x446<x447))*x448);

	if (t80 != 7144) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x450 = INT16_MAX;
	static volatile uint64_t x452 = 48241470740LLU;
	uint64_t t81 = 47662915LLU;

	t81 = ((x449|(x450<x451))*x452);

	if (t81 != 18446744025468080876LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x453 = 0U;
	uint32_t x454 = 151U;
	static uint32_t x455 = UINT32_MAX;
	int8_t x456 = -39;
	volatile int32_t t82 = 1;

	t82 = ((x453|(x454<x455))*x456);

	if (t82 != -39) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x459 = -1LL;
	int32_t t83 = 53108;

	t83 = ((x457|(x458<x459))*x460);

	if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x469 = 904968578U;
	static int64_t x470 = INT64_MAX;
	int64_t x471 = INT64_MIN;
	int8_t x472 = INT8_MIN;
	volatile uint32_t t84 = 5762280U;

	t84 = ((x469|(x470<x471))*x472);

	if (t84 != 128139008U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x473 = INT16_MIN;
	int16_t x475 = -1;
	int8_t x476 = -1;
	volatile int32_t t85 = 9265558;

	t85 = ((x473|(x474<x475))*x476);

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x477 = 0;
	volatile int64_t x480 = INT64_MAX;
	volatile int64_t t86 = INT64_MAX;

	t86 = ((x477|(x478<x479))*x480);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x481 = 7761U;
	int8_t x483 = INT8_MIN;
	int32_t x484 = 3471694;
	volatile uint32_t t87 = 20314185U;

	t87 = ((x481|(x482<x483))*x484);

	if (t87 != 1174013358U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x485 = -1;
	uint64_t x486 = UINT64_MAX;
	volatile int32_t t88 = -629;

	t88 = ((x485|(x486<x487))*x488);

	if (t88 != 1653) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x493 = 1;
	int32_t x494 = 3919;
	int16_t x495 = -1;
	uint16_t x496 = 19805U;
	int32_t t89 = 59042050;

	t89 = ((x493|(x494<x495))*x496);

	if (t89 != 19805) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x499 = UINT16_MAX;
	uint64_t x500 = 171LLU;
	volatile uint64_t t90 = 208603LLU;

	t90 = ((x497|(x498<x499))*x500);

	if (t90 != 18446744073709551445LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x501 = -171130018;
	int32_t x502 = INT32_MAX;
	int32_t x503 = 61735471;
	uint64_t x504 = 3219LLU;
	static volatile uint64_t t91 = 1352LLU;

	t91 = ((x501|(x502<x503))*x504);

	if (t91 != 18446743522842023674LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x506 = INT8_MIN;
	static int8_t x507 = INT8_MIN;
	uint16_t x508 = 11U;
	static uint32_t t92 = 644157U;

	t92 = ((x505|(x506<x507))*x508);

	if (t92 != 473U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x509 = UINT8_MAX;
	volatile int16_t x510 = 29;
	volatile int16_t x511 = -151;
	volatile uint16_t x512 = 6U;
	static volatile int32_t t93 = 472768;

	t93 = ((x509|(x510<x511))*x512);

	if (t93 != 1530) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x513 = INT16_MIN;
	uint16_t x514 = UINT16_MAX;
	int8_t x515 = -1;
	volatile int32_t t94 = 1;

	t94 = ((x513|(x514<x515))*x516);

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x517 = INT16_MIN;
	int64_t x519 = INT64_MIN;
	uint8_t x520 = 4U;

	t95 = ((x517|(x518<x519))*x520);

	if (t95 != -131072) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x530 = 148;
	int8_t x531 = -1;
	uint8_t x532 = 37U;
	int64_t t96 = 1795135575796LL;

	t96 = ((x529|(x530<x531))*x532);

	if (t96 != 30265897950558556LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x533 = 6827LLU;
	int8_t x534 = INT8_MIN;
	static volatile int64_t x536 = INT64_MIN;
	volatile uint64_t t97 = 575523218LLU;

	t97 = ((x533|(x534<x535))*x536);

	if (t97 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x537 = UINT64_MAX;
	int64_t x538 = INT64_MAX;
	int32_t x539 = INT32_MIN;
	int8_t x540 = INT8_MIN;

	t98 = ((x537|(x538<x539))*x540);

	if (t98 != 128LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x555 = 0U;
	volatile uint64_t x556 = 119LLU;
	uint64_t t99 = 430137LLU;

	t99 = ((x553|(x554<x555))*x556);

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

