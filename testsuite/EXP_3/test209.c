#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = 2559;
static uint16_t x3 = UINT16_MAX;
uint32_t x5 = 0U;
uint32_t x9 = UINT32_MAX;
int8_t x15 = -1;
int16_t x17 = -1;
uint32_t x19 = 697794420U;
uint16_t x25 = UINT16_MAX;
uint32_t x30 = 188548U;
volatile int16_t x31 = INT16_MIN;
volatile uint8_t x35 = 17U;
volatile int32_t x36 = -2;
uint16_t x37 = 1U;
volatile uint64_t t9 = 98211944423LLU;
int64_t t10 = 2686244393790LL;
int8_t x57 = -1;
uint16_t x58 = 4436U;
volatile int64_t x59 = INT64_MIN;
int32_t t15 = 284169;
uint8_t x72 = 115U;
volatile uint32_t x75 = 4U;
uint32_t t18 = 18U;
static uint32_t x85 = 960U;
static uint16_t x90 = UINT16_MAX;
volatile int64_t x97 = INT64_MIN;
volatile int64_t x98 = INT64_MIN;
volatile int8_t x100 = 5;
int64_t x101 = 664320590313LL;
int16_t x103 = INT16_MAX;
volatile int16_t x106 = INT16_MIN;
uint8_t x107 = UINT8_MAX;
volatile int64_t x112 = 4612355LL;
volatile int64_t t27 = -177LL;
int64_t x138 = 94440258142LL;
int32_t x150 = -1;
int64_t x155 = 4LL;
int16_t x156 = INT16_MIN;
uint64_t t35 = 28171195617586099LLU;
int8_t x166 = INT8_MIN;
int32_t x168 = 21938;
static uint32_t x172 = 753315U;
int8_t x180 = -1;
static volatile uint64_t t38 = 975835LLU;
static volatile int8_t x183 = INT8_MAX;
volatile int16_t x202 = 1;
volatile int8_t x213 = -1;
volatile int64_t x214 = 29323181085LL;
volatile int32_t x215 = -63077;
int64_t t45 = -3767LL;
static uint64_t x233 = UINT64_MAX;
int32_t x234 = 27;
int8_t x238 = INT8_MIN;
volatile int64_t x240 = -15131468253279LL;
static int32_t x241 = INT32_MIN;
volatile uint64_t t50 = 1LLU;
volatile int64_t x245 = INT64_MAX;
int16_t x251 = -1;
volatile uint32_t x253 = UINT32_MAX;
volatile int32_t x256 = INT32_MIN;
static uint8_t x260 = 1U;
int32_t x261 = -1;
int8_t x264 = INT8_MAX;
static uint8_t x272 = 1U;
volatile int64_t x273 = -1LL;
volatile int16_t x278 = INT16_MIN;
volatile uint64_t x280 = 115329883LLU;
static volatile int32_t x284 = 27;
uint64_t x286 = 34430754589264627LLU;
int64_t x288 = 6709416209716958LL;
volatile uint64_t t61 = 331950301747146054LLU;
int8_t x292 = INT8_MIN;
static int32_t x297 = INT32_MIN;
static int32_t t63 = -136079;
int32_t t64 = 60083138;
uint16_t x314 = UINT16_MAX;
int64_t x320 = 4790586357LL;
uint64_t t67 = 57762198LLU;
volatile int8_t x323 = -1;
static uint32_t t68 = 16095270U;
static int16_t x329 = INT16_MIN;
uint32_t x333 = UINT32_MAX;
uint32_t x337 = 163561U;
uint32_t x339 = 225U;
int16_t x340 = INT16_MIN;
static int64_t x341 = -5259LL;
int8_t x343 = 7;
int16_t x347 = -1;
int16_t x349 = INT16_MAX;
uint32_t x357 = UINT32_MAX;
volatile int16_t x359 = INT16_MIN;
volatile uint64_t x360 = 22800926LLU;
uint16_t x364 = UINT16_MAX;
uint8_t x368 = 3U;
int64_t t79 = 318725831149777789LL;
volatile int64_t x370 = INT64_MAX;
volatile uint16_t x375 = UINT16_MAX;
uint64_t t81 = 814383490754614030LLU;
int16_t x378 = INT16_MIN;
uint8_t x383 = 35U;
uint8_t x388 = 7U;
volatile int64_t t84 = 88932305025782426LL;
volatile uint16_t x393 = 1U;
int32_t x396 = 0;
static uint16_t x407 = UINT16_MAX;
uint64_t x423 = 125394439071813LLU;
uint32_t x440 = UINT32_MAX;
uint32_t t93 = 7595249U;
volatile int16_t x447 = 35;
static int64_t t94 = -406431535780LL;
uint16_t x449 = 2U;
volatile uint64_t x454 = UINT64_MAX;
int16_t x457 = -1;
int8_t x459 = 2;
int32_t x462 = INT32_MIN;
static volatile int32_t x463 = -1;
uint64_t x464 = 163696659LLU;
int16_t x467 = -257;
static uint64_t t99 = 6LLU;


