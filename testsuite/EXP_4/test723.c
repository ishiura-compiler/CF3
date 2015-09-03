#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = UINT64_MAX;
volatile uint64_t x12 = 15LLU;
int64_t x14 = 21334154LL;
int32_t t2 = 47;
static int32_t t3 = -5;
static int32_t x36 = INT32_MIN;
int16_t x37 = INT16_MIN;
uint32_t x38 = 1481U;
int16_t x44 = INT16_MAX;
uint32_t x62 = UINT32_MAX;
uint32_t x63 = 1762116U;
int16_t x67 = -1;
int32_t t11 = -1;
static volatile uint16_t x69 = UINT16_MAX;
static int64_t x72 = INT64_MAX;
volatile int32_t t12 = 208220;
volatile int32_t t13 = 1115;
volatile uint32_t x90 = 32658760U;
volatile int32_t t17 = 15;
int32_t t18 = -148980;
int8_t x110 = -2;
int16_t x128 = -41;
static uint8_t x137 = 1U;
int32_t x141 = -982;
volatile uint16_t x168 = 2726U;
static int32_t x170 = -2;
int8_t x171 = -1;
volatile int32_t t30 = -2;
int16_t x173 = -1;
static int8_t x178 = INT8_MAX;
int32_t x179 = INT32_MIN;
int32_t x191 = 1974;
int8_t x192 = -12;
volatile uint64_t x203 = 94104158409755864LLU;
int8_t x206 = 1;
int32_t x221 = 3543553;
static volatile int32_t t39 = -204212;
uint16_t x227 = 3383U;
static int8_t x236 = INT8_MAX;
volatile int64_t x240 = 1031300618460LL;
static uint8_t x259 = 1U;
volatile uint16_t x262 = 29U;
uint64_t x264 = 17130033563LLU;
static int32_t t47 = -329193;
volatile int32_t t48 = 56;
int32_t t49 = -621842;
int16_t x277 = 0;
int32_t t50 = -57;
uint8_t x281 = UINT8_MAX;
static int32_t x284 = 129;
int32_t x306 = -1;
int16_t x307 = INT16_MIN;
uint64_t x313 = 114845986696LLU;
volatile int64_t x336 = 346212798911LL;
int32_t x340 = INT32_MIN;
static uint16_t x349 = 66U;
volatile int64_t x358 = -121746388955348567LL;
int16_t x367 = -1;
volatile int64_t x369 = 5LL;
static uint64_t x373 = 7051698436703LLU;
uint16_t x380 = 734U;
volatile int32_t t67 = -3243;
volatile int8_t x385 = INT8_MAX;
volatile int64_t x387 = 15388LL;
int64_t x388 = INT64_MIN;
int16_t x391 = INT16_MIN;
uint16_t x392 = UINT16_MAX;
int32_t t70 = -1;
int16_t x398 = INT16_MAX;
static int16_t x399 = INT16_MIN;
static int32_t t72 = -116;
uint16_t x407 = 8125U;
int64_t x412 = INT64_MIN;
volatile int64_t x413 = INT64_MIN;
volatile int16_t x417 = 1770;
volatile int64_t x429 = 3882613259306LL;
static uint8_t x430 = UINT8_MAX;
int8_t x444 = INT8_MAX;
int64_t x447 = -1LL;
volatile int32_t t80 = 491;
uint16_t x453 = UINT16_MAX;
static int64_t x454 = 1216448188LL;
static int16_t x473 = 240;
volatile uint64_t x475 = 250085713409LLU;
uint64_t x478 = UINT64_MAX;
static int32_t x479 = -261864;
volatile int32_t x490 = INT32_MAX;
int16_t x497 = -6;
volatile int16_t x499 = -40;
static volatile uint8_t x503 = 20U;
volatile int32_t t91 = -157642;
volatile int32_t t92 = 3410273;
int16_t x510 = 19;
int64_t x511 = 5LL;
int16_t x513 = 293;
int8_t x515 = -7;
static int8_t x518 = 1;
int32_t t95 = -273560;
uint32_t x535 = UINT32_MAX;
volatile int16_t x536 = INT16_MIN;
static int32_t x542 = -1541298;
int32_t t99 = 46;


