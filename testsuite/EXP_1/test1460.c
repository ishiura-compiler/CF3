#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x23 = INT16_MIN;
static volatile uint64_t t5 = 12717086LLU;
static int32_t x29 = 1;
volatile uint64_t x30 = 7837317948954LLU;
static int32_t x39 = INT32_MIN;
uint64_t x55 = 496176LLU;
static int64_t t12 = -430288786LL;
static uint32_t x58 = 34847066U;
static volatile int8_t x63 = -1;
int16_t x67 = 7;
static volatile int32_t t15 = 20251;
uint32_t x74 = UINT32_MAX;
int64_t x75 = INT64_MIN;
volatile int32_t t19 = -1;
int16_t x91 = 5998;
static volatile int16_t x96 = INT16_MIN;
uint8_t x98 = UINT8_MAX;
uint16_t x100 = 3U;
static int32_t t22 = -115757;
int64_t x101 = 3951037775489349981LL;
volatile int32_t t23 = -15027947;
int16_t x107 = -1027;
uint8_t x108 = 4U;
int32_t t25 = 14081;
int32_t x121 = INT32_MIN;
int32_t x122 = -1;
volatile int32_t t27 = -239496;
volatile int64_t x126 = -1LL;
volatile int8_t x128 = 37;
int8_t x140 = INT8_MIN;
volatile int32_t t31 = 1601;
static int32_t t32 = -227243;
volatile int32_t x149 = INT32_MIN;
int8_t x150 = INT8_MIN;
uint8_t x152 = 33U;
int8_t x153 = INT8_MIN;
int64_t x154 = INT64_MAX;
int8_t x156 = INT8_MAX;
uint16_t x160 = 29193U;
volatile int64_t x161 = INT64_MIN;
int32_t x171 = -1;
static volatile int16_t x180 = INT16_MIN;
volatile uint32_t x182 = UINT32_MAX;
int64_t x195 = -1LL;
int8_t x197 = -7;
int16_t x199 = INT16_MIN;
volatile int32_t x202 = -503408;
int64_t t46 = 495LL;
volatile uint16_t x211 = 1746U;
int32_t t48 = 689;
static int32_t x216 = 2752133;
static uint8_t x219 = 23U;
volatile uint16_t x226 = 6606U;
int64_t x227 = INT64_MIN;
int32_t x229 = -1;
uint8_t x231 = UINT8_MAX;
uint64_t x234 = 142LLU;
static int32_t t54 = -123530;
volatile int64_t x237 = INT64_MIN;
int32_t x240 = -1;
static uint64_t x247 = 825654LLU;
volatile uint64_t t57 = 7LLU;
int32_t x250 = INT32_MIN;
int64_t x255 = 724LL;
uint32_t t59 = 22317232U;
int16_t x259 = INT16_MIN;
static int64_t x261 = INT64_MAX;
int8_t x266 = INT8_MIN;
static int32_t x268 = INT32_MIN;
volatile int32_t t64 = 1560;
volatile int64_t t65 = -3011045554919LL;
uint64_t x281 = UINT64_MAX;
static int16_t x283 = INT16_MIN;
int64_t x292 = INT64_MIN;
uint16_t x299 = 0U;
int16_t x300 = -1;
volatile int32_t t70 = 0;
uint16_t x303 = UINT16_MAX;
volatile int64_t t74 = -4106783600305495887LL;
int64_t x320 = INT64_MIN;
uint16_t x322 = 1U;
static int8_t x333 = INT8_MIN;
int8_t x334 = INT8_MAX;
uint8_t x336 = 1U;
static volatile int64_t x350 = INT64_MIN;
int16_t x351 = INT16_MIN;
int32_t x354 = INT32_MIN;
static uint64_t x358 = 1016432137499748LLU;
uint64_t x360 = 207312912694LLU;
int8_t x372 = 5;
int16_t x377 = INT16_MAX;
volatile int64_t t90 = -1275266527LL;
volatile int32_t t91 = -22;
uint16_t x393 = UINT16_MAX;
volatile int8_t x394 = INT8_MIN;
int32_t t94 = -28338;
int8_t x401 = INT8_MIN;
volatile int16_t x415 = -4;
volatile int32_t t97 = -10;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static volatile uint32_t x2 = 3U;
	volatile uint16_t x3 = 5U;
	static int64_t x4 = INT64_MAX;
	static int64_t t0 = -2545467LL;

	t0 = (((x1<x2)<x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 4;
	uint32_t x6 = UINT32_MAX;
	static int8_t x7 = -1;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 40662362047200245LL;

	t1 = (((x5<x6)<x7)/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MIN;
	static int16_t x10 = INT16_MIN;
	static int64_t x11 = INT64_MAX;
	volatile int32_t x12 = 11;
	volatile int32_t t2 = 93219283;

	t2 = (((x9<x10)<x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	static volatile int16_t x14 = INT16_MAX;
	uint64_t x15 = UINT64_MAX;
	static int32_t x16 = -233926;
	static volatile int32_t t3 = 34863;

	t3 = (((x13<x14)<x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -9LL;
	int64_t x18 = INT64_MIN;
	int64_t x19 = INT64_MAX;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = -100660113137427LL;

	t4 = (((x17<x18)<x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = 11;
	static volatile uint64_t x24 = 6742099663265LLU;

	t5 = (((x21<x22)<x23)/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x31 = INT64_MIN;
	volatile int64_t x32 = 252630LL;
	volatile int64_t t6 = 602751LL;

	t6 = (((x29<x30)<x31)/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = -6;
	volatile uint8_t x34 = UINT8_MAX;
	int32_t x35 = INT32_MAX;
	uint16_t x36 = 1505U;
	int32_t t7 = -7;

	t7 = (((x33<x34)<x35)/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;
	int64_t x38 = -1LL;
	static volatile uint64_t x40 = 15471780265LLU;
	volatile uint64_t t8 = 3LLU;

	t8 = (((x37<x38)<x39)/x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	int8_t x42 = -3;
	volatile int16_t x43 = -1;
	uint16_t x44 = 14365U;
	static int32_t t9 = 1;

	t9 = (((x41<x42)<x43)/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	static volatile uint8_t x46 = UINT8_MAX;
	int32_t x47 = 2;
	volatile uint64_t x48 = UINT64_MAX;
	uint64_t t10 = 4227648876889575LLU;

	t10 = (((x45<x46)<x47)/x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	static int8_t x50 = INT8_MIN;
	volatile int16_t x51 = 13459;
	int16_t x52 = -110;
	volatile int32_t t11 = -3443;

	t11 = (((x49<x50)<x51)/x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 28;
	uint16_t x54 = 519U;
	volatile int64_t x56 = 39035735172098LL;

	t12 = (((x53<x54)<x55)/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	static int16_t x59 = 10;
	int8_t x60 = INT8_MAX;
	int32_t t13 = 11;

	t13 = (((x57<x58)<x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -1LL;
	uint8_t x62 = UINT8_MAX;
	static int32_t x64 = 193945670;
	int32_t t14 = -265;

	t14 = (((x61<x62)<x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = 8391962133821572176LLU;
	volatile int16_t x66 = INT16_MIN;
	int32_t x68 = INT32_MIN;

	t15 = (((x65<x66)<x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x69 = 11U;
	int64_t x70 = -3468209458LL;
	int64_t x71 = INT64_MIN;
	static int32_t x72 = INT32_MIN;
	volatile int32_t t16 = 0;

	t16 = (((x69<x70)<x71)/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	int8_t x76 = -1;
	static int32_t t17 = 0;

	t17 = (((x73<x74)<x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x81 = 224U;
	volatile int16_t x82 = -1;
	static int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t18 = 24020;

	t18 = (((x81<x82)<x83)/x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x85 = 114U;
	volatile int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MAX;
	uint8_t x88 = 6U;

	t19 = (((x85<x86)<x87)/x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = INT16_MIN;
	int16_t x90 = -1;
	volatile int8_t x92 = INT8_MIN;
	volatile int32_t t20 = 9317;

	t20 = (((x89<x90)<x91)/x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 1040804U;
	int32_t x94 = INT32_MAX;
	static uint8_t x95 = UINT8_MAX;
	int32_t t21 = 134094949;

	t21 = (((x93<x94)<x95)/x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MIN;
	int64_t x99 = INT64_MAX;

	t22 = (((x97<x98)<x99)/x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x102 = 6U;
	volatile int8_t x103 = INT8_MAX;
	int8_t x104 = INT8_MIN;

	t23 = (((x101<x102)<x103)/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = 16;
	static int32_t t24 = -52725427;

	t24 = (((x105<x106)<x107)/x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = -1;
	int32_t x110 = -1;
	uint32_t x111 = 5387U;
	uint8_t x112 = UINT8_MAX;

	t25 = (((x109<x110)<x111)/x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = INT16_MIN;
	uint32_t x114 = 663U;
	uint16_t x115 = 444U;
	volatile int64_t x116 = -4LL;
	int64_t t26 = -78LL;

	t26 = (((x113<x114)<x115)/x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x123 = INT16_MIN;
	uint8_t x124 = 40U;

	t27 = (((x121<x122)<x123)/x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = UINT32_MAX;
	uint16_t x127 = 32493U;
	static volatile int32_t t28 = -77;

	t28 = (((x125<x126)<x127)/x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x129 = -47;
	volatile uint16_t x130 = 31U;
	uint8_t x131 = UINT8_MAX;
	int8_t x132 = INT8_MIN;
	int32_t t29 = -501240387;

	t29 = (((x129<x130)<x131)/x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x137 = UINT8_MAX;
	int16_t x138 = INT16_MIN;
	int32_t x139 = 4353;
	static int32_t t30 = -5;

	t30 = (((x137<x138)<x139)/x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = UINT32_MAX;
	uint32_t x142 = 85420976U;
	static volatile uint8_t x143 = UINT8_MAX;
	uint8_t x144 = 47U;

	t31 = (((x141<x142)<x143)/x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = 20U;
	int64_t x146 = 1312LL;
	static int32_t x147 = -3385625;
	int16_t x148 = INT16_MAX;

	t32 = (((x145<x146)<x147)/x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x151 = INT32_MIN;
	volatile int32_t t33 = -729;

	t33 = (((x149<x150)<x151)/x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x155 = -224LL;
	static volatile int32_t t34 = 5318515;

	t34 = (((x153<x154)<x155)/x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x157 = UINT32_MAX;
	static volatile int32_t x158 = 107827;
	static int16_t x159 = -23;
	static int32_t t35 = -1283586;

	t35 = (((x157<x158)<x159)/x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x162 = INT32_MIN;
	int16_t x163 = 12029;
	volatile int64_t x164 = INT64_MIN;
	volatile int64_t t36 = -3471437LL;

	t36 = (((x161<x162)<x163)/x164);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 331272U;
	int32_t x166 = -1;
	int8_t x167 = 3;
	uint64_t x168 = 1075747271644779630LLU;
	uint64_t t37 = 96105178163988567LLU;

	t37 = (((x165<x166)<x167)/x168);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -23166295;
	volatile int16_t x170 = INT16_MIN;
	int64_t x172 = INT64_MIN;
	static volatile int64_t t38 = 0LL;

	t38 = (((x169<x170)<x171)/x172);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x173 = 1888691U;
	int32_t x174 = INT32_MIN;
	volatile int32_t x175 = -1;
	volatile int16_t x176 = 73;
	int32_t t39 = -1;

	t39 = (((x173<x174)<x175)/x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MAX;
	int16_t x178 = INT16_MIN;
	volatile uint16_t x179 = UINT16_MAX;
	volatile int32_t t40 = -1184;

	t40 = (((x177<x178)<x179)/x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = UINT64_MAX;
	uint64_t x183 = UINT64_MAX;
	int8_t x184 = -1;
	volatile int32_t t41 = 265380;

	t41 = (((x181<x182)<x183)/x184);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x185 = INT8_MAX;
	static int64_t x186 = -1LL;
	int32_t x187 = 2209;
	int64_t x188 = INT64_MAX;
	int64_t t42 = 85817497556645LL;

	t42 = (((x185<x186)<x187)/x188);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x189 = 1330LLU;
	volatile int8_t x190 = INT8_MAX;
	int16_t x191 = INT16_MIN;
	volatile int64_t x192 = -16311462302LL;
	volatile int64_t t43 = -15775LL;

	t43 = (((x189<x190)<x191)/x192);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x193 = 2237U;
	static uint32_t x194 = 28U;
	static int16_t x196 = -13526;
	static int32_t t44 = -436627651;

	t44 = (((x193<x194)<x195)/x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x198 = 22U;
	static int8_t x200 = -1;
	int32_t t45 = -1493312;

	t45 = (((x197<x198)<x199)/x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = 59;
	volatile int64_t x203 = INT64_MAX;
	int64_t x204 = INT64_MIN;

	t46 = (((x201<x202)<x203)/x204);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = INT64_MIN;
	volatile int32_t x206 = -1;
	uint64_t x207 = UINT64_MAX;
	int8_t x208 = INT8_MIN;
	static volatile int32_t t47 = 330;

	t47 = (((x205<x206)<x207)/x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x209 = -1LL;
	int16_t x210 = INT16_MIN;
	uint16_t x212 = 17635U;

	t48 = (((x209<x210)<x211)/x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x213 = 13U;
	uint64_t x214 = 232354132LLU;
	volatile int64_t x215 = -6088352LL;
	int32_t t49 = -2;

	t49 = (((x213<x214)<x215)/x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = UINT16_MAX;
	volatile uint16_t x218 = 35U;
	int8_t x220 = -2;
	volatile int32_t t50 = -1;

	t50 = (((x217<x218)<x219)/x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = UINT16_MAX;
	int8_t x222 = -1;
	uint16_t x223 = 28610U;
	volatile uint32_t x224 = UINT32_MAX;
	volatile uint32_t t51 = 0U;

	t51 = (((x221<x222)<x223)/x224);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MAX;
	static int16_t x228 = -1;
	int32_t t52 = -306330421;

	t52 = (((x225<x226)<x227)/x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x230 = INT16_MAX;
	int32_t x232 = 2;
	int32_t t53 = -1276;

	t53 = (((x229<x230)<x231)/x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = 947745038LLU;
	int8_t x235 = -2;
	int16_t x236 = INT16_MIN;

	t54 = (((x233<x234)<x235)/x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x238 = 249530LLU;
	volatile uint8_t x239 = 28U;
	static int32_t t55 = 702;

	t55 = (((x237<x238)<x239)/x240);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MIN;
	static volatile uint64_t x242 = UINT64_MAX;
	int64_t x243 = INT64_MIN;
	int32_t x244 = 812667870;
	volatile int32_t t56 = -864;

	t56 = (((x241<x242)<x243)/x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = 28U;
	static uint16_t x246 = 430U;
	volatile uint64_t x248 = UINT64_MAX;

	t57 = (((x245<x246)<x247)/x248);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = -2808251245662467LL;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t58 = -87664;

	t58 = (((x249<x250)<x251)/x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x253 = INT32_MAX;
	uint64_t x254 = 7429638168293LLU;
	uint32_t x256 = 3579742U;

	t59 = (((x253<x254)<x255)/x256);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x257 = INT64_MAX;
	static int16_t x258 = INT16_MIN;
	uint64_t x260 = 359031LLU;
	volatile uint64_t t60 = 1835072448152253LLU;

	t60 = (((x257<x258)<x259)/x260);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x262 = 4246002571998LL;
	static uint32_t x263 = 75923745U;
	static uint16_t x264 = UINT16_MAX;
	volatile int32_t t61 = 2793566;

	t61 = (((x261<x262)<x263)/x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = INT32_MAX;
	int32_t x267 = -1;
	static int32_t t62 = 5977;

	t62 = (((x265<x266)<x267)/x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x269 = INT32_MAX;
	uint64_t x270 = UINT64_MAX;
	static int64_t x271 = -1LL;
	int64_t x272 = INT64_MAX;
	static volatile int64_t t63 = 16156433572113LL;

	t63 = (((x269<x270)<x271)/x272);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x273 = -1;
	uint8_t x274 = 1U;
	static uint16_t x275 = 0U;
	uint16_t x276 = 1915U;

	t64 = (((x273<x274)<x275)/x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = 8;
	int16_t x278 = -1;
	uint16_t x279 = 88U;
	volatile int64_t x280 = INT64_MAX;

	t65 = (((x277<x278)<x279)/x280);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x282 = INT64_MIN;
	static int16_t x284 = -1;
	static int32_t t66 = 14106776;

	t66 = (((x281<x282)<x283)/x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x285 = 263726LLU;
	int8_t x286 = -1;
	volatile int8_t x287 = -1;
	int16_t x288 = INT16_MIN;
	volatile int32_t t67 = -6525853;

	t67 = (((x285<x286)<x287)/x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x289 = -62;
	int8_t x290 = -1;
	volatile uint64_t x291 = UINT64_MAX;
	static volatile int64_t t68 = 31965280LL;

	t68 = (((x289<x290)<x291)/x292);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = 7;
	uint8_t x294 = 41U;
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t69 = -6610;

	t69 = (((x293<x294)<x295)/x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x297 = 8U;
	static uint8_t x298 = UINT8_MAX;

	t70 = (((x297<x298)<x299)/x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = -1;
	volatile uint64_t x302 = UINT64_MAX;
	int16_t x304 = -312;
	volatile int32_t t71 = 22014007;

	t71 = (((x301<x302)<x303)/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MAX;
	int32_t x307 = 5820263;
	int8_t x308 = INT8_MAX;
	volatile int32_t t72 = 53;

	t72 = (((x305<x306)<x307)/x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = -125041;
	uint64_t x310 = 1913022184231733LLU;
	static uint64_t x311 = 177418147030LLU;
	uint8_t x312 = 59U;
	static volatile int32_t t73 = 446592320;

	t73 = (((x309<x310)<x311)/x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x313 = 1U;
	uint64_t x314 = 997326389619320543LLU;
	int64_t x315 = INT64_MIN;
	int64_t x316 = -1LL;

	t74 = (((x313<x314)<x315)/x316);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x317 = 9;
	volatile int64_t x318 = -1820337459LL;
	static volatile int8_t x319 = INT8_MAX;
	static volatile int64_t t75 = -2LL;

	t75 = (((x317<x318)<x319)/x320);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = -355;
	volatile int8_t x323 = INT8_MAX;
	int64_t x324 = INT64_MAX;
	int64_t t76 = -37396773738779550LL;

	t76 = (((x321<x322)<x323)/x324);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = INT8_MIN;
	volatile int32_t x326 = INT32_MIN;
	int8_t x327 = 7;
	int32_t x328 = INT32_MIN;
	volatile int32_t t77 = 1;

	t77 = (((x325<x326)<x327)/x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x329 = INT32_MAX;
	int32_t x330 = INT32_MIN;
	static uint64_t x331 = UINT64_MAX;
	static int64_t x332 = INT64_MIN;
	volatile int64_t t78 = 916850174LL;

	t78 = (((x329<x330)<x331)/x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x335 = -7168LL;
	volatile int32_t t79 = 0;

	t79 = (((x333<x334)<x335)/x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = UINT8_MAX;
	static int8_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	uint32_t x340 = UINT32_MAX;
	uint32_t t80 = 240696469U;

	t80 = (((x337<x338)<x339)/x340);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = INT16_MAX;
	int64_t x342 = INT64_MIN;
	static int32_t x343 = -1;
	int64_t x344 = INT64_MAX;
	static int64_t t81 = 18LL;

	t81 = (((x341<x342)<x343)/x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x345 = 103U;
	static volatile int64_t x346 = 1LL;
	int32_t x347 = INT32_MIN;
	uint8_t x348 = 52U;
	volatile int32_t t82 = 4029;

	t82 = (((x345<x346)<x347)/x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x349 = INT16_MIN;
	volatile int8_t x352 = INT8_MAX;
	int32_t t83 = -76;

	t83 = (((x349<x350)<x351)/x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = 22068887143LLU;
	static int64_t x355 = INT64_MAX;
	static int32_t x356 = INT32_MAX;
	int32_t t84 = -933;

	t84 = (((x353<x354)<x355)/x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = 6U;
	int64_t x359 = -2706LL;
	volatile uint64_t t85 = 461LLU;

	t85 = (((x357<x358)<x359)/x360);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 293LLU;
	volatile uint16_t x362 = UINT16_MAX;
	int64_t x363 = -1LL;
	int16_t x364 = -1;
	int32_t t86 = 7604736;

	t86 = (((x361<x362)<x363)/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x369 = 0U;
	uint16_t x370 = 4516U;
	volatile int8_t x371 = INT8_MAX;
	int32_t t87 = 1249358;

	t87 = (((x369<x370)<x371)/x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x373 = -1;
	int64_t x374 = INT64_MIN;
	int8_t x375 = -1;
	uint64_t x376 = 190986709158LLU;
	uint64_t t88 = 711LLU;

	t88 = (((x373<x374)<x375)/x376);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x378 = UINT8_MAX;
	volatile uint8_t x379 = 1U;
	uint64_t x380 = 100918480LLU;
	static uint64_t t89 = 0LLU;

	t89 = (((x377<x378)<x379)/x380);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = -1;
	static int32_t x382 = -180184;
	volatile int8_t x383 = INT8_MAX;
	int64_t x384 = INT64_MIN;

	t90 = (((x381<x382)<x383)/x384);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x385 = INT64_MIN;
	int32_t x386 = INT32_MIN;
	volatile uint16_t x387 = UINT16_MAX;
	static int16_t x388 = INT16_MIN;

	t91 = (((x385<x386)<x387)/x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x389 = INT64_MIN;
	uint16_t x390 = 21865U;
	int16_t x391 = -14;
	int8_t x392 = INT8_MAX;
	volatile int32_t t92 = 13709;

	t92 = (((x389<x390)<x391)/x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x395 = INT64_MAX;
	uint32_t x396 = UINT32_MAX;
	static volatile uint32_t t93 = 18U;

	t93 = (((x393<x394)<x395)/x396);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = INT64_MIN;
	uint64_t x398 = 8217741025334LLU;
	volatile int64_t x399 = INT64_MIN;
	int16_t x400 = 6771;

	t94 = (((x397<x398)<x399)/x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x402 = 469285299331457606LL;
	volatile int8_t x403 = -26;
	int8_t x404 = INT8_MIN;
	int32_t t95 = -1;

	t95 = (((x401<x402)<x403)/x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x409 = INT8_MAX;
	uint32_t x410 = 40U;
	int8_t x411 = INT8_MAX;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t96 = -3232;

	t96 = (((x409<x410)<x411)/x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x413 = INT64_MIN;
	int32_t x414 = 913162694;
	int8_t x416 = INT8_MAX;

	t97 = (((x413<x414)<x415)/x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x417 = 1843015225LL;
	int16_t x418 = INT16_MAX;
	static volatile int8_t x419 = INT8_MIN;
	static volatile int16_t x420 = -7;
	volatile int32_t t98 = 0;

	t98 = (((x417<x418)<x419)/x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = 46143944531LL;
	uint8_t x422 = 20U;
	volatile int16_t x423 = -1;
	int16_t x424 = -31;
	volatile int32_t t99 = -4;

	t99 = (((x421<x422)<x423)/x424);

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

