#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
volatile uint8_t x2 = 78U;
static uint64_t x9 = 0LLU;
volatile int32_t t1 = 0;
int8_t x18 = 14;
int64_t x36 = INT64_MAX;
uint64_t x44 = 11LLU;
int32_t x45 = INT32_MIN;
int64_t x46 = -7306LL;
uint16_t x59 = UINT16_MAX;
static volatile int32_t t9 = -780420;
uint16_t x70 = 9805U;
int32_t t11 = -2;
int64_t x97 = INT64_MAX;
int8_t x98 = INT8_MIN;
int16_t x101 = -2542;
int64_t x102 = INT64_MAX;
static volatile int32_t t17 = -17209;
int32_t x105 = 549579560;
int32_t t18 = -1688;
volatile int8_t x109 = -1;
static volatile int32_t t20 = 0;
uint16_t x117 = UINT16_MAX;
int8_t x124 = INT8_MIN;
uint32_t x135 = UINT32_MAX;
static int64_t x138 = -2640046287LL;
static int16_t x149 = -1;
uint16_t x152 = UINT16_MAX;
uint8_t x154 = 32U;
uint64_t x163 = 81359206791572LLU;
volatile int32_t t28 = 42943579;
uint16_t x173 = 1U;
volatile int16_t x175 = INT16_MIN;
int32_t t30 = -12;
static int64_t x191 = -5891597923LL;
int64_t x192 = INT64_MIN;
volatile uint32_t x196 = UINT32_MAX;
int64_t x200 = -1LL;
int8_t x207 = INT8_MAX;
int8_t x208 = -1;
volatile int32_t t38 = -11;
static volatile int32_t x215 = -1;
int16_t x221 = -1;
int64_t x227 = -1LL;
volatile int32_t t43 = 18;
static volatile int32_t x260 = 13;
volatile int16_t x261 = INT16_MIN;
static int32_t t46 = 13878334;
static int64_t x266 = INT64_MAX;
static uint32_t x272 = UINT32_MAX;
volatile int16_t x282 = -3;
static int32_t x284 = INT32_MIN;
volatile int64_t x293 = INT64_MIN;
int32_t x294 = 233294;
uint64_t x296 = 437586LLU;
static volatile uint32_t x306 = UINT32_MAX;
int8_t x307 = 1;
static uint8_t x314 = 21U;
volatile int16_t x319 = -1;
uint16_t x341 = 98U;
volatile int32_t t59 = 25360;
int32_t x350 = 81792;
uint8_t x356 = 31U;
static int16_t x359 = INT16_MIN;
int64_t x360 = -1LL;
uint16_t x377 = UINT16_MAX;
int32_t t65 = -226828876;
int8_t x382 = INT8_MIN;
static int8_t x391 = INT8_MIN;
int8_t x394 = 53;
int32_t t69 = -476;
volatile uint32_t x399 = UINT32_MAX;
volatile int32_t t71 = -762;
int32_t x412 = INT32_MIN;
int64_t x414 = INT64_MAX;
uint64_t x417 = 93148145LLU;
int64_t x427 = -1LL;
int8_t x438 = INT8_MIN;
static volatile int32_t t77 = 1;
volatile uint32_t x449 = 4010512U;
static volatile uint64_t x451 = 853498LLU;
volatile int32_t t79 = -15265;
int8_t x463 = 0;
volatile uint32_t x469 = 5U;
int64_t x476 = INT64_MAX;
uint32_t x486 = 16508276U;
int16_t x507 = 30;
volatile uint8_t x516 = 2U;
int64_t x517 = INT64_MIN;
uint16_t x518 = 0U;
int16_t x520 = INT16_MIN;
uint8_t x522 = UINT8_MAX;
int8_t x533 = INT8_MIN;
volatile int8_t x534 = -1;
static int32_t t93 = 6;
uint32_t x544 = 37052U;
int8_t x555 = INT8_MAX;
uint64_t x568 = UINT64_MAX;
volatile int32_t t98 = 811;
uint32_t x571 = 198624087U;
static uint32_t x572 = 11U;
static volatile int32_t t99 = -90;


