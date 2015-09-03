#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = INT16_MIN;
int32_t x12 = INT32_MIN;
int32_t x16 = INT32_MAX;
int32_t t3 = 3;
int64_t x20 = -92850LL;
uint64_t x23 = 8LLU;
volatile int8_t x24 = 15;
int64_t x27 = 11242100619LL;
static volatile int32_t t6 = 892;
static int32_t t7 = 12938;
volatile int16_t x34 = -39;
volatile int8_t x39 = -25;
uint8_t x42 = UINT8_MAX;
static volatile int32_t t10 = 2791592;
int64_t x46 = INT64_MAX;
volatile int32_t t11 = 14680221;
int8_t x51 = -1;
volatile int32_t t13 = -78593947;
int32_t x62 = -56;
uint8_t x65 = UINT8_MAX;
int8_t x69 = INT8_MAX;
int64_t x70 = 20742517LL;
volatile uint32_t x76 = 3416U;
uint64_t x87 = UINT64_MAX;
uint64_t x89 = UINT64_MAX;
int32_t x90 = INT32_MAX;
uint32_t x92 = UINT32_MAX;
static volatile int32_t t23 = -60;
volatile int8_t x106 = -1;
uint8_t x107 = UINT8_MAX;
int32_t x110 = -1;
uint8_t x112 = 19U;
volatile int64_t x114 = -1LL;
int8_t x126 = -1;
static int16_t x132 = 3;
uint16_t x135 = UINT16_MAX;
int32_t x141 = -986111;
int8_t x145 = INT8_MAX;
int64_t x167 = INT64_MAX;
int32_t x175 = 12448;
volatile uint32_t x176 = 69089893U;
uint8_t x177 = UINT8_MAX;
uint32_t x179 = UINT32_MAX;
int32_t t42 = 1898911;
uint16_t x182 = 2U;
int16_t x183 = INT16_MAX;
uint32_t x185 = 32U;
int32_t x186 = -197705552;
uint8_t x192 = 9U;
int8_t x196 = INT8_MIN;
volatile int8_t x214 = -1;
static int8_t x217 = 17;
int64_t x218 = -1LL;
volatile int32_t t54 = -2145;
int32_t x238 = INT32_MAX;
uint64_t x239 = 281403206059000LLU;
static int64_t x240 = INT64_MIN;
int64_t x253 = 6125987757LL;
int8_t x256 = -7;
volatile int32_t t60 = -108;
int8_t x266 = INT8_MIN;
uint64_t x276 = UINT64_MAX;
int32_t t64 = -131330086;
volatile int32_t t66 = 0;
uint32_t x289 = UINT32_MAX;
uint8_t x294 = 66U;
volatile int32_t t68 = 1;
int32_t x299 = INT32_MAX;
int32_t t69 = 1;
int8_t x315 = INT8_MAX;
int32_t x321 = 1;
volatile int32_t t75 = -417;
static int64_t x333 = 209087041491LL;
int32_t t81 = -1282;
volatile uint32_t x349 = 589601U;
volatile int8_t x352 = INT8_MAX;
static int8_t x364 = INT8_MIN;
static int32_t t85 = 132697225;
int32_t x371 = -19607;
int32_t x372 = INT32_MIN;
uint64_t x375 = UINT64_MAX;
int32_t t88 = 7165;
uint16_t x380 = UINT16_MAX;
uint16_t x382 = 10614U;
uint32_t x386 = 84887U;
volatile int32_t x387 = -38;
int16_t x388 = INT16_MAX;
int32_t x389 = INT32_MIN;
int16_t x392 = -1182;
volatile int32_t t94 = 9;
int32_t t96 = 1941911;
volatile int8_t x411 = INT8_MIN;


