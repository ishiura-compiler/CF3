#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 121047130176966370LLU;
int8_t x2 = INT8_MIN;
uint32_t x3 = UINT32_MAX;
volatile uint8_t x15 = UINT8_MAX;
int32_t t1 = 231061;
static volatile int16_t x24 = INT16_MIN;
int8_t x47 = 0;
static volatile int32_t t5 = 592;
int16_t x58 = INT16_MIN;
volatile int32_t t7 = 5681;
volatile int16_t x68 = 20;
volatile int64_t t9 = 492927774LL;
int64_t x87 = -1LL;
static volatile uint8_t x88 = 0U;
static uint64_t t11 = 316LLU;
int8_t x97 = INT8_MAX;
uint32_t x98 = 123898U;
uint8_t x102 = 6U;
uint16_t x103 = 56U;
uint16_t x109 = UINT16_MAX;
int32_t x115 = INT32_MIN;
volatile int32_t x122 = INT32_MIN;
int64_t t16 = -1099953486751993161LL;
uint64_t x125 = UINT64_MAX;
volatile int8_t x126 = INT8_MAX;
int16_t x136 = 2;
uint64_t x145 = UINT64_MAX;
volatile uint64_t t20 = 4526997924835LLU;
uint64_t x152 = 1866760732LLU;
volatile int64_t x162 = INT64_MIN;
volatile int8_t x163 = -1;
int64_t x164 = -1LL;
int8_t x186 = INT8_MIN;
static int64_t x215 = -5394758945LL;
static int32_t x223 = -1574;
volatile uint32_t x224 = 22U;
static volatile int64_t t33 = 631295702129694427LL;
int8_t x244 = INT8_MIN;
uint16_t x249 = UINT16_MAX;
int32_t x250 = -1;
volatile int32_t t36 = -518351474;
uint32_t t37 = 2354352U;
uint32_t x277 = 43354U;
static int16_t x280 = INT16_MIN;
int32_t x305 = 1836998;
int32_t x311 = INT32_MIN;
int32_t x312 = 1416800;
static uint16_t x313 = 23U;
int32_t t45 = 48042;
static volatile uint64_t t46 = 9126147376LLU;
volatile int32_t t47 = 6;
volatile int32_t x328 = 260998423;
int16_t x331 = 0;
static volatile int32_t x335 = INT32_MIN;
static volatile int32_t t51 = -5;
int64_t t54 = 29400787252LL;
static volatile uint64_t t57 = 25854954827350053LLU;
uint64_t x389 = UINT64_MAX;
volatile uint64_t t58 = 101933488621040990LLU;
uint32_t x413 = 264U;
uint64_t x433 = 25646702206589LLU;
int32_t x450 = -3710;
uint16_t x452 = 31593U;
static uint32_t x455 = 0U;
uint32_t x461 = 857266U;
volatile int32_t x463 = INT32_MIN;
int64_t t68 = -22787325860328154LL;
int32_t x476 = 344866460;
int64_t t71 = -3699760LL;
uint64_t x506 = 43896696868027LLU;
uint16_t x508 = 8U;
static uint16_t x510 = UINT16_MAX;
volatile int32_t x517 = INT32_MAX;
volatile uint16_t x520 = 0U;
uint32_t x524 = UINT32_MAX;
static volatile uint32_t t76 = 1077236U;
volatile int8_t x528 = -3;
int8_t x562 = INT8_MIN;
int64_t x575 = INT64_MIN;
volatile int32_t t81 = -16218;
static uint64_t x611 = 7364055LLU;
volatile int32_t x640 = -1;
uint8_t x653 = 14U;
uint32_t x672 = 76620891U;
uint64_t x677 = UINT64_MAX;
int64_t x679 = INT64_MIN;
uint8_t x687 = 63U;
volatile int64_t t92 = -135083738535984039LL;
uint64_t x689 = 34351901237402LLU;
int32_t x692 = -1;
uint64_t t93 = 2LLU;
uint32_t x701 = UINT32_MAX;
uint8_t x705 = 9U;
volatile int64_t x717 = INT64_MAX;
static int32_t x721 = INT32_MAX;
uint64_t x729 = 66858155458114024LLU;
uint32_t x732 = 144133459U;
int64_t x736 = INT64_MAX;


