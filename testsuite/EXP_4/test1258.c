#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MAX;
uint32_t x9 = UINT32_MAX;
int8_t x10 = 0;
int64_t x11 = INT64_MIN;
int16_t x12 = INT16_MIN;
uint8_t x14 = 38U;
volatile int8_t x15 = INT8_MIN;
volatile int32_t t3 = 6494201;
int16_t x31 = 1;
int16_t x35 = -1;
uint64_t x47 = UINT64_MAX;
volatile int32_t t7 = -114796;
static volatile int64_t x58 = INT64_MAX;
uint64_t x60 = 545541817442LLU;
int32_t x62 = 2030454;
int8_t x63 = INT8_MIN;
static volatile int64_t x78 = INT64_MAX;
uint8_t x80 = UINT8_MAX;
int64_t x96 = INT64_MAX;
int16_t x99 = 1;
int16_t x104 = -8;
volatile int32_t x110 = INT32_MAX;
static volatile int64_t x115 = INT64_MIN;
uint16_t x118 = UINT16_MAX;
int16_t x123 = INT16_MIN;
int8_t x124 = -53;
int8_t x125 = 17;
volatile int8_t x128 = INT8_MIN;
uint64_t x149 = UINT64_MAX;
volatile int32_t t24 = 28580;
static uint16_t x162 = 11U;
static volatile int32_t t26 = 328;
int32_t t30 = 55;
volatile int16_t x220 = INT16_MAX;
uint32_t x223 = 0U;
volatile int32_t t35 = 87;
int8_t x244 = INT8_MIN;
uint8_t x249 = 47U;
int32_t x250 = INT32_MAX;
int16_t x257 = 266;
uint16_t x262 = 1U;
int32_t x264 = -1;
int32_t t40 = 51905808;
volatile int8_t x267 = INT8_MIN;
uint8_t x268 = UINT8_MAX;
int16_t x277 = INT16_MAX;
int32_t t42 = -3;
int16_t x284 = -5;
int8_t x290 = 1;
uint32_t x291 = UINT32_MAX;
int32_t t49 = 319;
int32_t t51 = -1;
int32_t x345 = -122137;
int16_t x351 = 74;
static int32_t x359 = INT32_MAX;
static uint32_t x360 = 12U;
int32_t x369 = -1;
uint32_t x370 = UINT32_MAX;
uint8_t x382 = 0U;
int8_t x391 = 24;
static int32_t t60 = 1;
volatile int32_t t61 = -7550;
uint32_t x407 = UINT32_MAX;
volatile int32_t x408 = INT32_MIN;
int32_t x419 = INT32_MIN;
uint16_t x429 = 121U;
uint32_t x436 = UINT32_MAX;
int8_t x437 = 0;
volatile uint64_t x438 = 52553925344485635LLU;
int32_t x439 = -1;
volatile int32_t t71 = -961229936;
uint8_t x462 = 6U;
int8_t x481 = INT8_MAX;
int8_t x488 = INT8_MIN;
volatile int16_t x496 = -1;
volatile int16_t x500 = INT16_MIN;
int32_t t80 = 83;
volatile int64_t x515 = INT64_MIN;
uint64_t x526 = 24299314235323040LLU;
int16_t x528 = INT16_MAX;
volatile int32_t x544 = INT32_MIN;
uint16_t x556 = UINT16_MAX;
int16_t x562 = 0;
static int64_t x565 = INT64_MIN;
int32_t t89 = 255558527;
uint16_t x574 = 1205U;
int64_t x581 = -1LL;
int32_t t92 = -13478;
volatile int32_t t94 = -1247978;
static uint16_t x599 = UINT16_MAX;
volatile int32_t x607 = INT32_MIN;
int64_t x636 = INT64_MIN;
int32_t t99 = -1753071;


