#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -78352041;
int64_t x9 = INT64_MIN;
int64_t t2 = 44449078915LL;
static int8_t x26 = 1;
uint8_t x33 = UINT8_MAX;
volatile uint64_t t7 = 29122944197LLU;
int32_t x41 = INT32_MIN;
uint8_t x46 = 52U;
uint64_t x48 = UINT64_MAX;
volatile int32_t x59 = INT32_MIN;
volatile uint64_t t12 = 1005973364LLU;
volatile int8_t x67 = -1;
int8_t x75 = -1;
int8_t x77 = INT8_MAX;
volatile int32_t t15 = -11740;
uint64_t t16 = 5012704LLU;
int8_t x95 = 28;
volatile uint64_t x100 = 452352757958LLU;
static int64_t x103 = -2889514296736LL;
int64_t t19 = -391672LL;
static uint16_t x106 = 108U;
volatile int32_t t20 = 2119;
static volatile uint64_t t21 = 518018834000LLU;
static int8_t x116 = 11;
uint8_t x123 = 4U;
uint64_t t25 = 116896584621898LLU;
int8_t x135 = INT8_MIN;
int8_t x145 = -1;
volatile int16_t x178 = INT16_MIN;
volatile uint64_t t35 = 32818405909920LLU;
static uint32_t x193 = 0U;
volatile uint64_t x194 = 62379720LLU;
int32_t x195 = INT32_MIN;
volatile uint8_t x196 = 55U;
volatile int16_t x197 = 235;
volatile int64_t x198 = 28628609737LL;
static uint64_t x199 = 833LLU;
int64_t x200 = -1LL;
int32_t x201 = INT32_MIN;
static volatile int32_t x202 = INT32_MIN;
static uint64_t x204 = UINT64_MAX;
uint32_t x212 = 13699U;
static int16_t x214 = -1;
static volatile uint16_t x218 = 1279U;
uint16_t x220 = UINT16_MAX;
int64_t t43 = 8342392115LL;
static uint32_t x223 = 50U;
static int16_t x225 = INT16_MIN;
int16_t x228 = -2556;
uint32_t t46 = 121878241U;
int32_t x237 = -1;
volatile uint16_t x258 = 11U;
static volatile int16_t x261 = -1948;
static int64_t t53 = -1047850821815259LL;
uint8_t x295 = 123U;
volatile int32_t t54 = -563307530;
int8_t x303 = INT8_MIN;
volatile int8_t x326 = -1;
static uint16_t x327 = UINT16_MAX;
int16_t x334 = INT16_MIN;
volatile uint16_t x337 = UINT16_MAX;
int32_t x346 = 0;
int64_t t59 = -177563LL;
static uint32_t x350 = 1187790635U;
volatile uint32_t t60 = 4041952U;
uint32_t x355 = 6U;
uint64_t x356 = 152175LLU;
int16_t x362 = -906;
int64_t x363 = 1581084LL;
int16_t x370 = -1;
uint64_t x371 = 2LLU;
int32_t x372 = -3645;
uint8_t x375 = 111U;
static volatile uint64_t t65 = 293809112LLU;
int32_t x379 = INT32_MIN;
static int64_t x380 = 49368LL;
int16_t x390 = 686;
uint64_t x405 = UINT64_MAX;
int16_t x410 = INT16_MIN;
static int32_t x413 = INT32_MAX;
uint8_t x422 = 4U;
static volatile uint64_t x423 = 90466LLU;
uint32_t x430 = 11U;
static volatile int32_t x431 = -9;
volatile int16_t x432 = -109;
int16_t x451 = -21;
int32_t t77 = -1789;
static uint8_t x455 = 1U;
uint8_t x456 = 5U;
volatile int32_t t78 = 880;
int32_t x457 = INT32_MIN;
int8_t x460 = 14;
volatile int64_t t80 = 28685349108649LL;
int64_t x483 = -1142304500LL;
uint64_t x485 = UINT64_MAX;
uint64_t x488 = 1963LLU;
volatile uint64_t t83 = 20891660059039263LLU;
static volatile uint16_t x489 = UINT16_MAX;
static int16_t x492 = -1;
static int32_t t84 = 167;
uint64_t x499 = 33149492341517143LLU;
uint64_t t86 = 10174057277973LLU;
volatile int16_t x518 = INT16_MIN;
volatile uint16_t x532 = UINT16_MAX;
int32_t t90 = 103737989;
int16_t x547 = -1;
static uint32_t x548 = UINT32_MAX;
int8_t x559 = -1;
volatile int8_t x566 = 11;
static volatile int32_t x568 = 28;
static int16_t x583 = INT16_MAX;
volatile int32_t t98 = -3947338;
static uint8_t x586 = 11U;
int8_t x588 = -6;


