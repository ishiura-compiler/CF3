#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 45746;
volatile int64_t x4 = INT64_MAX;
uint64_t t0 = 3726262394LLU;
int32_t x5 = INT32_MAX;
uint8_t x6 = 1U;
uint16_t x7 = 198U;
static uint32_t x16 = 6345035U;
int16_t x25 = INT16_MIN;
int8_t x27 = -1;
uint64_t x41 = 15999984628175662LLU;
int32_t x45 = INT32_MIN;
int64_t t11 = -150LL;
uint64_t t13 = 8LLU;
int32_t x59 = INT32_MAX;
static volatile int32_t x60 = -1;
static uint8_t x67 = 120U;
int32_t x68 = 48347039;
static volatile int64_t t16 = 4261936998LL;
uint64_t t18 = 250952LLU;
int32_t x81 = INT32_MAX;
static volatile int8_t x86 = INT8_MIN;
uint64_t x99 = 3LLU;
uint16_t x104 = UINT16_MAX;
static volatile int32_t x105 = INT32_MIN;
volatile int32_t t26 = 58008302;
volatile int64_t t28 = 1753610347LL;
int64_t x126 = 41275708LL;
volatile uint32_t x131 = 2800776U;
int32_t t31 = 8605325;
static uint8_t x140 = UINT8_MAX;
int32_t t33 = -140024;
static int8_t x147 = -1;
static int8_t x148 = INT8_MIN;
static uint32_t t37 = 93U;
uint16_t x161 = UINT16_MAX;
static int32_t x163 = 763904;
uint8_t x167 = UINT8_MAX;
volatile uint64_t t40 = 29840LLU;
uint64_t x173 = 8103786671096LLU;
volatile int64_t x174 = 4LL;
uint64_t t41 = 1LLU;
volatile int64_t t42 = 64807842459000LL;
int16_t x183 = INT16_MIN;
int8_t x192 = -1;
uint8_t x200 = 0U;
int8_t x203 = INT8_MIN;
static int64_t x206 = 655274LL;
int32_t x210 = INT32_MIN;
int64_t x211 = INT64_MAX;
int32_t x214 = -1;
int8_t x217 = INT8_MIN;
uint16_t x223 = UINT16_MAX;
static int16_t x227 = -1;
static int64_t t55 = 1513298LL;
int64_t x234 = -276126998LL;
static uint32_t x238 = 14555U;
static uint32_t x254 = 454U;
static int8_t x257 = -14;
uint8_t x258 = 59U;
uint64_t x263 = UINT64_MAX;
uint8_t x266 = 51U;
volatile int32_t t64 = 34096251;
static uint16_t x269 = UINT16_MAX;
volatile int32_t x275 = 2;
int32_t t66 = 1;
volatile int16_t x279 = -1;
volatile int8_t x280 = INT8_MAX;
int32_t x284 = -1;
uint32_t x289 = 22336U;
static volatile int64_t x298 = INT64_MIN;
static volatile uint64_t x302 = 21422950566LLU;
int32_t x303 = INT32_MAX;
static uint8_t x307 = 0U;
uint16_t x308 = 4233U;
int32_t t75 = -874;
volatile uint16_t x321 = 514U;
int8_t x322 = 63;
static int32_t x326 = -1;
int32_t x327 = 205604597;
int32_t x336 = -1;
volatile int64_t x347 = -4415938387LL;
uint64_t x350 = 6LLU;
int8_t x351 = 0;
static uint16_t x365 = 1495U;
volatile uint32_t x369 = 14U;
uint32_t x374 = 15U;
int16_t x377 = INT16_MIN;
int16_t x383 = -1;
int16_t x384 = INT16_MIN;
uint8_t x395 = UINT8_MAX;
volatile int64_t x396 = INT64_MIN;
int64_t t93 = -1LL;
uint8_t x404 = UINT8_MAX;
uint64_t t95 = 8431462873527054053LLU;
int64_t x414 = -1LL;
static int16_t x417 = INT16_MIN;


