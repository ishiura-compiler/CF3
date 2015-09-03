#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = INT32_MAX;
uint64_t x6 = UINT64_MAX;
int32_t x7 = -1;
int32_t x15 = 1;
int32_t t2 = 16190;
int32_t x23 = 1;
uint32_t x26 = UINT32_MAX;
uint64_t x28 = 2LLU;
volatile int16_t x32 = INT16_MIN;
volatile int32_t t6 = 2782087;
static int32_t t7 = 73876467;
volatile uint32_t x39 = 1042390U;
volatile int32_t x43 = 147;
int32_t x52 = 2;
int16_t x59 = -1;
volatile int32_t t12 = 131500710;
int64_t x77 = INT64_MIN;
int16_t x79 = INT16_MAX;
static int64_t x86 = 4572910855LL;
static int32_t x87 = -228932498;
volatile uint16_t x88 = 13604U;
static volatile int8_t x89 = INT8_MIN;
static uint8_t x94 = UINT8_MAX;
volatile uint16_t x97 = UINT16_MAX;
volatile int8_t x99 = 0;
int32_t x114 = 20334224;
uint32_t x116 = 3411756U;
static volatile int16_t x132 = INT16_MIN;
static int32_t t21 = -8355;
int8_t x139 = INT8_MIN;
int8_t x142 = INT8_MIN;
static int16_t x146 = -1;
volatile uint64_t x155 = UINT64_MAX;
int8_t x162 = INT8_MAX;
int32_t t28 = -46974055;
static volatile int8_t x186 = 33;
int64_t x193 = INT64_MAX;
int64_t x197 = -1777332776565334739LL;
int32_t x215 = -104769265;
int8_t x221 = 47;
volatile int32_t x224 = -1503;
int64_t x231 = INT64_MIN;
int32_t t40 = -6;
int64_t x233 = INT64_MIN;
int8_t x242 = INT8_MIN;
int16_t x248 = INT16_MAX;
static int64_t x266 = -1LL;
uint8_t x272 = 88U;
int32_t t46 = 13112;
volatile int16_t x277 = 12;
uint16_t x280 = 498U;
volatile int32_t t48 = 62;
static uint8_t x299 = 20U;
int16_t x305 = -1;
static int32_t x309 = INT32_MAX;
int32_t t53 = -1;
int32_t x316 = 177617;
int8_t x317 = INT8_MIN;
uint64_t x321 = 20430630366LLU;
int64_t x322 = 21307LL;
static int32_t t56 = 983;
volatile int32_t t58 = -20123909;
static uint64_t x352 = 194238839437414LLU;
volatile uint32_t x357 = UINT32_MAX;
volatile int16_t x360 = INT16_MIN;
int32_t x361 = -2614;
int16_t x365 = -1;
volatile int8_t x374 = INT8_MAX;
int32_t x391 = 65192;
volatile int32_t t68 = -30211;
static uint8_t x413 = 122U;
uint32_t x423 = 10922U;
volatile int32_t t74 = -27890;
int32_t t75 = -45166;
int16_t x436 = INT16_MAX;
uint64_t x437 = 1LLU;
static int32_t t78 = -566873184;
volatile uint32_t x452 = 31161U;
int32_t t79 = 965319;
static int16_t x453 = -1;
volatile int32_t x455 = 0;
volatile int64_t x456 = INT64_MAX;
volatile uint16_t x457 = 54U;
static int32_t x458 = INT32_MAX;
static int32_t x465 = -14240;
static int32_t t82 = -15863288;
uint32_t x473 = UINT32_MAX;
int64_t x476 = 3LL;
static uint8_t x503 = 6U;
int32_t t85 = 0;
int16_t x508 = INT16_MIN;
static uint32_t x511 = 3U;
int32_t x513 = 0;
int8_t x556 = 1;
volatile int64_t x560 = 23646048890LL;
static volatile int32_t t94 = -30;
int32_t t95 = 21855;
static int8_t x576 = 1;
volatile int16_t x589 = INT16_MIN;
uint16_t x590 = 338U;
volatile uint64_t x592 = 61601266LLU;


