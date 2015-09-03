#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x3 = -1;
uint8_t x4 = 7U;
uint16_t x8 = UINT16_MAX;
int8_t x15 = -3;
int32_t x19 = INT32_MIN;
volatile int32_t t3 = -1;
volatile int32_t t5 = -467;
volatile int32_t x40 = -110;
static int32_t t6 = -194765;
volatile uint16_t x41 = 701U;
int32_t t7 = -4;
int64_t x47 = 9LL;
volatile int32_t x70 = -1;
uint64_t x83 = UINT64_MAX;
static int32_t x85 = INT32_MIN;
static uint32_t x88 = 3U;
int16_t x89 = INT16_MIN;
volatile uint64_t x92 = UINT64_MAX;
volatile int64_t x94 = 94311344444LL;
volatile int8_t x97 = -14;
int32_t t20 = 63028;
int8_t x114 = -1;
int32_t t23 = 658683063;
int16_t x128 = INT16_MIN;
int64_t x129 = 8946LL;
static uint64_t x133 = 66655713267398171LLU;
volatile int32_t t26 = -2;
int64_t x140 = INT64_MAX;
uint8_t x141 = 1U;
uint8_t x152 = 104U;
static uint16_t x153 = 636U;
int64_t x155 = -6861841854262LL;
uint64_t x156 = UINT64_MAX;
volatile int8_t x166 = -1;
int32_t x167 = INT32_MAX;
static volatile uint8_t x169 = UINT8_MAX;
int32_t t36 = -583306414;
static int64_t x178 = INT64_MIN;
uint8_t x179 = UINT8_MAX;
int16_t x186 = -8;
int32_t x187 = -1;
uint8_t x193 = UINT8_MAX;
int64_t x198 = -490377018150330LL;
static volatile int16_t x199 = 162;
int32_t t42 = -13319;
uint32_t x205 = 7U;
uint64_t x206 = 4LLU;
int16_t x212 = INT16_MIN;
int32_t t44 = 12;
int64_t x213 = -1LL;
int32_t x218 = INT32_MIN;
int32_t x219 = -1;
int16_t x222 = 7684;
static int16_t x227 = INT16_MAX;
int32_t x234 = -3683080;
uint16_t x240 = 133U;
int32_t x241 = 260805108;
static int32_t t54 = 2;
uint8_t x260 = 0U;
int32_t t55 = -110;
int16_t x264 = -1;
volatile int32_t t56 = -131;
int8_t x265 = -1;
uint32_t x268 = 87157632U;
volatile int8_t x276 = INT8_MAX;
static int32_t t59 = 7793;
static int64_t x281 = INT64_MAX;
volatile int64_t x287 = 0LL;
int32_t t62 = 8553022;
int64_t x294 = INT64_MIN;
static uint16_t x302 = 1912U;
static volatile int16_t x304 = INT16_MAX;
volatile uint8_t x305 = 57U;
volatile uint8_t x310 = UINT8_MAX;
int32_t x313 = INT32_MIN;
uint16_t x315 = 125U;
static uint16_t x317 = 3U;
uint8_t x319 = UINT8_MAX;
volatile int64_t x322 = INT64_MIN;
volatile int32_t t71 = -2006568;
uint16_t x332 = 2U;
volatile int32_t t73 = -28002;
int8_t x337 = -1;
uint16_t x338 = 134U;
static uint32_t x343 = 1U;
int16_t x346 = INT16_MIN;
uint32_t x351 = 27U;
uint8_t x352 = UINT8_MAX;
volatile int32_t t77 = 0;
volatile uint8_t x354 = 8U;
int8_t x367 = INT8_MIN;
int64_t x369 = INT64_MIN;
int16_t x370 = INT16_MAX;
volatile int16_t x385 = INT16_MIN;
volatile uint8_t x386 = 45U;
static uint32_t x387 = UINT32_MAX;
uint8_t x390 = 1U;
volatile int16_t x403 = -1;
int32_t t90 = 1774;
uint32_t x409 = 1121U;
volatile int32_t t91 = -421;
int16_t x416 = -5029;
volatile int64_t x417 = INT64_MIN;
volatile uint32_t x418 = 343556U;
int32_t x427 = 118690962;
int32_t t95 = -617;
volatile int16_t x442 = INT16_MIN;
static int64_t x452 = INT64_MIN;


