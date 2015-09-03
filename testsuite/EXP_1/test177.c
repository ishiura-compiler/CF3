#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x5 = UINT16_MAX;
volatile uint64_t x9 = 8943076831086LLU;
int32_t t3 = 15;
int8_t x25 = -1;
volatile uint64_t x29 = UINT64_MAX;
int32_t t7 = -77;
uint32_t x37 = UINT32_MAX;
int64_t x41 = 0LL;
volatile int8_t x50 = -13;
uint8_t x59 = 96U;
static int8_t x70 = 0;
int32_t x71 = 35435203;
static uint64_t x86 = UINT64_MAX;
int64_t x89 = INT64_MAX;
uint16_t x92 = UINT16_MAX;
volatile uint64_t x96 = 6569430LLU;
int32_t t21 = -1224055;
int32_t t25 = -671417433;
volatile int64_t x122 = INT64_MAX;
int8_t x124 = INT8_MIN;
static volatile int32_t t26 = -24538;
volatile int32_t t27 = 229491;
int32_t t30 = -254;
int64_t x169 = -1LL;
static volatile int16_t x173 = INT16_MAX;
static uint8_t x184 = 83U;
uint8_t x186 = 1U;
int16_t x188 = INT16_MIN;
volatile int32_t t39 = 12106231;
volatile int32_t t40 = 1;
volatile uint8_t x197 = 0U;
volatile int64_t x199 = -2003406185515250708LL;
static volatile int64_t x200 = -1LL;
int8_t x203 = INT8_MIN;
int32_t t42 = -91031445;
int32_t x210 = -307332;
uint16_t x213 = 0U;
int32_t t45 = 279;
uint8_t x219 = UINT8_MAX;
static volatile uint64_t x221 = UINT64_MAX;
int16_t x224 = INT16_MAX;
int16_t x230 = INT16_MIN;
static int8_t x233 = INT8_MIN;
static volatile int32_t x245 = INT32_MIN;
volatile int16_t x246 = INT16_MIN;
uint64_t x247 = 1362624LLU;
static uint64_t x248 = UINT64_MAX;
int32_t t53 = -7184;
int64_t x251 = 1860LL;
static uint8_t x261 = 0U;
static int8_t x266 = -2;
int16_t x272 = INT16_MIN;
static int8_t x276 = -18;
static int16_t x281 = INT16_MAX;
int8_t x286 = 10;
volatile int16_t x289 = INT16_MAX;
int16_t x291 = INT16_MIN;
uint32_t x292 = 2069041999U;
volatile int16_t x299 = INT16_MIN;
volatile int64_t x310 = -1LL;
int16_t x314 = -21;
int64_t x317 = 12471LL;
int8_t x318 = 14;
int16_t x324 = -1;
int64_t x327 = INT64_MIN;
static volatile int32_t t69 = 485248895;
static int16_t x339 = INT16_MIN;
static uint8_t x342 = 65U;
uint64_t x354 = 358138LLU;
int64_t x355 = -3623627706592LL;
uint16_t x356 = UINT16_MAX;
int16_t x361 = INT16_MAX;
volatile int32_t t75 = -5052642;
int16_t x381 = -980;
volatile int64_t x393 = -1LL;
int16_t x395 = -313;
volatile int32_t x396 = -14233372;
int32_t x398 = -1;
int32_t x400 = -1;
volatile int64_t x418 = INT64_MIN;
volatile int32_t t85 = -3;
int16_t x421 = INT16_MAX;
static int32_t t89 = 797821;
int8_t x442 = -1;
volatile uint32_t x445 = 47477730U;
uint64_t x456 = UINT64_MAX;
int32_t t93 = 47876485;
static uint32_t x458 = 1U;
static uint8_t x459 = 0U;
static int8_t x460 = 1;
int8_t x463 = INT8_MAX;
int64_t x464 = 33725117LL;
static int16_t x466 = 16;
volatile int16_t x469 = -1;
int32_t t97 = 297;
volatile int64_t x473 = -2502523865305LL;
static int64_t x479 = -1LL;
int64_t x480 = -1LL;
volatile int32_t t99 = 60727361;


