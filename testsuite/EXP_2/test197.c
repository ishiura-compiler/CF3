#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x16 = -1;
uint64_t t4 = 1269247479390LLU;
volatile int32_t x33 = 2308;
int16_t x35 = INT16_MAX;
static int32_t t5 = -242696089;
static volatile int8_t x37 = INT8_MIN;
int64_t x46 = INT64_MAX;
uint16_t x48 = 1190U;
uint64_t t7 = 3787LLU;
uint64_t x61 = 4263536662573902LLU;
int64_t x62 = INT64_MIN;
static volatile uint32_t t10 = 15U;
uint64_t x74 = 5831092416LLU;
int16_t x78 = INT16_MIN;
int32_t x80 = 66125766;
int8_t x85 = INT8_MIN;
int8_t x94 = 0;
int16_t x95 = INT16_MAX;
static int8_t x101 = -1;
int64_t x102 = -1LL;
uint16_t x108 = UINT16_MAX;
static uint64_t x120 = 69738LLU;
volatile int64_t t20 = 2438542774850LL;
static volatile int8_t x126 = INT8_MAX;
volatile int64_t t22 = 200563LL;
static uint16_t x174 = 0U;
int64_t x176 = -1LL;
uint64_t t28 = 9LLU;
int8_t x185 = INT8_MIN;
static int32_t t29 = 42483985;
volatile int64_t x197 = 5501152LL;
int8_t x209 = 7;
static volatile int32_t x223 = INT32_MIN;
uint64_t t35 = 2053219LLU;
int16_t x243 = INT16_MIN;
uint8_t x245 = UINT8_MAX;
int16_t x257 = -92;
int32_t x260 = -1;
volatile int32_t x287 = INT32_MIN;
int8_t x298 = -37;
int64_t x301 = INT64_MIN;
volatile uint64_t x302 = 13670434361700663LLU;
volatile int16_t x308 = INT16_MAX;
int8_t x311 = -4;
int16_t x330 = INT16_MIN;
uint16_t x331 = 991U;
int8_t x332 = INT8_MAX;
uint8_t x355 = 112U;
int8_t x366 = INT8_MIN;
uint8_t x370 = UINT8_MAX;
int32_t t59 = 1;
volatile int8_t x373 = -3;
int16_t x376 = INT16_MAX;
int64_t x402 = INT64_MAX;
int16_t x407 = INT16_MIN;
int32_t x409 = INT32_MIN;
int16_t x421 = 8307;
volatile int64_t t71 = -328614141781158843LL;
volatile int32_t t72 = -14705;
int8_t x452 = 0;
int8_t x463 = INT8_MIN;
volatile int16_t x467 = -1;
volatile int8_t x469 = INT8_MAX;
static volatile int64_t x471 = 838110960245LL;
static int16_t x474 = 26;
int64_t x484 = INT64_MAX;
uint16_t x489 = 15U;
int16_t x492 = -1399;
uint8_t x493 = UINT8_MAX;
int16_t x503 = -1461;
int64_t x513 = INT64_MIN;
uint64_t x515 = 1236LLU;
int8_t x519 = INT8_MIN;
uint32_t x534 = 21662751U;
int16_t x535 = 2;
static int32_t x545 = INT32_MIN;
int16_t x547 = INT16_MAX;
static int32_t t96 = 627513;
uint8_t x577 = 0U;
volatile int32_t x582 = -1;
int64_t x583 = -2LL;


