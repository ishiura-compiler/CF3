#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
volatile int64_t x6 = -1LL;
volatile uint64_t x8 = 303996LLU;
volatile uint64_t t1 = 401528701731395LLU;
static uint64_t x15 = 59827409LLU;
int16_t x26 = 6755;
volatile int32_t x27 = -109965;
int64_t x37 = -3022154528195214LL;
uint64_t x38 = 4354LLU;
uint16_t x39 = 26931U;
volatile int64_t x41 = 733233229690LL;
int8_t x44 = INT8_MAX;
volatile uint64_t t8 = 4548032344994603007LLU;
int16_t x61 = INT16_MAX;
volatile uint64_t t9 = 1697177552276LLU;
int32_t x70 = -1;
volatile int32_t t11 = -12526701;
volatile int32_t x76 = 0;
uint32_t x85 = 1U;
int64_t x90 = -1LL;
int32_t t16 = -3;
static int16_t x95 = -1;
int16_t x99 = 3;
int16_t x121 = INT16_MIN;
int32_t x122 = INT32_MIN;
int32_t x123 = -1;
int64_t x133 = 10196317433490LL;
volatile uint64_t x143 = 122120653558LLU;
static uint64_t x145 = 285LLU;
uint16_t x147 = UINT16_MAX;
static int16_t x148 = INT16_MIN;
int64_t x152 = -112697586866036461LL;
static volatile uint8_t x160 = 20U;
int32_t t29 = -4;
static volatile int16_t x164 = 1;
static uint16_t x165 = 30U;
int8_t x184 = INT8_MAX;
int32_t x190 = -89215571;
uint32_t t35 = 9557493U;
static uint16_t x202 = 16U;
uint16_t x204 = 14755U;
int8_t x205 = INT8_MIN;
int16_t x214 = -5;
int32_t x217 = INT32_MIN;
volatile int16_t x219 = INT16_MAX;
int64_t x222 = INT64_MAX;
static uint16_t x227 = 10731U;
int32_t t43 = 102;
volatile int64_t x234 = 0LL;
int8_t x240 = INT8_MIN;
static uint8_t x252 = 33U;
volatile int32_t t47 = -403899763;
int16_t x258 = INT16_MIN;
int64_t x260 = -27033319502LL;
static int64_t t48 = 156313996578149LL;
static int64_t t49 = -1LL;
static volatile int8_t x265 = 8;
volatile int64_t x267 = INT64_MAX;
static volatile uint64_t t50 = 7864456LLU;
int16_t x272 = INT16_MAX;
volatile int32_t t51 = -7425;
static uint64_t t52 = 389775070LLU;
int8_t x277 = -6;
int8_t x278 = INT8_MAX;
uint8_t x280 = UINT8_MAX;
int16_t x281 = -1;
volatile int32_t t54 = 815379766;
uint32_t x289 = 706287U;
uint16_t x294 = 170U;
int32_t x295 = -1;
int32_t x308 = -1;
uint16_t x310 = 259U;
volatile uint32_t t67 = 2453U;
volatile int32_t x354 = INT32_MIN;
static int32_t t68 = 727715692;
int64_t t69 = -23199231303682LL;
int32_t t70 = -261557;
static volatile uint32_t x375 = 270U;
int16_t x380 = INT16_MAX;
volatile int32_t t72 = 1926286;
int8_t x382 = 8;
int8_t x391 = INT8_MAX;
uint32_t x395 = UINT32_MAX;
static volatile uint32_t x406 = 167U;
int64_t x414 = 486LL;
int32_t x417 = -492;
int64_t x422 = 1305LL;
int32_t x427 = -20;
int32_t x434 = INT32_MIN;
volatile uint32_t x438 = UINT32_MAX;
int16_t x456 = INT16_MIN;
volatile int32_t t89 = -149683;
uint8_t x457 = UINT8_MAX;
int8_t x460 = INT8_MIN;
int32_t x461 = 183;
uint16_t x463 = 363U;
int16_t x481 = -1;
static int64_t x482 = INT64_MAX;
uint16_t x483 = UINT16_MAX;
uint8_t x485 = UINT8_MAX;
int32_t t95 = 1;
static uint64_t x490 = 67942884485LLU;
int32_t x493 = INT32_MIN;
uint32_t x496 = 481486U;
int16_t x497 = -264;
int32_t x500 = -48;
static uint8_t x503 = 0U;