void f0(void) {
	static uint64_t x1 = 888LLU;
	volatile int16_t x2 = 4999;
	int32_t x3 = INT32_MAX;
	int64_t x4 = -1LL;
	static int32_t t0 = 19235;

	t0 = (((x1-x2)+x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = 17934315U;
	int8_t x7 = INT8_MIN;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -961874429;

	t1 = (((x5-x6)+x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 10173U;
	volatile uint16_t x11 = 2U;
	volatile uint64_t x12 = 196382830625893874LLU;
	static volatile int32_t t2 = 116865836;

	t2 = (((x9-x10)+x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static uint64_t x14 = 4996430486LLU;
	static int32_t x15 = INT32_MAX;
	static int8_t x16 = 45;

	t3 = (((x13-x14)+x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	static int64_t x18 = 10639LL;
	static int8_t x19 = -1;
	volatile uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 72;

	t4 = (((x17-x18)+x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x26 = 1241LL;
	volatile int16_t x27 = INT16_MIN;
	int16_t x28 = -375;
	static volatile int32_t t5 = 363064763;

	t5 = (((x25-x26)+x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MIN;
	static int32_t x31 = -1;
	uint32_t x32 = 341709U;
	static volatile int32_t t6 = -441;

	t6 = (((x29-x30)+x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	int64_t x34 = -59595LL;
	static int8_t x35 = 1;
	static int32_t x36 = INT32_MIN;

	t7 = (((x33-x34)+x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = -1;
	volatile int64_t x39 = INT64_MAX;
	int64_t x40 = -1LL;
	static volatile int32_t t8 = 42;

	t8 = (((x37-x38)+x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x42 = 13U;
	static uint16_t x43 = 883U;
	static uint32_t x44 = 10U;
	volatile int32_t t9 = 242;

	t9 = (((x41-x42)+x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x49 = INT8_MAX;
	volatile int32_t x51 = -1;
	int64_t x52 = INT64_MIN;
	volatile int32_t t10 = 23;

	t10 = (((x49-x50)+x51)==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	int16_t x54 = -1;
	int8_t x55 = INT8_MIN;
	static int64_t x56 = -7513990775LL;
	int32_t t11 = 78020;

	t11 = (((x53-x54)+x55)==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	volatile int64_t x58 = 149415410618LL;
	int16_t x60 = 2383;
	volatile int32_t t12 = -44964039;

	t12 = (((x57-x58)+x59)==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 241LLU;
	volatile uint16_t x62 = 8U;
	static int32_t x63 = 1921016;
	int8_t x64 = 1;
	int32_t t13 = -5000669;

	t13 = (((x61-x62)+x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = 26;
	volatile int16_t x72 = INT16_MIN;
	int32_t t14 = 6331;

	t14 = (((x69-x70)+x71)==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 1588090918LLU;
	uint16_t x74 = 37U;
	static volatile int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MAX;
	volatile int32_t t15 = 3;

	t15 = (((x73-x74)+x75)==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MIN;
	uint16_t x82 = 4467U;
	static uint8_t x83 = 57U;
	static uint64_t x84 = 1993811294LLU;
	volatile int32_t t16 = 326138;

	t16 = (((x81-x82)+x83)==x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MAX;
	uint16_t x87 = 0U;
	uint16_t x88 = 2U;
	int32_t t17 = -12687;

	t17 = (((x85-x86)+x87)==x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x90 = INT16_MAX;
	int64_t x91 = -4064659333493922LL;
	static int32_t t18 = 56;

	t18 = (((x89-x90)+x91)==x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x93 = 3488375U;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = 3U;
	volatile int32_t t19 = -1;

	t19 = (((x93-x94)+x95)==x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x97 = UINT16_MAX;
	int64_t x98 = 470234320LL;
	int16_t x99 = INT16_MIN;
	uint32_t x100 = 552559U;
	volatile int32_t t20 = 88948;

	t20 = (((x97-x98)+x99)==x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = 2281LL;
	static volatile uint16_t x102 = UINT16_MAX;
	int16_t x103 = INT16_MIN;
	int64_t x104 = INT64_MAX;

	t21 = (((x101-x102)+x103)==x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x105 = -10925240126LL;
	uint64_t x106 = 33154LLU;
	int32_t x107 = 10235;
	volatile int8_t x108 = -8;
	int32_t t22 = 492007;

	t22 = (((x105-x106)+x107)==x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x109 = 29466U;
	uint32_t x110 = 31146723U;
	int64_t x111 = -1LL;
	static int32_t x112 = INT32_MIN;
	int32_t t23 = 22706458;

	t23 = (((x109-x110)+x111)==x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MIN;
	static int16_t x114 = INT16_MIN;
	static uint16_t x115 = 14U;
	static int32_t x116 = INT32_MIN;
	volatile int32_t t24 = 31;

	t24 = (((x113-x114)+x115)==x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x117 = 1799171U;
	uint16_t x118 = 1U;
	int32_t x119 = INT32_MIN;
	int8_t x120 = 0;

	t25 = (((x117-x118)+x119)==x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = 71752859112521LL;
	uint8_t x123 = UINT8_MAX;

	t26 = (((x121-x122)+x123)==x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -1;
	int64_t x126 = INT64_MIN;
	int16_t x127 = INT16_MIN;
	int32_t x128 = INT32_MIN;

	t27 = (((x125-x126)+x127)==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x129 = 0;
	static uint64_t x130 = 50769630LLU;
	static uint16_t x131 = 14807U;
	int16_t x132 = 11;
	volatile int32_t t28 = 29418405;

	t28 = (((x129-x130)+x131)==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = -1;
	int32_t x151 = 149713;
	uint64_t x152 = UINT64_MAX;
	static volatile int32_t t29 = -105472050;

	t29 = (((x149-x150)+x151)==x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x153 = -19964LL;
	uint64_t x154 = 50LLU;
	static int32_t x155 = -1;
	int8_t x156 = INT8_MIN;

	t30 = (((x153-x154)+x155)==x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = INT16_MIN;
	uint16_t x158 = 176U;
	uint8_t x159 = 1U;
	volatile int64_t x160 = INT64_MAX;
	static int32_t t31 = 54797;

	t31 = (((x157-x158)+x159)==x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x161 = -3;
	uint32_t x162 = 2723067U;
	volatile uint64_t x163 = 726147095828830LLU;
	int32_t x164 = INT32_MIN;
	volatile int32_t t32 = -63;

	t32 = (((x161-x162)+x163)==x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = UINT8_MAX;
	uint32_t x166 = 12733144U;
	uint64_t x167 = 86810206LLU;
	volatile uint8_t x168 = 18U;
	static volatile int32_t t33 = 2605144;

	t33 = (((x165-x166)+x167)==x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x170 = -1;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MAX;
	int32_t t34 = -913583;

	t34 = (((x169-x170)+x171)==x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x174 = UINT64_MAX;
	volatile uint32_t x175 = 65060U;
	static uint64_t x176 = 5658LLU;
	volatile int32_t t35 = -254451974;

	t35 = (((x173-x174)+x175)==x176);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x177 = INT32_MAX;
	uint8_t x178 = 0U;
	uint64_t x179 = 70918769355347326LLU;
	int8_t x180 = INT8_MIN;
	volatile int32_t t36 = 253;

	t36 = (((x177-x178)+x179)==x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x181 = INT64_MIN;
	int64_t x182 = -1LL;
	uint16_t x183 = 117U;
	static int32_t t37 = -4;

	t37 = (((x181-x182)+x183)==x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x185 = 1U;
	int16_t x187 = INT16_MAX;
	volatile int32_t t38 = 407792;

	t38 = (((x185-x186)+x187)==x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MIN;
	uint16_t x191 = 8U;
	uint16_t x192 = UINT16_MAX;

	t39 = (((x189-x190)+x191)==x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x193 = 96241040575027800LLU;
	uint32_t x194 = 433U;
	int32_t x195 = INT32_MAX;
	volatile int32_t x196 = INT32_MIN;

	t40 = (((x193-x194)+x195)==x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x198 = UINT32_MAX;
	int32_t t41 = -201;

	t41 = (((x197-x198)+x199)==x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x201 = 4;
	int8_t x202 = INT8_MAX;
	int64_t x204 = INT64_MIN;

	t42 = (((x201-x202)+x203)==x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = -1020882LL;
	static int32_t x206 = INT32_MAX;
	uint8_t x207 = UINT8_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t43 = -713403243;

	t43 = (((x205-x206)+x207)==x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x209 = INT8_MIN;
	uint32_t x211 = 4144U;
	int16_t x212 = 7358;
	volatile int32_t t44 = 834;

	t44 = (((x209-x210)+x211)==x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x214 = INT16_MIN;
	uint32_t x215 = UINT32_MAX;
	uint16_t x216 = UINT16_MAX;

	t45 = (((x213-x214)+x215)==x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x217 = -1;
	int64_t x218 = -143198010573786807LL;
	int64_t x220 = 666689471727066LL;
	int32_t t46 = 1;

	t46 = (((x217-x218)+x219)==x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x222 = 110321U;
	uint8_t x223 = UINT8_MAX;
	volatile int32_t t47 = 186086000;

	t47 = (((x221-x222)+x223)==x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x225 = 2191588063644LL;
	static int32_t x226 = INT32_MIN;
	static uint32_t x227 = UINT32_MAX;
	int64_t x228 = INT64_MIN;
	int32_t t48 = -7;

	t48 = (((x225-x226)+x227)==x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = -1LL;
	static uint8_t x231 = 0U;
	int32_t x232 = 367768;
	volatile int32_t t49 = -98;

	t49 = (((x229-x230)+x231)==x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x234 = 59048208LLU;
	int32_t x235 = INT32_MAX;
	static uint8_t x236 = 0U;
	int32_t t50 = 2125850;

	t50 = (((x233-x234)+x235)==x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = INT16_MIN;
	int8_t x238 = -1;
	int32_t x239 = INT32_MAX;
	int64_t x240 = 75LL;
	volatile int32_t t51 = -47;

	t51 = (((x237-x238)+x239)==x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -1;
	static int8_t x242 = -2;
	int64_t x243 = -1LL;
	uint32_t x244 = 59255U;
	int32_t t52 = -709;

	t52 = (((x241-x242)+x243)==x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {


	t53 = (((x245-x246)+x247)==x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x249 = UINT64_MAX;
	static uint32_t x250 = 9787U;
	static int32_t x252 = INT32_MIN;
	static volatile int32_t t54 = -21191;

	t54 = (((x249-x250)+x251)==x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x262 = 10U;
	volatile int8_t x263 = INT8_MIN;
	static int16_t x264 = -2;
	int32_t t55 = 2;

	t55 = (((x261-x262)+x263)==x264);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = 1320288505132LLU;
	static int32_t x267 = 117896;
	int64_t x268 = INT64_MIN;
	int32_t t56 = 0;

	t56 = (((x265-x266)+x267)==x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x269 = UINT8_MAX;
	int8_t x270 = 0;
	uint16_t x271 = 4316U;
	int32_t t57 = 2560;

	t57 = (((x269-x270)+x271)==x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x273 = INT32_MIN;
	uint64_t x274 = UINT64_MAX;
	volatile int32_t x275 = INT32_MIN;
	static volatile int32_t t58 = -707272;

	t58 = (((x273-x274)+x275)==x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x282 = INT16_MIN;
	int64_t x283 = -1LL;
	volatile uint32_t x284 = 31U;
	int32_t t59 = -823761;

	t59 = (((x281-x282)+x283)==x284);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x285 = 7U;
	int32_t x287 = -127203;
	static volatile int64_t x288 = 700168742451366LL;
	int32_t t60 = -21;

	t60 = (((x285-x286)+x287)==x288);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x290 = -1;
	volatile int32_t t61 = 24056340;

	t61 = (((x289-x290)+x291)==x292);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x297 = -1;
	uint64_t x298 = 15044366225030LLU;
	int8_t x300 = INT8_MIN;
	volatile int32_t t62 = -723573;

	t62 = (((x297-x298)+x299)==x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x301 = INT8_MIN;
	volatile int64_t x302 = INT64_MIN;
	int16_t x303 = -1;
	int32_t x304 = 10146;
	static volatile int32_t t63 = 891098;

	t63 = (((x301-x302)+x303)==x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x309 = -7;
	int32_t x311 = INT32_MAX;
	static int16_t x312 = -1;
	int32_t t64 = 19;

	t64 = (((x309-x310)+x311)==x312);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x313 = 1;
	int16_t x315 = -1;
	static int64_t x316 = INT64_MIN;
	volatile int32_t t65 = -1;

	t65 = (((x313-x314)+x315)==x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x319 = 759U;
	volatile int32_t x320 = 27;
	volatile int32_t t66 = -74315;

	t66 = (((x317-x318)+x319)==x320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x321 = INT64_MAX;
	uint8_t x322 = UINT8_MAX;
	uint8_t x323 = 19U;
	int32_t t67 = 49258;

	t67 = (((x321-x322)+x323)==x324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x325 = -1;
	volatile uint32_t x326 = UINT32_MAX;
	volatile int8_t x328 = INT8_MIN;
	int32_t t68 = -2182524;

	t68 = (((x325-x326)+x327)==x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x329 = INT64_MIN;
	int64_t x330 = -1LL;
	uint16_t x331 = 336U;
	int16_t x332 = INT16_MIN;

	t69 = (((x329-x330)+x331)==x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x337 = UINT64_MAX;
	static volatile uint64_t x338 = UINT64_MAX;
	volatile int32_t x340 = INT32_MIN;
	volatile int32_t t70 = 96018117;

	t70 = (((x337-x338)+x339)==x340);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x341 = UINT8_MAX;
	volatile int32_t x343 = -1;
	int64_t x344 = -1LL;
	int32_t t71 = 21;

	t71 = (((x341-x342)+x343)==x344);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = INT32_MIN;
	static volatile uint32_t x346 = UINT32_MAX;
	volatile int8_t x347 = INT8_MIN;
	volatile uint64_t x348 = 51888LLU;
	int32_t t72 = 0;

	t72 = (((x345-x346)+x347)==x348);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x349 = 48302538U;
	static int16_t x350 = INT16_MAX;
	int16_t x351 = -1;
	static uint16_t x352 = 5038U;
	volatile int32_t t73 = -639;

	t73 = (((x349-x350)+x351)==x352);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x353 = UINT64_MAX;
	volatile int32_t t74 = 2936;

	t74 = (((x353-x354)+x355)==x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x362 = -16756LL;
	int16_t x363 = INT16_MAX;
	static volatile int8_t x364 = INT8_MAX;

	t75 = (((x361-x362)+x363)==x364);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x365 = 11;
	int8_t x366 = -1;
	int64_t x367 = INT64_MIN;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t76 = 12;

	t76 = (((x365-x366)+x367)==x368);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x369 = INT16_MIN;
	uint32_t x370 = 13827055U;
	static volatile int8_t x371 = INT8_MAX;
	static int16_t x372 = INT16_MAX;
	volatile int32_t t77 = 174132588;

	t77 = (((x369-x370)+x371)==x372);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x373 = 366LLU;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MAX;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t78 = 1014485479;

	t78 = (((x373-x374)+x375)==x376);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x377 = UINT64_MAX;
	int32_t x378 = -1;
	static volatile int8_t x379 = -1;
	static int64_t x380 = INT64_MIN;
	static volatile int32_t t79 = -7082626;

	t79 = (((x377-x378)+x379)==x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x382 = INT8_MAX;
	int8_t x383 = -1;
	int16_t x384 = INT16_MAX;
	static volatile int32_t t80 = -12838;

	t80 = (((x381-x382)+x383)==x384);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x394 = -10640;
	static volatile int32_t t81 = 2035;

	t81 = (((x393-x394)+x395)==x396);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x397 = -1;
	uint8_t x399 = 65U;
	int32_t t82 = -17;

	t82 = (((x397-x398)+x399)==x400);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x405 = 9237U;
	int8_t x406 = 0;
	int16_t x407 = -1;
	static int64_t x408 = -952LL;
	volatile int32_t t83 = 11441;

	t83 = (((x405-x406)+x407)==x408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x413 = INT64_MIN;
	uint64_t x414 = UINT64_MAX;
	static uint32_t x415 = 1511U;
	int64_t x416 = INT64_MAX;
	int32_t t84 = -3;

	t84 = (((x413-x414)+x415)==x416);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x417 = INT16_MIN;
	volatile uint64_t x419 = 2319825LLU;
	uint16_t x420 = 2U;

	t85 = (((x417-x418)+x419)==x420);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x422 = -1;
	uint64_t x423 = UINT64_MAX;
	int32_t x424 = INT32_MIN;
	volatile int32_t t86 = 8437911;

	t86 = (((x421-x422)+x423)==x424);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x425 = -78;
	volatile int32_t x426 = -10476;
	int8_t x427 = INT8_MIN;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t87 = 107465;

	t87 = (((x425-x426)+x427)==x428);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x429 = INT16_MIN;
	int8_t x430 = INT8_MAX;
	int8_t x431 = INT8_MIN;
	int16_t x432 = INT16_MIN;
	int32_t t88 = 152;

	t88 = (((x429-x430)+x431)==x432);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x433 = 2759881LL;
	static int32_t x434 = INT32_MAX;
	static uint64_t x435 = 668862LLU;
	volatile int8_t x436 = INT8_MAX;

	t89 = (((x433-x434)+x435)==x436);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x437 = -2531;
	int16_t x438 = 30;
	int32_t x439 = -1;
	int16_t x440 = INT16_MIN;
	int32_t t90 = 0;

	t90 = (((x437-x438)+x439)==x440);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x441 = -1LL;
	static uint32_t x443 = 40U;
	uint16_t x444 = 1U;
	static int32_t t91 = 26307;

	t91 = (((x441-x442)+x443)==x444);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x446 = UINT64_MAX;
	volatile int64_t x447 = 25593946LL;
	uint64_t x448 = 6653314LLU;
	int32_t t92 = 1;

	t92 = (((x445-x446)+x447)==x448);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x453 = 1;
	uint64_t x454 = UINT64_MAX;
	static int64_t x455 = -718162949502985LL;

	t93 = (((x453-x454)+x455)==x456);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x457 = 3982;
	int32_t t94 = -28818;

	t94 = (((x457-x458)+x459)==x460);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x461 = INT8_MAX;
	static volatile int32_t x462 = -1109;
	int32_t t95 = -347125;

	t95 = (((x461-x462)+x463)==x464);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x465 = INT16_MIN;
	uint16_t x467 = 230U;
	int8_t x468 = INT8_MIN;
	volatile int32_t t96 = -15979;

	t96 = (((x465-x466)+x467)==x468);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x470 = INT64_MAX;
	uint8_t x471 = UINT8_MAX;
	int8_t x472 = 27;

	t97 = (((x469-x470)+x471)==x472);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x474 = INT32_MAX;
	volatile int64_t x475 = INT64_MAX;
	int64_t x476 = 99183LL;
	volatile int32_t t98 = -1709;

	t98 = (((x473-x474)+x475)==x476);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x477 = INT32_MAX;
	uint32_t x478 = 429930644U;

	t99 = (((x477-x478)+x479)==x480);

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

