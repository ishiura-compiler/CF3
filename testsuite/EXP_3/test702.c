#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = 124;
int64_t x15 = INT64_MIN;
int64_t x16 = -1520143483566098LL;
uint32_t x17 = 1402929U;
uint32_t x19 = 7979099U;
volatile uint64_t t4 = 468903958LLU;
uint8_t x21 = UINT8_MAX;
int32_t x24 = INT32_MIN;
static volatile int32_t t5 = 80;
static int8_t x26 = 0;
uint8_t x37 = UINT8_MAX;
uint64_t x53 = 14807786244LLU;
int64_t x65 = INT64_MIN;
int16_t x68 = -19;
uint16_t x80 = 7U;
int16_t x81 = INT16_MIN;
static int64_t x84 = INT64_MIN;
volatile uint8_t x85 = 3U;
int64_t x95 = 27719649104LL;
int64_t x98 = INT64_MAX;
int64_t x100 = INT64_MIN;
int16_t x101 = INT16_MAX;
static uint32_t x104 = UINT32_MAX;
uint8_t x105 = 0U;
int64_t x110 = INT64_MIN;
int16_t x115 = -202;
int64_t x116 = -70802008206LL;
volatile int64_t t26 = 59309LL;
volatile uint32_t t28 = 927517639U;
static volatile int16_t x138 = INT16_MIN;
int16_t x140 = INT16_MIN;
volatile int32_t x147 = 0;
int16_t x153 = INT16_MAX;
uint32_t x159 = 38U;
volatile uint64_t t35 = 8454716270LLU;
uint64_t x169 = 126LLU;
int32_t x183 = INT32_MIN;
uint64_t t37 = 749723LLU;
static uint32_t x185 = 6U;
int64_t x189 = INT64_MAX;
volatile int32_t x191 = 657660;
int16_t x192 = 1136;
int8_t x193 = -62;
uint8_t x194 = 6U;
uint64_t t40 = 208LLU;
volatile int16_t x204 = -1994;
volatile uint32_t x214 = UINT32_MAX;
uint64_t t46 = 113525729LLU;
int64_t x229 = 12LL;
uint64_t x232 = 2221446LLU;
int32_t x234 = 907593100;
static volatile uint32_t x237 = UINT32_MAX;
static int8_t x240 = INT8_MIN;
int64_t t49 = -8175470LL;
volatile int8_t x241 = -5;
int8_t x242 = -1;
int8_t x255 = 12;
int64_t x258 = -1LL;
int16_t x262 = 18;
int16_t x276 = -1;
volatile int64_t t59 = 387558LL;
uint16_t x291 = UINT16_MAX;
volatile uint16_t x292 = UINT16_MAX;
int8_t x300 = -1;
static volatile int64_t t61 = -648979672000396LL;
uint32_t x307 = UINT32_MAX;
volatile uint64_t x309 = 2279849276357154993LLU;
int64_t x312 = INT64_MIN;
uint64_t x318 = UINT64_MAX;
int8_t x324 = 30;
static uint64_t x326 = 14875420359LLU;
static volatile uint64_t x340 = 2188608198159837LLU;
volatile uint64_t t69 = 758741040182LLU;
int8_t x347 = INT8_MIN;
volatile int32_t t73 = -47974690;
int16_t x363 = INT16_MIN;
int16_t x365 = -118;
int8_t x366 = -5;
volatile int64_t t77 = 785301357153705LL;
int16_t x378 = INT16_MIN;
int8_t x387 = INT8_MIN;
static uint16_t x388 = UINT16_MAX;
static int16_t x398 = -1;
uint64_t t83 = 2357990155365568654LLU;
uint32_t x403 = 0U;
uint32_t t84 = 18639U;
volatile int64_t t87 = 3868LL;
volatile uint16_t x426 = 3U;
int64_t x431 = -1LL;
int16_t x432 = -1;
int64_t t92 = -1069532766LL;
int8_t x437 = 3;
volatile uint64_t t94 = 201627216LLU;
int8_t x459 = 34;
volatile int16_t x469 = INT16_MIN;
int8_t x470 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint8_t x2 = 6U;
	volatile int32_t x3 = -19449613;
	volatile int32_t t0 = -93387787;

	t0 = ((x1-x2)^(x3%x4));

	if (t0 != 32861) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -73;
	static volatile uint32_t x6 = 3265945U;
	volatile int32_t x7 = -355134;
	static int32_t x8 = 6;
	uint32_t t1 = 10417U;

	t1 = ((x5-x6)^(x7%x8));

	if (t1 != 4291701278U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	int8_t x10 = -1;
	uint16_t x11 = UINT16_MAX;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -11018537;

	t2 = ((x9-x10)^(x11%x12));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 784249462699203LL;
	uint32_t x14 = 1101U;
	volatile int64_t t3 = 966005770479473809LL;

	t3 = ((x13-x14)^(x15%x16));

	if (t3 != -159308221898016LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 94616428817LLU;
	int32_t x20 = -7250;

	t4 = ((x17-x18)^(x19%x20));

	if (t4 != 18446743979102340987LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 105U;
	int8_t x23 = -3;

	t5 = ((x21-x22)^(x23%x24));

	if (t5 != -149) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = UINT16_MAX;
	int8_t x27 = INT8_MIN;
	static uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -5648069;

	t6 = ((x25-x26)^(x27%x28));

	if (t6 != -65409) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 0;
	int32_t x34 = 1750;
	uint8_t x35 = 4U;
	uint16_t x36 = 93U;
	int32_t t7 = -1112574;

	t7 = ((x33-x34)^(x35%x36));

	if (t7 != -1746) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x38 = -49;
	uint8_t x39 = 6U;
	volatile uint8_t x40 = 2U;
	static int32_t t8 = -11593525;

	t8 = ((x37-x38)^(x39%x40));

	if (t8 != 304) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 401LL;
	volatile int64_t x42 = -4954717LL;
	int64_t x43 = -1LL;
	int16_t x44 = INT16_MIN;
	static volatile int64_t t9 = 43749638518555857LL;

	t9 = ((x41-x42)^(x43%x44));

	if (t9 != -4955119LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	static int64_t x46 = -1LL;
	int8_t x47 = -1;
	static int8_t x48 = INT8_MIN;
	volatile int64_t t10 = 2112726511663670155LL;

	t10 = ((x45-x46)^(x47%x48));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = -14995691143649625LL;
	static int64_t x50 = -88LL;
	uint64_t x51 = 54754816LLU;
	int8_t x52 = 7;
	uint64_t t11 = 16644LLU;

	t11 = ((x49-x50)^(x51%x52));

	if (t11 != 18431748382565902075LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = INT32_MIN;
	int16_t x55 = INT16_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t12 = 1578424472487049LLU;

	t12 = ((x53-x54)^(x55%x56));

	if (t12 != 18446744056754299652LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x66 = 0;
	int32_t x67 = -3590;
	int64_t t13 = -10359763727727270LL;

	t13 = ((x65-x66)^(x67%x68));

	if (t13 != 9223372036854775790LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x69 = 30939U;
	static int16_t x70 = -2;
	uint8_t x71 = 56U;
	int8_t x72 = INT8_MIN;
	int32_t t14 = 57465;

	t14 = ((x69-x70)^(x71%x72));

	if (t14 != 30949) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MAX;
	int32_t x74 = 24602325;
	int16_t x75 = INT16_MIN;
	int16_t x76 = 4;
	static volatile int32_t t15 = -34713;

	t15 = ((x73-x74)^(x75%x76));

	if (t15 != -24602198) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	volatile int16_t x78 = -1;
	static int64_t x79 = INT64_MIN;
	volatile int64_t t16 = -21840914LL;

	t16 = ((x77-x78)^(x79%x80));

	if (t16 != 126LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x82 = -1;
	uint8_t x83 = 19U;
	volatile int64_t t17 = -61090440LL;

	t17 = ((x81-x82)^(x83%x84));

	if (t17 != -32750LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x86 = INT64_MAX;
	int32_t x87 = -305;
	uint8_t x88 = UINT8_MAX;
	volatile int64_t t18 = 4193756795008LL;

	t18 = ((x85-x86)^(x87%x88));

	if (t18 != 9223372036854775754LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = INT8_MIN;
	int64_t x90 = -3767127601846883LL;
	int16_t x91 = -425;
	int32_t x92 = -3055853;
	volatile int64_t t19 = 5251LL;

	t19 = ((x89-x90)^(x91%x92));

	if (t19 != -3767127601846348LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = UINT16_MAX;
	int16_t x94 = -16094;
	int16_t x96 = -17;
	volatile int64_t t20 = 189546853725LL;

	t20 = ((x93-x94)^(x95%x96));

	if (t20 != 81627LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x97 = 942814890LLU;
	static int16_t x99 = -1;
	volatile uint64_t t21 = 28LLU;

	t21 = ((x97-x98)^(x99%x100));

	if (t21 != 9223372035911960916LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x102 = 60U;
	volatile int32_t x103 = -5;
	volatile uint32_t t22 = 1265U;

	t22 = ((x101-x102)^(x103%x104));

	if (t22 != 4294934584U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x106 = INT16_MAX;
	int64_t x107 = -1LL;
	int64_t x108 = INT64_MIN;
	int64_t t23 = 8LL;

	t23 = ((x105-x106)^(x107%x108));

	if (t23 != 32766LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MIN;
	int16_t x111 = INT16_MIN;
	volatile uint8_t x112 = 74U;
	int64_t t24 = 13834822906558LL;

	t24 = ((x109-x110)^(x111%x112));

	if (t24 != -60LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x113 = -1;
	uint64_t x114 = 1LLU;
	volatile uint64_t t25 = 69630LLU;

	t25 = ((x113-x114)^(x115%x116));

	if (t25 != 200LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x117 = INT8_MAX;
	int32_t x118 = -1;
	int64_t x119 = INT64_MIN;
	int64_t x120 = 11785LL;

	t26 = ((x117-x118)^(x119%x120));

	if (t26 != -8586LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x121 = 0U;
	uint32_t x122 = 2186U;
	volatile int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MAX;
	static int64_t t27 = 3306828052384752LL;

	t27 = ((x121-x122)^(x123%x124));

	if (t27 != -4294965112LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 2U;
	volatile int8_t x130 = INT8_MAX;
	uint32_t x131 = 675411472U;
	volatile uint32_t x132 = 2336U;

	t28 = ((x129-x130)^(x131%x132));

	if (t28 != 4294965811U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = 763265LLU;
	static int64_t x139 = -72335968822002LL;
	volatile uint64_t t29 = 8248747080015203LLU;

	t29 = ((x137-x138)^(x139%x140));

	if (t29 != 18446744073708746895LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x145 = 103U;
	static volatile uint16_t x146 = 917U;
	int8_t x148 = INT8_MIN;
	int32_t t30 = 52;

	t30 = ((x145-x146)^(x147%x148));

	if (t30 != -814) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x149 = INT8_MIN;
	static int8_t x150 = INT8_MIN;
	static uint16_t x151 = UINT16_MAX;
	volatile int64_t x152 = INT64_MIN;
	static volatile int64_t t31 = -248705871444378LL;

	t31 = ((x149-x150)^(x151%x152));

	if (t31 != 65535LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x154 = INT8_MIN;
	static int16_t x155 = -204;
	static uint32_t x156 = 2035U;
	volatile uint32_t t32 = 2U;

	t32 = ((x153-x154)^(x155%x156));

	if (t32 != 34567U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = 3;
	static volatile int8_t x158 = -1;
	int64_t x160 = 941LL;
	int64_t t33 = -186669LL;

	t33 = ((x157-x158)^(x159%x160));

	if (t33 != 34LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x161 = 1133U;
	int8_t x162 = INT8_MIN;
	uint16_t x163 = 0U;
	int64_t x164 = 3084726121LL;
	static int64_t t34 = 10790623409LL;

	t34 = ((x161-x162)^(x163%x164));

	if (t34 != 1261LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MIN;
	volatile int32_t x167 = INT32_MIN;
	uint64_t x168 = 233428739LLU;

	t35 = ((x165-x166)^(x167%x168));

	if (t35 != 666099LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x170 = 29U;
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = -5;
	static volatile uint64_t t36 = 7LLU;

	t36 = ((x169-x170)^(x171%x172));

	if (t36 != 97LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = 10;
	static int32_t x182 = -1;
	static uint64_t x184 = UINT64_MAX;

	t37 = ((x181-x182)^(x183%x184));

	if (t37 != 18446744071562067979LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x186 = 0;
	volatile uint16_t x187 = UINT16_MAX;
	static int8_t x188 = 53;
	static volatile uint32_t t38 = 88906900U;

	t38 = ((x185-x186)^(x187%x188));

	if (t38 != 29U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x190 = UINT8_MAX;
	volatile int64_t t39 = -68LL;

	t39 = ((x189-x190)^(x191%x192));

	if (t39 != 9223372036854774556LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x195 = INT32_MIN;
	uint64_t x196 = UINT64_MAX;

	t40 = ((x193-x194)^(x195%x196));

	if (t40 != 2147483580LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x197 = UINT16_MAX;
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = -19;
	static uint16_t x200 = 2U;
	static volatile int32_t t41 = -1526631;

	t41 = ((x197-x198)^(x199%x200));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x201 = 0U;
	volatile int64_t x202 = -11804LL;
	int16_t x203 = 7259;
	int64_t t42 = 354LL;

	t42 = ((x201-x202)^(x203%x204));

	if (t42 != 10977LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x209 = UINT64_MAX;
	volatile uint8_t x210 = 0U;
	static uint32_t x211 = 3U;
	int8_t x212 = INT8_MAX;
	static volatile uint64_t t43 = 366323787599088LLU;

	t43 = ((x209-x210)^(x211%x212));

	if (t43 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x213 = INT32_MIN;
	volatile int16_t x215 = INT16_MAX;
	volatile int64_t x216 = INT64_MIN;
	volatile int64_t t44 = 2597902LL;

	t44 = ((x213-x214)^(x215%x216));

	if (t44 != 2147516414LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x217 = UINT16_MAX;
	volatile uint16_t x218 = UINT16_MAX;
	uint32_t x219 = 219U;
	static volatile int32_t x220 = -1332572;
	uint32_t t45 = 7280U;

	t45 = ((x217-x218)^(x219%x220));

	if (t45 != 219U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x225 = 8144642568512993006LLU;
	int32_t x226 = -1;
	static int16_t x227 = -1;
	int16_t x228 = 4603;

	t46 = ((x225-x226)^(x227%x228));

	if (t46 != 10302101505196558608LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x230 = INT8_MIN;
	static uint16_t x231 = 1507U;
	volatile uint64_t t47 = 529766221835663LLU;

	t47 = ((x229-x230)^(x231%x232));

	if (t47 != 1391LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x233 = 2037171560U;
	int16_t x235 = 1731;
	int8_t x236 = INT8_MAX;
	static uint32_t t48 = 978U;

	t48 = ((x233-x234)^(x235%x236));

	if (t48 != 1129578380U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x238 = INT32_MAX;
	int64_t x239 = INT64_MAX;

	t49 = ((x237-x238)^(x239%x240));

	if (t49 != 2147483775LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x243 = -1LL;
	volatile int64_t x244 = INT64_MAX;
	int64_t t50 = -7674715792LL;

	t50 = ((x241-x242)^(x243%x244));

	if (t50 != 3LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x245 = 0U;
	static int64_t x246 = 114379LL;
	static volatile int16_t x247 = INT16_MAX;
	int16_t x248 = 145;
	int64_t t51 = -7LL;

	t51 = ((x245-x246)^(x247%x248));

	if (t51 != -114245LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x253 = INT32_MIN;
	volatile uint64_t x254 = UINT64_MAX;
	int8_t x256 = -56;
	uint64_t t52 = 3LLU;

	t52 = ((x253-x254)^(x255%x256));

	if (t52 != 18446744071562067981LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = 535;
	static int32_t x259 = INT32_MAX;
	volatile int64_t x260 = -11667LL;
	int64_t t53 = 130821995143857460LL;

	t53 = ((x257-x258)^(x259%x260));

	if (t53 != 8423LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	static int16_t x264 = -1;
	volatile int32_t t54 = 84673871;

	t54 = ((x261-x262)^(x263%x264));

	if (t54 != -146) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = INT8_MAX;
	uint64_t x266 = 28389129487757LLU;
	volatile int64_t x267 = INT64_MIN;
	int8_t x268 = INT8_MIN;
	static volatile uint64_t t55 = 36628408LLU;

	t55 = ((x265-x266)^(x267%x268));

	if (t55 != 18446715684580063986LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x269 = INT64_MIN;
	int8_t x270 = -1;
	int8_t x271 = INT8_MIN;
	volatile int16_t x272 = INT16_MIN;
	int64_t t56 = -32032LL;

	t56 = ((x269-x270)^(x271%x272));

	if (t56 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x273 = -1;
	static int32_t x274 = -487;
	uint16_t x275 = 61U;
	int32_t t57 = 15277;

	t57 = ((x273-x274)^(x275%x276));

	if (t57 != 486) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = -1;
	uint8_t x278 = 0U;
	uint64_t x279 = 246LLU;
	int16_t x280 = INT16_MAX;
	volatile uint64_t t58 = 183397LLU;

	t58 = ((x277-x278)^(x279%x280));

	if (t58 != 18446744073709551369LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x281 = 218160111759157522LL;
	uint32_t x282 = 69005825U;
	static int8_t x283 = INT8_MIN;
	int8_t x284 = -2;

	t59 = ((x281-x282)^(x283%x284));

	if (t59 != 218160111690151697LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x289 = UINT64_MAX;
	uint32_t x290 = UINT32_MAX;
	uint64_t t60 = 7450LLU;

	t60 = ((x289-x290)^(x291%x292));

	if (t60 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	uint32_t x299 = UINT32_MAX;

	t61 = ((x297-x298)^(x299%x300));

	if (t61 != -127LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x302 = 6079064U;
	static uint8_t x303 = 62U;
	int8_t x304 = 5;
	volatile uint32_t t62 = 6U;

	t62 = ((x301-x302)^(x303%x304));

	if (t62 != 4288888106U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = INT8_MAX;
	int32_t x306 = -2157;
	uint8_t x308 = UINT8_MAX;
	volatile uint32_t t63 = 14526430U;

	t63 = ((x305-x306)^(x307%x308));

	if (t63 != 2284U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x310 = 2U;
	volatile uint16_t x311 = 50U;
	static volatile uint64_t t64 = 130348LLU;

	t64 = ((x309-x310)^(x311%x312));

	if (t64 != 2279849276357154973LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = 9116379;
	int16_t x319 = INT16_MIN;
	int64_t x320 = -1042592LL;
	volatile uint64_t t65 = 11035331LLU;

	t65 = ((x317-x318)^(x319%x320));

	if (t65 != 18446744073700416220LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x321 = INT8_MAX;
	int8_t x322 = -1;
	int8_t x323 = -1;
	static int32_t t66 = 142669624;

	t66 = ((x321-x322)^(x323%x324));

	if (t66 != -129) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x325 = -6;
	uint16_t x327 = 1766U;
	static int8_t x328 = INT8_MIN;
	volatile uint64_t t67 = 901458451275750272LLU;

	t67 = ((x325-x326)^(x327%x328));

	if (t67 != 18446744058834131285LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x333 = 51U;
	int32_t x334 = -2;
	int32_t x335 = INT32_MIN;
	uint64_t x336 = 97361727250341264LLU;
	uint64_t t68 = 1584994010LLU;

	t68 = ((x333-x334)^(x335%x336));

	if (t68 != 45377621247569029LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x337 = -1;
	int64_t x338 = INT64_MIN;
	uint16_t x339 = UINT16_MAX;

	t69 = ((x337-x338)^(x339%x340));

	if (t69 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x341 = INT8_MIN;
	static uint64_t x342 = UINT64_MAX;
	int8_t x343 = INT8_MIN;
	uint8_t x344 = UINT8_MAX;
	uint64_t t70 = 10168477990359LLU;

	t70 = ((x341-x342)^(x343%x344));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x345 = 14;
	uint8_t x346 = 61U;
	static int32_t x348 = INT32_MIN;
	volatile int32_t t71 = 1161760;

	t71 = ((x345-x346)^(x347%x348));

	if (t71 != 81) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x349 = 123U;
	uint32_t x350 = 63579U;
	uint32_t x351 = 1U;
	int64_t x352 = INT64_MIN;
	int64_t t72 = -16025416LL;

	t72 = ((x349-x350)^(x351%x352));

	if (t72 != 4294903841LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x353 = INT16_MAX;
	int32_t x354 = -199;
	uint8_t x355 = 89U;
	int8_t x356 = INT8_MAX;

	t73 = ((x353-x354)^(x355%x356));

	if (t73 != 32927) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x357 = -42006LL;
	uint8_t x358 = UINT8_MAX;
	volatile int32_t x359 = INT32_MAX;
	volatile int32_t x360 = INT32_MIN;
	volatile int64_t t74 = -7LL;

	t74 = ((x357-x358)^(x359%x360));

	if (t74 != -2147441388LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x361 = INT16_MAX;
	int16_t x362 = INT16_MAX;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t75 = 3104;

	t75 = ((x361-x362)^(x363%x364));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x367 = 451214LLU;
	volatile uint16_t x368 = 7803U;
	static uint64_t t76 = 1979059167794LLU;

	t76 = ((x365-x366)^(x367%x368));

	if (t76 != 18446744073709545124LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x373 = INT64_MIN;
	int8_t x374 = -1;
	uint8_t x375 = 95U;
	int32_t x376 = 14;

	t77 = ((x373-x374)^(x375%x376));

	if (t77 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x377 = UINT32_MAX;
	int64_t x379 = INT64_MAX;
	uint64_t x380 = 24633688705957408LLU;
	volatile uint64_t t78 = 138283453386474292LLU;

	t78 = ((x377-x378)^(x379%x380));

	if (t78 != 10372460826706624LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x381 = INT8_MAX;
	volatile int8_t x382 = INT8_MIN;
	uint64_t x383 = 17131229146318079LLU;
	volatile uint16_t x384 = 10U;
	static uint64_t t79 = 1162208810928014658LLU;

	t79 = ((x381-x382)^(x383%x384));

	if (t79 != 246LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x385 = INT16_MIN;
	uint64_t x386 = 2653012LLU;
	uint64_t t80 = 4514124162117655634LLU;

	t80 = ((x385-x386)^(x387%x388));

	if (t80 != 2685740LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x389 = -20376714;
	static int16_t x390 = -1;
	int32_t x391 = -1;
	static int16_t x392 = 42;
	static int32_t t81 = 26008;

	t81 = ((x389-x390)^(x391%x392));

	if (t81 != 20376712) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MAX;
	int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	int32_t t82 = 387764;

	t82 = ((x393-x394)^(x395%x396));

	if (t82 != -32895) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x397 = 41694658U;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = UINT64_MAX;

	t83 = ((x397-x398)^(x399%x400));

	if (t83 != 18446744071603762627LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x401 = INT8_MIN;
	static volatile int8_t x402 = INT8_MIN;
	int32_t x404 = INT32_MAX;

	t84 = ((x401-x402)^(x403%x404));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x405 = 13760LLU;
	volatile int8_t x406 = INT8_MAX;
	int8_t x407 = -1;
	int32_t x408 = INT32_MIN;
	volatile uint64_t t85 = 3014848957522522904LLU;

	t85 = ((x405-x406)^(x407%x408));

	if (t85 != 18446744073709537982LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x409 = INT8_MIN;
	static int32_t x410 = -24;
	static int32_t x411 = INT32_MIN;
	volatile int64_t x412 = -1066713316958173LL;
	int64_t t86 = 119847200137514LL;

	t86 = ((x409-x410)^(x411%x412));

	if (t86 != 2147483544LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x413 = INT64_MAX;
	uint32_t x414 = 492U;
	int8_t x415 = INT8_MIN;
	int16_t x416 = 3147;

	t87 = ((x413-x414)^(x415%x416));

	if (t87 != -9223372036854775405LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x417 = -1LL;
	int8_t x418 = INT8_MIN;
	volatile uint32_t x419 = UINT32_MAX;
	int64_t x420 = -1LL;
	int64_t t88 = -1LL;

	t88 = ((x417-x418)^(x419%x420));

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x421 = 0U;
	volatile int8_t x422 = INT8_MIN;
	int64_t x423 = -10677665395LL;
	int16_t x424 = -469;
	int64_t t89 = 406LL;

	t89 = ((x421-x422)^(x423%x424));

	if (t89 != -210LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x425 = -1;
	uint16_t x427 = 4009U;
	static volatile uint64_t x428 = 2312599LLU;
	uint64_t t90 = 14030480LLU;

	t90 = ((x425-x426)^(x427%x428));

	if (t90 != 18446744073709547605LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = -1;
	static int16_t x430 = 106;
	int64_t t91 = -585442571843489075LL;

	t91 = ((x429-x430)^(x431%x432));

	if (t91 != -107LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x433 = INT8_MIN;
	int32_t x434 = -1;
	int16_t x435 = -6383;
	int64_t x436 = INT64_MIN;

	t92 = ((x433-x434)^(x435%x436));

	if (t92 != 6288LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x438 = -1;
	uint64_t x439 = UINT64_MAX;
	int16_t x440 = INT16_MAX;
	volatile uint64_t t93 = 251629947912LLU;

	t93 = ((x437-x438)^(x439%x440));

	if (t93 != 11LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x441 = 5991U;
	static uint64_t x442 = UINT64_MAX;
	uint32_t x443 = 4783U;
	uint16_t x444 = UINT16_MAX;

	t94 = ((x441-x442)^(x443%x444));

	if (t94 != 1479LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x445 = 8;
	uint16_t x446 = UINT16_MAX;
	static int64_t x447 = -22273568460819829LL;
	uint16_t x448 = 74U;
	volatile int64_t t95 = -6230920595806758LL;

	t95 = ((x445-x446)^(x447%x448));

	if (t95 != 65532LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x457 = INT16_MAX;
	int8_t x458 = -1;
	int16_t x460 = INT16_MAX;
	volatile int32_t t96 = 101830201;

	t96 = ((x457-x458)^(x459%x460));

	if (t96 != 32802) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x461 = -858692287267682159LL;
	volatile uint64_t x462 = 12705301166087266LLU;
	uint16_t x463 = UINT16_MAX;
	int64_t x464 = 57LL;
	uint64_t t97 = 987689833820LLU;

	t97 = ((x461-x462)^(x463%x464));

	if (t97 != 17575346485275782149LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x465 = INT8_MAX;
	volatile int64_t x466 = 8968021266490914LL;
	volatile int16_t x467 = INT16_MAX;
	int16_t x468 = INT16_MIN;
	int64_t t98 = -144345538845LL;

	t98 = ((x465-x466)^(x467%x468));

	if (t98 != -8968021266471518LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x471 = 368;
	static int64_t x472 = INT64_MAX;
	int64_t t99 = 1956LL;

	t99 = ((x469-x470)^(x471%x472));

	if (t99 != -32272LL) { NG(); } else { ; }
	
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

