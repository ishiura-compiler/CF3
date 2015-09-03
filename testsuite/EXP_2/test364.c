#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -641461;
int32_t x2 = -1;
int64_t x9 = -1LL;
uint16_t x10 = UINT16_MAX;
volatile uint64_t x12 = 102067811463792LLU;
volatile uint64_t t3 = 58818586LLU;
uint64_t t4 = 612294LLU;
uint64_t x29 = UINT64_MAX;
int32_t x31 = INT32_MAX;
volatile uint32_t x35 = 16181215U;
static int32_t x38 = 1;
uint32_t x39 = 86785993U;
static uint64_t x45 = UINT64_MAX;
static int64_t x46 = 169275147010607169LL;
int16_t x50 = 34;
static volatile uint16_t x62 = UINT16_MAX;
int64_t x70 = -80460507397655LL;
int16_t x91 = INT16_MAX;
volatile uint64_t x99 = UINT64_MAX;
static int8_t x112 = -1;
int64_t x116 = -1LL;
static uint64_t x117 = 1072356LLU;
uint32_t x122 = 460U;
volatile int64_t t23 = 1793LL;
int32_t x126 = -16107052;
int8_t x127 = INT8_MAX;
uint32_t x128 = 1852468226U;
int64_t x130 = 85LL;
int32_t x149 = INT32_MIN;
int8_t x152 = -3;
int16_t x168 = -1;
int8_t x181 = INT8_MIN;
static volatile int8_t x205 = 49;
int8_t x207 = INT8_MAX;
int16_t x213 = INT16_MAX;
volatile uint64_t x217 = 28528LLU;
int16_t x218 = INT16_MIN;
int32_t x222 = -1;
volatile int32_t t39 = -3354548;
int8_t x232 = 42;
volatile uint64_t x234 = UINT64_MAX;
volatile int8_t x235 = 2;
volatile uint64_t t41 = 138740610967781LLU;
uint32_t x238 = 882883U;
int16_t x240 = INT16_MIN;
static int64_t x241 = INT64_MIN;
static int8_t x251 = -1;
int32_t x263 = -50783;
volatile int8_t x268 = INT8_MIN;
static int8_t x278 = INT8_MIN;
static volatile int8_t x279 = -5;
uint64_t x285 = 593067822LLU;
uint16_t x286 = UINT16_MAX;
uint64_t t50 = 696188988061LLU;
static int32_t x292 = INT32_MIN;
int32_t x300 = -1;
volatile int64_t t53 = 637LL;
int32_t x301 = -2777924;
static uint32_t x304 = 221U;
static uint64_t x306 = 186899339413LLU;
int16_t x313 = 268;
static volatile int32_t t57 = -1002441;
static int16_t x318 = -1;
uint32_t x319 = UINT32_MAX;
uint16_t x320 = 1120U;
uint64_t x330 = 50LLU;
uint32_t x342 = UINT32_MAX;
int16_t x353 = INT16_MIN;
uint32_t x357 = UINT32_MAX;
uint16_t x358 = UINT16_MAX;
int8_t x393 = INT8_MIN;
int32_t x401 = INT32_MIN;
int32_t t71 = -544;
uint16_t x418 = 26U;
static uint32_t t75 = 40503U;
static int8_t x434 = -1;
int64_t x435 = -34675365LL;
static int16_t x439 = 15963;
int64_t x445 = INT64_MAX;
static int64_t t78 = -971LL;
static int16_t x452 = INT16_MAX;
int8_t x454 = 6;
int32_t x456 = -422;
volatile uint64_t t80 = 1LLU;
static uint64_t t81 = 2959LLU;
uint8_t x467 = 0U;
volatile uint64_t t84 = 26026519576390650LLU;
volatile uint32_t x481 = 142U;
uint32_t x483 = 229U;
volatile int16_t x487 = -1;
uint8_t x494 = UINT8_MAX;
int16_t x495 = INT16_MIN;
volatile int8_t x523 = -1;
volatile uint64_t x526 = 19460LLU;
volatile uint64_t t95 = 1LLU;
int16_t x534 = 245;
uint16_t x537 = UINT16_MAX;
int8_t x546 = -1;


