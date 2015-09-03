#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
uint32_t x5 = 1568U;
int16_t x9 = -1;
volatile int8_t x11 = 24;
int16_t x22 = -1;
static int64_t t4 = -22388LL;
int32_t x28 = -727704304;
int64_t x32 = INT64_MIN;
int32_t x35 = -1;
int16_t x36 = INT16_MAX;
int8_t x42 = -1;
int8_t x55 = 7;
static volatile int32_t x58 = -18096165;
static volatile int8_t x61 = -3;
uint16_t x74 = 223U;
uint32_t x87 = UINT32_MAX;
volatile int16_t x88 = 0;
int64_t x95 = -1LL;
volatile uint64_t t23 = 1255775280LLU;
volatile int32_t t25 = 6551139;
volatile uint32_t x130 = 292081U;
static volatile uint64_t x131 = 4024650699LLU;
static volatile int64_t t31 = 142687521045854LL;
int64_t t32 = -83LL;
static volatile uint32_t x147 = 1388346835U;
static int8_t x153 = 0;
uint16_t x171 = 42U;
int32_t x172 = -2;
volatile int32_t t38 = -29758105;
static uint16_t x176 = UINT16_MAX;
volatile uint64_t t39 = 940464112749LLU;
volatile uint64_t t41 = 32052950682LLU;
uint8_t x190 = UINT8_MAX;
int32_t t43 = -129455;
uint16_t x195 = UINT16_MAX;
volatile int8_t x196 = 1;
volatile int32_t t44 = 7;
static uint8_t x200 = 2U;
static volatile int32_t t45 = 0;
uint64_t x203 = 4452705933LLU;
volatile int8_t x206 = -1;
uint64_t x212 = 159328999406LLU;
uint16_t x228 = 96U;
static int16_t x233 = 4;
int8_t x240 = INT8_MIN;
volatile int32_t t55 = 7218;
static uint16_t x250 = 44U;
int8_t x251 = 1;
volatile uint16_t x261 = 3U;
static volatile int64_t t59 = -2229496623572398031LL;
int32_t x265 = INT32_MIN;
uint64_t x272 = 18706273LLU;
int64_t x276 = -37999862753973LL;
int8_t x282 = INT8_MAX;
int64_t x285 = INT64_MAX;
int8_t x289 = INT8_MAX;
volatile int16_t x297 = INT16_MIN;
int64_t x299 = 2807643LL;
static uint64_t t67 = 4464259025213301LLU;
static int64_t x312 = 7741302638938269LL;
int8_t x316 = INT8_MAX;
int8_t x320 = INT8_MIN;
volatile int64_t t72 = -20LL;
static int32_t x322 = -1;
uint64_t x324 = 1232317880813635LLU;
uint32_t x327 = UINT32_MAX;
static uint32_t t74 = 3U;
volatile uint64_t x330 = 746254051LLU;
int8_t x332 = -1;
int32_t x339 = INT32_MIN;
uint16_t x345 = 697U;
static uint64_t x346 = UINT64_MAX;
int16_t x347 = -1;
int32_t x350 = INT32_MIN;
uint64_t x351 = 33463160671LLU;
volatile uint8_t x360 = UINT8_MAX;
int32_t t82 = -66902024;
volatile uint64_t x361 = UINT64_MAX;
static uint8_t x362 = UINT8_MAX;
volatile uint64_t t83 = 2728663593676599LLU;
uint64_t t85 = 121006545980033228LLU;
volatile uint8_t x375 = 2U;
uint64_t x387 = 11896LLU;
int32_t x390 = INT32_MAX;
static uint64_t t90 = 1835585899271LLU;
static int8_t x403 = -1;
volatile uint32_t t93 = 60U;
int32_t x409 = -1;
int64_t x411 = INT64_MIN;
int64_t t94 = 1LL;
volatile int16_t x415 = -1;
volatile int8_t x418 = 7;
int64_t x421 = -157212260LL;
volatile uint32_t x422 = 2653081U;
static int32_t x423 = -1;
static volatile uint32_t t98 = 70785755U;
static int32_t x432 = -1;
volatile int32_t t99 = 1797607;


