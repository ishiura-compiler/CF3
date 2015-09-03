#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 43U;
volatile int32_t t0 = -1067;
int64_t x5 = -1LL;
volatile int32_t t1 = -1937;
static volatile uint32_t x12 = 236U;
int16_t x13 = INT16_MIN;
static volatile int8_t x15 = -1;
int32_t t3 = 7187;
static int8_t x21 = INT8_MAX;
volatile int8_t x27 = INT8_MAX;
volatile int8_t x29 = -1;
static volatile int32_t t7 = -18447906;
uint64_t x49 = 685988571558026LLU;
static volatile int32_t t12 = -16;
static int16_t x53 = INT16_MIN;
uint16_t x54 = 1380U;
static int16_t x58 = -756;
static volatile uint8_t x65 = UINT8_MAX;
volatile int8_t x74 = INT8_MIN;
static volatile int32_t t19 = 273;
static volatile uint64_t x83 = UINT64_MAX;
volatile uint32_t x89 = UINT32_MAX;
static volatile uint16_t x90 = 13653U;
int8_t x98 = 1;
int32_t x99 = 748221472;
static int16_t x101 = -1;
int64_t x103 = INT64_MIN;
static int64_t x108 = INT64_MAX;
int32_t t28 = 0;
uint16_t x124 = UINT16_MAX;
int8_t x125 = INT8_MAX;
volatile int32_t t31 = 68786;
uint32_t x129 = UINT32_MAX;
uint16_t x130 = 279U;
volatile int16_t x132 = -772;
int32_t t34 = -100261881;
volatile uint32_t x142 = 14578U;
volatile uint64_t x151 = 17419525LLU;
static volatile uint16_t x152 = 703U;
volatile int32_t t38 = 151080;
static int64_t x159 = INT64_MIN;
int64_t x163 = -1LL;
static volatile int8_t x164 = 4;
uint16_t x177 = 3U;
int32_t x183 = INT32_MIN;
int8_t x190 = -1;
int32_t t46 = 1;
static int8_t x197 = -1;
static int8_t x204 = 8;
volatile int32_t t50 = 6253;
volatile uint8_t x219 = 5U;
uint64_t x220 = 2562053670234LLU;
int32_t t51 = -22;
int32_t t52 = 217540418;
int16_t x225 = INT16_MIN;
static volatile int32_t t53 = -1871;
static volatile int32_t t54 = -27125363;
int32_t t55 = -212586;
volatile int64_t x237 = 1LL;
static int32_t x240 = INT32_MAX;
int32_t x242 = 5034;
volatile int64_t x249 = INT64_MAX;
volatile int32_t t59 = 64;
int16_t x255 = -125;
int32_t t60 = -70853;
volatile int32_t t62 = 1;
int8_t x271 = -1;
static volatile int16_t x273 = INT16_MIN;
uint64_t x277 = 3056LLU;
uint8_t x281 = 26U;
volatile int32_t t68 = -6314067;
uint8_t x303 = 46U;
volatile int32_t t73 = -32303579;
static uint64_t x313 = 451665630439660LLU;
uint8_t x316 = 2U;
uint8_t x319 = 0U;
int16_t x327 = INT16_MAX;
uint16_t x329 = 829U;
static int8_t x330 = INT8_MIN;
uint16_t x334 = UINT16_MAX;
int32_t x340 = -222683665;
int8_t x347 = INT8_MIN;
int16_t x348 = INT16_MAX;
int16_t x360 = INT16_MIN;
int8_t x361 = -1;
int64_t x366 = 0LL;
int32_t t87 = 37;
uint64_t x379 = UINT64_MAX;
int32_t x382 = INT32_MIN;
int32_t t89 = 41;
int8_t x405 = INT8_MIN;
int16_t x409 = INT16_MIN;
int8_t x411 = -1;
static int32_t t95 = -128518;
int32_t t98 = -2531;
static int16_t x432 = INT16_MIN;


