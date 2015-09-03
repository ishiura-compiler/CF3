#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1;
volatile uint8_t x8 = 1U;
volatile int64_t x9 = INT64_MIN;
int32_t x15 = -1;
static uint64_t t4 = 43466425390LLU;
uint64_t x21 = 11071502954961747LLU;
uint32_t x27 = 90851U;
int8_t x30 = 2;
int8_t x38 = INT8_MAX;
static volatile uint32_t x39 = 3074804U;
uint32_t x40 = 14788601U;
int64_t x47 = -249783023325LL;
volatile int64_t t9 = 14LL;
int8_t x52 = -48;
static uint64_t x60 = 15LLU;
int32_t x69 = -1;
static int32_t t14 = -2;
static int64_t t15 = -113343LL;
int16_t x98 = INT16_MAX;
volatile int64_t t20 = 524989508LL;
volatile int8_t x104 = INT8_MAX;
int32_t x107 = -1;
uint16_t x109 = UINT16_MAX;
volatile uint64_t t23 = 81818084964815LLU;
volatile int16_t x114 = INT16_MAX;
uint32_t x116 = 61340U;
int32_t x118 = INT32_MIN;
volatile int64_t t26 = INT64_MAX;
static int8_t x129 = -31;
int32_t x135 = -1;
volatile uint8_t x137 = 7U;
volatile uint64_t t32 = 30847904188204LLU;
static volatile int8_t x158 = 1;
uint8_t x159 = 5U;
volatile int32_t t34 = -58;
int64_t x161 = INT64_MAX;
int16_t x162 = -1;
int32_t x166 = INT32_MIN;
int16_t x169 = INT16_MIN;
static uint16_t x172 = 6893U;
int64_t t37 = -228482490LL;
int8_t x174 = INT8_MIN;
int32_t x175 = -52859;
uint16_t x185 = 7356U;
int16_t x186 = INT16_MIN;
int16_t x189 = 7;
volatile int16_t x190 = -1;
volatile uint64_t x191 = 607219LLU;
volatile int64_t x209 = INT64_MIN;
volatile int32_t x214 = -1;
int32_t x219 = INT32_MAX;
static int8_t x221 = 1;
int64_t t48 = 1LL;
uint64_t x230 = 155351LLU;
int32_t x238 = INT32_MAX;
int32_t x244 = INT32_MIN;
volatile uint8_t x248 = 11U;
static volatile int32_t t54 = -84;
int64_t x250 = INT64_MAX;
int64_t x263 = -22901LL;
int8_t x267 = -1;
uint32_t x269 = UINT32_MAX;
static int64_t x273 = INT64_MIN;
int64_t x275 = INT64_MIN;
volatile int16_t x276 = 1;
uint16_t x279 = UINT16_MAX;
uint32_t t61 = 138U;
int16_t x287 = -675;
volatile uint16_t x290 = 6U;
int32_t t64 = -27603;
static volatile int64_t x299 = -1LL;
int8_t x300 = INT8_MIN;
static int8_t x301 = INT8_MIN;
volatile int8_t x304 = -1;
int32_t t68 = -5413644;
uint16_t x315 = 1U;
uint32_t x316 = 110267644U;
static volatile uint64_t t70 = 3112578LLU;
uint16_t x324 = UINT16_MAX;
int64_t x325 = INT64_MIN;
int8_t x334 = INT8_MAX;
int8_t x336 = INT8_MIN;
int8_t x356 = -1;
uint64_t x360 = 263128663246735LLU;
uint64_t t80 = 104844921356421LLU;
volatile int16_t x366 = -1;
volatile int32_t t81 = -85046;
uint16_t x371 = 307U;
uint32_t x372 = UINT32_MAX;
uint32_t x384 = UINT32_MAX;
static volatile uint64_t t86 = 172LLU;
uint64_t x397 = 1LLU;
static uint8_t x399 = 24U;
int8_t x400 = 1;
int64_t t88 = -2232578578772544859LL;
volatile uint16_t x411 = 872U;
static int16_t x419 = 230;
int16_t x420 = INT16_MIN;
int32_t x429 = -1;
static volatile int32_t t93 = -1000104;
int64_t x436 = -1LL;
static volatile int64_t t95 = 119815489746111466LL;
static uint32_t x457 = 7609U;


