#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
int8_t x7 = -12;
uint16_t x12 = UINT16_MAX;
uint8_t x23 = UINT8_MAX;
volatile uint32_t x25 = UINT32_MAX;
int8_t x41 = INT8_MAX;
int64_t x55 = INT64_MAX;
volatile int32_t x60 = -2757761;
volatile uint64_t t9 = 100569165892067LLU;
volatile uint64_t t10 = 7047080362LLU;
int32_t x73 = INT32_MAX;
volatile uint8_t x75 = 0U;
uint8_t x76 = 24U;
int8_t x101 = 3;
volatile int16_t x102 = INT16_MIN;
int8_t x113 = -1;
volatile uint64_t t18 = 22540634755249LLU;
int8_t x131 = -31;
uint32_t t20 = 131619U;
int64_t x143 = -1447401499686758569LL;
static int64_t t22 = -479734025779199657LL;
uint8_t x145 = 3U;
static int64_t t26 = -64435LL;
static volatile uint64_t t28 = 1LLU;
static uint8_t x191 = 9U;
volatile uint64_t t31 = 11232895920342LLU;
uint8_t x208 = UINT8_MAX;
int8_t x209 = INT8_MIN;
static uint16_t x214 = UINT16_MAX;
uint8_t x216 = 42U;
volatile int16_t x218 = -1;
int64_t t35 = -39824LL;
static volatile int32_t t37 = -1731378;
int8_t x233 = -1;
static uint16_t x236 = 220U;
int32_t x238 = -6512232;
static int16_t x242 = 1547;
int64_t x243 = INT64_MAX;
static int16_t x250 = 28;
volatile int64_t x251 = 1258217437LL;
volatile int64_t t42 = -54377LL;
uint64_t t43 = 363LLU;
uint32_t x261 = 1280240985U;
int64_t x275 = INT64_MAX;
volatile int64_t t47 = -4788LL;
static volatile int32_t x286 = -1;
int16_t x288 = INT16_MIN;
uint64_t x293 = 31LLU;
volatile uint64_t t51 = 2256356166LLU;
int32_t x312 = INT32_MIN;
static int8_t x336 = 0;
int32_t x337 = INT32_MAX;
uint16_t x339 = 37U;
volatile uint64_t t61 = 6796LLU;
int64_t x360 = INT64_MIN;
static int32_t x366 = -1;
uint32_t t64 = 7U;
volatile int32_t x381 = -100;
int64_t x387 = 34909964110634695LL;
int32_t x390 = INT32_MIN;
static uint64_t x397 = 19894084LLU;
static int32_t x400 = INT32_MIN;
uint32_t x403 = 3658900U;
static int64_t x413 = -1LL;
volatile int16_t x415 = 1;
volatile int16_t x418 = INT16_MIN;
uint64_t x445 = 891541597388LLU;
uint32_t t76 = 0U;
int16_t x454 = INT16_MAX;
uint32_t x465 = 20937U;
static volatile uint64_t t81 = 5425407468849088092LLU;
uint64_t x494 = 2849LLU;
static uint8_t x501 = 30U;
static volatile uint32_t x502 = 23094U;
int8_t x514 = 0;
volatile int64_t t89 = -365658136LL;
int32_t x526 = INT32_MAX;
uint64_t t92 = 869722LLU;
volatile int32_t x546 = -1;
static volatile int8_t x550 = -1;
int16_t x551 = -1;
volatile uint8_t x558 = UINT8_MAX;
volatile uint64_t t96 = 1LLU;