void f0(void) {
	uint8_t x1 = 32U;
	volatile int16_t x2 = -1;
	volatile uint64_t x3 = UINT64_MAX;

	t0 = ((x1-x2)==(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 1U;
	static int16_t x7 = -1;
	int64_t x8 = -759648941255LL;

	t1 = ((x5-x6)==(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	volatile int16_t x11 = INT16_MIN;
	int32_t t2 = 3;

	t2 = ((x9-x10)==(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 0U;
	int32_t x16 = INT32_MAX;

	t3 = ((x13-x14)==(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -7;
	uint16_t x18 = 14937U;
	int16_t x19 = 0;
	uint16_t x20 = 0U;
	volatile int32_t t4 = -32231223;

	t4 = ((x17-x18)==(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 30968U;
	uint64_t x23 = 84727LLU;
	uint16_t x24 = 12U;
	int32_t t5 = -835;

	t5 = ((x21-x22)==(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	uint8_t x26 = UINT8_MAX;
	static uint64_t x28 = 74117LLU;
	int32_t t6 = 1065;

	t6 = ((x25-x26)==(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = UINT16_MAX;
	volatile int16_t x31 = INT16_MIN;
	static volatile int8_t x32 = INT8_MIN;

	t7 = ((x29-x30)==(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 19U;
	volatile int16_t x34 = 1;
	int32_t x35 = INT32_MIN;
	uint16_t x36 = 445U;
	static volatile int32_t t8 = 47228560;

	t8 = ((x33-x34)==(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	uint8_t x38 = 19U;
	static uint16_t x39 = 2276U;
	int32_t x40 = 7845;
	volatile int32_t t9 = -2319;

	t9 = ((x37-x38)==(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int64_t x42 = -14LL;
	uint8_t x43 = UINT8_MAX;
	int8_t x44 = -1;
	volatile int32_t t10 = -2029684;

	t10 = ((x41-x42)==(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MIN;
	static int32_t x48 = INT32_MIN;
	int32_t t11 = -3442175;

	t11 = ((x45-x46)==(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = 2886712LL;
	int32_t x51 = 41550338;
	volatile uint64_t x52 = 359091LLU;

	t12 = ((x49-x50)==(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x55 = INT64_MAX;
	uint8_t x56 = 106U;
	volatile int32_t t13 = -7938;

	t13 = ((x53-x54)==(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 64U;
	volatile uint8_t x59 = 10U;
	static uint64_t x60 = 4235LLU;
	volatile int32_t t14 = -7168;

	t14 = ((x57-x58)==(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	static int16_t x62 = 11048;
	uint32_t x63 = 28746U;
	uint64_t x64 = UINT64_MAX;
	static int32_t t15 = -12;

	t15 = ((x61-x62)==(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = 8;
	static int64_t x67 = 2667556931706020896LL;
	volatile int8_t x68 = -50;
	int32_t t16 = -746248779;

	t16 = ((x65-x66)==(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int64_t x70 = INT64_MAX;
	uint32_t x71 = 122U;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 1639537;

	t17 = ((x69-x70)==(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 0U;
	int16_t x75 = 1;
	uint16_t x76 = 680U;
	volatile int32_t t18 = 920;

	t18 = ((x73-x74)==(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MAX;
	static uint16_t x78 = UINT16_MAX;
	static int64_t x79 = INT64_MIN;
	volatile int16_t x80 = -8563;

	t19 = ((x77-x78)==(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	static int32_t x82 = INT32_MAX;
	int8_t x84 = -1;
	int32_t t20 = 5;

	t20 = ((x81-x82)==(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	static int16_t x86 = INT16_MAX;
	uint8_t x87 = UINT8_MAX;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 226;

	t21 = ((x85-x86)==(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x91 = INT8_MAX;
	int8_t x92 = INT8_MIN;
	static volatile int32_t t22 = -12115477;

	t22 = ((x89-x90)==(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x93 = 522190508;
	int32_t x94 = INT32_MAX;
	int32_t x95 = -1;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 12478;

	t23 = ((x93-x94)==(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int32_t x100 = INT32_MIN;
	int32_t t24 = 232569;

	t24 = ((x97-x98)==(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = -353150719999326LL;
	int64_t x104 = -1LL;
	volatile int32_t t25 = 134005160;

	t25 = ((x101-x102)==(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 14;
	int32_t x106 = 105;
	static int16_t x107 = -1;
	volatile int32_t t26 = 1;

	t26 = ((x105-x106)==(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int32_t x110 = INT32_MAX;
	int64_t x111 = 31472796522LL;
	static int32_t x112 = 1;
	static int32_t t27 = 73670;

	t27 = ((x109-x110)==(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	int32_t x114 = -1;
	int8_t x115 = INT8_MAX;
	static int32_t x116 = INT32_MIN;

	t28 = ((x113-x114)==(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 14U;
	uint32_t x118 = 723U;
	volatile int8_t x119 = INT8_MIN;
	static int8_t x120 = -1;
	volatile int32_t t29 = 394545;

	t29 = ((x117-x118)==(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	volatile int8_t x122 = -1;
	int16_t x123 = -1;
	static int32_t t30 = -939796303;

	t30 = ((x121-x122)==(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x126 = UINT8_MAX;
	int32_t x127 = INT32_MIN;
	static int32_t x128 = INT32_MAX;

	t31 = ((x125-x126)==(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x131 = -1LL;
	static volatile int32_t t32 = -12464263;

	t32 = ((x129-x130)==(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MIN;
	int64_t x135 = INT64_MIN;
	volatile int64_t x136 = -17219906542LL;
	static volatile int32_t t33 = 5595;

	t33 = ((x133-x134)==(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 0;
	volatile int16_t x138 = INT16_MAX;
	uint8_t x139 = 0U;
	int8_t x140 = 36;

	t34 = ((x137-x138)==(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	int32_t x143 = INT32_MIN;
	uint32_t x144 = 693297926U;
	volatile int32_t t35 = -102550;

	t35 = ((x141-x142)==(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = UINT16_MAX;
	int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MAX;
	static uint8_t x148 = 4U;
	int32_t t36 = -21313;

	t36 = ((x145-x146)==(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -5460447LL;
	volatile int64_t x150 = INT64_MIN;
	static int32_t t37 = 207;

	t37 = ((x149-x150)==(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MIN;
	volatile int64_t x155 = 35221563107LL;
	int32_t x156 = -1;

	t38 = ((x153-x154)==(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = -52459;
	int64_t x158 = INT64_MIN;
	uint16_t x160 = 652U;
	volatile int32_t t39 = -63282517;

	t39 = ((x157-x158)==(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = 53U;
	static int64_t x162 = -1LL;
	int32_t t40 = 716652384;

	t40 = ((x161-x162)==(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = 13;
	int8_t x170 = INT8_MAX;
	static int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MIN;
	int32_t t41 = -639251832;

	t41 = ((x169-x170)==(x171<=x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x173 = 49661U;
	int32_t x174 = -1;
	int8_t x175 = -1;
	uint16_t x176 = 7U;
	volatile int32_t t42 = -284966603;

	t42 = ((x173-x174)==(x175<=x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x178 = -1;
	uint8_t x179 = UINT8_MAX;
	uint16_t x180 = UINT16_MAX;
	int32_t t43 = -642274364;

	t43 = ((x177-x178)==(x179<=x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 3U;
	static int16_t x182 = INT16_MIN;
	uint8_t x184 = 9U;
	int32_t t44 = 70452462;

	t44 = ((x181-x182)==(x183<=x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -80131113LL;
	uint8_t x186 = 0U;
	int32_t x187 = -1;
	volatile int64_t x188 = INT64_MIN;
	volatile int32_t t45 = 229788508;

	t45 = ((x185-x186)==(x187<=x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x189 = -1;
	uint8_t x191 = 15U;
	uint32_t x192 = 3791664U;

	t46 = ((x189-x190)==(x191<=x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x193 = 2683599686LLU;
	volatile int8_t x194 = -1;
	uint8_t x195 = 6U;
	int64_t x196 = INT64_MAX;
	int32_t t47 = -17495807;

	t47 = ((x193-x194)==(x195<=x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x198 = 4U;
	uint16_t x199 = 0U;
	int32_t x200 = INT32_MIN;
	static volatile int32_t t48 = -1;

	t48 = ((x197-x198)==(x199<=x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MAX;
	uint64_t x202 = 61612143143687LLU;
	int8_t x203 = INT8_MAX;
	volatile int32_t t49 = 1164023;

	t49 = ((x201-x202)==(x203<=x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = -1;
	volatile int32_t x206 = INT32_MIN;
	volatile uint16_t x207 = 32U;
	uint8_t x208 = UINT8_MAX;

	t50 = ((x205-x206)==(x207<=x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x217 = UINT64_MAX;
	int16_t x218 = -1;

	t51 = ((x217-x218)==(x219<=x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x221 = INT8_MIN;
	static volatile int16_t x222 = -1;
	int16_t x223 = INT16_MAX;
	int16_t x224 = -2377;

	t52 = ((x221-x222)==(x223<=x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = 1155406;
	int32_t x227 = INT32_MIN;
	int16_t x228 = -1;

	t53 = ((x225-x226)==(x227<=x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = 3;
	volatile int32_t x230 = 683310;
	uint8_t x231 = 31U;
	int32_t x232 = -1046009;

	t54 = ((x229-x230)==(x231<=x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x233 = 2963U;
	uint16_t x234 = 14U;
	uint8_t x235 = UINT8_MAX;
	int32_t x236 = 180872084;

	t55 = ((x233-x234)==(x235<=x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x238 = -1;
	volatile int64_t x239 = -17480305685125LL;
	int32_t t56 = -30786561;

	t56 = ((x237-x238)==(x239<=x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	int8_t x243 = 6;
	static uint16_t x244 = 254U;
	int32_t t57 = 5602819;

	t57 = ((x241-x242)==(x243<=x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = -1;
	static int8_t x246 = INT8_MAX;
	static volatile uint16_t x247 = 30697U;
	static uint8_t x248 = 1U;
	volatile int32_t t58 = -56391;

	t58 = ((x245-x246)==(x247<=x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x250 = UINT32_MAX;
	int16_t x251 = 3471;
	int32_t x252 = INT32_MIN;

	t59 = ((x249-x250)==(x251<=x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = 1U;
	static uint16_t x254 = 16314U;
	int8_t x256 = INT8_MIN;

	t60 = ((x253-x254)==(x255<=x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = INT8_MIN;
	int64_t x258 = -269931190461149LL;
	int16_t x259 = 14962;
	int32_t x260 = INT32_MIN;
	volatile int32_t t61 = -880305;

	t61 = ((x257-x258)==(x259<=x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x261 = INT8_MIN;
	volatile int16_t x262 = INT16_MIN;
	int32_t x263 = INT32_MIN;
	uint16_t x264 = UINT16_MAX;

	t62 = ((x261-x262)==(x263<=x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = -20248;
	uint16_t x266 = UINT16_MAX;
	int32_t x267 = INT32_MIN;
	static int8_t x268 = INT8_MIN;
	static volatile int32_t t63 = 42;

	t63 = ((x265-x266)==(x267<=x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x269 = 5306U;
	int32_t x270 = INT32_MAX;
	int32_t x272 = -31130;
	int32_t t64 = 4904;

	t64 = ((x269-x270)==(x271<=x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x274 = -1;
	uint64_t x275 = UINT64_MAX;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t65 = -790789;

	t65 = ((x273-x274)==(x275<=x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x278 = -1;
	int64_t x279 = INT64_MIN;
	uint32_t x280 = 1617U;
	volatile int32_t t66 = 180454;

	t66 = ((x277-x278)==(x279<=x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x282 = 2;
	volatile uint8_t x283 = UINT8_MAX;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t67 = 287645;

	t67 = ((x281-x282)==(x283<=x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x285 = 13540069;
	uint32_t x286 = 213U;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t x288 = INT32_MIN;

	t68 = ((x285-x286)==(x287<=x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 35U;
	int16_t x290 = -1;
	uint32_t x291 = UINT32_MAX;
	static volatile int16_t x292 = -24;
	int32_t t69 = 54207;

	t69 = ((x289-x290)==(x291<=x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = 55314451LL;
	static int16_t x294 = 449;
	int64_t x295 = -1LL;
	static int16_t x296 = INT16_MIN;
	static int32_t t70 = 397;

	t70 = ((x293-x294)==(x295<=x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = 173116442299614446LLU;
	uint64_t x298 = 2746934LLU;
	int8_t x299 = -1;
	int32_t x300 = -1;
	volatile int32_t t71 = -393;

	t71 = ((x297-x298)==(x299<=x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = INT16_MIN;
	volatile int32_t x302 = -1;
	int32_t x304 = -3704;
	int32_t t72 = 857700537;

	t72 = ((x301-x302)==(x303<=x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x305 = 2LL;
	volatile int16_t x306 = -304;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = UINT8_MAX;

	t73 = ((x305-x306)==(x307<=x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = 10782;
	static uint8_t x310 = 107U;
	uint32_t x311 = 13U;
	int16_t x312 = -7;
	volatile int32_t t74 = 145;

	t74 = ((x309-x310)==(x311<=x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x314 = 1U;
	static int16_t x315 = INT16_MIN;
	int32_t t75 = -698946513;

	t75 = ((x313-x314)==(x315<=x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -1;
	uint32_t x318 = 7075U;
	volatile int32_t x320 = -1;
	static volatile int32_t t76 = 6;

	t76 = ((x317-x318)==(x319<=x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MAX;
	uint64_t x322 = UINT64_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile int8_t x324 = INT8_MIN;
	int32_t t77 = 3531269;

	t77 = ((x321-x322)==(x323<=x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = INT64_MIN;
	static int64_t x326 = -956LL;
	int32_t x328 = INT32_MIN;
	int32_t t78 = 117;

	t78 = ((x325-x326)==(x327<=x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x331 = 1U;
	int32_t x332 = -51;
	int32_t t79 = -2004;

	t79 = ((x329-x330)==(x331<=x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MIN;
	static volatile uint16_t x335 = UINT16_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t80 = 158;

	t80 = ((x333-x334)==(x335<=x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x337 = -1;
	int8_t x338 = -1;
	int32_t x339 = -1;
	static volatile int32_t t81 = 925943601;

	t81 = ((x337-x338)==(x339<=x340));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = INT64_MAX;
	uint8_t x346 = UINT8_MAX;
	int32_t t82 = 412591;

	t82 = ((x345-x346)==(x347<=x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x353 = 3775U;
	int8_t x354 = INT8_MAX;
	volatile int64_t x355 = INT64_MIN;
	int16_t x356 = 1;
	int32_t t83 = 206;

	t83 = ((x353-x354)==(x355<=x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = -88662381;
	volatile uint16_t x359 = UINT16_MAX;
	static volatile int32_t t84 = 12126;

	t84 = ((x357-x358)==(x359<=x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x362 = -85903997841907363LL;
	static int8_t x363 = -1;
	static int64_t x364 = 59447482181LL;
	int32_t t85 = 3;

	t85 = ((x361-x362)==(x363<=x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = INT8_MIN;
	int16_t x367 = -31;
	volatile uint32_t x368 = UINT32_MAX;
	static int32_t t86 = -3;

	t86 = ((x365-x366)==(x367<=x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x373 = 15U;
	int32_t x374 = -1;
	uint32_t x375 = 30217U;
	uint8_t x376 = 15U;

	t87 = ((x373-x374)==(x375<=x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x377 = UINT64_MAX;
	static volatile int32_t x378 = INT32_MIN;
	volatile int32_t x380 = 0;
	static volatile int32_t t88 = -25647;

	t88 = ((x377-x378)==(x379<=x380));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x381 = UINT64_MAX;
	static int8_t x383 = INT8_MIN;
	int32_t x384 = 14387471;

	t89 = ((x381-x382)==(x383<=x384));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x389 = 48LLU;
	volatile int8_t x390 = -31;
	static int16_t x391 = -165;
	uint16_t x392 = 9U;
	static int32_t t90 = -58;

	t90 = ((x389-x390)==(x391<=x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = INT8_MAX;
	static volatile int32_t x394 = -1;
	static int16_t x395 = INT16_MAX;
	uint32_t x396 = 227114889U;
	static int32_t t91 = 84;

	t91 = ((x393-x394)==(x395<=x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = INT8_MIN;
	static volatile int8_t x398 = INT8_MAX;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;
	int32_t t92 = 191;

	t92 = ((x397-x398)==(x399<=x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x401 = 80LLU;
	int64_t x402 = 87137926777943LL;
	uint8_t x403 = 1U;
	int8_t x404 = INT8_MIN;
	volatile int32_t t93 = 685889;

	t93 = ((x401-x402)==(x403<=x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x406 = 5LLU;
	static int16_t x407 = 7;
	int32_t x408 = INT32_MIN;
	volatile int32_t t94 = -184380;

	t94 = ((x405-x406)==(x407<=x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x410 = -1;
	int16_t x412 = INT16_MIN;

	t95 = ((x409-x410)==(x411<=x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = INT64_MIN;
	volatile int32_t x418 = INT32_MIN;
	uint64_t x419 = 1206326194021LLU;
	static volatile int8_t x420 = INT8_MIN;
	int32_t t96 = -201018;

	t96 = ((x417-x418)==(x419<=x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x421 = 1U;
	int16_t x422 = -1;
	static int32_t x423 = -1;
	int8_t x424 = 7;
	int32_t t97 = 396;

	t97 = ((x421-x422)==(x423<=x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x425 = 3U;
	int32_t x426 = -1;
	static int16_t x427 = INT16_MIN;
	volatile int16_t x428 = INT16_MAX;

	t98 = ((x425-x426)==(x427<=x428));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x429 = 1243U;
	uint64_t x430 = 3992229274768962908LLU;
	int8_t x431 = 7;
	volatile int32_t t99 = 23;

	t99 = ((x429-x430)==(x431<=x432));

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

