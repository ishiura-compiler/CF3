#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
uint16_t x7 = 103U;
int16_t x24 = INT16_MAX;
int16_t x30 = 619;
uint16_t x32 = 2613U;
int32_t x63 = -1;
int32_t x79 = -1888126;
uint16_t x80 = 120U;
volatile int16_t x97 = INT16_MIN;
static int32_t x100 = INT32_MAX;
uint32_t x101 = 1388034343U;
volatile int32_t t17 = -700197;
int32_t t18 = 15;
int8_t x132 = INT8_MIN;
int32_t t23 = -10;
int16_t x141 = -1;
volatile int32_t x146 = INT32_MAX;
uint8_t x147 = UINT8_MAX;
volatile int16_t x153 = INT16_MIN;
static volatile uint16_t x160 = UINT16_MAX;
int16_t x165 = -1;
int16_t x168 = -1;
static int16_t x172 = INT16_MIN;
int8_t x180 = -1;
int16_t x193 = INT16_MIN;
int64_t x207 = -1LL;
int16_t x211 = 41;
int32_t t38 = -350;
int16_t x223 = -3;
static volatile int8_t x225 = -24;
int32_t t42 = 476094849;
volatile int32_t x241 = -469;
uint8_t x242 = 2U;
int64_t x244 = INT64_MIN;
volatile uint8_t x245 = 35U;
static int32_t x251 = -4237707;
static int32_t x263 = INT32_MAX;
uint32_t x264 = 81553U;
int16_t x279 = -2;
int32_t t51 = -223;
volatile int32_t t52 = -13;
uint8_t x289 = 0U;
static int16_t x290 = -1161;
uint32_t x306 = 0U;
volatile int32_t t55 = 9862;
int32_t x324 = 276967351;
static int32_t x327 = INT32_MIN;
int16_t x329 = -1;
uint64_t x345 = UINT64_MAX;
static int8_t x346 = INT8_MIN;
int16_t x358 = INT16_MIN;
volatile int32_t t61 = -590574;
volatile int32_t t62 = -2;
int64_t x373 = -208LL;
int16_t x381 = INT16_MIN;
static volatile int32_t t65 = -4986357;
int8_t x389 = -1;
int32_t t66 = -159882;
volatile uint64_t x398 = 13107048438LLU;
int32_t t67 = -25357531;
int32_t x408 = -1;
volatile int8_t x411 = INT8_MIN;
static volatile int32_t t69 = 145;
uint16_t x419 = UINT16_MAX;
static int16_t x434 = -1;
int8_t x440 = 0;
int32_t t76 = 49183;
static volatile int32_t x457 = INT32_MIN;
uint32_t x467 = UINT32_MAX;
static volatile uint16_t x468 = 13U;
static int32_t t79 = 88075;
int32_t t82 = -485173187;
uint64_t x520 = UINT64_MAX;
volatile int32_t t85 = 20678;
int32_t x527 = -1;
int64_t x535 = -1LL;
uint64_t x539 = 134249231565LLU;
uint32_t x570 = UINT32_MAX;
volatile int8_t x572 = INT8_MIN;
uint8_t x575 = 3U;
volatile int32_t t94 = 148;
uint8_t x591 = 123U;
uint64_t x592 = UINT64_MAX;
int16_t x593 = -1;
uint32_t x603 = 837464024U;
static volatile int8_t x610 = INT8_MAX;


