#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = 1867U;
volatile uint32_t x29 = UINT32_MAX;
static uint32_t x37 = 249403U;
int16_t x39 = 32;
uint32_t t4 = UINT32_MAX;
uint64_t x41 = UINT64_MAX;
uint64_t t5 = UINT64_MAX;
static uint8_t x49 = UINT8_MAX;
uint8_t x51 = 61U;
static int32_t t7 = -219341563;
static uint64_t x53 = UINT64_MAX;
volatile uint64_t t8 = UINT64_MAX;
static int64_t x63 = INT64_MIN;
volatile int32_t t10 = 2746403;
uint16_t x71 = 8U;
static int16_t x76 = INT16_MIN;
static uint16_t x77 = 63U;
int8_t x79 = -1;
uint8_t x81 = 9U;
int64_t t16 = -569860854125169556LL;
int32_t x92 = INT32_MIN;
volatile int32_t t17 = 46;
int8_t x95 = 0;
static volatile int32_t t18 = 3609;
uint8_t x97 = 0U;
int8_t x107 = 26;
uint8_t x108 = 0U;
int16_t x109 = INT16_MAX;
int8_t x122 = INT8_MIN;
int16_t x128 = INT16_MAX;
int64_t x152 = INT64_MIN;
int64_t x156 = -134689LL;
uint8_t x158 = 0U;
int64_t x162 = -1LL;
int64_t x163 = INT64_MIN;
uint64_t x164 = 3690405703064LLU;
static uint8_t x166 = 69U;
int8_t x189 = INT8_MAX;
int32_t t31 = 1921071;
int32_t t32 = 31546015;
volatile uint64_t t33 = 41087LLU;
uint64_t x212 = 367820853240597546LLU;
uint32_t x218 = 6U;
uint32_t x220 = 803104574U;
static int16_t x231 = INT16_MIN;
int64_t x237 = INT64_MAX;
int8_t x253 = INT8_MAX;
uint32_t x254 = UINT32_MAX;
static uint8_t x255 = 2U;
int8_t x276 = INT8_MAX;
uint32_t x278 = 1521845560U;
uint32_t t44 = 1U;
int64_t x305 = INT64_MAX;
int8_t x311 = INT8_MAX;
uint64_t t47 = 1LLU;
volatile uint32_t x335 = 801U;
volatile uint64_t x343 = 11173324725LLU;
volatile uint64_t x350 = 524448837659071LLU;
static volatile int32_t t53 = 12;
volatile uint64_t t54 = 1154483728187019811LLU;
uint32_t x361 = 0U;
int64_t x363 = INT64_MAX;
uint32_t t55 = 207107U;
uint16_t x365 = UINT16_MAX;
static uint64_t x366 = UINT64_MAX;
volatile uint32_t t59 = UINT32_MAX;
int8_t x413 = INT8_MAX;
int8_t x414 = INT8_MIN;
uint32_t x416 = UINT32_MAX;
uint32_t x429 = 16127U;
uint64_t x438 = 2403586LLU;
static volatile int64_t x445 = 930LL;
int32_t x448 = INT32_MIN;
int64_t t65 = 32888998361LL;
int8_t x470 = -18;
static uint32_t x490 = 585U;
static volatile int8_t x492 = INT8_MIN;
int8_t x503 = INT8_MIN;
static uint8_t x540 = 105U;
int8_t x543 = INT8_MIN;
uint64_t x549 = UINT64_MAX;
int32_t x552 = 1;
static volatile int32_t x560 = INT32_MAX;
static int16_t x563 = -1;
uint32_t t79 = 166302031U;
uint64_t x577 = 104537732320LLU;
volatile int8_t x578 = INT8_MAX;
int32_t x580 = -1;
int8_t x586 = -3;
uint64_t x588 = UINT64_MAX;
int16_t x599 = INT16_MIN;
volatile int16_t x605 = 10456;
volatile int32_t t84 = 111957;
uint64_t t85 = UINT64_MAX;
static volatile uint32_t x617 = 5U;
static int64_t x634 = -1LL;
uint8_t x635 = 3U;
static int64_t x658 = 856574613953LL;
static int16_t x667 = INT16_MIN;
int16_t x674 = -1;
uint16_t x681 = 145U;
volatile int8_t x706 = -51;
uint8_t x707 = 3U;
uint8_t x725 = 1U;
int8_t x726 = 0;
int8_t x727 = INT8_MIN;
static int32_t t99 = -35;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static uint32_t x2 = 716U;
	uint8_t x3 = 6U;
	static volatile int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = ((x1<<(x2==x3))|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 1U;
	uint32_t x7 = 1647U;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 9620131768421LL;

	t1 = ((x5<<(x6==x7))|x8);

	if (t1 != -9223372036854773941LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 115U;
	int16_t x10 = -1;
	int8_t x11 = 11;
	int16_t x12 = -1;
	volatile int32_t t2 = -357962;

	t2 = ((x9<<(x10==x11))|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x30 = INT8_MAX;
	static int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MAX;
	volatile int64_t t3 = INT64_MAX;

	t3 = ((x29<<(x30==x31))|x32);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x38 = INT8_MIN;
	int16_t x40 = -1;

	t4 = ((x37<<(x38==x39))|x40);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x42 = INT64_MIN;
	uint8_t x43 = 5U;
	int16_t x44 = -1376;

	t5 = ((x41<<(x42==x43))|x44);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = 27253U;
	int32_t x46 = 240480;
	volatile int64_t x47 = -2841783153915900060LL;
	static uint32_t x48 = 204U;
	volatile uint32_t t6 = 2868U;

	t6 = ((x45<<(x46==x47))|x48);

	if (t6 != 27389U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x50 = INT64_MIN;
	int8_t x52 = -27;

	t7 = ((x49<<(x50==x51))|x52);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x54 = 3LLU;
	uint64_t x55 = 2LLU;
	uint64_t x56 = 55760041LLU;

	t8 = ((x53<<(x54==x55))|x56);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = 14176LLU;
	volatile uint8_t x58 = 8U;
	uint64_t x59 = 102965632498LLU;
	uint32_t x60 = UINT32_MAX;
	uint64_t t9 = 1001908307033596741LLU;

	t9 = ((x57<<(x58==x59))|x60);

	if (t9 != 4294967295LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = 3U;
	int64_t x62 = INT64_MIN;
	volatile int16_t x64 = INT16_MIN;

	t10 = ((x61<<(x62==x63))|x64);

	if (t10 != -32762) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x65 = INT64_MAX;
	int64_t x66 = INT64_MIN;
	uint16_t x67 = 35U;
	static int16_t x68 = INT16_MIN;
	static int64_t t11 = -48579679LL;

	t11 = ((x65<<(x66==x67))|x68);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x69 = 15U;
	volatile int16_t x70 = -21;
	static int16_t x72 = -4628;
	int32_t t12 = -2283;

	t12 = ((x69<<(x70==x71))|x72);

	if (t12 != -4625) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = 5198LLU;
	static volatile int64_t x74 = INT64_MAX;
	int64_t x75 = INT64_MIN;
	static volatile uint64_t t13 = 90603299857524419LLU;

	t13 = ((x73<<(x74==x75))|x76);

	if (t13 != 18446744073709524046LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x78 = INT16_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t14 = 4175;

	t14 = ((x77<<(x78==x79))|x80);

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x82 = INT32_MAX;
	uint16_t x83 = 194U;
	uint8_t x84 = 16U;
	volatile int32_t t15 = 527333302;

	t15 = ((x81<<(x82==x83))|x84);

	if (t15 != 25) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x85 = UINT32_MAX;
	static int32_t x86 = -6487;
	volatile int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MIN;

	t16 = ((x85<<(x86==x87))|x88);

	if (t16 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = 60U;
	static int16_t x90 = -10;
	volatile int64_t x91 = INT64_MIN;

	t17 = ((x89<<(x90==x91))|x92);

	if (t17 != -2147483588) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MAX;
	int32_t x94 = INT32_MAX;
	static int16_t x96 = -1;

	t18 = ((x93<<(x94==x95))|x96);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x98 = INT32_MAX;
	uint32_t x99 = 269074348U;
	volatile uint8_t x100 = 57U;
	volatile int32_t t19 = -22652;

	t19 = ((x97<<(x98==x99))|x100);

	if (t19 != 57) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x105 = UINT16_MAX;
	uint16_t x106 = 348U;
	volatile int32_t t20 = -359;

	t20 = ((x105<<(x106==x107))|x108);

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x110 = 20LLU;
	uint32_t x111 = 86U;
	int16_t x112 = INT16_MIN;
	int32_t t21 = -5455574;

	t21 = ((x109<<(x110==x111))|x112);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = UINT8_MAX;
	volatile int32_t x114 = INT32_MIN;
	uint32_t x115 = 996782743U;
	volatile int8_t x116 = INT8_MIN;
	static volatile int32_t t22 = -242052465;

	t22 = ((x113<<(x114==x115))|x116);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x121 = 27;
	static int8_t x123 = 59;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = ((x121<<(x122==x123))|x124);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x125 = INT64_MAX;
	int32_t x126 = 114054;
	volatile int32_t x127 = 31232;
	volatile int64_t t24 = INT64_MAX;

	t24 = ((x125<<(x126==x127))|x128);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x137 = 29462981;
	int8_t x138 = 1;
	static uint8_t x139 = UINT8_MAX;
	volatile uint16_t x140 = 141U;
	int32_t t25 = 3247;

	t25 = ((x137<<(x138==x139))|x140);

	if (t25 != 29462989) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x149 = INT32_MAX;
	static volatile int16_t x150 = 1480;
	static volatile int16_t x151 = -1;
	static volatile int64_t t26 = -5149181520822LL;

	t26 = ((x149<<(x150==x151))|x152);

	if (t26 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x153 = 1U;
	volatile uint32_t x154 = UINT32_MAX;
	int16_t x155 = 49;
	volatile int64_t t27 = -105750286LL;

	t27 = ((x153<<(x154==x155))|x156);

	if (t27 != -134689LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x157 = UINT64_MAX;
	uint16_t x159 = UINT16_MAX;
	uint64_t x160 = 316487167LLU;
	uint64_t t28 = UINT64_MAX;

	t28 = ((x157<<(x158==x159))|x160);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = 1;
	volatile uint64_t t29 = 276334148623630LLU;

	t29 = ((x161<<(x162==x163))|x164);

	if (t29 != 3690405703065LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x165 = 31184LLU;
	uint64_t x167 = 1621171952529042LLU;
	volatile uint8_t x168 = 14U;
	uint64_t t30 = 58LLU;

	t30 = ((x165<<(x166==x167))|x168);

	if (t30 != 31198LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x190 = 6563U;
	uint64_t x191 = UINT64_MAX;
	int32_t x192 = -1;

	t31 = ((x189<<(x190==x191))|x192);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x197 = INT8_MAX;
	int8_t x198 = 25;
	uint8_t x199 = 12U;
	int8_t x200 = -1;

	t32 = ((x197<<(x198==x199))|x200);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x201 = 52U;
	int8_t x202 = -1;
	int16_t x203 = 1;
	uint64_t x204 = 203799264329LLU;

	t33 = ((x201<<(x202==x203))|x204);

	if (t33 != 203799264381LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x205 = 0;
	volatile int8_t x206 = -1;
	int16_t x207 = -1;
	int64_t x208 = -1LL;
	volatile int64_t t34 = 41594LL;

	t34 = ((x205<<(x206==x207))|x208);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x209 = 314827507LLU;
	int64_t x210 = INT64_MAX;
	int32_t x211 = INT32_MAX;
	volatile uint64_t t35 = 9392590966LLU;

	t35 = ((x209<<(x210==x211))|x212);

	if (t35 != 367820853517479675LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x217 = 1507056227577987150LLU;
	int16_t x219 = INT16_MIN;
	volatile uint64_t t36 = 3LLU;

	t36 = ((x217<<(x218==x219))|x220);

	if (t36 != 1507056227620743038LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MIN;
	int64_t x232 = -1LL;
	int64_t t37 = 387211582007882123LL;

	t37 = ((x229<<(x230==x231))|x232);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x238 = 0U;
	int16_t x239 = -1;
	static int16_t x240 = 3235;
	volatile int64_t t38 = INT64_MAX;

	t38 = ((x237<<(x238==x239))|x240);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x249 = 256U;
	uint64_t x250 = 2922370358940139814LLU;
	uint64_t x251 = 3148643957824565508LLU;
	int64_t x252 = INT64_MIN;
	int64_t t39 = 3762173527198763112LL;

	t39 = ((x249<<(x250==x251))|x252);

	if (t39 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x256 = 3U;
	volatile int32_t t40 = -22086;

	t40 = ((x253<<(x254==x255))|x256);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x261 = 126045991169593LLU;
	static int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MAX;
	volatile uint64_t x264 = UINT64_MAX;
	static volatile uint64_t t41 = UINT64_MAX;

	t41 = ((x261<<(x262==x263))|x264);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x273 = INT8_MAX;
	static int8_t x274 = -23;
	int8_t x275 = -51;
	int32_t t42 = -15970592;

	t42 = ((x273<<(x274==x275))|x276);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x277 = INT64_MAX;
	int64_t x279 = INT64_MIN;
	int64_t x280 = -154061722817LL;
	int64_t t43 = 3203709923278187475LL;

	t43 = ((x277<<(x278==x279))|x280);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x293 = 3391U;
	volatile int8_t x294 = 27;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = INT16_MAX;

	t44 = ((x293<<(x294==x295))|x296);

	if (t44 != 32767U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x306 = 136112U;
	uint16_t x307 = 12U;
	uint32_t x308 = UINT32_MAX;
	int64_t t45 = INT64_MAX;

	t45 = ((x305<<(x306==x307))|x308);

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x309 = 1U;
	volatile int64_t x310 = 96414451020LL;
	int32_t x312 = INT32_MIN;
	int32_t t46 = -34891;

	t46 = ((x309<<(x310==x311))|x312);

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x313 = 0LLU;
	static volatile int32_t x314 = -63641;
	int8_t x315 = INT8_MAX;
	static volatile uint16_t x316 = UINT16_MAX;

	t47 = ((x313<<(x314==x315))|x316);

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x321 = 4573;
	static uint16_t x322 = 120U;
	uint16_t x323 = UINT16_MAX;
	uint32_t x324 = 52744175U;
	volatile uint32_t t48 = 559U;

	t48 = ((x321<<(x322==x323))|x324);

	if (t48 != 52748287U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x333 = 57;
	int64_t x334 = -1LL;
	int32_t x336 = -64530307;
	volatile int32_t t49 = 1;

	t49 = ((x333<<(x334==x335))|x336);

	if (t49 != -64530307) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x337 = 115348920;
	static int8_t x338 = INT8_MAX;
	int32_t x339 = 350900862;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t50 = 1;

	t50 = ((x337<<(x338==x339))|x340);

	if (t50 != -72) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x341 = UINT8_MAX;
	uint32_t x342 = 27421581U;
	int32_t x344 = INT32_MIN;
	volatile int32_t t51 = -4285268;

	t51 = ((x341<<(x342==x343))|x344);

	if (t51 != -2147483393) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x345 = 0;
	static uint64_t x346 = UINT64_MAX;
	int32_t x347 = INT32_MAX;
	int64_t x348 = -1LL;
	int64_t t52 = -15413LL;

	t52 = ((x345<<(x346==x347))|x348);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x349 = 4U;
	uint8_t x351 = 3U;
	static int32_t x352 = -1;

	t53 = ((x349<<(x350==x351))|x352);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x353 = 941909651102932LLU;
	int8_t x354 = INT8_MIN;
	uint16_t x355 = 58U;
	int64_t x356 = INT64_MIN;

	t54 = ((x353<<(x354==x355))|x356);

	if (t54 != 9224313946505878740LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x362 = 185270111LLU;
	uint32_t x364 = 516177120U;

	t55 = ((x361<<(x362==x363))|x364);

	if (t55 != 516177120U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x367 = INT32_MAX;
	volatile uint32_t x368 = 5653U;
	static volatile uint32_t t56 = 7078563U;

	t56 = ((x365<<(x366==x367))|x368);

	if (t56 != 65535U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x373 = 26U;
	static int16_t x374 = INT16_MIN;
	static int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	volatile int32_t t57 = 0;

	t57 = ((x373<<(x374==x375))|x376);

	if (t57 != -2147483596) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x401 = 241;
	int64_t x402 = -51LL;
	volatile int8_t x403 = 1;
	int64_t x404 = 2751820413538932031LL;
	int64_t t58 = -693632765374019954LL;

	t58 = ((x401<<(x402==x403))|x404);

	if (t58 != 2751820413538932223LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x405 = UINT32_MAX;
	static int32_t x406 = -1;
	uint32_t x407 = 3U;
	static volatile int8_t x408 = INT8_MIN;

	t59 = ((x405<<(x406==x407))|x408);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x415 = -1;
	static volatile uint32_t t60 = UINT32_MAX;

	t60 = ((x413<<(x414==x415))|x416);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x425 = 10U;
	int64_t x426 = INT64_MAX;
	static uint64_t x427 = 1456411733594597299LLU;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t61 = -5647;

	t61 = ((x425<<(x426==x427))|x428);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x430 = -1;
	uint8_t x431 = 77U;
	int16_t x432 = -1;
	uint32_t t62 = UINT32_MAX;

	t62 = ((x429<<(x430==x431))|x432);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x433 = UINT64_MAX;
	int64_t x434 = INT64_MIN;
	volatile int32_t x435 = INT32_MIN;
	volatile int16_t x436 = INT16_MIN;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = ((x433<<(x434==x435))|x436);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x437 = INT64_MAX;
	static uint8_t x439 = 7U;
	int16_t x440 = INT16_MAX;
	int64_t t64 = INT64_MAX;

	t64 = ((x437<<(x438==x439))|x440);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x446 = 30469U;
	uint16_t x447 = 31203U;

	t65 = ((x445<<(x446==x447))|x448);

	if (t65 != -2147482718LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x461 = 533208495;
	static uint64_t x462 = 202668LLU;
	int16_t x463 = INT16_MAX;
	uint16_t x464 = 1491U;
	volatile int32_t t66 = -11;

	t66 = ((x461<<(x462==x463))|x464);

	if (t66 != 533208575) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x469 = 3U;
	int8_t x471 = -3;
	int8_t x472 = 23;
	int32_t t67 = 0;

	t67 = ((x469<<(x470==x471))|x472);

	if (t67 != 23) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x477 = UINT64_MAX;
	static int64_t x478 = INT64_MIN;
	uint8_t x479 = 73U;
	uint64_t x480 = 801695LLU;
	static uint64_t t68 = UINT64_MAX;

	t68 = ((x477<<(x478==x479))|x480);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x489 = INT64_MAX;
	int32_t x491 = INT32_MIN;
	static int64_t t69 = -16525969034LL;

	t69 = ((x489<<(x490==x491))|x492);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x501 = UINT32_MAX;
	uint32_t x502 = UINT32_MAX;
	volatile uint16_t x504 = 2325U;
	uint32_t t70 = UINT32_MAX;

	t70 = ((x501<<(x502==x503))|x504);

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x533 = 3429871183LLU;
	uint64_t x534 = UINT64_MAX;
	int32_t x535 = -1;
	int32_t x536 = INT32_MIN;
	uint64_t t71 = 350071124458707872LLU;

	t71 = ((x533<<(x534==x535))|x536);

	if (t71 != 18446744071979359390LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x537 = UINT64_MAX;
	static uint32_t x538 = 158690U;
	static int64_t x539 = INT64_MIN;
	uint64_t t72 = UINT64_MAX;

	t72 = ((x537<<(x538==x539))|x540);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x541 = 2;
	int8_t x542 = 17;
	int8_t x544 = 21;
	int32_t t73 = 211;

	t73 = ((x541<<(x542==x543))|x544);

	if (t73 != 23) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x545 = INT16_MAX;
	uint32_t x546 = 3U;
	volatile int16_t x547 = INT16_MIN;
	uint16_t x548 = UINT16_MAX;
	static int32_t t74 = 1017489782;

	t74 = ((x545<<(x546==x547))|x548);

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x550 = 1008U;
	static int32_t x551 = -1;
	uint64_t t75 = UINT64_MAX;

	t75 = ((x549<<(x550==x551))|x552);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x553 = UINT32_MAX;
	int16_t x554 = INT16_MIN;
	volatile uint64_t x555 = UINT64_MAX;
	int16_t x556 = -4697;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = ((x553<<(x554==x555))|x556);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x557 = 2205U;
	uint64_t x558 = 223874487781522675LLU;
	uint32_t x559 = UINT32_MAX;
	volatile uint32_t t77 = 246U;

	t77 = ((x557<<(x558==x559))|x560);

	if (t77 != 2147483647U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x561 = UINT32_MAX;
	int32_t x562 = -1;
	int16_t x564 = -1;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x561<<(x562==x563))|x564);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x565 = INT8_MAX;
	volatile int64_t x566 = -1LL;
	uint64_t x567 = 372873696LLU;
	volatile uint32_t x568 = 243256921U;

	t79 = ((x565<<(x566==x567))|x568);

	if (t79 != 243256959U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x579 = INT32_MIN;
	uint64_t t80 = UINT64_MAX;

	t80 = ((x577<<(x578==x579))|x580);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x585 = UINT64_MAX;
	int32_t x587 = INT32_MIN;
	static uint64_t t81 = UINT64_MAX;

	t81 = ((x585<<(x586==x587))|x588);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x589 = 10;
	int16_t x590 = INT16_MIN;
	volatile uint32_t x591 = UINT32_MAX;
	int8_t x592 = INT8_MAX;
	static volatile int32_t t82 = -469151;

	t82 = ((x589<<(x590==x591))|x592);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x597 = 0LLU;
	int32_t x598 = INT32_MIN;
	int16_t x600 = INT16_MAX;
	volatile uint64_t t83 = 80LLU;

	t83 = ((x597<<(x598==x599))|x600);

	if (t83 != 32767LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x606 = INT16_MIN;
	int16_t x607 = INT16_MIN;
	int8_t x608 = 0;

	t84 = ((x605<<(x606==x607))|x608);

	if (t84 != 20912) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x613 = UINT32_MAX;
	int32_t x614 = -1;
	int16_t x615 = -13;
	uint64_t x616 = UINT64_MAX;

	t85 = ((x613<<(x614==x615))|x616);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x618 = INT16_MIN;
	uint8_t x619 = 0U;
	int16_t x620 = 32;
	uint32_t t86 = 37U;

	t86 = ((x617<<(x618==x619))|x620);

	if (t86 != 37U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x625 = 31409309LLU;
	int8_t x626 = INT8_MIN;
	volatile uint8_t x627 = UINT8_MAX;
	int32_t x628 = -1;
	volatile uint64_t t87 = UINT64_MAX;

	t87 = ((x625<<(x626==x627))|x628);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x633 = 63;
	int32_t x636 = INT32_MIN;
	volatile int32_t t88 = 199792;

	t88 = ((x633<<(x634==x635))|x636);

	if (t88 != -2147483585) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x637 = UINT16_MAX;
	uint16_t x638 = UINT16_MAX;
	static int16_t x639 = INT16_MIN;
	volatile int8_t x640 = INT8_MAX;
	int32_t t89 = 17493;

	t89 = ((x637<<(x638==x639))|x640);

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x657 = 9017;
	static int8_t x659 = INT8_MIN;
	uint16_t x660 = 330U;
	volatile int32_t t90 = -528;

	t90 = ((x657<<(x658==x659))|x660);

	if (t90 != 9083) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x665 = UINT32_MAX;
	int64_t x666 = -1LL;
	int16_t x668 = 15;
	static uint32_t t91 = UINT32_MAX;

	t91 = ((x665<<(x666==x667))|x668);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x673 = 14U;
	int32_t x675 = 29;
	volatile int32_t x676 = -5;
	volatile int32_t t92 = 57;

	t92 = ((x673<<(x674==x675))|x676);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x677 = 12U;
	int32_t x678 = INT32_MIN;
	static volatile int16_t x679 = INT16_MIN;
	static int8_t x680 = INT8_MIN;
	int32_t t93 = 346926177;

	t93 = ((x677<<(x678==x679))|x680);

	if (t93 != -116) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x682 = INT64_MIN;
	int32_t x683 = 188073792;
	volatile int32_t x684 = INT32_MIN;
	int32_t t94 = 56454504;

	t94 = ((x681<<(x682==x683))|x684);

	if (t94 != -2147483503) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x685 = 81013U;
	int64_t x686 = INT64_MIN;
	int16_t x687 = 23;
	volatile uint16_t x688 = UINT16_MAX;
	volatile uint32_t t95 = 2078104742U;

	t95 = ((x685<<(x686==x687))|x688);

	if (t95 != 131071U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x701 = INT32_MAX;
	static volatile int8_t x702 = INT8_MIN;
	uint64_t x703 = 970707LLU;
	int64_t x704 = INT64_MIN;
	int64_t t96 = 9939475924883867LL;

	t96 = ((x701<<(x702==x703))|x704);

	if (t96 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x705 = 4U;
	uint16_t x708 = UINT16_MAX;
	static int32_t t97 = -443340;

	t97 = ((x705<<(x706==x707))|x708);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x721 = INT32_MAX;
	int32_t x722 = -1;
	uint64_t x723 = 4801426LLU;
	int64_t x724 = INT64_MAX;
	volatile int64_t t98 = INT64_MAX;

	t98 = ((x721<<(x722==x723))|x724);

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x728 = 59U;

	t99 = ((x725<<(x726==x727))|x728);

	if (t99 != 59) { NG(); } else { ; }
	
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