void f0(void) {
	int8_t x1 = -1;
	static uint32_t x2 = 66710200U;
	volatile int32_t t0 = 5003;

	t0 = ((x1%x2)==(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile uint8_t x6 = 13U;
	int8_t x7 = -7;
	int32_t t1 = -113838;

	t1 = ((x5%x6)==(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	static uint32_t x14 = 87U;
	int64_t x16 = INT64_MIN;
	int32_t t2 = 866789613;

	t2 = ((x13%x14)==(x15-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = 0U;
	uint16_t x18 = 759U;
	uint32_t x20 = UINT32_MAX;

	t3 = ((x17%x18)==(x19-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	int64_t x22 = INT64_MAX;
	int32_t x23 = 327157241;
	uint8_t x24 = 11U;
	volatile int32_t t4 = -2;

	t4 = ((x21%x22)==(x23-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = -1;
	int8_t x26 = 1;
	uint64_t x27 = UINT64_MAX;
	volatile uint16_t x28 = 3U;

	t5 = ((x25%x26)==(x27-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x37 = 1;
	static uint16_t x38 = 7089U;
	volatile int64_t x39 = INT64_MIN;

	t6 = ((x37%x38)==(x39-x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x42 = INT16_MIN;
	int64_t x43 = -16332163239577567LL;
	uint32_t x44 = UINT32_MAX;

	t7 = ((x41%x42)==(x43-x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = -1;
	static volatile int64_t x46 = INT64_MIN;
	int16_t x48 = INT16_MAX;
	static volatile int32_t t8 = 102;

	t8 = ((x45%x46)==(x47-x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MAX;
	int64_t x50 = INT64_MIN;
	uint16_t x51 = UINT16_MAX;
	uint8_t x52 = 6U;
	static int32_t t9 = -147846;

	t9 = ((x49%x50)==(x51-x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 4056U;
	volatile int8_t x54 = 8;
	uint64_t x55 = UINT64_MAX;
	int8_t x56 = -1;
	volatile int32_t t10 = -3023785;

	t10 = ((x53%x54)==(x55-x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = INT64_MAX;
	uint8_t x58 = 12U;
	int32_t x59 = 71597110;
	int8_t x60 = 14;
	int32_t t11 = 728;

	t11 = ((x57%x58)==(x59-x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = 1;
	int64_t x62 = INT64_MAX;
	uint32_t x63 = 0U;
	static int16_t x64 = INT16_MAX;
	volatile int32_t t12 = 11793;

	t12 = ((x61%x62)==(x63-x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MAX;
	int8_t x71 = -12;
	static volatile int16_t x72 = INT16_MAX;
	int32_t t13 = -4061;

	t13 = ((x69%x70)==(x71-x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = 2650U;
	volatile int64_t x78 = -21319355112LL;
	static int64_t x79 = 526977954027LL;
	int32_t x80 = INT32_MAX;
	int32_t t14 = 92361;

	t14 = ((x77%x78)==(x79-x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = -1LL;
	int16_t x84 = 6588;
	int32_t t15 = -6;

	t15 = ((x81%x82)==(x83-x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x86 = UINT32_MAX;
	volatile int16_t x87 = INT16_MIN;
	static volatile int32_t t16 = -4752;

	t16 = ((x85%x86)==(x87-x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x90 = -1;
	uint8_t x91 = 9U;
	volatile int32_t t17 = -8;

	t17 = ((x89%x90)==(x91-x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x93 = 456646494887948LL;
	int16_t x95 = INT16_MIN;
	static uint64_t x96 = UINT64_MAX;
	volatile int32_t t18 = -737320;

	t18 = ((x93%x94)==(x95-x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x98 = INT16_MIN;
	static int64_t x99 = INT64_MIN;
	int64_t x100 = -1LL;
	int32_t t19 = 37077220;

	t19 = ((x97%x98)==(x99-x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = 1;
	volatile int64_t x102 = 752518LL;
	uint64_t x103 = UINT64_MAX;
	int32_t x104 = INT32_MAX;

	t20 = ((x101%x102)==(x103-x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MIN;
	static int8_t x107 = INT8_MIN;
	int16_t x108 = -1;
	int32_t t21 = 22770512;

	t21 = ((x105%x106)==(x107-x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x113 = UINT16_MAX;
	static uint32_t x115 = 1541641U;
	int32_t x116 = INT32_MIN;
	int32_t t22 = -3;

	t22 = ((x113%x114)==(x115-x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MAX;
	int16_t x122 = INT16_MAX;
	volatile int64_t x123 = INT64_MIN;
	int8_t x124 = INT8_MIN;

	t23 = ((x121%x122)==(x123-x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x125 = INT8_MAX;
	volatile int32_t x126 = INT32_MIN;
	int64_t x127 = INT64_MIN;
	int32_t t24 = 6944905;

	t24 = ((x125%x126)==(x127-x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x130 = -1;
	int16_t x131 = -55;
	int16_t x132 = INT16_MIN;
	volatile int32_t t25 = -10;

	t25 = ((x129%x130)==(x131-x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x134 = UINT32_MAX;
	volatile int32_t x135 = -1;
	static uint8_t x136 = 122U;

	t26 = ((x133%x134)==(x135-x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = 14924LL;
	static volatile int8_t x138 = -1;
	uint8_t x139 = 123U;
	volatile int32_t t27 = -126312;

	t27 = ((x137%x138)==(x139-x140));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x142 = UINT64_MAX;
	static int16_t x143 = INT16_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t28 = 88;

	t28 = ((x141%x142)==(x143-x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = INT16_MIN;
	static volatile int32_t x146 = INT32_MAX;
	volatile int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MIN;
	volatile int32_t t29 = -152371965;

	t29 = ((x145%x146)==(x147-x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x149 = 3877U;
	int32_t x150 = -316882537;
	volatile int16_t x151 = -1;
	int32_t t30 = -1;

	t30 = ((x149%x150)==(x151-x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x154 = INT64_MAX;
	static int32_t t31 = 3920948;

	t31 = ((x153%x154)==(x155-x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x157 = 2178286915768703LLU;
	int16_t x158 = -9;
	int32_t x159 = -202460;
	static uint16_t x160 = 2204U;
	int32_t t32 = 99216479;

	t32 = ((x157%x158)==(x159-x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x161 = INT64_MIN;
	int32_t x162 = INT32_MIN;
	volatile uint8_t x163 = 1U;
	uint32_t x164 = 1972U;
	int32_t t33 = -143388;

	t33 = ((x161%x162)==(x163-x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = INT32_MIN;
	int8_t x168 = 2;
	int32_t t34 = -637;

	t34 = ((x165%x166)==(x167-x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x170 = INT32_MAX;
	static volatile uint32_t x171 = 120589U;
	static volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t35 = -19;

	t35 = ((x169%x170)==(x171-x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = INT16_MAX;
	int64_t x174 = 416537766LL;
	volatile int8_t x175 = INT8_MIN;
	int32_t x176 = INT32_MIN;

	t36 = ((x173%x174)==(x175-x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = INT32_MIN;
	uint8_t x180 = 2U;
	int32_t t37 = -3808226;

	t37 = ((x177%x178)==(x179-x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = 168770684986530LLU;
	static uint8_t x182 = 21U;
	uint8_t x183 = 1U;
	volatile uint32_t x184 = UINT32_MAX;
	int32_t t38 = 968;

	t38 = ((x181%x182)==(x183-x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x185 = 5827;
	int8_t x188 = 6;
	int32_t t39 = 7621;

	t39 = ((x185%x186)==(x187-x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = INT32_MAX;
	static int8_t x190 = INT8_MIN;
	static uint64_t x191 = UINT64_MAX;
	uint32_t x192 = 6961430U;
	static int32_t t40 = -231283;

	t40 = ((x189%x190)==(x191-x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x194 = 6;
	volatile uint8_t x195 = 8U;
	int16_t x196 = -40;
	int32_t t41 = -12154;

	t41 = ((x193%x194)==(x195-x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x197 = INT64_MAX;
	volatile uint16_t x200 = UINT16_MAX;

	t42 = ((x197%x198)==(x199-x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x207 = INT16_MIN;
	volatile int8_t x208 = INT8_MAX;
	static int32_t t43 = -40;

	t43 = ((x205%x206)==(x207-x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x209 = -1;
	int16_t x210 = -9104;
	int8_t x211 = -1;

	t44 = ((x209%x210)==(x211-x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x214 = -1;
	int32_t x215 = -6455;
	volatile int64_t x216 = -116445250LL;
	int32_t t45 = 210;

	t45 = ((x213%x214)==(x215-x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x217 = 103U;
	int8_t x220 = INT8_MIN;
	int32_t t46 = -10;

	t46 = ((x217%x218)==(x219-x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = 272LL;
	int8_t x223 = -1;
	int16_t x224 = 0;
	int32_t t47 = 459841722;

	t47 = ((x221%x222)==(x223-x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = 3U;
	int32_t x226 = INT32_MIN;
	uint8_t x228 = 108U;
	int32_t t48 = -491219;

	t48 = ((x225%x226)==(x227-x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x229 = INT16_MIN;
	volatile int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	volatile int32_t x232 = -6;
	int32_t t49 = -34;

	t49 = ((x229%x230)==(x231-x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x233 = 6U;
	uint64_t x235 = UINT64_MAX;
	static volatile int32_t x236 = -14;
	static int32_t t50 = -4906;

	t50 = ((x233%x234)==(x235-x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x237 = 18LLU;
	uint32_t x238 = 59527026U;
	int8_t x239 = -1;
	static int32_t t51 = 4912389;

	t51 = ((x237%x238)==(x239-x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x242 = -1;
	static int16_t x243 = INT16_MIN;
	uint64_t x244 = 524426LLU;
	static volatile int32_t t52 = 2414;

	t52 = ((x241%x242)==(x243-x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x245 = -1;
	static int64_t x246 = -227770940LL;
	uint64_t x247 = UINT64_MAX;
	int8_t x248 = 11;
	volatile int32_t t53 = -57;

	t53 = ((x245%x246)==(x247-x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = INT16_MIN;
	uint64_t x250 = UINT64_MAX;
	uint64_t x251 = 1006LLU;
	static int16_t x252 = INT16_MIN;

	t54 = ((x249%x250)==(x251-x252));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x257 = 23U;
	int8_t x258 = INT8_MIN;
	int32_t x259 = -25;

	t55 = ((x257%x258)==(x259-x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = 27;
	int64_t x262 = INT64_MAX;
	int16_t x263 = -1;

	t56 = ((x261%x262)==(x263-x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x266 = INT16_MAX;
	int64_t x267 = -6152993195975933LL;
	volatile int32_t t57 = -127623;

	t57 = ((x265%x266)==(x267-x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x269 = INT64_MIN;
	int32_t x270 = INT32_MIN;
	volatile uint32_t x271 = 48197U;
	static int8_t x272 = INT8_MAX;
	int32_t t58 = -913114507;

	t58 = ((x269%x270)==(x271-x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x273 = INT32_MAX;
	int32_t x274 = 1564;
	int16_t x275 = -5;

	t59 = ((x273%x274)==(x275-x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x277 = -1;
	int16_t x278 = -1974;
	int16_t x279 = -442;
	static int8_t x280 = 4;
	int32_t t60 = 27612;

	t60 = ((x277%x278)==(x279-x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x282 = -24;
	uint64_t x283 = 33430029580LLU;
	int16_t x284 = INT16_MIN;
	volatile int32_t t61 = 216380903;

	t61 = ((x281%x282)==(x283-x284));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x285 = 26862U;
	int64_t x286 = INT64_MAX;
	static int64_t x288 = 1LL;

	t62 = ((x285%x286)==(x287-x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x289 = 68U;
	int16_t x290 = -1;
	int8_t x291 = -1;
	static uint8_t x292 = UINT8_MAX;
	volatile int32_t t63 = -846260534;

	t63 = ((x289%x290)==(x291-x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = INT8_MAX;
	uint64_t x295 = UINT64_MAX;
	uint64_t x296 = 809LLU;
	volatile int32_t t64 = 125;

	t64 = ((x293%x294)==(x295-x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x301 = 15387934092LLU;
	int64_t x303 = 28249784394885LL;
	static volatile int32_t t65 = -3630;

	t65 = ((x301%x302)==(x303-x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x306 = 3U;
	volatile uint16_t x307 = 2U;
	uint32_t x308 = 2983U;
	static int32_t t66 = -72490;

	t66 = ((x305%x306)==(x307-x308));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = -1;
	int16_t x311 = -1;
	volatile int16_t x312 = -1;
	int32_t t67 = 161;

	t67 = ((x309%x310)==(x311-x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x314 = 8;
	uint64_t x316 = 5433607917244369964LLU;
	volatile int32_t t68 = 0;

	t68 = ((x313%x314)==(x315-x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x318 = 3U;
	static int32_t x320 = INT32_MAX;
	static volatile int32_t t69 = -3303456;

	t69 = ((x317%x318)==(x319-x320));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x321 = UINT8_MAX;
	static uint64_t x323 = UINT64_MAX;
	uint8_t x324 = 5U;
	int32_t t70 = -455081;

	t70 = ((x321%x322)==(x323-x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = -1;
	int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MAX;
	uint16_t x328 = UINT16_MAX;

	t71 = ((x325%x326)==(x327-x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = 8U;
	int8_t x330 = INT8_MIN;
	int32_t x331 = INT32_MAX;
	volatile int32_t t72 = 6812;

	t72 = ((x329%x330)==(x331-x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = INT64_MAX;
	uint64_t x334 = 7246662968086LLU;
	static uint32_t x335 = UINT32_MAX;
	static int16_t x336 = -1;

	t73 = ((x333%x334)==(x335-x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x339 = 2;
	uint32_t x340 = 585160564U;
	int32_t t74 = 0;

	t74 = ((x337%x338)==(x339-x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x341 = 863388LL;
	volatile uint32_t x342 = 105852U;
	static int16_t x344 = -1;
	volatile int32_t t75 = 854;

	t75 = ((x341%x342)==(x343-x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = UINT8_MAX;
	int8_t x347 = INT8_MIN;
	static int8_t x348 = INT8_MAX;
	volatile int32_t t76 = 4816;

	t76 = ((x345%x346)==(x347-x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = INT8_MAX;
	int32_t x350 = INT32_MIN;

	t77 = ((x349%x350)==(x351-x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x353 = 31U;
	int64_t x355 = -1LL;
	int64_t x356 = INT64_MIN;
	volatile int32_t t78 = 2644;

	t78 = ((x353%x354)==(x355-x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = 111;
	uint64_t x358 = 54718848936922790LLU;
	int32_t x359 = INT32_MIN;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t79 = 5;

	t79 = ((x357%x358)==(x359-x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x361 = 339342LLU;
	uint64_t x362 = UINT64_MAX;
	int16_t x363 = INT16_MIN;
	volatile int64_t x364 = INT64_MIN;
	int32_t t80 = 313187;

	t80 = ((x361%x362)==(x363-x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = INT32_MAX;
	int32_t x366 = -229484;
	volatile int8_t x368 = -1;
	int32_t t81 = -479985;

	t81 = ((x365%x366)==(x367-x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x371 = INT8_MAX;
	int16_t x372 = INT16_MIN;
	volatile int32_t t82 = -8;

	t82 = ((x369%x370)==(x371-x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x373 = -1;
	int16_t x374 = INT16_MIN;
	static int16_t x375 = -1;
	int8_t x376 = -1;
	int32_t t83 = -20;

	t83 = ((x373%x374)==(x375-x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x377 = 4733983U;
	static volatile uint64_t x378 = 2744197362102LLU;
	int8_t x379 = -1;
	int64_t x380 = INT64_MAX;
	volatile int32_t t84 = -5088918;

	t84 = ((x377%x378)==(x379-x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x381 = INT64_MIN;
	int32_t x382 = INT32_MIN;
	int8_t x383 = -6;
	static int32_t x384 = -1152463;
	static volatile int32_t t85 = -1834;

	t85 = ((x381%x382)==(x383-x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x388 = INT8_MIN;
	volatile int32_t t86 = 140;

	t86 = ((x385%x386)==(x387-x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x389 = INT8_MIN;
	int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MIN;
	int32_t t87 = 1450;

	t87 = ((x389%x390)==(x391-x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x397 = -1;
	static int64_t x398 = INT64_MAX;
	volatile int8_t x399 = INT8_MAX;
	int16_t x400 = INT16_MIN;
	static int32_t t88 = -172665812;

	t88 = ((x397%x398)==(x399-x400));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x401 = UINT16_MAX;
	static int8_t x402 = -1;
	uint64_t x404 = UINT64_MAX;
	static int32_t t89 = -7245;

	t89 = ((x401%x402)==(x403-x404));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x405 = -79;
	int32_t x406 = -1931547;
	uint32_t x407 = 345363U;
	int32_t x408 = INT32_MAX;

	t90 = ((x405%x406)==(x407-x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x410 = 8802U;
	volatile int8_t x411 = 2;
	int32_t x412 = 1;

	t91 = ((x409%x410)==(x411-x412));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x413 = INT32_MIN;
	int64_t x414 = INT64_MAX;
	volatile int8_t x415 = INT8_MAX;
	static int32_t t92 = 183677167;

	t92 = ((x413%x414)==(x415-x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x419 = 257259280095LLU;
	volatile int32_t x420 = -1;
	int32_t t93 = 1013;

	t93 = ((x417%x418)==(x419-x420));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x421 = -1LL;
	int32_t x422 = -397;
	int64_t x423 = -87725668794487LL;
	volatile uint16_t x424 = 3U;
	int32_t t94 = 20;

	t94 = ((x421%x422)==(x423-x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x425 = 530543038476045604LLU;
	int16_t x426 = INT16_MIN;
	static int8_t x428 = 24;

	t95 = ((x425%x426)==(x427-x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x433 = INT32_MIN;
	int8_t x434 = INT8_MAX;
	volatile int64_t x435 = -1LL;
	int64_t x436 = 913863061662572LL;
	static volatile int32_t t96 = 14056445;

	t96 = ((x433%x434)==(x435-x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x437 = 368761;
	int32_t x438 = INT32_MAX;
	uint64_t x439 = 3753833323812785845LLU;
	int16_t x440 = INT16_MIN;
	volatile int32_t t97 = -457;

	t97 = ((x437%x438)==(x439-x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x441 = 5U;
	int8_t x443 = INT8_MIN;
	int16_t x444 = -1;
	volatile int32_t t98 = -31331438;

	t98 = ((x441%x442)==(x443-x444));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = -1;
	volatile uint16_t x450 = UINT16_MAX;
	uint64_t x451 = 37LLU;
	volatile int32_t t99 = -186;

	t99 = ((x449%x450)==(x451-x452));

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