void f0(void) {
	static volatile int32_t x3 = -15290099;
	static volatile int8_t x4 = INT8_MAX;
	int32_t t0 = -1632;

	t0 = ((x1-(x2*x3))^x4);

	if (t0 != -15931609) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 18995U;
	int16_t x6 = INT16_MIN;
	uint64_t x7 = 38041712264661395LLU;
	int64_t x8 = INT64_MIN;
	uint64_t t1 = 38LLU;

	t1 = ((x5-(x6*x7))^x8);

	if (t1 != 1395602513029876275LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = -1;
	volatile uint64_t t2 = 24724LLU;

	t2 = ((x9-(x10*x11))^x12);

	if (t2 != 102067811503502LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 8866726036889935LLU;
	uint64_t x14 = 286222647195288105LLU;
	volatile int16_t x15 = 8746;
	int16_t x16 = INT16_MAX;

	t3 = ((x13-(x14*x15))^x16);

	if (t3 != 5462788380546165610LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 11111U;
	uint8_t x26 = 65U;
	static uint64_t x27 = 17311LLU;
	uint16_t x28 = 250U;

	t4 = ((x25-(x26*x27))^x28);

	if (t4 != 18446744073708437746LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x30 = 89501LL;
	int16_t x32 = INT16_MAX;
	uint64_t t5 = 84117157269665583LLU;

	t5 = ((x29-(x30*x31))^x32);

	if (t5 != 18446551871775646307LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -148887122LL;
	static uint32_t x34 = UINT32_MAX;
	uint8_t x36 = UINT8_MAX;
	int64_t t6 = 19826886LL;

	t6 = ((x33-(x34*x35))^x36);

	if (t6 != -4427673230LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = 3;
	uint8_t x40 = 10U;
	static volatile uint32_t t7 = 5969U;

	t7 = ((x37-(x38*x39))^x40);

	if (t7 != 4208181296U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = UINT8_MAX;
	uint32_t x42 = UINT32_MAX;
	int16_t x43 = INT16_MAX;
	static int64_t x44 = INT64_MIN;
	volatile int64_t t8 = 18069335993473141LL;

	t8 = ((x41-(x42*x43))^x44);

	if (t8 != -9223372036854742786LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x47 = 1U;
	int32_t x48 = INT32_MAX;
	volatile uint64_t t9 = 228871716369902048LLU;

	t9 = ((x45-(x46*x47))^x48);

	if (t9 != 18277468928271616065LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = INT8_MIN;
	volatile int16_t x51 = INT16_MAX;
	volatile int8_t x52 = INT8_MIN;
	volatile int32_t t10 = 1;

	t10 = ((x49-(x50*x51))^x52);

	if (t10 != 1114146) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x53 = 10896511;
	volatile int8_t x54 = INT8_MIN;
	int8_t x55 = -1;
	int32_t x56 = -1;
	volatile int32_t t11 = 933780;

	t11 = ((x53-(x54*x55))^x56);

	if (t11 != -10896384) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x61 = -1;
	static int8_t x63 = INT8_MAX;
	static volatile int32_t x64 = -1;
	volatile int32_t t12 = 74089603;

	t12 = ((x61-(x62*x63))^x64);

	if (t12 != 8322945) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x69 = 310LLU;
	static uint32_t x71 = 111U;
	volatile int8_t x72 = INT8_MIN;
	volatile uint64_t t13 = 1072LLU;

	t13 = ((x69-(x70*x71))^x72);

	if (t13 != 18437812957388411567LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MAX;
	volatile uint32_t x84 = 17558263U;
	static volatile uint32_t t14 = 468301U;

	t14 = ((x81-(x82*x83))^x84);

	if (t14 != 1056216328U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x85 = 2614614LLU;
	int8_t x86 = -3;
	static uint16_t x87 = UINT16_MAX;
	uint32_t x88 = 869412U;
	volatile uint64_t t15 = 749041158LLU;

	t15 = ((x85-(x86*x87))^x88);

	if (t15 != 2597239LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MIN;
	static uint16_t x90 = UINT16_MAX;
	static int16_t x92 = -1;
	volatile int32_t t16 = -97;

	t16 = ((x89-(x90*x91))^x92);

	if (t16 != 2147385472) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = -5150;
	int8_t x94 = INT8_MIN;
	static uint8_t x95 = UINT8_MAX;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t17 = -161;

	t17 = ((x93-(x94*x95))^x96);

	if (t17 != -5278) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MIN;
	static int32_t x98 = INT32_MIN;
	int64_t x100 = -1LL;
	uint64_t t18 = 51491962455805LLU;

	t18 = ((x97-(x98*x99))^x100);

	if (t18 != 2147483775LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int64_t x106 = 0LL;
	volatile uint8_t x107 = 56U;
	int8_t x108 = INT8_MAX;
	volatile int64_t t19 = 118928422804LL;

	t19 = ((x105-(x106*x107))^x108);

	if (t19 != 4294967168LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x109 = 1825350557672066LLU;
	int16_t x110 = INT16_MIN;
	static uint8_t x111 = 39U;
	volatile uint64_t t20 = 948680056798085039LLU;

	t20 = ((x109-(x110*x111))^x112);

	if (t20 != 18444918723150601597LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x113 = UINT8_MAX;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = INT8_MIN;
	volatile uint64_t t21 = 928489551888455366LLU;

	t21 = ((x113-(x114*x115))^x116);

	if (t21 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x118 = INT16_MIN;
	uint16_t x119 = 1U;
	volatile int8_t x120 = 1;
	uint64_t t22 = 179357LLU;

	t22 = ((x117-(x118*x119))^x120);

	if (t22 != 1105125LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x121 = INT64_MAX;
	volatile uint16_t x123 = 0U;
	int16_t x124 = -2414;

	t23 = ((x121-(x122*x123))^x124);

	if (t23 != -9223372036854773395LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x125 = 10U;
	uint32_t t24 = 19016447U;

	t24 = ((x125-(x126*x127))^x128);

	if (t24 != 394732508U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x129 = UINT8_MAX;
	int32_t x131 = -56505321;
	volatile int32_t x132 = INT32_MIN;
	volatile int64_t t25 = -13228422LL;

	t25 = ((x129-(x130*x131))^x132);

	if (t25 != -5934465700LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x141 = INT8_MIN;
	volatile int64_t x142 = -1LL;
	uint64_t x143 = 159764620619109191LLU;
	int64_t x144 = INT64_MAX;
	static uint64_t t26 = 13604LLU;

	t26 = ((x141-(x142*x143))^x144);

	if (t26 != 9063607416235666744LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x145 = INT16_MIN;
	int32_t x146 = -405;
	int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MIN;
	volatile int32_t t27 = 119758;

	t27 = ((x145-(x146*x147))^x148);

	if (t27 != 13303680) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x150 = -1LL;
	int8_t x151 = INT8_MIN;
	volatile int64_t t28 = 120162787466LL;

	t28 = ((x149-(x150*x151))^x152);

	if (t28 != 2147483773LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x153 = 396427U;
	static int64_t x154 = 111189LL;
	int8_t x155 = INT8_MAX;
	static int16_t x156 = INT16_MAX;
	static int64_t t29 = -13128366258779716LL;

	t29 = ((x153-(x154*x155))^x156);

	if (t29 != -13702241LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x166 = 43938LLU;
	int8_t x167 = INT8_MAX;
	uint64_t t30 = 78364872259207381LLU;

	t30 = ((x165-(x166*x167))^x168);

	if (t30 != 5612893LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MIN;
	int16_t x171 = 12;
	int32_t x172 = -23;
	int32_t t31 = 14263101;

	t31 = ((x169-(x170*x171))^x172);

	if (t31 != 31209) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x182 = UINT64_MAX;
	volatile uint8_t x183 = UINT8_MAX;
	uint64_t x184 = 63986450372904LLU;
	volatile uint64_t t32 = 66095003035603LLU;

	t32 = ((x181-(x182*x183))^x184);

	if (t32 != 63986450372951LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = 848;
	int64_t x191 = -64518952LL;
	static int16_t x192 = 0;
	int64_t t33 = 51988957LL;

	t33 = ((x189-(x190*x191))^x192);

	if (t33 != 54712071551LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x193 = 1864595U;
	uint16_t x194 = 25U;
	int16_t x195 = 37;
	volatile int32_t x196 = INT32_MAX;
	uint32_t t34 = 41545989U;

	t34 = ((x193-(x194*x195))^x196);

	if (t34 != 2145619977U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x206 = 1;
	int16_t x208 = 285;
	static int32_t t35 = -2462;

	t35 = ((x205-(x206*x207))^x208);

	if (t35 != -337) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x209 = 50U;
	static int16_t x210 = INT16_MIN;
	static int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MIN;
	int64_t t36 = -60156461LL;

	t36 = ((x209-(x210*x211))^x212);

	if (t36 != -9223372036850614222LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x214 = -1;
	int16_t x215 = 7220;
	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t37 = -2145;

	t37 = ((x213-(x214*x215))^x216);

	if (t37 != -58317) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x219 = 0U;
	static int32_t x220 = -1;
	volatile uint64_t t38 = 2868609617LLU;

	t38 = ((x217-(x218*x219))^x220);

	if (t38 != 18446744073709523087LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x221 = UINT16_MAX;
	int32_t x223 = -1;
	int8_t x224 = INT8_MAX;

	t39 = ((x221-(x222*x223))^x224);

	if (t39 != 65409) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x229 = 4U;
	uint8_t x230 = 17U;
	int32_t x231 = -1;
	volatile int32_t t40 = -65246121;

	t40 = ((x229-(x230*x231))^x232);

	if (t40 != 63) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x233 = 1225U;
	volatile int32_t x236 = INT32_MIN;

	t41 = ((x233-(x234*x235))^x236);

	if (t41 != 18446744071562069195LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x237 = -1;
	uint32_t x239 = 545U;
	uint32_t t42 = 1166U;

	t42 = ((x237-(x238*x239))^x240);

	if (t42 != 481192156U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x242 = 7760594480LLU;
	uint64_t x243 = 248803335258506747LLU;
	int8_t x244 = -1;
	volatile uint64_t t43 = 2LLU;

	t43 = ((x241-(x242*x243))^x244);

	if (t43 != 16341897951847563535LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x245 = INT8_MAX;
	int16_t x246 = -3;
	int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MAX;
	int32_t t44 = 23256;

	t44 = ((x245-(x246*x247))^x248);

	if (t44 != -98304) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x249 = 22U;
	int16_t x250 = -1;
	int64_t x252 = -378032233490040816LL;
	volatile int64_t t45 = 33767859212333957LL;

	t45 = ((x249-(x250*x251))^x252);

	if (t45 != -378032233490040827LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x261 = 6U;
	volatile int16_t x262 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	static int64_t t46 = -582700253919921833LL;

	t46 = ((x261-(x262*x263))^x264);

	if (t46 != 9223372035190718470LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x265 = INT32_MIN;
	int64_t x266 = 200389865LL;
	uint32_t x267 = 1U;
	int64_t t47 = 7163245814597409LL;

	t47 = ((x265-(x266*x267))^x268);

	if (t47 != 2347873431LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x273 = 6994151975837169541LLU;
	static int16_t x274 = -1;
	int64_t x275 = 129295LL;
	int32_t x276 = -1;
	volatile uint64_t t48 = 1489363195115397LLU;

	t48 = ((x273-(x274*x275))^x276);

	if (t48 != 11452592097872252779LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x277 = -5LL;
	int16_t x280 = INT16_MAX;
	volatile int64_t t49 = -430820307479118637LL;

	t49 = ((x277-(x278*x279))^x280);

	if (t49 != -32124LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x287 = -1;
	uint64_t x288 = 170362910899LLU;

	t50 = ((x285-(x286*x287))^x288);

	if (t50 != 169805465502LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MIN;
	uint64_t x291 = 92643111471909LLU;
	volatile uint64_t t51 = 1LLU;

	t51 = ((x289-(x290*x291))^x292);

	if (t51 != 15411014597185011712LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x293 = 1LLU;
	int8_t x294 = 5;
	int8_t x295 = INT8_MIN;
	int32_t x296 = -19;
	uint64_t t52 = 11761860169LLU;

	t52 = ((x293-(x294*x295))^x296);

	if (t52 != 18446744073709550956LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x297 = 1102U;
	int64_t x298 = -6417022838LL;
	int32_t x299 = -1;

	t53 = ((x297-(x298*x299))^x300);

	if (t53 != 6417021735LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x302 = INT32_MIN;
	static int8_t x303 = 0;
	volatile uint32_t t54 = 2087934334U;

	t54 = ((x301-(x302*x303))^x304);

	if (t54 != 4292189281U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x305 = 1358770912467797LLU;
	volatile int32_t x307 = -1;
	volatile int64_t x308 = -1LL;
	volatile uint64_t t55 = 31611LLU;

	t55 = ((x305-(x306*x307))^x308);

	if (t55 != 18445385115897744405LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x309 = INT16_MIN;
	static int32_t x310 = -1;
	int16_t x311 = INT16_MIN;
	int64_t x312 = 1LL;
	int64_t t56 = -35292106LL;

	t56 = ((x309-(x310*x311))^x312);

	if (t56 != -65535LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x314 = 3447U;
	uint8_t x315 = 11U;
	int8_t x316 = INT8_MAX;

	t57 = ((x313-(x314*x315))^x316);

	if (t57 != -37744) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x317 = INT64_MAX;
	static int64_t t58 = -57399024484LL;

	t58 = ((x317-(x318*x319))^x320);

	if (t58 != 9223372036854774686LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x321 = 648;
	int16_t x322 = INT16_MIN;
	static int8_t x323 = INT8_MIN;
	uint8_t x324 = 1U;
	volatile int32_t t59 = -7602160;

	t59 = ((x321-(x322*x323))^x324);

	if (t59 != -4193655) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x329 = 88U;
	int64_t x331 = INT64_MIN;
	int64_t x332 = INT64_MIN;
	volatile uint64_t t60 = 5328529383LLU;

	t60 = ((x329-(x330*x331))^x332);

	if (t60 != 9223372036854775896LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x337 = -1;
	volatile int8_t x338 = -1;
	int16_t x339 = -896;
	int16_t x340 = -1545;
	int32_t t61 = 14752383;

	t61 = ((x337-(x338*x339))^x340);

	if (t61 != 1416) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x341 = -3LL;
	uint64_t x343 = 0LLU;
	int64_t x344 = 183252422892655528LL;
	volatile uint64_t t62 = 4437826027790780LLU;

	t62 = ((x341-(x342*x343))^x344);

	if (t62 != 18263491650816896085LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x345 = 5213676686LLU;
	uint32_t x346 = UINT32_MAX;
	volatile int16_t x347 = INT16_MAX;
	int32_t x348 = 90093;
	static uint64_t t63 = 711060048LLU;

	t63 = ((x345-(x346*x347))^x348);

	if (t63 != 918797152LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x354 = 38189U;
	int64_t x355 = 464LL;
	volatile int32_t x356 = -1;
	int64_t t64 = 18872531223640LL;

	t64 = ((x353-(x354*x355))^x356);

	if (t64 != 17752463LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x359 = -1;
	int16_t x360 = INT16_MAX;
	volatile uint32_t t65 = 0U;

	t65 = ((x357-(x358*x359))^x360);

	if (t65 != 32769U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x361 = -1;
	static int8_t x362 = 9;
	uint64_t x363 = 931LLU;
	int8_t x364 = -1;
	static volatile uint64_t t66 = 374772889858LLU;

	t66 = ((x361-(x362*x363))^x364);

	if (t66 != 8379LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x373 = -1;
	uint8_t x374 = 103U;
	static int8_t x375 = 48;
	int64_t x376 = INT64_MIN;
	static int64_t t67 = 0LL;

	t67 = ((x373-(x374*x375))^x376);

	if (t67 != 9223372036854770863LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x377 = UINT32_MAX;
	uint32_t x378 = 3U;
	int64_t x379 = -926112529LL;
	uint64_t x380 = 1354083LLU;
	volatile uint64_t t68 = 140667LLU;

	t68 = ((x377-(x378*x379))^x380);

	if (t68 != 7072561233LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = INT16_MIN;
	static int64_t x396 = 1844191042LL;
	int64_t t69 = 2129608256814LL;

	t69 = ((x393-(x394*x395))^x396);

	if (t69 != 2450743490LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x402 = -7;
	int64_t x403 = -1LL;
	static volatile int32_t x404 = -1;
	int64_t t70 = -173LL;

	t70 = ((x401-(x402*x403))^x404);

	if (t70 != 2147483654LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x409 = 8;
	uint16_t x410 = 11U;
	int8_t x411 = -1;
	volatile int16_t x412 = -1804;

	t71 = ((x409-(x410*x411))^x412);

	if (t71 != -1817) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x413 = 1391934454LL;
	int8_t x414 = INT8_MIN;
	int16_t x415 = INT16_MAX;
	volatile uint16_t x416 = 2U;
	volatile int64_t t72 = -59LL;

	t72 = ((x413-(x414*x415))^x416);

	if (t72 != 1396128628LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x417 = 233U;
	static uint64_t x419 = 29917302475LLU;
	volatile int32_t x420 = INT32_MIN;
	volatile uint64_t t73 = 1LLU;

	t73 = ((x417-(x418*x419))^x420);

	if (t73 != 779075780683LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x421 = UINT8_MAX;
	int16_t x422 = INT16_MAX;
	static int16_t x423 = INT16_MIN;
	int64_t x424 = INT64_MAX;
	int64_t t74 = 3075936327LL;

	t74 = ((x421-(x422*x423))^x424);

	if (t74 != 9223372035781066496LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x429 = INT16_MAX;
	uint32_t x430 = 1334088U;
	volatile uint8_t x431 = 50U;
	static int8_t x432 = -1;

	t75 = ((x429-(x430*x431))^x432);

	if (t75 != 66671632U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x433 = -1;
	volatile int64_t x436 = INT64_MIN;
	int64_t t76 = 77096LL;

	t76 = ((x433-(x434*x435))^x436);

	if (t76 != 9223372036820100442LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x437 = 3U;
	static int32_t x438 = -26647;
	static int16_t x440 = -7924;
	volatile int32_t t77 = -184;

	t77 = ((x437-(x438*x439))^x440);

	if (t77 != -425364676) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x446 = 6U;
	int8_t x447 = INT8_MIN;
	static int64_t x448 = INT64_MIN;

	t78 = ((x445-(x446*x447))^x448);

	if (t78 != -4294966529LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x449 = UINT8_MAX;
	int16_t x450 = INT16_MAX;
	volatile uint64_t x451 = 6LLU;
	static volatile uint64_t t79 = 1069223400775762LLU;

	t79 = ((x449-(x450*x451))^x452);

	if (t79 != 18446744073709387514LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x453 = INT16_MIN;
	uint64_t x455 = 64950LLU;

	t80 = ((x453-(x454*x455))^x456);

	if (t80 != 422886LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x457 = INT32_MIN;
	static uint32_t x458 = UINT32_MAX;
	uint8_t x459 = 126U;
	static uint64_t x460 = 1919599621989790LLU;

	t81 = ((x457-(x458*x459))^x460);

	if (t81 != 1919597474506208LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x461 = 24;
	static int64_t x462 = -1LL;
	uint64_t x463 = 3005809LLU;
	int16_t x464 = INT16_MIN;
	volatile uint64_t t82 = 178LLU;

	t82 = ((x461-(x462*x463))^x464);

	if (t82 != 18446744073706560905LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x465 = -1;
	int32_t x466 = INT32_MAX;
	uint64_t x468 = UINT64_MAX;
	uint64_t t83 = 7843163LLU;

	t83 = ((x465-(x466*x467))^x468);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x469 = -59696;
	int16_t x470 = INT16_MIN;
	uint16_t x471 = 913U;
	uint64_t x472 = UINT64_MAX;

	t84 = ((x469-(x470*x471))^x472);

	if (t84 != 18446744073679694127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x473 = INT16_MAX;
	uint8_t x474 = 4U;
	static volatile uint16_t x475 = 390U;
	uint8_t x476 = 14U;
	int32_t t85 = 5;

	t85 = ((x473-(x474*x475))^x476);

	if (t85 != 31209) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x482 = UINT64_MAX;
	int64_t x484 = INT64_MIN;
	static volatile uint64_t t86 = 1288342884LLU;

	t86 = ((x481-(x482*x483))^x484);

	if (t86 != 9223372036854776179LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x485 = INT64_MIN;
	int16_t x486 = 180;
	uint64_t x488 = 9890LLU;
	static volatile uint64_t t87 = 1LLU;

	t87 = ((x485-(x486*x487))^x488);

	if (t87 != 9223372036854785558LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x493 = INT8_MIN;
	static int16_t x496 = 252;
	volatile int32_t t88 = -4418;

	t88 = ((x493-(x494*x495))^x496);

	if (t88 != 8355708) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x497 = 1133519297533367674LLU;
	int8_t x498 = 1;
	int64_t x499 = -1LL;
	static int32_t x500 = 465535;
	static volatile uint64_t t89 = 7684217209042LLU;

	t89 = ((x497-(x498*x499))^x500);

	if (t89 != 1133519297533038340LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x501 = -3;
	static int32_t x502 = -76276;
	int8_t x503 = -11;
	static int8_t x504 = INT8_MIN;
	volatile int32_t t90 = 0;

	t90 = ((x501-(x502*x503))^x504);

	if (t90 != 838913) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x505 = -1;
	int8_t x506 = 12;
	uint64_t x507 = 2LLU;
	uint32_t x508 = UINT32_MAX;
	volatile uint64_t t91 = 11260908519LLU;

	t91 = ((x505-(x506*x507))^x508);

	if (t91 != 18446744069414584344LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x509 = 1U;
	int64_t x510 = -1LL;
	int64_t x511 = -1LL;
	volatile int32_t x512 = INT32_MIN;
	int64_t t92 = -10582LL;

	t92 = ((x509-(x510*x511))^x512);

	if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x517 = INT16_MIN;
	int16_t x518 = 27;
	int16_t x519 = -1;
	int32_t x520 = INT32_MIN;
	volatile int32_t t93 = -15;

	t93 = ((x517-(x518*x519))^x520);

	if (t93 != 2147450907) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x521 = 1609020299LLU;
	int16_t x522 = -1;
	uint32_t x524 = UINT32_MAX;
	static volatile uint64_t t94 = 4151111LLU;

	t94 = ((x521-(x522*x523))^x524);

	if (t94 != 2685946997LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x525 = INT8_MAX;
	int32_t x527 = -1;
	uint64_t x528 = 3254276014LLU;

	t95 = ((x525-(x526*x527))^x528);

	if (t95 != 3254256429LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x529 = 7U;
	static int8_t x530 = INT8_MIN;
	int32_t x531 = 38941;
	int32_t x532 = -1;
	volatile uint32_t t96 = 376U;

	t96 = ((x529-(x530*x531))^x532);

	if (t96 != 4289982840U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x533 = INT8_MIN;
	int8_t x535 = 1;
	volatile int64_t x536 = -3890LL;
	int64_t t97 = 744328167066LL;

	t97 = ((x533-(x534*x535))^x536);

	if (t97 != 3653LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x538 = -1;
	int8_t x539 = INT8_MIN;
	uint64_t x540 = UINT64_MAX;
	volatile uint64_t t98 = 139554LLU;

	t98 = ((x537-(x538*x539))^x540);

	if (t98 != 18446744073709486208LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x545 = -1LL;
	static uint16_t x547 = UINT16_MAX;
	uint32_t x548 = 26290090U;
	volatile int64_t t99 = 656123755LL;

	t99 = ((x545-(x546*x547))^x548);

	if (t99 != 26335316LL) { NG(); } else { ; }
	
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