void f0(void) {
	int8_t x2 = -1;
	static int8_t x4 = -1;
	int32_t t0 = -6872492;

	t0 = ((x1/x2)+(x3-x4));

	if (t0 != 62977) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	uint64_t x7 = 433115326274493LLU;
	static uint32_t x8 = 5178U;
	volatile uint64_t t1 = 31LLU;

	t1 = ((x5/x6)+(x7-x8));

	if (t1 != 433115326269315LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 1U;
	uint8_t x11 = 104U;
	int8_t x12 = INT8_MAX;
	uint32_t t2 = 289776U;

	t2 = ((x9/x10)+(x11-x12));

	if (t2 != 4294967272U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int32_t x14 = INT32_MIN;
	int16_t x16 = -2;
	int32_t t3 = -2;

	t3 = ((x13/x14)+(x15-x16));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x18 = 1U;
	uint64_t x20 = UINT64_MAX;
	uint64_t t4 = 9761450900733687LLU;

	t4 = ((x17/x18)+(x19-x20));

	if (t4 != 697794420LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	volatile uint16_t x22 = 6134U;
	int64_t x23 = -4LL;
	uint32_t x24 = 1U;
	int64_t t5 = -2LL;

	t5 = ((x21/x22)+(x23-x24));

	if (t5 != -350100LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x26 = 11067U;
	int64_t x27 = 5983482069803LL;
	static int16_t x28 = INT16_MIN;
	volatile int64_t t6 = -1LL;

	t6 = ((x25/x26)+(x27-x28));

	if (t6 != 5983482102576LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	int32_t x32 = 9;
	volatile uint32_t t7 = 18137U;

	t7 = ((x29/x30)+(x31-x32));

	if (t7 != 4294945908U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	uint64_t x34 = 422854928244LLU;
	volatile uint64_t t8 = 2327558975116702759LLU;

	t8 = ((x33/x34)+(x35-x36));

	if (t8 != 43624304LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x38 = UINT64_MAX;
	volatile uint64_t x39 = UINT64_MAX;
	int8_t x40 = INT8_MIN;

	t9 = ((x37/x38)+(x39-x40));

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -9649LL;
	uint8_t x42 = UINT8_MAX;
	static uint16_t x43 = 24U;
	int8_t x44 = INT8_MIN;

	t10 = ((x41/x42)+(x43-x44));

	if (t10 != 115LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	int16_t x46 = 44;
	int8_t x47 = INT8_MIN;
	uint16_t x48 = 30622U;
	volatile int32_t t11 = 12;

	t11 = ((x45/x46)+(x47-x48));

	if (t11 != -30750) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 3351318522LL;
	uint16_t x50 = 187U;
	uint32_t x51 = 2047U;
	uint8_t x52 = 0U;
	int64_t t12 = -129LL;

	t12 = ((x49/x50)+(x51-x52));

	if (t12 != 17923536LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -21145554449051LL;
	int16_t x54 = -1;
	uint32_t x55 = 3644U;
	int32_t x56 = INT32_MAX;
	volatile int64_t t13 = 132622791994306LL;

	t13 = ((x53/x54)+(x55-x56));

	if (t13 != 21147701936344LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x60 = INT8_MIN;
	int64_t t14 = -2729929852361558LL;

	t14 = ((x57/x58)+(x59-x60));

	if (t14 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static int16_t x62 = INT16_MIN;
	volatile uint16_t x63 = UINT16_MAX;
	int16_t x64 = -1;

	t15 = ((x61/x62)+(x63-x64));

	if (t15 != 65536) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static volatile int16_t x66 = INT16_MIN;
	static int8_t x67 = -1;
	int32_t x68 = -2746733;
	volatile int32_t t16 = 1;

	t16 = ((x65/x66)+(x67-x68));

	if (t16 != 2812268) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	int32_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	volatile int64_t t17 = 25952LL;

	t17 = ((x69/x70)+(x71-x72));

	if (t17 != -9223372036854775667LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static int8_t x74 = -1;
	static int16_t x76 = INT16_MIN;

	t18 = ((x73/x74)+(x75-x76));

	if (t18 != 32900U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int64_t x78 = 10644LL;
	int64_t x79 = INT64_MIN;
	static uint64_t x80 = UINT64_MAX;
	volatile uint64_t t19 = 222867905738952LLU;

	t19 = ((x77/x78)+(x79-x80));

	if (t19 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -84141266;
	uint32_t x82 = 659046U;
	int32_t x83 = -1;
	static uint16_t x84 = 14422U;
	volatile uint32_t t20 = 77U;

	t20 = ((x81/x82)+(x83-x84));

	if (t20 != 4294959262U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = UINT8_MAX;
	static uint32_t x87 = 4014U;
	volatile uint16_t x88 = 1396U;
	uint32_t t21 = 2U;

	t21 = ((x85/x86)+(x87-x88));

	if (t21 != 2621U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	volatile int8_t x91 = INT8_MAX;
	static uint64_t x92 = 3670LLU;
	uint64_t t22 = 5216656LLU;

	t22 = ((x89/x90)+(x91-x92));

	if (t22 != 61994LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x99 = 74LLU;
	static uint64_t t23 = 103463209187245666LLU;

	t23 = ((x97/x98)+(x99-x100));

	if (t23 != 70LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x102 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	volatile int64_t t24 = 53864463458710LL;

	t24 = ((x101/x102)+(x103-x104));

	if (t24 != -5189971716LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 1065U;
	int64_t x108 = -16331132854488183LL;
	int64_t t25 = -1LL;

	t25 = ((x105/x106)+(x107-x108));

	if (t25 != 16331132854488438LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = INT8_MAX;
	uint8_t x110 = 9U;
	int8_t x111 = INT8_MAX;
	int64_t t26 = -61LL;

	t26 = ((x109/x110)+(x111-x112));

	if (t26 != -4612214LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	static int8_t x114 = INT8_MIN;
	volatile int8_t x115 = -1;
	int64_t x116 = -1LL;

	t27 = ((x113/x114)+(x115-x116));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -2028;
	int8_t x118 = INT8_MAX;
	uint64_t x119 = UINT64_MAX;
	static int32_t x120 = -1;
	volatile uint64_t t28 = 119921765252343LLU;

	t28 = ((x117/x118)+(x119-x120));

	if (t28 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MIN;
	uint32_t x123 = 32U;
	uint32_t x124 = 6725544U;
	uint32_t t29 = 402U;

	t29 = ((x121/x122)+(x123-x124));

	if (t29 != 4288241785U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x125 = UINT64_MAX;
	int32_t x126 = INT32_MAX;
	static uint32_t x127 = UINT32_MAX;
	uint16_t x128 = UINT16_MAX;
	static volatile uint64_t t30 = 208841427LLU;

	t30 = ((x125/x126)+(x127-x128));

	if (t30 != 12884836356LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MIN;
	uint16_t x135 = UINT16_MAX;
	static int8_t x136 = INT8_MIN;
	static int64_t t31 = 21LL;

	t31 = ((x133/x134)+(x135-x136));

	if (t31 != 4295032959LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = 2021711;
	volatile uint32_t x139 = 405U;
	volatile int16_t x140 = INT16_MIN;
	volatile int64_t t32 = -79248207011077027LL;

	t32 = ((x137/x138)+(x139-x140));

	if (t32 != 33173LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x149 = UINT8_MAX;
	int32_t x151 = -1;
	volatile int16_t x152 = INT16_MIN;
	int32_t t33 = -1;

	t33 = ((x149/x150)+(x151-x152));

	if (t33 != 32512) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = -1LL;
	static uint64_t x154 = UINT64_MAX;
	volatile uint64_t t34 = 83LLU;

	t34 = ((x153/x154)+(x155-x156));

	if (t34 != 32773LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MAX;
	uint32_t x158 = 34U;
	volatile uint64_t x159 = 49322005329405LLU;
	volatile int8_t x160 = -42;

	t35 = ((x157/x158)+(x159-x160));

	if (t35 != 49322068490730LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MIN;
	static int8_t x167 = 0;
	int32_t t36 = 32019;

	t36 = ((x165/x166)+(x167-x168));

	if (t36 != 16755278) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = 0LLU;
	static uint64_t x170 = 558527270LLU;
	int32_t x171 = -1;
	uint64_t t37 = 100099656093896LLU;

	t37 = ((x169/x170)+(x171-x172));

	if (t37 != 4294213980LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x177 = UINT64_MAX;
	uint8_t x178 = UINT8_MAX;
	int16_t x179 = -64;

	t38 = ((x177/x178)+(x179-x180));

	if (t38 != 72340172838076610LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x181 = -6LL;
	int16_t x182 = INT16_MAX;
	static volatile uint32_t x184 = 517612447U;
	volatile int64_t t39 = 48611235LL;

	t39 = ((x181/x182)+(x183-x184));

	if (t39 != 3777354976LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = INT16_MAX;
	uint64_t x187 = UINT64_MAX;
	uint8_t x188 = UINT8_MAX;
	uint64_t t40 = 5073352533LLU;

	t40 = ((x185/x186)+(x187-x188));

	if (t40 != 65282LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = 4U;
	int16_t x194 = 658;
	volatile int32_t x195 = INT32_MIN;
	volatile uint32_t x196 = 5983U;
	uint32_t t41 = 76268U;

	t41 = ((x193/x194)+(x195-x196));

	if (t41 != 2147477665U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = 2;
	static int32_t x203 = INT32_MIN;
	uint64_t x204 = 5911935739936LLU;
	volatile uint64_t t42 = 2122990972673547082LLU;

	t42 = ((x201/x202)+(x203-x204));

	if (t42 != 18446738159626328034LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x205 = 1U;
	int32_t x206 = INT32_MIN;
	uint64_t x207 = UINT64_MAX;
	int16_t x208 = -1;
	uint64_t t43 = 238964866266469182LLU;

	t43 = ((x205/x206)+(x207-x208));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = INT16_MAX;
	uint8_t x210 = 5U;
	int16_t x211 = -1;
	uint64_t x212 = UINT64_MAX;
	uint64_t t44 = 799LLU;

	t44 = ((x209/x210)+(x211-x212));

	if (t44 != 6553LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x216 = -1LL;

	t45 = ((x213/x214)+(x215-x216));

	if (t45 != -63076LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = INT32_MIN;
	volatile int32_t x222 = 1;
	static int8_t x223 = -1;
	int32_t x224 = INT32_MIN;
	int32_t t46 = -1918337;

	t46 = ((x221/x222)+(x223-x224));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t x230 = INT32_MIN;
	uint16_t x231 = 24U;
	int32_t x232 = 71575;
	uint64_t t47 = 37117LLU;

	t47 = ((x229/x230)+(x231-x232));

	if (t47 != 18446744073709480066LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x235 = 85460LLU;
	volatile int32_t x236 = -1;
	uint64_t t48 = 29280848030830717LLU;

	t48 = ((x233/x234)+(x235-x236));

	if (t48 != 683212743470809594LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x237 = INT16_MIN;
	static uint32_t x239 = 369224U;
	volatile int64_t t49 = 14828054720113LL;

	t49 = ((x237/x238)+(x239-x240));

	if (t49 != 15131468622759LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x242 = UINT64_MAX;
	int64_t x243 = -44619261204718332LL;
	int32_t x244 = 4754995;

	t50 = ((x241/x242)+(x243-x244));

	if (t50 != 18402124812500078289LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x246 = 2332U;
	uint16_t x247 = UINT16_MAX;
	static uint8_t x248 = UINT8_MAX;
	int64_t t51 = 2356173704073LL;

	t51 = ((x245/x246)+(x247-x248));

	if (t51 != 3955133806606779LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x249 = INT16_MIN;
	uint64_t x250 = UINT64_MAX;
	int32_t x252 = INT32_MIN;
	uint64_t t52 = 371333LLU;

	t52 = ((x249/x250)+(x251-x252));

	if (t52 != 2147483647LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x254 = 18533838922LL;
	int32_t x255 = INT32_MIN;
	volatile int64_t t53 = -273333LL;

	t53 = ((x253/x254)+(x255-x256));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = 2;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = INT64_MAX;
	volatile int64_t t54 = 2LL;

	t54 = ((x257/x258)+(x259-x260));

	if (t54 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x262 = UINT32_MAX;
	volatile int32_t x263 = -643;
	volatile uint32_t t55 = 767175126U;

	t55 = ((x261/x262)+(x263-x264));

	if (t55 != 4294966527U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = -1;
	int64_t x266 = -1LL;
	int64_t x267 = 74192LL;
	int32_t x268 = -1;
	int64_t t56 = -1LL;

	t56 = ((x265/x266)+(x267-x268));

	if (t56 != 74194LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = -5;
	uint32_t x270 = 25926U;
	int8_t x271 = 1;
	uint32_t t57 = 273265964U;

	t57 = ((x269/x270)+(x271-x272));

	if (t57 != 165662U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x274 = -6363;
	int64_t x275 = INT64_MAX;
	uint64_t x276 = 3172LLU;
	volatile uint64_t t58 = 703LLU;

	t58 = ((x273/x274)+(x275-x276));

	if (t58 != 9223372036854772635LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x277 = 20643U;
	int16_t x279 = -1;
	volatile uint64_t t59 = 703274824958708LLU;

	t59 = ((x277/x278)+(x279-x280));

	if (t59 != 18446744073594221732LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = 307504;
	int32_t x282 = INT32_MAX;
	int8_t x283 = INT8_MIN;
	volatile int32_t t60 = 161;

	t60 = ((x281/x282)+(x283-x284));

	if (t60 != -155) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x285 = 4742U;
	int8_t x287 = 12;

	t61 = ((x285/x286)+(x287-x288));

	if (t61 != 18440034657499834670LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x289 = 2107275580987LLU;
	static volatile int64_t x290 = -1LL;
	uint16_t x291 = 0U;
	static volatile uint64_t t62 = 209139241LLU;

	t62 = ((x289/x290)+(x291-x292));

	if (t62 != 128LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x298 = 25U;
	static int8_t x299 = INT8_MIN;
	volatile uint16_t x300 = 292U;

	t63 = ((x297/x298)+(x299-x300));

	if (t63 != -85899765) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x301 = INT8_MIN;
	static int16_t x302 = -4712;
	volatile int32_t x303 = 24485;
	int16_t x304 = INT16_MIN;

	t64 = ((x301/x302)+(x303-x304));

	if (t64 != 57253) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x309 = UINT64_MAX;
	uint16_t x310 = 783U;
	int8_t x311 = INT8_MIN;
	static volatile int8_t x312 = INT8_MIN;
	static volatile uint64_t t65 = 37652438748520670LLU;

	t65 = ((x309/x310)+(x311-x312));

	if (t65 != 23559060119680142LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x313 = UINT16_MAX;
	static int32_t x315 = -1;
	uint64_t x316 = UINT64_MAX;
	uint64_t t66 = 6169LLU;

	t66 = ((x313/x314)+(x315-x316));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x317 = 53208LLU;
	int32_t x318 = -1;
	uint16_t x319 = 7U;

	t67 = ((x317/x318)+(x319-x320));

	if (t67 != 18446744068918965266LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x321 = 1;
	uint8_t x322 = 97U;
	uint32_t x324 = 55533685U;

	t68 = ((x321/x322)+(x323-x324));

	if (t68 != 4239433610U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x325 = 6;
	static volatile int64_t x326 = INT64_MIN;
	static int8_t x327 = -1;
	volatile int16_t x328 = INT16_MIN;
	volatile int64_t t69 = -131852616703LL;

	t69 = ((x325/x326)+(x327-x328));

	if (t69 != 32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x330 = INT16_MAX;
	uint8_t x331 = 1U;
	int64_t x332 = -4LL;
	volatile int64_t t70 = -65221734872860239LL;

	t70 = ((x329/x330)+(x331-x332));

	if (t70 != 4LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x334 = UINT64_MAX;
	int8_t x335 = 0;
	static int32_t x336 = -1;
	uint64_t t71 = 6108255946LLU;

	t71 = ((x333/x334)+(x335-x336));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x338 = -546016855852188LL;
	volatile int64_t t72 = 76332LL;

	t72 = ((x337/x338)+(x339-x340));

	if (t72 != 32993LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x342 = INT16_MAX;
	volatile int64_t x344 = INT64_MAX;
	volatile int64_t t73 = 191540LL;

	t73 = ((x341/x342)+(x343-x344));

	if (t73 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = -6;
	uint32_t x346 = 19U;
	int32_t x348 = INT32_MAX;
	uint32_t t74 = 44597U;

	t74 = ((x345/x346)+(x347-x348));

	if (t74 != 2373534558U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x350 = -20;
	int8_t x351 = INT8_MIN;
	volatile int16_t x352 = INT16_MIN;
	int32_t t75 = 18503;

	t75 = ((x349/x350)+(x351-x352));

	if (t75 != 31002) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x353 = UINT16_MAX;
	static volatile int32_t x354 = INT32_MIN;
	int64_t x355 = -1LL;
	int8_t x356 = INT8_MIN;
	volatile int64_t t76 = 730809LL;

	t76 = ((x353/x354)+(x355-x356));

	if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x358 = 2471U;
	static volatile uint64_t t77 = 54740109739LLU;

	t77 = ((x357/x358)+(x359-x360));

	if (t77 != 18446744073688456071LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MIN;
	static uint32_t x362 = 54U;
	int16_t x363 = 7745;
	static volatile uint32_t t78 = 3900U;

	t78 = ((x361/x362)+(x363-x364));

	if (t78 != 79478034U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x365 = INT8_MIN;
	uint16_t x366 = 864U;
	static volatile int64_t x367 = -1LL;

	t79 = ((x365/x366)+(x367-x368));

	if (t79 != -4LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x369 = -1LL;
	int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MIN;
	volatile int64_t t80 = 628936LL;

	t80 = ((x369/x370)+(x371-x372));

	if (t80 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x373 = 0LLU;
	volatile uint64_t x374 = 7665628476345642LLU;
	volatile int64_t x376 = -1LL;

	t81 = ((x373/x374)+(x375-x376));

	if (t81 != 65536LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x377 = 5U;
	volatile int32_t x379 = -117341364;
	uint64_t x380 = 6906201LLU;
	uint64_t t82 = 8782696051LLU;

	t82 = ((x377/x378)+(x379-x380));

	if (t82 != 18446744073585304051LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x381 = 0;
	volatile int64_t x382 = INT64_MIN;
	int64_t x384 = -20091643LL;
	int64_t t83 = 104484712LL;

	t83 = ((x381/x382)+(x383-x384));

	if (t83 != 20091678LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x385 = 3614;
	static int16_t x386 = INT16_MIN;
	int64_t x387 = -1LL;

	t84 = ((x385/x386)+(x387-x388));

	if (t84 != -8LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x389 = 2U;
	uint32_t x390 = UINT32_MAX;
	static volatile uint16_t x391 = 3207U;
	int32_t x392 = 1739;
	uint32_t t85 = 11978156U;

	t85 = ((x389/x390)+(x391-x392));

	if (t85 != 1468U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x394 = 159;
	uint16_t x395 = 0U;
	static volatile int32_t t86 = -2730324;

	t86 = ((x393/x394)+(x395-x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x397 = UINT32_MAX;
	static uint16_t x398 = 3U;
	volatile uint16_t x399 = 3U;
	int16_t x400 = 30;
	static volatile uint32_t t87 = 619783U;

	t87 = ((x397/x398)+(x399-x400));

	if (t87 != 1431655738U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = 0U;
	static int16_t x402 = INT16_MIN;
	static uint32_t x403 = 0U;
	uint32_t x404 = 7666U;
	uint32_t t88 = 165U;

	t88 = ((x401/x402)+(x403-x404));

	if (t88 != 4294959630U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x405 = 431899138LLU;
	int16_t x406 = -1;
	static int16_t x408 = INT16_MIN;
	static uint64_t t89 = 3861006LLU;

	t89 = ((x405/x406)+(x407-x408));

	if (t89 != 98303LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = INT8_MIN;
	int32_t x410 = 2382032;
	int8_t x411 = 1;
	uint16_t x412 = 6391U;
	int32_t t90 = -197847;

	t90 = ((x409/x410)+(x411-x412));

	if (t90 != -6390) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x421 = 0U;
	uint8_t x422 = UINT8_MAX;
	int8_t x424 = INT8_MIN;
	volatile uint64_t t91 = 44372576167873LLU;

	t91 = ((x421/x422)+(x423-x424));

	if (t91 != 125394439071941LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x429 = 19122062;
	static int8_t x430 = INT8_MAX;
	volatile uint16_t x431 = 88U;
	volatile int32_t x432 = 21578918;
	volatile int32_t t92 = -1571;

	t92 = ((x429/x430)+(x431-x432));

	if (t92 != -21428263) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = INT8_MAX;
	uint8_t x438 = UINT8_MAX;
	volatile uint16_t x439 = 391U;

	t93 = ((x437/x438)+(x439-x440));

	if (t93 != 392U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = -20LL;
	static int8_t x446 = INT8_MIN;
	int32_t x448 = -1;

	t94 = ((x445/x446)+(x447-x448));

	if (t94 != 36LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x450 = 1U;
	static uint16_t x451 = 72U;
	int64_t x452 = INT64_MAX;
	int64_t t95 = -64582LL;

	t95 = ((x449/x450)+(x451-x452));

	if (t95 != -9223372036854775733LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x453 = INT8_MAX;
	volatile uint8_t x455 = 28U;
	static int16_t x456 = INT16_MIN;
	uint64_t t96 = 4358610147230LLU;

	t96 = ((x453/x454)+(x455-x456));

	if (t96 != 32796LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x458 = INT64_MIN;
	static volatile int64_t x460 = INT64_MAX;
	volatile int64_t t97 = -1545764317472650LL;

	t97 = ((x457/x458)+(x459-x460));

	if (t97 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x461 = UINT32_MAX;
	uint64_t t98 = 61282695081647691LLU;

	t98 = ((x461/x462)+(x463-x464));

	if (t98 != 18446744073545854957LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x465 = UINT64_MAX;
	static int8_t x466 = INT8_MAX;
	int32_t x468 = -183293332;

	t99 = ((x465/x466)+(x467-x468));

	if (t99 != 145249953519588757LLU) { NG(); } else { ; }
	
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

