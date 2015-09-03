#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
int8_t x4 = 6;
int16_t x6 = 7;
volatile int64_t t2 = 473458045029022LL;
uint16_t x16 = 213U;
int8_t x20 = INT8_MAX;
int64_t t5 = -48629658LL;
static volatile uint32_t x31 = 105296226U;
volatile int16_t x35 = -13138;
static int8_t x41 = INT8_MAX;
uint64_t x48 = UINT64_MAX;
int32_t x57 = INT32_MIN;
volatile int64_t x58 = INT64_MIN;
static volatile uint64_t t13 = 302243099LLU;
static uint64_t x76 = 5269LLU;
uint8_t x81 = UINT8_MAX;
int8_t x83 = INT8_MAX;
static uint64_t x89 = 0LLU;
int64_t x90 = 513334350185359301LL;
static uint64_t x93 = 18931109056437103LLU;
static volatile uint64_t t19 = 4325LLU;
uint16_t x103 = 0U;
static int64_t x105 = INT64_MAX;
volatile uint8_t x109 = UINT8_MAX;
uint16_t x111 = 9U;
uint16_t x121 = 2590U;
static int8_t x125 = INT8_MIN;
int32_t x126 = INT32_MAX;
volatile uint8_t x134 = 0U;
static int16_t x137 = -1;
uint64_t t30 = 7335943991629949LLU;
int64_t x151 = 5427504LL;
int64_t x154 = 13401457LL;
int32_t x160 = -1;
int8_t x162 = INT8_MIN;
uint8_t x171 = 30U;
uint64_t x179 = UINT64_MAX;
int32_t t40 = 822658557;
uint64_t x186 = 57163257LLU;
int8_t x199 = -58;
int32_t x200 = INT32_MIN;
uint8_t x209 = UINT8_MAX;
int64_t x210 = 15644358077513940LL;
uint8_t x216 = 21U;
int8_t x218 = INT8_MIN;
uint8_t x228 = 116U;
uint64_t x229 = UINT64_MAX;
static uint64_t x232 = 173612LLU;
static volatile int32_t t51 = 8;
static int8_t x240 = INT8_MAX;
uint64_t t52 = 27LLU;
static int8_t x244 = INT8_MIN;
volatile uint64_t x246 = UINT64_MAX;
volatile int8_t x248 = 1;
volatile uint64_t t55 = 20416759LLU;
int16_t x255 = INT16_MAX;
volatile int64_t t56 = 190649687LL;
static int32_t x273 = 228475372;
static uint16_t x281 = UINT16_MAX;
uint16_t x283 = UINT16_MAX;
volatile uint64_t x284 = UINT64_MAX;
volatile int64_t t61 = -42356033425270LL;
static uint8_t x289 = 2U;
int64_t t64 = 3460028732LL;
static volatile int16_t x305 = 785;
int16_t x307 = -11;
volatile uint32_t x325 = 103474U;
volatile int64_t t71 = 3441LL;
volatile int32_t t73 = -496004325;
int16_t x340 = INT16_MAX;
static int64_t x349 = INT64_MIN;
static int64_t x358 = 14469681LL;
int16_t x359 = 418;
int64_t x366 = 4470LL;
static uint64_t x372 = 1360LLU;
int64_t x380 = -26663867384026927LL;
int32_t x388 = -1;
static int64_t x391 = -3099961229403640LL;
int16_t x396 = -4374;
volatile int64_t x397 = -1LL;
int16_t x406 = 29;
int16_t x419 = INT16_MIN;
uint64_t x420 = 163820718LLU;
volatile int64_t x423 = INT64_MIN;
int8_t x430 = INT8_MIN;
uint64_t t91 = 20417397205840258LLU;
int8_t x435 = -1;
int16_t x460 = INT16_MIN;
volatile int64_t t95 = -15743983924LL;
uint8_t x467 = 2U;
static uint16_t x472 = UINT16_MAX;
int32_t t99 = -3086;