void f0(void) {
	int16_t x1 = 1;
	int16_t x2 = -1;
	uint32_t x3 = 24173U;
	int16_t x4 = -1;
	static int32_t t0 = -183590;

	t0 = ((x1<(x2-x3))-x4);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x7 = UINT8_MAX;

	t1 = ((x5<(x6-x7))-x8);

	if (t1 != 18446744073709247621LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static int8_t x10 = 0;
	uint32_t x11 = UINT32_MAX;
	int8_t x12 = -1;
	int32_t t2 = 14414722;

	t2 = ((x9<(x10-x11))-x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = 380425680LL;
	static int64_t x16 = 91172178885LL;
	static int64_t t3 = 1682411723811306LL;

	t3 = ((x13<(x14-x15))-x16);

	if (t3 != -91172178885LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = UINT8_MAX;
	int64_t x28 = -1LL;
	int64_t t4 = -52536803676267LL;

	t4 = ((x25<(x26-x27))-x28);

	if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x40 = 0;
	static int32_t t5 = -475047864;

	t5 = ((x37<(x38-x39))-x40);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MIN;
	volatile int32_t t6 = 5704;

	t6 = ((x41<(x42-x43))-x44);

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x49 = 1;
	static int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MAX;
	int32_t x52 = -4;
	static int32_t t7 = -872169;

	t7 = ((x49<(x50-x51))-x52);

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x57 = INT8_MIN;
	static int64_t x58 = -1LL;
	int16_t x59 = INT16_MIN;
	uint64_t x60 = UINT64_MAX;

	t8 = ((x57<(x58-x59))-x60);

	if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x62 = INT16_MAX;
	int8_t x63 = INT8_MIN;
	static volatile uint64_t x64 = 398472581LLU;

	t9 = ((x61<(x62-x63))-x64);

	if (t9 != 18446744073311079036LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x65 = INT64_MIN;
	uint64_t x66 = 207934943LLU;
	volatile uint32_t x67 = UINT32_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t10 = -45914;

	t10 = ((x65<(x66-x67))-x68);

	if (t10 != 129) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = 639709;
	uint32_t x71 = UINT32_MAX;
	static int32_t x72 = -10964279;

	t11 = ((x69<(x70-x71))-x72);

	if (t11 != 10964279) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x73 = -6;
	int32_t x74 = INT32_MIN;
	static int8_t x75 = 0;
	volatile int32_t t12 = -23616028;

	t12 = ((x73<(x74-x75))-x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x77 = 1U;
	uint8_t x78 = 1U;
	volatile uint16_t x79 = UINT16_MAX;
	int8_t x80 = INT8_MAX;
	int32_t t13 = -91782;

	t13 = ((x77<(x78-x79))-x80);

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x81 = INT32_MIN;
	int32_t x82 = -10640646;
	int8_t x83 = -1;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t14 = 912811U;

	t14 = ((x81<(x82-x83))-x84);

	if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x86 = INT16_MIN;
	uint16_t x87 = 11496U;
	volatile uint8_t x88 = 23U;
	volatile int32_t t15 = -256712509;

	t15 = ((x85<(x86-x87))-x88);

	if (t15 != -22) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MAX;
	int8_t x91 = INT8_MIN;
	int32_t x92 = INT32_MAX;

	t16 = ((x89<(x90-x91))-x92);

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MAX;
	uint32_t x94 = UINT32_MAX;
	uint64_t x96 = UINT64_MAX;
	uint64_t t17 = 2755048LLU;

	t17 = ((x93<(x94-x95))-x96);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = INT64_MAX;
	volatile int16_t x98 = -1;
	static uint64_t x100 = 2599543019979802829LLU;
	volatile uint64_t t18 = 315375LLU;

	t18 = ((x97<(x98-x99))-x100);

	if (t18 != 15847201053729748787LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = 33259366;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MIN;
	int16_t x116 = -4;
	static volatile int32_t t19 = 32286652;

	t19 = ((x113<(x114-x115))-x116);

	if (t19 != 5) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x117 = INT64_MIN;
	uint16_t x118 = 18U;
	uint32_t x119 = UINT32_MAX;
	volatile uint8_t x120 = UINT8_MAX;
	static int32_t t20 = -82858788;

	t20 = ((x117<(x118-x119))-x120);

	if (t20 != -254) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t21 = 532367753;

	t21 = ((x121<(x122-x123))-x124);

	if (t21 != -255) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x125 = UINT64_MAX;
	static int8_t x126 = INT8_MIN;
	uint16_t x127 = 103U;
	int8_t x128 = INT8_MIN;
	volatile int32_t t22 = 0;

	t22 = ((x125<(x126-x127))-x128);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = -1;
	uint64_t x130 = 62559784112498LLU;
	int64_t x131 = -457789414LL;
	uint16_t x132 = 119U;
	int32_t t23 = 4911231;

	t23 = ((x129<(x130-x131))-x132);

	if (t23 != -119) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x134 = 557407394252486LLU;
	int32_t x135 = INT32_MIN;
	static uint32_t x136 = 1034051U;
	uint32_t t24 = 48U;

	t24 = ((x133<(x134-x135))-x136);

	if (t24 != 4293933246U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x141 = UINT16_MAX;
	static volatile int8_t x142 = INT8_MIN;
	volatile int16_t x144 = INT16_MIN;
	static int32_t t25 = -1693;

	t25 = ((x141<(x142-x143))-x144);

	if (t25 != 32769) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x146 = INT32_MAX;
	static volatile int32_t t26 = -530710308;

	t26 = ((x145<(x146-x147))-x148);

	if (t26 != 32769) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MIN;
	uint64_t x151 = 108256086785078LLU;
	volatile int64_t t27 = -9110489266LL;

	t27 = ((x149<(x150-x151))-x152);

	if (t27 != 112697586866036461LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = -168527;
	int8_t x154 = 1;
	static uint8_t x155 = 27U;
	static uint8_t x156 = UINT8_MAX;
	static int32_t t28 = -11853150;

	t28 = ((x153<(x154-x155))-x156);

	if (t28 != -254) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x157 = INT8_MIN;
	static uint64_t x158 = 215150867935918LLU;
	uint32_t x159 = 204543723U;

	t29 = ((x157<(x158-x159))-x160);

	if (t29 != -20) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x161 = -11;
	int32_t x162 = INT32_MIN;
	int8_t x163 = -1;
	static volatile int32_t t30 = 3;

	t30 = ((x161<(x162-x163))-x164);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x166 = INT16_MAX;
	uint16_t x167 = 248U;
	volatile uint64_t x168 = UINT64_MAX;
	uint64_t t31 = 3LLU;

	t31 = ((x165<(x166-x167))-x168);

	if (t31 != 2LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x173 = 371U;
	static uint64_t x174 = UINT64_MAX;
	volatile int8_t x175 = 1;
	volatile int32_t x176 = -1;
	volatile int32_t t32 = -15;

	t32 = ((x173<(x174-x175))-x176);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x177 = -64435;
	int8_t x178 = -13;
	static int8_t x179 = INT8_MIN;
	static volatile uint32_t x180 = 133765242U;
	uint32_t t33 = 1212274105U;

	t33 = ((x177<(x178-x179))-x180);

	if (t33 != 4161202055U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x181 = INT32_MIN;
	static int8_t x182 = -1;
	volatile uint16_t x183 = UINT16_MAX;
	volatile int32_t t34 = 494;

	t34 = ((x181<(x182-x183))-x184);

	if (t34 != -126) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x189 = 2444024U;
	volatile int8_t x191 = INT8_MIN;
	static uint32_t x192 = 1718021281U;

	t35 = ((x189<(x190-x191))-x192);

	if (t35 != 2576946016U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x197 = INT64_MIN;
	volatile uint64_t x198 = UINT64_MAX;
	int64_t x199 = 1893603534LL;
	int16_t x200 = INT16_MIN;
	volatile int32_t t36 = -333620821;

	t36 = ((x197<(x198-x199))-x200);

	if (t36 != 32769) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x201 = -189158;
	static int8_t x203 = INT8_MIN;
	int32_t t37 = -13974441;

	t37 = ((x201<(x202-x203))-x204);

	if (t37 != -14754) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x206 = INT8_MIN;
	int8_t x207 = 3;
	int16_t x208 = INT16_MIN;
	static int32_t t38 = -377112;

	t38 = ((x205<(x206-x207))-x208);

	if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = 1706936439524566923LL;
	static int16_t x211 = 0;
	volatile uint32_t x212 = 204770U;
	volatile uint32_t t39 = 3U;

	t39 = ((x209<(x210-x211))-x212);

	if (t39 != 4294762527U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x213 = INT16_MIN;
	volatile int16_t x215 = -1;
	volatile uint64_t x216 = UINT64_MAX;
	volatile uint64_t t40 = 52781166755607LLU;

	t40 = ((x213<(x214-x215))-x216);

	if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x218 = -1;
	uint8_t x220 = 10U;
	int32_t t41 = 316;

	t41 = ((x217<(x218-x219))-x220);

	if (t41 != -9) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = 30;
	uint16_t x223 = 896U;
	int64_t x224 = -1LL;
	volatile int64_t t42 = -1015767LL;

	t42 = ((x221<(x222-x223))-x224);

	if (t42 != 2LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MAX;
	int32_t x228 = 216187927;

	t43 = ((x225<(x226-x227))-x228);

	if (t43 != -216187927) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x233 = UINT8_MAX;
	static int8_t x235 = INT8_MAX;
	static int32_t x236 = INT32_MAX;
	static int32_t t44 = -277207;

	t44 = ((x233<(x234-x235))-x236);

	if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x237 = 64048611;
	int32_t x238 = -1;
	uint8_t x239 = 2U;
	static int32_t t45 = -2;

	t45 = ((x237<(x238-x239))-x240);

	if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x249 = 43111786739LLU;
	static int16_t x250 = INT16_MAX;
	static volatile uint8_t x251 = 10U;
	volatile int32_t t46 = -1;

	t46 = ((x249<(x250-x251))-x252);

	if (t46 != -33) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x253 = INT16_MIN;
	volatile int16_t x254 = INT16_MIN;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = 46;

	t47 = ((x253<(x254-x255))-x256);

	if (t47 != -45) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x257 = -1;
	static volatile int16_t x259 = INT16_MIN;

	t48 = ((x257<(x258-x259))-x260);

	if (t48 != 27033319503LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x261 = INT32_MAX;
	uint8_t x262 = UINT8_MAX;
	int64_t x263 = -201326732153905LL;
	int64_t x264 = 72972613582289038LL;

	t49 = ((x261<(x262-x263))-x264);

	if (t49 != -72972613582289037LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x266 = -1;
	static uint64_t x268 = UINT64_MAX;

	t50 = ((x265<(x266-x267))-x268);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = 28;
	uint16_t x271 = 15U;

	t51 = ((x269<(x270-x271))-x272);

	if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MIN;
	int64_t x275 = -1LL;
	static uint64_t x276 = UINT64_MAX;

	t52 = ((x273<(x274-x275))-x276);

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x279 = -1LL;
	int32_t t53 = 11633;

	t53 = ((x277<(x278-x279))-x280);

	if (t53 != -254) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x282 = UINT64_MAX;
	int16_t x283 = INT16_MAX;
	static int8_t x284 = -1;

	t54 = ((x281<(x282-x283))-x284);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x290 = 2;
	uint16_t x291 = 6U;
	int64_t x292 = -3947LL;
	int64_t t55 = 413LL;

	t55 = ((x289<(x290-x291))-x292);

	if (t55 != 3948LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x293 = -585LL;
	int32_t x296 = -1;
	volatile int32_t t56 = -37664297;

	t56 = ((x293<(x294-x295))-x296);

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x297 = -21;
	int32_t x298 = -1;
	static int16_t x299 = -1;
	volatile int64_t x300 = -1607967LL;
	int64_t t57 = 56276744002LL;

	t57 = ((x297<(x298-x299))-x300);

	if (t57 != 1607968LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x301 = INT64_MIN;
	int32_t x302 = 57886823;
	volatile int16_t x303 = -29;
	volatile int32_t x304 = -770867989;
	static volatile int32_t t58 = -55442;

	t58 = ((x301<(x302-x303))-x304);

	if (t58 != 770867990) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x305 = 74;
	static volatile uint16_t x306 = UINT16_MAX;
	static int8_t x307 = INT8_MAX;
	volatile int32_t t59 = 36;

	t59 = ((x305<(x306-x307))-x308);

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x309 = INT32_MIN;
	static uint8_t x311 = UINT8_MAX;
	int8_t x312 = -1;
	int32_t t60 = -437105345;

	t60 = ((x309<(x310-x311))-x312);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x313 = 1356116664854124756LLU;
	volatile int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t61 = -50854104;

	t61 = ((x313<(x314-x315))-x316);

	if (t61 != 129) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x317 = -15;
	int16_t x318 = INT16_MIN;
	static int16_t x319 = -6;
	static volatile int8_t x320 = INT8_MAX;
	static int32_t t62 = 42972206;

	t62 = ((x317<(x318-x319))-x320);

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x329 = 8U;
	int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MIN;
	volatile int32_t t63 = -55382;

	t63 = ((x329<(x330-x331))-x332);

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x337 = INT16_MIN;
	volatile uint32_t x338 = UINT32_MAX;
	int8_t x339 = 5;
	uint32_t x340 = 123U;
	volatile uint32_t t64 = 1556317U;

	t64 = ((x337<(x338-x339))-x340);

	if (t64 != 4294967174U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x341 = -1;
	uint32_t x342 = 15U;
	int8_t x343 = INT8_MIN;
	uint64_t x344 = 417959067626LLU;
	uint64_t t65 = 62637099983915LLU;

	t65 = ((x341<(x342-x343))-x344);

	if (t65 != 18446743655750483990LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x345 = INT16_MIN;
	uint8_t x346 = 1U;
	int8_t x347 = -23;
	int16_t x348 = INT16_MAX;
	volatile int32_t t66 = 765004;

	t66 = ((x345<(x346-x347))-x348);

	if (t66 != -32766) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x349 = INT8_MIN;
	int8_t x350 = -45;
	static int32_t x351 = INT32_MIN;
	uint32_t x352 = 534926U;

	t67 = ((x349<(x350-x351))-x352);

	if (t67 != 4294432371U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x353 = 0;
	volatile int64_t x355 = -1LL;
	uint16_t x356 = 6U;

	t68 = ((x353<(x354-x355))-x356);

	if (t68 != -6) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x357 = -5970032263LL;
	int32_t x358 = -155874085;
	int16_t x359 = INT16_MIN;
	int64_t x360 = 10107LL;

	t69 = ((x357<(x358-x359))-x360);

	if (t69 != -10106LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x365 = INT32_MIN;
	int64_t x366 = 71979869592733145LL;
	int32_t x367 = -1;
	static int8_t x368 = -1;

	t70 = ((x365<(x366-x367))-x368);

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x373 = INT16_MAX;
	int16_t x374 = INT16_MIN;
	static uint16_t x376 = 2110U;
	volatile int32_t t71 = 0;

	t71 = ((x373<(x374-x375))-x376);

	if (t71 != -2109) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x377 = 1748793386149954LLU;
	int16_t x378 = INT16_MIN;
	uint32_t x379 = UINT32_MAX;

	t72 = ((x377<(x378-x379))-x380);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x381 = 9U;
	uint8_t x383 = 85U;
	static int8_t x384 = 6;
	volatile int32_t t73 = 448398;

	t73 = ((x381<(x382-x383))-x384);

	if (t73 != -6) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x389 = INT16_MAX;
	uint32_t x390 = UINT32_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t74 = 3;

	t74 = ((x389<(x390-x391))-x392);

	if (t74 != -254) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x393 = 7;
	uint16_t x394 = UINT16_MAX;
	int32_t x396 = 1;
	static volatile int32_t t75 = -1371;

	t75 = ((x393<(x394-x395))-x396);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x397 = INT16_MAX;
	int64_t x398 = INT64_MIN;
	int8_t x399 = -1;
	uint64_t x400 = 10238237578605LLU;
	uint64_t t76 = 52573670LLU;

	t76 = ((x397<(x398-x399))-x400);

	if (t76 != 18446733835471973011LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x401 = 8193U;
	int64_t x402 = INT64_MAX;
	static uint64_t x403 = UINT64_MAX;
	uint8_t x404 = UINT8_MAX;
	int32_t t77 = -2830295;

	t77 = ((x401<(x402-x403))-x404);

	if (t77 != -254) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x405 = INT16_MIN;
	static int16_t x407 = -1;
	static uint8_t x408 = 47U;
	volatile int32_t t78 = 79390943;

	t78 = ((x405<(x406-x407))-x408);

	if (t78 != -47) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x409 = INT32_MIN;
	uint32_t x410 = 94436U;
	uint64_t x411 = 68155314274337LLU;
	volatile int64_t x412 = -17662822210891441LL;
	volatile int64_t t79 = 3648236991539LL;

	t79 = ((x409<(x410-x411))-x412);

	if (t79 != 17662822210891441LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x413 = INT32_MIN;
	int16_t x415 = -1;
	int32_t x416 = 47;
	volatile int32_t t80 = -946071;

	t80 = ((x413<(x414-x415))-x416);

	if (t80 != -46) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x418 = 769547689U;
	static int64_t x419 = -1LL;
	int16_t x420 = INT16_MIN;
	int32_t t81 = -512385577;

	t81 = ((x417<(x418-x419))-x420);

	if (t81 != 32769) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x421 = UINT64_MAX;
	static int16_t x423 = 990;
	int16_t x424 = -1;
	volatile int32_t t82 = -1;

	t82 = ((x421<(x422-x423))-x424);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x425 = 36478632U;
	static int16_t x426 = -88;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t83 = 645179906U;

	t83 = ((x425<(x426-x427))-x428);

	if (t83 != 2U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x429 = INT32_MAX;
	int64_t x430 = -7268538769258LL;
	static int8_t x431 = INT8_MIN;
	volatile int16_t x432 = -1;
	static volatile int32_t t84 = 24;

	t84 = ((x429<(x430-x431))-x432);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x433 = 224U;
	uint32_t x435 = 56071U;
	static int8_t x436 = INT8_MAX;
	volatile int32_t t85 = -472;

	t85 = ((x433<(x434-x435))-x436);

	if (t85 != -126) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x437 = -1LL;
	volatile int32_t x439 = INT32_MAX;
	volatile int32_t x440 = -37810184;
	volatile int32_t t86 = 5038534;

	t86 = ((x437<(x438-x439))-x440);

	if (t86 != 37810185) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x441 = 0U;
	int16_t x442 = -1;
	uint32_t x443 = 10627914U;
	static int64_t x444 = INT64_MAX;
	int64_t t87 = -1LL;

	t87 = ((x441<(x442-x443))-x444);

	if (t87 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x445 = INT64_MIN;
	int32_t x446 = INT32_MIN;
	int32_t x447 = -1;
	int8_t x448 = 1;
	volatile int32_t t88 = 238;

	t88 = ((x445<(x446-x447))-x448);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x453 = -1;
	volatile uint32_t x454 = UINT32_MAX;
	int8_t x455 = INT8_MIN;

	t89 = ((x453<(x454-x455))-x456);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x458 = 15U;
	uint64_t x459 = 0LLU;
	volatile int32_t t90 = 25618;

	t90 = ((x457<(x458-x459))-x460);

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x462 = -1;
	uint8_t x464 = 30U;
	volatile int32_t t91 = 969792;

	t91 = ((x461<(x462-x463))-x464);

	if (t91 != -30) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x473 = 2129LLU;
	volatile int16_t x474 = -1;
	uint64_t x475 = UINT64_MAX;
	uint32_t x476 = 2573U;
	static uint32_t t92 = 268271621U;

	t92 = ((x473<(x474-x475))-x476);

	if (t92 != 4294964723U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x477 = INT16_MIN;
	static volatile int16_t x478 = INT16_MAX;
	int16_t x479 = -1;
	uint32_t x480 = 2U;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = ((x477<(x478-x479))-x480);

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x484 = INT16_MIN;
	volatile int32_t t94 = -241682;

	t94 = ((x481<(x482-x483))-x484);

	if (t94 != 32769) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x486 = -1;
	static int16_t x487 = -1;
	int8_t x488 = 1;

	t95 = ((x485<(x486-x487))-x488);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x489 = INT64_MIN;
	int32_t x491 = 2447540;
	int32_t x492 = -1;
	int32_t t96 = -813021;

	t96 = ((x489<(x490-x491))-x492);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x494 = UINT16_MAX;
	uint64_t x495 = UINT64_MAX;
	static uint32_t t97 = 11U;

	t97 = ((x493<(x494-x495))-x496);

	if (t97 != 4294485810U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x498 = 28232LLU;
	uint16_t x499 = 9U;
	volatile int32_t t98 = 1001364142;

	t98 = ((x497<(x498-x499))-x500);

	if (t98 != 48) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x501 = UINT16_MAX;
	uint32_t x502 = UINT32_MAX;
	uint64_t x504 = 8080564960463899238LLU;
	volatile uint64_t t99 = 5LLU;

	t99 = ((x501<(x502-x503))-x504);

	if (t99 != 10366179113245652379LLU) { NG(); } else { ; }
	
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