void f0(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MIN;
	static volatile uint32_t x7 = UINT32_MAX;
	int16_t x8 = INT16_MIN;
	volatile int32_t t0 = -229402906;

	t0 = (x5==(x6/(x7%x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	int32_t x11 = INT32_MIN;
	int32_t t1 = 53;

	t1 = (x9==(x10/(x11%x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	int32_t x15 = INT32_MIN;
	uint16_t x16 = 898U;

	t2 = (x13==(x14/(x15%x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x29 = 42754LLU;
	volatile int32_t x30 = 84;
	uint32_t x31 = 7U;
	static int64_t x32 = 548LL;

	t3 = (x29==(x30/(x31%x32)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x33 = 21127;
	int32_t x34 = INT32_MAX;
	uint16_t x35 = 425U;
	int32_t t4 = -112940313;

	t4 = (x33==(x34/(x35%x36)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x39 = -1;
	int16_t x40 = INT16_MIN;
	volatile int32_t t5 = 3128346;

	t5 = (x37==(x38/(x39%x40)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x41 = UINT64_MAX;
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	int32_t t6 = -496347;

	t6 = (x41==(x42/(x43%x44)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = INT64_MIN;
	int16_t x46 = -2;
	int64_t x47 = INT64_MAX;
	static uint8_t x48 = 34U;
	int32_t t7 = 15;

	t7 = (x45==(x46/(x47%x48)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x50 = 1U;
	uint32_t x51 = 4U;
	static int64_t x52 = INT64_MIN;
	int32_t t8 = 472;

	t8 = (x49==(x50/(x51%x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	uint32_t x54 = 40737702U;
	static volatile int16_t x55 = -1;
	volatile int16_t x56 = 3;
	int32_t t9 = 15125196;

	t9 = (x53==(x54/(x55%x56)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x61 = UINT16_MAX;
	static int32_t x64 = 1029823718;
	volatile int32_t t10 = -239339995;

	t10 = (x61==(x62/(x63%x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x65 = -1;
	volatile int64_t x66 = 325409678LL;
	int8_t x68 = INT8_MAX;

	t11 = (x65==(x66/(x67%x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x70 = -1;
	uint8_t x71 = 49U;

	t12 = (x69==(x70/(x71%x72)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MIN;
	uint64_t x78 = UINT64_MAX;
	static int64_t x79 = INT64_MIN;
	int64_t x80 = INT64_MAX;

	t13 = (x77==(x78/(x79%x80)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = -1;
	int8_t x82 = -11;
	uint32_t x83 = 797299U;
	int32_t x84 = INT32_MIN;
	volatile int32_t t14 = 44341;

	t14 = (x81==(x82/(x83%x84)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = INT8_MAX;
	int8_t x86 = INT8_MIN;
	static int64_t x87 = -1LL;
	uint64_t x88 = 5068LLU;
	volatile int32_t t15 = -405746;

	t15 = (x85==(x86/(x87%x88)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = INT32_MIN;
	int16_t x91 = -1;
	int16_t x92 = INT16_MIN;
	volatile int32_t t16 = -3245;

	t16 = (x89==(x90/(x91%x92)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x97 = INT16_MIN;
	volatile int64_t x98 = INT64_MIN;
	static volatile uint64_t x99 = UINT64_MAX;
	int32_t x100 = INT32_MAX;

	t17 = (x97==(x98/(x99%x100)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x105 = INT64_MIN;
	uint16_t x106 = 5U;
	int16_t x107 = INT16_MAX;
	int64_t x108 = 983166940LL;

	t18 = (x105==(x106/(x107%x108)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = INT8_MIN;
	int64_t x111 = 1385359LL;
	volatile uint64_t x112 = UINT64_MAX;
	int32_t t19 = -3621;

	t19 = (x109==(x110/(x111%x112)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x117 = INT8_MIN;
	int8_t x118 = -1;
	uint16_t x119 = 176U;
	static volatile int16_t x120 = 263;
	int32_t t20 = -444714;

	t20 = (x117==(x118/(x119%x120)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = 915973;
	uint8_t x122 = 7U;
	int16_t x123 = -1;
	int16_t x124 = INT16_MIN;
	volatile int32_t t21 = 558172541;

	t21 = (x121==(x122/(x123%x124)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = 488U;
	static int64_t x126 = INT64_MIN;
	int8_t x127 = 54;
	int32_t t22 = 792467894;

	t22 = (x125==(x126/(x127%x128)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x129 = INT64_MIN;
	int32_t x130 = INT32_MIN;
	static int16_t x131 = INT16_MAX;
	uint8_t x132 = 91U;
	volatile int32_t t23 = 204192369;

	t23 = (x129==(x130/(x131%x132)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x138 = 5073119292LLU;
	int8_t x139 = -1;
	int64_t x140 = -216986431LL;
	volatile int32_t t24 = -8866434;

	t24 = (x137==(x138/(x139%x140)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x142 = -693335;
	int32_t x143 = -1981;
	static volatile int32_t x144 = INT32_MIN;
	int32_t t25 = -42118400;

	t25 = (x141==(x142/(x143%x144)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = -1LL;
	uint64_t x146 = 120LLU;
	static int16_t x147 = -1;
	static int32_t x148 = INT32_MIN;
	volatile int32_t t26 = 918907484;

	t26 = (x145==(x146/(x147%x148)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x149 = -1LL;
	uint8_t x150 = 31U;
	int64_t x151 = -1LL;
	int64_t x152 = INT64_MIN;
	int32_t t27 = -3749;

	t27 = (x149==(x150/(x151%x152)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = -7;
	uint64_t x155 = 17064863406110LLU;
	int64_t x156 = INT64_MAX;
	volatile int32_t t28 = -211766;

	t28 = (x153==(x154/(x155%x156)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x165 = -1;
	uint16_t x166 = UINT16_MAX;
	int64_t x167 = -1LL;
	int32_t t29 = -8092061;

	t29 = (x165==(x166/(x167%x168)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x169 = INT64_MIN;
	int32_t x172 = INT32_MAX;

	t30 = (x169==(x170/(x171%x172)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x174 = INT8_MAX;
	volatile uint64_t x175 = 9745639861149725LLU;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t31 = 24727412;

	t31 = (x173==(x174/(x175%x176)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x177 = 252U;
	uint16_t x180 = 451U;
	int32_t t32 = -1;

	t32 = (x177==(x178/(x179%x180)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x189 = INT8_MIN;
	int64_t x190 = INT64_MIN;
	volatile int32_t t33 = 6653545;

	t33 = (x189==(x190/(x191%x192)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x193 = INT64_MAX;
	volatile int32_t x194 = -1;
	int8_t x195 = INT8_MAX;
	static int8_t x196 = INT8_MIN;
	int32_t t34 = -9200878;

	t34 = (x193==(x194/(x195%x196)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x201 = 8U;
	int64_t x202 = INT64_MAX;
	int32_t x204 = -3;
	volatile int32_t t35 = -7;

	t35 = (x201==(x202/(x203%x204)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x205 = -7;
	int8_t x207 = INT8_MIN;
	volatile int32_t x208 = INT32_MIN;
	int32_t t36 = 2313092;

	t36 = (x205==(x206/(x207%x208)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x213 = UINT8_MAX;
	uint64_t x214 = 71282926295155LLU;
	volatile int32_t x215 = 406;
	int8_t x216 = INT8_MIN;
	int32_t t37 = -1210;

	t37 = (x213==(x214/(x215%x216)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x217 = INT8_MAX;
	int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MAX;
	int16_t x220 = 2031;
	volatile int32_t t38 = -9;

	t38 = (x217==(x218/(x219%x220)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x222 = INT64_MAX;
	int64_t x223 = INT64_MIN;
	int64_t x224 = INT64_MAX;

	t39 = (x221==(x222/(x223%x224)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x225 = 4LLU;
	uint32_t x226 = UINT32_MAX;
	uint16_t x228 = 2U;
	volatile int32_t t40 = -1;

	t40 = (x225==(x226/(x227%x228)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x233 = -1;
	int64_t x234 = -1LL;
	volatile int64_t x235 = INT64_MIN;
	static int32_t t41 = 133707790;

	t41 = (x233==(x234/(x235%x236)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x237 = 755346U;
	volatile int16_t x238 = -56;
	int16_t x239 = -1;
	int32_t t42 = -7;

	t42 = (x237==(x238/(x239%x240)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x241 = 107LLU;
	static uint8_t x242 = 0U;
	int8_t x243 = -1;
	uint64_t x244 = 183086006LLU;
	volatile int32_t t43 = 1;

	t43 = (x241==(x242/(x243%x244)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = INT16_MAX;
	int16_t x246 = -1;
	int8_t x247 = INT8_MIN;
	static uint32_t x248 = 408U;
	int32_t t44 = 5648;

	t44 = (x245==(x246/(x247%x248)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x257 = INT32_MIN;
	int16_t x258 = -1;
	uint16_t x260 = 73U;
	int32_t t45 = 32;

	t45 = (x257==(x258/(x259%x260)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x261 = -1;
	volatile int8_t x263 = 7;
	volatile int32_t t46 = -2964417;

	t46 = (x261==(x262/(x263%x264)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x265 = -1;
	int8_t x266 = INT8_MAX;
	int32_t x267 = -4316400;
	uint64_t x268 = 898870LLU;

	t47 = (x265==(x266/(x267%x268)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x269 = -846;
	static int64_t x270 = -192760699LL;
	uint8_t x271 = 26U;
	static volatile int32_t x272 = 93;

	t48 = (x269==(x270/(x271%x272)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x273 = INT64_MIN;
	int64_t x274 = 154LL;
	static int32_t x275 = -16156632;
	int16_t x276 = 9;

	t49 = (x273==(x274/(x275%x276)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x278 = -1;
	uint64_t x279 = 879500123398151895LLU;
	int64_t x280 = -1LL;

	t50 = (x277==(x278/(x279%x280)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x282 = 4U;
	volatile int32_t x283 = INT32_MIN;
	int32_t t51 = 5856572;

	t51 = (x281==(x282/(x283%x284)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x285 = 15914023504674659LLU;
	uint8_t x286 = 7U;
	uint64_t x287 = 126146941103692LLU;
	int32_t x288 = INT32_MIN;
	static volatile int32_t t52 = 1082;

	t52 = (x285==(x286/(x287%x288)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x293 = -63;
	uint64_t x294 = UINT64_MAX;
	static int32_t x295 = 17;
	static uint32_t x296 = 1768U;
	int32_t t53 = 163621388;

	t53 = (x293==(x294/(x295%x296)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x297 = 4067U;
	int8_t x298 = -6;
	int16_t x299 = INT16_MAX;
	int64_t x300 = INT64_MIN;
	volatile int32_t t54 = -883;

	t54 = (x297==(x298/(x299%x300)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x305 = 1262;
	uint8_t x308 = 11U;
	int32_t t55 = -1061;

	t55 = (x305==(x306/(x307%x308)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x314 = -1;
	int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MAX;
	static int32_t t56 = 489285;

	t56 = (x313==(x314/(x315%x316)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x317 = -6;
	int8_t x318 = INT8_MAX;
	volatile int32_t x319 = INT32_MIN;
	static int8_t x320 = INT8_MAX;
	volatile int32_t t57 = 0;

	t57 = (x317==(x318/(x319%x320)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x333 = 28;
	static volatile int16_t x334 = 12;
	int8_t x335 = 1;
	static volatile int32_t t58 = 656;

	t58 = (x333==(x334/(x335%x336)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x337 = INT8_MIN;
	static volatile int8_t x338 = -2;
	volatile uint64_t x339 = UINT64_MAX;
	volatile int32_t t59 = -24519146;

	t59 = (x337==(x338/(x339%x340)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	uint8_t x343 = 102U;
	int32_t x344 = -1796;
	volatile int32_t t60 = 58;

	t60 = (x341==(x342/(x343%x344)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x350 = -2979244517LL;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = INT16_MAX;
	static volatile int32_t t61 = 55574;

	t61 = (x349==(x350/(x351%x352)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x357 = -1LL;
	int16_t x359 = INT16_MIN;
	static uint32_t x360 = UINT32_MAX;
	static volatile int32_t t62 = -521523;

	t62 = (x357==(x358/(x359%x360)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x361 = UINT8_MAX;
	static volatile uint64_t x362 = UINT64_MAX;
	uint8_t x363 = 7U;
	uint16_t x364 = 25U;
	static volatile int32_t t63 = -18205;

	t63 = (x361==(x362/(x363%x364)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x365 = UINT16_MAX;
	static uint16_t x366 = 138U;
	static int16_t x368 = INT16_MIN;
	int32_t t64 = 11271828;

	t64 = (x365==(x366/(x367%x368)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x370 = INT32_MIN;
	volatile int8_t x371 = INT8_MIN;
	volatile int16_t x372 = INT16_MAX;
	static volatile int32_t t65 = 0;

	t65 = (x369==(x370/(x371%x372)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x374 = INT32_MIN;
	static int16_t x375 = -108;
	volatile uint8_t x376 = UINT8_MAX;
	volatile int32_t t66 = 156112;

	t66 = (x373==(x374/(x375%x376)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x377 = INT32_MAX;
	static int8_t x378 = -8;
	volatile uint64_t x379 = 48068863LLU;

	t67 = (x377==(x378/(x379%x380)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x386 = 0;
	int32_t t68 = -366442;

	t68 = (x385==(x386/(x387%x388)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x389 = 27U;
	volatile int16_t x390 = INT16_MAX;
	static int32_t t69 = -10966;

	t69 = (x389==(x390/(x391%x392)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x393 = -1LL;
	int16_t x394 = INT16_MIN;
	int16_t x395 = -8234;
	volatile int16_t x396 = INT16_MIN;

	t70 = (x393==(x394/(x395%x396)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x397 = 1467U;
	uint8_t x400 = UINT8_MAX;
	static volatile int32_t t71 = -37;

	t71 = (x397==(x398/(x399%x400)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x401 = UINT16_MAX;
	static int32_t x402 = INT32_MAX;
	int32_t x403 = 24515613;
	int32_t x404 = 1151715;

	t72 = (x401==(x402/(x403%x404)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x405 = -1;
	uint16_t x406 = UINT16_MAX;
	volatile uint64_t x408 = UINT64_MAX;
	static int32_t t73 = -508861097;

	t73 = (x405==(x406/(x407%x408)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x409 = INT64_MIN;
	int32_t x410 = INT32_MAX;
	static int8_t x411 = INT8_MAX;
	volatile int32_t t74 = 1;

	t74 = (x409==(x410/(x411%x412)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x414 = INT16_MIN;
	static uint32_t x415 = UINT32_MAX;
	uint16_t x416 = 13U;
	volatile int32_t t75 = -19944177;

	t75 = (x413==(x414/(x415%x416)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x418 = -1;
	int16_t x419 = INT16_MAX;
	volatile uint32_t x420 = 652435634U;
	int32_t t76 = 83744;

	t76 = (x417==(x418/(x419%x420)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x431 = -24;
	uint32_t x432 = 227U;
	volatile int32_t t77 = -614702;

	t77 = (x429==(x430/(x431%x432)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x441 = INT64_MIN;
	uint64_t x442 = 67707429501503LLU;
	volatile int16_t x443 = INT16_MAX;
	int32_t t78 = 437692;

	t78 = (x441==(x442/(x443%x444)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x445 = 3U;
	static int16_t x446 = 3076;
	int8_t x448 = INT8_MAX;
	int32_t t79 = 15682148;

	t79 = (x445==(x446/(x447%x448)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x449 = INT32_MIN;
	static uint64_t x450 = 128637LLU;
	volatile int32_t x451 = INT32_MIN;
	static int64_t x452 = INT64_MIN;

	t80 = (x449==(x450/(x451%x452)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x455 = -1;
	static uint64_t x456 = 3358839LLU;
	static volatile int32_t t81 = -156;

	t81 = (x453==(x454/(x455%x456)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x457 = -1588;
	static uint16_t x458 = 0U;
	int16_t x459 = INT16_MIN;
	int64_t x460 = INT64_MAX;
	volatile int32_t t82 = -3;

	t82 = (x457==(x458/(x459%x460)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x465 = INT8_MIN;
	static uint32_t x466 = 223U;
	volatile int16_t x467 = INT16_MIN;
	uint32_t x468 = 2324472U;
	int32_t t83 = -175908;

	t83 = (x465==(x466/(x467%x468)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x469 = -1;
	static uint32_t x470 = UINT32_MAX;
	int8_t x471 = INT8_MIN;
	volatile int16_t x472 = 2008;
	static int32_t t84 = 40127632;

	t84 = (x469==(x470/(x471%x472)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x474 = 14U;
	uint32_t x476 = 205448U;
	volatile int32_t t85 = -26;

	t85 = (x473==(x474/(x475%x476)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x477 = -71;
	uint8_t x480 = UINT8_MAX;
	int32_t t86 = 811270;

	t86 = (x477==(x478/(x479%x480)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x481 = UINT8_MAX;
	int32_t x482 = INT32_MAX;
	static int8_t x483 = INT8_MIN;
	int64_t x484 = INT64_MIN;
	volatile int32_t t87 = -602;

	t87 = (x481==(x482/(x483%x484)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x485 = 0;
	int8_t x486 = -14;
	int64_t x487 = 45407154964520773LL;
	int16_t x488 = INT16_MIN;
	volatile int32_t t88 = -54426735;

	t88 = (x485==(x486/(x487%x488)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x489 = INT32_MAX;
	uint16_t x491 = 8U;
	volatile int16_t x492 = INT16_MIN;
	static volatile int32_t t89 = 25553;

	t89 = (x489==(x490/(x491%x492)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x498 = INT8_MAX;
	int32_t x500 = INT32_MIN;
	int32_t t90 = 10458;

	t90 = (x497==(x498/(x499%x500)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x501 = INT16_MIN;
	int32_t x502 = INT32_MIN;
	int32_t x504 = INT32_MAX;

	t91 = (x501==(x502/(x503%x504)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x505 = 1;
	volatile int32_t x506 = INT32_MIN;
	int8_t x507 = INT8_MIN;
	int32_t x508 = 35856792;

	t92 = (x505==(x506/(x507%x508)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x509 = INT64_MAX;
	uint8_t x512 = 25U;
	int32_t t93 = 2222305;

	t93 = (x509==(x510/(x511%x512)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x514 = INT16_MIN;
	volatile int32_t x516 = INT32_MAX;
	int32_t t94 = -92421;

	t94 = (x513==(x514/(x515%x516)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x517 = -80979174162756LL;
	uint16_t x519 = UINT16_MAX;
	static int16_t x520 = 442;

	t95 = (x517==(x518/(x519%x520)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x521 = UINT8_MAX;
	int16_t x522 = 7;
	uint8_t x523 = 6U;
	static int32_t x524 = INT32_MAX;
	static int32_t t96 = 18;

	t96 = (x521==(x522/(x523%x524)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x533 = 3U;
	uint8_t x534 = UINT8_MAX;
	int32_t t97 = 1;

	t97 = (x533==(x534/(x535%x536)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x537 = -1LL;
	static uint64_t x538 = 209LLU;
	uint64_t x539 = 12205484LLU;
	uint8_t x540 = UINT8_MAX;
	volatile int32_t t98 = -27447201;

	t98 = (x537==(x538/(x539%x540)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x541 = INT32_MAX;
	int16_t x543 = INT16_MAX;
	volatile int16_t x544 = 36;

	t99 = (x541==(x542/(x543%x544)));

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