void f0(void) {
	volatile uint16_t x2 = 29630U;
	int16_t x3 = -6438;
	volatile uint32_t t0 = 369098778U;

	t0 = (x1-((x2-x3)/x4));

	if (t0 != 4294961284U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = UINT16_MAX;
	static uint32_t x7 = UINT32_MAX;
	volatile int32_t x8 = INT32_MIN;
	uint32_t t1 = 187160U;

	t1 = (x5-((x6-x7)/x8));

	if (t1 != 65535U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 19U;
	uint32_t x10 = 3695U;
	int64_t x11 = 533292984413LL;
	int16_t x12 = 1;

	t2 = (x9-((x10-x11)/x12));

	if (t2 != 533292980737LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 19U;
	volatile int64_t x14 = INT64_MAX;
	volatile uint64_t x15 = 1249176023156409511LLU;
	volatile uint64_t t3 = 159760532LLU;

	t3 = (x13-((x14-x15)/x16));

	if (t3 != 18409306533739136770LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	int32_t x18 = INT32_MIN;
	uint64_t x19 = UINT64_MAX;
	uint64_t t4 = 7119702LLU;

	t4 = (x17-((x18-x19)/x20));

	if (t4 != 18301494120390165254LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = 208384546438313LL;
	int32_t x22 = -1;
	int64_t x23 = INT64_MIN;
	uint16_t x24 = UINT16_MAX;

	t5 = (x21-((x22-x23)/x24));

	if (t5 != 67644910566569LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -8401;
	static int64_t x26 = -2739300191481513LL;
	uint16_t x27 = UINT16_MAX;
	int16_t x28 = -1;
	volatile int64_t t6 = -1787450054435LL;

	t6 = (x25-((x26-x27)/x28));

	if (t6 != -2739300191555449LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 7U;
	int64_t x30 = INT64_MAX;
	int16_t x32 = -1;
	volatile int64_t t7 = -468417LL;

	t7 = (x29-((x30-x31)/x32));

	if (t7 != 9223372036749479588LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 27;
	volatile int64_t x34 = INT64_MIN;
	int32_t x36 = INT32_MAX;
	int64_t t8 = -11951968817744LL;

	t8 = (x33-((x34-x35)/x36));

	if (t8 != 4294967324LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x42 = -1;
	int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MAX;
	volatile int64_t t9 = 25757364405LL;

	t9 = (x41-((x42-x43)/x44));

	if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	static uint8_t x46 = 64U;
	uint64_t x47 = UINT64_MAX;
	volatile uint64_t t10 = 3828703906LLU;

	t10 = (x45-((x46-x47)/x48));

	if (t10 != 127LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	static int16_t x50 = 5437;
	int16_t x51 = INT16_MIN;
	static int16_t x52 = INT16_MAX;
	static volatile int32_t t11 = -1;

	t11 = (x49-((x50-x51)/x52));

	if (t11 != 32766) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x59 = INT64_MIN;
	volatile int32_t x60 = -135927;
	static volatile int64_t t12 = -450120362452534513LL;

	t12 = (x57-((x58-x59)/x60));

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x69 = 4U;
	uint64_t x70 = 9168LLU;
	uint64_t x71 = 222496700792871798LLU;
	static uint64_t x72 = 104LLU;

	t13 = (x69-((x70-x71)/x72));

	if (t13 != 18271510925893044996LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = 15U;
	volatile int32_t x74 = -40;
	int64_t x75 = 26LL;
	volatile uint64_t t14 = 682299076354027619LLU;

	t14 = (x73-((x74-x75)/x76));

	if (t14 != 18443243078440295691LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MIN;
	uint64_t x78 = UINT64_MAX;
	uint64_t x79 = 1569715LLU;
	uint64_t x80 = UINT64_MAX;
	uint64_t t15 = 41664331LLU;

	t15 = (x77-((x78-x79)/x80));

	if (t15 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x82 = 7464LLU;
	static int32_t x84 = INT32_MIN;
	uint64_t t16 = 12012498LLU;

	t16 = (x81-((x82-x83)/x84));

	if (t16 != 255LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x85 = 144861267197528593LLU;
	int64_t x86 = -1LL;
	uint8_t x87 = UINT8_MAX;
	static int64_t x88 = -2773655108009942883LL;
	volatile uint64_t t17 = 5LLU;

	t17 = (x85-((x86-x87)/x88));

	if (t17 != 144861267197528593LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x91 = 0LL;
	int64_t x92 = 2974244LL;
	volatile uint64_t t18 = 2387933LLU;

	t18 = (x89-((x90-x91)/x92));

	if (t18 != 18446743901116331227LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x94 = 84U;
	uint64_t x95 = 8539596107LLU;
	int8_t x96 = INT8_MIN;

	t19 = (x93-((x94-x95)/x96));

	if (t19 != 18931109056437103LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x97 = 0U;
	static int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MIN;
	uint32_t x100 = UINT32_MAX;
	uint32_t t20 = 226510U;

	t20 = (x97-((x98-x99)/x100));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = 560U;
	uint16_t x102 = 0U;
	int16_t x104 = INT16_MAX;
	static volatile int32_t t21 = -5567893;

	t21 = (x101-((x102-x103)/x104));

	if (t21 != 560) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x106 = UINT8_MAX;
	int8_t x107 = -8;
	int32_t x108 = INT32_MIN;
	volatile int64_t t22 = INT64_MAX;

	t22 = (x105-((x106-x107)/x108));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x110 = 4885;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t23 = 1882761;

	t23 = (x109-((x110-x111)/x112));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = 81U;
	int64_t x118 = INT64_MIN;
	volatile int16_t x119 = 0;
	uint8_t x120 = 71U;
	volatile int64_t t24 = 514886LL;

	t24 = (x117-((x118-x119)/x120));

	if (t24 != 129906648406405374LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x122 = UINT8_MAX;
	uint32_t x123 = 1171548U;
	int32_t x124 = INT32_MIN;
	uint32_t t25 = 1237298659U;

	t25 = (x121-((x122-x123)/x124));

	if (t25 != 2589U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x127 = INT32_MAX;
	int16_t x128 = 1;
	static int32_t t26 = -5;

	t26 = (x125-((x126-x127)/x128));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = 1U;
	int32_t x130 = INT32_MAX;
	static int16_t x131 = 402;
	uint64_t x132 = 6785199764LLU;
	volatile uint64_t t27 = 314803343264745LLU;

	t27 = (x129-((x130-x131)/x132));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -1LL;
	int16_t x135 = INT16_MIN;
	static int32_t x136 = -94;
	volatile int64_t t28 = -3398018694243158569LL;

	t28 = (x133-((x134-x135)/x136));

	if (t28 != 347LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x138 = -1LL;
	volatile int8_t x139 = -1;
	volatile int64_t x140 = -865404724LL;
	int64_t t29 = 233LL;

	t29 = (x137-((x138-x139)/x140));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x141 = 78867177U;
	volatile int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	uint64_t x144 = UINT64_MAX;

	t30 = (x141-((x142-x143)/x144));

	if (t30 != 78867177LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MIN;
	uint64_t x146 = 7681599316441720235LLU;
	uint32_t x147 = 10922U;
	uint32_t x148 = 925408551U;
	volatile uint64_t t31 = 35288LLU;

	t31 = (x145-((x146-x147)/x148));

	if (t31 != 18446744065408753410LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x149 = INT16_MIN;
	volatile int32_t x150 = -1;
	volatile uint32_t x152 = 258U;
	int64_t t32 = 16LL;

	t32 = (x149-((x150-x151)/x152));

	if (t32 != -11732LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x153 = UINT32_MAX;
	int8_t x155 = INT8_MIN;
	int8_t x156 = -1;
	volatile int64_t t33 = -90410661LL;

	t33 = (x153-((x154-x155)/x156));

	if (t33 != 4308368880LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x157 = 128912852LLU;
	uint8_t x158 = 7U;
	uint8_t x159 = UINT8_MAX;
	static volatile uint64_t t34 = 2LLU;

	t34 = (x157-((x158-x159)/x160));

	if (t34 != 128912604LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x161 = 1355U;
	uint32_t x163 = 225176541U;
	static volatile int8_t x164 = INT8_MIN;
	uint32_t t35 = 450723937U;

	t35 = (x161-((x162-x163)/x164));

	if (t35 != 1355U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = 984U;
	int64_t x167 = -471606354379172771LL;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t36 = 394LLU;

	t36 = (x165-((x166-x167)/x168));

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = -1;
	int16_t x170 = 11867;
	int32_t x172 = INT32_MAX;
	volatile int32_t t37 = 161456;

	t37 = (x169-((x170-x171)/x172));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x173 = 0LL;
	int16_t x174 = -1;
	static uint32_t x175 = 6114U;
	static int32_t x176 = INT32_MAX;
	static int64_t t38 = 33403817484LL;

	t38 = (x173-((x174-x175)/x176));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = -41;
	static uint64_t x180 = 65786241LLU;
	uint64_t t39 = 53766LLU;

	t39 = (x177-((x178-x179)/x180));

	if (t39 != 9223371756450487719LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x181 = INT8_MIN;
	static volatile int8_t x182 = INT8_MIN;
	int32_t x183 = 14299;
	uint16_t x184 = 13141U;

	t40 = (x181-((x182-x183)/x184));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = INT16_MAX;
	int16_t x187 = 1;
	static int8_t x188 = INT8_MIN;
	volatile uint64_t t41 = 568700503237432028LLU;

	t41 = (x185-((x186-x187)/x188));

	if (t41 != 32767LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = -8;
	int8_t x190 = INT8_MIN;
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = 12;
	volatile int32_t t42 = -61;

	t42 = (x189-((x190-x191)/x192));

	if (t42 != 23) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = 1;
	volatile uint16_t x194 = 1698U;
	static int16_t x195 = -834;
	static int64_t x196 = INT64_MAX;
	volatile int64_t t43 = 3693LL;

	t43 = (x193-((x194-x195)/x196));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x197 = INT32_MIN;
	int16_t x198 = 11467;
	volatile int32_t t44 = INT32_MIN;

	t44 = (x197-((x198-x199)/x200));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x201 = INT32_MIN;
	int64_t x202 = -1LL;
	uint16_t x203 = 162U;
	uint8_t x204 = 48U;
	static int64_t t45 = 1801406866051568LL;

	t45 = (x201-((x202-x203)/x204));

	if (t45 != -2147483645LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x211 = UINT64_MAX;
	int64_t x212 = -1LL;
	uint64_t t46 = 1917LLU;

	t46 = (x209-((x210-x211)/x212));

	if (t46 != 255LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x213 = 0U;
	uint16_t x214 = 2763U;
	uint16_t x215 = 1374U;
	static volatile int32_t t47 = -1599;

	t47 = (x213-((x214-x215)/x216));

	if (t47 != -66) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x217 = INT32_MIN;
	static uint16_t x219 = UINT16_MAX;
	volatile int64_t x220 = INT64_MAX;
	int64_t t48 = -322619209510LL;

	t48 = (x217-((x218-x219)/x220));

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x225 = 769363;
	uint32_t x226 = 102U;
	uint32_t x227 = UINT32_MAX;
	uint32_t t49 = 1446U;

	t49 = (x225-((x226-x227)/x228));

	if (t49 != 769363U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x230 = -1;
	static uint32_t x231 = 8535364U;
	volatile uint64_t t50 = 10333LLU;

	t50 = (x229-((x230-x231)/x232));

	if (t50 != 18446744073709526926LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MAX;
	static uint16_t x234 = UINT16_MAX;
	int16_t x235 = -1;
	int32_t x236 = INT32_MIN;

	t51 = (x233-((x234-x235)/x236));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x237 = 1340U;
	uint8_t x238 = 33U;
	volatile uint64_t x239 = 60LLU;

	t52 = (x237-((x238-x239)/x240));

	if (t52 != 18301494120373257275LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x241 = UINT16_MAX;
	int16_t x242 = INT16_MIN;
	volatile int8_t x243 = -1;
	volatile int32_t t53 = 40205;

	t53 = (x241-((x242-x243)/x244));

	if (t53 != 65280) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x245 = INT64_MIN;
	uint8_t x247 = 11U;
	uint64_t t54 = 474073LLU;

	t54 = (x245-((x246-x247)/x248));

	if (t54 != 9223372036854775820LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = 1364;
	uint16_t x250 = UINT16_MAX;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = 275293772733724LLU;

	t55 = (x249-((x250-x251)/x252));

	if (t55 != 1364LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = -1;
	volatile int64_t x254 = -1LL;
	int8_t x256 = -1;

	t56 = (x253-((x254-x255)/x256));

	if (t56 != -32769LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = 14158U;
	uint64_t x258 = 888LLU;
	int32_t x259 = -59;
	uint32_t x260 = 59555713U;
	volatile uint64_t t57 = 6533707456205117547LLU;

	t57 = (x257-((x258-x259)/x260));

	if (t57 != 14158LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	static int64_t x264 = -19LL;
	volatile int64_t t58 = 8746762659623LL;

	t58 = (x261-((x262-x263)/x264));

	if (t58 != -2147481931LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x274 = 587U;
	volatile uint64_t x275 = 8LLU;
	int16_t x276 = INT16_MIN;
	static uint64_t t59 = 9LLU;

	t59 = (x273-((x274-x275)/x276));

	if (t59 != 228475372LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x282 = -12;
	static volatile uint64_t t60 = 1660393668552688LLU;

	t60 = (x281-((x282-x283)/x284));

	if (t60 != 65535LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x285 = 1;
	static int64_t x286 = -1804LL;
	int32_t x287 = INT32_MIN;
	static int8_t x288 = -1;

	t61 = (x285-((x286-x287)/x288));

	if (t61 != 2147481845LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x290 = 5412886;
	int32_t x291 = INT32_MAX;
	volatile int32_t x292 = INT32_MIN;
	volatile int32_t t62 = 15300978;

	t62 = (x289-((x290-x291)/x292));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x293 = 18557U;
	volatile int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MAX;
	volatile int32_t t63 = 467055043;

	t63 = (x293-((x294-x295)/x296));

	if (t63 != 18557) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = 47959064637854320LL;
	int64_t x298 = INT64_MIN;
	int16_t x299 = -1;
	static uint32_t x300 = 18U;

	t64 = (x297-((x298-x299)/x300));

	if (t64 != 560368622240897420LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = -1LL;
	int64_t x302 = -975881009LL;
	uint16_t x303 = 1490U;
	static uint64_t x304 = UINT64_MAX;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x301-((x302-x303)/x304));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x306 = INT32_MIN;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t66 = 1;

	t66 = (x305-((x306-x307)/x308));

	if (t66 != -16776430) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x309 = 199244243LLU;
	volatile int16_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = INT64_MIN;
	volatile uint64_t t67 = 61354798208899LLU;

	t67 = (x309-((x310-x311)/x312));

	if (t67 != 199244243LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = -1LL;
	static int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	uint64_t x316 = 837327876LLU;
	volatile uint64_t t68 = 1081609468289LLU;

	t68 = (x313-((x314-x315)/x316));

	if (t68 != 18446744051679060810LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x317 = 45U;
	int8_t x318 = -2;
	static int16_t x319 = -1;
	volatile int64_t x320 = -57751475LL;
	static volatile int64_t t69 = 2680541328573511869LL;

	t69 = (x317-((x318-x319)/x320));

	if (t69 != 45LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x321 = 5U;
	int16_t x322 = -14;
	static int16_t x323 = -1456;
	int8_t x324 = -53;
	static volatile int32_t t70 = 63;

	t70 = (x321-((x322-x323)/x324));

	if (t70 != 32) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x326 = -20;
	int64_t x327 = -1LL;
	int16_t x328 = 10505;

	t71 = (x325-((x326-x327)/x328));

	if (t71 != 103474LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x329 = INT16_MIN;
	uint8_t x330 = 6U;
	uint32_t x331 = UINT32_MAX;
	volatile int16_t x332 = INT16_MIN;
	uint32_t t72 = 14U;

	t72 = (x329-((x330-x331)/x332));

	if (t72 != 4294934528U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = INT16_MIN;
	uint16_t x334 = 3075U;
	static int16_t x335 = 224;
	uint8_t x336 = UINT8_MAX;

	t73 = (x333-((x334-x335)/x336));

	if (t73 != -32779) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = -1;
	int16_t x338 = INT16_MIN;
	int16_t x339 = 13632;
	int32_t t74 = 0;

	t74 = (x337-((x338-x339)/x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = INT8_MAX;
	uint64_t x342 = 7723080027149012LLU;
	static uint64_t x343 = 16392LLU;
	int8_t x344 = INT8_MAX;
	uint64_t t75 = 4795539306151571LLU;

	t75 = (x341-((x342-x343)/x344));

	if (t75 != 18446683262055794794LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x350 = 6233168269LLU;
	int8_t x351 = 13;
	static volatile uint32_t x352 = 7U;
	volatile uint64_t t76 = 19716510471624152LLU;

	t76 = (x349-((x350-x351)/x352));

	if (t76 != 9223372035964323200LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MIN;
	int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MAX;
	int64_t t77 = 30840084196048708LL;

	t77 = (x353-((x354-x355)/x356));

	if (t77 != -9150747060186628226LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x357 = UINT64_MAX;
	volatile int32_t x360 = -1;
	uint64_t t78 = 998LLU;

	t78 = (x357-((x358-x359)/x360));

	if (t78 != 14469262LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = -1;
	uint32_t x367 = 214622U;
	int32_t x368 = 2196272;
	volatile int64_t t79 = -442412043313909070LL;

	t79 = (x365-((x366-x367)/x368));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x369 = 1U;
	uint32_t x370 = 2011261U;
	volatile int64_t x371 = -1LL;
	volatile uint64_t t80 = 66228147LLU;

	t80 = (x369-((x370-x371)/x372));

	if (t80 != 18446744073709550139LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x373 = INT64_MAX;
	int64_t x374 = 253LL;
	int16_t x375 = -1995;
	int64_t x376 = INT64_MIN;
	volatile int64_t t81 = INT64_MAX;

	t81 = (x373-((x374-x375)/x376));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x377 = UINT64_MAX;
	uint32_t x378 = UINT32_MAX;
	volatile int32_t x379 = INT32_MAX;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x377-((x378-x379)/x380));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x381 = UINT16_MAX;
	int32_t x382 = INT32_MAX;
	int32_t x383 = 755;
	static uint64_t x384 = 7785856LLU;
	volatile uint64_t t83 = 26507964766621393LLU;

	t83 = (x381-((x382-x383)/x384));

	if (t83 != 65260LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x385 = 36309775646489437LL;
	int8_t x386 = 1;
	uint16_t x387 = 1U;
	volatile int64_t t84 = -17092LL;

	t84 = (x385-((x386-x387)/x388));

	if (t84 != 36309775646489437LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x389 = 47740LLU;
	int32_t x390 = -77;
	volatile uint64_t x392 = UINT64_MAX;
	uint64_t t85 = 29746656643LLU;

	t85 = (x389-((x390-x391)/x392));

	if (t85 != 47740LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x393 = 125702022230622LLU;
	uint64_t x394 = UINT64_MAX;
	volatile int8_t x395 = INT8_MAX;
	static uint64_t t86 = 24704362374239LLU;

	t86 = (x393-((x394-x395)/x396));

	if (t86 != 125702022230621LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x398 = 110U;
	int8_t x399 = -1;
	volatile int8_t x400 = INT8_MIN;
	int64_t t87 = 10358458140LL;

	t87 = (x397-((x398-x399)/x400));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = INT8_MIN;
	int8_t x407 = 15;
	uint16_t x408 = 2037U;
	int32_t t88 = 77713438;

	t88 = (x405-((x406-x407)/x408));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x417 = UINT8_MAX;
	int64_t x418 = -1LL;
	uint64_t t89 = 1795LLU;

	t89 = (x417-((x418-x419)/x420));

	if (t89 != 255LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x421 = -1737;
	int32_t x422 = INT32_MIN;
	volatile int16_t x424 = INT16_MIN;
	int64_t t90 = 24076789641471LL;

	t90 = (x421-((x422-x423)/x424));

	if (t90 != 281474976643383LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x429 = 1LLU;
	int32_t x431 = -1;
	int16_t x432 = INT16_MAX;

	t91 = (x429-((x430-x431)/x432));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x433 = 214U;
	int64_t x434 = INT64_MIN;
	static int16_t x436 = INT16_MIN;
	volatile int64_t t92 = 81LL;

	t92 = (x433-((x434-x435)/x436));

	if (t92 != -281474976710441LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x453 = INT8_MAX;
	static uint64_t x454 = 125LLU;
	int32_t x455 = INT32_MIN;
	int16_t x456 = INT16_MIN;
	volatile uint64_t t93 = 178LLU;

	t93 = (x453-((x454-x455)/x456));

	if (t93 != 127LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x457 = INT8_MIN;
	static int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MAX;
	volatile int32_t t94 = 890818;

	t94 = (x457-((x458-x459)/x460));

	if (t94 != -129) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x461 = INT8_MIN;
	volatile int64_t x462 = INT64_MAX;
	volatile uint8_t x463 = 3U;
	volatile int32_t x464 = -1;

	t95 = (x461-((x462-x463)/x464));

	if (t95 != 9223372036854775676LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x465 = 5U;
	int16_t x466 = INT16_MAX;
	int64_t x468 = -8LL;
	int64_t t96 = -181090LL;

	t96 = (x465-((x466-x467)/x468));

	if (t96 != 4100LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x469 = 417U;
	uint8_t x470 = 3U;
	static uint64_t x471 = UINT64_MAX;
	volatile uint64_t t97 = 300201098899252LLU;

	t97 = (x469-((x470-x471)/x472));

	if (t97 != 417LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x477 = 1897860770922LL;
	uint16_t x478 = UINT16_MAX;
	int64_t x479 = 2059728563486228066LL;
	static uint32_t x480 = 11700183U;
	int64_t t98 = -2115LL;

	t98 = (x477-((x478-x479)/x480));

	if (t98 != 2073903193804LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x481 = 10;
	int32_t x482 = INT32_MIN;
	static int32_t x483 = INT32_MIN;
	static int32_t x484 = -1;

	t99 = (x481-((x482-x483)/x484));

	if (t99 != 10) { NG(); } else { ; }
	
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

