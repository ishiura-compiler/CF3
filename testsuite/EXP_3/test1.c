#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x11 = UINT8_MAX;
static uint32_t t3 = 15320591U;
uint32_t x17 = 15U;
static volatile int64_t t4 = 97131307068962888LL;
volatile int32_t x21 = INT32_MIN;
static uint64_t x29 = 5107LLU;
int64_t x30 = INT64_MIN;
uint64_t t6 = 29354784LLU;
int64_t x33 = -1LL;
static int64_t x35 = -404455LL;
int64_t x37 = -72704991112545LL;
int64_t t8 = 81963LL;
volatile int32_t t9 = -11;
static int32_t x50 = 11;
int16_t x52 = INT16_MIN;
uint64_t t11 = 1646544LLU;
static volatile uint64_t x62 = 106054769751LLU;
int16_t x63 = INT16_MAX;
uint64_t x73 = UINT64_MAX;
volatile uint64_t t15 = 63380402792081LLU;
uint8_t x83 = UINT8_MAX;
int8_t x88 = INT8_MAX;
int16_t x97 = INT16_MIN;
volatile uint8_t x99 = 121U;
volatile int8_t x103 = -1;
int32_t x104 = INT32_MAX;
uint8_t x105 = UINT8_MAX;
uint64_t x108 = UINT64_MAX;
int32_t x118 = 1;
int8_t x125 = -15;
static int64_t x137 = 972562628409LL;
uint64_t t30 = 75107743302663218LLU;
static int64_t x141 = 2291807LL;
int64_t x142 = -1LL;
int64_t t31 = 2052985555LL;
volatile int8_t x154 = 6;
int16_t x155 = INT16_MAX;
static int32_t x163 = INT32_MIN;
static uint16_t x170 = 53U;
static uint64_t t37 = 1320LLU;
int64_t x188 = -1LL;
int64_t x205 = 83957LL;
uint16_t x207 = 65U;
volatile uint16_t x219 = 41U;
uint64_t t46 = 9180LLU;
int64_t t47 = -28296LL;
int8_t x244 = -2;
int8_t x250 = -1;
volatile int32_t x252 = -32088;
int32_t x254 = INT32_MIN;
uint64_t x260 = 6492005LLU;
static volatile int8_t x263 = 1;
static volatile int32_t t55 = 401462;
int32_t x283 = INT32_MIN;
int64_t x284 = -6699152046345LL;
int16_t x289 = INT16_MIN;
uint32_t x291 = UINT32_MAX;
int32_t x297 = -1;
static volatile int64_t x298 = INT64_MAX;
int16_t x300 = INT16_MIN;
volatile int64_t x309 = -1LL;
volatile int32_t x314 = -1;
static volatile int64_t x318 = INT64_MIN;
volatile int32_t x321 = 106127;
int64_t x328 = 34991299LL;
uint16_t x334 = 493U;
volatile uint32_t x355 = 24U;
uint32_t t69 = 18U;
int16_t x365 = -3;
static int64_t x367 = -467542595742LL;
int64_t x369 = -1LL;
int64_t x370 = 15985LL;
volatile int64_t t71 = 1932460LL;
int64_t x381 = -81017432360960935LL;
uint32_t x382 = 363623945U;
volatile int8_t x385 = INT8_MIN;
static int64_t x390 = -3670025234LL;
uint32_t x400 = UINT32_MAX;
volatile int32_t t79 = 1331437;
uint64_t x425 = 2236LLU;
volatile uint64_t x432 = UINT64_MAX;
uint32_t x460 = UINT32_MAX;
volatile uint64_t x475 = UINT64_MAX;
static volatile uint32_t x479 = UINT32_MAX;
int16_t x494 = INT16_MIN;
static uint16_t x504 = 53U;
static volatile int32_t x510 = 498541567;
uint32_t x512 = UINT32_MAX;
int8_t x518 = -28;
volatile uint64_t t96 = 8132124LLU;
int8_t x524 = 10;
int64_t x526 = 12593475793984LL;