void f0(void) {
	static uint8_t x1 = 5U;
	int64_t x2 = -1LL;
	volatile int32_t x3 = INT32_MIN;
	uint16_t x4 = UINT16_MAX;
	volatile int64_t t0 = -40644170LL;

	t0 = ((x1*(x2-x3))-x4);

	if (t0 != 10737352700LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MIN;
	volatile uint64_t x15 = 4LLU;
	uint64_t t1 = 136815393LLU;

	t1 = ((x13*(x14-x15))-x16);

	if (t1 != 283467841537LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x21 = 843U;
	int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MAX;
	volatile uint32_t t2 = 64803U;

	t2 = ((x21*(x22-x23))-x24);

	if (t2 != 2147558785U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = 1384044355344819LLU;
	static int16_t x26 = 6;
	static int8_t x27 = -1;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t3 = 9762226129752LLU;

	t3 = ((x25*(x26-x27))-x28);

	if (t3 != 9233060347342189541LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = UINT16_MAX;
	int32_t x30 = -1911;
	static uint32_t x31 = 10U;
	static uint64_t x32 = UINT64_MAX;

	t4 = ((x29*(x30-x31))-x32);

	if (t4 != 4169074562LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x34 = 53;
	int16_t x36 = -1;

	t5 = ((x33*(x34-x35))-x36);

	if (t5 != -75503911) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x38 = -1;
	int32_t x39 = 39;
	int16_t x40 = 1375;
	volatile int32_t t6 = 2671;

	t6 = ((x37*(x38-x39))-x40);

	if (t6 != 3745) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = UINT64_MAX;
	int16_t x47 = INT16_MAX;

	t7 = ((x45*(x46-x47))-x48);

	if (t7 != 9223372036854807386LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = -2807;
	int64_t x50 = -1LL;
	static int8_t x51 = 2;
	int32_t x52 = INT32_MAX;
	volatile int64_t t8 = -38502LL;

	t8 = ((x49*(x50-x51))-x52);

	if (t8 != -2147475226LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x63 = UINT64_MAX;
	static uint64_t x64 = UINT64_MAX;
	static uint64_t t9 = 1276377357LLU;

	t9 = ((x61*(x62-x63))-x64);

	if (t9 != 4263536662573903LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x69 = 10;
	int16_t x70 = 309;
	static uint32_t x71 = UINT32_MAX;
	int32_t x72 = INT32_MIN;

	t10 = ((x69*(x70-x71))-x72);

	if (t10 != 2147486748U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x73 = 1064731901;
	volatile int16_t x75 = -15882;
	uint64_t x76 = 31151508286026662LLU;
	uint64_t t11 = 48LLU;

	t11 = ((x73*(x74-x75))-x76);

	if (t11 != 6177415514780387836LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x77 = 133285691870LLU;
	int64_t x79 = INT64_MIN;
	volatile uint64_t t12 = 7343LLU;

	t12 = ((x77*(x78-x79))-x80);

	if (t12 != 18442376568092229690LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x86 = 0;
	int16_t x87 = -1;
	uint32_t x88 = 12258U;
	uint32_t t13 = 1075U;

	t13 = ((x85*(x86-x87))-x88);

	if (t13 != 4294954910U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x89 = UINT64_MAX;
	volatile int8_t x90 = INT8_MIN;
	int64_t x91 = 449765747LL;
	static int64_t x92 = -1LL;
	uint64_t t14 = 18LLU;

	t14 = ((x89*(x90-x91))-x92);

	if (t14 != 449765876LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x93 = 15LL;
	uint16_t x96 = 366U;
	int64_t t15 = -1916218098496954693LL;

	t15 = ((x93*(x94-x95))-x96);

	if (t15 != -491871LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x97 = 9LLU;
	int8_t x98 = INT8_MAX;
	int64_t x99 = 197LL;
	int8_t x100 = INT8_MAX;
	uint64_t t16 = 1498LLU;

	t16 = ((x97*(x98-x99))-x100);

	if (t16 != 18446744073709550859LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x103 = INT32_MIN;
	int8_t x104 = 0;
	volatile int64_t t17 = -2422254873461113LL;

	t17 = ((x101*(x102-x103))-x104);

	if (t17 != -2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x105 = 7U;
	static int64_t x106 = -1LL;
	volatile int32_t x107 = INT32_MIN;
	static volatile int64_t t18 = 4002044397388285702LL;

	t18 = ((x105*(x106-x107))-x108);

	if (t18 != 15032319994LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x117 = 25U;
	int64_t x118 = 9491LL;
	int16_t x119 = INT16_MIN;
	volatile uint64_t t19 = 721011030448265LLU;

	t19 = ((x117*(x118-x119))-x120);

	if (t19 != 986737LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x121 = 0;
	int8_t x122 = INT8_MIN;
	int64_t x123 = -843121416308LL;
	int16_t x124 = -39;

	t20 = ((x121*(x122-x123))-x124);

	if (t20 != 39LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x125 = 2U;
	static uint64_t x127 = UINT64_MAX;
	volatile int64_t x128 = INT64_MIN;
	uint64_t t21 = 1386LLU;

	t21 = ((x125*(x126-x127))-x128);

	if (t21 != 9223372036854776064LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x129 = -1;
	static int8_t x130 = INT8_MAX;
	volatile int64_t x131 = 110515495LL;
	uint16_t x132 = 10U;

	t22 = ((x129*(x130-x131))-x132);

	if (t22 != 110515358LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x137 = 1;
	int64_t x138 = INT64_MIN;
	volatile int64_t x139 = INT64_MIN;
	static uint32_t x140 = UINT32_MAX;
	volatile int64_t t23 = 5155929125815368LL;

	t23 = ((x137*(x138-x139))-x140);

	if (t23 != -4294967295LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x153 = INT8_MIN;
	int64_t x154 = 5305275LL;
	static uint32_t x155 = 136U;
	volatile int8_t x156 = INT8_MAX;
	static int64_t t24 = -444129307LL;

	t24 = ((x153*(x154-x155))-x156);

	if (t24 != -679057919LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x157 = -461LL;
	volatile int32_t x158 = INT32_MIN;
	uint64_t x159 = 529364169573LLU;
	int32_t x160 = 1317740;
	uint64_t t25 = 175572LLU;

	t25 = ((x157*(x158-x159))-x160);

	if (t25 != 245026870817141LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x161 = -32490420835464LL;
	int16_t x162 = -1;
	int64_t x163 = -1LL;
	uint64_t x164 = 200143074033200830LLU;
	uint64_t t26 = 6894737570391661LLU;

	t26 = ((x161*(x162-x163))-x164);

	if (t26 != 18246600999676350786LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x173 = 4U;
	static volatile int16_t x175 = -9;
	volatile int64_t t27 = 2740671476048629375LL;

	t27 = ((x173*(x174-x175))-x176);

	if (t27 != 37LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x177 = INT32_MAX;
	uint64_t x178 = 539843749607LLU;
	uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MAX;

	t28 = ((x177*(x178-x179))-x180);

	if (t28 != 15607491648350460057LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x186 = UINT16_MAX;
	uint8_t x187 = 0U;
	static volatile int8_t x188 = INT8_MIN;

	t29 = ((x185*(x186-x187))-x188);

	if (t29 != -8388352) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x189 = UINT64_MAX;
	int16_t x190 = INT16_MIN;
	static int8_t x191 = 0;
	volatile int16_t x192 = INT16_MAX;
	volatile uint64_t t30 = 15404762394LLU;

	t30 = ((x189*(x190-x191))-x192);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x198 = INT8_MIN;
	static volatile uint32_t x199 = 144522335U;
	static uint32_t x200 = UINT32_MAX;
	int64_t t31 = -1040647LL;

	t31 = ((x197*(x198-x199))-x200);

	if (t31 != 22832223598980321LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x210 = 21U;
	uint8_t x211 = 33U;
	static uint64_t x212 = 180168410474595985LLU;
	volatile uint64_t t32 = 1277804424LLU;

	t32 = ((x209*(x210-x211))-x212);

	if (t32 != 18266575663234955547LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x213 = 199783141U;
	int16_t x214 = 10;
	int64_t x215 = -106881LL;
	int16_t x216 = INT16_MAX;
	int64_t t33 = 450452780LL;

	t33 = ((x213*(x214-x215))-x216);

	if (t33 != 21355019691864LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x221 = INT64_MIN;
	uint64_t x222 = UINT64_MAX;
	volatile int8_t x224 = 31;
	uint64_t t34 = 140829181707638551LLU;

	t34 = ((x221*(x222-x223))-x224);

	if (t34 != 9223372036854775777LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x233 = 150LLU;
	uint32_t x234 = 22220934U;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = 1065353092812838084LLU;

	t35 = ((x233*(x234-x235))-x236);

	if (t35 != 17381390984229872832LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x237 = -1LL;
	int8_t x238 = 33;
	uint8_t x239 = 0U;
	uint8_t x240 = 12U;
	volatile int64_t t36 = 11395963701LL;

	t36 = ((x237*(x238-x239))-x240);

	if (t36 != -45LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x241 = INT8_MIN;
	uint16_t x242 = 2U;
	int8_t x244 = INT8_MIN;
	int32_t t37 = 511;

	t37 = ((x241*(x242-x243))-x244);

	if (t37 != -4194432) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	static uint16_t x248 = UINT16_MAX;
	int32_t t38 = -57166072;

	t38 = ((x245*(x246-x247))-x248);

	if (t38 != -8388735) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = -6854;
	int64_t x251 = -1LL;
	uint64_t x252 = 7340LLU;
	static uint64_t t39 = 27220190553LLU;

	t39 = ((x249*(x250-x251))-x252);

	if (t39 != 18446714640298671641LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x253 = UINT16_MAX;
	uint8_t x254 = UINT8_MAX;
	uint16_t x255 = 421U;
	int16_t x256 = -32;
	int32_t t40 = -80064505;

	t40 = ((x253*(x254-x255))-x256);

	if (t40 != -10878778) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x258 = 3303269845975LLU;
	volatile int32_t x259 = INT32_MIN;
	uint64_t t41 = 262434394740LLU;

	t41 = ((x257*(x258-x259))-x260);

	if (t41 != 18446439975315226301LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x261 = 10678;
	uint64_t x262 = 30970809LLU;
	uint8_t x263 = UINT8_MAX;
	volatile int32_t x264 = 4047;
	volatile uint64_t t42 = 32984442851821165LLU;

	t42 = ((x261*(x262-x263))-x264);

	if (t42 != 330703571565LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x269 = INT16_MAX;
	int32_t x270 = 23556597;
	uint32_t x271 = UINT32_MAX;
	uint16_t x272 = 365U;
	volatile uint32_t t43 = 1U;

	t43 = ((x269*(x270-x271))-x272);

	if (t43 != 3079900317U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x273 = -1LL;
	int16_t x274 = -8154;
	int32_t x275 = INT32_MIN;
	int8_t x276 = -1;
	volatile int64_t t44 = -22513LL;

	t44 = ((x273*(x274-x275))-x276);

	if (t44 != -2147475493LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x285 = 27164418337490LLU;
	static int64_t x286 = -1LL;
	volatile int64_t x288 = INT64_MIN;
	volatile uint64_t t45 = 1796677LLU;

	t45 = ((x285*(x286-x287))-x288);

	if (t45 != 15762770993954592046LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x293 = -1;
	static volatile int32_t x294 = 51177531;
	int8_t x295 = INT8_MAX;
	int64_t x296 = INT64_MIN;
	volatile int64_t t46 = 156140LL;

	t46 = ((x293*(x294-x295))-x296);

	if (t46 != 9223372036803598404LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x297 = 10;
	int16_t x299 = INT16_MIN;
	static uint8_t x300 = 100U;
	volatile int32_t t47 = 902;

	t47 = ((x297*(x298-x299))-x300);

	if (t47 != 327210) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x303 = INT32_MAX;
	int16_t x304 = INT16_MAX;
	uint64_t t48 = 628099279335LLU;

	t48 = ((x301*(x302-x303))-x304);

	if (t48 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x305 = 77U;
	uint32_t x306 = 860883U;
	int8_t x307 = 1;
	static volatile uint32_t t49 = 161U;

	t49 = ((x305*(x306-x307))-x308);

	if (t49 != 66255147U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x309 = 223U;
	uint8_t x310 = 20U;
	int16_t x312 = -1;
	uint32_t t50 = 151489584U;

	t50 = ((x309*(x310-x311))-x312);

	if (t50 != 5353U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x313 = 22375680870665717LLU;
	int32_t x314 = INT32_MIN;
	int16_t x315 = -1;
	uint16_t x316 = 435U;
	volatile uint64_t t51 = 26LLU;

	t51 = ((x313*(x314-x315))-x316);

	if (t51 != 16815270671585594434LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x325 = INT32_MIN;
	volatile int32_t x326 = 13;
	uint32_t x327 = 488760U;
	int32_t x328 = 9570500;
	volatile uint32_t t52 = 879371U;

	t52 = ((x325*(x326-x327))-x328);

	if (t52 != 2137913148U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x329 = 4086U;
	uint32_t t53 = 1U;

	t53 = ((x329*(x330-x331))-x332);

	if (t53 != 4157027895U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x333 = 1U;
	uint8_t x334 = UINT8_MAX;
	int32_t x335 = -1;
	int64_t x336 = 105221050727511LL;
	volatile int64_t t54 = -128689LL;

	t54 = ((x333*(x334-x335))-x336);

	if (t54 != -105221050727255LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x341 = -1LL;
	uint64_t x342 = 17631130271102LLU;
	int8_t x343 = -1;
	uint32_t x344 = 5U;
	volatile uint64_t t55 = 108519553864LLU;

	t55 = ((x341*(x342-x343))-x344);

	if (t55 != 18446726442579280508LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x345 = 14161LLU;
	int8_t x346 = 1;
	int8_t x347 = INT8_MAX;
	int8_t x348 = INT8_MAX;
	static uint64_t t56 = 648519437457059LLU;

	t56 = ((x345*(x346-x347))-x348);

	if (t56 != 18446744073707767203LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x353 = 18U;
	int64_t x354 = -12LL;
	int64_t x356 = INT64_MIN;
	static int64_t t57 = -58955LL;

	t57 = ((x353*(x354-x355))-x356);

	if (t57 != 9223372036854773576LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x365 = UINT32_MAX;
	static uint32_t x367 = 118444536U;
	uint64_t x368 = 879LLU;
	static uint64_t t58 = 248250279LLU;

	t58 = ((x365*(x366-x367))-x368);

	if (t58 != 118443785LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x369 = -1;
	static volatile int8_t x371 = INT8_MAX;
	int32_t x372 = -1;

	t59 = ((x369*(x370-x371))-x372);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x374 = 5U;
	int32_t x375 = -93;
	static volatile int32_t t60 = -18907;

	t60 = ((x373*(x374-x375))-x376);

	if (t60 != -33061) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	int64_t x380 = -260864LL;
	int64_t t61 = 0LL;

	t61 = ((x377*(x378-x379))-x380);

	if (t61 != 260864LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x381 = 0U;
	int8_t x382 = -25;
	static uint64_t x383 = UINT64_MAX;
	int8_t x384 = -1;
	static uint64_t t62 = 1140LLU;

	t62 = ((x381*(x382-x383))-x384);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x385 = INT16_MIN;
	volatile int64_t x386 = 250435917532346LL;
	int16_t x387 = INT16_MIN;
	int8_t x388 = -53;
	int64_t t63 = 815LL;

	t63 = ((x385*(x386-x387))-x388);

	if (t63 != -8206284146773655499LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x393 = -1;
	static uint32_t x394 = 50U;
	uint64_t x395 = 214LLU;
	int64_t x396 = INT64_MAX;
	volatile uint64_t t64 = 2237586672LLU;

	t64 = ((x393*(x394-x395))-x396);

	if (t64 != 9223372036854775973LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x401 = 7416LLU;
	uint32_t x403 = 49U;
	volatile uint16_t x404 = 10282U;
	uint64_t t65 = 7295342LLU;

	t65 = ((x401*(x402-x403))-x404);

	if (t65 != 18446744073709170534LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x405 = 55521U;
	int64_t x406 = -1LL;
	volatile int64_t x408 = 14LL;
	int64_t t66 = 30LL;

	t66 = ((x405*(x406-x407))-x408);

	if (t66 != 1819256593LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x410 = 8U;
	int8_t x411 = INT8_MIN;
	uint32_t x412 = 15U;
	uint32_t t67 = 3574454U;

	t67 = ((x409*(x410-x411))-x412);

	if (t67 != 4294967281U) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x413 = INT8_MAX;
	int8_t x414 = INT8_MAX;
	volatile int64_t x415 = -24LL;
	int16_t x416 = INT16_MAX;
	volatile int64_t t68 = -529302LL;

	t68 = ((x413*(x414-x415))-x416);

	if (t68 != -13590LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x417 = 4269U;
	static uint64_t x418 = 188704650LLU;
	uint32_t x419 = UINT32_MAX;
	int64_t x420 = 27028878LL;
	volatile uint64_t t69 = 8376825101262LLU;

	t69 = ((x417*(x418-x419))-x420);

	if (t69 != 18446726544047291233LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x422 = -1;
	int64_t x423 = -127639LL;
	uint64_t x424 = 638684395029198618LLU;
	uint64_t t70 = 1777784LLU;

	t70 = ((x421*(x422-x423))-x424);

	if (t70 != 17808059679740641864LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x425 = INT8_MAX;
	int8_t x426 = INT8_MIN;
	static int64_t x427 = 18582LL;
	int32_t x428 = -1;

	t71 = ((x425*(x426-x427))-x428);

	if (t71 != -2376169LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x429 = UINT8_MAX;
	static volatile int8_t x430 = INT8_MIN;
	int8_t x431 = -37;
	uint8_t x432 = UINT8_MAX;

	t72 = ((x429*(x430-x431))-x432);

	if (t72 != -23460) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x433 = 1U;
	uint16_t x434 = 6U;
	int16_t x435 = INT16_MIN;
	int16_t x436 = INT16_MAX;
	volatile int32_t t73 = -948;

	t73 = ((x433*(x434-x435))-x436);

	if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x437 = -3;
	static int16_t x438 = 0;
	volatile uint8_t x439 = UINT8_MAX;
	uint8_t x440 = UINT8_MAX;
	static volatile int32_t t74 = -245436658;

	t74 = ((x437*(x438-x439))-x440);

	if (t74 != 510) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x449 = -1;
	int16_t x450 = INT16_MAX;
	int16_t x451 = 420;
	static int32_t t75 = 0;

	t75 = ((x449*(x450-x451))-x452);

	if (t75 != -32347) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x457 = 853600682LL;
	int64_t x458 = -825LL;
	int32_t x459 = 8831317;
	volatile int32_t x460 = -1;
	int64_t t76 = -195649LL;

	t76 = ((x457*(x458-x459))-x460);

	if (t76 != -7539122434720843LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x461 = UINT32_MAX;
	static int32_t x462 = -1829403;
	static int16_t x464 = INT16_MAX;
	uint32_t t77 = 0U;

	t77 = ((x461*(x462-x463))-x464);

	if (t77 != 1796508U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x465 = 13;
	static uint32_t x466 = 844575926U;
	int8_t x468 = INT8_MAX;
	volatile uint32_t t78 = 27736U;

	t78 = ((x465*(x466-x467))-x468);

	if (t78 != 2389552332U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x470 = 10271U;
	static volatile uint16_t x472 = UINT16_MAX;
	volatile int64_t t79 = -54874LL;

	t79 = ((x469*(x470-x471))-x472);

	if (t79 != -106440090712233LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x473 = 372U;
	int16_t x475 = INT16_MIN;
	uint64_t x476 = UINT64_MAX;
	volatile uint64_t t80 = 2522LLU;

	t80 = ((x473*(x474-x475))-x476);

	if (t80 != 12199369LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x481 = 35U;
	int16_t x482 = INT16_MAX;
	static int8_t x483 = INT8_MAX;
	static int64_t t81 = -10655265582638854LL;

	t81 = ((x481*(x482-x483))-x484);

	if (t81 != -9223372036853633407LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x485 = INT8_MIN;
	int32_t x486 = -1;
	static int16_t x487 = INT16_MIN;
	static int8_t x488 = INT8_MIN;
	volatile int32_t t82 = -257;

	t82 = ((x485*(x486-x487))-x488);

	if (t82 != -4194048) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x490 = UINT8_MAX;
	volatile int16_t x491 = -111;
	volatile int32_t t83 = -305947;

	t83 = ((x489*(x490-x491))-x492);

	if (t83 != 6889) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x494 = INT8_MIN;
	static uint64_t x495 = 63568361333726LLU;
	int16_t x496 = -780;
	uint64_t t84 = 7644395334407LLU;

	t84 = ((x493*(x494-x495))-x496);

	if (t84 != 18430534141569419626LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x497 = -1;
	static int64_t x498 = -1LL;
	int32_t x499 = INT32_MIN;
	int16_t x500 = INT16_MIN;
	int64_t t85 = 1503LL;

	t85 = ((x497*(x498-x499))-x500);

	if (t85 != -2147450879LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x501 = INT16_MIN;
	uint8_t x502 = 0U;
	int8_t x504 = INT8_MIN;
	int32_t t86 = -986664553;

	t86 = ((x501*(x502-x503))-x504);

	if (t86 != -47873920) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x509 = INT32_MAX;
	uint64_t x510 = 7431339360833269318LLU;
	int32_t x511 = 15;
	static int64_t x512 = INT64_MAX;
	uint64_t t87 = 39153971566975LLU;

	t87 = ((x509*(x510-x511))-x512);

	if (t87 != 7262840914620944842LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x514 = -237;
	int32_t x516 = INT32_MIN;
	volatile uint64_t t88 = 25862868467LLU;

	t88 = ((x513*(x514-x515))-x516);

	if (t88 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x517 = UINT64_MAX;
	static uint8_t x518 = UINT8_MAX;
	volatile uint8_t x520 = 18U;
	volatile uint64_t t89 = 29047735LLU;

	t89 = ((x517*(x518-x519))-x520);

	if (t89 != 18446744073709551215LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x521 = INT8_MIN;
	int64_t x522 = -540460585477LL;
	int32_t x523 = -1;
	int32_t x524 = 1567;
	volatile int64_t t90 = -347103270LL;

	t90 = ((x521*(x522-x523))-x524);

	if (t90 != 69178954939361LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x529 = 58U;
	uint64_t x530 = 16836185807563LLU;
	volatile int8_t x531 = INT8_MIN;
	uint8_t x532 = 52U;
	static uint64_t t91 = 582442638493851LLU;

	t91 = ((x529*(x530-x531))-x532);

	if (t91 != 976498776846026LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x533 = 111LL;
	volatile int8_t x536 = -1;
	int64_t t92 = 15696132196301359LL;

	t92 = ((x533*(x534-x535))-x536);

	if (t92 != 2404565140LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x546 = -1LL;
	static int8_t x548 = INT8_MIN;
	static volatile int64_t t93 = -29LL;

	t93 = ((x545*(x546-x547))-x548);

	if (t93 != 70368744177792LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x549 = INT8_MIN;
	int8_t x550 = INT8_MIN;
	int16_t x551 = -1;
	int32_t x552 = INT32_MAX;
	volatile int32_t t94 = -7506434;

	t94 = ((x549*(x550-x551))-x552);

	if (t94 != -2147467391) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x557 = 11LL;
	uint64_t x558 = 423216250964741LLU;
	uint16_t x559 = 3053U;
	int64_t x560 = -1LL;
	volatile uint64_t t95 = 721008265LLU;

	t95 = ((x557*(x558-x559))-x560);

	if (t95 != 4655378760578569LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x561 = -14;
	volatile int8_t x562 = INT8_MIN;
	int8_t x563 = INT8_MAX;
	uint16_t x564 = 241U;

	t96 = ((x561*(x562-x563))-x564);

	if (t96 != 3329) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x565 = -248;
	int16_t x566 = INT16_MIN;
	volatile int16_t x567 = -293;
	int16_t x568 = INT16_MIN;
	volatile int32_t t97 = -23365;

	t97 = ((x565*(x566-x567))-x568);

	if (t97 != 8086568) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x578 = 311088205036LLU;
	volatile uint32_t x579 = UINT32_MAX;
	int32_t x580 = 6375;
	volatile uint64_t t98 = 3335582607536481LLU;

	t98 = ((x577*(x578-x579))-x580);

	if (t98 != 18446744073709545241LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x581 = -5;
	int64_t x584 = INT64_MIN;
	volatile int64_t t99 = -1171435259530LL;

	t99 = ((x581*(x582-x583))-x584);

	if (t99 != 9223372036854775803LL) { NG(); } else { ; }
	
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