void f0(void) {
	volatile int16_t x1 = 28;
	uint32_t x3 = 3977418U;
	int8_t x4 = INT8_MIN;
	volatile uint32_t t0 = 35419634U;

	t0 = (x1-((x2/x3)|x4));

	if (t0 != 129U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MAX;
	int64_t x7 = -1LL;
	int32_t x8 = INT32_MIN;
	volatile int64_t t1 = -641LL;

	t1 = (x5-((x6/x7)|x8));

	if (t1 != 2147485215LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	static int64_t x12 = INT64_MAX;
	int64_t t2 = INT64_MIN;

	t2 = (x9-((x10/x11)|x12));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MAX;
	int32_t x19 = INT32_MIN;
	int8_t x20 = -13;
	static int64_t t3 = 471LL;

	t3 = (x17-((x18/x19)|x20));

	if (t3 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = -8888541158128254LL;
	int64_t x23 = -1LL;
	volatile int16_t x24 = INT16_MIN;

	t4 = (x21-((x22/x23)|x24));

	if (t4 != -8888541158095487LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 8U;
	int8_t x26 = INT8_MIN;
	static int64_t x27 = INT64_MAX;
	static volatile int64_t t5 = -209311LL;

	t5 = (x25-((x26/x27)|x28));

	if (t5 != 727704312LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MAX;
	int32_t x31 = INT32_MIN;
	volatile int64_t t6 = 5544494915LL;

	t6 = (x29-((x30/x31)|x32));

	if (t6 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 22;
	int64_t x34 = -1LL;
	int64_t t7 = -303564081013622LL;

	t7 = (x33-((x34/x35)|x36));

	if (t7 != -32745LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = 138911U;
	static uint64_t x38 = UINT64_MAX;
	int16_t x39 = 5053;
	uint8_t x40 = 44U;
	static volatile uint64_t t8 = 7697246779LLU;

	t8 = (x37-((x38/x39)|x40));

	if (t8 != 18443093421805136882LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = INT16_MIN;
	uint8_t x43 = UINT8_MAX;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t9 = -411517;

	t9 = (x41-((x42/x43)|x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MIN;
	int32_t x46 = -488826245;
	uint64_t x47 = UINT64_MAX;
	int64_t x48 = INT64_MIN;
	uint64_t t10 = 240756LLU;

	t10 = (x45-((x46/x47)|x48));

	if (t10 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = 0;
	int64_t x50 = -1LL;
	volatile int32_t x51 = -1;
	uint16_t x52 = UINT16_MAX;
	static volatile int64_t t11 = -8924865260348LL;

	t11 = (x49-((x50/x51)|x52));

	if (t11 != -65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = 4;
	int64_t x54 = INT64_MIN;
	volatile uint64_t x56 = UINT64_MAX;
	uint64_t t12 = 94230701LLU;

	t12 = (x53-((x54/x55)|x56));

	if (t12 != 5LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 1968U;
	int8_t x59 = -43;
	uint32_t x60 = 8267509U;
	static volatile uint32_t t13 = 870465U;

	t13 = (x57-((x58/x59)|x60));

	if (t13 != 4286683059U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = INT32_MAX;
	int64_t x63 = -1LL;
	int32_t x64 = INT32_MIN;
	volatile int64_t t14 = 3270551709860LL;

	t14 = (x61-((x62/x63)|x64));

	if (t14 != 2147483644LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = INT32_MIN;
	int32_t x66 = -1;
	int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MIN;
	int64_t t15 = -4168LL;

	t15 = (x65-((x66/x67)|x68));

	if (t15 != -2147483520LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	uint16_t x70 = UINT16_MAX;
	uint8_t x71 = 25U;
	int32_t x72 = INT32_MAX;
	int64_t t16 = 580800LL;

	t16 = (x69-((x70/x71)|x72));

	if (t16 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = INT64_MAX;
	int32_t x75 = -22026272;
	uint32_t x76 = UINT32_MAX;
	volatile int64_t t17 = 132565969387593LL;

	t17 = (x73-((x74/x75)|x76));

	if (t17 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MAX;
	volatile int8_t x82 = INT8_MAX;
	int64_t x83 = INT64_MIN;
	int64_t x84 = -1LL;
	volatile int64_t t18 = -31991658478678LL;

	t18 = (x81-((x82/x83)|x84));

	if (t18 != 2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 0LLU;
	int8_t x86 = 26;
	volatile uint64_t t19 = 68615230552LLU;

	t19 = (x85-((x86/x87)|x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 8U;
	static int64_t x90 = -1758575766656789083LL;
	int16_t x91 = 403;
	static uint8_t x92 = 2U;
	static int64_t t20 = 48228LL;

	t20 = (x89-((x90/x91)|x92));

	if (t20 != 4363711579793529LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = INT16_MIN;
	uint8_t x94 = UINT8_MAX;
	static uint64_t x96 = UINT64_MAX;
	uint64_t t21 = 68248641304195395LLU;

	t21 = (x93-((x94/x95)|x96));

	if (t21 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = UINT8_MAX;
	volatile uint64_t x98 = 692855LLU;
	int8_t x99 = -1;
	int32_t x100 = 201679;
	static volatile uint64_t t22 = 3LLU;

	t22 = (x97-((x98/x99)|x100));

	if (t22 != 18446744073709350192LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x101 = 306U;
	int32_t x102 = INT32_MIN;
	int8_t x103 = INT8_MAX;
	uint64_t x104 = UINT64_MAX;

	t23 = (x101-((x102/x103)|x104));

	if (t23 != 307LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 34090796272765114LLU;
	int8_t x106 = INT8_MIN;
	int64_t x107 = -41379575LL;
	int8_t x108 = 0;
	static uint64_t t24 = 478LLU;

	t24 = (x105-((x106/x107)|x108));

	if (t24 != 34090796272765114LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = -1;
	int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MAX;

	t25 = (x109-((x110/x111)|x112));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x117 = -1;
	volatile int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	int32_t x120 = INT32_MIN;
	int32_t t26 = -7414211;

	t26 = (x117-((x118/x119)|x120));

	if (t26 != 2147418111) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = 28;
	volatile uint16_t x122 = UINT16_MAX;
	int64_t x123 = INT64_MIN;
	volatile int32_t x124 = INT32_MIN;
	volatile int64_t t27 = 43342568872854093LL;

	t27 = (x121-((x122/x123)|x124));

	if (t27 != 2147483676LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x125 = -13;
	uint8_t x126 = 0U;
	static int8_t x127 = -30;
	int8_t x128 = 14;
	volatile int32_t t28 = 101904;

	t28 = (x125-((x126/x127)|x128));

	if (t28 != -27) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	int64_t x132 = INT64_MIN;
	uint64_t t29 = 3500293409221294LLU;

	t29 = (x129-((x130/x131)|x132));

	if (t29 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = -265;
	volatile int8_t x135 = INT8_MAX;
	int16_t x136 = -1;
	int32_t t30 = -33;

	t30 = (x133-((x134/x135)|x136));

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = 685505975LL;
	volatile int32_t x138 = INT32_MAX;
	int64_t x139 = -939512121715446003LL;
	uint8_t x140 = 7U;

	t31 = (x137-((x138/x139)|x140));

	if (t31 != 685505968LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x141 = 3;
	int32_t x142 = INT32_MIN;
	static int64_t x143 = INT64_MAX;
	int16_t x144 = -1;

	t32 = (x141-((x142/x143)|x144));

	if (t32 != 4LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = INT32_MIN;
	volatile int16_t x146 = -13021;
	volatile uint8_t x148 = 0U;
	volatile uint32_t t33 = 81142U;

	t33 = (x145-((x146/x147)|x148));

	if (t33 != 2147483645U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x154 = UINT16_MAX;
	static int8_t x155 = INT8_MIN;
	int8_t x156 = 0;
	static volatile int32_t t34 = 18143575;

	t34 = (x153-((x154/x155)|x156));

	if (t34 != 511) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x157 = 3;
	uint16_t x158 = 3U;
	int16_t x159 = 24;
	int16_t x160 = INT16_MAX;
	volatile int32_t t35 = -160141;

	t35 = (x157-((x158/x159)|x160));

	if (t35 != -32764) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 11U;
	uint8_t x162 = 0U;
	static volatile uint32_t x163 = UINT32_MAX;
	static uint64_t x164 = UINT64_MAX;
	static uint64_t t36 = 11LLU;

	t36 = (x161-((x162/x163)|x164));

	if (t36 != 12LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -1;
	int16_t x166 = INT16_MIN;
	volatile int32_t x167 = INT32_MAX;
	uint16_t x168 = 3418U;
	static volatile int32_t t37 = 218957944;

	t37 = (x165-((x166/x167)|x168));

	if (t37 != -3419) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -1;
	int32_t x170 = INT32_MIN;

	t38 = (x169-((x170/x171)|x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = UINT32_MAX;
	uint8_t x174 = 47U;
	uint64_t x175 = 652LLU;

	t39 = (x173-((x174/x175)|x176));

	if (t39 != 4294901760LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = 4883770;
	uint16_t x178 = 3U;
	int32_t x179 = INT32_MIN;
	static uint16_t x180 = UINT16_MAX;
	int32_t t40 = 1;

	t40 = (x177-((x178/x179)|x180));

	if (t40 != 4818235) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x181 = 9;
	uint16_t x182 = UINT16_MAX;
	uint64_t x183 = 6823LLU;
	volatile int16_t x184 = INT16_MIN;

	t41 = (x181-((x182/x183)|x184));

	if (t41 != 32768LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MIN;
	int8_t x186 = -1;
	int32_t x187 = INT32_MIN;
	int32_t x188 = 2546713;
	int32_t t42 = 55212;

	t42 = (x185-((x186/x187)|x188));

	if (t42 != -2579481) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MIN;
	int16_t x191 = INT16_MIN;
	int8_t x192 = -1;

	t43 = (x189-((x190/x191)|x192));

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = 5;
	int32_t x194 = -1;

	t44 = (x193-((x194/x195)|x196));

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x197 = 1U;
	int8_t x198 = INT8_MIN;
	static int8_t x199 = INT8_MIN;

	t45 = (x197-((x198/x199)|x200));

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = -1012607423;
	int64_t x202 = 111062795119349233LL;
	int16_t x204 = -6029;
	volatile uint64_t t46 = 0LLU;

	t46 = (x201-((x202/x203)|x204));

	if (t46 != 18446744072696945986LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x205 = 477207480885419047LLU;
	int16_t x207 = INT16_MIN;
	int32_t x208 = -1;
	static uint64_t t47 = 13517873LLU;

	t47 = (x205-((x206/x207)|x208));

	if (t47 != 477207480885419048LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = 1;
	uint32_t x210 = 12U;
	static int16_t x211 = INT16_MAX;
	uint64_t t48 = 1825295LLU;

	t48 = (x209-((x210/x211)|x212));

	if (t48 != 18446743914380552211LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x213 = UINT64_MAX;
	volatile int64_t x214 = -147728528LL;
	static uint32_t x215 = UINT32_MAX;
	int32_t x216 = 0;
	static volatile uint64_t t49 = UINT64_MAX;

	t49 = (x213-((x214/x215)|x216));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = INT64_MAX;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = INT32_MIN;
	volatile uint64_t t50 = 1643LLU;

	t50 = (x217-((x218/x219)|x220));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = UINT64_MAX;
	static int16_t x226 = INT16_MIN;
	uint64_t x227 = UINT64_MAX;
	uint64_t t51 = 17781737753496LLU;

	t51 = (x225-((x226/x227)|x228));

	if (t51 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x234 = INT16_MAX;
	static int32_t x235 = INT32_MIN;
	uint8_t x236 = 4U;
	int32_t t52 = 278936;

	t52 = (x233-((x234/x235)|x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = 1;
	int64_t x238 = INT64_MIN;
	int64_t x239 = 17828049475327790LL;
	volatile int64_t t53 = -7034LL;

	t53 = (x237-((x238/x239)|x240));

	if (t53 != 6LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = -4636;
	int8_t x242 = 1;
	uint8_t x243 = 102U;
	static int8_t x244 = INT8_MAX;
	int32_t t54 = 2;

	t54 = (x241-((x242/x243)|x244));

	if (t54 != -4763) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = -1;
	static volatile int16_t x246 = 1810;
	int32_t x247 = INT32_MIN;
	static uint16_t x248 = 29536U;

	t55 = (x245-((x246/x247)|x248));

	if (t55 != -29537) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = -1;
	uint16_t x252 = 0U;
	int32_t t56 = 250598641;

	t56 = (x249-((x250/x251)|x252));

	if (t56 != -45) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = INT8_MAX;
	int16_t x254 = 1;
	volatile int8_t x255 = INT8_MAX;
	static uint8_t x256 = 14U;
	volatile int32_t t57 = -54335518;

	t57 = (x253-((x254/x255)|x256));

	if (t57 != 113) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 2165U;
	int8_t x258 = 0;
	int16_t x259 = -1;
	uint64_t x260 = UINT64_MAX;
	uint64_t t58 = 4LLU;

	t58 = (x257-((x258/x259)|x260));

	if (t58 != 2166LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x262 = -1;
	volatile int8_t x263 = -1;
	static int64_t x264 = -41690929047LL;

	t59 = (x261-((x262/x263)|x264));

	if (t59 != 41690929050LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x266 = INT8_MAX;
	static volatile int16_t x267 = -1;
	int64_t x268 = 62LL;
	volatile int64_t t60 = 0LL;

	t60 = (x265-((x266/x267)|x268));

	if (t60 != -2147483583LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int16_t x270 = INT16_MIN;
	int32_t x271 = -1782;
	uint64_t t61 = 7792117171LLU;

	t61 = (x269-((x270/x271)|x272));

	if (t61 != 18446744073690845324LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = UINT8_MAX;
	int16_t x274 = -1;
	volatile int32_t x275 = -1;
	int64_t t62 = -122981LL;

	t62 = (x273-((x274/x275)|x276));

	if (t62 != 37999862754228LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x277 = 91U;
	uint8_t x278 = 6U;
	int16_t x279 = INT16_MIN;
	volatile int32_t x280 = -22273;
	int32_t t63 = -3666;

	t63 = (x277-((x278/x279)|x280));

	if (t63 != 22364) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x281 = UINT32_MAX;
	volatile int64_t x283 = 69LL;
	int32_t x284 = -3590931;
	int64_t t64 = 174LL;

	t64 = (x281-((x282/x283)|x284));

	if (t64 != 4298558226LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x286 = 2521857396LLU;
	static uint16_t x287 = 71U;
	volatile int64_t x288 = INT64_MIN;
	uint64_t t65 = 52262233827324056LLU;

	t65 = (x285-((x286/x287)|x288));

	if (t65 != 18446744073674032497LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x290 = 2284LL;
	int8_t x291 = -1;
	uint32_t x292 = 133U;
	int64_t t66 = 3379660348344527650LL;

	t66 = (x289-((x290/x291)|x292));

	if (t66 != 2282LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x298 = UINT32_MAX;
	uint64_t x300 = 209036823636683LLU;

	t67 = (x297-((x298/x299)|x300));

	if (t67 != 18446535036885880837LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x301 = 13371U;
	int64_t x302 = INT64_MAX;
	uint32_t x303 = 15845U;
	int64_t x304 = INT64_MAX;
	int64_t t68 = -1859697823LL;

	t68 = (x301-((x302/x303)|x304));

	if (t68 != -9223372036854762436LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MAX;
	volatile int64_t x307 = 286538437723LL;
	static uint8_t x308 = 5U;
	static volatile int64_t t69 = -3182LL;

	t69 = (x305-((x306/x307)|x308));

	if (t69 != -2147483653LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x309 = INT16_MIN;
	int16_t x310 = -5;
	volatile int16_t x311 = -1415;
	volatile int64_t t70 = -6083038178962322LL;

	t70 = (x309-((x310/x311)|x312));

	if (t70 != -7741302638971037LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x313 = -2226;
	int8_t x314 = -1;
	uint16_t x315 = 573U;
	int32_t t71 = -488898;

	t71 = (x313-((x314/x315)|x316));

	if (t71 != -2353) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x317 = INT16_MIN;
	static int64_t x318 = -6LL;
	static volatile int8_t x319 = 21;

	t72 = (x317-((x318/x319)|x320));

	if (t72 != -32640LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x321 = 206631U;
	int32_t x323 = -400889507;
	static uint64_t t73 = 6728913542202LLU;

	t73 = (x321-((x322/x323)|x324));

	if (t73 != 18445511755828944612LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x325 = -1;
	static int8_t x326 = -1;
	volatile uint16_t x328 = UINT16_MAX;

	t74 = (x325-((x326/x327)|x328));

	if (t74 != 4294901760U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x329 = UINT8_MAX;
	int8_t x331 = -1;
	static volatile uint64_t t75 = 1LLU;

	t75 = (x329-((x330/x331)|x332));

	if (t75 != 256LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x333 = UINT8_MAX;
	int32_t x334 = -486854511;
	int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MAX;
	int64_t t76 = -8377690963946LL;

	t76 = (x333-((x334/x335)|x336));

	if (t76 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x337 = INT8_MIN;
	uint16_t x338 = 30086U;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t77 = 3565;

	t77 = (x337-((x338/x339)|x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = INT8_MAX;
	int32_t x342 = INT32_MIN;
	static uint32_t x343 = 665U;
	static int8_t x344 = INT8_MIN;
	volatile uint32_t t78 = 427104U;

	t78 = (x341-((x342/x343)|x344));

	if (t78 != 141U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x348 = 7075LL;
	volatile uint64_t t79 = 1464879712LLU;

	t79 = (x345-((x346/x347)|x348));

	if (t79 != 18446744073709545238LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = UINT32_MAX;
	int64_t x352 = 148566964120792986LL;
	uint64_t t80 = 1042LLU;

	t80 = (x349-((x350/x351)|x352));

	if (t80 != 18298177113882132484LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x353 = UINT64_MAX;
	static uint16_t x354 = UINT16_MAX;
	uint64_t x355 = 86767784645910LLU;
	static int8_t x356 = -35;
	uint64_t t81 = 1716784672LLU;

	t81 = (x353-((x354/x355)|x356));

	if (t81 != 34LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = 446;
	static int32_t x358 = INT32_MAX;
	uint16_t x359 = UINT16_MAX;

	t82 = (x357-((x358/x359)|x360));

	if (t82 != -32577) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x363 = -81;
	static int8_t x364 = 0;

	t83 = (x361-((x362/x363)|x364));

	if (t83 != 2LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = INT64_MIN;
	static int8_t x366 = INT8_MIN;
	volatile uint64_t x367 = UINT64_MAX;
	static int16_t x368 = INT16_MAX;
	volatile uint64_t t84 = 557998943883365LLU;

	t84 = (x365-((x366/x367)|x368));

	if (t84 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x369 = 7574288LLU;
	uint8_t x370 = 0U;
	int8_t x371 = -1;
	int8_t x372 = 1;

	t85 = (x369-((x370/x371)|x372));

	if (t85 != 7574287LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x373 = INT8_MIN;
	volatile int16_t x374 = INT16_MIN;
	volatile int8_t x376 = INT8_MAX;
	int32_t t86 = 0;

	t86 = (x373-((x374/x375)|x376));

	if (t86 != 16129) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x377 = INT64_MAX;
	uint32_t x378 = UINT32_MAX;
	int16_t x379 = 155;
	uint16_t x380 = 4475U;
	int64_t t87 = -6758LL;

	t87 = (x377-((x378/x379)|x380));

	if (t87 != 9223372036827065988LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x381 = UINT32_MAX;
	static uint16_t x382 = 10885U;
	uint32_t x383 = UINT32_MAX;
	uint16_t x384 = 423U;
	uint32_t t88 = 70U;

	t88 = (x381-((x382/x383)|x384));

	if (t88 != 4294966872U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = INT64_MIN;
	uint32_t x386 = 415178U;
	uint16_t x388 = 11U;
	volatile uint64_t t89 = 1536072779LLU;

	t89 = (x385-((x386/x387)|x388));

	if (t89 != 9223372036854775765LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x389 = 5U;
	volatile uint64_t x391 = 58842LLU;
	int16_t x392 = INT16_MIN;

	t90 = (x389-((x390/x391)|x392));

	if (t90 != 29046LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x393 = UINT32_MAX;
	int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	static int16_t x396 = -1;
	int64_t t91 = -643LL;

	t91 = (x393-((x394/x395)|x396));

	if (t91 != 4294967296LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x397 = 122116772U;
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MIN;
	volatile int8_t x400 = -1;
	uint32_t t92 = 4618351U;

	t92 = (x397-((x398/x399)|x400));

	if (t92 != 122116773U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = INT8_MAX;
	uint32_t x402 = 348065126U;
	int32_t x404 = 7;

	t93 = (x401-((x402/x403)|x404));

	if (t93 != 120U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x410 = 18905U;
	static int16_t x412 = -13705;

	t94 = (x409-((x410/x411)|x412));

	if (t94 != 13704LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = INT16_MIN;
	static uint8_t x414 = 0U;
	volatile int64_t x416 = -1814956437676083LL;
	int64_t t95 = -12LL;

	t95 = (x413-((x414/x415)|x416));

	if (t95 != 1814956437643315LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = INT32_MIN;
	volatile uint64_t x419 = 82593849571LLU;
	int32_t x420 = -2078075;
	uint64_t t96 = 2429746392784840LLU;

	t96 = (x417-((x418/x419)|x420));

	if (t96 != 18446744071564146043LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x424 = -5124581441525436LL;
	int64_t t97 = -9LL;

	t97 = (x421-((x422/x423)|x424));

	if (t97 != 5124581284313176LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = -21;
	volatile uint8_t x426 = 1U;
	uint32_t x427 = 7U;
	int8_t x428 = INT8_MIN;

	t98 = (x425-((x426/x427)|x428));

	if (t98 != 107U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x429 = INT16_MIN;
	int16_t x430 = INT16_MIN;
	int32_t x431 = INT32_MIN;

	t99 = (x429-((x430/x431)|x432));

	if (t99 != -32767) { NG(); } else { ; }
	
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

