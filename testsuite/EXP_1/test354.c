#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = -1;
int16_t x10 = -1;
static uint32_t x21 = 788789972U;
uint64_t x24 = UINT64_MAX;
uint64_t t2 = 52529716379954412LLU;
uint8_t x26 = UINT8_MAX;
static int64_t x27 = -1LL;
int64_t x29 = INT64_MIN;
volatile uint64_t t7 = 23559178549195710LLU;
static volatile uint32_t t8 = 1330U;
volatile int16_t x74 = INT16_MAX;
int32_t x75 = -1;
int8_t x81 = 55;
int64_t x103 = -1LL;
static volatile uint8_t x105 = 42U;
volatile uint64_t t14 = 2123421889LLU;
int64_t x121 = 14719043473LL;
int32_t x146 = INT32_MAX;
int32_t x156 = INT32_MIN;
uint16_t x157 = 13525U;
static volatile int32_t t22 = -15;
static int16_t x195 = INT16_MIN;
uint16_t x209 = 32U;
volatile uint64_t t30 = 1LLU;
int8_t x233 = -1;
volatile int64_t x259 = INT64_MIN;
int8_t x287 = INT8_MIN;
uint16_t x298 = 41U;
int16_t x300 = 116;
static int8_t x301 = INT8_MAX;
int64_t x303 = -1LL;
int32_t x304 = -1;
volatile int64_t t39 = 158977893799723401LL;
int16_t x305 = INT16_MIN;
volatile int8_t x318 = INT8_MIN;
int16_t x320 = INT16_MIN;
static uint8_t x323 = UINT8_MAX;
volatile uint64_t t46 = 62578824267LLU;
uint8_t x369 = 0U;
static volatile uint64_t t47 = 4045LLU;
uint64_t x382 = 6834LLU;
int32_t x387 = INT32_MIN;
int8_t x395 = -58;
int64_t t51 = 55561489292956LL;
int16_t x405 = -1;
uint8_t x408 = 0U;
int64_t x409 = 8071887011LL;
volatile int64_t t53 = -1128302758520633LL;
int16_t x414 = INT16_MAX;
int16_t x417 = INT16_MAX;
uint64_t x419 = 30291570149LLU;
int32_t x431 = -90;
int16_t x439 = -15784;
volatile int32_t t58 = -83;
uint16_t x447 = 30U;
uint16_t x448 = 2705U;
int32_t x450 = 4;
int16_t x451 = INT16_MIN;
volatile uint8_t x452 = 18U;
uint64_t x463 = 194972069680020LLU;
int16_t x464 = -42;
static volatile int8_t x477 = 0;
static int32_t x478 = -1766436;
uint16_t x490 = 29U;
int16_t x496 = INT16_MIN;
volatile uint64_t t67 = 422910845902LLU;
int8_t x506 = -1;
uint8_t x508 = UINT8_MAX;
volatile int32_t t70 = 777;
volatile uint32_t x516 = UINT32_MAX;
int64_t x537 = -2LL;
int8_t x547 = -1;
uint64_t x552 = 3389LLU;
static int16_t x553 = -2015;
uint8_t x554 = UINT8_MAX;
uint64_t x556 = 58272613876209LLU;
uint64_t x574 = UINT64_MAX;
int64_t x576 = INT64_MIN;
int8_t x582 = 3;
static int8_t x585 = 1;
uint16_t x588 = UINT16_MAX;
volatile int32_t t83 = 1;
uint32_t x591 = UINT32_MAX;
uint64_t x606 = UINT64_MAX;
uint8_t x615 = 32U;
volatile int32_t t87 = 127854227;
int16_t x619 = INT16_MIN;
int32_t t88 = -11728;
static uint8_t x624 = UINT8_MAX;
volatile uint8_t x630 = UINT8_MAX;
uint8_t x632 = UINT8_MAX;
int32_t t90 = 52177663;
int32_t x645 = INT32_MAX;
static volatile int64_t t93 = 2670915656503939204LL;
int8_t x649 = INT8_MAX;
uint8_t x652 = UINT8_MAX;
uint64_t x664 = 15631603323047068LLU;
volatile uint64_t t95 = 348LLU;
uint64_t t96 = 191943LLU;
int8_t x669 = INT8_MAX;
uint64_t x678 = 31077LLU;
uint64_t x683 = 231187695160598897LLU;
static uint64_t x684 = 531672940LLU;