void f0(void) {
	static uint64_t x2 = 701297433652LLU;
	int32_t x3 = INT32_MIN;

	t0 = ((x1/x2)+(x3==x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x8 = 33U;
	volatile int32_t t1 = INT32_MAX;

	t1 = ((x5/x6)+(x7==x8));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MAX;
	int64_t t2 = -983LL;

	t2 = ((x9/x10)+(x11==x12));

	if (t2 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	volatile int64_t x14 = -102072700528781LL;
	volatile int64_t x15 = 715746316918345014LL;
	int64_t t3 = -1LL;

	t3 = ((x13/x14)+(x15==x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = -1LL;
	int16_t x19 = -1;
	static uint16_t x20 = 22287U;
	int64_t t4 = -47734064907754LL;

	t4 = ((x17/x18)+(x19==x20));

	if (t4 != 2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	int16_t x22 = -260;
	int8_t x23 = INT8_MIN;
	int8_t x24 = 11;
	volatile int64_t t5 = -362912450LL;

	t5 = ((x21/x22)+(x23==x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x26 = -1;
	int64_t x28 = INT64_MAX;
	int32_t t6 = -468;

	t6 = ((x25/x26)+(x27==x28));

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 807;
	int64_t x30 = INT64_MIN;
	static int16_t x31 = -1;
	volatile int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -31210446977096167LL;

	t7 = ((x29/x30)+(x31==x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MIN;
	uint8_t x35 = UINT8_MAX;
	volatile uint32_t x36 = 68U;
	volatile int64_t t8 = 19820561186LL;

	t8 = ((x33/x34)+(x35==x36));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 1;
	int16_t x38 = -1;
	uint32_t x39 = 499958U;
	int64_t x40 = -216499290501LL;
	static volatile int32_t t9 = -25042937;

	t9 = ((x37/x38)+(x39==x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	uint64_t x43 = 0LLU;
	uint16_t x44 = UINT16_MAX;
	uint64_t t10 = 147253464280LLU;

	t10 = ((x41/x42)+(x43==x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = 336261524LL;
	uint32_t x47 = UINT32_MAX;
	static int16_t x48 = 5462;

	t11 = ((x45/x46)+(x47==x48));

	if (t11 != -6LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 7U;
	static int64_t x50 = 3363385879728LL;
	int16_t x51 = 183;
	static int16_t x52 = INT16_MAX;
	int64_t t12 = -14015546759795447LL;

	t12 = ((x49/x50)+(x51==x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = UINT64_MAX;
	int16_t x54 = INT16_MIN;
	volatile int32_t x55 = 1;
	int64_t x56 = -1LL;

	t13 = ((x53/x54)+(x55==x56));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	uint64_t x58 = 2056583172961015LLU;
	uint64_t t14 = 17206223745014LLU;

	t14 = ((x57/x58)+(x59==x60));

	if (t14 != 8969LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 8979;
	int8_t x62 = INT8_MIN;
	volatile int32_t x63 = 11;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = -14;

	t15 = ((x61/x62)+(x63==x64));

	if (t15 != -70) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = 184890555124872673LL;
	int8_t x66 = INT8_MAX;

	t16 = ((x65/x66)+(x67==x68));

	if (t16 != 1455831142715532LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int16_t x70 = -8910;
	volatile uint64_t x71 = 5430624281683LLU;
	uint64_t x72 = 222662878860LLU;
	volatile int32_t t17 = 8652015;

	t17 = ((x69/x70)+(x71==x72));

	if (t17 != 241019) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 542322178541725495LLU;
	uint8_t x78 = UINT8_MAX;
	static volatile int8_t x79 = INT8_MIN;
	volatile int32_t x80 = -21449296;

	t18 = ((x77/x78)+(x79==x80));

	if (t18 != 2126753641340099LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x82 = -1LL;
	static volatile int64_t x83 = INT64_MIN;
	volatile int64_t x84 = -56627829364674LL;
	volatile int64_t t19 = 0LL;

	t19 = ((x81/x82)+(x83==x84));

	if (t19 != -2147483647LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x85 = UINT8_MAX;
	uint8_t x87 = 2U;
	uint64_t x88 = UINT64_MAX;
	int32_t t20 = 4945;

	t20 = ((x85/x86)+(x87==x88));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x89 = -1;
	int16_t x90 = 3932;
	volatile uint64_t x91 = 2774LLU;
	int64_t x92 = INT64_MAX;
	volatile int32_t t21 = 40260481;

	t21 = ((x89/x90)+(x91==x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MAX;
	uint16_t x95 = 45U;
	uint32_t x96 = 5U;
	int64_t t22 = 60327LL;

	t22 = ((x93/x94)+(x95==x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = -409351863LL;
	uint32_t x98 = 812U;
	uint64_t x100 = UINT64_MAX;
	volatile int64_t t23 = 5591073652676LL;

	t23 = ((x97/x98)+(x99==x100));

	if (t23 != -504127LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int32_t x102 = -1;
	int64_t x103 = INT64_MAX;
	int32_t t24 = -3295764;

	t24 = ((x101/x102)+(x103==x104));

	if (t24 != -255) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = -130805785151784304LL;
	int16_t x107 = 17;
	static uint8_t x108 = UINT8_MAX;
	static int64_t t25 = -30786726LL;

	t25 = ((x105/x106)+(x107==x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = INT32_MAX;
	static volatile int8_t x110 = INT8_MIN;
	int64_t x111 = 29360376022LL;
	uint16_t x112 = UINT16_MAX;

	t26 = ((x109/x110)+(x111==x112));

	if (t26 != -16777215) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = INT8_MIN;
	uint32_t x114 = 54262199U;
	uint64_t x115 = 5876817133983715099LLU;
	int64_t x116 = INT64_MIN;
	static volatile uint32_t t27 = 15589U;

	t27 = ((x113/x114)+(x115==x116));

	if (t27 != 79U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = 13;
	int32_t x119 = -58922203;
	uint16_t x120 = 3U;

	t28 = ((x117/x118)+(x119==x120));

	if (t28 != -709490156681136600LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = UINT16_MAX;
	int8_t x122 = INT8_MAX;
	int64_t x123 = INT64_MIN;
	static int8_t x124 = -3;
	int32_t t29 = -248;

	t29 = ((x121/x122)+(x123==x124));

	if (t29 != 516) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = INT32_MIN;
	static int16_t x127 = INT16_MAX;
	int32_t x128 = INT32_MIN;
	volatile int64_t t30 = 721LL;

	t30 = ((x125/x126)+(x127==x128));

	if (t30 != -52LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MAX;
	uint8_t x132 = 29U;

	t31 = ((x129/x130)+(x131==x132));

	if (t31 != -65538) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MIN;
	static uint64_t x135 = 164221031762311LLU;
	int8_t x136 = -1;
	int64_t t32 = 10768412556LL;

	t32 = ((x133/x134)+(x135==x136));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -1;
	uint8_t x138 = 1U;
	volatile int8_t x139 = 55;

	t33 = ((x137/x138)+(x139==x140));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -113121100;
	uint8_t x146 = 3U;
	volatile int32_t t34 = -66262417;

	t34 = ((x145/x146)+(x147==x148));

	if (t34 != -37707033) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = 7350969397LL;
	static int64_t x150 = -4122LL;
	volatile int16_t x151 = INT16_MIN;
	int32_t x152 = 168;
	volatile int64_t t35 = -53836LL;

	t35 = ((x149/x150)+(x151==x152));

	if (t35 != -1783350LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x153 = 58804054930392278LLU;
	static uint32_t x154 = UINT32_MAX;
	int32_t x155 = INT32_MIN;
	int8_t x156 = 1;
	static uint64_t t36 = 34LLU;

	t36 = ((x153/x154)+(x155==x156));

	if (t36 != 13691385LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x157 = 1;
	volatile uint32_t x158 = 1655052U;
	static int8_t x159 = INT8_MAX;
	static int32_t x160 = -1;

	t37 = ((x157/x158)+(x159==x160));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x162 = 24251452LLU;
	static int16_t x164 = INT16_MIN;
	volatile uint64_t t38 = 223LLU;

	t38 = ((x161/x162)+(x163==x164));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 1629U;
	static int32_t x166 = 1725597;
	int16_t x168 = -1;
	volatile int32_t t39 = 35172;

	t39 = ((x165/x166)+(x167==x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x169 = INT32_MIN;
	uint64_t x170 = 27146157436LLU;
	uint32_t x171 = 378749U;
	static int32_t x172 = INT32_MAX;

	t40 = ((x169/x170)+(x171==x172));

	if (t40 != 679534262LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x175 = -119417718LL;
	int64_t x176 = INT64_MIN;

	t41 = ((x173/x174)+(x175==x176));

	if (t41 != 2025946667774LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = -1LL;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = 164U;

	t42 = ((x177/x178)+(x179==x180));

	if (t42 != 2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = 11861;
	uint8_t x182 = 8U;
	int16_t x184 = INT16_MIN;
	int32_t t43 = -14;

	t43 = ((x181/x182)+(x183==x184));

	if (t43 != 1483) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x185 = INT32_MAX;
	static int64_t x186 = -75LL;
	int8_t x187 = INT8_MAX;
	uint8_t x188 = 0U;
	int64_t t44 = -166596924476299372LL;

	t44 = ((x185/x186)+(x187==x188));

	if (t44 != -28633115LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 124U;
	int16_t x190 = 9;
	static int32_t x191 = 24681039;
	volatile int32_t t45 = 6265032;

	t45 = ((x189/x190)+(x191==x192));

	if (t45 != 13) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = 4;
	volatile uint16_t x194 = UINT16_MAX;
	static int64_t x195 = INT64_MIN;
	int64_t x196 = -1LL;
	static int32_t t46 = 215;

	t46 = ((x193/x194)+(x195==x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MAX;
	uint64_t x198 = 1781208148963LLU;
	static uint32_t x199 = 88U;
	volatile uint64_t t47 = 29253310LLU;

	t47 = ((x197/x198)+(x199==x200));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x201 = 36052467572LLU;
	uint8_t x202 = 44U;
	volatile uint16_t x204 = 1495U;
	static volatile uint64_t t48 = 41514LLU;

	t48 = ((x201/x202)+(x203==x204));

	if (t48 != 819374263LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x205 = INT8_MAX;
	int64_t x207 = INT64_MAX;
	static volatile int16_t x208 = INT16_MIN;
	volatile int64_t t49 = -214890420573605217LL;

	t49 = ((x205/x206)+(x207==x208));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 130U;
	int64_t x212 = 19239502234978LL;
	static int32_t t50 = -1;

	t50 = ((x209/x210)+(x211==x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x213 = UINT16_MAX;
	int8_t x215 = 6;
	volatile int8_t x216 = INT8_MIN;
	volatile int32_t t51 = 1;

	t51 = ((x213/x214)+(x215==x216));

	if (t51 != -65535) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x218 = -1;
	int64_t x219 = INT64_MIN;
	int64_t x220 = -9903199LL;
	static volatile int32_t t52 = 6;

	t52 = ((x217/x218)+(x219==x220));

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MIN;
	uint16_t x222 = 5U;
	uint8_t x224 = 24U;
	int32_t t53 = -32636026;

	t53 = ((x221/x222)+(x223==x224));

	if (t53 != -429496729) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = UINT64_MAX;
	volatile uint64_t x226 = 3218129381189LLU;
	volatile int32_t x228 = -1;
	uint64_t t54 = 413783280901040704LLU;

	t54 = ((x225/x226)+(x227==x228));

	if (t54 != 5732133LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x229 = 16652940U;
	int64_t x230 = INT64_MAX;
	int64_t x231 = 2009121997735470461LL;
	int16_t x232 = INT16_MIN;

	t55 = ((x229/x230)+(x231==x232));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 4173172U;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = 838U;
	int64_t t56 = -238285LL;

	t56 = ((x233/x234)+(x235==x236));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 11U;
	static uint8_t x239 = 10U;
	uint32_t x240 = 126U;
	static uint32_t t57 = 917276087U;

	t57 = ((x237/x238)+(x239==x240));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x241 = -98118052099012LL;
	volatile uint16_t x242 = 10190U;
	uint32_t x243 = UINT32_MAX;
	int16_t x244 = -2188;
	static volatile int64_t t58 = 10587002LL;

	t58 = ((x241/x242)+(x243==x244));

	if (t58 != -9628856928LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -3755;
	static int64_t x246 = INT64_MAX;
	static volatile int16_t x247 = -1;
	static int32_t x248 = -750;
	int64_t t59 = -11LL;

	t59 = ((x245/x246)+(x247==x248));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -1;
	int32_t x250 = INT32_MAX;
	int64_t x251 = INT64_MAX;
	int32_t x252 = 17;
	int32_t t60 = -29101;

	t60 = ((x249/x250)+(x251==x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x253 = 1U;
	uint16_t x255 = UINT16_MAX;
	uint32_t x256 = 302873582U;
	uint32_t t61 = 23U;

	t61 = ((x253/x254)+(x255==x256));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x259 = 8149;
	static volatile int8_t x260 = INT8_MAX;
	volatile int32_t t62 = -1660853;

	t62 = ((x257/x258)+(x259==x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x261 = -1;
	int32_t x262 = -1;
	volatile int64_t x264 = -1LL;
	int32_t t63 = -3;

	t63 = ((x261/x262)+(x263==x264));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x265 = INT8_MIN;
	int8_t x267 = -27;
	uint16_t x268 = UINT16_MAX;

	t64 = ((x265/x266)+(x267==x268));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x270 = -1;
	uint32_t x271 = 11013913U;
	volatile uint32_t x272 = 402548288U;
	int32_t t65 = 7478;

	t65 = ((x269/x270)+(x271==x272));

	if (t65 != -65535) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MAX;
	static int8_t x274 = -1;
	int16_t x276 = INT16_MIN;

	t66 = ((x273/x274)+(x275==x276));

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x277 = 0;
	static int64_t x278 = INT64_MIN;
	volatile int64_t t67 = -294264LL;

	t67 = ((x277/x278)+(x279==x280));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x281 = -1499;
	static volatile uint16_t x282 = 4U;
	int32_t x283 = INT32_MAX;
	volatile int32_t t68 = 142372;

	t68 = ((x281/x282)+(x283==x284));

	if (t68 != -374) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = 88084432LL;
	uint16_t x286 = UINT16_MAX;
	int64_t x287 = INT64_MIN;
	int64_t x288 = INT64_MIN;
	volatile int64_t t69 = -28707LL;

	t69 = ((x285/x286)+(x287==x288));

	if (t69 != 1345LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x290 = -2;
	uint16_t x291 = UINT16_MAX;
	uint8_t x292 = 7U;
	uint32_t t70 = 18714U;

	t70 = ((x289/x290)+(x291==x292));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = -470;
	uint8_t x295 = 29U;
	int64_t x296 = -2LL;
	int32_t t71 = -12;

	t71 = ((x293/x294)+(x295==x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MAX;
	int8_t x299 = INT8_MAX;
	uint32_t x300 = 1952820U;
	static volatile int64_t t72 = 16518310612103746LL;

	t72 = ((x297/x298)+(x299==x300));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x301 = 120808077U;
	volatile int32_t x304 = -1;
	volatile uint64_t t73 = 1503802044183293264LLU;

	t73 = ((x301/x302)+(x303==x304));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = UINT16_MAX;
	static uint32_t x306 = 4U;
	volatile uint32_t t74 = 107913U;

	t74 = ((x305/x306)+(x307==x308));

	if (t74 != 16383U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x313 = INT32_MIN;
	uint16_t x314 = 27U;
	int32_t x315 = -266690342;
	uint32_t x316 = 48U;

	t75 = ((x313/x314)+(x315==x316));

	if (t75 != -79536431) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x317 = 14U;
	volatile int16_t x318 = 1091;
	int32_t x319 = INT32_MAX;
	static int16_t x320 = INT16_MAX;
	volatile int32_t t76 = 4;

	t76 = ((x317/x318)+(x319==x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x323 = 5U;
	int32_t x324 = -54227;
	int32_t t77 = -3048697;

	t77 = ((x321/x322)+(x323==x324));

	if (t77 != 8) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x325 = 0U;
	uint8_t x328 = 2U;
	volatile int32_t t78 = -17301;

	t78 = ((x325/x326)+(x327==x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x329 = INT8_MAX;
	int16_t x330 = INT16_MIN;
	static volatile int64_t x331 = -1LL;
	static int32_t x332 = INT32_MIN;
	static volatile int32_t t79 = 683919;

	t79 = ((x329/x330)+(x331==x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = -179;
	int32_t x334 = -1;
	int64_t x335 = INT64_MIN;
	int32_t t80 = 3443558;

	t80 = ((x333/x334)+(x335==x336));

	if (t80 != 179) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x337 = -3758827;
	int64_t x338 = INT64_MAX;
	static volatile int16_t x339 = -1;
	uint64_t x340 = 9051632300749168746LLU;
	volatile int64_t t81 = 2211173LL;

	t81 = ((x337/x338)+(x339==x340));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x341 = 8738;
	int32_t x342 = INT32_MIN;
	uint32_t x343 = 44665527U;
	static int16_t x344 = -608;
	int32_t t82 = -282110686;

	t82 = ((x341/x342)+(x343==x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x345 = 0U;
	uint8_t x346 = 5U;
	static uint8_t x348 = UINT8_MAX;
	static volatile int32_t t83 = -22667230;

	t83 = ((x345/x346)+(x347==x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MAX;
	uint8_t x352 = UINT8_MAX;
	uint64_t t84 = 8545570736147LLU;

	t84 = ((x349/x350)+(x351==x352));

	if (t84 != 5461LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = 7;
	int8_t x358 = -1;
	uint64_t x359 = UINT64_MAX;
	int16_t x360 = 12;
	volatile int32_t t85 = -119;

	t85 = ((x357/x358)+(x359==x360));

	if (t85 != -7) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = 1;
	int32_t x362 = INT32_MAX;
	int16_t x363 = INT16_MAX;
	volatile int32_t x364 = INT32_MIN;
	volatile int32_t t86 = 573;

	t86 = ((x361/x362)+(x363==x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x366 = 199786208341LL;
	int64_t x367 = INT64_MAX;
	int16_t x368 = INT16_MIN;
	volatile int64_t t87 = 20918435799188LL;

	t87 = ((x365/x366)+(x367==x368));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x370 = -1;
	uint32_t x371 = UINT32_MAX;
	volatile int32_t x372 = -435184615;
	uint32_t t88 = 28U;

	t88 = ((x369/x370)+(x371==x372));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x375 = INT16_MAX;
	uint32_t x376 = 0U;
	uint32_t t89 = 522158U;

	t89 = ((x373/x374)+(x375==x376));

	if (t89 != 286331153U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MIN;
	volatile uint32_t x380 = 85U;
	int32_t t90 = 634212;

	t90 = ((x377/x378)+(x379==x380));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = -15LL;
	static int16_t x382 = INT16_MIN;
	int64_t t91 = 248578734LL;

	t91 = ((x381/x382)+(x383==x384));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x389 = UINT64_MAX;
	uint64_t x390 = 249502LLU;
	int32_t x391 = INT32_MIN;
	static int8_t x392 = -15;
	static uint64_t t92 = 20089509LLU;

	t92 = ((x389/x390)+(x391==x392));

	if (t92 != 73934253327466LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x393 = 3U;
	int64_t x394 = INT64_MAX;

	t93 = ((x393/x394)+(x395==x396));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = -1LL;
	static uint64_t x398 = UINT64_MAX;
	volatile uint8_t x399 = UINT8_MAX;
	uint16_t x400 = 12U;
	volatile uint64_t t94 = 78LLU;

	t94 = ((x397/x398)+(x399==x400));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x401 = 253405LLU;
	int16_t x402 = INT16_MIN;
	uint32_t x403 = UINT32_MAX;

	t95 = ((x401/x402)+(x403==x404));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = 2;
	int64_t x410 = -1187523985350LL;
	uint16_t x411 = UINT16_MAX;
	int16_t x412 = INT16_MAX;
	volatile int64_t t96 = 158492LL;

	t96 = ((x409/x410)+(x411==x412));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x413 = INT32_MIN;
	int64_t x415 = INT64_MAX;
	static volatile int32_t x416 = -12573711;
	int64_t t97 = -15830575180525LL;

	t97 = ((x413/x414)+(x415==x416));

	if (t97 != 2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x418 = -1;
	volatile int8_t x419 = INT8_MIN;
	uint32_t x420 = UINT32_MAX;
	volatile int32_t t98 = 3;

	t98 = ((x417/x418)+(x419==x420));

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x421 = -2862279;
	static int32_t x422 = INT32_MAX;
	volatile uint8_t x423 = UINT8_MAX;
	int64_t x424 = INT64_MIN;
	volatile int32_t t99 = 6480;

	t99 = ((x421/x422)+(x423==x424));

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