void f0(void) {
	static int32_t x1 = -24;
	uint8_t x2 = 1U;
	uint32_t x4 = 1411U;
	uint32_t t0 = 111U;

	t0 = (x1*((x2^x3)+x4));

	if (t0 != 4293360616U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	static uint64_t x6 = 17666989763620383LLU;
	uint8_t x8 = 113U;
	volatile uint64_t t1 = 741073LLU;

	t1 = (x5*((x6^x7)+x8));

	if (t1 != 7062854289312579584LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	volatile int16_t x10 = -6645;
	static int8_t x11 = 0;
	volatile int32_t t2 = 450453;

	t2 = (x9*((x10^x11)+x12));

	if (t2 != -58890) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 1;
	static int8_t x14 = 8;
	int16_t x15 = INT16_MAX;
	int32_t x16 = 19;
	static volatile int32_t t3 = -27;

	t3 = (x13*((x14^x15)+x16));

	if (t3 != 32778) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = 0;
	volatile int64_t x22 = 100427LL;
	volatile uint64_t x24 = 161413158LLU;
	volatile uint64_t t4 = 1394493160LLU;

	t4 = (x21*((x22^x23)+x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x26 = INT8_MIN;
	static uint16_t x27 = 23U;
	static uint64_t x28 = 1009LLU;
	volatile uint64_t t5 = 993359025524LLU;

	t5 = (x25*((x26^x27)+x28));

	if (t5 != 3882650434680LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x33 = -9;
	int16_t x34 = INT16_MAX;
	int32_t x35 = INT32_MAX;
	static volatile int64_t x36 = -1LL;
	int64_t t6 = 1218LL;

	t6 = (x33*((x34^x35)+x36));

	if (t6 != -19327057911LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x42 = INT32_MIN;
	int32_t x43 = 2049;
	uint32_t x44 = 39135U;
	uint32_t t7 = 32U;

	t7 = (x41*((x42^x43)+x44));

	if (t7 != 2152714016U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = -1;
	int32_t x54 = INT32_MAX;
	uint16_t x56 = UINT16_MAX;
	int64_t t8 = -732361962423290LL;

	t8 = (x53*((x54^x55)+x56));

	if (t8 != -9223372034707357695LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x57 = 3;
	int64_t x58 = 11605LL;
	uint64_t x59 = 42LLU;

	t9 = (x57*((x58^x59)+x60));

	if (t9 != 18446744073701313274LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = -89278LL;
	volatile uint64_t x62 = 5082183294301LLU;
	int64_t x63 = INT64_MAX;
	int8_t x64 = 51;

	t10 = (x61*((x62^x63)+x64));

	if (t10 != 453727160144140778LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x74 = 5365160U;
	uint32_t t11 = 1094118236U;

	t11 = (x73*((x74^x75)+x76));

	if (t11 != 4289602112U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x81 = UINT64_MAX;
	uint64_t x82 = 771491488431853325LLU;
	int64_t x83 = INT64_MAX;
	int64_t x84 = -1LL;
	volatile uint64_t t12 = 6298LLU;

	t12 = (x81*((x82^x83)+x84));

	if (t12 != 9994863525286629135LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x89 = 140;
	uint32_t x90 = UINT32_MAX;
	uint32_t x91 = UINT32_MAX;
	int16_t x92 = 488;
	uint32_t t13 = 1581356U;

	t13 = (x89*((x90^x91)+x92));

	if (t13 != 68320U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x97 = 3U;
	static int16_t x98 = INT16_MAX;
	static int16_t x99 = -318;
	int8_t x100 = INT8_MIN;
	int32_t t14 = 3290589;

	t14 = (x97*((x98^x99)+x100));

	if (t14 != -97737) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x103 = -13;
	int32_t x104 = -14334548;
	int32_t t15 = 16;

	t15 = (x101*((x102^x103)+x104));

	if (t15 != -42905379) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x105 = 57856798828156LLU;
	int64_t x106 = 1149300933089312LL;
	int8_t x107 = -19;
	uint8_t x108 = 11U;
	uint64_t t16 = 299LLU;

	t16 = (x105*((x106^x107)+x108));

	if (t16 != 5257440498100165792LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x114 = UINT32_MAX;
	volatile int16_t x115 = INT16_MAX;
	int8_t x116 = -14;
	uint32_t t17 = 990180101U;

	t17 = (x113*((x114^x115)+x116));

	if (t17 != 32782U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x121 = INT8_MAX;
	static int8_t x122 = 21;
	uint64_t x123 = 1882661157095804498LLU;
	uint16_t x124 = 24766U;

	t18 = (x121*((x122^x123)+x124));

	if (t18 != 17737038066655695739LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x129 = -1;
	int32_t x130 = 6764;
	static volatile uint64_t x132 = 1194800932544542LLU;
	uint64_t t19 = 5070184511829654934LLU;

	t19 = (x129*((x130^x131)+x132));

	if (t19 != 18445549272777013845LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x133 = 103U;
	uint32_t x134 = 1523U;
	int8_t x135 = -1;
	int32_t x136 = 11;

	t20 = (x133*((x134^x135)+x136));

	if (t20 != 4294811457U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x137 = 2U;
	int64_t x138 = INT64_MIN;
	uint64_t x139 = UINT64_MAX;
	int16_t x140 = INT16_MIN;
	uint64_t t21 = 148683104LLU;

	t21 = (x137*((x138^x139)+x140));

	if (t21 != 18446744073709486078LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x141 = -1LL;
	static uint8_t x142 = 127U;
	int32_t x144 = -1;

	t22 = (x141*((x142^x143)+x144));

	if (t22 != 1447401499686758617LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x146 = INT64_MIN;
	int64_t x147 = -5LL;
	static uint64_t x148 = 1399418869037LLU;
	volatile uint64_t t23 = 40LLU;

	t23 = (x145*((x146^x147)+x148));

	if (t23 != 9223376235111382904LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x149 = 12U;
	uint64_t x150 = 6711928062774LLU;
	uint64_t x151 = 199817LLU;
	uint64_t x152 = 6754944LLU;
	static uint64_t t24 = 1647939LLU;

	t24 = (x149*((x150^x151)+x152));

	if (t24 != 80543217064692LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x161 = 68332437276043LLU;
	int64_t x162 = -1LL;
	volatile int8_t x163 = INT8_MIN;
	int8_t x164 = 56;
	static uint64_t t25 = 486687LLU;

	t25 = (x161*((x162^x163)+x164));

	if (t25 != 12504836021515869LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x165 = 25;
	int64_t x166 = 101672LL;
	int64_t x167 = -1777981438881783LL;
	int32_t x168 = -1444;

	t26 = (x165*((x166^x167)+x168));

	if (t26 != -44449535972816075LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x173 = 303U;
	static volatile int16_t x174 = -1;
	uint16_t x175 = 104U;
	int16_t x176 = -4;
	static volatile int32_t t27 = 2399284;

	t27 = (x173*((x174^x175)+x176));

	if (t27 != -33027) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x177 = 3LLU;
	volatile int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = 249127455U;

	t28 = (x177*((x178^x179)+x180));

	if (t28 != 7189832925LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x186 = 10U;
	int16_t x187 = 0;
	uint16_t x188 = 1U;
	uint32_t t29 = 229663283U;

	t29 = (x185*((x186^x187)+x188));

	if (t29 != 4294606848U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x189 = INT16_MAX;
	uint64_t x190 = 2123958715894463LLU;
	volatile int16_t x192 = INT16_MIN;
	static uint64_t t30 = 1916LLU;

	t30 = (x189*((x190^x191)+x192));

	if (t30 != 14255523021511210314LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x201 = -623903;
	int64_t x202 = INT64_MAX;
	uint64_t x203 = UINT64_MAX;
	int32_t x204 = -702915;

	t31 = (x201*((x202^x203)+x204));

	if (t31 != 9223372475405553053LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x205 = -1;
	int8_t x206 = 1;
	static volatile int64_t x207 = INT64_MIN;
	static volatile int64_t t32 = -32051183447414658LL;

	t32 = (x205*((x206^x207)+x208));

	if (t32 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x210 = 46058597LL;
	uint32_t x211 = 166U;
	int32_t x212 = INT32_MAX;
	int64_t t33 = 1586598148846LL;

	t33 = (x209*((x210^x211)+x212));

	if (t33 != -280773419264LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x213 = 1336151U;
	static int64_t x215 = -3LL;
	int64_t t34 = 29951144803LL;

	t34 = (x213*((x214^x215)+x216));

	if (t34 != -87507201292LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x217 = 59U;
	static uint16_t x219 = 1U;
	int64_t x220 = -16316031925614374LL;

	t35 = (x217*((x218^x219)+x220));

	if (t35 != -962645883611248184LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x225 = 13247086911504729LLU;
	uint64_t x226 = 689990360LLU;
	volatile uint8_t x227 = 1U;
	int32_t x228 = -68;
	static uint64_t t36 = 61621252LLU;

	t36 = (x225*((x226^x227)+x228));

	if (t36 != 18137686603917419213LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x229 = INT8_MIN;
	uint8_t x230 = 1U;
	int16_t x231 = 3;
	uint8_t x232 = 0U;

	t37 = (x229*((x230^x231)+x232));

	if (t37 != -256) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x234 = 27;
	static int64_t x235 = INT64_MIN;
	volatile int64_t t38 = -42LL;

	t38 = (x233*((x234^x235)+x236));

	if (t38 != 9223372036854775561LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x237 = 282066LLU;
	int8_t x239 = 1;
	uint8_t x240 = 0U;
	volatile uint64_t t39 = 199153652347080946LLU;

	t39 = (x237*((x238^x239)+x240));

	if (t39 != 18446742236830602370LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x241 = -1LL;
	static int16_t x244 = -1;
	volatile int64_t t40 = 1577173LL;

	t40 = (x241*((x242^x243)+x244));

	if (t40 != -9223372036854774259LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x245 = UINT16_MAX;
	static int16_t x246 = -1;
	int64_t x247 = -762LL;
	volatile int16_t x248 = INT16_MIN;
	volatile int64_t t41 = 5LL;

	t41 = (x245*((x246^x247)+x248));

	if (t41 != -2097578745LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x249 = 1U;
	static volatile int16_t x252 = -1;

	t42 = (x249*((x250^x251)+x252));

	if (t42 != 1258217408LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x257 = 28501925LLU;
	volatile uint16_t x258 = 1U;
	uint8_t x259 = UINT8_MAX;
	static int16_t x260 = -1;

	t43 = (x257*((x258^x259)+x260));

	if (t43 != 7210987025LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x262 = 56LL;
	int16_t x263 = INT16_MIN;
	int32_t x264 = INT32_MAX;
	volatile int64_t t44 = 47173LL;

	t44 = (x261*((x262^x263)+x264));

	if (t44 != 2749254700263570975LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x265 = 222LLU;
	int64_t x266 = 20293748840685LL;
	uint16_t x267 = UINT16_MAX;
	int16_t x268 = INT16_MIN;
	uint64_t t45 = 407305173318LLU;

	t45 = (x265*((x266^x267)+x268));

	if (t45 != 4505212225249692LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x269 = 47;
	volatile int16_t x270 = INT16_MIN;
	uint64_t x271 = 783050576390786LLU;
	uint32_t x272 = 482627U;
	uint64_t t46 = 3LLU;

	t46 = (x269*((x270^x271)+x272));

	if (t46 != 18409940696642891051LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x273 = 1U;
	int32_t x274 = INT32_MIN;
	static volatile int16_t x276 = -1;

	t47 = (x273*((x274^x275)+x276));

	if (t47 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x281 = -25;
	uint8_t x282 = 1U;
	int32_t x283 = -415;
	uint64_t x284 = UINT64_MAX;
	uint64_t t48 = 5371559063592376669LLU;

	t48 = (x281*((x282^x283)+x284));

	if (t48 != 10425LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x285 = INT8_MAX;
	uint16_t x287 = UINT16_MAX;
	volatile int32_t t49 = -131;

	t49 = (x285*((x286^x287)+x288));

	if (t49 != -12484608) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x289 = 406454303;
	uint8_t x290 = 72U;
	int32_t x291 = 8305029;
	uint32_t x292 = UINT32_MAX;
	uint32_t t50 = 128U;

	t50 = (x289*((x290^x291)+x292));

	if (t50 != 1200652212U) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x294 = -460;
	static uint64_t x295 = 5423LLU;
	int64_t x296 = INT64_MIN;

	t51 = (x293*((x294^x295)+x296));

	if (t51 != 9223372036854609989LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x297 = 1U;
	volatile int64_t x298 = 78669LL;
	uint32_t x299 = 86618U;
	int32_t x300 = -5;
	static int64_t t52 = -348110046002610LL;

	t52 = (x297*((x298^x299)+x300));

	if (t52 != 24850LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x301 = UINT32_MAX;
	volatile uint32_t x302 = UINT32_MAX;
	int8_t x303 = INT8_MAX;
	uint16_t x304 = UINT16_MAX;
	uint32_t t53 = 6075U;

	t53 = (x301*((x302^x303)+x304));

	if (t53 != 4294901889U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x305 = 3043LLU;
	volatile uint8_t x306 = 1U;
	int16_t x307 = -1;
	int16_t x308 = INT16_MIN;
	volatile uint64_t t54 = 232348LLU;

	t54 = (x305*((x306^x307)+x308));

	if (t54 != 18446744073609832506LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x309 = 1U;
	uint64_t x310 = UINT64_MAX;
	volatile int16_t x311 = 26;
	static uint64_t t55 = 1836062963LLU;

	t55 = (x309*((x310^x311)+x312));

	if (t55 != 18446744071562067941LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x321 = 0;
	int32_t x322 = INT32_MIN;
	volatile int32_t x323 = INT32_MIN;
	uint8_t x324 = UINT8_MAX;
	int32_t t56 = 200636;

	t56 = (x321*((x322^x323)+x324));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x333 = 28042U;
	int64_t x334 = INT64_MAX;
	static int64_t x335 = INT64_MIN;
	volatile int64_t t57 = 296602LL;

	t57 = (x333*((x334^x335)+x336));

	if (t57 != -28042LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x338 = UINT32_MAX;
	static int16_t x340 = 16126;
	static volatile uint32_t t58 = 30U;

	t58 = (x337*((x338^x339)+x340));

	if (t58 != 4294951208U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x341 = 1080053001153LLU;
	int32_t x342 = INT32_MAX;
	int64_t x343 = INT64_MAX;
	volatile int8_t x344 = INT8_MIN;
	static volatile uint64_t t59 = 887575029960LLU;

	t59 = (x341*((x342^x343)+x344));

	if (t59 != 14116828128081485696LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x345 = 1U;
	uint16_t x346 = 316U;
	int8_t x347 = 1;
	uint64_t x348 = 132492389141184LLU;
	uint64_t t60 = 273454370749028LLU;

	t60 = (x345*((x346^x347)+x348));

	if (t60 != 132492389141501LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x349 = UINT32_MAX;
	static uint64_t x350 = UINT64_MAX;
	uint64_t x351 = 143033449477998660LLU;
	int32_t x352 = -16;

	t61 = (x349*((x350^x351)+x352));

	if (t61 != 16634502436301736021LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x357 = 530205246619515LLU;
	uint32_t x358 = 52U;
	volatile uint16_t x359 = 118U;
	volatile uint64_t t62 = 55972193969LLU;

	t62 = (x357*((x358^x359)+x360));

	if (t62 != 9258365583131663798LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x365 = UINT8_MAX;
	static volatile int8_t x367 = INT8_MAX;
	uint32_t x368 = 14476831U;
	volatile uint32_t t63 = 15310503U;

	t63 = (x365*((x366^x367)+x368));

	if (t63 != 3691559265U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x373 = -408;
	static uint16_t x374 = UINT16_MAX;
	static uint32_t x375 = 0U;
	uint8_t x376 = 19U;

	t64 = (x373*((x374^x375)+x376));

	if (t64 != 4268221264U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x377 = 205U;
	int32_t x378 = INT32_MIN;
	uint64_t x379 = 783635544LLU;
	int64_t x380 = 122519LL;
	volatile uint64_t t65 = 146LLU;

	t65 = (x377*((x378^x379)+x380));

	if (t65 != 18446743794145806691LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x382 = INT16_MIN;
	volatile int8_t x383 = 0;
	volatile int16_t x384 = -1;
	volatile int32_t t66 = -210294;

	t66 = (x381*((x382^x383)+x384));

	if (t66 != 3276900) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x385 = 64891395180666LL;
	uint64_t x386 = UINT64_MAX;
	uint8_t x388 = UINT8_MAX;
	uint64_t t67 = 154074293949LLU;

	t67 = (x385*((x386^x387)+x388));

	if (t67 != 9077869941823735350LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x389 = 265101LL;
	uint16_t x391 = UINT16_MAX;
	static volatile int64_t x392 = -5LL;
	int64_t t68 = -47LL;

	t68 = (x389*((x390^x391)+x392));

	if (t68 != -569282690499918LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MAX;
	uint32_t x395 = 151070379U;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t69 = 9U;

	t69 = (x393*((x394^x395)+x396));

	if (t69 != 2136168064U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MIN;
	uint64_t t70 = 2978LLU;

	t70 = (x397*((x398^x399)+x400));

	if (t70 != 18404021853627613184LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x401 = 262U;
	static int8_t x402 = INT8_MIN;
	int64_t x404 = -844002469LL;
	volatile int64_t t71 = 1923LL;

	t71 = (x401*((x402^x403)+x404));

	if (t71 != 903194129818LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x414 = 656516623LLU;
	int8_t x416 = 0;
	static volatile uint64_t t72 = 10376248865LLU;

	t72 = (x413*((x414^x415)+x416));

	if (t72 != 18446744073053034994LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x417 = -9358585;
	int16_t x419 = INT16_MIN;
	static volatile int8_t x420 = INT8_MIN;
	int32_t t73 = 876706861;

	t73 = (x417*((x418^x419)+x420));

	if (t73 != 1197898880) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x429 = 6U;
	static int16_t x430 = -14;
	static int64_t x431 = INT64_MIN;
	uint64_t x432 = 35960347530LLU;
	static volatile uint64_t t74 = 991744165963572LLU;

	t74 = (x429*((x430^x431)+x432));

	if (t74 != 215762085096LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x446 = INT8_MIN;
	volatile int64_t x447 = INT64_MIN;
	volatile int64_t x448 = INT64_MIN;
	static uint64_t t75 = 346236LLU;

	t75 = (x445*((x446^x447)+x448));

	if (t75 != 18446629956385085952LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x449 = 9542;
	uint32_t x450 = UINT32_MAX;
	static uint16_t x451 = 1987U;
	int8_t x452 = INT8_MAX;

	t76 = (x449*((x450^x451)+x452));

	if (t76 != 4277209634U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x453 = 17U;
	int16_t x455 = INT16_MIN;
	static int8_t x456 = INT8_MIN;
	int32_t t77 = -3972;

	t77 = (x453*((x454^x455)+x456));

	if (t77 != -2193) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x461 = 36U;
	int8_t x462 = INT8_MIN;
	int8_t x463 = 4;
	static volatile int8_t x464 = 26;
	int32_t t78 = 5802;

	t78 = (x461*((x462^x463)+x464));

	if (t78 != -3528) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x466 = -1192LL;
	int32_t x467 = -6;
	int32_t x468 = -1;
	volatile int64_t t79 = -944415LL;

	t79 = (x465*((x466^x467)+x468));

	if (t79 != 24810345LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x469 = -3;
	uint32_t x470 = 72814U;
	volatile int8_t x471 = -1;
	static int16_t x472 = -15097;
	static uint32_t t80 = 200806U;

	t80 = (x469*((x470^x471)+x472));

	if (t80 != 263736U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x477 = 1499LLU;
	int64_t x478 = -1LL;
	uint64_t x479 = UINT64_MAX;
	int32_t x480 = INT32_MIN;

	t81 = (x477*((x478^x479)+x480));

	if (t81 != 18446740854631563264LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x485 = 2837792U;
	static uint32_t x486 = 2U;
	int32_t x487 = -6256363;
	volatile int32_t x488 = -1;
	volatile uint32_t t82 = 122755U;

	t82 = (x485*((x486^x487)+x488));

	if (t82 != 1140768960U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x493 = 105U;
	int16_t x495 = 10;
	int8_t x496 = INT8_MIN;
	uint64_t t83 = 7487680931072827811LLU;

	t83 = (x493*((x494^x495)+x496));

	if (t83 != 286755LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x503 = 176675084188LLU;
	uint8_t x504 = 0U;
	uint64_t t84 = 39056216205LLU;

	t84 = (x501*((x502^x503)+x504));

	if (t84 != 5300251957740LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x505 = UINT32_MAX;
	uint16_t x506 = 2U;
	static int16_t x507 = 390;
	int32_t x508 = -197117384;
	uint32_t t85 = 644732U;

	t85 = (x505*((x506^x507)+x508));

	if (t85 != 197116996U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x509 = -4;
	int64_t x510 = INT64_MAX;
	int16_t x511 = 102;
	int64_t x512 = INT64_MIN;
	int64_t t86 = -31LL;

	t86 = (x509*((x510^x511)+x512));

	if (t86 != 412LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x513 = -1LL;
	uint16_t x515 = UINT16_MAX;
	int8_t x516 = 5;
	int64_t t87 = 422210524573LL;

	t87 = (x513*((x514^x515)+x516));

	if (t87 != -65540LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x517 = 3;
	uint64_t x518 = 403483041897394216LLU;
	volatile int16_t x519 = INT16_MIN;
	int16_t x520 = INT16_MIN;
	volatile uint64_t t88 = 1589LLU;

	t88 = (x517*((x518^x519)+x520));

	if (t88 != 17236294948017246328LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x521 = -1;
	uint16_t x522 = 51U;
	volatile uint32_t x523 = UINT32_MAX;
	volatile int64_t x524 = INT64_MIN;

	t89 = (x521*((x522^x523)+x524));

	if (t89 != 9223372032559808564LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x525 = -1;
	int16_t x527 = 1;
	uint8_t x528 = 0U;
	volatile int32_t t90 = -8;

	t90 = (x525*((x526^x527)+x528));

	if (t90 != -2147483646) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x529 = -11;
	static int64_t x530 = 158038LL;
	static int16_t x531 = INT16_MIN;
	int32_t x532 = 186367676;
	int64_t t91 = -32469LL;

	t91 = (x529*((x530^x531)+x532));

	if (t91 != -2048538822LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x537 = 64LLU;
	volatile int32_t x538 = -1;
	int8_t x539 = -1;
	volatile uint8_t x540 = 3U;

	t92 = (x537*((x538^x539)+x540));

	if (t92 != 192LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x545 = INT8_MIN;
	volatile int16_t x547 = 9;
	uint16_t x548 = 7195U;
	int32_t t93 = 3;

	t93 = (x545*((x546^x547)+x548));

	if (t93 != -919680) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x549 = -23966LL;
	int32_t x552 = INT32_MIN;
	int64_t t94 = -36LL;

	t94 = (x549*((x550^x551)+x552));

	if (t94 != 51466593107968LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x553 = -2527959308441LL;
	uint16_t x554 = UINT16_MAX;
	int16_t x555 = INT16_MIN;
	static uint8_t x556 = 0U;
	int64_t t95 = -234598938684516LL;

	t95 = (x553*((x554^x555)+x556));

	if (t95 != 82838698578303129LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x557 = 0LLU;
	int8_t x559 = INT8_MAX;
	uint16_t x560 = 335U;

	t96 = (x557*((x558^x559)+x560));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x561 = UINT64_MAX;
	static int16_t x562 = 267;
	int32_t x563 = -1;
	int8_t x564 = -1;
	static volatile uint64_t t97 = 433571LLU;

	t97 = (x561*((x562^x563)+x564));

	if (t97 != 269LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x565 = 15LLU;
	int64_t x566 = INT64_MIN;
	volatile int8_t x567 = 17;
	uint32_t x568 = UINT32_MAX;
	uint64_t t98 = 1389884375786LLU;

	t98 = (x565*((x566^x567)+x568));

	if (t98 != 9223372101279285488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x569 = UINT32_MAX;
	uint64_t x570 = 10LLU;
	volatile uint64_t x571 = UINT64_MAX;
	volatile uint32_t x572 = 30140877U;
	static volatile uint64_t t99 = 1054816534309659764LLU;

	t99 = (x569*((x570^x571)+x572));

	if (t99 != 129454033712977470LLU) { NG(); } else { ; }
	
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