void f0(void) {
	volatile int16_t x5 = INT16_MIN;
	static uint16_t x6 = 16524U;
	int8_t x7 = INT8_MAX;
	static volatile uint32_t x8 = 431986U;
	volatile uint32_t t0 = 137U;

	t0 = (((x5*x6)-x7)*x8);

	if (t0 != 1401871986U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x11 = -5724;
	uint8_t x12 = 0U;
	int32_t t1 = 48;

	t1 = (((x9*x10)-x11)*x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x22 = INT32_MAX;
	volatile uint64_t x23 = UINT64_MAX;

	t2 = (((x21*x22)-x23)*x24);

	if (t2 != 18446744070203374291LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x25 = UINT8_MAX;
	static volatile uint8_t x28 = 0U;
	int64_t t3 = 2505455238LL;

	t3 = (((x25*x26)-x27)*x28);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x30 = 262245157LLU;
	volatile int64_t x31 = -1LL;
	static uint64_t x32 = UINT64_MAX;
	volatile uint64_t t4 = 3961373LLU;

	t4 = (((x29*x30)-x31)*x32);

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x37 = -1LL;
	int32_t x38 = INT32_MIN;
	static int8_t x39 = 1;
	uint8_t x40 = 26U;
	int64_t t5 = -381112LL;

	t5 = (((x37*x38)-x39)*x40);

	if (t5 != 55834574822LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = INT64_MIN;
	uint64_t x42 = UINT64_MAX;
	volatile int64_t x43 = -1LL;
	int16_t x44 = INT16_MAX;
	volatile uint64_t t6 = 40LLU;

	t6 = (((x41*x42)-x43)*x44);

	if (t6 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = INT32_MIN;
	uint64_t x46 = 116470722LLU;
	int64_t x47 = INT64_MIN;
	static volatile uint32_t x48 = 79U;

	t7 = (((x45*x46)-x47)*x48);

	if (t7 != 7910717404269772800LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x49 = 137722479U;
	volatile int8_t x50 = INT8_MIN;
	static int8_t x51 = -1;
	int16_t x52 = INT16_MIN;

	t8 = (((x49*x50)-x51)*x52);

	if (t8 != 2613018624U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = UINT32_MAX;
	volatile uint32_t x54 = 58577748U;
	uint8_t x55 = UINT8_MAX;
	static volatile int16_t x56 = -1;
	static uint32_t t9 = 5223942U;

	t9 = (((x53*x54)-x55)*x56);

	if (t9 != 58578003U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x73 = 121U;
	uint8_t x76 = 7U;
	static volatile int32_t t10 = -74;

	t10 = (((x73*x74)-x75)*x76);

	if (t10 != 27753656) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x82 = 192043LLU;
	static volatile int32_t x83 = -1;
	uint8_t x84 = UINT8_MAX;
	uint64_t t11 = 114LLU;

	t11 = (((x81*x82)-x83)*x84);

	if (t11 != 2693403330LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x101 = 2U;
	static int16_t x102 = INT16_MIN;
	static uint8_t x104 = UINT8_MAX;
	int64_t t12 = 221197286561981677LL;

	t12 = (((x101*x102)-x103)*x104);

	if (t12 != -16711425LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x106 = UINT8_MAX;
	uint64_t x107 = 2972811309508867421LLU;
	static volatile uint16_t x108 = UINT16_MAX;
	volatile uint64_t t13 = 832LLU;

	t13 = (((x105*x106)-x107)*x108);

	if (t13 != 11321737857359612807LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x109 = 98403684652LLU;
	int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MAX;
	int32_t x112 = INT32_MAX;

	t14 = (((x109*x110)-x111)*x112);

	if (t14 != 8406048515716841471LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x113 = 0;
	uint64_t x114 = 86243LLU;
	volatile int64_t x115 = -1LL;
	static int64_t x116 = INT64_MAX;
	volatile uint64_t t15 = 1397932421870068650LLU;

	t15 = (((x113*x114)-x115)*x116);

	if (t15 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x122 = 27;
	static int8_t x123 = -1;
	static uint64_t x124 = 1985820319759313151LLU;
	uint64_t t16 = 8332179LLU;

	t16 = (((x121*x122)-x123)*x124);

	if (t16 != 12243964960009297844LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x125 = UINT64_MAX;
	static int64_t x126 = -15232371820092922LL;
	int64_t x127 = INT64_MIN;
	static uint32_t x128 = 110774U;
	uint64_t t17 = 475844701932122374LLU;

	t17 = (((x125*x126)-x127)*x128);

	if (t17 != 8697045291404144572LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x129 = INT64_MIN;
	uint32_t x130 = 0U;
	int32_t x131 = INT32_MIN;
	static int16_t x132 = -1;
	int64_t t18 = -490428522529200LL;

	t18 = (((x129*x130)-x131)*x132);

	if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x133 = UINT64_MAX;
	uint16_t x134 = 626U;
	volatile int16_t x135 = -12;
	uint64_t x136 = 40233615949LLU;
	volatile uint64_t t19 = 3776958244673971LLU;

	t19 = (((x133*x134)-x135)*x136);

	if (t19 != 18446719370269358930LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x145 = -1;
	int32_t x147 = -21062;
	int32_t x148 = -1;
	static volatile int32_t t20 = 15;

	t20 = (((x145*x146)-x147)*x148);

	if (t20 != 2147462585) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x153 = 230U;
	volatile int16_t x154 = INT16_MIN;
	uint64_t x155 = 1630311LLU;
	uint64_t t21 = 100LLU;

	t21 = (((x153*x154)-x155)*x156);

	if (t21 != 19685877374517248LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x158 = 0;
	volatile uint16_t x159 = 10U;
	int32_t x160 = 2251426;

	t22 = (((x157*x158)-x159)*x160);

	if (t22 != -22514260) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x161 = 6U;
	uint64_t x162 = 3219326898LLU;
	int64_t x163 = INT64_MIN;
	int32_t x164 = 23026472;
	volatile uint64_t t23 = 1LLU;

	t23 = (((x161*x162)-x163)*x164);

	if (t23 != 444778444053863136LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x181 = 26047U;
	int16_t x182 = INT16_MIN;
	int64_t x183 = 2722957341LL;
	uint16_t x184 = 11985U;
	volatile int64_t t24 = 1LL;

	t24 = (((x181*x182)-x183)*x184);

	if (t24 != -42863938262445LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x193 = 2U;
	int16_t x194 = INT16_MIN;
	int32_t x196 = -1;
	int32_t t25 = -236816201;

	t25 = (((x193*x194)-x195)*x196);

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x197 = -49;
	uint64_t x198 = UINT64_MAX;
	volatile uint32_t x199 = 24847U;
	uint32_t x200 = 4197U;
	volatile uint64_t t26 = 13799506LLU;

	t26 = (((x197*x198)-x199)*x200);

	if (t26 != 18446744073605474410LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x201 = 1U;
	uint64_t x202 = UINT64_MAX;
	static int64_t x203 = INT64_MIN;
	static uint32_t x204 = UINT32_MAX;
	uint64_t t27 = 54105630LLU;

	t27 = (((x201*x202)-x203)*x204);

	if (t27 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x205 = 6U;
	uint64_t x206 = 1LLU;
	uint8_t x207 = 4U;
	volatile uint16_t x208 = 4130U;
	uint64_t t28 = 62846688146958LLU;

	t28 = (((x205*x206)-x207)*x208);

	if (t28 != 8260LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x210 = INT8_MIN;
	uint32_t x211 = 9U;
	volatile int8_t x212 = -1;
	uint32_t t29 = 927210103U;

	t29 = (((x209*x210)-x211)*x212);

	if (t29 != 4105U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x229 = 15;
	volatile uint64_t x230 = UINT64_MAX;
	volatile uint64_t x231 = 300LLU;
	int64_t x232 = INT64_MIN;

	t30 = (((x229*x230)-x231)*x232);

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x234 = 2251U;
	int64_t x235 = 1847871909344066LL;
	uint32_t x236 = 1392U;
	volatile int64_t t31 = -1355582LL;

	t31 = (((x233*x234)-x235)*x236);

	if (t31 != -2572237697810073264LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x241 = -1LL;
	int64_t x242 = -1LL;
	static volatile int32_t x243 = -1;
	uint32_t x244 = 158U;
	volatile int64_t t32 = 479LL;

	t32 = (((x241*x242)-x243)*x244);

	if (t32 != 316LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x257 = 6LLU;
	int8_t x258 = 1;
	uint64_t x260 = 152962427LLU;
	volatile uint64_t t33 = 4LLU;

	t33 = (((x257*x258)-x259)*x260);

	if (t33 != 9223372037772550370LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x269 = -16905884735308788LL;
	int16_t x270 = -15;
	int16_t x271 = -1915;
	int8_t x272 = -1;
	static int64_t t34 = 1970775LL;

	t34 = (((x269*x270)-x271)*x272);

	if (t34 != -253588271029633735LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	uint32_t x288 = 2612201U;
	uint32_t t35 = 1732066908U;

	t35 = (((x285*x286)-x287)*x288);

	if (t35 != 861661440U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x289 = 1;
	uint8_t x290 = UINT8_MAX;
	uint32_t x291 = 7U;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t36 = 1U;

	t36 = (((x289*x290)-x291)*x292);

	if (t36 != 4294967048U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x293 = UINT32_MAX;
	int8_t x294 = -1;
	int16_t x295 = -7;
	int32_t x296 = INT32_MAX;
	uint32_t t37 = 467653323U;

	t37 = (((x293*x294)-x295)*x296);

	if (t37 != 4294967288U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x297 = -24;
	uint16_t x299 = UINT16_MAX;
	static volatile int32_t t38 = 106656;

	t38 = (((x297*x298)-x299)*x300);

	if (t38 != -7716204) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x302 = -1LL;

	t39 = (((x301*x302)-x303)*x304);

	if (t39 != 126LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x306 = UINT8_MAX;
	int16_t x307 = INT16_MAX;
	int64_t x308 = 181LL;
	volatile int64_t t40 = -151LL;

	t40 = (((x305*x306)-x307)*x308);

	if (t40 != -1518337867LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x317 = -1;
	uint8_t x319 = 8U;
	int32_t t41 = 35740903;

	t41 = (((x317*x318)-x319)*x320);

	if (t41 != -3932160) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x321 = UINT64_MAX;
	static int16_t x322 = -1;
	static int8_t x324 = INT8_MAX;
	volatile uint64_t t42 = 693419007515034082LLU;

	t42 = (((x321*x322)-x323)*x324);

	if (t42 != 18446744073709519358LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x329 = UINT64_MAX;
	volatile int8_t x330 = INT8_MIN;
	volatile int64_t x331 = 4LL;
	volatile uint16_t x332 = 156U;
	uint64_t t43 = 11LLU;

	t43 = (((x329*x330)-x331)*x332);

	if (t43 != 19344LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x341 = UINT64_MAX;
	int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MAX;
	static int64_t x344 = 1293114LL;
	volatile uint64_t t44 = 2416660138559LLU;

	t44 = (((x341*x342)-x343)*x344);

	if (t44 != 18446744031338085178LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x345 = UINT64_MAX;
	int64_t x346 = INT64_MIN;
	static int16_t x347 = INT16_MIN;
	int32_t x348 = -69;
	uint64_t t45 = 454209274459584LLU;

	t45 = (((x345*x346)-x347)*x348);

	if (t45 != 9223372036852514816LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MIN;
	volatile uint16_t x355 = UINT16_MAX;
	uint64_t x356 = 1639463279LLU;

	t46 = (((x353*x354)-x355)*x356);

	if (t46 != 6768965162973551LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x370 = 22303LLU;
	volatile int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MIN;

	t47 = (((x369*x370)-x371)*x372);

	if (t47 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x377 = -1;
	static volatile int8_t x378 = INT8_MIN;
	uint64_t x379 = UINT64_MAX;
	volatile int8_t x380 = INT8_MIN;
	uint64_t t48 = 184LLU;

	t48 = (((x377*x378)-x379)*x380);

	if (t48 != 18446744073709535104LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x381 = -1LL;
	int32_t x383 = -14769;
	volatile uint16_t x384 = UINT16_MAX;
	uint64_t t49 = 9286575694326LLU;

	t49 = (((x381*x382)-x383)*x384);

	if (t49 != 520020225LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x385 = 3209649U;
	volatile int16_t x386 = -426;
	int64_t x388 = -1LL;
	int64_t t50 = 1864801958148958LL;

	t50 = (((x385*x386)-x387)*x388);

	if (t50 != -780173174LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x393 = 45889LL;
	uint32_t x394 = 0U;
	int32_t x396 = 21828;

	t51 = (((x393*x394)-x395)*x396);

	if (t51 != 1266024LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x406 = 504242643001864046LL;
	static uint32_t x407 = UINT32_MAX;
	int64_t t52 = 12635836506LL;

	t52 = (((x405*x406)-x407)*x408);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x410 = 14;
	int32_t x411 = -1;
	static int32_t x412 = -1;

	t53 = (((x409*x410)-x411)*x412);

	if (t53 != -113006418155LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x413 = INT8_MAX;
	static uint32_t x415 = 39551U;
	uint64_t x416 = 421LLU;
	static volatile uint64_t t54 = 89810642239444194LLU;

	t54 = (((x413*x414)-x415)*x416);

	if (t54 != 1735302218LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x418 = 893172776LLU;
	int16_t x420 = -15;
	volatile uint64_t t55 = 5857948211LLU;

	t55 = (((x417*x418)-x419)*x420);

	if (t55 != 18446305529197835971LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x421 = UINT64_MAX;
	int64_t x422 = INT64_MIN;
	int16_t x423 = INT16_MAX;
	int64_t x424 = 0LL;
	volatile uint64_t t56 = 6LLU;

	t56 = (((x421*x422)-x423)*x424);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x429 = -1;
	int8_t x430 = 11;
	volatile int16_t x432 = -26;
	volatile int32_t t57 = 344;

	t57 = (((x429*x430)-x431)*x432);

	if (t57 != -2054) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x437 = -1;
	uint8_t x438 = 3U;
	static int16_t x440 = 11418;

	t58 = (((x437*x438)-x439)*x440);

	if (t58 != 180187458) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x445 = -1;
	static int16_t x446 = INT16_MAX;
	volatile int32_t t59 = 1;

	t59 = (((x445*x446)-x447)*x448);

	if (t59 != -88715885) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x449 = -10019;
	volatile int32_t t60 = -305379;

	t60 = (((x449*x450)-x451)*x452);

	if (t60 != -131544) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x461 = 1;
	int32_t x462 = -76594919;
	uint64_t t61 = 19879LLU;

	t61 = (((x461*x462)-x463)*x464);

	if (t61 != 8188830143547438LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x473 = 7559;
	int64_t x474 = 2624091542LL;
	static int32_t x475 = INT32_MAX;
	uint16_t x476 = 1763U;
	volatile int64_t t62 = -36141444434LL;

	t62 = (((x473*x474)-x475)*x476);

	if (t62 != 34966214530349553LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x479 = -1LL;
	int16_t x480 = -1;
	int64_t t63 = 2260637503LL;

	t63 = (((x477*x478)-x479)*x480);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x485 = 1;
	static volatile int16_t x486 = -147;
	uint32_t x487 = UINT32_MAX;
	static int64_t x488 = -1288120319LL;
	volatile int64_t t64 = 26284098146LL;

	t64 = (((x485*x486)-x487)*x488);

	if (t64 != -5532434455352520850LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x489 = INT8_MIN;
	int8_t x491 = INT8_MIN;
	int16_t x492 = 145;
	volatile int32_t t65 = -1;

	t65 = (((x489*x490)-x491)*x492);

	if (t65 != -519680) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x493 = INT32_MAX;
	volatile uint32_t x494 = 131387435U;
	uint8_t x495 = 87U;
	volatile uint32_t t66 = 1780594U;

	t66 = (((x493*x494)-x495)*x496);

	if (t66 != 1749090304U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x497 = -24LL;
	int64_t x498 = -211LL;
	uint64_t x499 = 17610126789143605LLU;
	int8_t x500 = INT8_MIN;

	t67 = (((x497*x498)-x499)*x500);

	if (t67 != 2254096229009733248LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x501 = -1LL;
	uint64_t x502 = 188289LLU;
	int16_t x503 = -841;
	int32_t x504 = -1;
	uint64_t t68 = 1LLU;

	t68 = (((x501*x502)-x503)*x504);

	if (t68 != 187448LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x505 = -62;
	int16_t x507 = -1;
	volatile int32_t t69 = 790295478;

	t69 = (((x505*x506)-x507)*x508);

	if (t69 != 16065) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x509 = 28U;
	uint8_t x510 = 2U;
	volatile int8_t x511 = 1;
	static int16_t x512 = INT16_MAX;

	t70 = (((x509*x510)-x511)*x512);

	if (t70 != 1802185) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x513 = 0;
	int16_t x514 = -1;
	volatile uint16_t x515 = 448U;
	uint32_t t71 = 992386U;

	t71 = (((x513*x514)-x515)*x516);

	if (t71 != 448U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x521 = INT64_MAX;
	uint64_t x522 = UINT64_MAX;
	int16_t x523 = -1;
	uint8_t x524 = UINT8_MAX;
	volatile uint64_t t72 = 260599204134315794LLU;

	t72 = (((x521*x522)-x523)*x524);

	if (t72 != 9223372036854776318LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x529 = INT8_MIN;
	uint64_t x530 = 7287353LLU;
	static int64_t x531 = INT64_MIN;
	int8_t x532 = INT8_MIN;
	uint64_t t73 = 68585759LLU;

	t73 = (((x529*x530)-x531)*x532);

	if (t73 != 119395991552LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x538 = 104;
	static volatile int64_t x539 = INT64_MIN;
	int64_t x540 = -1LL;
	volatile int64_t t74 = -482948961605778LL;

	t74 = (((x537*x538)-x539)*x540);

	if (t74 != -9223372036854775600LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x541 = 1835731LL;
	uint16_t x542 = 2U;
	uint16_t x543 = 417U;
	uint8_t x544 = 2U;
	int64_t t75 = -22835526687096LL;

	t75 = (((x541*x542)-x543)*x544);

	if (t75 != 7342090LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x545 = UINT64_MAX;
	volatile int8_t x546 = INT8_MAX;
	int16_t x548 = INT16_MIN;
	uint64_t t76 = 120724552979037LLU;

	t76 = (((x545*x546)-x547)*x548);

	if (t76 != 4128768LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x549 = INT8_MAX;
	uint64_t x550 = UINT64_MAX;
	uint16_t x551 = UINT16_MAX;
	static uint64_t t77 = 130457249LLU;

	t77 = (((x549*x550)-x551)*x552);

	if (t77 != 18446744073487023098LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x555 = 7U;
	static uint64_t t78 = 483345630073866LLU;

	t78 = (((x553*x554)-x555)*x556);

	if (t78 != 498413076430015320LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x565 = INT16_MAX;
	uint8_t x566 = 11U;
	int8_t x567 = -31;
	volatile int8_t x568 = INT8_MAX;
	static int32_t t79 = -1;

	t79 = (((x565*x566)-x567)*x568);

	if (t79 != 45779436) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x569 = 723701U;
	static int8_t x570 = INT8_MIN;
	uint8_t x571 = 37U;
	uint8_t x572 = 16U;
	uint32_t t80 = 51956U;

	t80 = (((x569*x570)-x571)*x572);

	if (t80 != 2812827056U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x573 = 63825999820LLU;
	int64_t x575 = INT64_MIN;
	volatile uint64_t t81 = 250LLU;

	t81 = (((x573*x574)-x575)*x576);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x581 = -1;
	volatile uint8_t x583 = 10U;
	uint8_t x584 = 12U;
	int32_t t82 = 67659;

	t82 = (((x581*x582)-x583)*x584);

	if (t82 != -156) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x586 = 5576U;
	int8_t x587 = -1;

	t83 = (((x585*x586)-x587)*x588);

	if (t83 != 365488695) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x589 = -1LL;
	int16_t x590 = INT16_MIN;
	volatile int32_t x592 = INT32_MIN;
	volatile int64_t t84 = 1964LL;

	t84 = (((x589*x590)-x591)*x592);

	if (t84 != 9223301665963114496LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x605 = 5;
	volatile int32_t x607 = -11304968;
	int16_t x608 = -2;
	static volatile uint64_t t85 = 6289LLU;

	t85 = (((x605*x606)-x607)*x608);

	if (t85 != 18446744073686941690LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x609 = -1;
	uint8_t x610 = 1U;
	int64_t x611 = -637271LL;
	uint64_t x612 = 3556LLU;
	volatile uint64_t t86 = 665LLU;

	t86 = (((x609*x610)-x611)*x612);

	if (t86 != 2266132120LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x613 = -1;
	volatile int8_t x614 = 7;
	int32_t x616 = -1;

	t87 = (((x613*x614)-x615)*x616);

	if (t87 != 39) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x617 = 0;
	static volatile int16_t x618 = 25;
	int16_t x620 = -720;

	t88 = (((x617*x618)-x619)*x620);

	if (t88 != -23592960) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x621 = UINT32_MAX;
	int8_t x622 = -1;
	volatile uint32_t x623 = UINT32_MAX;
	uint32_t t89 = 440626769U;

	t89 = (((x621*x622)-x623)*x624);

	if (t89 != 510U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x629 = INT8_MIN;
	static int8_t x631 = 0;

	t90 = (((x629*x630)-x631)*x632);

	if (t90 != -8323200) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x633 = INT32_MIN;
	int16_t x634 = 0;
	volatile uint64_t x635 = 10271953709LLU;
	int8_t x636 = INT8_MAX;
	volatile uint64_t t91 = 1443590160167452645LLU;

	t91 = (((x633*x634)-x635)*x636);

	if (t91 != 18446742769171430573LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x637 = 36249220LLU;
	volatile int32_t x638 = -1;
	int64_t x639 = INT64_MIN;
	int32_t x640 = INT32_MAX;
	volatile uint64_t t92 = 695LLU;

	t92 = (((x637*x638)-x639)*x640);

	if (t92 != 9145527429688270468LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x646 = 1;
	volatile int64_t x647 = 3513LL;
	static volatile int8_t x648 = INT8_MAX;

	t93 = (((x645*x646)-x647)*x648);

	if (t93 != 272729977018LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x650 = 27U;
	int8_t x651 = INT8_MIN;
	volatile int32_t t94 = 6;

	t94 = (((x649*x650)-x651)*x652);

	if (t94 != 907035) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x661 = -1;
	int32_t x662 = 4101519;
	int64_t x663 = -446079LL;

	t95 = (((x661*x662)-x663)*x664);

	if (t95 != 7625089153016656448LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x665 = INT16_MIN;
	int8_t x666 = INT8_MIN;
	static uint64_t x667 = 500214934458058LLU;
	int32_t x668 = INT32_MAX;

	t96 = (((x665*x666)-x667)*x668);

	if (t96 != 5864917671207423690LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x670 = UINT8_MAX;
	uint32_t x671 = 3090U;
	uint8_t x672 = 118U;
	volatile uint32_t t97 = 430U;

	t97 = (((x669*x670)-x671)*x672);

	if (t97 != 3456810U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x677 = INT64_MAX;
	int8_t x679 = INT8_MAX;
	int64_t x680 = INT64_MIN;
	static uint64_t t98 = 61141149619LLU;

	t98 = (((x677*x678)-x679)*x680);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x681 = 10U;
	uint32_t x682 = 4909U;
	volatile uint64_t t99 = 1313LLU;

	t99 = (((x681*x682)-x683)*x684);

	if (t99 != 3548747788507425068LLU) { NG(); } else { ; }
	
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

