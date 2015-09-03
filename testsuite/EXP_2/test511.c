#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
int16_t x7 = INT16_MIN;
static int64_t x13 = 1074552LL;
int64_t t2 = 216010147LL;
static int16_t x17 = INT16_MIN;
int32_t x19 = 63;
static uint32_t x21 = 349U;
volatile int16_t x29 = 1;
int16_t x31 = INT16_MIN;
uint64_t x33 = 922726985945733LLU;
uint16_t x40 = 2U;
uint64_t t9 = 96450368717592362LLU;
int8_t x52 = -1;
static int8_t x53 = -1;
uint64_t x54 = 1305LLU;
uint8_t x57 = 14U;
int8_t x58 = INT8_MAX;
static volatile int32_t x63 = -1;
int32_t x72 = INT32_MIN;
int32_t t14 = -934881425;
static uint64_t x74 = UINT64_MAX;
int32_t x78 = -1;
uint16_t x84 = UINT16_MAX;
int8_t x88 = -1;
int32_t x90 = -1;
int64_t x93 = -1LL;
volatile int64_t t20 = 23525944063827686LL;
int16_t x103 = -19;
static int8_t x105 = -1;
static uint16_t x121 = UINT16_MAX;
uint16_t x123 = UINT16_MAX;
static uint64_t x130 = 882061464123LLU;
volatile uint64_t t29 = 42309269362LLU;
int32_t x133 = -100;
int32_t t31 = 0;
volatile int32_t x141 = -212157;
static int64_t t35 = 22444LL;
int64_t x161 = -265340500207582342LL;
uint8_t x166 = UINT8_MAX;
volatile int32_t x182 = -1;
static int16_t x191 = INT16_MAX;
int8_t x193 = INT8_MIN;
uint16_t x195 = 225U;
static int16_t x196 = -6852;
uint64_t x204 = UINT64_MAX;
volatile int32_t x209 = INT32_MAX;
static int32_t x216 = 91547685;
int32_t t49 = 631650801;
volatile int32_t t52 = 741;
int32_t x241 = -3809;
static uint32_t x242 = UINT32_MAX;
static int64_t x246 = -1LL;
volatile int64_t t54 = 40770LL;
uint8_t x264 = 120U;
int64_t t60 = -6418231185LL;
static int64_t x275 = INT64_MIN;
int32_t x276 = -1;
static int8_t x282 = INT8_MIN;
int32_t t64 = -4;
uint64_t x289 = 225627LLU;
static uint32_t x299 = 5U;
int32_t x302 = INT32_MAX;
int32_t x304 = INT32_MIN;
uint64_t x305 = 29314238LLU;
volatile uint64_t t68 = 59LLU;
volatile int64_t t69 = 1060600499246069161LL;
int16_t x317 = -1;
static uint64_t t71 = 35681967881687LLU;
int16_t x330 = INT16_MIN;
int64_t x332 = INT64_MAX;
static uint32_t x334 = UINT32_MAX;
uint8_t x336 = 16U;
uint64_t x337 = UINT64_MAX;
uint64_t x338 = 8547113680988698LLU;
static volatile uint64_t t76 = 5042569388085LLU;
volatile uint64_t x344 = 151661458LLU;
uint8_t x348 = 1U;
uint8_t x352 = UINT8_MAX;
uint32_t x359 = 266603608U;
uint32_t t81 = 56018711U;
uint16_t x364 = 2U;
uint8_t x367 = 17U;
uint64_t x371 = UINT64_MAX;
int64_t x373 = -644854LL;
int32_t x378 = INT32_MAX;
static uint64_t x379 = 1968153960947828LLU;
int64_t t87 = 340493319299LL;
int8_t x389 = INT8_MIN;
int64_t t92 = 12LL;
int16_t x409 = INT16_MAX;
int64_t x419 = 6418961991541101LL;
int32_t x420 = 287130560;
int64_t t95 = 16467660LL;
int64_t x424 = INT64_MIN;
volatile int64_t x428 = -63603872317400LL;
static volatile uint64_t t98 = 50LLU;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	volatile int16_t x3 = -1;
	volatile int16_t x4 = -1;
	static uint64_t t0 = 17175234929947589LLU;

	t0 = ((x1+(x2/x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MAX;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 202016974U;

	t1 = ((x5+(x6/x7))/x8);

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x14 = INT32_MAX;
	uint8_t x15 = UINT8_MAX;
	volatile uint32_t x16 = 1972822U;

	t2 = ((x13+(x14/x15))/x16);

	if (t2 != 4LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x18 = UINT16_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t3 = -1;

	t3 = ((x17+(x18/x19))/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x22 = UINT8_MAX;
	static int16_t x23 = INT16_MIN;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t4 = 7686551U;

	t4 = ((x21+(x22/x23))/x24);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = UINT32_MAX;
	static int64_t x26 = -5524182415017413LL;
	uint16_t x27 = 478U;
	static uint8_t x28 = 17U;
	int64_t t5 = 1465636941339LL;

	t5 = ((x25+(x26/x27))/x28);

	if (t5 != -679563059395LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x30 = INT16_MIN;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t6 = 8791419437690884LL;

	t6 = ((x29+(x30/x31))/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MIN;
	int32_t x35 = INT32_MIN;
	int64_t x36 = -1LL;
	volatile uint64_t t7 = 3550LLU;

	t7 = ((x33+(x34/x35))/x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x37 = 341U;
	int16_t x38 = -1;
	int16_t x39 = INT16_MAX;
	volatile int32_t t8 = 1;

	t8 = ((x37+(x38/x39))/x40);

	if (t8 != 170) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = INT16_MIN;
	uint64_t x46 = UINT64_MAX;
	int64_t x47 = -1LL;
	int8_t x48 = 1;

	t9 = ((x45+(x46/x47))/x48);

	if (t9 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 10489;
	volatile uint16_t x50 = 6U;
	int32_t x51 = -11;
	int32_t t10 = -38;

	t10 = ((x49+(x50/x51))/x52);

	if (t10 != -10489) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x55 = INT64_MIN;
	uint16_t x56 = UINT16_MAX;
	volatile uint64_t t11 = 7113092060382LLU;

	t11 = ((x53+(x54/x55))/x56);

	if (t11 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x59 = UINT8_MAX;
	static volatile int16_t x60 = -1;
	int32_t t12 = 2524756;

	t12 = ((x57+(x58/x59))/x60);

	if (t12 != -14) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MAX;
	volatile int32_t x62 = -1;
	volatile int16_t x64 = -1;
	volatile int32_t t13 = 2755;

	t13 = ((x61+(x62/x63))/x64);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	int16_t x70 = INT16_MAX;
	int8_t x71 = INT8_MAX;

	t14 = ((x69+(x70/x71))/x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	int8_t x75 = -63;
	static uint32_t x76 = UINT32_MAX;
	uint64_t t15 = 1053453LLU;

	t15 = ((x73+(x74/x75))/x76);

	if (t15 != 4294967296LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x77 = UINT64_MAX;
	static int8_t x79 = INT8_MIN;
	int8_t x80 = -1;
	volatile uint64_t t16 = 135814305947982380LLU;

	t16 = ((x77+(x78/x79))/x80);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 2U;
	uint64_t x82 = UINT64_MAX;
	static int8_t x83 = INT8_MIN;
	uint64_t t17 = 2306869LLU;

	t17 = ((x81+(x82/x83))/x84);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 5U;
	int64_t x86 = -84LL;
	int32_t x87 = 47;
	int64_t t18 = -21103LL;

	t18 = ((x85+(x86/x87))/x88);

	if (t18 != -4LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MAX;
	static int32_t x91 = INT32_MIN;
	static int32_t x92 = INT32_MIN;
	int64_t t19 = 23LL;

	t19 = ((x89+(x90/x91))/x92);

	if (t19 != -4294967295LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x94 = 10460564U;
	static int32_t x95 = INT32_MAX;
	uint16_t x96 = 25U;

	t20 = ((x93+(x94/x95))/x96);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = UINT64_MAX;
	static int16_t x98 = INT16_MIN;
	static int8_t x99 = INT8_MIN;
	volatile uint32_t x100 = 3U;
	static uint64_t t21 = 3609738LLU;

	t21 = ((x97+(x98/x99))/x100);

	if (t21 != 85LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 463353567508211LLU;
	int8_t x102 = -1;
	int32_t x104 = INT32_MIN;
	static volatile uint64_t t22 = 2LLU;

	t22 = ((x101+(x102/x103))/x104);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x106 = INT64_MAX;
	int32_t x107 = INT32_MIN;
	static int32_t x108 = 3446;
	volatile int64_t t23 = -427LL;

	t23 = ((x105+(x106/x107))/x108);

	if (t23 != -1246363LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	int32_t x110 = 814545800;
	int8_t x111 = INT8_MIN;
	int32_t x112 = 26745772;
	volatile int32_t t24 = -486994068;

	t24 = ((x109+(x110/x111))/x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 2U;
	int32_t x114 = INT32_MIN;
	int32_t x115 = 17;
	int16_t x116 = -1;
	int32_t t25 = 4904;

	t25 = ((x113+(x114/x115))/x116);

	if (t25 != 126322565) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 3U;
	int64_t x118 = -371534858LL;
	int64_t x119 = INT64_MIN;
	uint32_t x120 = 248614U;
	int64_t t26 = -1118085399736062LL;

	t26 = ((x117+(x118/x119))/x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x122 = UINT64_MAX;
	volatile int8_t x124 = 6;
	static volatile uint64_t t27 = 21570LLU;

	t27 = ((x121+(x122/x123))/x124);

	if (t27 != 46913211968170LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MIN;
	volatile uint64_t x126 = UINT64_MAX;
	int32_t x127 = -1;
	static int8_t x128 = -1;
	volatile uint64_t t28 = 30452LLU;

	t28 = ((x125+(x126/x127))/x128);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 1U;
	int8_t x131 = INT8_MIN;
	uint64_t x132 = 716544LLU;

	t29 = ((x129+(x130/x131))/x132);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x134 = UINT64_MAX;
	static uint8_t x135 = 110U;
	int32_t x136 = INT32_MIN;
	uint64_t t30 = 839702525LLU;

	t30 = ((x133+(x134/x135))/x136);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MAX;
	int32_t x138 = INT32_MAX;
	uint8_t x139 = UINT8_MAX;
	int8_t x140 = -1;

	t31 = ((x137+(x138/x139))/x140);

	if (t31 != -8454271) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x142 = 1026446U;
	static int64_t x143 = -1LL;
	static int32_t x144 = INT32_MIN;
	static volatile int64_t t32 = -568441LL;

	t32 = ((x141+(x142/x143))/x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x145 = 0U;
	int64_t x146 = -2891735584LL;
	volatile uint64_t x147 = 3072108248499LLU;
	static int32_t x148 = INT32_MIN;
	uint64_t t33 = 208351149LLU;

	t33 = ((x145+(x146/x147))/x148);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MIN;
	uint32_t x150 = 152366U;
	volatile uint64_t x151 = UINT64_MAX;
	volatile uint8_t x152 = 2U;
	static uint64_t t34 = 693LLU;

	t34 = ((x149+(x150/x151))/x152);

	if (t34 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = -1;
	uint32_t x154 = 916U;
	int64_t x155 = INT64_MAX;
	static uint8_t x156 = 21U;

	t35 = ((x153+(x154/x155))/x156);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 0U;
	volatile int64_t x158 = 3671061604LL;
	int16_t x159 = INT16_MIN;
	volatile int8_t x160 = -1;
	int64_t t36 = -4LL;

	t36 = ((x157+(x158/x159))/x160);

	if (t36 != 112031LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x162 = -4651LL;
	int8_t x163 = INT8_MAX;
	static volatile uint8_t x164 = 1U;
	volatile int64_t t37 = -54205575LL;

	t37 = ((x161+(x162/x163))/x164);

	if (t37 != -265340500207582378LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x165 = INT16_MAX;
	uint8_t x167 = UINT8_MAX;
	volatile uint32_t x168 = UINT32_MAX;
	uint32_t t38 = 121U;

	t38 = ((x165+(x166/x167))/x168);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x169 = INT32_MIN;
	static int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MAX;
	volatile int8_t x172 = -1;
	volatile int64_t t39 = -18071836LL;

	t39 = ((x169+(x170/x171))/x172);

	if (t39 != 2147483649LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x173 = INT8_MAX;
	static int32_t x174 = INT32_MAX;
	int64_t x175 = -1LL;
	int32_t x176 = 22094;
	static int64_t t40 = 37737254LL;

	t40 = ((x173+(x174/x175))/x176);

	if (t40 != -97197LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 7U;
	volatile uint32_t x178 = 54717U;
	int32_t x179 = -1;
	volatile int32_t x180 = INT32_MAX;
	static volatile uint32_t t41 = 1U;

	t41 = ((x177+(x178/x179))/x180);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MIN;
	int32_t x183 = 1;
	static int8_t x184 = INT8_MAX;
	int32_t t42 = -19172361;

	t42 = ((x181+(x182/x183))/x184);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = -23194499LL;
	uint64_t x186 = 164235857LLU;
	uint32_t x187 = 3U;
	int32_t x188 = -10115323;
	volatile uint64_t t43 = 2475895167328937LLU;

	t43 = ((x185+(x186/x187))/x188);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 39462162605LLU;
	volatile uint64_t x190 = 133206478LLU;
	static int8_t x192 = INT8_MIN;
	volatile uint64_t t44 = 3279450300254616LLU;

	t44 = ((x189+(x190/x191))/x192);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x194 = INT64_MAX;
	volatile int64_t t45 = 20091LL;

	t45 = ((x193+(x194/x195))/x196);

	if (t45 != -5982598454209LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 1520543LLU;
	int8_t x198 = INT8_MAX;
	int16_t x199 = 2;
	volatile int64_t x200 = -4072837669145564LL;
	volatile uint64_t t46 = 101783967685442LLU;

	t46 = ((x197+(x198/x199))/x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x201 = UINT16_MAX;
	int64_t x202 = INT64_MIN;
	uint8_t x203 = 1U;
	uint64_t t47 = 772526LLU;

	t47 = ((x201+(x202/x203))/x204);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x210 = 2;
	volatile int64_t x211 = INT64_MAX;
	int32_t x212 = INT32_MAX;
	volatile int64_t t48 = -9220LL;

	t48 = ((x209+(x210/x211))/x212);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x213 = 30U;
	int16_t x214 = -1;
	uint16_t x215 = UINT16_MAX;

	t49 = ((x213+(x214/x215))/x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = 1170054525898255089LLU;
	int64_t x222 = INT64_MIN;
	int64_t x223 = -62750845LL;
	int16_t x224 = -1695;
	volatile uint64_t t50 = 1401741685693044824LLU;

	t50 = ((x221+(x222/x223))/x224);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x233 = 79082246939LLU;
	volatile int32_t x234 = -85600602;
	uint64_t x235 = UINT64_MAX;
	static int32_t x236 = INT32_MIN;
	volatile uint64_t t51 = 543580408LLU;

	t51 = ((x233+(x234/x235))/x236);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = -4315;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = -1;
	int16_t x240 = -1;

	t52 = ((x237+(x238/x239))/x240);

	if (t52 != 4570) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x243 = INT32_MAX;
	static int16_t x244 = 4;
	uint32_t t53 = 21U;

	t53 = ((x241+(x242/x243))/x244);

	if (t53 != 1073740872U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = 0;
	static uint8_t x247 = UINT8_MAX;
	volatile int64_t x248 = INT64_MIN;

	t54 = ((x245+(x246/x247))/x248);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x249 = 9U;
	volatile int16_t x250 = INT16_MAX;
	volatile uint8_t x251 = 6U;
	int32_t x252 = -801;
	uint32_t t55 = 106446880U;

	t55 = ((x249+(x250/x251))/x252);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = INT8_MIN;
	static int64_t x254 = -1LL;
	uint8_t x255 = UINT8_MAX;
	volatile int8_t x256 = INT8_MIN;
	int64_t t56 = 210LL;

	t56 = ((x253+(x254/x255))/x256);

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MAX;
	static int64_t x259 = -728672LL;
	volatile int32_t x260 = INT32_MIN;
	volatile int64_t t57 = -40806104920890LL;

	t57 = ((x257+(x258/x259))/x260);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = 897773679LL;
	int16_t x262 = INT16_MIN;
	static int32_t x263 = 247;
	int64_t t58 = 131606621610244LL;

	t58 = ((x261+(x262/x263))/x264);

	if (t58 != 7481446LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x265 = 6242U;
	static volatile int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = 1U;
	volatile uint32_t t59 = 1365U;

	t59 = ((x265+(x266/x267))/x268);

	if (t59 != 6242U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x269 = INT64_MIN;
	uint8_t x270 = 5U;
	uint32_t x271 = UINT32_MAX;
	uint16_t x272 = 2U;

	t60 = ((x269+(x270/x271))/x272);

	if (t60 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x273 = 4U;
	int8_t x274 = -2;
	volatile int64_t t61 = -311314LL;

	t61 = ((x273+(x274/x275))/x276);

	if (t61 != -4LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MIN;
	int8_t x280 = INT8_MAX;
	volatile int64_t t62 = 3LL;

	t62 = ((x277+(x278/x279))/x280);

	if (t62 != 33818382LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x281 = 7U;
	uint64_t x283 = UINT64_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile uint64_t t63 = 133507536219636004LLU;

	t63 = ((x281+(x282/x283))/x284);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = INT16_MIN;
	static volatile uint8_t x286 = 0U;
	static int32_t x287 = INT32_MAX;
	uint16_t x288 = 2134U;

	t64 = ((x285+(x286/x287))/x288);

	if (t64 != -15) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x290 = -1;
	static volatile uint32_t x291 = 36860U;
	static int64_t x292 = -887886222308LL;
	uint64_t t65 = 2794568654457969357LLU;

	t65 = ((x289+(x290/x291))/x292);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x297 = 22U;
	uint16_t x298 = UINT16_MAX;
	volatile uint32_t x300 = 2826U;
	uint32_t t66 = 12U;

	t66 = ((x297+(x298/x299))/x300);

	if (t66 != 4U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x301 = -1;
	static volatile uint64_t x303 = 15398441477080LLU;
	uint64_t t67 = 104644373272665LLU;

	t67 = ((x301+(x302/x303))/x304);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x306 = INT64_MAX;
	int64_t x307 = -488684896833LL;
	uint32_t x308 = 481617U;

	t68 = ((x305+(x306/x307))/x308);

	if (t68 != 21LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x309 = 0U;
	int32_t x310 = INT32_MAX;
	static int64_t x311 = INT64_MAX;
	int64_t x312 = 27960662454418764LL;

	t69 = ((x309+(x310/x311))/x312);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x313 = 7U;
	int8_t x314 = INT8_MAX;
	volatile int8_t x315 = -1;
	int8_t x316 = INT8_MIN;
	static int32_t t70 = -2702;

	t70 = ((x313+(x314/x315))/x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x318 = 59LLU;
	uint64_t x319 = UINT64_MAX;
	static int8_t x320 = INT8_MIN;

	t71 = ((x317+(x318/x319))/x320);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MIN;
	static int16_t x322 = INT16_MIN;
	int16_t x323 = 1;
	int16_t x324 = INT16_MAX;
	volatile int32_t t72 = -728988;

	t72 = ((x321+(x322/x323))/x324);

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = 59701081;
	uint8_t x326 = 57U;
	int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MAX;
	volatile int32_t t73 = 11185637;

	t73 = ((x325+(x326/x327))/x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = 1;
	volatile uint8_t x331 = 40U;
	int64_t t74 = -12118053047727LL;

	t74 = ((x329+(x330/x331))/x332);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = INT64_MAX;
	uint64_t x335 = UINT64_MAX;
	volatile uint64_t t75 = 1LLU;

	t75 = ((x333+(x334/x335))/x336);

	if (t75 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x339 = 38185706U;
	int64_t x340 = -4560232114LL;

	t76 = ((x337+(x338/x339))/x340);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = 3174038U;
	int8_t x342 = INT8_MIN;
	static int32_t x343 = INT32_MIN;
	volatile uint64_t t77 = 310746361582655LLU;

	t77 = ((x341+(x342/x343))/x344);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x345 = 0U;
	volatile int16_t x346 = INT16_MIN;
	int8_t x347 = -18;
	uint32_t t78 = 38U;

	t78 = ((x345+(x346/x347))/x348);

	if (t78 != 1820U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x349 = INT32_MAX;
	volatile int64_t x350 = -1LL;
	volatile uint8_t x351 = UINT8_MAX;
	int64_t t79 = 7370LL;

	t79 = ((x349+(x350/x351))/x352);

	if (t79 != 8421504LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x353 = 205517918972633LLU;
	volatile int8_t x354 = -1;
	int64_t x355 = INT64_MAX;
	uint8_t x356 = 3U;
	uint64_t t80 = 7423731062185477904LLU;

	t80 = ((x353+(x354/x355))/x356);

	if (t80 != 68505972990877LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = INT16_MIN;
	static int8_t x360 = 6;

	t81 = ((x357+(x358/x359))/x360);

	if (t81 != 357913944U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x361 = INT16_MIN;
	int16_t x362 = -1;
	volatile uint16_t x363 = 268U;
	volatile int32_t t82 = 135978538;

	t82 = ((x361+(x362/x363))/x364);

	if (t82 != -16384) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x365 = 7;
	uint64_t x366 = 1939LLU;
	uint16_t x368 = 5U;
	volatile uint64_t t83 = 0LLU;

	t83 = ((x365+(x366/x367))/x368);

	if (t83 != 24LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x369 = INT16_MAX;
	int16_t x370 = INT16_MAX;
	static uint64_t x372 = UINT64_MAX;
	volatile uint64_t t84 = 2926959429043345527LLU;

	t84 = ((x369+(x370/x371))/x372);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x374 = 229U;
	int16_t x375 = INT16_MAX;
	int64_t x376 = -1719018020437448811LL;
	volatile int64_t t85 = -5435342LL;

	t85 = ((x373+(x374/x375))/x376);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = INT64_MAX;
	static volatile int64_t x380 = INT64_MIN;
	static uint64_t t86 = 10024101088564LLU;

	t86 = ((x377+(x378/x379))/x380);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x381 = UINT32_MAX;
	int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MIN;
	volatile int64_t x384 = INT64_MIN;

	t87 = ((x381+(x382/x383))/x384);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x385 = 1U;
	int8_t x386 = INT8_MAX;
	volatile int8_t x387 = INT8_MIN;
	int32_t x388 = 1;
	volatile int32_t t88 = -118;

	t88 = ((x385+(x386/x387))/x388);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x390 = -49;
	static int32_t x391 = INT32_MAX;
	static volatile int16_t x392 = INT16_MIN;
	int32_t t89 = 9103;

	t89 = ((x389+(x390/x391))/x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x393 = 1648805252U;
	static volatile int16_t x394 = INT16_MAX;
	int16_t x395 = 369;
	volatile uint8_t x396 = UINT8_MAX;
	uint32_t t90 = 4U;

	t90 = ((x393+(x394/x395))/x396);

	if (t90 != 6465903U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = 177;
	volatile uint64_t x398 = UINT64_MAX;
	int64_t x399 = INT64_MIN;
	static int16_t x400 = -1;
	static uint64_t t91 = 2636823730LLU;

	t91 = ((x397+(x398/x399))/x400);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = -1LL;
	uint16_t x402 = 21664U;
	int64_t x403 = -1LL;
	int64_t x404 = INT64_MIN;

	t92 = ((x401+(x402/x403))/x404);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x405 = -84458LL;
	static int16_t x406 = INT16_MIN;
	int64_t x407 = -3502LL;
	uint32_t x408 = 52029016U;
	int64_t t93 = 0LL;

	t93 = ((x405+(x406/x407))/x408);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x410 = UINT32_MAX;
	int16_t x411 = INT16_MAX;
	int16_t x412 = INT16_MIN;
	volatile uint32_t t94 = 111U;

	t94 = ((x409+(x410/x411))/x412);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x417 = 0U;
	static uint16_t x418 = 799U;

	t95 = ((x417+(x418/x419))/x420);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x421 = 52459U;
	static int64_t x422 = INT64_MIN;
	volatile uint8_t x423 = 11U;
	int64_t t96 = 886229798995694083LL;

	t96 = ((x421+(x422/x423))/x424);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x425 = -136831;
	uint32_t x426 = 204579686U;
	static int64_t x427 = INT64_MAX;
	int64_t t97 = 29LL;

	t97 = ((x425+(x426/x427))/x428);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x429 = 53LLU;
	int8_t x430 = INT8_MIN;
	int32_t x431 = INT32_MIN;
	int32_t x432 = INT32_MIN;

	t98 = ((x429+(x430/x431))/x432);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x441 = -15315;
	int32_t x442 = INT32_MIN;
	volatile uint32_t x443 = UINT32_MAX;
	volatile int16_t x444 = -1;
	uint32_t t99 = 837U;

	t99 = ((x441+(x442/x443))/x444);

	if (t99 != 0U) { NG(); } else { ; }
	
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

