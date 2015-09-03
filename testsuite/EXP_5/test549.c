#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -77694;
int16_t x25 = INT16_MIN;
uint32_t x26 = UINT32_MAX;
int64_t t3 = -23813822LL;
volatile uint16_t x32 = 9U;
volatile int32_t t6 = 14;
int64_t x41 = INT64_MAX;
uint16_t x43 = UINT16_MAX;
uint16_t x44 = 7479U;
uint32_t t8 = 40572U;
volatile int8_t x55 = 2;
int64_t t10 = 3054LL;
int16_t x58 = INT16_MIN;
int64_t x59 = -578332168418619343LL;
int16_t x60 = INT16_MIN;
int32_t x63 = INT32_MIN;
static int32_t x67 = 3910643;
volatile uint32_t t15 = 28125703U;
static int16_t x84 = INT16_MIN;
volatile int32_t t17 = -1;
int64_t x87 = -1LL;
uint64_t t18 = 193379LLU;
volatile int64_t x93 = -1LL;
static volatile int64_t x94 = -20510109595686344LL;
volatile int32_t x95 = -1;
volatile int64_t t20 = 128378LL;
int64_t x97 = INT64_MIN;
uint32_t x98 = UINT32_MAX;
static volatile int32_t t22 = 1576671;
int8_t x114 = INT8_MIN;
int8_t x115 = INT8_MIN;
int64_t x126 = INT64_MAX;
static int64_t x128 = -58534664834LL;
volatile int64_t t27 = -4498254112121463LL;
int32_t x132 = INT32_MAX;
static volatile int16_t x136 = -1;
int8_t x137 = INT8_MIN;
uint32_t x142 = 13U;
int64_t t33 = 325672779LL;
int64_t x161 = 0LL;
volatile uint16_t x165 = 0U;
volatile uint64_t t36 = 27214448LLU;
volatile int64_t t37 = -16966LL;
static int16_t x179 = INT16_MIN;
uint64_t t39 = 3551415204LLU;
volatile int32_t t40 = 320;
volatile int64_t x196 = INT64_MIN;
volatile int32_t x199 = 13786;
volatile uint64_t x210 = 15697658890LLU;
uint64_t t44 = 23550LLU;
volatile int8_t x215 = INT8_MIN;
uint16_t x217 = 38U;
int16_t x219 = INT16_MAX;
static int16_t x223 = INT16_MIN;
static int16_t x240 = 218;
static volatile int64_t t50 = -33503724920406LL;
volatile int16_t x244 = INT16_MAX;
int8_t x246 = INT8_MIN;
int64_t t53 = -30077113559777LL;
int64_t x266 = -1LL;
int32_t x271 = INT32_MIN;
int32_t x276 = INT32_MIN;
int16_t x280 = -2;
int64_t x283 = INT64_MIN;
uint16_t x291 = 85U;
uint32_t t60 = 127547U;
static volatile int64_t x294 = INT64_MAX;
uint32_t x297 = 1904447867U;
int64_t x304 = INT64_MAX;
volatile int64_t x306 = INT64_MAX;
int16_t x311 = INT16_MIN;
int32_t x314 = 1;
static volatile int64_t t66 = -8182082849LL;
static volatile int32_t x321 = INT32_MIN;
volatile uint64_t x323 = UINT64_MAX;
uint16_t x324 = 7U;
uint64_t x327 = 17LLU;
volatile int32_t t70 = 1;
uint64_t t71 = 975248576LLU;
int32_t x340 = INT32_MIN;
uint16_t x341 = UINT16_MAX;
static volatile int32_t t75 = -942;
static int64_t x358 = INT64_MAX;
int8_t x360 = INT8_MIN;
static uint8_t x372 = 60U;
int16_t x374 = INT16_MAX;
uint8_t x375 = 33U;
int16_t x378 = INT16_MAX;
static int32_t x379 = -1;
uint64_t x381 = 64891436875LLU;
volatile int64_t x382 = 1681200396799LL;
uint8_t x384 = 77U;
volatile int64_t t84 = -703312622935650LL;
static volatile uint64_t t85 = 144204LLU;
volatile int32_t x409 = INT32_MAX;
uint32_t t89 = 1776U;
int8_t x419 = 60;
volatile int64_t x420 = INT64_MIN;
uint64_t t92 = 2921337223657321LLU;
uint32_t x425 = 0U;
int16_t x427 = -1;
uint16_t x428 = 498U;
static uint8_t x433 = 8U;
int16_t x435 = 5965;
volatile int64_t t96 = -1596979LL;
int64_t x442 = INT64_MAX;
volatile uint8_t x443 = 23U;
int32_t x451 = INT32_MAX;