void f0(void) {
	int8_t x3 = 6;
	int64_t x4 = 9389378LL;
	int32_t t0 = 1;

	t0 = (x1<=((x2*x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x10 = 3U;
	static uint8_t x11 = 6U;
	static volatile int32_t x12 = 18;

	t1 = (x9<=((x10*x11)<=x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x17 = -1;
	static int16_t x19 = INT16_MAX;
	uint16_t x20 = 24U;
	volatile int32_t t2 = -516756153;

	t2 = (x17<=((x18*x19)<=x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -1;
	static volatile int8_t x22 = 23;
	volatile uint8_t x23 = UINT8_MAX;
	int64_t x24 = 475LL;
	static volatile int32_t t3 = -60;

	t3 = (x21<=((x22*x23)<=x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x29 = INT64_MIN;
	int8_t x30 = -2;
	int16_t x31 = 6572;
	int16_t x32 = 242;
	int32_t t4 = 975565937;

	t4 = (x29<=((x30*x31)<=x32));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MIN;
	uint64_t x34 = 817899926LLU;
	int8_t x35 = INT8_MIN;
	volatile int32_t t5 = 0;

	t5 = (x33<=((x34*x35)<=x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x41 = INT8_MAX;
	static int64_t x42 = -2685562LL;
	int8_t x43 = INT8_MAX;
	int32_t t6 = -984;

	t6 = (x41<=((x42*x43)<=x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x47 = 2;
	int32_t x48 = -1;
	int32_t t7 = 50135312;

	t7 = (x45<=((x46*x47)<=x48));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x53 = INT32_MIN;
	int8_t x54 = -1;
	uint16_t x55 = 1U;
	uint32_t x56 = 257U;
	volatile int32_t t8 = 1;

	t8 = (x53<=((x54*x55)<=x56));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = INT64_MIN;
	uint16_t x58 = 212U;
	uint32_t x60 = 13214372U;

	t9 = (x57<=((x58*x59)<=x60));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x65 = INT64_MIN;
	static uint16_t x66 = 44U;
	static uint32_t x67 = UINT32_MAX;
	uint16_t x68 = 2U;
	int32_t t10 = -7463291;

	t10 = (x65<=((x66*x67)<=x68));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = INT32_MIN;
	uint16_t x71 = 39U;
	volatile int64_t x72 = -1LL;

	t11 = (x69<=((x70*x71)<=x72));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = -1;
	uint8_t x74 = 1U;
	int16_t x75 = INT16_MIN;
	volatile int8_t x76 = INT8_MIN;
	int32_t t12 = 177146312;

	t12 = (x73<=((x74*x75)<=x76));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = INT32_MIN;
	uint32_t x78 = 217102U;
	int64_t x79 = -7LL;
	int32_t x80 = INT32_MIN;
	int32_t t13 = -32403536;

	t13 = (x77<=((x78*x79)<=x80));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x81 = UINT32_MAX;
	uint64_t x82 = 589756LLU;
	int64_t x83 = 5331952374LL;
	static uint64_t x84 = UINT64_MAX;
	int32_t t14 = -1;

	t14 = (x81<=((x82*x83)<=x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x93 = UINT64_MAX;
	volatile int32_t x94 = 1370877;
	int64_t x95 = -1LL;
	static int32_t x96 = INT32_MAX;
	volatile int32_t t15 = -109325;

	t15 = (x93<=((x94*x95)<=x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x99 = -143133089LL;
	int16_t x100 = -1;
	volatile int32_t t16 = -59;

	t16 = (x97<=((x98*x99)<=x100));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x103 = -1;
	uint64_t x104 = UINT64_MAX;

	t17 = (x101<=((x102*x103)<=x104));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x106 = -1;
	int64_t x107 = INT64_MAX;
	int32_t x108 = INT32_MIN;

	t18 = (x105<=((x106*x107)<=x108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x110 = INT32_MIN;
	uint64_t x111 = 187LLU;
	int64_t x112 = INT64_MIN;
	int32_t t19 = 20415519;

	t19 = (x109<=((x110*x111)<=x112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x113 = 65397420997828LL;
	volatile uint64_t x114 = 1LLU;
	volatile uint64_t x115 = UINT64_MAX;
	int64_t x116 = -1LL;

	t20 = (x113<=((x114*x115)<=x116));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x118 = 404939U;
	volatile int32_t x119 = INT32_MAX;
	uint8_t x120 = 27U;
	volatile int32_t t21 = -1864747;

	t21 = (x117<=((x118*x119)<=x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 17U;
	uint64_t x122 = 706LLU;
	uint8_t x123 = UINT8_MAX;
	volatile int32_t t22 = 3605;

	t22 = (x121<=((x122*x123)<=x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x133 = UINT8_MAX;
	uint16_t x134 = UINT16_MAX;
	int32_t x136 = -1;
	int32_t t23 = -726647;

	t23 = (x133<=((x134*x135)<=x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = -1;
	static int32_t x139 = INT32_MIN;
	static uint16_t x140 = 5322U;
	int32_t t24 = -1806;

	t24 = (x137<=((x138*x139)<=x140));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x150 = 181395;
	static volatile int16_t x151 = 5;
	static volatile int32_t t25 = -293;

	t25 = (x149<=((x150*x151)<=x152));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x153 = INT32_MIN;
	int8_t x155 = 8;
	int16_t x156 = -1;
	volatile int32_t t26 = -206;

	t26 = (x153<=((x154*x155)<=x156));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x157 = 3037219673127825LL;
	uint32_t x158 = 11179U;
	int32_t x159 = -1;
	int8_t x160 = INT8_MIN;
	int32_t t27 = 261237;

	t27 = (x157<=((x158*x159)<=x160));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x161 = UINT16_MAX;
	volatile int64_t x162 = -1LL;
	int8_t x164 = 1;

	t28 = (x161<=((x162*x163)<=x164));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x169 = UINT32_MAX;
	int64_t x170 = 75500LL;
	uint32_t x171 = UINT32_MAX;
	int16_t x172 = INT16_MIN;
	int32_t t29 = 321518;

	t29 = (x169<=((x170*x171)<=x172));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x174 = INT8_MAX;
	int32_t x176 = INT32_MIN;

	t30 = (x173<=((x174*x175)<=x176));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x177 = UINT8_MAX;
	uint16_t x178 = 6U;
	uint32_t x179 = 1149944852U;
	int64_t x180 = 3124849868613322LL;
	int32_t t31 = -5;

	t31 = (x177<=((x178*x179)<=x180));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x181 = 2483365;
	static uint16_t x182 = 45U;
	int64_t x183 = -1LL;
	volatile int16_t x184 = INT16_MIN;
	int32_t t32 = 22;

	t32 = (x181<=((x182*x183)<=x184));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x185 = INT64_MIN;
	static int16_t x186 = -27;
	int8_t x187 = -1;
	int32_t x188 = INT32_MIN;
	static int32_t t33 = -184143;

	t33 = (x185<=((x186*x187)<=x188));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x189 = UINT32_MAX;
	static volatile int8_t x190 = INT8_MIN;
	volatile int32_t t34 = -22439582;

	t34 = (x189<=((x190*x191)<=x192));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x193 = 1844U;
	static uint16_t x194 = UINT16_MAX;
	volatile uint8_t x195 = 127U;
	int32_t t35 = -133;

	t35 = (x193<=((x194*x195)<=x196));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x197 = INT32_MIN;
	uint16_t x198 = 10U;
	int64_t x199 = -1LL;
	int32_t t36 = 371;

	t36 = (x197<=((x198*x199)<=x200));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x201 = 7028U;
	uint16_t x202 = UINT16_MAX;
	uint8_t x203 = 2U;
	static int8_t x204 = 4;
	int32_t t37 = -15238864;

	t37 = (x201<=((x202*x203)<=x204));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x205 = -6596;
	int16_t x206 = INT16_MIN;

	t38 = (x205<=((x206*x207)<=x208));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x213 = 13006445708602LLU;
	int16_t x214 = 1;
	int8_t x216 = -11;
	int32_t t39 = -110;

	t39 = (x213<=((x214*x215)<=x216));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x222 = 58U;
	volatile int64_t x223 = 829227LL;
	static uint8_t x224 = UINT8_MAX;
	static int32_t t40 = -12179295;

	t40 = (x221<=((x222*x223)<=x224));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x225 = -55372894517958LL;
	uint8_t x226 = 6U;
	uint8_t x228 = 15U;
	volatile int32_t t41 = 2;

	t41 = (x225<=((x226*x227)<=x228));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x241 = UINT8_MAX;
	volatile int64_t x242 = 12828664057629LL;
	uint64_t x243 = UINT64_MAX;
	uint64_t x244 = 203919933888418LLU;
	int32_t t42 = 1;

	t42 = (x241<=((x242*x243)<=x244));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x245 = 1;
	volatile uint8_t x246 = 0U;
	int32_t x247 = INT32_MIN;
	int32_t x248 = -3;

	t43 = (x245<=((x246*x247)<=x248));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x249 = INT64_MIN;
	static uint64_t x250 = 7302732571312236214LLU;
	int64_t x251 = -12227814LL;
	static volatile int64_t x252 = INT64_MAX;
	int32_t t44 = 25;

	t44 = (x249<=((x250*x251)<=x252));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x257 = INT32_MIN;
	volatile int32_t x258 = INT32_MIN;
	uint64_t x259 = 12050LLU;
	static volatile int32_t t45 = -3699;

	t45 = (x257<=((x258*x259)<=x260));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x262 = 1453U;
	int32_t x263 = -24156;
	volatile int64_t x264 = INT64_MAX;

	t46 = (x261<=((x262*x263)<=x264));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x265 = 115U;
	uint64_t x267 = 169231181269LLU;
	int8_t x268 = INT8_MAX;
	static volatile int32_t t47 = 28183;

	t47 = (x265<=((x266*x267)<=x268));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x269 = -1;
	static int32_t x270 = 14837191;
	uint64_t x271 = 0LLU;
	static volatile int32_t t48 = 2;

	t48 = (x269<=((x270*x271)<=x272));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x281 = UINT16_MAX;
	uint32_t x283 = 12067213U;
	int32_t t49 = 7062931;

	t49 = (x281<=((x282*x283)<=x284));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x285 = UINT32_MAX;
	int16_t x286 = -1;
	int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	volatile int32_t t50 = -319660311;

	t50 = (x285<=((x286*x287)<=x288));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x295 = -1LL;
	int32_t t51 = 466632026;

	t51 = (x293<=((x294*x295)<=x296));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x297 = 1248630;
	int16_t x298 = 297;
	uint64_t x299 = 17037145LLU;
	volatile int64_t x300 = 245LL;
	volatile int32_t t52 = -28;

	t52 = (x297<=((x298*x299)<=x300));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x305 = -1;
	uint8_t x308 = 2U;
	volatile int32_t t53 = 32459;

	t53 = (x305<=((x306*x307)<=x308));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x313 = INT64_MIN;
	int8_t x315 = INT8_MIN;
	int64_t x316 = -27953152292802221LL;
	int32_t t54 = -373194;

	t54 = (x313<=((x314*x315)<=x316));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x317 = 42U;
	int16_t x318 = -1;
	int16_t x320 = -1;
	volatile int32_t t55 = 565958;

	t55 = (x317<=((x318*x319)<=x320));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x321 = -1;
	volatile int16_t x322 = 12;
	uint8_t x323 = 3U;
	static volatile int16_t x324 = INT16_MIN;
	int32_t t56 = 0;

	t56 = (x321<=((x322*x323)<=x324));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x329 = -1;
	int64_t x330 = 4LL;
	int64_t x331 = 0LL;
	int32_t x332 = -1;
	int32_t t57 = -7;

	t57 = (x329<=((x330*x331)<=x332));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x337 = 2;
	uint16_t x338 = UINT16_MAX;
	static int8_t x339 = 5;
	static int64_t x340 = 115401341076219576LL;
	int32_t t58 = -843;

	t58 = (x337<=((x338*x339)<=x340));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x342 = 0;
	int32_t x343 = INT32_MAX;
	static volatile int8_t x344 = INT8_MIN;

	t59 = (x341<=((x342*x343)<=x344));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x349 = INT64_MIN;
	uint32_t x351 = UINT32_MAX;
	static volatile int32_t x352 = -1;
	static volatile int32_t t60 = -213580;

	t60 = (x349<=((x350*x351)<=x352));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x353 = 0U;
	int16_t x354 = -3;
	uint64_t x355 = UINT64_MAX;
	volatile int32_t t61 = 770;

	t61 = (x353<=((x354*x355)<=x356));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x357 = 7;
	int16_t x358 = 3552;
	volatile int32_t t62 = 509;

	t62 = (x357<=((x358*x359)<=x360));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x361 = 1371LLU;
	static int8_t x362 = INT8_MIN;
	volatile uint8_t x363 = 125U;
	static int16_t x364 = 120;
	volatile int32_t t63 = 169;

	t63 = (x361<=((x362*x363)<=x364));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x369 = -1;
	int8_t x370 = 3;
	static int8_t x371 = INT8_MAX;
	uint32_t x372 = 476788448U;
	int32_t t64 = 1;

	t64 = (x369<=((x370*x371)<=x372));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x378 = INT16_MIN;
	uint16_t x379 = UINT16_MAX;
	volatile int32_t x380 = INT32_MIN;

	t65 = (x377<=((x378*x379)<=x380));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x381 = -1;
	int32_t x383 = 31;
	uint64_t x384 = 1412121428966808LLU;
	int32_t t66 = 328;

	t66 = (x381<=((x382*x383)<=x384));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x385 = 33439413625934388LLU;
	static uint16_t x386 = 686U;
	uint8_t x387 = 2U;
	volatile int8_t x388 = INT8_MIN;
	int32_t t67 = -802623002;

	t67 = (x385<=((x386*x387)<=x388));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x389 = INT32_MAX;
	uint8_t x390 = UINT8_MAX;
	int64_t x392 = 2241752LL;
	volatile int32_t t68 = -4809;

	t68 = (x389<=((x390*x391)<=x392));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x393 = INT16_MAX;
	static uint32_t x395 = 503760735U;
	static uint8_t x396 = 32U;

	t69 = (x393<=((x394*x395)<=x396));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x397 = INT16_MIN;
	volatile int8_t x398 = -1;
	int64_t x400 = INT64_MAX;
	static int32_t t70 = 6144290;

	t70 = (x397<=((x398*x399)<=x400));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x401 = 4U;
	volatile int32_t x402 = -1;
	int16_t x403 = -13001;
	static int16_t x404 = INT16_MAX;

	t71 = (x401<=((x402*x403)<=x404));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MIN;
	volatile uint64_t x411 = 2461LLU;
	volatile int32_t t72 = 14210;

	t72 = (x409<=((x410*x411)<=x412));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x413 = -3442166066380548LL;
	static volatile uint64_t x415 = 460816951453279LLU;
	int64_t x416 = -4100920461801491127LL;
	int32_t t73 = 40274;

	t73 = (x413<=((x414*x415)<=x416));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x418 = 50;
	uint8_t x419 = UINT8_MAX;
	volatile uint64_t x420 = UINT64_MAX;
	int32_t t74 = 495317107;

	t74 = (x417<=((x418*x419)<=x420));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x425 = 1437U;
	volatile int8_t x426 = -1;
	uint32_t x428 = 44999U;
	int32_t t75 = -14;

	t75 = (x425<=((x426*x427)<=x428));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x429 = INT8_MAX;
	volatile int64_t x430 = 0LL;
	volatile int64_t x431 = -1LL;
	int16_t x432 = INT16_MAX;
	volatile int32_t t76 = -1745;

	t76 = (x429<=((x430*x431)<=x432));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x437 = -1;
	static uint64_t x439 = 2421134525906902LLU;
	int32_t x440 = -1;

	t77 = (x437<=((x438*x439)<=x440));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x445 = 1348U;
	int8_t x446 = -3;
	uint64_t x447 = 54701LLU;
	int32_t x448 = INT32_MIN;
	volatile int32_t t78 = 176;

	t78 = (x445<=((x446*x447)<=x448));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x450 = INT64_MAX;
	volatile int32_t x452 = -76208955;

	t79 = (x449<=((x450*x451)<=x452));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x453 = -107LL;
	static uint32_t x454 = UINT32_MAX;
	int64_t x455 = -1LL;
	uint32_t x456 = 27801U;
	static volatile int32_t t80 = 27779;

	t80 = (x453<=((x454*x455)<=x456));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x461 = INT32_MAX;
	int16_t x462 = 10082;
	int32_t x464 = INT32_MAX;
	volatile int32_t t81 = -46692;

	t81 = (x461<=((x462*x463)<=x464));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x470 = INT16_MIN;
	int8_t x471 = INT8_MIN;
	uint32_t x472 = UINT32_MAX;
	volatile int32_t t82 = 15;

	t82 = (x469<=((x470*x471)<=x472));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x473 = 4;
	int8_t x474 = -26;
	uint8_t x475 = 2U;
	volatile int32_t t83 = 499;

	t83 = (x473<=((x474*x475)<=x476));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x477 = -1;
	uint8_t x478 = UINT8_MAX;
	int8_t x479 = INT8_MIN;
	int64_t x480 = 1LL;
	int32_t t84 = -95240;

	t84 = (x477<=((x478*x479)<=x480));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x485 = -1;
	uint8_t x487 = 3U;
	volatile int16_t x488 = 127;
	int32_t t85 = -13785011;

	t85 = (x485<=((x486*x487)<=x488));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x493 = INT16_MIN;
	int16_t x494 = -484;
	static int8_t x495 = INT8_MIN;
	int64_t x496 = -208LL;
	volatile int32_t t86 = 189055943;

	t86 = (x493<=((x494*x495)<=x496));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x501 = 7324LLU;
	uint64_t x502 = 322LLU;
	static volatile int32_t x503 = INT32_MIN;
	int64_t x504 = 1699814LL;
	volatile int32_t t87 = 145;

	t87 = (x501<=((x502*x503)<=x504));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x505 = -1;
	int8_t x506 = INT8_MAX;
	static volatile uint16_t x508 = 0U;
	int32_t t88 = -26903;

	t88 = (x505<=((x506*x507)<=x508));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x513 = 0U;
	static uint16_t x514 = 45U;
	uint16_t x515 = 1U;
	int32_t t89 = -648;

	t89 = (x513<=((x514*x515)<=x516));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x519 = 1U;
	static volatile int32_t t90 = -635691;

	t90 = (x517<=((x518*x519)<=x520));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x521 = 5U;
	int8_t x523 = 1;
	static int32_t x524 = INT32_MIN;
	volatile int32_t t91 = 830876;

	t91 = (x521<=((x522*x523)<=x524));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x525 = 902193212U;
	static uint32_t x526 = UINT32_MAX;
	static int64_t x527 = 9533LL;
	uint16_t x528 = 13788U;
	static int32_t t92 = 1;

	t92 = (x525<=((x526*x527)<=x528));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x535 = UINT16_MAX;
	int32_t x536 = -1;

	t93 = (x533<=((x534*x535)<=x536));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x541 = INT64_MIN;
	int8_t x542 = INT8_MIN;
	uint16_t x543 = 13359U;
	int32_t t94 = 367615637;

	t94 = (x541<=((x542*x543)<=x544));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x545 = INT16_MIN;
	uint8_t x546 = UINT8_MAX;
	int16_t x547 = -1;
	int64_t x548 = INT64_MIN;
	volatile int32_t t95 = -24628159;

	t95 = (x545<=((x546*x547)<=x548));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x553 = UINT64_MAX;
	uint64_t x554 = 186LLU;
	static int32_t x556 = -522;
	volatile int32_t t96 = -126574119;

	t96 = (x553<=((x554*x555)<=x556));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x557 = 26U;
	volatile uint64_t x558 = 136395724LLU;
	uint8_t x559 = UINT8_MAX;
	int8_t x560 = INT8_MIN;
	volatile int32_t t97 = 2013;

	t97 = (x557<=((x558*x559)<=x560));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x565 = INT16_MIN;
	uint32_t x566 = UINT32_MAX;
	int32_t x567 = -1;

	t98 = (x565<=((x566*x567)<=x568));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x569 = 8910U;
	uint16_t x570 = 6U;

	t99 = (x569<=((x570*x571)<=x572));

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