void f0(void) {
	volatile uint16_t x1 = 1U;
	static int64_t x2 = -43082307634991LL;
	volatile int16_t x3 = INT16_MIN;
	int16_t x4 = 13722;
	static int64_t t0 = 101119LL;

	t0 = (x1^((x2*x3)-x4));

	if (t0 != 1411721056583371367LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 46U;
	volatile int16_t x6 = INT16_MIN;
	uint16_t x7 = 111U;
	int8_t x8 = 0;

	t1 = (x5^((x6*x7)-x8));

	if (t1 != -3637202) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	int8_t x11 = -1;
	static int16_t x12 = -1;

	t2 = (x9^((x10*x11)-x12));

	if (t2 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	volatile uint32_t x14 = 5825U;
	int16_t x15 = INT16_MIN;
	static int32_t x16 = INT32_MIN;
	uint32_t t3 = 1998151384U;

	t3 = (x13^((x14*x15)-x16));

	if (t3 != 4104093696U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint8_t x18 = UINT8_MAX;
	volatile int32_t x19 = 2653;
	volatile int32_t x20 = -1;
	volatile int32_t t4 = -860037;

	t4 = (x17^((x18*x19)-x20));

	if (t4 != -676572) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x25 = 146;
	static uint16_t x27 = 4U;
	uint64_t x28 = UINT64_MAX;
	static volatile uint64_t t5 = 6963751LLU;

	t5 = (x25^((x26*x27)-x28));

	if (t5 != 151LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	uint64_t x30 = 6707477247LLU;
	int64_t x31 = INT64_MAX;
	volatile uint16_t x32 = 162U;
	volatile uint64_t t6 = 1149269608LLU;

	t6 = (x29^((x30*x31)-x32));

	if (t6 != 6707477408LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = -1LL;
	static uint64_t x35 = 11609270261LLU;
	int8_t x36 = INT8_MAX;

	t7 = (x33^((x34*x35)-x36));

	if (t7 != 18446744062100281203LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	static volatile int16_t x38 = -1;
	int8_t x39 = 0;
	int8_t x40 = INT8_MAX;
	int64_t t8 = 4121474LL;

	t8 = (x37^((x38*x39)-x40));

	if (t8 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = -95494695673302LL;
	volatile uint64_t x43 = 2984843LLU;
	volatile int8_t x44 = -1;
	static uint64_t t9 = 3LLU;

	t9 = (x41^((x42*x43)-x44));

	if (t9 != 8335512812460923599LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 54;
	int8_t x47 = 0;
	uint64_t t10 = 2271992416385081LLU;

	t10 = (x45^((x46*x47)-x48));

	if (t10 != 55LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 9U;
	static int8_t x50 = 0;
	uint64_t x51 = 92578LLU;
	int16_t x52 = 15280;
	static uint64_t t11 = 121667082037609LLU;

	t11 = (x49^((x50*x51)-x52));

	if (t11 != 18446744073709536345LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = -1;
	uint64_t x58 = 326547492762985144LLU;
	static int32_t x60 = 91523;

	t12 = (x57^((x58*x59)-x60));

	if (t12 != 8518366675773515138LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = UINT64_MAX;
	volatile uint32_t x66 = UINT32_MAX;
	uint64_t x68 = 806LLU;
	volatile uint64_t t13 = 2042916LLU;

	t13 = (x65^((x66*x67)-x68));

	if (t13 != 804LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x73 = INT64_MIN;
	volatile uint32_t x74 = UINT32_MAX;
	int16_t x76 = INT16_MAX;
	volatile int64_t t14 = 0LL;

	t14 = (x73^((x74*x75)-x76));

	if (t14 != -9223372032559841278LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x78 = 12;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MIN;

	t15 = (x77^((x78*x79)-x80));

	if (t15 != 2147090559) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MAX;
	static int8_t x90 = INT8_MAX;
	uint64_t x91 = 741463LLU;
	uint8_t x92 = 6U;

	t16 = (x89^((x90*x91)-x92));

	if (t16 != 94151900LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = INT32_MIN;
	uint16_t x94 = 256U;
	static int8_t x96 = INT8_MAX;
	volatile int32_t t17 = 196;

	t17 = (x93^((x94*x95)-x96));

	if (t17 != -2147476607) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MAX;
	static uint16_t x98 = 264U;
	int16_t x99 = INT16_MAX;
	uint64_t t18 = 2263LLU;

	t18 = (x97^((x98*x99)-x100));

	if (t18 != 18446743621365444173LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x101 = INT64_MIN;
	static int8_t x102 = -34;
	uint32_t x104 = UINT32_MAX;

	t19 = (x101^((x102*x103)-x104));

	if (t19 != -9223273797663654079LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x105 = INT16_MIN;
	volatile uint8_t x107 = 7U;
	int16_t x108 = INT16_MIN;

	t20 = (x105^((x106*x107)-x108));

	if (t20 != -64780) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MAX;
	uint64_t x110 = 0LLU;
	uint32_t x111 = UINT32_MAX;
	volatile int64_t x112 = -6625426086LL;

	t21 = (x109^((x110*x111)-x112));

	if (t21 != 6625396057LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x113 = 10;
	static uint32_t x114 = 378288U;
	uint64_t x115 = UINT64_MAX;
	uint64_t t22 = 51LLU;

	t22 = (x113^((x114*x115)-x116));

	if (t22 != 18446744073709173327LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = INT8_MAX;
	static uint8_t x118 = 89U;
	int16_t x119 = -1;
	volatile uint8_t x120 = 1U;
	int32_t t23 = -185;

	t23 = (x117^((x118*x119)-x120));

	if (t23 != -39) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = 5864;
	static uint64_t x122 = 3LLU;
	static uint8_t x124 = UINT8_MAX;
	volatile uint64_t t24 = 67823515991LLU;

	t24 = (x121^((x122*x123)-x124));

	if (t24 != 18446744073709545957LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = INT8_MIN;
	uint16_t x130 = 30100U;
	volatile int8_t x131 = INT8_MIN;
	uint64_t x132 = 538281246908175003LLU;

	t25 = (x129^((x130*x131)-x132));

	if (t25 != 538281246912027877LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x133 = 392767U;
	int16_t x134 = -1;
	volatile int64_t x136 = 4105037854737300417LL;
	static int64_t t26 = -1991651389LL;

	t26 = (x133^((x134*x135)-x136));

	if (t26 != -4105037854736909696LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x137 = 23;
	static volatile uint8_t x138 = 6U;
	static int8_t x139 = -1;
	static uint8_t x140 = UINT8_MAX;
	volatile int32_t t27 = -336630336;

	t27 = (x137^((x138*x139)-x140));

	if (t27 != -276) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = 737014796392153LL;
	int8_t x142 = INT8_MIN;
	int16_t x143 = INT16_MIN;
	static uint64_t x144 = 54730803779LLU;
	volatile uint64_t t28 = 263432421252448558LLU;

	t28 = (x141^((x142*x143)-x144));

	if (t28 != 18446007112672224100LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x146 = 51;
	int16_t x147 = -242;
	int64_t x148 = INT64_MIN;
	volatile int64_t t29 = -53198759339492885LL;

	t29 = (x145^((x146*x147)-x148));

	if (t29 != -9223372036854763467LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x157 = UINT8_MAX;
	volatile uint16_t x158 = 6745U;
	int64_t x159 = 25LL;
	int32_t x160 = -17;
	volatile int64_t t30 = 12LL;

	t30 = (x157^((x158*x159)-x160));

	if (t30 != 168509LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x161 = -1;
	int32_t x162 = -1;
	static uint16_t x163 = 9172U;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t31 = 1U;

	t31 = (x161^((x162*x163)-x164));

	if (t31 != 9170U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x165 = INT8_MAX;
	int32_t x166 = 1811;
	int32_t x167 = 8542;
	uint32_t x168 = 2759256U;
	uint32_t t32 = 1471811U;

	t32 = (x165^((x166*x167)-x168));

	if (t32 != 12710365U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x169 = 8LLU;
	uint16_t x170 = 1U;
	int32_t x171 = INT32_MIN;
	int16_t x172 = -1;
	static volatile uint64_t t33 = 30429486413LLU;

	t33 = (x169^((x170*x171)-x172));

	if (t33 != 18446744071562067977LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x173 = 407U;
	static int8_t x174 = -1;
	uint32_t x175 = 5918U;
	volatile int32_t x176 = -705086;
	uint32_t t34 = 48178696U;

	t34 = (x173^((x174*x175)-x176));

	if (t34 != 699063U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x177 = 11U;
	int8_t x179 = 11;
	uint64_t x180 = UINT64_MAX;

	t35 = (x177^((x178*x179)-x180));

	if (t35 != 18446744073709191178LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MAX;
	uint16_t x191 = 42U;
	volatile uint8_t x192 = 7U;
	int32_t t36 = 440005;

	t36 = (x189^((x190*x191)-x192));

	if (t36 != -5297) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t t37 = 23904844969LLU;

	t37 = (x193^((x194*x195)-x196));

	if (t37 != 18312784645042733001LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t t38 = 39121213853487LLU;

	t38 = (x197^((x198*x199)-x200));

	if (t38 != 23847631911137LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x203 = 1;
	volatile uint64_t t39 = 632LLU;

	t39 = (x201^((x202*x203)-x204));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = -1LL;
	volatile uint64_t x206 = 99873LLU;
	uint16_t x207 = 9409U;
	int32_t x208 = INT32_MAX;
	static volatile uint64_t t40 = 1354655705201LLU;

	t40 = (x205^((x206*x207)-x208));

	if (t40 != 1207778589LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x209 = UINT16_MAX;
	uint8_t x210 = UINT8_MAX;
	static int32_t x211 = -12152;
	volatile uint32_t t41 = 20U;

	t41 = (x209^((x210*x211)-x212));

	if (t41 != 4291853834U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = 3;
	int16_t x215 = -329;
	static volatile int64_t x216 = INT64_MAX;
	static volatile int64_t t42 = 5507986416LL;

	t42 = (x213^((x214*x215)-x216));

	if (t42 != -9223372036854775479LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x217 = INT64_MIN;
	static int8_t x219 = 0;

	t43 = (x217^((x218*x219)-x220));

	if (t43 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x221 = UINT16_MAX;
	static volatile uint16_t x222 = UINT16_MAX;
	int16_t x224 = -1;
	volatile uint32_t t44 = 112057U;

	t44 = (x221^((x222*x223)-x224));

	if (t44 != 3211312U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x226 = 0U;
	int32_t x227 = -18986;
	volatile int32_t t45 = -2;

	t45 = (x225^((x226*x227)-x228));

	if (t45 != -30212) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x233 = INT8_MIN;
	uint16_t x234 = 57U;
	volatile uint32_t x235 = UINT32_MAX;
	int8_t x236 = INT8_MIN;

	t46 = (x233^((x234*x235)-x236));

	if (t46 != 4294967239U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x238 = -1469;
	static volatile int8_t x239 = INT8_MIN;
	uint8_t x240 = 7U;
	volatile int32_t t47 = -32173;

	t47 = (x237^((x238*x239)-x240));

	if (t47 != -188026) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x249 = 1987353;
	int8_t x250 = -6;
	uint64_t x251 = UINT64_MAX;
	volatile int64_t x252 = -21338589373491LL;
	volatile uint64_t t48 = 1012LLU;

	t48 = (x249^((x250*x251)-x252));

	if (t48 != 21338590050080LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x257 = -1;
	volatile uint16_t x259 = 2629U;
	volatile int64_t x260 = -15626144196551758LL;
	int64_t t49 = -59975208LL;

	t49 = (x257^((x258*x259)-x260));

	if (t49 != -15626144196580678LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x262 = INT8_MIN;
	int32_t x263 = -1;
	uint8_t x264 = 0U;
	int32_t t50 = 195286016;

	t50 = (x261^((x262*x263)-x264));

	if (t50 != -1820) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x265 = UINT16_MAX;
	uint16_t x266 = UINT16_MAX;
	volatile int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	static int64_t t51 = -19736261528631686LL;

	t51 = (x265^((x266*x267)-x268));

	if (t51 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x273 = INT64_MAX;
	int16_t x274 = INT16_MAX;
	int64_t x275 = -1LL;
	int16_t x276 = -124;
	int64_t t52 = 5LL;

	t52 = (x273^((x274*x275)-x276));

	if (t52 != -9223372036854743166LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x277 = 41107116;
	int32_t x278 = INT32_MAX;
	volatile int64_t x279 = 8000LL;
	int64_t x280 = INT64_MAX;

	t53 = (x277^((x278*x279)-x280));

	if (t53 != -9223354857026691475LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	int16_t x296 = -134;

	t54 = (x293^((x294*x295)-x296));

	if (t54 != -8060940) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x301 = -14;
	static volatile int8_t x302 = -10;
	static volatile int16_t x304 = -1;
	volatile int32_t t55 = 28031;

	t55 = (x301^((x302*x303)-x304));

	if (t55 != -1293) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x325 = INT64_MAX;
	static int16_t x328 = 33;
	volatile int64_t t56 = 3262235LL;

	t56 = (x325^((x326*x327)-x328));

	if (t56 != -9223372036854710241LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x333 = INT64_MIN;
	int8_t x335 = 0;
	uint64_t x336 = 53LLU;
	uint64_t t57 = 1342LLU;

	t57 = (x333^((x334*x335)-x336));

	if (t57 != 9223372036854775755LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x338 = INT16_MIN;
	static int16_t x339 = INT16_MAX;
	int8_t x340 = INT8_MAX;
	static volatile int32_t t58 = 5160409;

	t58 = (x337^((x338*x339)-x340));

	if (t58 != -1073708930) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x345 = 3186;
	int16_t x347 = INT16_MIN;
	int64_t x348 = -53925406545996LL;

	t59 = (x345^((x346*x347)-x348));

	if (t59 != 53925406544958LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x351 = -1;
	volatile int32_t x352 = INT32_MIN;

	t60 = (x349^((x350*x351)-x352));

	if (t60 != 3335274282U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x353 = 362554U;
	volatile int8_t x354 = 51;
	volatile uint64_t t61 = 197046657789834LLU;

	t61 = (x353^((x354*x355)-x356));

	if (t61 != 18446744073709037305LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x361 = -1LL;
	int16_t x364 = INT16_MIN;
	volatile int64_t t62 = 4495240549525560LL;

	t62 = (x361^((x362*x363)-x364));

	if (t62 != 1432429335LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x365 = 3365654386003644742LLU;
	static volatile int8_t x366 = INT8_MIN;
	uint8_t x367 = 1U;
	int64_t x368 = 57LL;
	uint64_t t63 = 167968871686LLU;

	t63 = (x365^((x366*x367)-x368));

	if (t63 != 15081089687705906689LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x369 = 23643LLU;
	static volatile uint64_t t64 = 513836997092LLU;

	t64 = (x369^((x370*x371)-x372));

	if (t64 != 21088LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x373 = -1;
	volatile uint64_t x374 = 2811880LLU;
	static int64_t x376 = INT64_MIN;

	t65 = (x373^((x374*x375)-x376));

	if (t65 != 9223372036542657127LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x377 = UINT64_MAX;
	uint64_t x378 = UINT64_MAX;
	volatile uint64_t t66 = 122LLU;

	t66 = (x377^((x378*x379)-x380));

	if (t66 != 18446744071562117335LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = -1;
	uint8_t x387 = UINT8_MAX;
	int8_t x388 = INT8_MIN;
	static int32_t t67 = -14431102;

	t67 = (x385^((x386*x387)-x388));

	if (t67 != -65410) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x389 = -1LL;
	volatile int16_t x391 = INT16_MAX;
	int8_t x392 = 3;
	int64_t t68 = 4083472877731655207LL;

	t68 = (x389^((x390*x391)-x392));

	if (t68 != -22478160LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x393 = INT16_MIN;
	static int8_t x394 = 0;
	static uint16_t x395 = UINT16_MAX;
	static uint16_t x396 = 779U;
	int32_t t69 = -856717;

	t69 = (x393^((x394*x395)-x396));

	if (t69 != 31989) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = 126;
	int16_t x399 = 1549;
	static volatile int8_t x400 = -1;
	volatile int32_t t70 = -91023025;

	t70 = (x397^((x398*x399)-x400));

	if (t70 != -195097) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x406 = UINT8_MAX;
	int16_t x407 = INT16_MIN;
	static uint16_t x408 = 3658U;
	volatile uint64_t t71 = 127238596LLU;

	t71 = (x405^((x406*x407)-x408));

	if (t71 != 8359497LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x409 = UINT32_MAX;
	uint64_t x411 = 1500LLU;
	int32_t x412 = 16296;
	volatile uint64_t t72 = 6519LLU;

	t72 = (x409^((x410*x411)-x412));

	if (t72 != 18446744069463752615LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x414 = 274495185400813154LLU;
	int8_t x415 = -8;
	int64_t x416 = -1LL;
	uint64_t t73 = 83113931LLU;

	t73 = (x413^((x414*x415)-x416));

	if (t73 != 16250782588991877902LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x421 = UINT16_MAX;
	uint32_t x424 = UINT32_MAX;
	uint64_t t74 = 172042776683418LLU;

	t74 = (x421^((x422*x423)-x424));

	if (t74 != 18446744069414943350LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x425 = INT8_MAX;
	int32_t x426 = INT32_MAX;
	volatile uint32_t x427 = 16222U;
	static uint8_t x428 = UINT8_MAX;
	static uint32_t t75 = 42999U;

	t75 = (x425^((x426*x427)-x428));

	if (t75 != 4294950876U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x429 = INT64_MIN;
	int64_t t76 = -2102736000558515LL;

	t76 = (x429^((x430*x431)-x432));

	if (t76 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x449 = UINT16_MAX;
	static int32_t x450 = -1;
	int16_t x452 = INT16_MAX;

	t77 = (x449^((x450*x451)-x452));

	if (t77 != -32791) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x453 = INT16_MIN;
	int32_t x454 = -5967964;

	t78 = (x453^((x454*x455)-x456));

	if (t78 != 5992351) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x458 = UINT8_MAX;
	static uint8_t x459 = 0U;
	int32_t t79 = -11569332;

	t79 = (x457^((x458*x459)-x460));

	if (t79 != 2147483634) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x461 = -1;
	volatile int32_t x462 = INT32_MIN;
	int64_t x463 = -1LL;
	volatile int32_t x464 = INT32_MIN;

	t80 = (x461^((x462*x463)-x464));

	if (t80 != -4294967297LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x465 = 62743U;
	static int8_t x466 = INT8_MAX;
	uint64_t x467 = 1376LLU;
	volatile int16_t x468 = -1;
	uint64_t t81 = 66481886LLU;

	t81 = (x465^((x466*x467)-x468));

	if (t81 != 155574LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x481 = 9302U;
	volatile int32_t x482 = 15775;
	volatile int64_t x484 = 52710935527011681LL;
	int64_t t82 = -8775077005517LL;

	t82 = (x481^((x482*x483)-x484));

	if (t82 != -52728955380508347LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x486 = -1;
	int32_t x487 = 8318;

	t83 = (x485^((x486*x487)-x488));

	if (t83 != 10280LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x490 = 3293U;
	int16_t x491 = -1;

	t84 = (x489^((x490*x491)-x492));

	if (t84 != -62245) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x493 = INT64_MIN;
	static int64_t x494 = -1LL;
	static int16_t x495 = INT16_MIN;
	static uint32_t x496 = 127687U;
	volatile int64_t t85 = -197328765548754LL;

	t85 = (x493^((x494*x495)-x496));

	if (t85 != 9223372036854680889LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x497 = -1;
	uint8_t x498 = 3U;
	int64_t x500 = INT64_MIN;

	t86 = (x497^((x498*x499)-x500));

	if (t86 != 9123923559830224378LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x517 = 5994U;
	uint32_t x519 = UINT32_MAX;
	int8_t x520 = INT8_MAX;
	uint32_t t87 = 474737U;

	t87 = (x517^((x518*x519)-x520));

	if (t87 != 26859U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x525 = 2LLU;
	int8_t x526 = -3;
	int64_t x527 = 11143LL;
	volatile int64_t x528 = 4800054850LL;
	static volatile uint64_t t88 = 17630967490484LLU;

	t88 = (x525^((x526*x527)-x528));

	if (t88 != 18446744068909463339LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x529 = INT8_MAX;
	static volatile int32_t x530 = 101802039;
	volatile uint64_t x531 = 3058711LLU;
	volatile uint64_t t89 = 26110LLU;

	t89 = (x529^((x530*x531)-x532));

	if (t89 != 311383016446093LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x533 = INT32_MIN;
	static volatile int16_t x534 = INT16_MIN;
	int32_t x535 = -1;
	uint8_t x536 = 86U;

	t90 = (x533^((x534*x535)-x536));

	if (t90 != -2147450966) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x541 = 7;
	int32_t x542 = -1344;
	volatile int16_t x543 = INT16_MAX;
	int8_t x544 = -1;
	int32_t t91 = 0;

	t91 = (x541^((x542*x543)-x544));

	if (t91 != -44038842) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x545 = 12U;
	uint8_t x546 = 51U;
	volatile uint32_t t92 = 0U;

	t92 = (x545^((x546*x547)-x548));

	if (t92 != 4294967234U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x553 = -1LL;
	int8_t x554 = 1;
	uint32_t x555 = 121784316U;
	volatile int32_t x556 = INT32_MIN;
	static volatile int64_t t93 = 261344224071899LL;

	t93 = (x553^((x554*x555)-x556));

	if (t93 != -2269267965LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x557 = 126451146LLU;
	int64_t x558 = 122LL;
	int16_t x560 = -24;
	volatile uint64_t t94 = 25303280449909947LLU;

	t94 = (x557^((x558*x559)-x560));

	if (t94 != 18446744073583100500LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x561 = -544420682;
	int8_t x562 = 35;
	volatile int32_t x563 = -908002;
	uint64_t x564 = 3023438500907LLU;
	uint64_t t95 = 97208LLU;

	t95 = (x561^((x562*x563)-x564));

	if (t95 != 3022930080345LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x565 = 285LLU;
	static uint64_t x567 = 183066LLU;
	uint64_t t96 = 85505288724686LLU;

	t96 = (x565^((x566*x567)-x568));

	if (t96 != 2013983LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x577 = 2U;
	volatile int16_t x578 = 4;
	int8_t x579 = -1;
	uint16_t x580 = 0U;
	int32_t t97 = 0;

	t97 = (x577^((x578*x579)-x580));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x581 = UINT8_MAX;
	volatile int16_t x582 = INT16_MIN;
	volatile int16_t x584 = INT16_MIN;

	t98 = (x581^((x582*x583)-x584));

	if (t98 != -1073676033) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x585 = INT32_MIN;
	volatile int32_t x587 = 905908;
	int32_t t99 = 56;

	t99 = (x585^((x586*x587)-x588));

	if (t99 != -2137518654) { NG(); } else { ; }
	
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