void f0(void) {
	int32_t x1 = -6;
	int8_t x2 = 1;
	int16_t x3 = INT16_MAX;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -53762531;

	t0 = (x1*((x2/x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 14;
	int32_t x6 = 40668924;
	static int8_t x7 = 13;
	int8_t x8 = INT8_MIN;

	t1 = (x5*((x6/x7)/x8));

	if (t1 != -342160) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int16_t x14 = -1;
	uint8_t x15 = 33U;
	static int16_t x16 = INT16_MIN;
	int32_t t2 = -2598;

	t2 = (x13*((x14/x15)/x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x27 = 35U;
	volatile int64_t x28 = -188243LL;

	t3 = (x25*((x26/x27)/x28));

	if (t3 != 21331968LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MAX;
	uint64_t x30 = 164326220LLU;
	volatile int16_t x31 = INT16_MIN;
	uint64_t t4 = 76LLU;

	t4 = (x29*((x30/x31)/x32));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x33 = 4755U;
	int64_t x34 = -60077835184215LL;
	static int64_t x35 = INT64_MIN;
	static uint16_t x36 = 789U;
	int64_t t5 = 117569146492457LL;

	t5 = (x33*((x34/x35)/x36));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x37 = INT8_MIN;
	uint16_t x38 = 99U;
	int32_t x39 = INT32_MAX;
	uint16_t x40 = 74U;

	t6 = (x37*((x38/x39)/x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x42 = 3U;
	int64_t t7 = 702955066670LL;

	t7 = (x41*((x42/x43)/x44));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = INT32_MAX;
	int16_t x46 = -1;
	volatile int32_t x47 = 2903;
	uint32_t x48 = 3U;

	t8 = (x45*((x46/x47)/x48));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 13814U;
	int64_t x50 = -1LL;
	volatile int16_t x51 = -1;
	int16_t x52 = INT16_MIN;
	int64_t t9 = -832153541203LL;

	t9 = (x49*((x50/x51)/x52));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -1;
	int64_t x54 = 67121908781677634LL;
	int16_t x56 = INT16_MAX;

	t10 = (x53*((x54/x55)/x56));

	if (t10 != -1024230304600LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x57 = 35U;
	int64_t t11 = -1137131LL;

	t11 = (x57*((x58/x59)/x60));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x61 = 11;
	int16_t x62 = 3100;
	int16_t x64 = 1;
	int32_t t12 = -134813;

	t12 = (x61*((x62/x63)/x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 2710153074605970935LLU;
	volatile int8_t x66 = INT8_MIN;
	uint16_t x68 = 23348U;
	static uint64_t t13 = 195621003258471033LLU;

	t13 = (x65*((x66/x67)/x68));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -118;
	int8_t x70 = INT8_MIN;
	uint64_t x71 = 1825975LLU;
	static uint8_t x72 = UINT8_MAX;
	static volatile uint64_t t14 = 6096799768739597736LLU;

	t14 = (x69*((x70/x71)/x72));

	if (t14 != 18446739398869866038LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 0U;
	uint32_t x74 = UINT32_MAX;
	uint16_t x75 = 3U;
	static int16_t x76 = INT16_MIN;

	t15 = (x73*((x74/x75)/x76));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = UINT64_MAX;
	uint32_t x78 = 511084U;
	int32_t x79 = INT32_MIN;
	static uint16_t x80 = UINT16_MAX;
	uint64_t t16 = 2541718LLU;

	t16 = (x77*((x78/x79)/x80));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = -1;
	int8_t x82 = INT8_MIN;
	static int16_t x83 = -1;

	t17 = (x81*((x82/x83)/x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MAX;
	volatile uint8_t x86 = 22U;
	uint64_t x88 = UINT64_MAX;

	t18 = (x85*((x86/x87)/x88));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = 4U;
	uint8_t x90 = 14U;
	uint16_t x91 = UINT16_MAX;
	int16_t x92 = -1;
	volatile int32_t t19 = 4;

	t19 = (x89*((x90/x91)/x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x96 = INT16_MIN;

	t20 = (x93*((x94/x95)/x96));

	if (t20 != 625918871938LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x99 = UINT32_MAX;
	int16_t x100 = -2;
	int64_t t21 = 587671669LL;

	t21 = (x97*((x98/x99)/x100));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MAX;
	int16_t x102 = INT16_MIN;
	int8_t x103 = -1;
	volatile int16_t x104 = INT16_MIN;

	t22 = (x101*((x102/x103)/x104));

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 12U;
	static int32_t x106 = INT32_MAX;
	int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MAX;
	volatile int64_t t23 = 6292593754LL;

	t23 = (x105*((x106/x107)/x108));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 12525692LLU;
	uint16_t x110 = 2U;
	static int32_t x111 = INT32_MIN;
	uint32_t x112 = UINT32_MAX;
	volatile uint64_t t24 = 5LLU;

	t24 = (x109*((x110/x111)/x112));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x113 = 5;
	static int8_t x116 = INT8_MAX;
	volatile int32_t t25 = 0;

	t25 = (x113*((x114/x115)/x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -1061;
	uint64_t x122 = 89659425819192LLU;
	static int16_t x123 = INT16_MAX;
	uint8_t x124 = UINT8_MAX;
	uint64_t t26 = 759234099091424LLU;

	t26 = (x121*((x122/x123)/x124));

	if (t26 != 18446744062324514458LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = 110U;
	static volatile uint16_t x127 = 1107U;

	t27 = (x125*((x126/x127)/x128));

	if (t27 != -15657400LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -1;
	int16_t x130 = 15;
	int64_t x131 = INT64_MAX;
	static int64_t t28 = -1928061803476LL;

	t28 = (x129*((x130/x131)/x132));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = 34;
	int16_t x134 = -1;
	static int64_t x135 = -2084490650LL;
	int64_t t29 = -4450748523604384LL;

	t29 = (x133*((x134/x135)/x136));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x138 = -1;
	volatile int32_t x139 = INT32_MIN;
	volatile uint16_t x140 = 45U;
	int32_t t30 = -29;

	t30 = (x137*((x138/x139)/x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x141 = UINT8_MAX;
	int8_t x143 = -7;
	int16_t x144 = -3;
	static uint32_t t31 = 25336237U;

	t31 = (x141*((x142/x143)/x144));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x149 = INT8_MIN;
	int32_t x150 = 14;
	int64_t x151 = -1LL;
	uint16_t x152 = UINT16_MAX;
	volatile int64_t t32 = 16618457913LL;

	t32 = (x149*((x150/x151)/x152));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = 0;
	int64_t x154 = -1LL;
	int16_t x155 = INT16_MAX;
	int16_t x156 = -1;

	t33 = (x153*((x154/x155)/x156));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = -36;
	int16_t x158 = -119;
	int64_t x159 = -13941432LL;
	volatile int16_t x160 = INT16_MIN;
	volatile int64_t t34 = -11092098558LL;

	t34 = (x157*((x158/x159)/x160));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x162 = INT32_MIN;
	int64_t x163 = INT64_MIN;
	volatile uint32_t x164 = UINT32_MAX;
	int64_t t35 = -778882904LL;

	t35 = (x161*((x162/x163)/x164));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x166 = INT64_MAX;
	uint64_t x167 = 13694679218880023LLU;
	uint32_t x168 = 1U;

	t36 = (x165*((x166/x167)/x168));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x169 = 16U;
	static int32_t x170 = 37;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = UINT32_MAX;

	t37 = (x169*((x170/x171)/x172));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = 1;
	int16_t x174 = 43;
	static volatile int32_t x175 = 111281501;
	static int64_t x176 = 1LL;
	volatile int64_t t38 = 0LL;

	t38 = (x173*((x174/x175)/x176));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x177 = INT64_MIN;
	static int8_t x178 = -1;
	uint64_t x180 = 12945550LLU;

	t39 = (x177*((x178/x179)/x180));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MIN;
	uint8_t x191 = 4U;
	volatile uint16_t x192 = UINT16_MAX;

	t40 = (x189*((x190/x191)/x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = INT8_MIN;
	uint64_t x194 = 6829177390LLU;
	int8_t x195 = -3;
	static volatile uint64_t t41 = 60609445407993LLU;

	t41 = (x193*((x194/x195)/x196));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x197 = 4469LLU;
	volatile uint32_t x198 = 86178U;
	static int16_t x200 = INT16_MAX;
	static uint64_t t42 = 4221040394690356791LLU;

	t42 = (x197*((x198/x199)/x200));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = INT8_MAX;
	static uint16_t x202 = 90U;
	int32_t x203 = -6;
	static int8_t x204 = INT8_MIN;
	volatile int32_t t43 = -707623;

	t43 = (x201*((x202/x203)/x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = -1;
	volatile int16_t x211 = INT16_MAX;
	static int32_t x212 = -11611;

	t44 = (x209*((x210/x211)/x212));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x213 = INT32_MAX;
	int64_t x214 = -231500347717696LL;
	uint64_t x216 = 59957873647942LLU;
	volatile uint64_t t45 = 1392327307667735925LLU;

	t45 = (x213*((x214/x215)/x216));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x218 = 67U;
	int16_t x220 = INT16_MAX;
	volatile uint32_t t46 = 1673210U;

	t46 = (x217*((x218/x219)/x220));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = 10;
	uint16_t x222 = 25318U;
	volatile int32_t x224 = INT32_MIN;
	static int32_t t47 = -37770;

	t47 = (x221*((x222/x223)/x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = -1;
	int32_t x226 = INT32_MIN;
	volatile int32_t x227 = INT32_MAX;
	uint16_t x228 = UINT16_MAX;
	int32_t t48 = 5;

	t48 = (x225*((x226/x227)/x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x229 = 36LLU;
	volatile int16_t x230 = INT16_MAX;
	int16_t x231 = -1;
	static int16_t x232 = INT16_MAX;
	volatile uint64_t t49 = 11593159LLU;

	t49 = (x229*((x230/x231)/x232));

	if (t49 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = INT64_MIN;
	volatile int16_t x238 = INT16_MIN;
	volatile int32_t x239 = INT32_MAX;

	t50 = (x237*((x238/x239)/x240));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x241 = 0U;
	volatile int8_t x242 = -1;
	volatile uint64_t x243 = UINT64_MAX;
	volatile uint64_t t51 = 4067365606LLU;

	t51 = (x241*((x242/x243)/x244));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = -919642;
	static uint16_t x247 = 3U;
	volatile int16_t x248 = INT16_MIN;
	volatile int32_t t52 = 27740019;

	t52 = (x245*((x246/x247)/x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x253 = 42U;
	uint8_t x254 = UINT8_MAX;
	int64_t x255 = -1LL;
	int16_t x256 = INT16_MIN;

	t53 = (x253*((x254/x255)/x256));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = INT64_MAX;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = 481LL;
	int16_t x260 = INT16_MIN;
	int64_t t54 = 699187292925291865LL;

	t54 = (x257*((x258/x259)/x260));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x267 = -223426663;
	uint16_t x268 = 3U;
	int64_t t55 = -17681073LL;

	t55 = (x265*((x266/x267)/x268));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x269 = 1;
	int32_t x270 = INT32_MAX;
	static int16_t x272 = -2226;
	static int32_t t56 = -1013666570;

	t56 = (x269*((x270/x271)/x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = INT64_MIN;
	int64_t x274 = INT64_MAX;
	uint64_t x275 = UINT64_MAX;
	volatile uint64_t t57 = 3LLU;

	t57 = (x273*((x274/x275)/x276));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MIN;
	uint16_t x279 = 972U;
	volatile int32_t t58 = 31;

	t58 = (x277*((x278/x279)/x280));

	if (t58 != 524272) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x281 = 869714;
	uint64_t x282 = UINT64_MAX;
	static uint64_t x284 = 11037272LLU;
	uint64_t t59 = 65940101675175LLU;

	t59 = (x281*((x282/x283)/x284));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x289 = 46635U;
	uint32_t x290 = 303924813U;
	uint32_t x292 = UINT32_MAX;

	t60 = (x289*((x290/x291)/x292));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x293 = 71U;
	int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MIN;
	int64_t t61 = -50353568749LL;

	t61 = (x293*((x294/x295)/x296));

	if (t61 != 2382364601LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MAX;
	int8_t x300 = INT8_MIN;
	int64_t t62 = 2242940527452255LL;

	t62 = (x297*((x298/x299)/x300));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = 1895;
	volatile int8_t x302 = -1;
	volatile int64_t x303 = -166394398LL;
	int64_t t63 = -40609LL;

	t63 = (x301*((x302/x303)/x304));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = INT8_MIN;
	volatile int64_t x307 = INT64_MIN;
	static int64_t x308 = INT64_MAX;
	int64_t t64 = -79416819LL;

	t64 = (x305*((x306/x307)/x308));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x309 = -276;
	volatile uint64_t x310 = 4LLU;
	int64_t x312 = -1LL;
	uint64_t t65 = 11533944494832856LLU;

	t65 = (x309*((x310/x311)/x312));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x313 = UINT32_MAX;
	static int64_t x315 = 774897LL;
	int8_t x316 = -1;

	t66 = (x313*((x314/x315)/x316));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x317 = -1;
	volatile int16_t x318 = -398;
	int8_t x319 = -30;
	int16_t x320 = INT16_MAX;
	volatile int32_t t67 = -3927174;

	t67 = (x317*((x318/x319)/x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x322 = 1036978429LLU;
	uint64_t t68 = 236417LLU;

	t68 = (x321*((x322/x323)/x324));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = 104869968244747LL;
	int64_t x326 = INT64_MIN;
	int16_t x328 = INT16_MAX;
	volatile uint64_t t69 = 4979850101168302343LLU;

	t69 = (x325*((x326/x327)/x328));

	if (t69 != 3051669509294618499LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = INT32_MAX;
	uint8_t x330 = 36U;
	volatile uint16_t x331 = UINT16_MAX;
	static int16_t x332 = INT16_MIN;

	t70 = (x329*((x330/x331)/x332));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = 2059;
	uint64_t x334 = UINT64_MAX;
	int16_t x335 = 9;
	volatile int8_t x336 = 43;

	t71 = (x333*((x334/x335)/x336));

	if (t71 != 5910584664444402087LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = -1;
	uint64_t x338 = 20LLU;
	volatile int64_t x339 = INT64_MIN;
	volatile uint64_t t72 = 1135526128002006650LLU;

	t72 = (x337*((x338/x339)/x340));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x342 = 70LLU;
	uint32_t x343 = UINT32_MAX;
	static volatile uint32_t x344 = UINT32_MAX;
	volatile uint64_t t73 = 5302938349317300711LLU;

	t73 = (x341*((x342/x343)/x344));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = 281150;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = -1;
	uint32_t x348 = UINT32_MAX;
	uint32_t t74 = 1U;

	t74 = (x345*((x346/x347)/x348));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	int32_t x351 = -103066867;
	int32_t x352 = INT32_MIN;

	t75 = (x349*((x350/x351)/x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x353 = -6;
	int32_t x354 = INT32_MIN;
	static volatile int64_t x355 = -1LL;
	static int64_t x356 = INT64_MAX;
	static int64_t t76 = -44801232721719341LL;

	t76 = (x353*((x354/x355)/x356));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = INT32_MIN;
	uint32_t x359 = UINT32_MAX;
	int64_t t77 = 69433239LL;

	t77 = (x357*((x358/x359)/x360));

	if (t77 != 36028797018963968LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x361 = -1;
	static int64_t x362 = -16070746293876942LL;
	int64_t x363 = 3804514LL;
	uint8_t x364 = UINT8_MAX;
	int64_t t78 = 459119LL;

	t78 = (x361*((x362/x363)/x364));

	if (t78 != 16565199LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = UINT32_MAX;
	static int32_t x367 = -1;
	uint32_t x368 = UINT32_MAX;
	uint32_t t79 = 1461U;

	t79 = (x365*((x366/x367)/x368));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x369 = 93762LL;
	int32_t x370 = -93116230;
	uint64_t x371 = 17529674LLU;
	volatile uint64_t t80 = 65833503141587875LLU;

	t80 = (x369*((x370/x371)/x372));

	if (t80 != 1644453112059072LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x373 = INT8_MIN;
	volatile uint8_t x376 = UINT8_MAX;
	int32_t t81 = 27146;

	t81 = (x373*((x374/x375)/x376));

	if (t81 != -384) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x377 = 0U;
	int16_t x380 = -2;
	int32_t t82 = -124;

	t82 = (x377*((x378/x379)/x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x383 = 3U;
	static uint64_t t83 = 42872LLU;

	t83 = (x381*((x382/x383)/x384));

	if (t83 != 11106330681564150225LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x385 = INT32_MIN;
	int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	static int32_t x388 = INT32_MAX;

	t84 = (x385*((x386/x387)/x388));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x389 = UINT8_MAX;
	volatile uint64_t x390 = 1888388676558980167LLU;
	int16_t x391 = -1;
	int64_t x392 = INT64_MAX;

	t85 = (x389*((x390/x391)/x392));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = -1;
	static int16_t x394 = 250;
	volatile int16_t x395 = INT16_MIN;
	int32_t x396 = -1;
	volatile int32_t t86 = -1062484953;

	t86 = (x393*((x394/x395)/x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x397 = INT16_MAX;
	int32_t x398 = -46321;
	int8_t x399 = INT8_MIN;
	static int64_t x400 = INT64_MAX;
	int64_t t87 = 1LL;

	t87 = (x397*((x398/x399)/x400));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x401 = 126158953086LLU;
	int16_t x402 = INT16_MIN;
	static uint32_t x403 = 8294U;
	static int64_t x404 = INT64_MAX;
	static volatile uint64_t t88 = 31LLU;

	t88 = (x401*((x402/x403)/x404));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x410 = INT16_MAX;
	static int16_t x411 = INT16_MAX;
	uint32_t x412 = UINT32_MAX;

	t89 = (x409*((x410/x411)/x412));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x413 = 6;
	volatile int64_t x414 = -1LL;
	int8_t x415 = INT8_MAX;
	uint16_t x416 = 14114U;
	volatile int64_t t90 = 10362237388116LL;

	t90 = (x413*((x414/x415)/x416));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MIN;
	int64_t t91 = 1630386LL;

	t91 = (x417*((x418/x419)/x420));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = -1LL;
	uint64_t x422 = 696540LLU;
	uint64_t x423 = 30048712307LLU;
	int32_t x424 = INT32_MIN;

	t92 = (x421*((x422/x423)/x424));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x426 = 311LL;
	volatile int64_t t93 = 7LL;

	t93 = (x425*((x426/x427)/x428));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x429 = INT16_MIN;
	uint32_t x430 = UINT32_MAX;
	uint8_t x431 = UINT8_MAX;
	int64_t x432 = -863080LL;
	volatile int64_t t94 = 23632746607LL;

	t94 = (x429*((x430/x431)/x432));

	if (t94 != 622592LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x434 = 5544U;
	static volatile uint16_t x436 = 2U;
	volatile uint32_t t95 = 22558U;

	t95 = (x433*((x434/x435)/x436));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x437 = 872U;
	int8_t x438 = INT8_MIN;
	int32_t x439 = 4919934;
	int64_t x440 = INT64_MIN;

	t96 = (x437*((x438/x439)/x440));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = 30372;
	static volatile uint64_t x444 = 627496323425293928LLU;
	static volatile uint64_t t97 = 52470LLU;

	t97 = (x441*((x442/x443)/x444));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x445 = UINT64_MAX;
	int64_t x446 = INT64_MAX;
	static uint32_t x447 = 791311609U;
	static volatile int32_t x448 = 352509556;
	static uint64_t t98 = 969LLU;

	t98 = (x445*((x446/x447)/x448));

	if (t98 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x449 = INT32_MAX;
	int32_t x450 = INT32_MIN;
	int16_t x452 = -7108;
	volatile int32_t t99 = 44;

	t99 = (x449*((x450/x451)/x452));

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