void f0(void) {
	static int8_t x1 = 9;
	volatile uint64_t x2 = 118345017915407670LLU;
	int64_t x3 = INT64_MIN;
	static uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -448301866;

	t0 = ((x1<x2)==(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MAX;
	volatile int16_t x7 = -7;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -9;

	t1 = ((x5<x6)==(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = -3;
	volatile uint8_t x11 = UINT8_MAX;
	int32_t t2 = 36685866;

	t2 = ((x9<x10)==(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 8U;
	static volatile uint64_t x14 = UINT64_MAX;
	volatile uint32_t x15 = 13U;

	t3 = ((x13<x14)==(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint64_t x18 = 189180681839140LLU;
	static uint64_t x19 = 21327LLU;
	volatile int32_t t4 = 62;

	t4 = ((x17<x18)==(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 1961727253LLU;
	int8_t x22 = INT8_MAX;
	int32_t t5 = -367772;

	t5 = ((x21<x22)==(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 30677U;
	int8_t x26 = INT8_MIN;
	int8_t x28 = INT8_MAX;

	t6 = ((x25<x26)==(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	volatile int8_t x30 = -1;
	volatile int64_t x31 = -1LL;
	uint32_t x32 = 53946067U;

	t7 = ((x29<x30)==(x31/x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -12192LL;
	static int16_t x35 = INT16_MIN;
	int32_t x36 = 16061837;
	volatile int32_t t8 = 1987718;

	t8 = ((x33<x34)==(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	uint8_t x38 = 0U;
	static int8_t x40 = -20;
	volatile int32_t t9 = 273395829;

	t9 = ((x37<x38)==(x39/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 2U;
	volatile int16_t x43 = INT16_MAX;
	volatile uint64_t x44 = 1108472557209146416LLU;

	t10 = ((x41<x42)==(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int32_t x47 = -281036392;
	int64_t x48 = INT64_MIN;

	t11 = ((x45<x46)==(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 5473917;
	static int8_t x50 = INT8_MAX;
	volatile int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -83166316;

	t12 = ((x49<x50)==(x51/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 120940184LLU;
	uint8_t x54 = 1U;
	int8_t x55 = 8;
	int16_t x56 = 54;

	t13 = ((x53<x54)==(x55/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MIN;
	static int8_t x58 = INT8_MAX;
	int32_t x59 = INT32_MIN;
	int32_t x60 = 28087;
	static int32_t t14 = 3;

	t14 = ((x57<x58)==(x59/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int64_t x63 = -575968075610441621LL;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -9;

	t15 = ((x61<x62)==(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = UINT32_MAX;
	static volatile int64_t x67 = INT64_MAX;
	int32_t x68 = -3542;
	static volatile int32_t t16 = 1;

	t16 = ((x65<x66)==(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x71 = INT16_MIN;
	static int16_t x72 = INT16_MAX;
	int32_t t17 = 40211;

	t17 = ((x69<x70)==(x71/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -122;
	int8_t x74 = -1;
	int16_t x75 = -131;
	volatile int32_t t18 = 7128984;

	t18 = ((x73<x74)==(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	static int16_t x78 = INT16_MIN;
	volatile int32_t x79 = INT32_MAX;
	volatile uint16_t x80 = 1842U;
	volatile int32_t t19 = -126711236;

	t19 = ((x77<x78)==(x79/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	static int64_t x82 = -1LL;
	volatile int8_t x83 = INT8_MAX;
	volatile int8_t x84 = INT8_MIN;
	static int32_t t20 = -163;

	t20 = ((x81<x82)==(x83/x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -1LL;
	uint8_t x86 = UINT8_MAX;
	uint32_t x88 = 2U;
	static volatile int32_t t21 = 5966112;

	t21 = ((x85<x86)==(x87/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x91 = -47;
	int32_t t22 = 16263912;

	t22 = ((x89<x90)==(x91/x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	uint8_t x94 = UINT8_MAX;
	int16_t x95 = INT16_MIN;
	volatile int32_t x96 = -1;

	t23 = ((x93<x94)==(x95/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x97 = -14257201;
	int64_t x98 = -1LL;
	volatile uint16_t x99 = 0U;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 292;

	t24 = ((x97<x98)==(x99/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 392U;
	uint8_t x108 = UINT8_MAX;
	int32_t t25 = 5;

	t25 = ((x105<x106)==(x107/x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x109 = INT64_MIN;
	volatile int16_t x111 = -634;
	volatile int32_t t26 = -10011777;

	t26 = ((x109<x110)==(x111/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x113 = -3234778LL;
	int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MIN;
	static volatile int32_t t27 = -125000174;

	t27 = ((x113<x114)==(x115/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = 12U;
	uint64_t x122 = 3506586503LLU;
	int32_t x123 = -1;
	int32_t x124 = INT32_MIN;
	int32_t t28 = 12;

	t28 = ((x121<x122)==(x123/x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = 0;
	int8_t x127 = INT8_MIN;
	uint32_t x128 = 45706U;
	static int32_t t29 = -3;

	t29 = ((x125<x126)==(x127/x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x129 = -1;
	uint64_t x130 = UINT64_MAX;
	volatile uint8_t x131 = 11U;
	volatile int32_t t30 = 1238586;

	t30 = ((x129<x130)==(x131/x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	static int16_t x134 = INT16_MIN;
	int64_t x136 = INT64_MAX;
	int32_t t31 = -1849982;

	t31 = ((x133<x134)==(x135/x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = -1;
	static int16_t x138 = -1;
	static int32_t x139 = INT32_MAX;
	int32_t x140 = INT32_MAX;
	volatile int32_t t32 = -3539857;

	t32 = ((x137<x138)==(x139/x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x142 = -1LL;
	uint32_t x143 = 302U;
	int8_t x144 = -8;
	static int32_t t33 = 266;

	t33 = ((x141<x142)==(x143/x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x146 = -1;
	int16_t x147 = INT16_MIN;
	static int64_t x148 = INT64_MIN;
	int32_t t34 = 35891;

	t34 = ((x145<x146)==(x147/x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x149 = 11U;
	static volatile int16_t x150 = 1;
	static volatile int64_t x151 = 245677570LL;
	uint8_t x152 = UINT8_MAX;
	static volatile int32_t t35 = 1570817;

	t35 = ((x149<x150)==(x151/x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x153 = -1;
	uint8_t x154 = 27U;
	uint16_t x155 = UINT16_MAX;
	uint32_t x156 = 255582U;
	int32_t t36 = 105977787;

	t36 = ((x153<x154)==(x155/x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x157 = 6U;
	volatile int64_t x158 = INT64_MIN;
	int8_t x159 = -1;
	uint8_t x160 = 13U;
	volatile int32_t t37 = 14;

	t37 = ((x157<x158)==(x159/x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = 28194357838LL;
	volatile uint8_t x162 = UINT8_MAX;
	static volatile int16_t x163 = INT16_MIN;
	int32_t x164 = -8482;
	int32_t t38 = -32;

	t38 = ((x161<x162)==(x163/x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x165 = 70U;
	static int32_t x166 = INT32_MIN;
	static volatile int16_t x168 = INT16_MAX;
	volatile int32_t t39 = -70288143;

	t39 = ((x165<x166)==(x167/x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = UINT32_MAX;
	static int8_t x170 = -1;
	static uint64_t x171 = UINT64_MAX;
	static int8_t x172 = INT8_MAX;
	int32_t t40 = -4;

	t40 = ((x169<x170)==(x171/x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x173 = INT32_MAX;
	static int32_t x174 = 29658345;
	static volatile int32_t t41 = 79;

	t41 = ((x173<x174)==(x175/x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x178 = -1;
	uint32_t x180 = UINT32_MAX;

	t42 = ((x177<x178)==(x179/x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 9U;
	int32_t x184 = -1;
	int32_t t43 = 1;

	t43 = ((x181<x182)==(x183/x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x187 = -86880943716411LL;
	int64_t x188 = 7136064LL;
	int32_t t44 = -31;

	t44 = ((x185<x186)==(x187/x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x189 = INT32_MAX;
	volatile uint8_t x190 = 2U;
	int64_t x191 = 949806615396LL;
	int32_t t45 = 1682;

	t45 = ((x189<x190)==(x191/x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x193 = 0;
	int8_t x194 = -6;
	int32_t x195 = INT32_MIN;
	static int32_t t46 = 38;

	t46 = ((x193<x194)==(x195/x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x197 = UINT32_MAX;
	uint32_t x198 = 67276717U;
	int64_t x199 = 0LL;
	static volatile int32_t x200 = INT32_MIN;
	int32_t t47 = 8354;

	t47 = ((x197<x198)==(x199/x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = 1;
	static uint32_t x203 = 32084771U;
	uint64_t x204 = 2286904638471067670LLU;
	int32_t t48 = 0;

	t48 = ((x201<x202)==(x203/x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x209 = 31U;
	static uint64_t x210 = 398761710452570LLU;
	volatile int16_t x211 = 1;
	volatile int64_t x212 = INT64_MIN;
	volatile int32_t t49 = 21105247;

	t49 = ((x209<x210)==(x211/x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = 4;
	int8_t x215 = -14;
	int64_t x216 = -1LL;
	static int32_t t50 = -2043968;

	t50 = ((x213<x214)==(x215/x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x219 = INT32_MIN;
	uint64_t x220 = UINT64_MAX;
	static int32_t t51 = 1182;

	t51 = ((x217<x218)==(x219/x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 321859297610274LLU;
	volatile uint64_t x226 = 4344145376324065LLU;
	volatile int8_t x227 = 1;
	int16_t x228 = INT16_MIN;
	volatile int32_t t52 = 1;

	t52 = ((x225<x226)==(x227/x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x229 = INT8_MAX;
	int64_t x230 = 108263LL;
	volatile uint8_t x231 = UINT8_MAX;
	volatile uint64_t x232 = 854745563566551410LLU;
	int32_t t53 = 4;

	t53 = ((x229<x230)==(x231/x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = INT64_MAX;
	uint8_t x234 = UINT8_MAX;
	int32_t x235 = INT32_MIN;
	volatile int8_t x236 = INT8_MAX;

	t54 = ((x233<x234)==(x235/x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x237 = 773;
	int32_t t55 = -436;

	t55 = ((x237<x238)==(x239/x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MIN;
	volatile int32_t x242 = 3962760;
	uint8_t x243 = 1U;
	uint64_t x244 = UINT64_MAX;
	int32_t t56 = 3;

	t56 = ((x241<x242)==(x243/x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 94U;
	uint64_t x246 = 1033540649300032463LLU;
	int64_t x247 = -1LL;
	static volatile int16_t x248 = INT16_MAX;
	volatile int32_t t57 = 27217723;

	t57 = ((x245<x246)==(x247/x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = INT32_MAX;
	static int16_t x250 = INT16_MAX;
	int32_t x251 = INT32_MAX;
	int8_t x252 = -1;
	int32_t t58 = -51813;

	t58 = ((x249<x250)==(x251/x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x254 = 196U;
	volatile int16_t x255 = 6;
	volatile int32_t t59 = -169926;

	t59 = ((x253<x254)==(x255/x256));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x257 = UINT64_MAX;
	int16_t x258 = 1343;
	static int64_t x259 = 1691248164441822LL;
	int8_t x260 = INT8_MIN;

	t60 = ((x257<x258)==(x259/x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = INT64_MAX;
	int16_t x262 = INT16_MAX;
	volatile uint32_t x263 = 8292291U;
	int32_t x264 = INT32_MAX;
	static int32_t t61 = -32326;

	t61 = ((x261<x262)==(x263/x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = 444094800712167LL;
	static volatile int16_t x267 = -1;
	static int64_t x268 = -1418795505892359418LL;
	static int32_t t62 = 6;

	t62 = ((x265<x266)==(x267/x268));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 108U;
	static int16_t x274 = 409;
	uint64_t x275 = 454LLU;
	volatile int32_t t63 = -35114;

	t63 = ((x273<x274)==(x275/x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x277 = UINT32_MAX;
	int8_t x278 = INT8_MIN;
	uint32_t x279 = UINT32_MAX;
	int64_t x280 = -1LL;

	t64 = ((x277<x278)==(x279/x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = INT8_MIN;
	int32_t x282 = -1;
	uint64_t x283 = UINT64_MAX;
	volatile int8_t x284 = -1;
	int32_t t65 = 21752;

	t65 = ((x281<x282)==(x283/x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MAX;
	static int64_t x286 = -1LL;
	uint32_t x287 = 2010869U;
	static int8_t x288 = -1;

	t66 = ((x285<x286)==(x287/x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x290 = 9U;
	static int16_t x291 = INT16_MAX;
	uint16_t x292 = 1U;
	int32_t t67 = -203938;

	t67 = ((x289<x290)==(x291/x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x293 = UINT64_MAX;
	static int16_t x295 = INT16_MIN;
	int16_t x296 = INT16_MIN;

	t68 = ((x293<x294)==(x295/x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x297 = 2U;
	int8_t x298 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;

	t69 = ((x297<x298)==(x299/x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = INT8_MIN;
	int64_t x302 = -1LL;
	static int16_t x303 = 3170;
	int32_t x304 = 2163065;
	static volatile int32_t t70 = 20437;

	t70 = ((x301<x302)==(x303/x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x305 = INT16_MAX;
	int16_t x306 = -1;
	uint16_t x307 = 434U;
	uint64_t x308 = 13LLU;
	int32_t t71 = -1507;

	t71 = ((x305<x306)==(x307/x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = -1;
	volatile int32_t x310 = INT32_MIN;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = -1;
	volatile int32_t t72 = 2;

	t72 = ((x309<x310)==(x311/x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x313 = 4644613021031872LLU;
	int8_t x314 = -1;
	int64_t x316 = INT64_MIN;
	int32_t t73 = 3966;

	t73 = ((x313<x314)==(x315/x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = 3446020LL;
	int64_t x318 = 38LL;
	static int32_t x319 = -23;
	int64_t x320 = -1LL;
	volatile int32_t t74 = 24785;

	t74 = ((x317<x318)==(x319/x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x322 = UINT8_MAX;
	int16_t x323 = INT16_MIN;
	volatile int32_t x324 = -31;

	t75 = ((x321<x322)==(x323/x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x325 = -1294;
	int8_t x326 = INT8_MIN;
	volatile uint16_t x327 = 41U;
	int64_t x328 = INT64_MAX;
	volatile int32_t t76 = -11887505;

	t76 = ((x325<x326)==(x327/x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = 15;
	uint8_t x330 = UINT8_MAX;
	uint64_t x331 = 607951661LLU;
	volatile int8_t x332 = -4;
	volatile int32_t t77 = 109590749;

	t77 = ((x329<x330)==(x331/x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x334 = INT64_MAX;
	volatile int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MAX;
	int32_t t78 = 1221280;

	t78 = ((x333<x334)==(x335/x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x337 = 31U;
	int8_t x338 = 3;
	volatile int32_t x339 = 3555;
	int8_t x340 = -1;
	int32_t t79 = 1700077;

	t79 = ((x337<x338)==(x339/x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MIN;
	uint64_t x342 = 26442688LLU;
	uint16_t x343 = 963U;
	int64_t x344 = INT64_MIN;
	volatile int32_t t80 = 1342;

	t80 = ((x341<x342)==(x343/x344));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x345 = INT32_MAX;
	static int32_t x346 = 63226;
	int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MIN;

	t81 = ((x345<x346)==(x347/x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x350 = INT8_MAX;
	int16_t x351 = -1;
	static volatile int32_t t82 = -15;

	t82 = ((x349<x350)==(x351/x352));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x353 = INT64_MIN;
	volatile int32_t x354 = INT32_MAX;
	int8_t x355 = 1;
	int64_t x356 = -1LL;
	static int32_t t83 = 1046160;

	t83 = ((x353<x354)==(x355/x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x357 = 54U;
	volatile uint8_t x358 = UINT8_MAX;
	int16_t x359 = 1;
	int8_t x360 = -1;
	volatile int32_t t84 = 389;

	t84 = ((x357<x358)==(x359/x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = INT64_MIN;
	int16_t x362 = 0;
	int64_t x363 = -37696LL;

	t85 = ((x361<x362)==(x363/x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = 231401185360873LL;
	int32_t x366 = 3065021;
	int16_t x367 = 2481;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t86 = 79;

	t86 = ((x365<x366)==(x367/x368));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x369 = 0;
	int8_t x370 = INT8_MAX;
	static int32_t t87 = 14310;

	t87 = ((x369<x370)==(x371/x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x373 = UINT64_MAX;
	static int8_t x374 = INT8_MIN;
	volatile uint64_t x376 = UINT64_MAX;

	t88 = ((x373<x374)==(x375/x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = INT64_MIN;
	static volatile int8_t x378 = INT8_MIN;
	static volatile int8_t x379 = -24;
	int32_t t89 = -969;

	t89 = ((x377<x378)==(x379/x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x381 = 33U;
	volatile int16_t x383 = -1;
	int32_t x384 = INT32_MIN;
	int32_t t90 = -26;

	t90 = ((x381<x382)==(x383/x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x385 = INT64_MIN;
	static int32_t t91 = -3;

	t91 = ((x385<x386)==(x387/x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x390 = -42;
	uint8_t x391 = UINT8_MAX;
	volatile int32_t t92 = -57489;

	t92 = ((x389<x390)==(x391/x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x393 = -1;
	volatile uint16_t x394 = 30580U;
	volatile int8_t x395 = -1;
	int32_t x396 = -1;
	volatile int32_t t93 = -7;

	t93 = ((x393<x394)==(x395/x396));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x397 = 360356090765933681LL;
	static int8_t x398 = 52;
	volatile int16_t x399 = INT16_MIN;
	volatile uint16_t x400 = 3116U;

	t94 = ((x397<x398)==(x399/x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = 0;
	volatile int8_t x402 = INT8_MIN;
	uint8_t x403 = 1U;
	static int64_t x404 = -1LL;
	static volatile int32_t t95 = -1;

	t95 = ((x401<x402)==(x403/x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x405 = -1;
	volatile uint8_t x406 = 32U;
	int64_t x407 = 929LL;
	volatile int32_t x408 = -575809;

	t96 = ((x405<x406)==(x407/x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = -1;
	int8_t x410 = -1;
	volatile int64_t x412 = INT64_MIN;
	static int32_t t97 = 839830670;

	t97 = ((x409<x410)==(x411/x412));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = 311;
	int32_t x414 = 100942;
	static int16_t x415 = -4767;
	int64_t x416 = INT64_MAX;
	int32_t t98 = -93957408;

	t98 = ((x413<x414)==(x415/x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = INT64_MIN;
	volatile int32_t x418 = -1;
	volatile int16_t x419 = 1;
	uint16_t x420 = 1069U;
	volatile int32_t t99 = -35579201;

	t99 = ((x417<x418)==(x419/x420));

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