void f0(void) {
	int8_t x8 = -1;
	int32_t t0 = 56;

	t0 = (x5<((x6*x7)/x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -7547857;
	uint32_t x10 = 4379221U;
	int64_t x11 = -464213684LL;
	int8_t x12 = -35;
	int32_t t1 = -6179851;

	t1 = (x9<((x10*x11)/x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	uint64_t x14 = 67675541934739LLU;
	static uint16_t x16 = 7U;

	t2 = (x13<((x14*x15)/x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MAX;
	int8_t x18 = 0;
	uint32_t x19 = UINT32_MAX;
	int64_t x20 = INT64_MAX;
	volatile int32_t t3 = -360804;

	t3 = (x17<((x18*x19)/x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	uint8_t x22 = 64U;
	uint8_t x24 = UINT8_MAX;
	int32_t t4 = -8365028;

	t4 = (x21<((x22*x23)/x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 29;
	uint32_t x27 = 4716U;
	volatile int32_t t5 = 1;

	t5 = (x25<((x26*x27)/x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 7U;
	uint8_t x30 = UINT8_MAX;
	int32_t x31 = -122;

	t6 = (x29<((x30*x31)/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = UINT16_MAX;
	static int32_t x34 = -1;
	uint8_t x35 = UINT8_MAX;
	static uint32_t x36 = 3U;

	t7 = (x33<((x34*x35)/x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = -1;
	static int32_t x38 = -1787459;
	uint32_t x40 = UINT32_MAX;
	int32_t t8 = 511;

	t8 = (x37<((x38*x39)/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	uint64_t x42 = UINT64_MAX;
	volatile uint32_t x44 = 6731U;
	int32_t t9 = -192955130;

	t9 = (x41<((x42*x43)/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -11773248986324LL;
	int8_t x50 = 0;
	int32_t x51 = -6620;
	volatile int32_t t10 = -8656;

	t10 = (x49<((x50*x51)/x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	static volatile uint64_t x58 = 155343LLU;
	int32_t x60 = -603;
	static volatile int32_t t11 = -166585;

	t11 = (x57<((x58*x59)/x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MIN;
	static volatile uint64_t x62 = UINT64_MAX;
	static uint8_t x63 = 0U;
	volatile uint8_t x64 = 2U;

	t12 = (x61<((x62*x63)/x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = 104;
	static uint16_t x70 = 6214U;
	uint64_t x71 = 8255368964510LLU;
	static int16_t x72 = INT16_MIN;
	volatile int32_t t13 = 1;

	t13 = (x69<((x70*x71)/x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x78 = UINT8_MAX;
	int8_t x80 = INT8_MIN;
	volatile int32_t t14 = -26943923;

	t14 = (x77<((x78*x79)/x80));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = INT8_MAX;
	static int32_t t15 = -5;

	t15 = (x85<((x86*x87)/x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x90 = UINT32_MAX;
	uint32_t x91 = 181099512U;
	int16_t x92 = INT16_MIN;
	int32_t t16 = -3905;

	t16 = (x89<((x90*x91)/x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = -1;
	static int32_t x95 = -1;
	int32_t x96 = -1;
	static int32_t t17 = -60074;

	t17 = (x93<((x94*x95)/x96));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x98 = 4U;
	int16_t x100 = 7;
	int32_t t18 = -1106;

	t18 = (x97<((x98*x99)/x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = -2778;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = INT32_MAX;
	volatile int32_t t19 = 426;

	t19 = (x105<((x106*x107)/x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x113 = INT16_MIN;
	uint64_t x115 = 48683033722507LLU;
	int32_t t20 = 2;

	t20 = (x113<((x114*x115)/x116));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x129 = 2484U;
	int8_t x130 = INT8_MIN;
	int64_t x131 = 82699LL;

	t21 = (x129<((x130*x131)/x132));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x133 = INT64_MAX;
	uint32_t x134 = 20U;
	int16_t x135 = -4;
	uint8_t x136 = 58U;
	int32_t t22 = 3995495;

	t22 = (x133<((x134*x135)/x136));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x137 = INT64_MIN;
	uint32_t x138 = 82284U;
	static int16_t x140 = INT16_MIN;
	volatile int32_t t23 = -7994478;

	t23 = (x137<((x138*x139)/x140));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x141 = INT8_MIN;
	static int32_t x143 = 215;
	static uint16_t x144 = 12U;
	int32_t t24 = 476;

	t24 = (x141<((x142*x143)/x144));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x145 = INT64_MAX;
	uint8_t x147 = UINT8_MAX;
	volatile int64_t x148 = INT64_MIN;
	volatile int32_t t25 = -455;

	t25 = (x145<((x146*x147)/x148));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x153 = 19;
	int8_t x154 = INT8_MIN;
	static int8_t x156 = -1;
	volatile int32_t t26 = 46923;

	t26 = (x153<((x154*x155)/x156));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x161 = 1439892890125486LL;
	int8_t x163 = INT8_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t27 = -329368;

	t27 = (x161<((x162*x163)/x164));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x173 = 5;
	int8_t x174 = INT8_MIN;
	static int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;

	t28 = (x173<((x174*x175)/x176));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x181 = INT8_MIN;
	static uint32_t x182 = 13881U;
	volatile uint32_t x183 = 14824U;
	int16_t x184 = INT16_MIN;
	int32_t t29 = 92421;

	t29 = (x181<((x182*x183)/x184));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x185 = -66526303;
	volatile int32_t x187 = -1;
	uint32_t x188 = 36962U;
	volatile int32_t t30 = -1697531;

	t30 = (x185<((x186*x187)/x188));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MIN;
	volatile int8_t x191 = -1;
	volatile int8_t x192 = -1;
	volatile int32_t t31 = 813256;

	t31 = (x189<((x190*x191)/x192));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x194 = INT16_MIN;
	uint8_t x195 = 1U;
	volatile int16_t x196 = INT16_MAX;
	static int32_t t32 = 2;

	t32 = (x193<((x194*x195)/x196));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x198 = UINT32_MAX;
	int32_t x199 = INT32_MAX;
	static uint32_t x200 = 25360862U;
	volatile int32_t t33 = 340608356;

	t33 = (x197<((x198*x199)/x200));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x201 = UINT64_MAX;
	uint32_t x202 = 264133360U;
	volatile int16_t x203 = INT16_MAX;
	uint8_t x204 = 5U;
	volatile int32_t t34 = 92;

	t34 = (x201<((x202*x203)/x204));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x205 = -1;
	volatile uint64_t x206 = 367LLU;
	volatile uint64_t x207 = 248648774716LLU;
	uint16_t x208 = 29577U;
	volatile int32_t t35 = 92198;

	t35 = (x205<((x206*x207)/x208));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x209 = 16331910137241LLU;
	static uint64_t x210 = UINT64_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	int16_t x212 = INT16_MIN;
	int32_t t36 = -1759742;

	t36 = (x209<((x210*x211)/x212));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x213 = UINT8_MAX;
	uint64_t x214 = UINT64_MAX;
	uint64_t x216 = 7LLU;
	volatile int32_t t37 = 1963;

	t37 = (x213<((x214*x215)/x216));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x222 = 733;
	int16_t x223 = -1;
	static volatile int32_t t38 = -8;

	t38 = (x221<((x222*x223)/x224));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x225 = 80094145;
	static uint64_t x226 = 128061716939LLU;
	uint64_t x227 = 5545692453197098LLU;
	static volatile int64_t x228 = -1LL;
	static int32_t t39 = -173709;

	t39 = (x225<((x226*x227)/x228));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x229 = 274225;
	volatile uint64_t x230 = 964089694686LLU;
	int32_t x232 = INT32_MAX;

	t40 = (x229<((x230*x231)/x232));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x234 = INT16_MAX;
	volatile uint16_t x235 = 4U;
	volatile int64_t x236 = -1LL;
	volatile int32_t t41 = 90344;

	t41 = (x233<((x234*x235)/x236));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x241 = INT8_MIN;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 7131U;
	volatile int32_t t42 = 0;

	t42 = (x241<((x242*x243)/x244));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x245 = 708;
	volatile int32_t x246 = 1;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t t43 = 46835;

	t43 = (x245<((x246*x247)/x248));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x261 = UINT8_MAX;
	static uint16_t x262 = UINT16_MAX;
	int16_t x263 = -9;
	int8_t x264 = 4;
	int32_t t44 = 34;

	t44 = (x261<((x262*x263)/x264));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x265 = -1;
	uint64_t x267 = 93974464672083LLU;
	uint16_t x268 = UINT16_MAX;
	int32_t t45 = 618426;

	t45 = (x265<((x266*x267)/x268));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x269 = UINT32_MAX;
	int16_t x270 = -1;
	int16_t x271 = INT16_MIN;

	t46 = (x269<((x270*x271)/x272));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x273 = 14674U;
	uint64_t x274 = 37911448LLU;
	static volatile int16_t x275 = INT16_MAX;
	int32_t x276 = -3599;
	volatile int32_t t47 = 4113;

	t47 = (x273<((x274*x275)/x276));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x278 = 4541;
	int64_t x279 = 12LL;

	t48 = (x277<((x278*x279)/x280));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x289 = 19U;
	volatile uint16_t x290 = UINT16_MAX;
	uint32_t x291 = 14583042U;
	int32_t x292 = 3576;
	volatile int32_t t49 = -1850;

	t49 = (x289<((x290*x291)/x292));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x293 = -1;
	int8_t x294 = INT8_MIN;
	int64_t x295 = -1LL;
	int8_t x296 = INT8_MIN;
	volatile int32_t t50 = 375;

	t50 = (x293<((x294*x295)/x296));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x297 = 10078;
	int16_t x298 = INT16_MIN;
	int64_t x300 = INT64_MIN;
	int32_t t51 = 98;

	t51 = (x297<((x298*x299)/x300));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x306 = 32799487;
	int8_t x307 = -1;
	uint8_t x308 = UINT8_MAX;
	int32_t t52 = 611691593;

	t52 = (x305<((x306*x307)/x308));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x310 = INT8_MAX;
	uint16_t x311 = UINT16_MAX;
	static int16_t x312 = -1;

	t53 = (x309<((x310*x311)/x312));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x313 = INT32_MIN;
	static uint16_t x314 = 700U;
	static volatile uint8_t x315 = 60U;
	volatile int32_t t54 = 262287090;

	t54 = (x313<((x314*x315)/x316));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x318 = -1LL;
	uint64_t x319 = 8LLU;
	int64_t x320 = -1LL;
	volatile int32_t t55 = 3389593;

	t55 = (x317<((x318*x319)/x320));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x323 = INT8_MIN;
	static int64_t x324 = INT64_MAX;

	t56 = (x321<((x322*x323)/x324));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x337 = 47;
	volatile uint64_t x338 = UINT64_MAX;
	static int64_t x339 = -1LL;
	volatile int64_t x340 = 48LL;
	int32_t t57 = 25479277;

	t57 = (x337<((x338*x339)/x340));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x345 = -1;
	int64_t x346 = -1LL;
	int32_t x347 = INT32_MAX;
	static uint32_t x348 = UINT32_MAX;

	t58 = (x345<((x346*x347)/x348));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x349 = INT8_MAX;
	static uint16_t x350 = 2U;
	int8_t x351 = 0;
	volatile int32_t t59 = -1135432;

	t59 = (x349<((x350*x351)/x352));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x353 = INT32_MIN;
	int8_t x354 = INT8_MIN;
	int64_t x355 = 3609626LL;
	int32_t x356 = INT32_MAX;
	volatile int32_t t60 = -117348260;

	t60 = (x353<((x354*x355)/x356));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x358 = 306876740015LL;
	uint64_t x359 = UINT64_MAX;
	int32_t t61 = -82041183;

	t61 = (x357<((x358*x359)/x360));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x362 = INT8_MIN;
	uint32_t x363 = 1614U;
	int16_t x364 = INT16_MIN;
	int32_t t62 = -263786268;

	t62 = (x361<((x362*x363)/x364));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x366 = INT16_MIN;
	volatile uint8_t x367 = 35U;
	int64_t x368 = INT64_MIN;
	int32_t t63 = 969;

	t63 = (x365<((x366*x367)/x368));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x369 = 1453718598275LL;
	uint8_t x370 = UINT8_MAX;
	int64_t x371 = 51LL;
	static uint8_t x372 = 21U;
	int32_t t64 = 1;

	t64 = (x369<((x370*x371)/x372));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x373 = INT16_MAX;
	uint16_t x375 = 58U;
	int8_t x376 = 16;
	int32_t t65 = -579567470;

	t65 = (x373<((x374*x375)/x376));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x377 = INT32_MIN;
	static uint16_t x378 = UINT16_MAX;
	uint32_t x379 = 11635U;
	int32_t x380 = -1;
	int32_t t66 = 164481665;

	t66 = (x377<((x378*x379)/x380));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x389 = -5;
	volatile int16_t x390 = 7493;
	int32_t x392 = INT32_MIN;
	volatile int32_t t67 = 2;

	t67 = (x389<((x390*x391)/x392));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	uint64_t x395 = 9057470508776933039LLU;
	int64_t x396 = INT64_MIN;

	t68 = (x393<((x394*x395)/x396));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x401 = 39153793971601174LLU;
	int8_t x402 = INT8_MAX;
	int16_t x403 = INT16_MIN;
	uint64_t x404 = 90161001041LLU;
	static int32_t t69 = -87156387;

	t69 = (x401<((x402*x403)/x404));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x409 = 16799325783LLU;
	static uint32_t x410 = 521311791U;
	static volatile int64_t x411 = 11263174LL;
	uint32_t x412 = 13824420U;
	int32_t t70 = -571;

	t70 = (x409<((x410*x411)/x412));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x414 = UINT16_MAX;
	uint32_t x415 = 117900058U;
	uint16_t x416 = 564U;
	int32_t t71 = 2837;

	t71 = (x413<((x414*x415)/x416));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x417 = INT32_MAX;
	int8_t x418 = -39;
	static int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MIN;
	static int32_t t72 = 87;

	t72 = (x417<((x418*x419)/x420));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x421 = INT32_MIN;
	static uint16_t x422 = 169U;
	int32_t x424 = INT32_MIN;
	int32_t t73 = 254;

	t73 = (x421<((x422*x423)/x424));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x425 = 33U;
	uint16_t x426 = UINT16_MAX;
	uint16_t x427 = 852U;
	int8_t x428 = INT8_MIN;

	t74 = (x425<((x426*x427)/x428));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x429 = -773LL;
	int16_t x430 = 189;
	int32_t x431 = -1;
	uint64_t x432 = 49465491385067LLU;

	t75 = (x429<((x430*x431)/x432));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x433 = 2U;
	volatile uint64_t x434 = 1240706963210LLU;
	int8_t x435 = INT8_MIN;
	int32_t t76 = -1054;

	t76 = (x433<((x434*x435)/x436));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x438 = -19;
	int32_t x439 = 3891106;
	int16_t x440 = INT16_MIN;
	volatile int32_t t77 = -43157140;

	t77 = (x437<((x438*x439)/x440));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x441 = -205;
	int32_t x442 = -1;
	int8_t x443 = -1;
	int16_t x444 = INT16_MIN;

	t78 = (x441<((x442*x443)/x444));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x449 = -828900;
	int32_t x450 = 60316;
	static volatile uint64_t x451 = UINT64_MAX;

	t79 = (x449<((x450*x451)/x452));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x454 = 200711706U;
	int32_t t80 = 862719;

	t80 = (x453<((x454*x455)/x456));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x459 = 6025124LL;
	uint16_t x460 = 1U;
	int32_t t81 = -1056541443;

	t81 = (x457<((x458*x459)/x460));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x466 = 407485421123909LLU;
	static uint16_t x467 = 58U;
	int32_t x468 = INT32_MAX;

	t82 = (x465<((x466*x467)/x468));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x474 = 12LLU;
	int32_t x475 = INT32_MIN;
	static volatile int32_t t83 = 50;

	t83 = (x473<((x474*x475)/x476));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x485 = INT8_MIN;
	uint64_t x486 = UINT64_MAX;
	static uint8_t x487 = 0U;
	uint32_t x488 = 1821738U;
	volatile int32_t t84 = 6306;

	t84 = (x485<((x486*x487)/x488));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x501 = -182;
	int16_t x502 = INT16_MIN;
	volatile int32_t x504 = 142698020;

	t85 = (x501<((x502*x503)/x504));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x505 = -1;
	int32_t x506 = -1;
	static int8_t x507 = INT8_MIN;
	int32_t t86 = -231;

	t86 = (x505<((x506*x507)/x508));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x509 = INT16_MIN;
	int16_t x510 = -1;
	uint32_t x512 = UINT32_MAX;
	volatile int32_t t87 = -369920;

	t87 = (x509<((x510*x511)/x512));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x514 = 104U;
	uint16_t x515 = 419U;
	uint32_t x516 = UINT32_MAX;
	volatile int32_t t88 = -323855;

	t88 = (x513<((x514*x515)/x516));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x525 = 58U;
	int8_t x526 = 0;
	uint16_t x527 = 9903U;
	volatile int64_t x528 = 1480439105LL;
	int32_t t89 = -63;

	t89 = (x525<((x526*x527)/x528));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x529 = -1LL;
	static int16_t x530 = INT16_MAX;
	int32_t x531 = -1;
	uint32_t x532 = 773244U;
	int32_t t90 = -63;

	t90 = (x529<((x530*x531)/x532));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x537 = 240330942U;
	volatile int32_t x538 = -1042;
	int16_t x539 = INT16_MIN;
	int32_t x540 = 63;
	volatile int32_t t91 = -129896;

	t91 = (x537<((x538*x539)/x540));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x545 = INT16_MIN;
	uint64_t x546 = UINT64_MAX;
	int64_t x547 = -53173275863358LL;
	static int8_t x548 = INT8_MIN;
	static volatile int32_t t92 = -26734119;

	t92 = (x545<((x546*x547)/x548));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x553 = 10086LL;
	static int8_t x554 = INT8_MIN;
	static uint32_t x555 = 63211U;
	int32_t t93 = -499675;

	t93 = (x553<((x554*x555)/x556));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x557 = INT64_MAX;
	int16_t x558 = -459;
	uint64_t x559 = 171453959LLU;

	t94 = (x557<((x558*x559)/x560));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x565 = INT16_MIN;
	volatile int32_t x566 = 0;
	uint16_t x567 = UINT16_MAX;
	static volatile int8_t x568 = 11;

	t95 = (x565<((x566*x567)/x568));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x569 = 1;
	int32_t x570 = INT32_MAX;
	int32_t x571 = -1;
	uint16_t x572 = 485U;
	int32_t t96 = 18;

	t96 = (x569<((x570*x571)/x572));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x573 = -1;
	static int16_t x574 = INT16_MAX;
	uint16_t x575 = 47U;
	volatile int32_t t97 = 2;

	t97 = (x573<((x574*x575)/x576));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x581 = INT16_MAX;
	int64_t x582 = 116LL;
	uint64_t x583 = 3LLU;
	uint32_t x584 = UINT32_MAX;
	int32_t t98 = 28;

	t98 = (x581<((x582*x583)/x584));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x591 = -1;
	static volatile int32_t t99 = -26147017;

	t99 = (x589<((x590*x591)/x592));

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