void f0(void) {
	static int32_t x1 = 14314;
	int16_t x2 = 4;
	int64_t x3 = 0LL;
	uint64_t x4 = UINT64_MAX;
	static int32_t t0 = 17;

	t0 = (x1<=(x2<<(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile uint32_t x7 = UINT32_MAX;
	volatile int32_t x8 = -90;
	volatile int32_t t1 = 322;

	t1 = (x5<=(x6<<(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t t2 = 54;

	t2 = (x9<=(x10<<(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -54;
	uint32_t x16 = 3U;

	t3 = (x13<=(x14<<(x15==x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = -4;
	int8_t x30 = 2;
	uint64_t x32 = 44951792000083062LLU;
	static int32_t t4 = -44;

	t4 = (x29<=(x30<<(x31==x32)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = -1;
	int16_t x34 = 268;
	int16_t x36 = INT16_MAX;
	int32_t t5 = 14;

	t5 = (x33<=(x34<<(x35==x36)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = UINT32_MAX;
	uint8_t x38 = 1U;
	volatile int16_t x39 = -1;
	uint32_t x40 = 21U;
	int32_t t6 = -151;

	t6 = (x37<=(x38<<(x39==x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = 16649283871362LLU;
	static uint32_t x46 = 86U;
	int8_t x48 = INT8_MIN;

	t7 = (x45<=(x46<<(x47==x48)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x57 = 1240802350916LL;
	volatile int64_t x59 = INT64_MIN;
	int32_t t8 = -12847;

	t8 = (x57<=(x58<<(x59==x60)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x61 = -36;
	volatile int32_t x64 = -1;
	int32_t t9 = -992347;

	t9 = (x61<=(x62<<(x63==x64)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = 13;
	int32_t x66 = 29;
	int32_t x67 = INT32_MIN;
	uint32_t x68 = UINT32_MAX;
	int32_t t10 = 200044324;

	t10 = (x65<=(x66<<(x67==x68)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x77 = UINT32_MAX;
	static uint32_t x79 = 225820850U;
	int32_t t11 = 3644;

	t11 = (x77<=(x78<<(x79==x80)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x85 = -31LL;
	uint32_t x86 = 1097U;
	int16_t x87 = INT16_MIN;
	int8_t x88 = -1;
	int32_t t12 = 63060585;

	t12 = (x85<=(x86<<(x87==x88)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x93 = 0U;
	static int8_t x94 = INT8_MAX;
	int32_t x95 = INT32_MAX;
	volatile int32_t t13 = -728851818;

	t13 = (x93<=(x94<<(x95==x96)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x97 = 48;
	int32_t x98 = 17806;
	static int64_t x100 = INT64_MIN;
	int32_t t14 = 212048;

	t14 = (x97<=(x98<<(x99==x100)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x101 = 275U;
	int16_t x102 = 14;
	int64_t x103 = -32870LL;
	static int32_t t15 = -961;

	t15 = (x101<=(x102<<(x103==x104)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x109 = INT32_MIN;
	uint8_t x111 = 2U;
	static int32_t x112 = -1075661;
	int32_t t16 = -259;

	t16 = (x109<=(x110<<(x111==x112)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x113 = -1;
	int64_t x114 = 8499207503559636LL;
	int32_t x116 = INT32_MIN;
	int32_t t17 = -221297;

	t17 = (x113<=(x114<<(x115==x116)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x117 = 300228608906LLU;
	uint64_t x119 = 51371696427979LLU;
	int64_t x120 = INT64_MAX;
	volatile int32_t t18 = -5;

	t18 = (x117<=(x118<<(x119==x120)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x121 = INT8_MIN;
	uint32_t x122 = UINT32_MAX;
	volatile int32_t t19 = -41211;

	t19 = (x121<=(x122<<(x123==x124)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x126 = UINT32_MAX;
	uint16_t x127 = 3270U;
	static volatile int32_t t20 = 740565820;

	t20 = (x125<=(x126<<(x127==x128)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x137 = UINT64_MAX;
	uint8_t x138 = 8U;
	static int16_t x139 = INT16_MIN;
	int32_t x140 = -14378;
	int32_t t21 = 9393035;

	t21 = (x137<=(x138<<(x139==x140)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x141 = -1;
	uint32_t x142 = 7U;
	uint64_t x143 = UINT64_MAX;
	uint64_t x144 = 19359LLU;
	volatile int32_t t22 = 247;

	t22 = (x141<=(x142<<(x143==x144)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x150 = UINT8_MAX;
	int64_t x151 = INT64_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t23 = 1587837;

	t23 = (x149<=(x150<<(x151==x152)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x157 = 4282812U;
	uint16_t x158 = 240U;
	int64_t x159 = 31175819680696859LL;
	int8_t x160 = 25;

	t24 = (x157<=(x158<<(x159==x160)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x161 = -1;
	int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t25 = 6398;

	t25 = (x161<=(x162<<(x163==x164)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x169 = 10U;
	static uint8_t x170 = UINT8_MAX;
	int16_t x171 = INT16_MAX;
	uint8_t x172 = 77U;

	t26 = (x169<=(x170<<(x171==x172)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x177 = -6665090;
	uint16_t x178 = 2U;
	int8_t x179 = INT8_MIN;
	static int32_t x180 = -1;
	volatile int32_t t27 = -243;

	t27 = (x177<=(x178<<(x179==x180)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x181 = INT64_MAX;
	static int16_t x182 = INT16_MAX;
	static uint64_t x183 = 17010076790LLU;
	static int64_t x184 = INT64_MAX;
	volatile int32_t t28 = -5132;

	t28 = (x181<=(x182<<(x183==x184)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x185 = INT32_MAX;
	volatile int64_t x186 = INT64_MAX;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = INT16_MAX;
	int32_t t29 = 2518639;

	t29 = (x185<=(x186<<(x187==x188)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x193 = INT32_MAX;
	uint32_t x194 = UINT32_MAX;
	uint16_t x195 = UINT16_MAX;
	int8_t x196 = INT8_MAX;

	t30 = (x193<=(x194<<(x195==x196)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = 1;
	static int8_t x207 = -1;
	int64_t x208 = INT64_MIN;
	int32_t t31 = -439683;

	t31 = (x205<=(x206<<(x207==x208)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x213 = UINT16_MAX;
	uint16_t x214 = 9080U;
	volatile int64_t x215 = INT64_MIN;
	int64_t x216 = -1LL;
	static volatile int32_t t32 = -2;

	t32 = (x213<=(x214<<(x215==x216)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x217 = INT16_MIN;
	uint64_t x218 = 23870967264056LLU;
	static uint16_t x219 = 1210U;
	int32_t t33 = 27307305;

	t33 = (x217<=(x218<<(x219==x220)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x221 = -422;
	volatile uint8_t x222 = UINT8_MAX;
	int16_t x224 = -5;
	volatile int32_t t34 = -12;

	t34 = (x221<=(x222<<(x223==x224)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x229 = 30U;
	int64_t x230 = INT64_MAX;
	int64_t x231 = INT64_MIN;
	volatile int16_t x232 = INT16_MAX;

	t35 = (x229<=(x230<<(x231==x232)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x233 = INT64_MAX;
	static uint64_t x234 = 3095811LLU;
	int8_t x235 = -1;
	uint16_t x236 = 175U;
	int32_t t36 = -8048;

	t36 = (x233<=(x234<<(x235==x236)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x241 = 2725804303LLU;
	uint64_t x242 = UINT64_MAX;
	static uint8_t x243 = UINT8_MAX;
	volatile int32_t t37 = 24140691;

	t37 = (x241<=(x242<<(x243==x244)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x251 = 21171;
	static int64_t x252 = INT64_MIN;
	volatile int32_t t38 = 16370;

	t38 = (x249<=(x250<<(x251==x252)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x258 = 12U;
	uint16_t x259 = 4U;
	int16_t x260 = 1;
	static int32_t t39 = -10103;

	t39 = (x257<=(x258<<(x259==x260)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x261 = 1U;
	int64_t x263 = INT64_MIN;

	t40 = (x261<=(x262<<(x263==x264)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x265 = 3202U;
	uint32_t x266 = 2360U;
	int32_t t41 = 3;

	t41 = (x265<=(x266<<(x267==x268)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x278 = 234203159U;
	volatile int32_t x279 = 1037589;
	volatile uint16_t x280 = 22461U;

	t42 = (x277<=(x278<<(x279==x280)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x281 = 15;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = INT8_MIN;
	int32_t t43 = -22679372;

	t43 = (x281<=(x282<<(x283==x284)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x285 = -1;
	int8_t x286 = 1;
	volatile uint8_t x287 = 37U;
	volatile uint16_t x288 = 19U;
	int32_t t44 = 3;

	t44 = (x285<=(x286<<(x287==x288)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x289 = UINT8_MAX;
	uint8_t x292 = UINT8_MAX;
	int32_t t45 = -1;

	t45 = (x289<=(x290<<(x291==x292)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x293 = INT16_MIN;
	volatile int64_t x294 = 401395782LL;
	int16_t x295 = INT16_MIN;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t46 = -11481347;

	t46 = (x293<=(x294<<(x295==x296)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x301 = INT64_MIN;
	volatile uint32_t x302 = 8194050U;
	int8_t x303 = INT8_MIN;
	int8_t x304 = 0;
	static int32_t t47 = 0;

	t47 = (x301<=(x302<<(x303==x304)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = 9320;
	uint32_t x315 = 1247U;
	volatile uint8_t x316 = UINT8_MAX;
	volatile int32_t t48 = -7976;

	t48 = (x313<=(x314<<(x315==x316)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x317 = 3302955961163793848LLU;
	int16_t x318 = INT16_MAX;
	uint8_t x319 = 52U;
	static int32_t x320 = -1;

	t49 = (x317<=(x318<<(x319==x320)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x321 = INT32_MIN;
	uint16_t x322 = UINT16_MAX;
	int8_t x323 = -10;
	int8_t x324 = INT8_MAX;
	static int32_t t50 = -177326;

	t50 = (x321<=(x322<<(x323==x324)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x325 = 0U;
	static int32_t x326 = 0;
	uint8_t x327 = UINT8_MAX;
	uint8_t x328 = UINT8_MAX;

	t51 = (x325<=(x326<<(x327==x328)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x333 = -11692LL;
	uint16_t x334 = UINT16_MAX;
	static uint32_t x335 = UINT32_MAX;
	uint64_t x336 = UINT64_MAX;
	int32_t t52 = 95441429;

	t52 = (x333<=(x334<<(x335==x336)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x346 = 20957906296726LLU;
	uint32_t x347 = UINT32_MAX;
	uint32_t x348 = 4078036U;
	static volatile int32_t t53 = -41;

	t53 = (x345<=(x346<<(x347==x348)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x349 = UINT32_MAX;
	static int8_t x350 = 14;
	static volatile int8_t x352 = INT8_MIN;
	int32_t t54 = 2966536;

	t54 = (x349<=(x350<<(x351==x352)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x357 = INT16_MIN;
	int64_t x358 = INT64_MAX;
	volatile int32_t t55 = 1;

	t55 = (x357<=(x358<<(x359==x360)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x361 = -1;
	volatile uint8_t x362 = UINT8_MAX;
	volatile int32_t x363 = INT32_MIN;
	volatile int8_t x364 = -1;
	int32_t t56 = -75917906;

	t56 = (x361<=(x362<<(x363==x364)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x371 = 62U;
	volatile int8_t x372 = -1;
	int32_t t57 = -245398579;

	t57 = (x369<=(x370<<(x371==x372)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x381 = 8542;
	volatile uint32_t x383 = 2568506U;
	static int32_t x384 = INT32_MAX;
	volatile int32_t t58 = -44216574;

	t58 = (x381<=(x382<<(x383==x384)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x389 = -1488013347LL;
	int32_t x390 = INT32_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t59 = -389566;

	t59 = (x389<=(x390<<(x391==x392)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x393 = INT16_MAX;
	uint16_t x394 = 2U;
	static uint32_t x395 = UINT32_MAX;
	volatile int32_t x396 = INT32_MIN;

	t60 = (x393<=(x394<<(x395==x396)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x401 = UINT64_MAX;
	uint64_t x402 = 400764513735000721LLU;
	int32_t x403 = INT32_MAX;
	volatile uint64_t x404 = 29439619081014102LLU;

	t61 = (x401<=(x402<<(x403==x404)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x405 = UINT16_MAX;
	static int8_t x406 = INT8_MAX;
	int32_t t62 = 243852;

	t62 = (x405<=(x406<<(x407==x408)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x409 = 707066857757342492LLU;
	uint32_t x410 = 364256U;
	int8_t x411 = 1;
	volatile int16_t x412 = 2446;
	int32_t t63 = -149086;

	t63 = (x409<=(x410<<(x411==x412)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x417 = UINT8_MAX;
	uint64_t x418 = UINT64_MAX;
	int8_t x420 = 12;
	volatile int32_t t64 = -48;

	t64 = (x417<=(x418<<(x419==x420)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x430 = 706;
	uint64_t x431 = 912894683675303LLU;
	int64_t x432 = INT64_MAX;
	volatile int32_t t65 = -63474;

	t65 = (x429<=(x430<<(x431==x432)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x433 = INT64_MIN;
	static uint8_t x434 = UINT8_MAX;
	volatile int16_t x435 = INT16_MAX;
	volatile int32_t t66 = 13590;

	t66 = (x433<=(x434<<(x435==x436)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x440 = UINT16_MAX;
	int32_t t67 = 35;

	t67 = (x437<=(x438<<(x439==x440)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x441 = 58;
	int64_t x442 = INT64_MAX;
	int8_t x443 = INT8_MAX;
	int32_t x444 = -1;
	int32_t t68 = 91;

	t68 = (x441<=(x442<<(x443==x444)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x445 = INT8_MIN;
	volatile uint8_t x446 = 0U;
	volatile int32_t x447 = -1;
	int8_t x448 = 3;
	volatile int32_t t69 = -591;

	t69 = (x445<=(x446<<(x447==x448)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x453 = 1685U;
	int64_t x454 = 1054007349503336046LL;
	static uint32_t x455 = 119446U;
	uint16_t x456 = 6421U;
	volatile int32_t t70 = 813549141;

	t70 = (x453<=(x454<<(x455==x456)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x457 = UINT32_MAX;
	static int32_t x458 = 2965;
	int32_t x459 = -63159;
	static uint64_t x460 = UINT64_MAX;

	t71 = (x457<=(x458<<(x459==x460)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x461 = UINT32_MAX;
	uint32_t x463 = 342U;
	static volatile int64_t x464 = INT64_MAX;
	volatile int32_t t72 = -166238646;

	t72 = (x461<=(x462<<(x463==x464)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x465 = 0;
	volatile int8_t x466 = 7;
	static int32_t x467 = INT32_MAX;
	volatile uint64_t x468 = 48599906370LLU;
	static volatile int32_t t73 = 6357625;

	t73 = (x465<=(x466<<(x467==x468)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x469 = 19U;
	volatile int8_t x470 = INT8_MAX;
	volatile int64_t x471 = -1LL;
	int64_t x472 = INT64_MIN;
	volatile int32_t t74 = 16665;

	t74 = (x469<=(x470<<(x471==x472)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x473 = -1;
	uint32_t x474 = 20U;
	uint8_t x475 = 114U;
	uint16_t x476 = UINT16_MAX;
	volatile int32_t t75 = 43010;

	t75 = (x473<=(x474<<(x475==x476)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x482 = 2317669U;
	int64_t x483 = 7402LL;
	static int32_t x484 = INT32_MIN;
	volatile int32_t t76 = -22921;

	t76 = (x481<=(x482<<(x483==x484)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x485 = 940U;
	uint64_t x486 = 2005134295096971LLU;
	static uint64_t x487 = 626LLU;
	volatile int32_t t77 = -150;

	t77 = (x485<=(x486<<(x487==x488)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x493 = INT16_MIN;
	volatile uint32_t x494 = UINT32_MAX;
	static uint32_t x495 = 5U;
	volatile int32_t t78 = -116180;

	t78 = (x493<=(x494<<(x495==x496)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x497 = INT64_MIN;
	uint32_t x498 = 206U;
	uint16_t x499 = UINT16_MAX;
	volatile int32_t t79 = 101308403;

	t79 = (x497<=(x498<<(x499==x500)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x501 = 349U;
	static uint32_t x502 = UINT32_MAX;
	int8_t x503 = INT8_MAX;
	int8_t x504 = INT8_MAX;

	t80 = (x501<=(x502<<(x503==x504)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x513 = 2014901733U;
	uint16_t x514 = 49U;
	uint32_t x516 = 382555540U;
	static volatile int32_t t81 = -96618348;

	t81 = (x513<=(x514<<(x515==x516)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x521 = UINT64_MAX;
	int32_t x522 = INT32_MAX;
	int32_t x523 = -10401650;
	int8_t x524 = -1;
	static volatile int32_t t82 = 1871079;

	t82 = (x521<=(x522<<(x523==x524)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x525 = UINT64_MAX;
	static int8_t x527 = -1;
	int32_t t83 = 3141988;

	t83 = (x525<=(x526<<(x527==x528)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x541 = INT64_MIN;
	uint8_t x542 = 0U;
	uint64_t x543 = 24967806937085LLU;
	volatile int32_t t84 = 157329985;

	t84 = (x541<=(x542<<(x543==x544)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x545 = INT32_MIN;
	int8_t x546 = 5;
	int16_t x547 = INT16_MIN;
	uint32_t x548 = 3650U;
	volatile int32_t t85 = 90;

	t85 = (x545<=(x546<<(x547==x548)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x553 = -1LL;
	volatile uint64_t x554 = UINT64_MAX;
	static uint8_t x555 = 2U;
	int32_t t86 = 277304693;

	t86 = (x553<=(x554<<(x555==x556)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x557 = INT8_MIN;
	static volatile int32_t x558 = INT32_MAX;
	volatile int32_t x559 = -40821;
	int8_t x560 = INT8_MAX;
	int32_t t87 = 486;

	t87 = (x557<=(x558<<(x559==x560)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x561 = 40;
	int64_t x563 = INT64_MAX;
	int32_t x564 = -1;
	static int32_t t88 = -1447805;

	t88 = (x561<=(x562<<(x563==x564)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x566 = INT32_MAX;
	int64_t x567 = -1LL;
	volatile int32_t x568 = INT32_MAX;

	t89 = (x565<=(x566<<(x567==x568)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x573 = INT16_MIN;
	int64_t x575 = -1LL;
	int16_t x576 = -3127;
	static volatile int32_t t90 = -12;

	t90 = (x573<=(x574<<(x575==x576)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x577 = UINT8_MAX;
	uint16_t x578 = 7737U;
	volatile uint32_t x579 = 56901259U;
	uint8_t x580 = 1U;
	int32_t t91 = -134;

	t91 = (x577<=(x578<<(x579==x580)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x582 = 15;
	int16_t x583 = 136;
	int8_t x584 = -11;

	t92 = (x581<=(x582<<(x583==x584)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x589 = -1LL;
	static uint32_t x590 = 3U;
	uint8_t x591 = UINT8_MAX;
	static int32_t x592 = INT32_MIN;
	volatile int32_t t93 = -5;

	t93 = (x589<=(x590<<(x591==x592)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x593 = UINT16_MAX;
	uint8_t x594 = 41U;
	int32_t x595 = INT32_MAX;
	int16_t x596 = -6973;

	t94 = (x593<=(x594<<(x595==x596)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x597 = 3U;
	int16_t x598 = INT16_MAX;
	uint8_t x600 = UINT8_MAX;
	volatile int32_t t95 = -202928;

	t95 = (x597<=(x598<<(x599==x600)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x605 = UINT16_MAX;
	static volatile uint8_t x606 = 3U;
	uint32_t x608 = UINT32_MAX;
	volatile int32_t t96 = 5;

	t96 = (x605<=(x606<<(x607==x608)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x621 = 2473U;
	uint64_t x622 = UINT64_MAX;
	int8_t x623 = INT8_MIN;
	int64_t x624 = INT64_MIN;
	volatile int32_t t97 = 315;

	t97 = (x621<=(x622<<(x623==x624)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x625 = -1;
	int16_t x626 = 64;
	uint64_t x627 = 4998763467400LLU;
	int8_t x628 = -1;
	volatile int32_t t98 = 500642;

	t98 = (x625<=(x626<<(x627==x628)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x633 = UINT64_MAX;
	uint32_t x634 = UINT32_MAX;
	int32_t x635 = INT32_MIN;

	t99 = (x633<=(x634<<(x635==x636)));

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

