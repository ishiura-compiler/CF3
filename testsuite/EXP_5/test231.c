#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MIN;
volatile int32_t t0 = 33153144;
int8_t x10 = INT8_MIN;
int32_t t2 = -129836;
int32_t x13 = 105;
uint8_t x16 = UINT8_MAX;
static volatile int32_t t4 = -77;
volatile int64_t x29 = INT64_MIN;
static uint8_t x30 = 37U;
int16_t x35 = 8;
int8_t x45 = -1;
int16_t x53 = INT16_MAX;
static uint64_t x56 = UINT64_MAX;
int32_t x70 = INT32_MIN;
int32_t t13 = -7187;
int64_t x79 = 6181959LL;
int32_t x82 = INT32_MAX;
uint32_t x95 = 29U;
volatile int32_t t18 = -5123217;
uint64_t x103 = 980428LLU;
uint8_t x112 = 46U;
volatile uint64_t x117 = UINT64_MAX;
static int64_t x121 = -1LL;
int8_t x122 = 0;
int8_t x126 = INT8_MAX;
uint16_t x128 = UINT16_MAX;
int8_t x130 = -1;
static volatile int32_t x131 = INT32_MIN;
static int8_t x140 = INT8_MIN;
static volatile int32_t t29 = -52178;
int8_t x148 = INT8_MIN;
static volatile int16_t x166 = 3;
volatile int32_t t33 = -14;
int64_t x187 = -1264798533528496905LL;
uint64_t x196 = 412LLU;
int8_t x198 = INT8_MAX;
int8_t x206 = -1;
static int8_t x208 = INT8_MAX;
uint8_t x210 = 10U;
volatile uint16_t x212 = 28U;
int32_t t43 = 0;
int32_t t44 = -6282696;
uint64_t x218 = 5750932341116627671LLU;
int32_t t46 = 1;
uint16_t x226 = 0U;
static int16_t x247 = -6521;
int16_t x253 = INT16_MAX;
int32_t x255 = INT32_MIN;
int32_t t51 = -480228;
int16_t x270 = INT16_MIN;
static uint8_t x274 = UINT8_MAX;
int16_t x277 = 10843;
int32_t x280 = INT32_MIN;
int64_t x285 = INT64_MAX;
int32_t t60 = 1252543;
int32_t x308 = INT32_MAX;
uint8_t x314 = 0U;
volatile int32_t t66 = 393062089;
volatile int64_t x330 = -598816LL;
int8_t x333 = 34;
int8_t x334 = INT8_MAX;
static volatile int64_t x335 = -1LL;
int8_t x336 = INT8_MIN;
int8_t x337 = -1;
uint32_t x341 = UINT32_MAX;
int8_t x342 = INT8_MIN;
static int16_t x343 = 286;
volatile int64_t x344 = INT64_MIN;
int32_t t70 = -1;
uint16_t x351 = UINT16_MAX;
int64_t x352 = INT64_MAX;
int32_t t72 = 69254082;
volatile int64_t x353 = 455960987742LL;
static volatile int32_t t73 = -72151865;
int32_t t74 = -2939;
static uint64_t x361 = 61450853091LLU;
volatile int32_t t75 = -10467756;
int16_t x366 = INT16_MIN;
static volatile int16_t x367 = -1488;
static uint16_t x371 = UINT16_MAX;
int8_t x375 = INT8_MIN;
uint8_t x386 = UINT8_MAX;
static int8_t x389 = INT8_MAX;
int64_t x392 = INT64_MIN;
uint16_t x393 = 1523U;
static int64_t x394 = 1LL;
volatile int16_t x396 = -1;
static int8_t x399 = 30;
int64_t x400 = INT64_MIN;
int16_t x409 = -1;
int16_t x415 = INT16_MAX;
int32_t x417 = -208301723;
volatile int32_t x418 = INT32_MAX;
int16_t x420 = 9;
int64_t x425 = INT64_MAX;
int8_t x426 = -1;
int64_t x427 = -1LL;
int16_t x432 = INT16_MIN;
int16_t x435 = -1;
static uint64_t x436 = 3LLU;
int64_t x448 = -1LL;
volatile int32_t t92 = 1;
int16_t x451 = INT16_MIN;
static int32_t t94 = 1;
uint64_t x467 = UINT64_MAX;
int64_t x468 = INT64_MAX;
static volatile int32_t t96 = -11;
volatile uint8_t x470 = 1U;
static int32_t t97 = -106517749;
static int64_t x476 = 4LL;
int32_t t98 = -262777772;
int32_t x481 = INT32_MIN;
static volatile int32_t t99 = -2;


