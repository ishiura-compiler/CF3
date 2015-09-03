#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = INT64_MIN;
int16_t x3 = -1;
int64_t x5 = -1LL;
int32_t x8 = INT32_MAX;
int64_t x24 = -56098LL;
volatile int8_t x28 = -12;
int32_t x36 = INT32_MAX;
int8_t x40 = INT8_MIN;
static int16_t x42 = -6039;
uint64_t t8 = 207177427073LLU;
uint64_t x53 = 1542406196LLU;
int32_t x55 = -598993;
int32_t x62 = -1;
int32_t x66 = INT32_MIN;
int8_t x67 = INT8_MIN;
int32_t x71 = 26034400;
static int8_t x87 = INT8_MIN;
int64_t x88 = INT64_MAX;
volatile int64_t t17 = -1LL;
int32_t x103 = INT32_MAX;
int64_t x111 = 72LL;
int32_t x112 = -1;
int64_t x113 = -1LL;
uint8_t x119 = 28U;
volatile uint32_t t26 = 22U;
volatile uint64_t x137 = 132561535324448LLU;
volatile int8_t x141 = 0;
volatile int32_t x150 = INT32_MIN;
static int64_t t29 = -45LL;
uint64_t x161 = UINT64_MAX;
int32_t x165 = INT32_MAX;
int8_t x166 = INT8_MIN;
uint32_t t32 = 92110U;
int16_t x173 = 120;
int8_t x175 = -1;
volatile int32_t x177 = -3;
uint16_t x203 = 3U;
uint8_t x213 = 83U;
uint64_t x219 = 420810LLU;
int8_t x220 = 31;
uint16_t x236 = 1U;
static int16_t x247 = INT16_MAX;
uint16_t x248 = UINT16_MAX;
int8_t x250 = -1;
int8_t x251 = INT8_MIN;
int8_t x253 = -31;
int64_t x254 = -1LL;
volatile int64_t x258 = INT64_MAX;
volatile int64_t t50 = 152744066349336LL;
int8_t x281 = 4;
static int8_t x289 = INT8_MIN;
int16_t x290 = -1;
int8_t x301 = INT8_MIN;
uint32_t x306 = 726857176U;
volatile int16_t x307 = INT16_MIN;
volatile int8_t x309 = INT8_MAX;
volatile uint16_t x310 = 6U;
int16_t x320 = INT16_MAX;
volatile int64_t x329 = INT64_MIN;
int8_t x330 = INT8_MAX;
uint16_t x337 = 11913U;
int8_t x345 = 13;
volatile int64_t x348 = INT64_MIN;
uint32_t x358 = 464929U;
int64_t x364 = INT64_MAX;
static int32_t t69 = 0;
int8_t x387 = INT8_MIN;
uint64_t x388 = 927623931004019626LLU;
static volatile int16_t x389 = -1;
int32_t t72 = -4;
static int16_t x407 = -1;
uint64_t x412 = UINT64_MAX;
int64_t x414 = INT64_MIN;
int8_t x415 = -1;
int64_t x416 = -1LL;
int8_t x435 = -5;
int64_t x449 = 892706131LL;
int32_t x450 = INT32_MIN;
static int64_t x453 = 11132054132LL;
static uint8_t x455 = 8U;
int16_t x457 = 7;
volatile int64_t x463 = -465992258LL;
int8_t x467 = INT8_MAX;
volatile uint64_t x468 = 174045004574459LLU;
int16_t x469 = -1;
uint8_t x474 = UINT8_MAX;
static volatile uint32_t x479 = 11333U;
static int64_t x483 = INT64_MIN;
uint32_t x495 = 357314U;
static volatile int64_t x508 = -222041032911380942LL;
static int64_t x509 = INT64_MIN;
uint32_t x511 = 1343891U;
int64_t x514 = INT64_MIN;
int64_t x518 = 121082207750LL;
int64_t t97 = 5290790LL;
int16_t x521 = -5025;