void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	int32_t x6 = 3917;
	static uint16_t x7 = UINT16_MAX;
	static volatile uint16_t x8 = 9304U;
	int32_t t1 = 44602;

	t1 = ((x5+x6)+(x7+x8));

	if (t1 != 45988) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -180;
	int32_t x10 = -1;
	int8_t x12 = 0;
	static int32_t t2 = 72;

	t2 = ((x9+x10)+(x11+x12));

	if (t2 != 74) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 208577902U;
	static volatile uint8_t x14 = 11U;
	static uint8_t x15 = 0U;
	static int8_t x16 = -1;

	t3 = ((x13+x14)+(x15+x16));

	if (t3 != 208577912U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	int64_t x19 = 888304163LL;
	volatile int16_t x20 = INT16_MIN;

	t4 = ((x17+x18)+(x19+x20));

	if (t4 != 888271409LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 7589U;
	int16_t x23 = INT16_MIN;
	uint64_t x24 = 3LLU;
	uint64_t t5 = 28148766693431484LLU;

	t5 = ((x21+x22)+(x23+x24));

	if (t5 != 18446744071562042792LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x31 = UINT8_MAX;
	uint64_t x32 = UINT64_MAX;

	t6 = ((x29+x30)+(x31+x32));

	if (t6 != 9223372036854781169LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x34 = 10844U;
	int32_t x36 = INT32_MIN;
	int64_t t7 = 117820289948231LL;

	t7 = ((x33+x34)+(x35+x36));

	if (t7 != -2147877260LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x38 = 11U;
	int16_t x39 = 12;
	static uint8_t x40 = 21U;

	t8 = ((x37+x38)+(x39+x40));

	if (t8 != -72704991112501LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = INT32_MIN;
	uint8_t x42 = 4U;
	int16_t x43 = 2814;
	uint16_t x44 = UINT16_MAX;

	t9 = ((x41+x42)+(x43+x44));

	if (t9 != -2147415295) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = -1;
	int8_t x46 = INT8_MAX;
	static int8_t x47 = 5;
	int16_t x48 = INT16_MIN;
	int32_t t10 = 583129;

	t10 = ((x45+x46)+(x47+x48));

	if (t10 != -32637) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -1LL;
	uint64_t x51 = 45954541117340LLU;

	t11 = ((x49+x50)+(x51+x52));

	if (t11 != 45954541084582LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MAX;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = -1LL;
	int64_t t12 = 88LL;

	t12 = ((x57+x58)+(x59+x60));

	if (t12 != 2147483773LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1;
	int16_t x64 = -1;
	volatile uint64_t t13 = 30435367293004LLU;

	t13 = ((x61+x62)+(x63+x64));

	if (t13 != 106054802516LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = 65769955678503LL;
	uint8_t x70 = UINT8_MAX;
	static volatile int32_t x71 = -1;
	int8_t x72 = INT8_MIN;
	static int64_t t14 = -352LL;

	t14 = ((x69+x70)+(x71+x72));

	if (t14 != 65769955678629LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x74 = 197;
	int64_t x75 = -41420LL;
	static int64_t x76 = 3687LL;

	t15 = ((x73+x74)+(x75+x76));

	if (t15 != 18446744073709514079LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = 557949;
	int64_t x82 = INT64_MIN;
	uint32_t x84 = 54267U;
	volatile int64_t t16 = 84279LL;

	t16 = ((x81+x82)+(x83+x84));

	if (t16 != -9223372036854163337LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x85 = 1U;
	int16_t x86 = INT16_MIN;
	static volatile int8_t x87 = INT8_MAX;
	int32_t t17 = -73737213;

	t17 = ((x85+x86)+(x87+x88));

	if (t17 != -32513) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = 273;
	uint8_t x90 = 6U;
	uint8_t x91 = 24U;
	static int64_t x92 = INT64_MIN;
	static int64_t t18 = -21652187342928042LL;

	t18 = ((x89+x90)+(x91+x92));

	if (t18 != -9223372036854775505LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x93 = 8577834749898LLU;
	int64_t x94 = 126LL;
	int32_t x95 = 141;
	int8_t x96 = INT8_MAX;
	static volatile uint64_t t19 = 1195111517306LLU;

	t19 = ((x93+x94)+(x95+x96));

	if (t19 != 8577834750292LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x98 = -798;
	static int8_t x100 = INT8_MAX;
	volatile int32_t t20 = -271;

	t20 = ((x97+x98)+(x99+x100));

	if (t20 != -33318) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x101 = 531;
	static int64_t x102 = 575022920125027795LL;
	int64_t t21 = -231324479195043103LL;

	t21 = ((x101+x102)+(x103+x104));

	if (t21 != 575022922272511972LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x106 = 154310086637LLU;
	volatile int16_t x107 = -4;
	uint64_t t22 = 1244139946318830757LLU;

	t22 = ((x105+x106)+(x107+x108));

	if (t22 != 154310086887LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = -7367155215659431LL;
	int8_t x110 = INT8_MIN;
	volatile uint32_t x111 = UINT32_MAX;
	int16_t x112 = 1;
	int64_t t23 = -1036425LL;

	t23 = ((x109+x110)+(x111+x112));

	if (t23 != -7367155215659559LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x113 = 3935U;
	int16_t x114 = INT16_MIN;
	int8_t x115 = -1;
	int8_t x116 = 4;
	volatile int32_t t24 = 1;

	t24 = ((x113+x114)+(x115+x116));

	if (t24 != -28830) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MIN;
	int8_t x119 = INT8_MAX;
	int16_t x120 = -1;
	static int32_t t25 = 1068936982;

	t25 = ((x117+x118)+(x119+x120));

	if (t25 != -2147483521) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -443132279318469LL;
	int64_t x122 = -1LL;
	static int8_t x123 = -1;
	int64_t x124 = -6611762197683LL;
	volatile int64_t t26 = -604020837092129198LL;

	t26 = ((x121+x122)+(x123+x124));

	if (t26 != -449744041516154LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x126 = -1767;
	int16_t x127 = 61;
	static uint64_t x128 = UINT64_MAX;
	volatile uint64_t t27 = 2LLU;

	t27 = ((x125+x126)+(x127+x128));

	if (t27 != 18446744073709549894LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x130 = 3709LL;
	uint64_t x131 = 71592845116209777LLU;
	volatile int16_t x132 = -1841;
	volatile uint64_t t28 = 14893643855916LLU;

	t28 = ((x129+x130)+(x131+x132));

	if (t28 != 71592849411178940LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = INT8_MAX;
	int8_t x135 = INT8_MAX;
	int32_t x136 = -9447;
	volatile int32_t t29 = 424967;

	t29 = ((x133+x134)+(x135+x136));

	if (t29 != -9321) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x138 = -1LL;
	uint64_t x139 = 0LLU;
	uint64_t x140 = UINT64_MAX;

	t30 = ((x137+x138)+(x139+x140));

	if (t30 != 972562628407LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x143 = -1;
	static int16_t x144 = INT16_MIN;

	t31 = ((x141+x142)+(x143+x144));

	if (t31 != 2259037LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = UINT32_MAX;
	volatile int16_t x146 = 61;
	int64_t x147 = 65699649095321648LL;
	int16_t x148 = -1237;
	int64_t t32 = -220268193687635LL;

	t32 = ((x145+x146)+(x147+x148));

	if (t32 != 65699649095320471LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = INT64_MIN;
	uint64_t x150 = 8LLU;
	static int16_t x151 = INT16_MIN;
	static int8_t x152 = INT8_MIN;
	uint64_t t33 = 1570261LLU;

	t33 = ((x149+x150)+(x151+x152));

	if (t33 != 9223372036854742920LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x153 = INT16_MIN;
	int64_t x156 = INT64_MIN;
	volatile int64_t t34 = -27984746LL;

	t34 = ((x153+x154)+(x155+x156));

	if (t34 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x161 = 261U;
	int64_t x162 = -1126268894126237LL;
	uint16_t x164 = 74U;
	volatile int64_t t35 = 11LL;

	t35 = ((x161+x162)+(x163+x164));

	if (t35 != -1126271041609550LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 0U;
	uint8_t x166 = 57U;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = 59288607U;
	uint32_t t36 = 357630809U;

	t36 = ((x165+x166)+(x167+x168));

	if (t36 != 59288536U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = UINT64_MAX;
	int8_t x171 = -13;
	static int8_t x172 = INT8_MIN;

	t37 = ((x169+x170)+(x171+x172));

	if (t37 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = UINT32_MAX;
	uint8_t x174 = 2U;
	volatile int8_t x175 = INT8_MIN;
	int8_t x176 = 20;
	static uint32_t t38 = 18249463U;

	t38 = ((x173+x174)+(x175+x176));

	if (t38 != 4294967189U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x185 = -1LL;
	static int32_t x186 = INT32_MIN;
	int64_t x187 = -1LL;
	volatile int64_t t39 = 0LL;

	t39 = ((x185+x186)+(x187+x188));

	if (t39 != -2147483651LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x193 = UINT16_MAX;
	uint64_t x194 = 32482205123LLU;
	int32_t x195 = 16;
	uint64_t x196 = 36550LLU;
	uint64_t t40 = 38696LLU;

	t40 = ((x193+x194)+(x195+x196));

	if (t40 != 32482307224LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x197 = -24;
	uint32_t x198 = 3U;
	static int32_t x199 = -104;
	volatile int16_t x200 = -22;
	volatile uint32_t t41 = 22U;

	t41 = ((x197+x198)+(x199+x200));

	if (t41 != 4294967149U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x206 = 444U;
	static int16_t x208 = -1;
	int64_t t42 = 737LL;

	t42 = ((x205+x206)+(x207+x208));

	if (t42 != 84465LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x213 = -1LL;
	int64_t x214 = -1LL;
	volatile uint32_t x215 = 1780U;
	int16_t x216 = INT16_MAX;
	volatile int64_t t43 = -2157LL;

	t43 = ((x213+x214)+(x215+x216));

	if (t43 != 34545LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x217 = 17U;
	int32_t x218 = -1441172;
	int8_t x220 = -1;
	int32_t t44 = -787;

	t44 = ((x217+x218)+(x219+x220));

	if (t44 != -1441115) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x225 = 359614274U;
	int16_t x226 = 0;
	volatile uint8_t x227 = UINT8_MAX;
	int16_t x228 = INT16_MIN;
	uint32_t t45 = 1210U;

	t45 = ((x225+x226)+(x227+x228));

	if (t45 != 359581761U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x229 = -96;
	volatile int16_t x230 = INT16_MAX;
	volatile uint64_t x231 = 12LLU;
	static uint8_t x232 = 2U;

	t46 = ((x229+x230)+(x231+x232));

	if (t46 != 32685LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x237 = 10184;
	int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MIN;
	volatile uint16_t x240 = 0U;

	t47 = ((x237+x238)+(x239+x240));

	if (t47 != -9223372036854765752LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x241 = 8622U;
	uint32_t x242 = UINT32_MAX;
	static int32_t x243 = -1;
	static uint32_t t48 = 458731U;

	t48 = ((x241+x242)+(x243+x244));

	if (t48 != 8618U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = -19;
	int32_t x246 = -8;
	int8_t x247 = -1;
	static volatile int8_t x248 = INT8_MAX;
	static volatile int32_t t49 = 60;

	t49 = ((x245+x246)+(x247+x248));

	if (t49 != 99) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x249 = 772;
	static uint64_t x251 = UINT64_MAX;
	uint64_t t50 = 280LLU;

	t50 = ((x249+x250)+(x251+x252));

	if (t50 != 18446744073709520298LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x253 = 797104427019LLU;
	uint8_t x255 = 9U;
	int32_t x256 = INT32_MIN;
	uint64_t t51 = 5131405074021551LLU;

	t51 = ((x253+x254)+(x255+x256));

	if (t51 != 792809459732LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x257 = -1;
	int16_t x258 = -1;
	int8_t x259 = INT8_MIN;
	volatile uint64_t t52 = 3051LLU;

	t52 = ((x257+x258)+(x259+x260));

	if (t52 != 6491875LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x261 = 13330;
	static uint8_t x262 = UINT8_MAX;
	int8_t x264 = INT8_MAX;
	static volatile int32_t t53 = 57;

	t53 = ((x261+x262)+(x263+x264));

	if (t53 != 13713) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x269 = INT64_MAX;
	int64_t x270 = INT64_MIN;
	volatile uint8_t x271 = 21U;
	uint16_t x272 = UINT16_MAX;
	volatile int64_t t54 = 5LL;

	t54 = ((x269+x270)+(x271+x272));

	if (t54 != 65555LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x277 = 5;
	static int32_t x278 = -1;
	int8_t x279 = 1;
	int32_t x280 = INT32_MIN;

	t55 = ((x277+x278)+(x279+x280));

	if (t55 != -2147483643) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x281 = -1;
	volatile uint8_t x282 = 3U;
	volatile int64_t t56 = 283871383593616757LL;

	t56 = ((x281+x282)+(x283+x284));

	if (t56 != -6701299529991LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x290 = UINT64_MAX;
	uint32_t x292 = UINT32_MAX;
	static uint64_t t57 = 14258821LLU;

	t57 = ((x289+x290)+(x291+x292));

	if (t57 != 4294934525LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x299 = UINT8_MAX;
	volatile int64_t t58 = 74730950008LL;

	t58 = ((x297+x298)+(x299+x300));

	if (t58 != 9223372036854743293LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x301 = INT16_MIN;
	uint8_t x302 = UINT8_MAX;
	static volatile int8_t x303 = 0;
	uint64_t x304 = 4LLU;
	uint64_t t59 = 14LLU;

	t59 = ((x301+x302)+(x303+x304));

	if (t59 != 18446744073709519107LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x310 = 3740659397906507LLU;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MAX;
	volatile uint64_t t60 = 785188LLU;

	t60 = ((x309+x310)+(x311+x312));

	if (t60 != 3740659397906505LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x313 = -1;
	static int16_t x315 = -1;
	int16_t x316 = -3146;
	static int32_t t61 = -11;

	t61 = ((x313+x314)+(x315+x316));

	if (t61 != -3149) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x317 = 1398;
	int64_t x319 = INT64_MAX;
	volatile int64_t x320 = -1LL;
	int64_t t62 = -3686498LL;

	t62 = ((x317+x318)+(x319+x320));

	if (t62 != 1396LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x322 = -7;
	volatile int8_t x323 = 8;
	volatile int8_t x324 = -1;
	static volatile int32_t t63 = -1;

	t63 = ((x321+x322)+(x323+x324));

	if (t63 != 106127) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x325 = 243;
	static int8_t x326 = INT8_MIN;
	uint8_t x327 = 73U;
	volatile int64_t t64 = -11010106420472LL;

	t64 = ((x325+x326)+(x327+x328));

	if (t64 != 34991487LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x333 = INT64_MIN;
	int8_t x335 = INT8_MAX;
	uint64_t x336 = 3637666LLU;
	volatile uint64_t t65 = 3232732LLU;

	t65 = ((x333+x334)+(x335+x336));

	if (t65 != 9223372036858414094LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x337 = -347101;
	int32_t x338 = 247713591;
	int64_t x339 = -82827636683LL;
	int16_t x340 = INT16_MAX;
	volatile int64_t t66 = 1824230182199309LL;

	t66 = ((x337+x338)+(x339+x340));

	if (t66 != -82580237426LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x341 = INT8_MIN;
	static volatile int8_t x342 = 0;
	int16_t x343 = -1;
	uint32_t x344 = 2475U;
	volatile uint32_t t67 = 8037U;

	t67 = ((x341+x342)+(x343+x344));

	if (t67 != 2346U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x349 = INT16_MAX;
	int16_t x350 = INT16_MIN;
	int32_t x351 = 67;
	volatile int32_t x352 = -4;
	int32_t t68 = -75321575;

	t68 = ((x349+x350)+(x351+x352));

	if (t68 != 62) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x353 = 22U;
	int8_t x354 = 13;
	uint16_t x356 = UINT16_MAX;

	t69 = ((x353+x354)+(x355+x356));

	if (t69 != 65594U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x366 = -1;
	int16_t x368 = INT16_MAX;
	volatile int64_t t70 = 0LL;

	t70 = ((x365+x366)+(x367+x368));

	if (t70 != -467542562979LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x371 = 6323U;
	int32_t x372 = -1;

	t71 = ((x369+x370)+(x371+x372));

	if (t71 != 22306LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x373 = 450956U;
	volatile int8_t x374 = INT8_MIN;
	int64_t x375 = 10526785600519LL;
	uint8_t x376 = 127U;
	static int64_t t72 = -32232LL;

	t72 = ((x373+x374)+(x375+x376));

	if (t72 != 10526786051474LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x377 = INT16_MAX;
	static int16_t x378 = INT16_MAX;
	int32_t x379 = 322439;
	uint64_t x380 = 1982313LLU;
	static uint64_t t73 = 9351973LLU;

	t73 = ((x377+x378)+(x379+x380));

	if (t73 != 2370286LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x383 = 0U;
	int32_t x384 = -1;
	int64_t t74 = -35999199575411119LL;

	t74 = ((x381+x382)+(x383+x384));

	if (t74 != -81017431997336991LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x386 = INT16_MIN;
	static int64_t x387 = -162129023833LL;
	volatile int16_t x388 = -1;
	volatile int64_t t75 = -47960381163LL;

	t75 = ((x385+x386)+(x387+x388));

	if (t75 != -162129056730LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x389 = UINT16_MAX;
	uint16_t x391 = 21842U;
	int16_t x392 = INT16_MIN;
	int64_t t76 = 313974839749329454LL;

	t76 = ((x389+x390)+(x391+x392));

	if (t76 != -3669970625LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x397 = UINT16_MAX;
	static uint32_t x398 = 0U;
	int32_t x399 = -163245;
	volatile uint32_t t77 = 222160774U;

	t77 = ((x397+x398)+(x399+x400));

	if (t77 != 4294869585U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x405 = INT16_MIN;
	static int8_t x406 = INT8_MIN;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = 6;
	static volatile int32_t t78 = -1599187;

	t78 = ((x405+x406)+(x407+x408));

	if (t78 != 32645) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x409 = UINT16_MAX;
	volatile int8_t x410 = 1;
	int32_t x411 = 16369130;
	int8_t x412 = INT8_MIN;

	t79 = ((x409+x410)+(x411+x412));

	if (t79 != 16434538) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x417 = 2193U;
	volatile int8_t x418 = 1;
	int64_t x419 = -1LL;
	int16_t x420 = 1089;
	int64_t t80 = -4236LL;

	t80 = ((x417+x418)+(x419+x420));

	if (t80 != 3282LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x426 = INT32_MIN;
	int32_t x427 = INT32_MIN;
	uint8_t x428 = 40U;
	static uint64_t t81 = 13LLU;

	t81 = ((x425+x426)+(x427+x428));

	if (t81 != 18446744069414586596LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x429 = 8U;
	int16_t x430 = 4;
	volatile uint64_t x431 = 1931177728505045LLU;
	uint64_t t82 = 487581735541111LLU;

	t82 = ((x429+x430)+(x431+x432));

	if (t82 != 1931177728505056LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x433 = INT8_MAX;
	int16_t x434 = INT16_MAX;
	static volatile int16_t x435 = 2;
	volatile int8_t x436 = INT8_MAX;
	volatile int32_t t83 = -83;

	t83 = ((x433+x434)+(x435+x436));

	if (t83 != 33023) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x449 = -1LL;
	uint16_t x450 = 540U;
	int16_t x451 = 1;
	static volatile uint16_t x452 = 4U;
	volatile int64_t t84 = 260LL;

	t84 = ((x449+x450)+(x451+x452));

	if (t84 != 544LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x457 = 1302983U;
	int64_t x458 = INT64_MIN;
	volatile int32_t x459 = INT32_MAX;
	int64_t t85 = -1528LL;

	t85 = ((x457+x458)+(x459+x460));

	if (t85 != -9223372034705989179LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x461 = INT64_MIN;
	int64_t x462 = 116LL;
	static int8_t x463 = INT8_MAX;
	int16_t x464 = INT16_MAX;
	int64_t t86 = -6421436LL;

	t86 = ((x461+x462)+(x463+x464));

	if (t86 != -9223372036854742798LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x465 = -1;
	int16_t x466 = -4;
	int8_t x467 = INT8_MIN;
	volatile int16_t x468 = INT16_MIN;
	volatile int32_t t87 = 0;

	t87 = ((x465+x466)+(x467+x468));

	if (t87 != -32901) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x469 = UINT8_MAX;
	static int32_t x470 = 7801;
	volatile int32_t x471 = 94408744;
	uint64_t x472 = 404798202LLU;
	volatile uint64_t t88 = 5454873LLU;

	t88 = ((x469+x470)+(x471+x472));

	if (t88 != 499215002LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x473 = -230431342050495631LL;
	int16_t x474 = 450;
	volatile int32_t x476 = 151539;
	volatile uint64_t t89 = 72054263LLU;

	t89 = ((x473+x474)+(x475+x476));

	if (t89 != 18216312731659207973LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x477 = 6212;
	uint16_t x478 = 10561U;
	int32_t x480 = -1;
	volatile uint32_t t90 = 12706U;

	t90 = ((x477+x478)+(x479+x480));

	if (t90 != 16771U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x493 = -1;
	static uint64_t x495 = 1772LLU;
	volatile int8_t x496 = INT8_MIN;
	static uint64_t t91 = 230255618710102362LLU;

	t91 = ((x493+x494)+(x495+x496));

	if (t91 != 18446744073709520491LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x501 = 1U;
	int32_t x502 = -763479155;
	uint8_t x503 = 3U;
	volatile int32_t t92 = -132156166;

	t92 = ((x501+x502)+(x503+x504));

	if (t92 != -763479098) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x505 = 3298U;
	int32_t x506 = -1;
	int64_t x507 = INT64_MIN;
	volatile int16_t x508 = 0;
	volatile int64_t t93 = 446814LL;

	t93 = ((x505+x506)+(x507+x508));

	if (t93 != -9223372036854772511LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x509 = -1;
	int8_t x511 = -1;
	static volatile uint32_t t94 = 29283293U;

	t94 = ((x509+x510)+(x511+x512));

	if (t94 != 498541564U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x513 = 569246425558181430LL;
	volatile uint32_t x514 = UINT32_MAX;
	uint64_t x515 = UINT64_MAX;
	static int32_t x516 = INT32_MIN;
	uint64_t t95 = 977LLU;

	t95 = ((x513+x514)+(x515+x516));

	if (t95 != 569246427705665076LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x517 = -1LL;
	volatile int64_t x519 = 2042040617796186358LL;
	volatile uint64_t x520 = UINT64_MAX;

	t96 = ((x517+x518)+(x519+x520));

	if (t96 != 2042040617796186328LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x521 = INT8_MIN;
	int8_t x522 = 7;
	int64_t x523 = -1LL;
	static int64_t t97 = 14LL;

	t97 = ((x521+x522)+(x523+x524));

	if (t97 != -112LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x525 = UINT64_MAX;
	uint32_t x527 = 3U;
	static int16_t x528 = -2680;
	static uint64_t t98 = 123LLU;

	t98 = ((x525+x526)+(x527+x528));

	if (t98 != 12597770758602LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x537 = INT8_MAX;
	static int64_t x538 = 35153LL;
	uint8_t x539 = 0U;
	uint64_t x540 = 2018279004LLU;
	volatile uint64_t t99 = 373642971798LLU;

	t99 = ((x537+x538)+(x539+x540));

	if (t99 != 2018314284LLU) { NG(); } else { ; }
	
}

void f100(void) {
	int8_t x541 = -1;
	int8_t x542 = -3;
	int32_t x543 = INT32_MIN;
	static uint16_t x544 = UINT16_MAX;
	int32_t t100 = -419;

	t100 = ((x541+x542)+(x543+x544));

	if (t100 != -2147418117) { NG(); } else { ; }
	
}

int main(void) {
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
    f100();


    return 0;
}