void f0(void) {
	static uint32_t x1 = 3700U;
	int8_t x2 = INT8_MIN;
	uint32_t x4 = 912715747U;
	volatile uint32_t t0 = 71U;

	t0 = ((x1%x2)|(x3+x4));

	if (t0 != 912715766U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MAX;
	int32_t x7 = INT32_MIN;
	int32_t t1 = 288;

	t1 = ((x5%x6)|(x7+x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = UINT32_MAX;
	int8_t x11 = -27;
	int32_t x12 = INT32_MAX;
	static volatile int64_t t2 = -328LL;

	t2 = ((x9%x10)|(x11+x12));

	if (t2 != -28LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int64_t x14 = INT64_MIN;
	uint8_t x16 = UINT8_MAX;
	volatile int64_t t3 = -15687554898625154LL;

	t3 = ((x13%x14)|(x15+x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 1131960386LLU;
	int64_t x18 = INT64_MIN;
	int32_t x19 = -1;
	static volatile int8_t x20 = -1;

	t4 = ((x17%x18)|(x19+x20));

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	static uint16_t x23 = 84U;
	static volatile int8_t x24 = INT8_MIN;
	uint64_t t5 = 637290113414280LLU;

	t5 = ((x21%x22)|(x23+x24));

	if (t5 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -43;
	int32_t x26 = INT32_MIN;
	static int32_t x28 = -1;
	volatile uint32_t t6 = 476297U;

	t6 = ((x25%x26)|(x27+x28));

	if (t6 != 4294967287U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	volatile uint8_t x31 = 19U;
	int32_t x32 = -1;
	int32_t t7 = 290;

	t7 = ((x29%x30)|(x31+x32));

	if (t7 != 18) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = -1;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = ((x37%x38)|(x39+x40));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x45 = 0U;
	int32_t x46 = -1;
	int64_t x48 = 1LL;

	t9 = ((x45%x46)|(x47+x48));

	if (t9 != -249783023324LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 329;
	int8_t x50 = -1;
	uint64_t x51 = UINT64_MAX;
	static uint64_t t10 = 1073697LLU;

	t10 = ((x49%x50)|(x51+x52));

	if (t10 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 5581;
	volatile int8_t x54 = 6;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = -1;
	volatile int32_t t11 = -33413018;

	t11 = ((x53%x54)|(x55+x56));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	int32_t x58 = 1523;
	uint16_t x59 = 2399U;
	volatile uint64_t t12 = 296547654LLU;

	t12 = ((x57%x58)|(x59+x60));

	if (t12 != 18446744073709550958LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x65 = 578200042U;
	volatile int64_t x66 = INT64_MIN;
	uint64_t x67 = UINT64_MAX;
	static uint32_t x68 = 427U;
	static uint64_t t13 = 5553116352628LLU;

	t13 = ((x65%x66)|(x67+x68));

	if (t13 != 578200042LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x70 = 26;
	int16_t x71 = INT16_MIN;
	volatile int8_t x72 = INT8_MIN;

	t14 = ((x69%x70)|(x71+x72));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MAX;
	int16_t x74 = -7175;
	int64_t x75 = INT64_MIN;
	static uint32_t x76 = 2347250U;

	t15 = ((x73%x74)|(x75+x76));

	if (t15 != -9223372036852426509LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 0LLU;
	static int8_t x78 = INT8_MIN;
	int16_t x79 = INT16_MIN;
	int8_t x80 = -3;
	volatile uint64_t t16 = 34LLU;

	t16 = ((x77%x78)|(x79+x80));

	if (t16 != 18446744073709518845LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x81 = -177;
	volatile uint64_t x82 = UINT64_MAX;
	static uint8_t x83 = 1U;
	int64_t x84 = INT64_MIN;
	uint64_t t17 = 1062650LLU;

	t17 = ((x81%x82)|(x83+x84));

	if (t17 != 18446744073709551439LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MAX;
	volatile uint32_t x87 = UINT32_MAX;
	volatile int8_t x88 = INT8_MIN;
	static uint32_t t18 = UINT32_MAX;

	t18 = ((x85%x86)|(x87+x88));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MIN;
	uint64_t x94 = 463LLU;
	int64_t x95 = -1LL;
	uint32_t x96 = 14734321U;
	volatile uint64_t t19 = 8006121LLU;

	t19 = ((x93%x94)|(x95+x96));

	if (t19 != 14734334LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MAX;
	int64_t x99 = INT64_MIN;
	static uint16_t x100 = 7U;

	t20 = ((x97%x98)|(x99+x100));

	if (t20 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x101 = 35458771882923274LLU;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = 8;
	uint64_t t21 = 3579LLU;

	t21 = ((x101%x102)|(x103+x104));

	if (t21 != 2931740319LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x105 = -1;
	static uint8_t x106 = UINT8_MAX;
	volatile int64_t x108 = INT64_MAX;
	int64_t t22 = -2196LL;

	t22 = ((x105%x106)|(x107+x108));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x110 = INT64_MAX;
	uint64_t x111 = 13838474LLU;
	static uint16_t x112 = 1U;

	t23 = ((x109%x110)|(x111+x112));

	if (t23 != 13893631LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x113 = -1LL;
	uint16_t x115 = 9561U;
	volatile int64_t t24 = -1206258LL;

	t24 = ((x113%x114)|(x115+x116));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = -1;
	static int16_t x119 = 15907;
	uint8_t x120 = 26U;
	volatile int32_t t25 = 65109431;

	t25 = ((x117%x118)|(x119+x120));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = -1;
	static volatile uint32_t x122 = 144773U;
	int8_t x123 = INT8_MIN;
	int64_t x124 = INT64_MAX;

	t26 = ((x121%x122)|(x123+x124));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x125 = -1;
	volatile int8_t x126 = 1;
	volatile int64_t x127 = 224163LL;
	static int64_t x128 = -1LL;
	static volatile int64_t t27 = 679680624893LL;

	t27 = ((x125%x126)|(x127+x128));

	if (t27 != 224162LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x130 = INT32_MAX;
	static uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MAX;
	volatile int32_t t28 = 3875297;

	t28 = ((x129%x130)|(x131+x132));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = -31067LL;
	int16_t x134 = INT16_MIN;
	int64_t x136 = -1LL;
	volatile int64_t t29 = 452486841LL;

	t29 = ((x133%x134)|(x135+x136));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x138 = 884;
	static uint64_t x139 = UINT64_MAX;
	volatile int16_t x140 = INT16_MAX;
	static uint64_t t30 = 15247LLU;

	t30 = ((x137%x138)|(x139+x140));

	if (t30 != 32767LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x141 = -1;
	int32_t x142 = -1;
	uint8_t x143 = 18U;
	static uint64_t x144 = 115342720447396614LLU;
	uint64_t t31 = 33158043LLU;

	t31 = ((x141%x142)|(x143+x144));

	if (t31 != 115342720447396632LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = UINT64_MAX;
	uint64_t x146 = 30353703936555LLU;
	int16_t x147 = INT16_MAX;
	volatile uint32_t x148 = 0U;

	t32 = ((x145%x146)|(x147+x148));

	if (t32 != 8995162750975LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = 22U;
	volatile uint32_t x150 = 1U;
	volatile uint32_t x151 = UINT32_MAX;
	static uint16_t x152 = 111U;
	uint32_t t33 = 452U;

	t33 = ((x149%x150)|(x151+x152));

	if (t33 != 110U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x157 = 0;
	static uint16_t x160 = 12U;

	t34 = ((x157%x158)|(x159+x160));

	if (t34 != 17) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x163 = -1LL;
	int8_t x164 = -1;
	int64_t t35 = -12044580LL;

	t35 = ((x161%x162)|(x163+x164));

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x165 = INT32_MIN;
	uint16_t x167 = UINT16_MAX;
	int32_t x168 = INT32_MIN;
	int32_t t36 = -1040560;

	t36 = ((x165%x166)|(x167+x168));

	if (t36 != -2147418113) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x170 = INT64_MAX;
	int32_t x171 = -1;

	t37 = ((x169%x170)|(x171+x172));

	if (t37 != -25876LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x173 = INT8_MIN;
	uint32_t x176 = 327212U;
	volatile uint32_t t38 = 14U;

	t38 = ((x173%x174)|(x175+x176));

	if (t38 != 274353U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = -50;
	static int8_t x182 = 1;
	static uint32_t x183 = 504U;
	uint16_t x184 = 4014U;
	uint32_t t39 = 174417U;

	t39 = ((x181%x182)|(x183+x184));

	if (t39 != 4518U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x187 = -1;
	int8_t x188 = -1;
	int32_t t40 = -1538;

	t40 = ((x185%x186)|(x187+x188));

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x192 = INT64_MIN;
	volatile uint64_t t41 = 292LLU;

	t41 = ((x189%x190)|(x191+x192));

	if (t41 != 9223372036855383027LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x193 = 1055868;
	uint8_t x194 = 10U;
	int64_t x195 = -1LL;
	volatile uint8_t x196 = UINT8_MAX;
	int64_t t42 = -435LL;

	t42 = ((x193%x194)|(x195+x196));

	if (t42 != 254LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MAX;
	int32_t x199 = INT32_MAX;
	uint64_t x200 = 123367LLU;
	static volatile uint64_t t43 = 1757LLU;

	t43 = ((x197%x198)|(x199+x200));

	if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = INT32_MAX;
	volatile int16_t x202 = -1;
	volatile int32_t x203 = 1;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t44 = -54;

	t44 = ((x201%x202)|(x203+x204));

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x210 = -1LL;
	volatile int8_t x211 = INT8_MAX;
	int32_t x212 = INT32_MIN;
	int64_t t45 = -58730688938368LL;

	t45 = ((x209%x210)|(x211+x212));

	if (t45 != -2147483521LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x213 = UINT64_MAX;
	int64_t x215 = -192135LL;
	static uint8_t x216 = 30U;
	uint64_t t46 = 511717LLU;

	t46 = ((x213%x214)|(x215+x216));

	if (t46 != 18446744073709359511LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x217 = 24871LLU;
	static int32_t x218 = 63761;
	static int8_t x220 = -1;
	static uint64_t t47 = 2128041397615882880LLU;

	t47 = ((x217%x218)|(x219+x220));

	if (t47 != 2147483647LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x222 = -1272LL;
	volatile int8_t x223 = -1;
	uint16_t x224 = 7465U;

	t48 = ((x221%x222)|(x223+x224));

	if (t48 != 7465LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = -1LL;
	int64_t x226 = INT64_MAX;
	int8_t x227 = -1;
	static uint8_t x228 = UINT8_MAX;
	volatile int64_t t49 = -11008LL;

	t49 = ((x225%x226)|(x227+x228));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x229 = INT64_MIN;
	volatile int16_t x231 = -12;
	int8_t x232 = 49;
	volatile uint64_t t50 = 1044824897273LLU;

	t50 = ((x229%x230)|(x231+x232));

	if (t50 != 32447LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x233 = 9U;
	int32_t x234 = INT32_MAX;
	volatile int64_t x235 = -1LL;
	uint64_t x236 = 1012636188099LLU;
	uint64_t t51 = 480649113LLU;

	t51 = ((x233%x234)|(x235+x236));

	if (t51 != 1012636188107LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x237 = INT32_MIN;
	uint32_t x239 = 2170773U;
	volatile uint8_t x240 = UINT8_MAX;
	uint32_t t52 = UINT32_MAX;

	t52 = ((x237%x238)|(x239+x240));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x241 = 47U;
	uint8_t x242 = 23U;
	uint64_t x243 = 252603833562027837LLU;
	uint64_t t53 = 24LLU;

	t53 = ((x241%x242)|(x243+x244));

	if (t53 != 252603831414544189LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x245 = INT32_MIN;
	static int8_t x246 = -1;
	volatile int16_t x247 = 2;

	t54 = ((x245%x246)|(x247+x248));

	if (t54 != 13) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x249 = INT8_MIN;
	int32_t x251 = -131356930;
	static volatile uint32_t x252 = 3935U;
	volatile int64_t t55 = 2187LL;

	t55 = ((x249%x250)|(x251+x252));

	if (t55 != -35LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x261 = -1;
	int32_t x262 = 919573;
	int16_t x264 = INT16_MAX;
	int64_t t56 = -14042441848LL;

	t56 = ((x261%x262)|(x263+x264));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = -1;
	int8_t x266 = INT8_MIN;
	static int8_t x268 = 3;
	int32_t t57 = -204245249;

	t57 = ((x265%x266)|(x267+x268));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x270 = UINT16_MAX;
	int16_t x271 = -1;
	static volatile uint8_t x272 = 16U;
	volatile uint32_t t58 = 41261333U;

	t58 = ((x269%x270)|(x271+x272));

	if (t58 != 15U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x274 = 10;
	int64_t t59 = -6LL;

	t59 = ((x273%x274)|(x275+x276));

	if (t59 != -7LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = INT32_MAX;
	volatile int64_t x278 = -14939691314LL;
	int64_t x280 = -1791147565487602395LL;
	static volatile int64_t t60 = -62271148050240148LL;

	t60 = ((x277%x278)|(x279+x280));

	if (t60 != -1791147565266239489LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x281 = 1U;
	uint16_t x282 = 1142U;
	static uint32_t x283 = 32194U;
	int16_t x284 = INT16_MAX;

	t61 = ((x281%x282)|(x283+x284));

	if (t61 != 64961U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = -706;
	volatile int64_t x286 = 31907201LL;
	static int8_t x288 = -2;
	static volatile int64_t t62 = -53822284589LL;

	t62 = ((x285%x286)|(x287+x288));

	if (t62 != -641LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x289 = 3663475;
	int8_t x291 = -1;
	volatile int16_t x292 = INT16_MIN;
	int32_t t63 = 90;

	t63 = ((x289%x290)|(x291+x292));

	if (t63 != -32769) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = INT32_MAX;
	int16_t x294 = -1863;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = INT32_MIN;

	t64 = ((x293%x294)|(x295+x296));

	if (t64 != -2147481857) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x297 = INT32_MIN;
	int32_t x298 = -1;
	volatile int64_t t65 = 6964261LL;

	t65 = ((x297%x298)|(x299+x300));

	if (t65 != -129LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x302 = 28905930016312LLU;
	int16_t x303 = INT16_MIN;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = ((x301%x302)|(x303+x304));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = -1;
	int16_t x306 = -1;
	static int32_t x307 = INT32_MIN;
	uint64_t x308 = 1752755761933LLU;
	volatile uint64_t t67 = 219LLU;

	t67 = ((x305%x306)|(x307+x308));

	if (t67 != 1750608278285LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x309 = UINT8_MAX;
	int8_t x310 = INT8_MIN;
	static int8_t x311 = INT8_MAX;
	uint8_t x312 = UINT8_MAX;

	t68 = ((x309%x310)|(x311+x312));

	if (t68 != 383) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = -1LL;
	static int8_t x314 = INT8_MIN;
	int64_t t69 = 177831073783589322LL;

	t69 = ((x313%x314)|(x315+x316));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x317 = 1U;
	uint16_t x318 = 7U;
	int32_t x319 = 536;
	uint64_t x320 = 307824125540790LLU;

	t70 = ((x317%x318)|(x319+x320));

	if (t70 != 307824125541327LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = INT16_MAX;
	uint8_t x322 = 2U;
	uint64_t x323 = 45729961782087LLU;
	volatile uint64_t t71 = 0LLU;

	t71 = ((x321%x322)|(x323+x324));

	if (t71 != 45729961847623LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x326 = 3138895LLU;
	int8_t x327 = 11;
	int32_t x328 = -1;
	volatile uint64_t t72 = 96378160757LLU;

	t72 = ((x325%x326)|(x327+x328));

	if (t72 != 64238LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x329 = UINT16_MAX;
	static uint64_t x330 = 21LLU;
	int8_t x331 = INT8_MAX;
	static int16_t x332 = INT16_MIN;
	uint64_t t73 = 12934386389108674LLU;

	t73 = ((x329%x330)|(x331+x332));

	if (t73 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x333 = -13;
	int32_t x335 = -1;
	volatile int32_t t74 = 0;

	t74 = ((x333%x334)|(x335+x336));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x341 = 632LLU;
	volatile int64_t x342 = 1860684907880544LL;
	int16_t x343 = 811;
	int32_t x344 = INT32_MIN;
	uint64_t t75 = 16111614LLU;

	t75 = ((x341%x342)|(x343+x344));

	if (t75 != 18446744071562068859LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x345 = -1LL;
	volatile int8_t x346 = -50;
	int32_t x347 = INT32_MIN;
	int64_t x348 = -3354757LL;
	volatile int64_t t76 = 8862877330108379LL;

	t76 = ((x345%x346)|(x347+x348));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = -2;
	int32_t x351 = INT32_MIN;
	uint64_t x352 = UINT64_MAX;
	static volatile uint64_t t77 = 3976013915521097LLU;

	t77 = ((x349%x350)|(x351+x352));

	if (t77 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x353 = 3677538LLU;
	int8_t x354 = -5;
	int8_t x355 = -1;
	uint64_t t78 = 878251777491LLU;

	t78 = ((x353%x354)|(x355+x356));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x357 = 1548LLU;
	int64_t x358 = -1LL;
	static int8_t x359 = INT8_MIN;
	volatile uint64_t t79 = 22000LLU;

	t79 = ((x357%x358)|(x359+x360));

	if (t79 != 263128663246607LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = INT64_MIN;
	static volatile int32_t x362 = -1;
	static volatile int16_t x363 = INT16_MIN;
	uint64_t x364 = UINT64_MAX;

	t80 = ((x361%x362)|(x363+x364));

	if (t80 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = -1;
	int8_t x367 = -1;
	int8_t x368 = 0;

	t81 = ((x365%x366)|(x367+x368));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = INT8_MAX;
	uint8_t x370 = 69U;
	uint32_t t82 = 1395259630U;

	t82 = ((x369%x370)|(x371+x372));

	if (t82 != 314U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x377 = INT16_MAX;
	uint64_t x378 = 6278985523488650169LLU;
	int64_t x379 = INT64_MIN;
	int32_t x380 = 144651;
	static volatile uint64_t t83 = 332513086180375LLU;

	t83 = ((x377%x378)|(x379+x380));

	if (t83 != 9223372036854939647LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x381 = UINT32_MAX;
	volatile int16_t x382 = INT16_MIN;
	volatile int16_t x383 = INT16_MIN;
	uint32_t t84 = 1952U;

	t84 = ((x381%x382)|(x383+x384));

	if (t84 != 4294934527U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = INT64_MAX;
	int16_t x390 = -1;
	static int64_t x391 = 15942121LL;
	int16_t x392 = INT16_MIN;
	static int64_t t85 = 9353667793973LL;

	t85 = ((x389%x390)|(x391+x392));

	if (t85 != 15909353LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int32_t x394 = INT32_MIN;
	uint32_t x395 = UINT32_MAX;
	uint64_t x396 = 493197374210366LLU;

	t86 = ((x393%x394)|(x395+x396));

	if (t86 != 493201832017919LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x398 = UINT8_MAX;
	volatile uint64_t t87 = 318LLU;

	t87 = ((x397%x398)|(x399+x400));

	if (t87 != 25LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	int32_t x407 = 3;
	volatile uint32_t x408 = 12U;

	t88 = ((x405%x406)|(x407+x408));

	if (t88 != 15LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = INT16_MIN;
	volatile uint64_t x410 = UINT64_MAX;
	uint32_t x412 = UINT32_MAX;
	uint64_t t89 = 90008LLU;

	t89 = ((x409%x410)|(x411+x412));

	if (t89 != 18446744073709519719LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = INT8_MIN;
	int32_t x414 = INT32_MAX;
	int8_t x415 = -17;
	uint16_t x416 = UINT16_MAX;
	int32_t t90 = 3645868;

	t90 = ((x413%x414)|(x415+x416));

	if (t90 != -18) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x417 = 0;
	uint16_t x418 = 31874U;
	int32_t t91 = -106470686;

	t91 = ((x417%x418)|(x419+x420));

	if (t91 != -32538) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x425 = INT8_MIN;
	static int32_t x426 = INT32_MAX;
	static int8_t x427 = INT8_MAX;
	int16_t x428 = INT16_MAX;
	volatile int32_t t92 = -3426369;

	t92 = ((x425%x426)|(x427+x428));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x430 = 2;
	uint16_t x431 = UINT16_MAX;
	volatile uint16_t x432 = 1U;

	t93 = ((x429%x430)|(x431+x432));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x433 = 46LLU;
	static int16_t x434 = INT16_MIN;
	static volatile int16_t x435 = INT16_MIN;
	uint64_t t94 = 94LLU;

	t94 = ((x433%x434)|(x435+x436));

	if (t94 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x445 = INT32_MIN;
	int64_t x446 = INT64_MIN;
	static uint8_t x447 = 2U;
	uint16_t x448 = 0U;

	t95 = ((x445%x446)|(x447+x448));

	if (t95 != -2147483646LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x449 = INT16_MIN;
	static int64_t x450 = INT64_MAX;
	int8_t x451 = -3;
	uint16_t x452 = 1974U;
	static volatile int64_t t96 = -88740989860163036LL;

	t96 = ((x449%x450)|(x451+x452));

	if (t96 != -30797LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x453 = INT8_MAX;
	int32_t x454 = -1;
	uint16_t x455 = 25U;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t97 = -249292442;

	t97 = ((x453%x454)|(x455+x456));

	if (t97 != 280) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x458 = -27868LL;
	uint16_t x459 = 11U;
	int8_t x460 = INT8_MIN;
	int64_t t98 = 9197556782196LL;

	t98 = ((x457%x458)|(x459+x460));

	if (t98 != -69LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x461 = INT32_MIN;
	int16_t x462 = INT16_MIN;
	uint64_t x463 = 3436537540562LLU;
	volatile int16_t x464 = -1;
	volatile uint64_t t99 = 7215937LLU;

	t99 = ((x461%x462)|(x463+x464));

	if (t99 != 3436537540561LLU) { NG(); } else { ; }
	
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