void f0(void) {
	uint64_t x1 = 13LLU;
	volatile int16_t x4 = INT16_MIN;
	volatile uint64_t t0 = 644809533699LLU;

	t0 = (x1%((x2-x3)&x4));

	if (t0 != 13LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	volatile int32_t x7 = INT32_MIN;
	static volatile uint64_t t1 = 210616872346865LLU;

	t1 = (x5%((x6-x7)&x8));

	if (t1 != 3LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MIN;
	int32_t x10 = INT32_MAX;
	uint8_t x11 = 6U;
	static volatile uint32_t x12 = 1682887885U;
	volatile int64_t t2 = -1LL;

	t2 = (x9%((x10-x11)&x12));

	if (t2 != -117611249LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int8_t x14 = INT8_MAX;
	uint64_t x15 = 8030178LLU;
	static volatile int64_t x16 = INT64_MAX;
	volatile uint64_t t3 = 305LLU;

	t3 = (x13%((x14-x15)&x16));

	if (t3 != 16060101LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -1;
	static int8_t x22 = 5;
	uint32_t x23 = 78623899U;
	int64_t t4 = -120329820147814LL;

	t4 = (x21%((x22-x23)&x24));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	uint64_t x26 = 389018549382986LLU;
	int8_t x27 = -1;
	volatile uint64_t t5 = 89644575LLU;

	t5 = (x25%((x26-x27)&x28));

	if (t5 != 262499067595647LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -11;
	volatile int16_t x34 = INT16_MAX;
	int64_t x35 = 83072LL;
	int64_t t6 = 185261LL;

	t6 = (x33%((x34-x35)&x36));

	if (t6 != -11LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 6U;
	static volatile uint64_t x38 = 784353708LLU;
	uint16_t x39 = 0U;
	uint64_t t7 = 39LLU;

	t7 = (x37%((x38-x39)&x40));

	if (t7 != 6LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	static volatile uint64_t x43 = 15646242393LLU;
	int16_t x44 = INT16_MIN;

	t8 = (x41%((x42-x43)&x44));

	if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = UINT8_MAX;
	uint16_t x46 = 1936U;
	int32_t x47 = INT32_MAX;
	volatile uint32_t x48 = 77272U;
	volatile uint32_t t9 = 301459414U;

	t9 = (x45%((x46-x47)&x48));

	if (t9 != 255U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	volatile uint32_t x50 = 59U;
	static int8_t x51 = -3;
	uint64_t x52 = UINT64_MAX;
	uint64_t t10 = 76671548230977502LLU;

	t10 = (x49%((x50-x51)&x52));

	if (t10 != 8LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x54 = UINT32_MAX;
	static int32_t x56 = -214952014;
	static uint64_t t11 = 1517624603606383812LLU;

	t11 = (x53%((x54-x55)&x56));

	if (t11 != 788LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x61 = 4640526U;
	uint8_t x63 = UINT8_MAX;
	static int16_t x64 = INT16_MIN;
	volatile uint32_t t12 = 1U;

	t12 = (x61%((x62-x63)&x64));

	if (t12 != 4640526U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = -1;
	uint16_t x68 = UINT16_MAX;
	static volatile int32_t t13 = -873638340;

	t13 = (x65%((x66-x67)&x68));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = 838U;
	static int32_t x70 = INT32_MAX;
	int8_t x72 = 7;
	int32_t t14 = -14;

	t14 = (x69%((x70-x71)&x72));

	if (t14 != 5) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MAX;
	volatile int8_t x78 = -1;
	volatile uint8_t x79 = 93U;
	static uint64_t x80 = UINT64_MAX;
	volatile uint64_t t15 = 213LLU;

	t15 = (x77%((x78-x79)&x80));

	if (t15 != 127LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = 7838077LLU;
	static volatile uint64_t x82 = UINT64_MAX;
	int64_t x83 = -3606141106589667240LL;
	int32_t x84 = 241287;
	volatile uint64_t t16 = 949LLU;

	t16 = (x81%((x82-x83)&x84));

	if (t16 != 20199LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x85 = 38U;
	uint32_t x86 = 474948058U;

	t17 = (x85%((x86-x87)&x88));

	if (t17 != 38LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x93 = INT64_MIN;
	int32_t x94 = -1480;
	static int64_t x95 = INT64_MIN;
	uint8_t x96 = UINT8_MAX;
	static int64_t t18 = -22462581879122LL;

	t18 = (x93%((x94-x95)&x96));

	if (t18 != -8LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = -1;
	int32_t x98 = -1;
	static volatile int8_t x99 = 1;
	uint8_t x100 = 7U;
	volatile int32_t t19 = 30;

	t19 = (x97%((x98-x99)&x100));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	uint32_t x102 = 2757955U;
	int64_t x104 = 68LL;
	static int64_t t20 = 389963725833858522LL;

	t20 = (x101%((x102-x103)&x104));

	if (t20 != -60LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x105 = UINT32_MAX;
	int16_t x106 = -1;
	static int32_t x107 = INT32_MAX;
	int16_t x108 = -4238;
	static uint32_t t21 = 63U;

	t21 = (x105%((x106-x107)&x108));

	if (t21 != 2147483647U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x109 = INT32_MIN;
	int64_t x110 = -1LL;
	volatile int64_t t22 = -78969533826LL;

	t22 = (x109%((x110-x111)&x112));

	if (t22 != -16LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x114 = -2;
	int16_t x115 = -143;
	uint64_t x116 = 8480735911018218559LLU;
	uint64_t t23 = 18621603LLU;

	t23 = (x113%((x114-x115)&x116));

	if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MIN;
	volatile uint32_t x118 = 1370732748U;
	int64_t x120 = INT64_MAX;
	static volatile int64_t t24 = 83766126527LL;

	t24 = (x117%((x118-x119)&x120));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x125 = 332U;
	int16_t x126 = INT16_MAX;
	static int8_t x127 = -1;
	volatile int8_t x128 = INT8_MIN;
	int32_t t25 = 565;

	t25 = (x125%((x126-x127)&x128));

	if (t25 != 332) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x129 = 0U;
	static int16_t x130 = INT16_MIN;
	static int32_t x131 = 6;
	int32_t x132 = -1;

	t26 = (x129%((x130-x131)&x132));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x138 = INT8_MIN;
	uint32_t x139 = 2021U;
	uint64_t x140 = 4379647092093LLU;
	volatile uint64_t t27 = 15179LLU;

	t27 = (x137%((x138-x139)&x140));

	if (t27 != 1820468441LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x142 = 43U;
	uint32_t x143 = 151969U;
	volatile int16_t x144 = INT16_MIN;
	volatile uint32_t t28 = 22U;

	t28 = (x141%((x142-x143)&x144));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = INT8_MIN;
	int64_t x151 = 11268607LL;
	int64_t x152 = -986993622485LL;

	t29 = (x149%((x150-x151)&x152));

	if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = -500;
	static int8_t x154 = -1;
	static uint64_t x155 = 231055363162810717LLU;
	int32_t x156 = -1;
	volatile uint64_t t30 = 1910939320430LLU;

	t30 = (x153%((x154-x155)&x156));

	if (t30 != 231055363162810218LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x162 = -1;
	volatile uint8_t x163 = 98U;
	int16_t x164 = 431;
	volatile uint64_t t31 = 109391870100LLU;

	t31 = (x161%((x162-x163)&x164));

	if (t31 != 98LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x167 = INT8_MAX;
	uint32_t x168 = 1680U;

	t32 = (x165%((x166-x167)&x168));

	if (t32 != 511U) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x169 = INT64_MAX;
	int32_t x170 = INT32_MAX;
	uint16_t x171 = 42U;
	int64_t x172 = -424978641813LL;
	static int64_t t33 = 32LL;

	t33 = (x169%((x170-x171)&x172));

	if (t33 != 164230036LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x174 = -15030213LL;
	uint16_t x176 = 472U;
	volatile int64_t t34 = 2LL;

	t34 = (x173%((x174-x175)&x176));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x178 = UINT32_MAX;
	uint32_t x179 = 91629U;
	int16_t x180 = -1;
	uint32_t t35 = 3U;

	t35 = (x177%((x178-x179)&x180));

	if (t35 != 91627U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x189 = 888407013LLU;
	static volatile int16_t x190 = 1;
	int8_t x191 = INT8_MIN;
	volatile int32_t x192 = INT32_MAX;
	volatile uint64_t t36 = 677364986028390803LLU;

	t36 = (x189%((x190-x191)&x192));

	if (t36 != 9LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x193 = 30466571419432310LLU;
	volatile int8_t x194 = -42;
	static uint16_t x195 = 943U;
	int16_t x196 = -1;
	volatile uint64_t t37 = 1864729320LLU;

	t37 = (x193%((x194-x195)&x196));

	if (t37 != 30466571419432310LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x197 = 36;
	volatile int16_t x198 = INT16_MIN;
	int8_t x199 = -1;
	static volatile int64_t x200 = INT64_MIN;
	int64_t t38 = -104644LL;

	t38 = (x197%((x198-x199)&x200));

	if (t38 != 36LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x201 = 22854U;
	int8_t x202 = INT8_MAX;
	volatile int8_t x204 = -7;
	uint32_t t39 = 95U;

	t39 = (x201%((x202-x203)&x204));

	if (t39 != 54U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x214 = INT8_MIN;
	int32_t x215 = INT32_MIN;
	int64_t x216 = -1LL;
	volatile int64_t t40 = 0LL;

	t40 = (x213%((x214-x215)&x216));

	if (t40 != 83LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = 11;
	int64_t x218 = INT64_MIN;
	volatile uint64_t t41 = 3597873LLU;

	t41 = (x217%((x218-x219)&x220));

	if (t41 != 11LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x225 = -12056;
	uint64_t x226 = UINT64_MAX;
	volatile uint32_t x227 = 1994145U;
	int16_t x228 = INT16_MAX;
	static uint64_t t42 = 2070032935LLU;

	t42 = (x225%((x226-x227)&x228));

	if (t42 != 1466LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x229 = UINT32_MAX;
	int8_t x230 = 35;
	volatile uint8_t x231 = 8U;
	volatile int16_t x232 = -983;
	volatile uint32_t t43 = 420621U;

	t43 = (x229%((x230-x231)&x232));

	if (t43 != 3U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x233 = INT64_MIN;
	static int8_t x234 = INT8_MAX;
	uint64_t x235 = 1519698882LLU;
	uint64_t t44 = 775147159716LLU;

	t44 = (x233%((x234-x235)&x236));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x241 = INT8_MIN;
	volatile int16_t x242 = INT16_MIN;
	int16_t x243 = 2;
	volatile int32_t x244 = 8019;
	int32_t t45 = 802;

	t45 = (x241%((x242-x243)&x244));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x245 = INT32_MIN;
	int16_t x246 = -1;
	volatile int32_t t46 = -11;

	t46 = (x245%((x246-x247)&x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x249 = -2;
	uint64_t x252 = 34283743757366979LLU;
	uint64_t t47 = 12565656LLU;

	t47 = (x249%((x250-x251)&x252));

	if (t47 != 15LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x255 = 16364062U;
	uint16_t x256 = 94U;
	int64_t t48 = -1023LL;

	t48 = (x253%((x254-x255)&x256));

	if (t48 != -31LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x257 = 3374;
	int16_t x259 = INT16_MAX;
	static uint64_t x260 = 413320611588810LLU;
	volatile uint64_t t49 = 54618959LLU;

	t49 = (x257%((x258-x259)&x260));

	if (t49 != 3374LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x265 = -1;
	uint32_t x266 = 96517613U;
	int32_t x267 = 239;
	volatile int64_t x268 = -1LL;

	t50 = (x265%((x266-x267)&x268));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x273 = -1;
	uint16_t x274 = UINT16_MAX;
	int16_t x275 = INT16_MIN;
	int32_t x276 = -1;
	volatile int32_t t51 = 1640919;

	t51 = (x273%((x274-x275)&x276));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x282 = 12680631161LLU;
	int8_t x283 = -1;
	static volatile int64_t x284 = -6957508590951LL;
	uint64_t t52 = 476341577LLU;

	t52 = (x281%((x282-x283)&x284));

	if (t52 != 4LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x285 = 43195522754674LLU;
	uint16_t x286 = UINT16_MAX;
	static uint16_t x287 = 17798U;
	uint16_t x288 = 13U;
	uint64_t t53 = 84815LLU;

	t53 = (x285%((x286-x287)&x288));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x291 = 5U;
	int64_t x292 = -1LL;
	volatile int64_t t54 = 1168502LL;

	t54 = (x289%((x290-x291)&x292));

	if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x302 = 2881LLU;
	uint64_t x303 = 2LLU;
	volatile int8_t x304 = 11;
	volatile uint64_t t55 = 2853273938LLU;

	t55 = (x301%((x302-x303)&x304));

	if (t55 != 9LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x305 = 9U;
	int16_t x308 = INT16_MAX;
	volatile uint32_t t56 = 13603U;

	t56 = (x305%((x306-x307)&x308));

	if (t56 != 9U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x311 = -11;
	int16_t x312 = -1;
	int32_t t57 = 237926049;

	t57 = (x309%((x310-x311)&x312));

	if (t57 != 8) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x317 = 250U;
	volatile int8_t x318 = INT8_MAX;
	static uint16_t x319 = 1568U;
	volatile uint32_t t58 = 27551U;

	t58 = (x317%((x318-x319)&x320));

	if (t58 != 250U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x325 = -1;
	uint16_t x326 = UINT16_MAX;
	int16_t x327 = INT16_MAX;
	int8_t x328 = INT8_MIN;
	int32_t t59 = 888218732;

	t59 = (x325%((x326-x327)&x328));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x331 = -225;
	int8_t x332 = -13;
	int64_t t60 = -901179LL;

	t60 = (x329%((x330-x331)&x332));

	if (t60 != -96LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x333 = INT16_MIN;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = INT16_MIN;
	volatile uint16_t x336 = 12584U;
	static volatile uint32_t t61 = 2U;

	t61 = (x333%((x334-x335)&x336));

	if (t61 != 2744U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x338 = UINT8_MAX;
	uint32_t x339 = 632932570U;
	int16_t x340 = INT16_MAX;
	uint32_t t62 = 58188283U;

	t62 = (x337%((x338-x339)&x340));

	if (t62 != 11913U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x346 = 0U;
	static uint8_t x347 = 1U;
	int64_t t63 = -150965472LL;

	t63 = (x345%((x346-x347)&x348));

	if (t63 != 13LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x353 = -8091;
	int8_t x354 = 0;
	uint16_t x355 = UINT16_MAX;
	volatile int8_t x356 = -1;
	int32_t t64 = -4668995;

	t64 = (x353%((x354-x355)&x356));

	if (t64 != -8091) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x357 = 2;
	volatile int16_t x359 = INT16_MIN;
	uint64_t x360 = 20535844059351LLU;
	volatile uint64_t t65 = 311105662LLU;

	t65 = (x357%((x358-x359)&x360));

	if (t65 != 2LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x361 = INT16_MIN;
	volatile int64_t x362 = INT64_MAX;
	int8_t x363 = INT8_MAX;
	int64_t t66 = -9077LL;

	t66 = (x361%((x362-x363)&x364));

	if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x369 = 1U;
	uint8_t x370 = 113U;
	int8_t x371 = INT8_MIN;
	int16_t x372 = -610;
	volatile int32_t t67 = 28;

	t67 = (x369%((x370-x371)&x372));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x373 = INT8_MAX;
	volatile int64_t x374 = INT64_MIN;
	static int32_t x375 = -1;
	int64_t x376 = INT64_MAX;
	int64_t t68 = 234742893LL;

	t68 = (x373%((x374-x375)&x376));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x377 = UINT8_MAX;
	uint8_t x378 = 0U;
	static uint16_t x379 = 5U;
	int32_t x380 = -1;

	t69 = (x377%((x378-x379)&x380));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x381 = 3089062LL;
	static int64_t x382 = INT64_MAX;
	volatile uint32_t x383 = UINT32_MAX;
	volatile int8_t x384 = INT8_MIN;
	volatile int64_t t70 = 1669LL;

	t70 = (x381%((x382-x383)&x384));

	if (t70 != 3089062LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x385 = 25U;
	uint8_t x386 = UINT8_MAX;
	volatile uint64_t t71 = 275LLU;

	t71 = (x385%((x386-x387)&x388));

	if (t71 != 25LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x390 = -1;
	int8_t x391 = 4;
	int32_t x392 = -1;

	t72 = (x389%((x390-x391)&x392));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x397 = 53234218913LL;
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = -6;
	uint64_t x400 = UINT64_MAX;
	static uint64_t t73 = 263331662298LLU;

	t73 = (x397%((x398-x399)&x400));

	if (t73 != 3LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x401 = INT8_MIN;
	uint32_t x402 = UINT32_MAX;
	int8_t x403 = 25;
	int32_t x404 = INT32_MAX;
	volatile uint32_t t74 = 208U;

	t74 = (x401%((x402-x403)&x404));

	if (t74 != 2147483546U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x405 = -2769;
	int32_t x406 = -6;
	int32_t x408 = 749;
	volatile int32_t t75 = 362;

	t75 = (x405%((x406-x407)&x408));

	if (t75 != -534) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x409 = -294593685124051109LL;
	volatile uint8_t x410 = 19U;
	static int8_t x411 = -1;
	volatile uint64_t t76 = 1300LLU;

	t76 = (x409%((x410-x411)&x412));

	if (t76 != 7LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x413 = INT32_MIN;
	volatile int64_t t77 = 117283438627LL;

	t77 = (x413%((x414-x415)&x416));

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x429 = 0;
	int16_t x430 = -2885;
	int8_t x431 = INT8_MIN;
	uint32_t x432 = 2609U;
	uint32_t t78 = 1U;

	t78 = (x429%((x430-x431)&x432));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x433 = 193;
	static volatile uint64_t x434 = 2386715447990569257LLU;
	volatile uint64_t x436 = 7LLU;
	volatile uint64_t t79 = 492LLU;

	t79 = (x433%((x434-x435)&x436));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x437 = 42166U;
	int64_t x438 = 2608953129843LL;
	uint8_t x439 = UINT8_MAX;
	static int32_t x440 = INT32_MIN;
	static int64_t t80 = -1412986839080LL;

	t80 = (x437%((x438-x439)&x440));

	if (t80 != 42166LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x441 = 6737U;
	int16_t x442 = -2648;
	static int8_t x443 = INT8_MIN;
	static volatile int64_t x444 = 474601620852142LL;
	static volatile int64_t t81 = 178654648173LL;

	t81 = (x441%((x442-x443)&x444));

	if (t81 != 6737LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x445 = -1;
	int32_t x446 = INT32_MIN;
	int8_t x447 = INT8_MIN;
	static int16_t x448 = INT16_MIN;
	static volatile int32_t t82 = -4;

	t82 = (x445%((x446-x447)&x448));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x451 = -6;
	int32_t x452 = -1;
	int64_t t83 = 66206134183382055LL;

	t83 = (x449%((x450-x451)&x452));

	if (t83 != 892706131LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x454 = -1;
	int8_t x456 = INT8_MIN;
	int64_t t84 = 326970264355237542LL;

	t84 = (x453%((x454-x455)&x456));

	if (t84 != 116LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x458 = -26LL;
	int32_t x459 = -36;
	int32_t x460 = -1;
	int64_t t85 = -55365LL;

	t85 = (x457%((x458-x459)&x460));

	if (t85 != 7LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x461 = UINT64_MAX;
	uint64_t x462 = UINT64_MAX;
	int64_t x464 = -909592396LL;
	volatile uint64_t t86 = 177293LLU;

	t86 = (x461%((x462-x463)&x464));

	if (t86 != 86495231LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x465 = -1LL;
	int8_t x466 = INT8_MIN;
	uint64_t t87 = 945378222746LLU;

	t87 = (x465%((x466-x467)&x468));

	if (t87 != 62128898288123LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x470 = 358U;
	int16_t x471 = 1;
	volatile uint32_t x472 = UINT32_MAX;
	uint32_t t88 = 12558590U;

	t88 = (x469%((x470-x471)&x472));

	if (t88 != 255U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x473 = INT8_MIN;
	uint64_t x475 = UINT64_MAX;
	int64_t x476 = INT64_MAX;
	uint64_t t89 = 3LLU;

	t89 = (x473%((x474-x475)&x476));

	if (t89 != 128LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x477 = INT8_MIN;
	int64_t x478 = -1LL;
	uint16_t x480 = 3U;
	int64_t t90 = 1044815140008308086LL;

	t90 = (x477%((x478-x479)&x480));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x481 = INT32_MIN;
	uint64_t x482 = 1981927LLU;
	int64_t x484 = INT64_MIN;
	volatile uint64_t t91 = 85034LLU;

	t91 = (x481%((x482-x483)&x484));

	if (t91 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x489 = 8U;
	int8_t x490 = -1;
	static int32_t x491 = -433713761;
	int16_t x492 = -1;
	static volatile int32_t t92 = -3347;

	t92 = (x489%((x490-x491)&x492));

	if (t92 != 8) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x493 = 6LL;
	uint16_t x494 = UINT16_MAX;
	int64_t x496 = -1LL;
	int64_t t93 = 2444001977804813964LL;

	t93 = (x493%((x494-x495)&x496));

	if (t93 != 6LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x505 = INT64_MAX;
	int16_t x506 = INT16_MAX;
	volatile int16_t x507 = INT16_MIN;
	volatile int64_t t94 = -8885848984LL;

	t94 = (x505%((x506-x507)&x508));

	if (t94 != 15031LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x510 = 0U;
	static int16_t x512 = INT16_MAX;
	volatile int64_t t95 = 236582847569922LL;

	t95 = (x509%((x510-x511)&x512));

	if (t95 != -9788LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x513 = 120240214U;
	int32_t x515 = -1;
	volatile int32_t x516 = INT32_MIN;
	volatile int64_t t96 = 0LL;

	t96 = (x513%((x514-x515)&x516));

	if (t96 != 120240214LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x517 = 965488LL;
	int32_t x519 = INT32_MIN;
	int8_t x520 = INT8_MIN;

	t97 = (x517%((x518-x519)&x520));

	if (t97 != 965488LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x522 = 2061U;
	uint32_t x523 = 3294840U;
	int64_t x524 = 11426LL;
	int64_t t98 = -5885LL;

	t98 = (x521%((x522-x523)&x524));

	if (t98 != -33LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x529 = INT8_MAX;
	static uint16_t x530 = 8746U;
	static volatile int16_t x531 = INT16_MIN;
	volatile int32_t x532 = 31327;
	volatile int32_t t99 = -34;

	t99 = (x529%((x530-x531)&x532));

	if (t99 != 127) { NG(); } else { ; }
	
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

