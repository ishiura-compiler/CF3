#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
static uint16_t x8 = UINT16_MAX;
uint16_t x14 = UINT16_MAX;
volatile int32_t x25 = -1;
uint8_t x28 = 1U;
uint64_t t7 = 14LLU;
uint8_t x46 = 0U;
uint64_t x47 = 292742LLU;
int32_t t9 = 6330;
volatile uint64_t t10 = 7002862256260LLU;
uint32_t x63 = UINT32_MAX;
static uint64_t x64 = 919182297LLU;
int16_t x65 = INT16_MIN;
int8_t x85 = -1;
int64_t x87 = -1LL;
int8_t x88 = INT8_MIN;
int8_t x89 = 33;
static uint8_t x90 = UINT8_MAX;
int32_t x103 = 1;
static uint64_t x105 = 4157522LLU;
int16_t x108 = INT16_MIN;
static uint16_t x117 = 239U;
volatile int16_t x133 = INT16_MIN;
uint64_t x143 = UINT64_MAX;
volatile int32_t x146 = -1;
static int64_t x150 = -1LL;
int16_t x152 = -1;
static uint16_t x158 = 62U;
static uint32_t x161 = 425U;
volatile uint8_t x162 = UINT8_MAX;
uint32_t x167 = UINT32_MAX;
uint16_t x186 = 0U;
uint64_t x202 = 240174375739192LLU;
static int8_t x205 = INT8_MAX;
uint16_t x206 = 0U;
int8_t x207 = 51;
int16_t x208 = INT16_MIN;
uint64_t t37 = 420262471802091LLU;
uint8_t x221 = UINT8_MAX;
uint16_t x223 = UINT16_MAX;
int8_t x225 = -8;
static int64_t x228 = 233208506103LL;
static int32_t x232 = -1;
static int16_t x234 = INT16_MIN;
int8_t x252 = -1;
volatile uint32_t x256 = 23832U;
volatile uint32_t x260 = 23444U;
static int8_t x268 = INT8_MIN;
static int32_t x269 = INT32_MIN;
int64_t t51 = -48871463LL;
static int8_t x283 = -1;
uint32_t x290 = UINT32_MAX;
volatile int8_t x292 = INT8_MAX;
volatile uint64_t t54 = 74327988670LLU;
uint8_t x294 = 27U;
int32_t t55 = -10;
uint32_t x309 = 722433U;
volatile uint32_t t58 = 38U;
int16_t x319 = -149;
volatile uint32_t t59 = 198774571U;
int16_t x321 = INT16_MAX;
volatile int32_t x354 = -18717;
uint16_t x364 = 28U;
uint16_t x370 = 10992U;
volatile uint8_t x372 = UINT8_MAX;
int8_t x376 = 0;
int16_t x379 = 13;
int8_t x380 = INT8_MIN;
uint16_t x383 = 1U;
static int8_t x388 = -1;
int64_t x392 = -12821996206040LL;
int64_t x399 = -1LL;
int16_t x400 = 7248;
int8_t x408 = -1;
volatile uint64_t t77 = 142982LLU;
uint16_t x413 = 298U;
static uint64_t x417 = 4413245931082135LLU;
int32_t x427 = -3130332;
static int32_t t82 = 4820617;
static int64_t x445 = INT64_MAX;
int8_t x451 = -4;
volatile uint8_t x465 = 1U;
volatile int8_t x469 = 0;
int16_t x471 = 99;
static int8_t x474 = 0;
uint8_t x483 = 36U;
uint32_t x487 = 259859U;
int64_t x489 = INT64_MIN;
int32_t x490 = INT32_MAX;
int32_t x492 = INT32_MAX;
volatile int64_t t93 = -59593394240LL;
int16_t x497 = -386;
volatile uint32_t x501 = 1190U;
int64_t x508 = -1LL;
static int64_t x513 = 7366600635761171LL;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	volatile int16_t x2 = -1;
	int32_t x3 = 1271688;
	uint64_t x4 = 33580471LLU;
	static uint64_t t0 = 173LLU;

	t0 = ((x1^(x2*x3))-x4);

	if (t0 != 18446744073677222593LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -15;
	int16_t x7 = INT16_MIN;
	static volatile int32_t t1 = 1;

	t1 = ((x5^(x6*x7))-x8);

	if (t1 != -557056) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	int8_t x11 = INT8_MIN;
	int64_t x12 = -31962325079LL;
	volatile int64_t t2 = 3756613LL;

	t2 = ((x9^(x10*x11))-x12);

	if (t2 != 36257292246LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x15 = 5;
	int16_t x16 = -1;
	static volatile int32_t t3 = -3935661;

	t3 = ((x13^(x14*x15))-x16);

	if (t3 != 327429) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = 1;
	volatile int32_t t4 = 76632678;

	t4 = ((x25^(x26*x27))-x28);

	if (t4 != -257) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = INT16_MIN;
	int16_t x30 = -1;
	int16_t x31 = 53;
	volatile uint32_t x32 = UINT32_MAX;
	volatile uint32_t t5 = 873U;

	t5 = ((x29^(x30*x31))-x32);

	if (t5 != 32716U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = -1;
	uint8_t x34 = 3U;
	int16_t x35 = -1;
	volatile int32_t x36 = -638401;
	int32_t t6 = 904;

	t6 = ((x33^(x34*x35))-x36);

	if (t6 != 638403) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = INT32_MAX;
	int16_t x38 = INT16_MIN;
	volatile uint32_t x39 = 3U;
	static volatile uint64_t x40 = UINT64_MAX;

	t7 = ((x37^(x38*x39))-x40);

	if (t7 != 2147581952LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = 58;
	int64_t x48 = INT64_MIN;
	static volatile uint64_t t8 = 251823743101912830LLU;

	t8 = ((x45^(x46*x47))-x48);

	if (t8 != 9223372036854775866LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x49 = INT8_MIN;
	static int32_t x50 = -27510;
	int16_t x51 = INT16_MAX;
	static int16_t x52 = 20;

	t9 = ((x49^(x50*x51))-x52);

	if (t9 != 901420258) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = INT8_MIN;
	volatile uint64_t x58 = 1006LLU;
	volatile uint16_t x59 = 63U;
	int32_t x60 = 2;

	t10 = ((x57^(x58*x59))-x60);

	if (t10 != 18446744073709488144LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x61 = -1;
	uint16_t x62 = UINT16_MAX;
	uint64_t t11 = 32521231328393529LLU;

	t11 = ((x61^(x62*x63))-x64);

	if (t11 != 18446744072790434853LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x66 = INT8_MAX;
	static volatile int16_t x67 = 131;
	int8_t x68 = INT8_MAX;
	volatile int32_t t12 = -5123377;

	t12 = ((x65^(x66*x67))-x68);

	if (t12 != -16258) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x69 = 52U;
	volatile uint16_t x70 = UINT16_MAX;
	volatile int32_t x71 = 25;
	static volatile int16_t x72 = INT16_MIN;
	static uint32_t t13 = 61339U;

	t13 = ((x69^(x70*x71))-x72);

	if (t13 != 1671123U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x86 = UINT8_MAX;
	volatile int64_t t14 = 9LL;

	t14 = ((x85^(x86*x87))-x88);

	if (t14 != 382LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x91 = -392;
	static int8_t x92 = 26;
	volatile int32_t t15 = 355259;

	t15 = ((x89^(x90*x91))-x92);

	if (t15 != -99953) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x97 = -1;
	static volatile int16_t x98 = INT16_MIN;
	volatile int64_t x99 = -3047092LL;
	volatile uint64_t x100 = 203057907811LLU;
	volatile uint64_t t16 = 1187227159LLU;

	t16 = ((x97^(x98*x99))-x100);

	if (t16 != 18446743770804533148LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x101 = UINT32_MAX;
	static volatile int32_t x102 = -9015307;
	volatile uint32_t x104 = 2162623U;
	volatile uint32_t t17 = 86094U;

	t17 = ((x101^(x102*x103))-x104);

	if (t17 != 6852683U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x106 = UINT32_MAX;
	volatile int16_t x107 = INT16_MAX;
	volatile uint64_t t18 = 20442LLU;

	t18 = ((x105^(x106*x107))-x108);

	if (t18 != 4290867283LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x113 = -1LL;
	uint32_t x114 = 745129U;
	int16_t x115 = -1;
	uint64_t x116 = 1074339142294576LLU;
	static uint64_t t19 = 3LLU;

	t19 = ((x113^(x114*x115))-x116);

	if (t19 != 18445669730273034872LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x118 = -1;
	int64_t x119 = -1LL;
	static volatile uint32_t x120 = 4U;
	static int64_t t20 = -19LL;

	t20 = ((x117^(x118*x119))-x120);

	if (t20 != 234LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = INT8_MIN;
	volatile int8_t x122 = -6;
	int8_t x123 = 1;
	int16_t x124 = -150;
	int32_t t21 = -1197160;

	t21 = ((x121^(x122*x123))-x124);

	if (t21 != 272) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x134 = INT8_MIN;
	uint32_t x135 = 1U;
	volatile int16_t x136 = -3332;
	uint32_t t22 = 36412U;

	t22 = ((x133^(x134*x135))-x136);

	if (t22 != 35972U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x141 = 28;
	int8_t x142 = -9;
	int8_t x144 = -1;
	volatile uint64_t t23 = 103LLU;

	t23 = ((x141^(x142*x143))-x144);

	if (t23 != 22LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x145 = -1;
	int16_t x147 = INT16_MIN;
	volatile int8_t x148 = INT8_MAX;
	int32_t t24 = 90532972;

	t24 = ((x145^(x146*x147))-x148);

	if (t24 != -32896) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x149 = -1LL;
	volatile int16_t x151 = INT16_MAX;
	int64_t t25 = 299839660LL;

	t25 = ((x149^(x150*x151))-x152);

	if (t25 != 32767LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x153 = INT64_MAX;
	int8_t x154 = INT8_MIN;
	static volatile int8_t x155 = INT8_MAX;
	int16_t x156 = INT16_MIN;
	static int64_t t26 = 0LL;

	t26 = ((x153^(x154*x155))-x156);

	if (t26 != -9223372036854726785LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x157 = INT8_MIN;
	uint64_t x159 = 332772841694LLU;
	int16_t x160 = -1763;
	static uint64_t t27 = 948592030270241713LLU;

	t27 = ((x157^(x158*x159))-x160);

	if (t27 != 18446723441793368359LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x163 = 6973563093362477LLU;
	volatile int64_t x164 = -1LL;
	volatile uint64_t t28 = 74216LLU;

	t28 = ((x161^(x162*x163))-x164);

	if (t28 != 1778258588807431291LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = 26032;
	static uint64_t x166 = 99579859564064LLU;
	int8_t x168 = -1;
	volatile uint64_t t29 = 1913LLU;

	t29 = ((x165^(x166*x167))-x168);

	if (t29 != 4478719391883095121LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x177 = -505950692151641807LL;
	uint16_t x178 = UINT16_MAX;
	int8_t x179 = -1;
	volatile uint64_t x180 = UINT64_MAX;
	uint64_t t30 = 197741522904LLU;

	t30 = ((x177^(x178*x179))-x180);

	if (t30 != 505950692151605553LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x185 = INT8_MAX;
	int64_t x187 = 1861875908LL;
	uint64_t x188 = 23637049626LLU;
	uint64_t t31 = 110067461043908060LLU;

	t31 = ((x185^(x186*x187))-x188);

	if (t31 != 18446744050072502117LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = 20660586861LL;
	int8_t x191 = -1;
	uint64_t x192 = 21121514637629533LLU;
	static uint64_t t32 = 8530950014LLU;

	t32 = ((x189^(x190*x191))-x192);

	if (t32 != 18425622579732536886LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x193 = -1;
	int16_t x194 = INT16_MIN;
	static uint64_t x195 = 343999851034LLU;
	uint16_t x196 = 47U;
	volatile uint64_t t33 = 26320404273LLU;

	t33 = ((x193^(x194*x195))-x196);

	if (t33 != 11272187118682064LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x201 = -9;
	uint16_t x203 = 7864U;
	int16_t x204 = INT16_MIN;
	volatile uint64_t t34 = 109531645LLU;

	t34 = ((x201^(x202*x203))-x204);

	if (t34 != 16558012782896578487LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t t35 = 8883291;

	t35 = ((x205^(x206*x207))-x208);

	if (t35 != 32895) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x209 = -11;
	volatile int32_t x210 = INT32_MAX;
	static volatile uint32_t x211 = 405870U;
	volatile int16_t x212 = 1;
	static volatile uint32_t t36 = 1U;

	t36 = ((x209^(x210*x211))-x212);

	if (t36 != 405862U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x213 = 421169012657LLU;
	int16_t x214 = 56;
	int16_t x215 = -437;
	int32_t x216 = INT32_MAX;

	t37 = ((x213^(x214*x215))-x216);

	if (t37 != 18446743650393047002LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x222 = 1886;
	int8_t x224 = 0;
	int32_t t38 = -438652;

	t38 = ((x221^(x222*x223))-x224);

	if (t38 != 123598941) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x226 = 29U;
	static volatile uint8_t x227 = 1U;
	int64_t t39 = -11LL;

	t39 = ((x225^(x226*x227))-x228);

	if (t39 != -233208506130LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x229 = INT64_MAX;
	uint16_t x230 = 7181U;
	uint64_t x231 = 80LLU;
	volatile uint64_t t40 = 466343381011LLU;

	t40 = ((x229^(x230*x231))-x232);

	if (t40 != 9223372036854201328LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x233 = 5U;
	int8_t x235 = 1;
	int16_t x236 = -1;
	uint32_t t41 = 8330227U;

	t41 = ((x233^(x234*x235))-x236);

	if (t41 != 4294934534U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x237 = INT8_MAX;
	static int16_t x238 = INT16_MAX;
	int64_t x239 = 4310553702LL;
	uint32_t x240 = 27U;
	int64_t t42 = -5016085834994LL;

	t42 = ((x237^(x238*x239))-x240);

	if (t42 != 141243913153482LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x241 = 4;
	static int32_t x242 = -926;
	uint64_t x243 = 2050200622LLU;
	static int32_t x244 = INT32_MIN;
	uint64_t t43 = 1830542000LLU;

	t43 = ((x241^(x242*x243))-x244);

	if (t43 != 18446742177371259288LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x245 = INT8_MIN;
	uint32_t x246 = UINT32_MAX;
	uint64_t x247 = 1011870LLU;
	int64_t x248 = INT64_MAX;
	uint64_t t44 = 449726699LLU;

	t44 = ((x245^(x246*x247))-x248);

	if (t44 != 9219026088297984227LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x249 = -2275;
	static uint32_t x250 = 1037335U;
	uint64_t x251 = UINT64_MAX;
	static volatile uint64_t t45 = 271541759556LLU;

	t45 = ((x249^(x250*x251))-x252);

	if (t45 != 1039605LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x253 = UINT16_MAX;
	int8_t x254 = -51;
	uint8_t x255 = 3U;
	volatile uint32_t t46 = 42979278U;

	t46 = ((x253^(x254*x255))-x256);

	if (t46 != 4294878080U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = INT16_MAX;
	volatile int64_t x258 = INT64_MAX;
	int64_t x259 = -1LL;
	int64_t t47 = -1896571376394LL;

	t47 = ((x257^(x258*x259))-x260);

	if (t47 != -9223372036854766486LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x261 = 983U;
	static uint8_t x262 = UINT8_MAX;
	static uint32_t x263 = 2034066U;
	uint64_t x264 = UINT64_MAX;
	uint64_t t48 = 122720323LLU;

	t48 = ((x261^(x262*x263))-x264);

	if (t48 != 518687674LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x265 = UINT64_MAX;
	int8_t x266 = -1;
	volatile int64_t x267 = 48651754246979LL;
	volatile uint64_t t49 = 7521620072368LLU;

	t49 = ((x265^(x266*x267))-x268);

	if (t49 != 48651754247106LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x270 = -1;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = 11;
	int32_t t50 = -63;

	t50 = ((x269^(x270*x271))-x272);

	if (t50 != 2147418102) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x273 = 25092U;
	int64_t x274 = -1LL;
	int32_t x275 = INT32_MAX;
	int8_t x276 = -1;

	t51 = ((x273^(x274*x275))-x276);

	if (t51 != -2147458554LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x277 = -1;
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = -4;
	int8_t x280 = INT8_MIN;
	static uint64_t t52 = 135531859LLU;

	t52 = ((x277^(x278*x279))-x280);

	if (t52 != 123LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x281 = 289U;
	uint16_t x282 = 187U;
	uint64_t x284 = 826136140929988053LLU;
	volatile uint64_t t53 = 46LLU;

	t53 = ((x281^(x282*x283))-x284);

	if (t53 != 17620607932779563151LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x289 = 107958U;
	uint64_t x291 = UINT64_MAX;

	t54 = ((x289^(x290*x291))-x292);

	if (t54 != 18446744069414692152LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x293 = 1;
	volatile int16_t x295 = INT16_MIN;
	volatile int32_t x296 = INT32_MIN;

	t55 = ((x293^(x294*x295))-x296);

	if (t55 != 2146598913) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x305 = INT16_MIN;
	uint64_t x306 = 1158517685036233LLU;
	uint64_t x307 = 155852698LLU;
	int32_t x308 = -1;
	volatile uint64_t t56 = 2888228637876036413LLU;

	t56 = ((x305^(x306*x307))-x308);

	if (t56 != 17070843931659991019LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x310 = 19U;
	int8_t x311 = INT8_MIN;
	int64_t x312 = 316LL;
	static int64_t t57 = -19LL;

	t57 = ((x309^(x310*x311))-x312);

	if (t57 != 4294242117LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x313 = UINT32_MAX;
	int16_t x314 = INT16_MAX;
	volatile uint8_t x315 = 3U;
	int32_t x316 = INT32_MIN;

	t58 = ((x313^(x314*x315))-x316);

	if (t58 != 2147385346U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x317 = 0U;
	uint32_t x318 = 29U;
	volatile int8_t x320 = -1;

	t59 = ((x317^(x318*x319))-x320);

	if (t59 != 4294962976U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x322 = -1;
	uint16_t x323 = UINT16_MAX;
	int8_t x324 = INT8_MAX;
	volatile int32_t t60 = -987;

	t60 = ((x321^(x322*x323))-x324);

	if (t60 != -32897) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x341 = 37U;
	static uint8_t x342 = 6U;
	static volatile uint8_t x343 = 11U;
	volatile int16_t x344 = 4166;
	int32_t t61 = 13;

	t61 = ((x341^(x342*x343))-x344);

	if (t61 != -4063) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x349 = -1;
	static uint16_t x350 = 12U;
	static volatile uint8_t x351 = 5U;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t62 = 2632626U;

	t62 = ((x349^(x350*x351))-x352);

	if (t62 != 4294967236U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x353 = 231406809661LLU;
	int16_t x355 = -2887;
	uint64_t x356 = 1LLU;
	uint64_t t63 = 4639726520LLU;

	t63 = ((x353^(x354*x355))-x356);

	if (t63 != 231455536181LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x357 = UINT8_MAX;
	uint64_t x358 = UINT64_MAX;
	volatile int16_t x359 = INT16_MIN;
	int64_t x360 = INT64_MIN;
	uint64_t t64 = 319LLU;

	t64 = ((x357^(x358*x359))-x360);

	if (t64 != 9223372036854808831LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x361 = -1;
	int16_t x362 = -1;
	int64_t x363 = 1326476540848886LL;
	volatile int64_t t65 = 12840LL;

	t65 = ((x361^(x362*x363))-x364);

	if (t65 != 1326476540848857LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x365 = 87207186251594LL;
	static int16_t x366 = -15;
	int16_t x367 = INT16_MIN;
	static uint64_t x368 = 80868662480551LLU;
	uint64_t t66 = 460LLU;

	t66 = ((x365^(x366*x367))-x368);

	if (t66 != 6338523803811LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x369 = UINT32_MAX;
	static int16_t x371 = INT16_MAX;
	volatile uint32_t t67 = 10152U;

	t67 = ((x369^(x370*x371))-x372);

	if (t67 != 3934792176U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x373 = -2066871996178047058LL;
	int16_t x374 = INT16_MIN;
	int16_t x375 = 1;
	int64_t t68 = -1LL;

	t68 = ((x373^(x374*x375))-x376);

	if (t68 != 2066871996178063278LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x377 = UINT16_MAX;
	int16_t x378 = 3;
	volatile int32_t t69 = -130583231;

	t69 = ((x377^(x378*x379))-x380);

	if (t69 != 65624) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x381 = INT8_MIN;
	uint64_t x382 = 837220811481LLU;
	uint64_t x384 = UINT64_MAX;
	static volatile uint64_t t70 = 1120188669LLU;

	t70 = ((x381^(x382*x383))-x384);

	if (t70 != 18446743236488740186LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x385 = 99U;
	static uint64_t x386 = UINT64_MAX;
	int64_t x387 = -104015657275518522LL;
	uint64_t t71 = 55276076690179553LLU;

	t71 = ((x385^(x386*x387))-x388);

	if (t71 != 104015657275518554LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x389 = -61202243;
	volatile int8_t x390 = INT8_MIN;
	uint32_t x391 = 18651779U;
	int64_t t72 = 1LL;

	t72 = ((x389^(x390*x391))-x392);

	if (t72 != 12824377038357LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int8_t x394 = -1;
	static volatile int8_t x395 = INT8_MIN;
	uint8_t x396 = 29U;
	static volatile int32_t t73 = -12888;

	t73 = ((x393^(x394*x395))-x396);

	if (t73 != 65378) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x397 = -1LL;
	int64_t x398 = -1LL;
	volatile int64_t t74 = 1448566813LL;

	t74 = ((x397^(x398*x399))-x400);

	if (t74 != -7250LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x401 = INT8_MIN;
	int16_t x402 = INT16_MIN;
	int32_t x403 = -1;
	volatile int8_t x404 = 37;
	int32_t t75 = 1;

	t75 = ((x401^(x402*x403))-x404);

	if (t75 != -32933) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x405 = 0U;
	int64_t x406 = -1LL;
	volatile uint64_t x407 = 1285202067326LLU;
	volatile uint64_t t76 = 2LLU;

	t76 = ((x405^(x406*x407))-x408);

	if (t76 != 18446742788507484291LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x409 = UINT64_MAX;
	static uint16_t x410 = UINT16_MAX;
	int8_t x411 = -1;
	volatile int32_t x412 = INT32_MIN;

	t77 = ((x409^(x410*x411))-x412);

	if (t77 != 2147549182LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x414 = 103605417LLU;
	int32_t x415 = -47365413;
	int64_t x416 = INT64_MIN;
	volatile uint64_t t78 = 90660968660907LLU;

	t78 = ((x413^(x414*x415))-x416);

	if (t78 != 9218464723489533881LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x418 = 131193067695LLU;
	int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MAX;
	volatile uint64_t t79 = 2782773LLU;

	t79 = ((x417^(x418*x419))-x420);

	if (t79 != 18446488947143987480LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x425 = -1;
	int32_t x426 = -9;
	volatile uint64_t x428 = UINT64_MAX;
	static uint64_t t80 = 64697678LLU;

	t80 = ((x425^(x426*x427))-x428);

	if (t80 != 18446744073681378628LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x433 = 263372734LLU;
	int16_t x434 = -45;
	volatile int32_t x435 = -1;
	uint16_t x436 = 54U;
	uint64_t t81 = 2766914LLU;

	t81 = ((x433^(x434*x435))-x436);

	if (t81 != 263372637LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x437 = INT8_MAX;
	int16_t x438 = -6148;
	volatile uint8_t x439 = 21U;
	int16_t x440 = INT16_MAX;

	t82 = ((x437^(x438*x439))-x440);

	if (t82 != -161836) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x446 = UINT32_MAX;
	static int64_t x447 = -1LL;
	int64_t x448 = -1LL;
	volatile int64_t t83 = 0LL;

	t83 = ((x445^(x446*x447))-x448);

	if (t83 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x449 = -38;
	int8_t x450 = INT8_MAX;
	static int8_t x452 = -6;
	volatile int32_t t84 = 12;

	t84 = ((x449^(x450*x451))-x452);

	if (t84 != 484) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x453 = INT16_MIN;
	volatile int32_t x454 = -1;
	uint8_t x455 = 0U;
	int8_t x456 = INT8_MIN;
	volatile int32_t t85 = -4237542;

	t85 = ((x453^(x454*x455))-x456);

	if (t85 != -32640) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x461 = UINT8_MAX;
	uint64_t x462 = 4603622978266835154LLU;
	int16_t x463 = INT16_MIN;
	uint16_t x464 = 312U;
	volatile uint64_t t86 = 74LLU;

	t86 = ((x461^(x462*x463))-x464);

	if (t86 != 5955282949058789319LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x466 = 232U;
	volatile int8_t x467 = -1;
	static volatile int8_t x468 = INT8_MIN;
	uint32_t t87 = 945942U;

	t87 = ((x465^(x466*x467))-x468);

	if (t87 != 4294967193U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x470 = 1358U;
	static uint8_t x472 = UINT8_MAX;
	int32_t t88 = 0;

	t88 = ((x469^(x470*x471))-x472);

	if (t88 != 134187) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x473 = 56;
	int8_t x475 = INT8_MIN;
	static int8_t x476 = -1;
	volatile int32_t t89 = -1608;

	t89 = ((x473^(x474*x475))-x476);

	if (t89 != 57) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x477 = UINT16_MAX;
	uint32_t x478 = UINT32_MAX;
	uint64_t x479 = 565143000301154LLU;
	static volatile int32_t x480 = -1;
	volatile uint64_t t90 = 3312148544582704LLU;

	t90 = ((x477^(x478*x479))-x480);

	if (t90 != 11224584781360053858LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x481 = UINT16_MAX;
	volatile int8_t x482 = INT8_MIN;
	volatile int64_t x484 = -1LL;
	volatile int64_t t91 = 1217228976LL;

	t91 = ((x481^(x482*x483))-x484);

	if (t91 != -60928LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x485 = 993U;
	int16_t x486 = INT16_MIN;
	uint64_t x488 = UINT64_MAX;
	static uint64_t t92 = 1723473322212LLU;

	t92 = ((x485^(x486*x487))-x488);

	if (t92 != 74875874LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x491 = 1023LL;

	t93 = ((x489^(x490*x491))-x492);

	if (t93 != -9223369842126488574LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x493 = 22;
	static int32_t x494 = -1;
	static uint32_t x495 = UINT32_MAX;
	int64_t x496 = -1LL;
	int64_t t94 = 1944936375LL;

	t94 = ((x493^(x494*x495))-x496);

	if (t94 != 24LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x498 = INT16_MIN;
	uint32_t x499 = 10U;
	static uint8_t x500 = UINT8_MAX;
	uint32_t t95 = 88U;

	t95 = ((x497^(x498*x499))-x500);

	if (t95 != 327039U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x502 = INT8_MAX;
	int64_t x503 = -1LL;
	int8_t x504 = INT8_MIN;
	int64_t t96 = -685583034LL;

	t96 = ((x501^(x502*x503))-x504);

	if (t96 != -1113LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x505 = 211258U;
	static volatile int8_t x506 = -6;
	static int32_t x507 = -1;
	volatile int64_t t97 = -4930970LL;

	t97 = ((x505^(x506*x507))-x508);

	if (t97 != 211261LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x509 = INT8_MIN;
	static volatile int8_t x510 = INT8_MIN;
	static uint8_t x511 = 26U;
	uint16_t x512 = 20U;
	volatile int32_t t98 = -1;

	t98 = ((x509^(x510*x511))-x512);

	if (t98 != 3180) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x514 = 300;
	int16_t x515 = INT16_MIN;
	static int8_t x516 = INT8_MIN;
	static volatile int64_t t99 = 2LL;

	t99 = ((x513^(x514*x515))-x516);

	if (t99 != -7366600643394925LL) { NG(); } else { ; }
	
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