void f0(void) {
	uint32_t x5 = 854U;
	static uint32_t x8 = 1U;
	volatile int32_t t0 = -1744936;

	t0 = ((x5*x6)==(x7-x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -1;
	volatile uint8_t x14 = UINT8_MAX;
	static int32_t x15 = -1;
	int64_t x16 = -1LL;
	static volatile int32_t t1 = 978;

	t1 = ((x13*x14)==(x15-x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x21 = 41142672U;
	int8_t x22 = -1;
	static uint32_t x23 = UINT32_MAX;
	static volatile int32_t t2 = 218530;

	t2 = ((x21*x22)==(x23-x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MIN;
	volatile int8_t x26 = -1;
	volatile int64_t x27 = INT64_MAX;
	static volatile uint16_t x28 = 918U;
	static volatile int32_t t3 = 11465;

	t3 = ((x25*x26)==(x27-x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = UINT8_MAX;
	uint64_t x31 = 1462LLU;
	static volatile int32_t t4 = 11777583;

	t4 = ((x29*x30)==(x31-x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x37 = 1U;
	int32_t x38 = -1;
	static uint16_t x39 = UINT16_MAX;
	volatile int16_t x40 = -124;
	int32_t t5 = 43362344;

	t5 = ((x37*x38)==(x39-x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = 0;
	uint32_t x42 = UINT32_MAX;
	static int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MAX;
	int32_t t6 = -3;

	t6 = ((x41*x42)==(x43-x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x49 = INT8_MIN;
	uint8_t x50 = 0U;
	uint32_t x51 = UINT32_MAX;
	volatile uint16_t x52 = 7U;
	static int32_t t7 = 159309;

	t7 = ((x49*x50)==(x51-x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x53 = -1;
	uint16_t x54 = 300U;
	int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t8 = 2599;

	t8 = ((x53*x54)==(x55-x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x57 = UINT32_MAX;
	uint16_t x58 = 31U;
	static uint8_t x59 = 5U;
	int32_t x60 = -19695778;
	int32_t t9 = 0;

	t9 = ((x57*x58)==(x59-x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x61 = -1223765LL;
	static int16_t x62 = INT16_MIN;
	int64_t x64 = INT64_MIN;
	int32_t t10 = 18314533;

	t10 = ((x61*x62)==(x63-x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = 12;
	static int16_t x66 = INT16_MIN;
	uint32_t x67 = 135607U;
	uint8_t x68 = 117U;
	volatile int32_t t11 = 608027;

	t11 = ((x65*x66)==(x67-x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x69 = 989180271U;
	volatile uint16_t x70 = 1U;
	int8_t x71 = INT8_MIN;
	static int32_t x72 = -611584098;
	static volatile int32_t t12 = 49128;

	t12 = ((x69*x70)==(x71-x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x77 = 1615338429U;
	int8_t x78 = -1;
	volatile int32_t t13 = 38010;

	t13 = ((x77*x78)==(x79-x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = INT32_MIN;
	uint32_t x86 = 844254U;
	int32_t x87 = INT32_MIN;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t14 = 14;

	t14 = ((x85*x86)==(x87-x88));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x98 = 10084;
	int64_t x99 = INT64_MAX;
	volatile int32_t t15 = -32075;

	t15 = ((x97*x98)==(x99-x100));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x102 = 6492989899676LLU;
	static uint64_t x103 = UINT64_MAX;
	static uint8_t x104 = 5U;
	int32_t t16 = -131;

	t16 = ((x101*x102)==(x103-x104));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x105 = UINT64_MAX;
	uint16_t x106 = 119U;
	static uint8_t x107 = 2U;
	uint64_t x108 = UINT64_MAX;

	t17 = ((x105*x106)==(x107-x108));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x109 = 40680107;
	uint16_t x110 = 22U;
	uint64_t x111 = 99LLU;
	static uint16_t x112 = UINT16_MAX;

	t18 = ((x109*x110)==(x111-x112));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = -1889457;
	static int8_t x114 = -1;
	volatile uint16_t x115 = 5U;
	int16_t x116 = INT16_MIN;
	volatile int32_t t19 = -1;

	t19 = ((x113*x114)==(x115-x116));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = -1;
	static uint64_t x118 = 281166541LLU;
	static int16_t x119 = INT16_MAX;
	uint64_t x120 = 877LLU;
	volatile int32_t t20 = 1;

	t20 = ((x117*x118)==(x119-x120));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x129 = -1;
	int32_t x130 = INT32_MAX;
	int8_t x131 = INT8_MAX;
	int32_t t21 = -1;

	t21 = ((x129*x130)==(x131-x132));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = -1;
	int8_t x134 = 5;
	int8_t x135 = -1;
	int64_t x136 = INT64_MAX;
	int32_t t22 = 16679;

	t22 = ((x133*x134)==(x135-x136));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = -1;
	uint64_t x138 = 119800LLU;
	volatile int16_t x139 = INT16_MAX;
	int16_t x140 = -1;

	t23 = ((x137*x138)==(x139-x140));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x142 = 10;
	static int8_t x143 = INT8_MIN;
	int8_t x144 = 4;
	volatile int32_t t24 = 210873120;

	t24 = ((x141*x142)==(x143-x144));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x145 = -1LL;
	int8_t x148 = INT8_MAX;
	volatile int32_t t25 = 3641325;

	t25 = ((x145*x146)==(x147-x148));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x149 = 1126980487440273481LLU;
	volatile int32_t x150 = 110011;
	volatile int16_t x151 = INT16_MIN;
	static volatile int16_t x152 = 1;
	int32_t t26 = -469;

	t26 = ((x149*x150)==(x151-x152));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x154 = 8U;
	static int16_t x155 = INT16_MAX;
	int16_t x156 = -1;
	static volatile int32_t t27 = -1;

	t27 = ((x153*x154)==(x155-x156));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x157 = -414897LL;
	static uint16_t x158 = 459U;
	uint32_t x159 = UINT32_MAX;
	volatile int32_t t28 = -1;

	t28 = ((x157*x158)==(x159-x160));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = 0;
	uint16_t x162 = 1U;
	uint64_t x163 = 14552LLU;
	uint64_t x164 = 486LLU;
	int32_t t29 = -124099343;

	t29 = ((x161*x162)==(x163-x164));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x166 = -1;
	int64_t x167 = INT64_MIN;
	volatile int32_t t30 = -114524;

	t30 = ((x165*x166)==(x167-x168));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x169 = UINT32_MAX;
	int64_t x170 = -1LL;
	static uint32_t x171 = UINT32_MAX;
	volatile int32_t t31 = 37;

	t31 = ((x169*x170)==(x171-x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x173 = -7343283751197184LL;
	int8_t x174 = -11;
	volatile int16_t x175 = -61;
	uint16_t x176 = 2U;
	int32_t t32 = -1;

	t32 = ((x173*x174)==(x175-x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x177 = 117U;
	int8_t x178 = INT8_MAX;
	volatile uint64_t x179 = UINT64_MAX;
	volatile int32_t t33 = -111050806;

	t33 = ((x177*x178)==(x179-x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x194 = 8661;
	int16_t x195 = INT16_MIN;
	static uint64_t x196 = UINT64_MAX;
	int32_t t34 = -63741;

	t34 = ((x193*x194)==(x195-x196));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x201 = INT16_MIN;
	volatile int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MIN;
	int8_t x204 = 0;
	volatile int32_t t35 = 7996844;

	t35 = ((x201*x202)==(x203-x204));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x205 = -1LL;
	int32_t x206 = -525209022;
	int8_t x208 = INT8_MIN;
	volatile int32_t t36 = -15062;

	t36 = ((x205*x206)==(x207-x208));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x209 = -1;
	volatile uint32_t x210 = 1885750U;
	int64_t x212 = -1LL;
	int32_t t37 = -1;

	t37 = ((x209*x210)==(x211-x212));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x217 = -1;
	uint8_t x218 = 3U;
	int16_t x219 = INT16_MAX;
	int32_t x220 = INT32_MAX;

	t38 = ((x217*x218)==(x219-x220));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x221 = 4142418U;
	int32_t x222 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	volatile int32_t t39 = 649;

	t39 = ((x221*x222)==(x223-x224));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x226 = INT16_MAX;
	volatile int8_t x227 = 21;
	volatile uint16_t x228 = 654U;
	volatile int32_t t40 = -1569360;

	t40 = ((x225*x226)==(x227-x228));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x229 = -401;
	uint32_t x230 = 1U;
	volatile int32_t x231 = INT32_MIN;
	volatile int16_t x232 = -1216;
	int32_t t41 = 133;

	t41 = ((x229*x230)==(x231-x232));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x237 = 17U;
	static uint32_t x238 = UINT32_MAX;
	volatile int32_t x239 = INT32_MAX;
	uint8_t x240 = 0U;

	t42 = ((x237*x238)==(x239-x240));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x243 = -1;
	int32_t t43 = 0;

	t43 = ((x241*x242)==(x243-x244));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x246 = 154U;
	static uint16_t x247 = 23U;
	static int16_t x248 = INT16_MIN;
	int32_t t44 = -1;

	t44 = ((x245*x246)==(x247-x248));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x249 = 2247622074527LLU;
	int8_t x250 = 9;
	int8_t x252 = INT8_MIN;
	volatile int32_t t45 = -44031673;

	t45 = ((x249*x250)==(x251-x252));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x257 = 43U;
	volatile int8_t x258 = INT8_MIN;
	static int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MIN;
	volatile int32_t t46 = -100110387;

	t46 = ((x257*x258)==(x259-x260));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x261 = -1LL;
	int8_t x262 = INT8_MIN;
	volatile int32_t t47 = 7;

	t47 = ((x261*x262)==(x263-x264));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = -1LL;
	int8_t x267 = -25;
	int32_t x268 = -1;
	volatile int32_t t48 = 5680137;

	t48 = ((x265*x266)==(x267-x268));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x269 = UINT64_MAX;
	volatile int64_t x270 = INT64_MIN;
	int32_t x271 = 161192;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t49 = 8;

	t49 = ((x269*x270)==(x271-x272));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x273 = UINT32_MAX;
	volatile int8_t x274 = 1;
	volatile int64_t x275 = 3096336269LL;
	static uint32_t x276 = 483U;
	int32_t t50 = 3;

	t50 = ((x273*x274)==(x275-x276));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x277 = -1;
	int32_t x278 = -1;
	uint64_t x280 = UINT64_MAX;

	t51 = ((x277*x278)==(x279-x280));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x285 = UINT16_MAX;
	int64_t x286 = -11160181LL;
	int8_t x287 = -1;
	int64_t x288 = -1663LL;

	t52 = ((x285*x286)==(x287-x288));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x291 = INT16_MIN;
	static int64_t x292 = -1LL;
	int32_t t53 = 117127;

	t53 = ((x289*x290)==(x291-x292));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x305 = -1;
	volatile int8_t x307 = INT8_MAX;
	int8_t x308 = INT8_MIN;
	int32_t t54 = 880;

	t54 = ((x305*x306)==(x307-x308));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x309 = 9434985LL;
	volatile int16_t x310 = INT16_MIN;
	static int32_t x311 = 8311215;
	volatile int64_t x312 = -1LL;

	t55 = ((x309*x310)==(x311-x312));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x321 = INT8_MIN;
	static int64_t x322 = -1122158200097LL;
	uint32_t x323 = UINT32_MAX;
	int32_t t56 = -14397938;

	t56 = ((x321*x322)==(x323-x324));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x325 = UINT64_MAX;
	volatile int8_t x326 = INT8_MAX;
	int64_t x328 = 27072885768643LL;
	int32_t t57 = -622303;

	t57 = ((x325*x326)==(x327-x328));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x330 = 1U;
	volatile int16_t x331 = -8006;
	uint16_t x332 = UINT16_MAX;
	int32_t t58 = 184408;

	t58 = ((x329*x330)==(x331-x332));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x341 = -229;
	volatile uint64_t x342 = UINT64_MAX;
	volatile int64_t x343 = 76940002874195LL;
	static int8_t x344 = -1;
	int32_t t59 = 988815;

	t59 = ((x341*x342)==(x343-x344));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x347 = -7607;
	uint8_t x348 = 0U;
	volatile int32_t t60 = 441579;

	t60 = ((x345*x346)==(x347-x348));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x357 = INT8_MAX;
	int16_t x359 = -1;
	int32_t x360 = -1;

	t61 = ((x357*x358)==(x359-x360));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x369 = INT16_MAX;
	uint64_t x370 = 4471061334LLU;
	volatile uint16_t x371 = 68U;
	uint16_t x372 = 474U;

	t62 = ((x369*x370)==(x371-x372));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x374 = INT16_MAX;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = 3U;
	volatile int32_t t63 = -1;

	t63 = ((x373*x374)==(x375-x376));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x377 = INT8_MAX;
	uint8_t x378 = 1U;
	int8_t x379 = INT8_MIN;
	uint32_t x380 = UINT32_MAX;
	int32_t t64 = 544977714;

	t64 = ((x377*x378)==(x379-x380));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x382 = 105U;
	static uint8_t x383 = 7U;
	static uint16_t x384 = 201U;

	t65 = ((x381*x382)==(x383-x384));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x390 = -4;
	int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MIN;

	t66 = ((x389*x390)==(x391-x392));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x397 = -1046704013;
	int32_t x399 = -1;
	int8_t x400 = INT8_MIN;

	t67 = ((x397*x398)==(x399-x400));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x405 = -1774;
	uint64_t x406 = 11044400129613LLU;
	static int64_t x407 = -1LL;
	int32_t t68 = -513423100;

	t68 = ((x405*x406)==(x407-x408));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x409 = 6U;
	static uint64_t x410 = 3393LLU;
	int64_t x412 = -41891LL;

	t69 = ((x409*x410)==(x411-x412));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x417 = 0U;
	int64_t x418 = INT64_MAX;
	uint16_t x420 = UINT16_MAX;
	int32_t t70 = 16122608;

	t70 = ((x417*x418)==(x419-x420));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x421 = INT8_MAX;
	uint32_t x422 = 625184925U;
	uint8_t x423 = 50U;
	int32_t x424 = 47133;
	volatile int32_t t71 = -206467;

	t71 = ((x421*x422)==(x423-x424));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x425 = UINT32_MAX;
	int32_t x426 = -7743;
	static int8_t x427 = -1;
	int64_t x428 = INT64_MAX;
	int32_t t72 = -279793267;

	t72 = ((x425*x426)==(x427-x428));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x433 = -1;
	volatile uint32_t x435 = 748374118U;
	volatile int8_t x436 = INT8_MAX;
	static volatile int32_t t73 = -16513490;

	t73 = ((x433*x434)==(x435-x436));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x437 = 129396229312LLU;
	int16_t x438 = INT16_MAX;
	int16_t x439 = 0;
	int32_t t74 = 35;

	t74 = ((x437*x438)==(x439-x440));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x441 = -26;
	uint64_t x442 = UINT64_MAX;
	uint8_t x443 = UINT8_MAX;
	static volatile uint64_t x444 = 187473570444LLU;
	int32_t t75 = 0;

	t75 = ((x441*x442)==(x443-x444));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x449 = 0LL;
	int64_t x450 = INT64_MAX;
	static uint64_t x451 = UINT64_MAX;
	int16_t x452 = 4232;

	t76 = ((x449*x450)==(x451-x452));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x458 = UINT32_MAX;
	uint32_t x459 = 2U;
	volatile uint64_t x460 = 152318798LLU;
	volatile int32_t t77 = 2;

	t77 = ((x457*x458)==(x459-x460));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x461 = 0;
	static int64_t x462 = -1LL;
	int64_t x463 = -1LL;
	int32_t x464 = INT32_MAX;
	int32_t t78 = 1280117;

	t78 = ((x461*x462)==(x463-x464));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x465 = 746255797968393LLU;
	volatile uint8_t x466 = 107U;

	t79 = ((x465*x466)==(x467-x468));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x469 = 0;
	volatile int64_t x470 = 39LL;
	volatile uint64_t x471 = 243639662LLU;
	uint16_t x472 = 2U;
	volatile int32_t t80 = -4;

	t80 = ((x469*x470)==(x471-x472));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x473 = INT16_MIN;
	int16_t x474 = INT16_MAX;
	static int64_t x475 = -1LL;
	uint64_t x476 = 71318963394795863LLU;
	int32_t t81 = 12789;

	t81 = ((x473*x474)==(x475-x476));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x481 = -9LL;
	int32_t x482 = 160;
	int32_t x483 = INT32_MIN;
	int64_t x484 = INT64_MIN;

	t82 = ((x481*x482)==(x483-x484));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x493 = 6352U;
	volatile int16_t x494 = INT16_MIN;
	uint8_t x495 = UINT8_MAX;
	uint16_t x496 = 2U;
	int32_t t83 = -28;

	t83 = ((x493*x494)==(x495-x496));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x501 = INT8_MIN;
	static int64_t x502 = -1LL;
	uint32_t x503 = UINT32_MAX;
	int32_t x504 = INT32_MIN;
	int32_t t84 = 2;

	t84 = ((x501*x502)==(x503-x504));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x517 = INT16_MIN;
	int64_t x518 = 310LL;
	int32_t x519 = -4785;

	t85 = ((x517*x518)==(x519-x520));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x525 = UINT64_MAX;
	uint32_t x526 = 3236U;
	uint64_t x528 = 138558358652603LLU;
	int32_t t86 = 1;

	t86 = ((x525*x526)==(x527-x528));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x533 = -1;
	static int32_t x534 = INT32_MAX;
	uint16_t x536 = UINT16_MAX;
	static int32_t t87 = -11663;

	t87 = ((x533*x534)==(x535-x536));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x537 = 128U;
	uint8_t x538 = 33U;
	int64_t x540 = INT64_MIN;
	volatile int32_t t88 = 315656783;

	t88 = ((x537*x538)==(x539-x540));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x545 = -1LL;
	static int32_t x546 = -2231;
	int32_t x547 = -1;
	int64_t x548 = -365833159945LL;
	int32_t t89 = -478055935;

	t89 = ((x545*x546)==(x547-x548));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x557 = INT8_MIN;
	uint64_t x558 = 3401158603999LLU;
	int64_t x559 = INT64_MIN;
	int32_t x560 = INT32_MIN;
	int32_t t90 = 209;

	t90 = ((x557*x558)==(x559-x560));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x569 = 22947256U;
	int32_t x571 = INT32_MIN;
	volatile int32_t t91 = -1792;

	t91 = ((x569*x570)==(x571-x572));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x573 = 12U;
	static int8_t x574 = INT8_MAX;
	volatile int32_t x576 = INT32_MAX;
	volatile int32_t t92 = -391244;

	t92 = ((x573*x574)==(x575-x576));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x581 = UINT32_MAX;
	static uint16_t x582 = 41U;
	int64_t x583 = 107LL;
	int8_t x584 = -1;
	int32_t t93 = 12773106;

	t93 = ((x581*x582)==(x583-x584));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x585 = UINT32_MAX;
	volatile uint32_t x586 = 2692U;
	static uint8_t x587 = UINT8_MAX;
	int16_t x588 = -1;

	t94 = ((x585*x586)==(x587-x588));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x589 = INT64_MAX;
	static volatile uint8_t x590 = 0U;
	int32_t t95 = -63230;

	t95 = ((x589*x590)==(x591-x592));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x594 = 5U;
	volatile int8_t x595 = INT8_MIN;
	int32_t x596 = 43149125;
	volatile int32_t t96 = 66;

	t96 = ((x593*x594)==(x595-x596));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x601 = -1LL;
	uint8_t x602 = UINT8_MAX;
	int16_t x604 = -5947;
	volatile int32_t t97 = 11194;

	t97 = ((x601*x602)==(x603-x604));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x605 = 29;
	volatile int8_t x606 = INT8_MIN;
	uint8_t x607 = 3U;
	volatile uint8_t x608 = UINT8_MAX;
	static volatile int32_t t98 = 0;

	t98 = ((x605*x606)==(x607-x608));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x609 = -1;
	static int8_t x611 = INT8_MIN;
	uint32_t x612 = UINT32_MAX;
	volatile int32_t t99 = 548;

	t99 = ((x609*x610)==(x611-x612));

	if (t99 != 1) { NG(); } else { ; }
	
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