void f0(void) {
	static int16_t x2 = -1;
	volatile int32_t x3 = INT32_MIN;
	int32_t x4 = -5;

	t0 = (x1<=((x2-x3)%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint16_t x6 = UINT16_MAX;
	volatile uint8_t x7 = UINT8_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 0;

	t1 = (x5<=((x6-x7)%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint64_t x11 = 523166426038513844LLU;
	static int16_t x12 = INT16_MIN;

	t2 = (x9<=((x10-x11)%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 22U;
	int64_t x15 = -1LL;
	static volatile int32_t t3 = -702;

	t3 = (x13<=((x14-x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x21 = 1;
	static int64_t x22 = INT64_MIN;
	static uint8_t x23 = 0U;
	static uint8_t x24 = UINT8_MAX;

	t4 = (x21<=((x22-x23)%x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MIN;
	int8_t x28 = -1;
	static volatile int32_t t5 = 404;

	t5 = (x25<=((x26-x27)%x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x31 = 3296546U;
	static int64_t x32 = 14195LL;
	volatile int32_t t6 = -6;

	t6 = (x29<=((x30-x31)%x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	static int32_t x34 = -62877452;
	static int32_t x36 = -778294507;
	int32_t t7 = -102755;

	t7 = (x33<=((x34-x35)%x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = INT32_MAX;
	static int32_t x42 = -1;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MAX;
	int32_t t8 = 305016;

	t8 = (x41<=((x42-x43)%x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x46 = INT16_MIN;
	static uint8_t x47 = 105U;
	int64_t x48 = INT64_MIN;
	int32_t t9 = -1;

	t9 = (x45<=((x46-x47)%x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x54 = INT64_MIN;
	uint64_t x55 = UINT64_MAX;
	static int32_t t10 = 5764994;

	t10 = (x53<=((x54-x55)%x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 1U;
	int16_t x58 = 668;
	int8_t x59 = 0;
	int64_t x60 = INT64_MIN;
	volatile int32_t t11 = -1;

	t11 = (x57<=((x58-x59)%x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = UINT16_MAX;
	uint8_t x66 = UINT8_MAX;
	int8_t x67 = INT8_MIN;
	volatile int8_t x68 = -1;
	int32_t t12 = 20790464;

	t12 = (x65<=((x66-x67)%x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x69 = INT32_MAX;
	static int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MAX;

	t13 = (x69<=((x70-x71)%x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = UINT8_MAX;
	int16_t x74 = -1;
	static int16_t x75 = -1;
	static volatile int16_t x76 = 250;
	int32_t t14 = 49;

	t14 = (x73<=((x74-x75)%x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MIN;
	uint64_t x78 = 6LLU;
	int32_t x80 = INT32_MAX;
	int32_t t15 = 682;

	t15 = (x77<=((x78-x79)%x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x81 = 134110929080LL;
	static uint16_t x83 = UINT16_MAX;
	int32_t x84 = -1;
	volatile int32_t t16 = 145627;

	t16 = (x81<=((x82-x83)%x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x89 = -1;
	int32_t x90 = 89;
	int16_t x91 = -1;
	uint64_t x92 = 2192976777952515477LLU;
	volatile int32_t t17 = -489908368;

	t17 = (x89<=((x90-x91)%x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = 97LL;
	int32_t x94 = INT32_MAX;
	int64_t x96 = -980LL;

	t18 = (x93<=((x94-x95)%x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = 50664565LLU;
	volatile int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	uint64_t x100 = 18149LLU;
	int32_t t19 = 83;

	t19 = (x97<=((x98-x99)%x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x101 = INT16_MIN;
	int16_t x102 = -1;
	int8_t x104 = -1;
	static int32_t t20 = 18570349;

	t20 = (x101<=((x102-x103)%x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x105 = 1983U;
	uint16_t x106 = UINT16_MAX;
	int64_t x107 = -314858293133LL;
	int32_t x108 = INT32_MAX;
	int32_t t21 = -9;

	t21 = (x105<=((x106-x107)%x108));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = 6313;
	static uint64_t x110 = UINT64_MAX;
	int64_t x111 = INT64_MAX;
	volatile int32_t t22 = -3;

	t22 = (x109<=((x110-x111)%x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = -125795127LL;
	int32_t x114 = -1;
	static int16_t x115 = -1;
	uint32_t x116 = 734450624U;
	static int32_t t23 = 125335682;

	t23 = (x113<=((x114-x115)%x116));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x118 = -24;
	uint8_t x119 = UINT8_MAX;
	uint32_t x120 = 859U;
	static volatile int32_t t24 = 182324783;

	t24 = (x117<=((x118-x119)%x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x123 = -1LL;
	static uint64_t x124 = UINT64_MAX;
	volatile int32_t t25 = 104;

	t25 = (x121<=((x122-x123)%x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = -1;
	uint8_t x127 = 76U;
	volatile int32_t t26 = 101103595;

	t26 = (x125<=((x126-x127)%x128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = 79U;
	volatile uint8_t x132 = 3U;
	static int32_t t27 = -111;

	t27 = (x129<=((x130-x131)%x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x133 = 133U;
	int16_t x134 = INT16_MIN;
	int8_t x135 = -1;
	static int64_t x136 = -1LL;
	int32_t t28 = 199438877;

	t28 = (x133<=((x134-x135)%x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x137 = 4331650538LLU;
	static uint16_t x138 = 39U;
	static int64_t x139 = -9131LL;

	t29 = (x137<=((x138-x139)%x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x141 = -1;
	uint64_t x142 = 251221LLU;
	int8_t x143 = -1;
	int8_t x144 = 1;
	int32_t t30 = 140328912;

	t30 = (x141<=((x142-x143)%x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = INT64_MIN;
	uint64_t x146 = UINT64_MAX;
	static int64_t x147 = INT64_MIN;
	volatile int32_t t31 = 17348957;

	t31 = (x145<=((x146-x147)%x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = 5U;
	volatile uint16_t x154 = UINT16_MAX;
	uint32_t x155 = UINT32_MAX;
	int64_t x156 = 180545677122LL;
	static int32_t t32 = -216276927;

	t32 = (x153<=((x154-x155)%x156));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x165 = 30U;
	uint8_t x167 = 0U;
	volatile int16_t x168 = -1;

	t33 = (x165<=((x166-x167)%x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x169 = UINT8_MAX;
	int64_t x170 = INT64_MIN;
	int32_t x171 = -1;
	int16_t x172 = 2;
	int32_t t34 = -472;

	t34 = (x169<=((x170-x171)%x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x173 = -52;
	int8_t x174 = INT8_MIN;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MAX;
	volatile int32_t t35 = 2706131;

	t35 = (x173<=((x174-x175)%x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x181 = 0;
	int32_t x182 = 585;
	volatile uint32_t x183 = 342U;
	static int32_t x184 = INT32_MIN;
	static int32_t t36 = -172;

	t36 = (x181<=((x182-x183)%x184));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x185 = 1546801513U;
	int64_t x186 = 7766721303LL;
	uint16_t x188 = 3U;
	volatile int32_t t37 = 11231412;

	t37 = (x185<=((x186-x187)%x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x189 = INT8_MAX;
	static uint64_t x190 = UINT64_MAX;
	uint64_t x191 = 0LLU;
	int16_t x192 = -1;
	int32_t t38 = 2753719;

	t38 = (x189<=((x190-x191)%x192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x193 = -1LL;
	uint8_t x194 = 1U;
	int32_t x195 = -3004567;
	volatile int32_t t39 = 1876981;

	t39 = (x193<=((x194-x195)%x196));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x197 = -1;
	volatile uint16_t x199 = 0U;
	volatile int8_t x200 = -1;
	int32_t t40 = -1;

	t40 = (x197<=((x198-x199)%x200));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MIN;
	static int32_t x203 = INT32_MIN;
	int16_t x204 = -1;
	static volatile int32_t t41 = -21377;

	t41 = (x201<=((x202-x203)%x204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x205 = 0U;
	int16_t x207 = -7;
	int32_t t42 = -354;

	t42 = (x205<=((x206-x207)%x208));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = 2723U;
	uint8_t x211 = 3U;

	t43 = (x209<=((x210-x211)%x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = INT32_MAX;
	int8_t x214 = -1;
	int16_t x215 = INT16_MIN;
	static uint32_t x216 = 226U;

	t44 = (x213<=((x214-x215)%x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x217 = 1596822LLU;
	int64_t x219 = INT64_MAX;
	volatile int64_t x220 = INT64_MIN;
	int32_t t45 = 10747306;

	t45 = (x217<=((x218-x219)%x220));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x221 = -19364;
	int64_t x222 = -1LL;
	uint32_t x223 = 2954332U;
	int32_t x224 = -55799;

	t46 = (x221<=((x222-x223)%x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = 5U;
	int16_t x227 = 541;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t47 = 324;

	t47 = (x225<=((x226-x227)%x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x229 = 422687446U;
	volatile int16_t x230 = 0;
	static int32_t x231 = -1;
	int8_t x232 = INT8_MIN;
	volatile int32_t t48 = 297993;

	t48 = (x229<=((x230-x231)%x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x245 = 62340303LLU;
	int32_t x246 = -47125155;
	volatile uint16_t x248 = 4U;
	int32_t t49 = -3778;

	t49 = (x245<=((x246-x247)%x248));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x249 = 29U;
	volatile int32_t x250 = INT32_MIN;
	static uint32_t x251 = 344U;
	volatile uint32_t x252 = 1404553U;
	int32_t t50 = -1610;

	t50 = (x249<=((x250-x251)%x252));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x254 = -1;
	volatile uint64_t x256 = UINT64_MAX;

	t51 = (x253<=((x254-x255)%x256));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = -40;
	int32_t x262 = INT32_MIN;
	uint8_t x263 = 0U;
	static uint32_t x264 = UINT32_MAX;
	static int32_t t52 = -1080005;

	t52 = (x261<=((x262-x263)%x264));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x265 = 126U;
	volatile int32_t x266 = -1;
	uint8_t x267 = UINT8_MAX;
	int64_t x268 = -1LL;
	int32_t t53 = 11883481;

	t53 = (x265<=((x266-x267)%x268));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x269 = -1;
	int32_t x271 = INT32_MIN;
	volatile int64_t x272 = -1LL;
	int32_t t54 = -40147551;

	t54 = (x269<=((x270-x271)%x272));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x273 = 717U;
	static volatile int16_t x275 = INT16_MAX;
	volatile uint8_t x276 = UINT8_MAX;
	volatile int32_t t55 = -1850;

	t55 = (x273<=((x274-x275)%x276));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x278 = -60;
	volatile int32_t x279 = 8173;
	volatile int32_t t56 = -994434;

	t56 = (x277<=((x278-x279)%x280));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x281 = INT16_MIN;
	static int32_t x282 = INT32_MAX;
	uint64_t x283 = UINT64_MAX;
	volatile int64_t x284 = 1006190300073212970LL;
	int32_t t57 = 1123;

	t57 = (x281<=((x282-x283)%x284));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x286 = 115U;
	uint64_t x287 = 126LLU;
	volatile int64_t x288 = -21385242430LL;
	static volatile int32_t t58 = -1920910;

	t58 = (x285<=((x286-x287)%x288));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x289 = INT16_MIN;
	uint8_t x290 = 22U;
	int64_t x291 = INT64_MAX;
	int64_t x292 = 1631LL;
	static volatile int32_t t59 = 195872;

	t59 = (x289<=((x290-x291)%x292));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x293 = INT32_MAX;
	uint16_t x294 = 19035U;
	static uint8_t x295 = UINT8_MAX;
	int8_t x296 = INT8_MAX;

	t60 = (x293<=((x294-x295)%x296));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MIN;
	int32_t x299 = 37;
	int16_t x300 = INT16_MIN;
	volatile int32_t t61 = -19170;

	t61 = (x297<=((x298-x299)%x300));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x305 = 2;
	int8_t x306 = -1;
	static uint8_t x307 = 89U;
	volatile int32_t t62 = 1866550;

	t62 = (x305<=((x306-x307)%x308));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x313 = INT32_MIN;
	static int8_t x315 = 37;
	static uint64_t x316 = 1097679671947097070LLU;
	int32_t t63 = 21190950;

	t63 = (x313<=((x314-x315)%x316));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x317 = INT64_MAX;
	int8_t x318 = INT8_MIN;
	static volatile uint64_t x319 = 2197834080035971LLU;
	volatile int32_t x320 = 62239893;
	volatile int32_t t64 = 966434;

	t64 = (x317<=((x318-x319)%x320));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x321 = INT32_MAX;
	uint16_t x322 = 274U;
	static int64_t x323 = 69267931LL;
	int16_t x324 = -419;
	static volatile int32_t t65 = 412725;

	t65 = (x321<=((x322-x323)%x324));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = 1;
	static int32_t x327 = -1;
	int64_t x328 = -1824299661511LL;

	t66 = (x325<=((x326-x327)%x328));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x329 = INT8_MIN;
	int32_t x331 = -1;
	uint8_t x332 = 2U;
	volatile int32_t t67 = 0;

	t67 = (x329<=((x330-x331)%x332));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t t68 = 46665;

	t68 = (x333<=((x334-x335)%x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x338 = -60;
	int8_t x339 = 5;
	volatile uint32_t x340 = 197031392U;
	volatile int32_t t69 = 72851242;

	t69 = (x337<=((x338-x339)%x340));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {


	t70 = (x341<=((x342-x343)%x344));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x345 = 26U;
	int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MIN;
	volatile int32_t x348 = 25;
	int32_t t71 = -1;

	t71 = (x345<=((x346-x347)%x348));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x349 = 6450U;
	volatile int8_t x350 = INT8_MIN;

	t72 = (x349<=((x350-x351)%x352));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x354 = -1;
	int32_t x355 = -6603;
	static volatile int64_t x356 = -1839132553LL;

	t73 = (x353<=((x354-x355)%x356));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x357 = 7482451;
	int32_t x358 = -40030;
	uint64_t x359 = 21LLU;
	uint32_t x360 = 2074603870U;

	t74 = (x357<=((x358-x359)%x360));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x362 = 763;
	int16_t x363 = INT16_MIN;
	uint32_t x364 = 14U;

	t75 = (x361<=((x362-x363)%x364));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = -1;
	uint32_t x368 = 202U;
	volatile int32_t t76 = -17440;

	t76 = (x365<=((x366-x367)%x368));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x369 = INT16_MIN;
	volatile int32_t x370 = -189;
	uint32_t x372 = 493U;
	static volatile int32_t t77 = -5;

	t77 = (x369<=((x370-x371)%x372));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x373 = UINT32_MAX;
	int8_t x374 = -1;
	uint32_t x376 = 842222U;
	int32_t t78 = -91;

	t78 = (x373<=((x374-x375)%x376));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x377 = INT64_MAX;
	uint16_t x378 = 12902U;
	int16_t x379 = -1;
	int64_t x380 = INT64_MIN;
	int32_t t79 = -3;

	t79 = (x377<=((x378-x379)%x380));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x385 = INT64_MIN;
	int8_t x387 = -1;
	uint16_t x388 = 610U;
	int32_t t80 = 84609311;

	t80 = (x385<=((x386-x387)%x388));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x390 = INT64_MIN;
	volatile int32_t x391 = INT32_MIN;
	int32_t t81 = -3279142;

	t81 = (x389<=((x390-x391)%x392));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x395 = 123U;
	volatile int32_t t82 = -203268917;

	t82 = (x393<=((x394-x395)%x396));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = INT64_MIN;
	int32_t x398 = 716;
	static volatile int32_t t83 = -3;

	t83 = (x397<=((x398-x399)%x400));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x401 = UINT8_MAX;
	int64_t x402 = -1LL;
	int32_t x403 = INT32_MIN;
	volatile int32_t x404 = -1;
	static volatile int32_t t84 = -61477;

	t84 = (x401<=((x402-x403)%x404));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x410 = 101U;
	int8_t x411 = -9;
	uint32_t x412 = UINT32_MAX;
	int32_t t85 = 112;

	t85 = (x409<=((x410-x411)%x412));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x413 = -11;
	int8_t x414 = INT8_MAX;
	volatile uint16_t x416 = 79U;
	int32_t t86 = -16929369;

	t86 = (x413<=((x414-x415)%x416));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x419 = INT16_MAX;
	volatile int32_t t87 = 4266788;

	t87 = (x417<=((x418-x419)%x420));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x428 = INT16_MIN;
	static volatile int32_t t88 = -334590651;

	t88 = (x425<=((x426-x427)%x428));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x429 = UINT16_MAX;
	int16_t x430 = -1;
	int16_t x431 = INT16_MIN;
	volatile int32_t t89 = -20918;

	t89 = (x429<=((x430-x431)%x432));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x433 = 2457U;
	int16_t x434 = 2;
	volatile int32_t t90 = -11814;

	t90 = (x433<=((x434-x435)%x436));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x441 = INT16_MAX;
	static int64_t x442 = -1LL;
	static uint16_t x443 = 7U;
	uint64_t x444 = 124694889479345248LLU;
	volatile int32_t t91 = 2135;

	t91 = (x441<=((x442-x443)%x444));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x445 = INT16_MIN;
	uint64_t x446 = 2243032781LLU;
	int32_t x447 = INT32_MIN;

	t92 = (x445<=((x446-x447)%x448));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x449 = 236123296LL;
	static int64_t x450 = INT64_MIN;
	uint8_t x452 = 1U;
	static volatile int32_t t93 = 60;

	t93 = (x449<=((x450-x451)%x452));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x457 = INT32_MAX;
	volatile int64_t x458 = INT64_MIN;
	static volatile int8_t x459 = -2;
	static int16_t x460 = INT16_MAX;

	t94 = (x457<=((x458-x459)%x460));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x461 = 10642U;
	int32_t x462 = INT32_MIN;
	static volatile int16_t x463 = -53;
	static int8_t x464 = -1;
	volatile int32_t t95 = -254;

	t95 = (x461<=((x462-x463)%x464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x465 = 1U;
	uint16_t x466 = 0U;

	t96 = (x465<=((x466-x467)%x468));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x469 = 0U;
	int8_t x471 = INT8_MIN;
	volatile uint8_t x472 = 9U;

	t97 = (x469<=((x470-x471)%x472));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x473 = 624U;
	static int16_t x474 = 13;
	uint64_t x475 = 538LLU;

	t98 = (x473<=((x474-x475)%x476));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x482 = 175776109U;
	volatile int16_t x483 = -1;
	static int64_t x484 = -1LL;

	t99 = (x481<=((x482-x483)%x484));

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