void f0(void) {
	volatile int16_t x4 = INT16_MIN;
	volatile uint64_t t0 = 9016955654522300563LLU;

	t0 = ((x1<<(x2==x3))^x4);

	if (t0 != 18325696943532592866LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MAX;
	volatile int8_t x14 = -52;
	int8_t x16 = INT8_MIN;

	t1 = ((x13<<(x14==x15))^x16);

	if (t1 != -32641) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x17 = 49599826U;
	uint8_t x18 = UINT8_MAX;
	uint16_t x19 = 63U;
	uint64_t x20 = UINT64_MAX;
	static uint64_t t2 = 254923956962216827LLU;

	t2 = ((x17<<(x18==x19))^x20);

	if (t2 != 18446744073659951789LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = 2;
	uint32_t x22 = 3U;
	uint8_t x23 = 19U;
	static volatile int32_t t3 = 18350;

	t3 = ((x21<<(x22==x23))^x24);

	if (t3 != -32766) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x33 = 539548847030630561LLU;
	volatile int8_t x34 = 39;
	uint8_t x35 = 25U;
	uint8_t x36 = 7U;
	uint64_t t4 = 20652427LLU;

	t4 = ((x33<<(x34==x35))^x36);

	if (t4 != 539548847030630566LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x45 = 15U;
	static uint64_t x46 = 4459234477LLU;
	int32_t x48 = INT32_MAX;

	t5 = ((x45<<(x46==x47))^x48);

	if (t5 != 2147483632) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x57 = 9U;
	uint16_t x59 = UINT16_MAX;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t6 = 31916518429056260LLU;

	t6 = ((x57<<(x58==x59))^x60);

	if (t6 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x61 = 32U;
	volatile int32_t x62 = INT32_MIN;
	static uint32_t x63 = 198U;
	volatile uint8_t x64 = 0U;

	t7 = ((x61<<(x62==x63))^x64);

	if (t7 != 32) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x65 = 10153846538LLU;
	int64_t x66 = -31531LL;
	int16_t x67 = -553;
	volatile uint64_t t8 = 564998978862312LLU;

	t8 = ((x65<<(x66==x67))^x68);

	if (t8 != 10153846558LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x69 = 63LL;
	int8_t x70 = INT8_MAX;
	int64_t x71 = INT64_MAX;
	int8_t x72 = -1;

	t9 = ((x69<<(x70==x71))^x72);

	if (t9 != -64LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x77 = 3515012946272LL;
	uint8_t x78 = 25U;
	static int16_t x79 = INT16_MAX;
	int64_t x80 = INT64_MIN;
	volatile int64_t t10 = -25794845377LL;

	t10 = ((x77<<(x78==x79))^x80);

	if (t10 != -9223368521841829536LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x85 = 18891567LLU;
	uint32_t x86 = UINT32_MAX;

	t11 = ((x85<<(x86==x87))^x88);

	if (t11 != 18891567LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x99 = -1LL;
	int16_t x100 = INT16_MIN;
	volatile int32_t t12 = 3237203;

	t12 = ((x97<<(x98==x99))^x100);

	if (t12 != -32641) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x101 = 17;
	volatile uint32_t x104 = 11U;
	uint32_t t13 = 48711328U;

	t13 = ((x101<<(x102==x103))^x104);

	if (t13 != 26U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x110 = INT64_MAX;
	volatile int16_t x111 = -1;
	int32_t x112 = -25291785;
	volatile int32_t t14 = 2147322;

	t14 = ((x109<<(x110==x111))^x112);

	if (t14 != -25236472) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x113 = 550890LLU;
	uint8_t x114 = UINT8_MAX;
	volatile uint32_t x116 = UINT32_MAX;
	volatile uint64_t t15 = 4588LLU;

	t15 = ((x113<<(x114==x115))^x116);

	if (t15 != 4294416405LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x121 = 338LL;
	static int32_t x123 = -7;
	uint8_t x124 = 3U;

	t16 = ((x121<<(x122==x123))^x124);

	if (t16 != 337LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x127 = -1;
	volatile int32_t x128 = INT32_MIN;
	uint64_t t17 = 97135735412878249LLU;

	t17 = ((x125<<(x126==x127))^x128);

	if (t17 != 2147483647LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x133 = 4320885LLU;
	int64_t x134 = INT64_MIN;
	uint8_t x135 = UINT8_MAX;
	volatile uint64_t t18 = 131753034324982LLU;

	t18 = ((x133<<(x134==x135))^x136);

	if (t18 != 4320887LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x137 = 3LL;
	uint64_t x138 = 741465289722513186LLU;
	int8_t x139 = INT8_MIN;
	int32_t x140 = INT32_MAX;
	static int64_t t19 = 101383698695LL;

	t19 = ((x137<<(x138==x139))^x140);

	if (t19 != 2147483644LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x146 = 11;
	volatile int8_t x147 = 1;
	static int32_t x148 = -1;

	t20 = ((x145<<(x146==x147))^x148);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x149 = 3U;
	int64_t x150 = -1LL;
	static uint32_t x151 = 11749U;
	static uint64_t t21 = 1653107015659LLU;

	t21 = ((x149<<(x150==x151))^x152);

	if (t21 != 1866760735LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x157 = 2U;
	static uint8_t x158 = 21U;
	int16_t x159 = -1;
	int32_t x160 = INT32_MIN;
	int32_t t22 = -57015313;

	t22 = ((x157<<(x158==x159))^x160);

	if (t22 != -2147483646) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x161 = 51;
	volatile int64_t t23 = -130LL;

	t23 = ((x161<<(x162==x163))^x164);

	if (t23 != -52LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x165 = 109;
	uint64_t x166 = UINT64_MAX;
	static uint32_t x167 = 0U;
	int16_t x168 = -1;
	volatile int32_t t24 = -513764;

	t24 = ((x165<<(x166==x167))^x168);

	if (t24 != -110) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x173 = 0U;
	static volatile uint32_t x174 = 58407645U;
	int16_t x175 = INT16_MIN;
	int64_t x176 = INT64_MAX;
	volatile int64_t t25 = INT64_MAX;

	t25 = ((x173<<(x174==x175))^x176);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x177 = 13U;
	int16_t x178 = -2004;
	int16_t x179 = 123;
	int64_t x180 = -49568353077LL;
	int64_t t26 = -53822070LL;

	t26 = ((x177<<(x178==x179))^x180);

	if (t26 != -49568353082LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x181 = 84LL;
	static int8_t x182 = 0;
	int32_t x183 = -204637490;
	uint64_t x184 = 172LLU;
	static volatile uint64_t t27 = 518705LLU;

	t27 = ((x181<<(x182==x183))^x184);

	if (t27 != 248LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x185 = 222438124U;
	int64_t x187 = 4118967514LL;
	uint16_t x188 = UINT16_MAX;
	volatile uint32_t t28 = 26518U;

	t28 = ((x185<<(x186==x187))^x188);

	if (t28 != 222485779U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x193 = 3883744629LLU;
	int8_t x194 = -1;
	uint64_t x195 = 22087598013260LLU;
	static int64_t x196 = -47273440324LL;
	volatile uint64_t t29 = 181LLU;

	t29 = ((x193<<(x194==x195))^x196);

	if (t29 != 18446744022592894665LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x197 = 35780U;
	int64_t x198 = -272594060559LL;
	int64_t x199 = 3001019878967402247LL;
	int16_t x200 = INT16_MIN;
	uint32_t t30 = 19042U;

	t30 = ((x197<<(x198==x199))^x200);

	if (t30 != 4294904772U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x213 = 7951962538LLU;
	volatile int16_t x214 = INT16_MIN;
	volatile uint32_t x216 = UINT32_MAX;
	volatile uint64_t t31 = 448LLU;

	t31 = ((x213<<(x214==x215))^x216);

	if (t31 != 4932939349LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x221 = INT16_MAX;
	static uint8_t x222 = 12U;
	volatile uint32_t t32 = 802U;

	t32 = ((x221<<(x222==x223))^x224);

	if (t32 != 32745U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x225 = INT16_MAX;
	uint8_t x226 = 3U;
	volatile uint8_t x227 = 62U;
	int64_t x228 = -1LL;

	t33 = ((x225<<(x226==x227))^x228);

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x229 = 1U;
	volatile uint8_t x230 = 107U;
	volatile int8_t x231 = -1;
	uint64_t x232 = 2292LLU;
	volatile uint64_t t34 = 41690LLU;

	t34 = ((x229<<(x230==x231))^x232);

	if (t34 != 2293LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x241 = 115LLU;
	static int16_t x242 = INT16_MAX;
	int8_t x243 = INT8_MAX;
	volatile uint64_t t35 = 304LLU;

	t35 = ((x241<<(x242==x243))^x244);

	if (t35 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x251 = 6434U;
	static volatile int8_t x252 = INT8_MAX;

	t36 = ((x249<<(x250==x251))^x252);

	if (t36 != 65408) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x257 = 14U;
	int64_t x258 = 307391547851LL;
	int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MIN;

	t37 = ((x257<<(x258==x259))^x260);

	if (t37 != 2147483662U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x269 = UINT16_MAX;
	int32_t x270 = -23618;
	uint8_t x271 = 1U;
	uint32_t x272 = UINT32_MAX;
	volatile uint32_t t38 = 9277195U;

	t38 = ((x269<<(x270==x271))^x272);

	if (t38 != 4294901760U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x273 = 11U;
	int16_t x274 = -1;
	int32_t x275 = INT32_MIN;
	uint16_t x276 = 0U;
	static uint32_t t39 = 212407914U;

	t39 = ((x273<<(x274==x275))^x276);

	if (t39 != 11U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x278 = -1LL;
	int8_t x279 = 21;
	uint32_t t40 = 18331U;

	t40 = ((x277<<(x278==x279))^x280);

	if (t40 != 4294912346U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x281 = 1;
	int8_t x282 = INT8_MIN;
	static volatile int8_t x283 = 3;
	volatile uint8_t x284 = 5U;
	volatile int32_t t41 = 5;

	t41 = ((x281<<(x282==x283))^x284);

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x289 = 8539077LLU;
	int32_t x290 = 0;
	static int64_t x291 = -3086774664750284816LL;
	int8_t x292 = 27;
	uint64_t t42 = 4545824962604989105LLU;

	t42 = ((x289<<(x290==x291))^x292);

	if (t42 != 8539102LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x306 = INT8_MAX;
	static int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MIN;
	volatile int32_t t43 = -5;

	t43 = ((x305<<(x306==x307))^x308);

	if (t43 != -1865786) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x309 = 1U;
	static int16_t x310 = 20;
	volatile int32_t t44 = -3406156;

	t44 = ((x309<<(x310==x311))^x312);

	if (t44 != 1416801) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x314 = 4U;
	int16_t x315 = -1;
	int32_t x316 = 280684;

	t45 = ((x313<<(x314==x315))^x316);

	if (t45 != 280699) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x317 = INT8_MAX;
	uint32_t x318 = 124U;
	volatile int64_t x319 = INT64_MIN;
	uint64_t x320 = 2274620087130128580LLU;

	t46 = ((x317<<(x318==x319))^x320);

	if (t46 != 2274620087130128571LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x321 = 182U;
	static uint32_t x322 = 1U;
	uint8_t x323 = 115U;
	int16_t x324 = INT16_MIN;

	t47 = ((x321<<(x322==x323))^x324);

	if (t47 != -32586) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x325 = 1986U;
	volatile uint64_t x326 = 285611427188089LLU;
	int16_t x327 = INT16_MAX;
	int32_t t48 = 19697;

	t48 = ((x325<<(x326==x327))^x328);

	if (t48 != 260997845) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x329 = 35055505972385225LLU;
	int64_t x330 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	uint64_t t49 = 7LLU;

	t49 = ((x329<<(x330==x331))^x332);

	if (t49 != 18411688567737166409LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x333 = 13U;
	int64_t x334 = INT64_MIN;
	int16_t x336 = -6757;
	volatile int32_t t50 = 45;

	t50 = ((x333<<(x334==x335))^x336);

	if (t50 != -6762) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x337 = INT32_MAX;
	uint32_t x338 = 17U;
	int16_t x339 = -1;
	int8_t x340 = 1;

	t51 = ((x337<<(x338==x339))^x340);

	if (t51 != 2147483646) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x341 = INT64_MAX;
	static int8_t x342 = 60;
	uint16_t x343 = 14343U;
	volatile int32_t x344 = 479;
	static int64_t t52 = 3LL;

	t52 = ((x341<<(x342==x343))^x344);

	if (t52 != 9223372036854775328LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x353 = 5U;
	int16_t x354 = INT16_MIN;
	uint64_t x355 = UINT64_MAX;
	uint8_t x356 = 28U;
	volatile uint32_t t53 = 4887U;

	t53 = ((x353<<(x354==x355))^x356);

	if (t53 != 25U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x357 = 1336746637883328LL;
	volatile int64_t x358 = INT64_MAX;
	int8_t x359 = -1;
	volatile int16_t x360 = 22;

	t54 = ((x357<<(x358==x359))^x360);

	if (t54 != 1336746637883350LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x361 = 0;
	static int32_t x362 = INT32_MIN;
	volatile int8_t x363 = INT8_MIN;
	volatile int64_t x364 = 0LL;
	volatile int64_t t55 = -10946236611640LL;

	t55 = ((x361<<(x362==x363))^x364);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x365 = UINT8_MAX;
	uint16_t x366 = UINT16_MAX;
	static int64_t x367 = 1721010993367245LL;
	int32_t x368 = INT32_MIN;
	static int32_t t56 = -6899;

	t56 = ((x365<<(x366==x367))^x368);

	if (t56 != -2147483393) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x377 = INT8_MAX;
	uint16_t x378 = 3U;
	static volatile int64_t x379 = INT64_MIN;
	uint64_t x380 = 27653481LLU;

	t57 = ((x377<<(x378==x379))^x380);

	if (t57 != 27653398LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x390 = 939073807748013LL;
	int64_t x391 = -1LL;
	int64_t x392 = INT64_MIN;

	t58 = ((x389<<(x390==x391))^x392);

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x397 = 3U;
	static int64_t x398 = INT64_MIN;
	int32_t x399 = -8014826;
	int64_t x400 = INT64_MAX;
	int64_t t59 = -1907174430518692LL;

	t59 = ((x397<<(x398==x399))^x400);

	if (t59 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x414 = 5;
	int32_t x415 = -1;
	static uint16_t x416 = 938U;
	volatile uint32_t t60 = 362428U;

	t60 = ((x413<<(x414==x415))^x416);

	if (t60 != 674U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x417 = 511U;
	int64_t x418 = INT64_MAX;
	uint8_t x419 = 65U;
	int64_t x420 = INT64_MIN;
	int64_t t61 = 117LL;

	t61 = ((x417<<(x418==x419))^x420);

	if (t61 != -9223372036854775297LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x421 = UINT16_MAX;
	static int8_t x422 = INT8_MIN;
	volatile int64_t x423 = INT64_MAX;
	int16_t x424 = -1;
	int32_t t62 = 31;

	t62 = ((x421<<(x422==x423))^x424);

	if (t62 != -65536) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x425 = 486811050LL;
	volatile uint32_t x426 = UINT32_MAX;
	uint16_t x427 = 3135U;
	volatile int32_t x428 = -1696199;
	int64_t t63 = -39933084410LL;

	t63 = ((x425<<(x426==x427))^x428);

	if (t63 != -488490093LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x434 = INT64_MAX;
	volatile int16_t x435 = -28;
	int8_t x436 = -1;
	volatile uint64_t t64 = 35575212737166LLU;

	t64 = ((x433<<(x434==x435))^x436);

	if (t64 != 18446718427007345026LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x441 = 104U;
	uint64_t x442 = 2750625134848LLU;
	uint64_t x443 = UINT64_MAX;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t65 = -21856685;

	t65 = ((x441<<(x442==x443))^x444);

	if (t65 != 65431) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x449 = UINT16_MAX;
	volatile int64_t x451 = INT64_MIN;
	int32_t t66 = 1062802;

	t66 = ((x449<<(x450==x451))^x452);

	if (t66 != 33942) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x453 = 62U;
	int64_t x454 = -1LL;
	volatile int16_t x456 = INT16_MAX;
	volatile int32_t t67 = -1;

	t67 = ((x453<<(x454==x455))^x456);

	if (t67 != 32705) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x462 = -1;
	volatile int64_t x464 = INT64_MAX;

	t68 = ((x461<<(x462==x463))^x464);

	if (t68 != 9223372036853918541LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x473 = 67751522745590723LLU;
	int16_t x474 = -1;
	static uint16_t x475 = UINT16_MAX;
	volatile uint64_t t69 = 2413455146911872LLU;

	t69 = ((x473<<(x474==x475))^x476);

	if (t69 != 67751522954386783LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x489 = 165980106616790LLU;
	uint16_t x490 = 13231U;
	int8_t x491 = -7;
	int16_t x492 = -431;
	static uint64_t t70 = 61LLU;

	t70 = ((x489<<(x490==x491))^x492);

	if (t70 != 18446578093602935175LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x493 = INT64_MAX;
	int32_t x494 = INT32_MAX;
	static int8_t x495 = -1;
	uint16_t x496 = UINT16_MAX;

	t71 = ((x493<<(x494==x495))^x496);

	if (t71 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x501 = UINT64_MAX;
	int16_t x502 = 655;
	volatile int32_t x503 = -1;
	int64_t x504 = -1LL;
	volatile uint64_t t72 = 751678LLU;

	t72 = ((x501<<(x502==x503))^x504);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x505 = 1U;
	volatile uint16_t x507 = 2U;
	volatile int32_t t73 = -1;

	t73 = ((x505<<(x506==x507))^x508);

	if (t73 != 9) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x509 = UINT8_MAX;
	volatile int8_t x511 = INT8_MIN;
	volatile int8_t x512 = 4;
	int32_t t74 = 3854;

	t74 = ((x509<<(x510==x511))^x512);

	if (t74 != 251) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x518 = -1;
	static uint64_t x519 = 5151307748LLU;
	volatile int32_t t75 = INT32_MAX;

	t75 = ((x517<<(x518==x519))^x520);

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x521 = INT32_MAX;
	int8_t x522 = INT8_MIN;
	int64_t x523 = INT64_MIN;

	t76 = ((x521<<(x522==x523))^x524);

	if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x525 = UINT32_MAX;
	int8_t x526 = -35;
	uint16_t x527 = 3965U;
	volatile uint32_t t77 = 41U;

	t77 = ((x525<<(x526==x527))^x528);

	if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x537 = 37U;
	uint64_t x538 = 426LLU;
	uint64_t x539 = UINT64_MAX;
	int64_t x540 = -292660779712018LL;
	volatile int64_t t78 = 17255713252749379LL;

	t78 = ((x537<<(x538==x539))^x540);

	if (t78 != -292660779712053LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x557 = 2U;
	static int8_t x558 = 1;
	int64_t x559 = -1LL;
	int32_t x560 = -8;
	int32_t t79 = 6;

	t79 = ((x557<<(x558==x559))^x560);

	if (t79 != -6) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x561 = INT64_MAX;
	static volatile uint16_t x563 = 948U;
	int8_t x564 = INT8_MIN;
	volatile int64_t t80 = 117623294LL;

	t80 = ((x561<<(x562==x563))^x564);

	if (t80 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x573 = UINT16_MAX;
	int32_t x574 = -1;
	volatile int32_t x576 = -78;

	t81 = ((x573<<(x574==x575))^x576);

	if (t81 != -65459) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x609 = UINT16_MAX;
	int32_t x610 = INT32_MIN;
	int64_t x612 = INT64_MIN;
	volatile int64_t t82 = -3LL;

	t82 = ((x609<<(x610==x611))^x612);

	if (t82 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x617 = UINT32_MAX;
	uint32_t x618 = 22585U;
	int64_t x619 = INT64_MAX;
	static int64_t x620 = INT64_MAX;
	static int64_t t83 = -395LL;

	t83 = ((x617<<(x618==x619))^x620);

	if (t83 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x621 = 2177U;
	static int16_t x622 = -4689;
	int16_t x623 = INT16_MAX;
	uint16_t x624 = 4U;
	volatile int32_t t84 = -34;

	t84 = ((x621<<(x622==x623))^x624);

	if (t84 != 2181) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x637 = INT16_MAX;
	static int8_t x638 = INT8_MIN;
	volatile uint8_t x639 = UINT8_MAX;
	static volatile int32_t t85 = 1022;

	t85 = ((x637<<(x638==x639))^x640);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x641 = 66LLU;
	uint8_t x642 = 69U;
	int32_t x643 = 781491843;
	int32_t x644 = INT32_MAX;
	uint64_t t86 = 1974600802LLU;

	t86 = ((x641<<(x642==x643))^x644);

	if (t86 != 2147483581LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x654 = -2;
	uint32_t x655 = UINT32_MAX;
	uint64_t x656 = UINT64_MAX;
	uint64_t t87 = 30LLU;

	t87 = ((x653<<(x654==x655))^x656);

	if (t87 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x665 = 17U;
	int16_t x666 = -1;
	static uint64_t x667 = 985LLU;
	uint32_t x668 = UINT32_MAX;
	volatile uint32_t t88 = 37995015U;

	t88 = ((x665<<(x666==x667))^x668);

	if (t88 != 4294967278U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x669 = 657LLU;
	int8_t x670 = INT8_MIN;
	uint8_t x671 = 67U;
	uint64_t t89 = 212384449825269LLU;

	t89 = ((x669<<(x670==x671))^x672);

	if (t89 != 76621514LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x673 = INT16_MAX;
	int16_t x674 = INT16_MIN;
	int64_t x675 = -8495449087LL;
	int64_t x676 = INT64_MAX;
	volatile int64_t t90 = 121429734137LL;

	t90 = ((x673<<(x674==x675))^x676);

	if (t90 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x678 = 12388527124209LLU;
	static int16_t x680 = INT16_MIN;
	static uint64_t t91 = 39863LLU;

	t91 = ((x677<<(x678==x679))^x680);

	if (t91 != 32767LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x685 = 24U;
	int64_t x686 = -225434869819LL;
	int64_t x688 = -187LL;

	t92 = ((x685<<(x686==x687))^x688);

	if (t92 != -163LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x690 = 60LLU;
	uint32_t x691 = UINT32_MAX;

	t93 = ((x689<<(x690==x691))^x692);

	if (t93 != 18446709721808314213LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x702 = 2;
	int32_t x703 = INT32_MAX;
	int16_t x704 = 14;
	uint32_t t94 = 97688U;

	t94 = ((x701<<(x702==x703))^x704);

	if (t94 != 4294967281U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x706 = INT32_MAX;
	int32_t x707 = -451323072;
	int64_t x708 = INT64_MAX;
	static int64_t t95 = 7LL;

	t95 = ((x705<<(x706==x707))^x708);

	if (t95 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x718 = INT16_MIN;
	volatile int8_t x719 = -1;
	static volatile uint16_t x720 = 946U;
	int64_t t96 = -421294539474LL;

	t96 = ((x717<<(x718==x719))^x720);

	if (t96 != 9223372036854774861LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x722 = INT32_MAX;
	int32_t x723 = INT32_MIN;
	int64_t x724 = INT64_MAX;
	static volatile int64_t t97 = 537LL;

	t97 = ((x721<<(x722==x723))^x724);

	if (t97 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x730 = 17036U;
	uint8_t x731 = UINT8_MAX;
	uint64_t t98 = 347409093245803LLU;

	t98 = ((x729<<(x730==x731))^x732);

	if (t98 != 66858155333418171LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x733 = 1U;
	uint64_t x734 = UINT64_MAX;
	uint64_t x735 = UINT64_MAX;
	static int64_t t99 = 419971662LL;

	t99 = ((x733<<(x734==x735))^x736);

	if (t99 != 9223372036854775805LL) { NG(); } else { ; }
	
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

