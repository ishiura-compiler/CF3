#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x14 = -31;
volatile int32_t t4 = 19;
volatile uint64_t t7 = 525297647625LLU;
int64_t x39 = INT64_MIN;
int64_t x41 = -1LL;
uint32_t x45 = 59U;
int32_t x47 = -2;
static volatile int8_t x60 = -1;
uint32_t x61 = UINT32_MAX;
int8_t x64 = INT8_MAX;
static uint8_t x70 = 16U;
static int64_t x76 = -16004422LL;
int32_t x77 = INT32_MIN;
int64_t x78 = -1840430812577683LL;
static volatile int64_t t20 = -41LL;
int8_t x94 = -4;
uint64_t t23 = 24788LLU;
int64_t x110 = -1LL;
int32_t x117 = INT32_MIN;
int16_t x119 = -1;
static volatile int16_t x123 = -1;
int8_t x125 = INT8_MAX;
uint64_t t30 = 60277LLU;
int8_t x130 = INT8_MIN;
static uint8_t x144 = 9U;
int64_t t35 = 1LL;
volatile int32_t x149 = INT32_MIN;
int64_t x151 = INT64_MAX;
volatile uint32_t t38 = 27911864U;
static uint32_t x179 = 4688284U;
uint8_t x194 = 1U;
static uint64_t x197 = 53LLU;
int8_t x198 = 1;
uint8_t x200 = 8U;
static uint64_t t44 = 758151215436462LLU;
static uint16_t x206 = 967U;
int16_t x208 = -444;
static int64_t x216 = INT64_MIN;
uint64_t t48 = 2233119051593LLU;
int64_t x225 = 196291014552LL;
static uint8_t x230 = 11U;
static uint16_t x234 = UINT16_MAX;
int32_t x235 = -6336900;
volatile int8_t x236 = INT8_MIN;
int64_t x239 = 2784810545571647337LL;
uint64_t t54 = 26134625LLU;
static uint64_t t55 = 35480833117933249LLU;
uint32_t x259 = 52986U;
int64_t x262 = INT64_MIN;
uint16_t x267 = UINT16_MAX;
volatile uint8_t x270 = 39U;
int16_t x277 = INT16_MIN;
static volatile int8_t x282 = INT8_MIN;
volatile int8_t x283 = INT8_MAX;
int8_t x287 = -1;
uint32_t x291 = UINT32_MAX;
uint64_t x292 = 26LLU;
uint64_t t66 = 1902474818918201LLU;
int16_t x294 = INT16_MIN;
int16_t x305 = INT16_MIN;
int64_t x308 = -1LL;
int32_t x321 = INT32_MAX;
int32_t x324 = -3889;
static volatile int32_t t72 = 1757046;
static int8_t x333 = -1;
int64_t x339 = INT64_MIN;
int32_t x346 = -11368;
volatile int32_t x348 = 5;
uint8_t x354 = UINT8_MAX;
int64_t x357 = -19783979LL;
static uint64_t t81 = 1082474522LLU;
static int64_t x363 = 4038LL;
volatile int64_t t82 = -75368338110268373LL;
static volatile int32_t x366 = -1;
int64_t x367 = INT64_MIN;
static volatile uint64_t x371 = UINT64_MAX;
uint64_t t84 = 199453011614LLU;
static uint32_t x378 = 110U;
volatile int8_t x384 = INT8_MAX;
int8_t x394 = -1;
int16_t x399 = INT16_MIN;
volatile uint32_t t92 = 1756186609U;
int64_t x416 = -33500981477705LL;
int32_t x420 = -1;
static volatile uint32_t x422 = UINT32_MAX;
volatile uint32_t t96 = 3404U;
volatile int32_t x426 = 47;
int8_t x429 = INT8_MIN;


void f0(void) {
	int16_t x1 = -1;
	int8_t x2 = INT8_MIN;
	int64_t x3 = -16478280LL;
	int8_t x4 = INT8_MIN;
	int64_t t0 = -7664293230615LL;

	t0 = ((x1^(x2/x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MIN;
	volatile int32_t x7 = INT32_MAX;
	int8_t x8 = -1;
	int64_t t1 = 4750903LL;

	t1 = ((x5^(x6/x7))/x8);

	if (t1 != -4294967422LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint64_t x10 = 63345345LLU;
	uint16_t x11 = 4U;
	int8_t x12 = INT8_MIN;
	volatile uint64_t t2 = 0LLU;

	t2 = ((x9^(x10/x11))/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	uint16_t x15 = UINT16_MAX;
	int16_t x16 = INT16_MIN;
	static volatile int64_t t3 = 110180489478LL;

	t3 = ((x13^(x14/x15))/x16);

	if (t3 != -281474976710655LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int16_t x18 = INT16_MIN;
	uint16_t x19 = 29U;
	static int16_t x20 = 108;

	t4 = ((x17^(x18/x19))/x20);

	if (t4 != -292) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MAX;
	uint64_t x22 = 2728635056366571535LLU;
	uint8_t x23 = 121U;
	int32_t x24 = INT32_MAX;
	static uint64_t t5 = 15136807351222692LLU;

	t5 = ((x21^(x22/x23))/x24);

	if (t5 != 10500989LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MIN;
	static uint16_t x27 = UINT16_MAX;
	static int8_t x28 = INT8_MIN;
	static int64_t t6 = -75LL;

	t6 = ((x25^(x26/x27))/x28);

	if (t6 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 2LLU;
	volatile uint64_t x30 = 17743481328952732LLU;
	uint64_t x31 = UINT64_MAX;
	static int16_t x32 = INT16_MAX;

	t7 = ((x29^(x30/x31))/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int64_t x34 = -1LL;
	static uint32_t x35 = UINT32_MAX;
	int64_t x36 = -1LL;
	volatile int64_t t8 = 1074396651570534LL;

	t8 = ((x33^(x34/x35))/x36);

	if (t8 != 32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	uint32_t x38 = 10U;
	int16_t x40 = INT16_MAX;
	volatile int64_t t9 = -280980312487447731LL;

	t9 = ((x37^(x38/x39))/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = 12503LL;
	int8_t x43 = 1;
	int32_t x44 = INT32_MIN;
	int64_t t10 = 480LL;

	t10 = ((x41^(x42/x43))/x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	uint64_t x48 = 1LLU;
	volatile uint64_t t11 = 3985947306237734LLU;

	t11 = ((x45^(x46/x47))/x48);

	if (t11 != 59LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint8_t x50 = 1U;
	int64_t x51 = -620214109280563LL;
	volatile int64_t x52 = INT64_MIN;
	int64_t t12 = 537614620531845801LL;

	t12 = ((x49^(x50/x51))/x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = 55289204543LLU;
	int32_t x54 = -1;
	int64_t x55 = -1LL;
	volatile int64_t x56 = 2526090978LL;
	volatile uint64_t t13 = 218013LLU;

	t13 = ((x53^(x54/x55))/x56);

	if (t13 != 21LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 48U;
	int16_t x58 = INT16_MAX;
	volatile int8_t x59 = 6;
	volatile int32_t t14 = -20226091;

	t14 = ((x57^(x58/x59))/x60);

	if (t14 != -5477) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 420945LLU;
	int8_t x63 = -8;
	static uint64_t t15 = 0LLU;

	t15 = ((x61^(x62/x63))/x64);

	if (t15 != 33818640LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = 58873301;
	int8_t x71 = INT8_MIN;
	int64_t x72 = 6281366LL;
	volatile int64_t t16 = 1LL;

	t16 = ((x69^(x70/x71))/x72);

	if (t16 != 9LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = -59LL;
	uint32_t x74 = 2278U;
	uint8_t x75 = 1U;
	int64_t t17 = -90114LL;

	t17 = ((x73^(x74/x75))/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x79 = UINT16_MAX;
	int16_t x80 = -1;
	volatile int64_t t18 = -30060737LL;

	t18 = ((x77^(x78/x79))/x80);

	if (t18 != -29898884428LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x81 = 18LLU;
	volatile uint64_t x82 = UINT64_MAX;
	static int64_t x83 = -13678LL;
	uint32_t x84 = 565158U;
	static uint64_t t19 = 8540574348LLU;

	t19 = ((x81^(x82/x83))/x84);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 3279LL;
	uint16_t x86 = 90U;
	uint16_t x87 = 7U;
	uint16_t x88 = UINT16_MAX;

	t20 = ((x85^(x86/x87))/x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 493U;
	int64_t x90 = 109LL;
	volatile uint64_t x91 = UINT64_MAX;
	uint16_t x92 = UINT16_MAX;
	volatile uint64_t t21 = 1776924658LLU;

	t21 = ((x89^(x90/x91))/x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	static int8_t x95 = INT8_MAX;
	int16_t x96 = -13;
	static volatile uint32_t t22 = 25844U;

	t22 = ((x93^(x94/x95))/x96);

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = INT16_MIN;
	uint64_t x98 = 2742LLU;
	int32_t x99 = -722687516;
	static int16_t x100 = INT16_MIN;

	t23 = ((x97^(x98/x99))/x100);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -1;
	volatile uint8_t x102 = UINT8_MAX;
	int8_t x103 = INT8_MAX;
	static volatile uint16_t x104 = UINT16_MAX;
	volatile int32_t t24 = 916;

	t24 = ((x101^(x102/x103))/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -728972140;
	int16_t x106 = -1;
	uint8_t x107 = 13U;
	int32_t x108 = 1717;
	static volatile int32_t t25 = 1;

	t25 = ((x105^(x106/x107))/x108);

	if (t25 != -424561) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = INT8_MIN;
	int64_t x111 = 8764141766592LL;
	int32_t x112 = INT32_MAX;
	volatile int64_t t26 = 3355952597762426470LL;

	t26 = ((x109^(x110/x111))/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x113 = 139;
	int16_t x114 = -2622;
	uint32_t x115 = 119313641U;
	int8_t x116 = INT8_MIN;
	uint32_t t27 = 5887098U;

	t27 = ((x113^(x114/x115))/x116);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x118 = INT64_MAX;
	volatile uint64_t x120 = 755661684165LLU;
	uint64_t t28 = 3404558438020443988LLU;

	t28 = ((x117^(x118/x119))/x120);

	if (t28 != 12205689LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = 13;
	int8_t x122 = -11;
	int32_t x124 = INT32_MIN;
	volatile int32_t t29 = -7007459;

	t29 = ((x121^(x122/x123))/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x126 = -1;
	uint64_t x127 = 4603315082875356377LLU;
	static uint16_t x128 = 9203U;

	t30 = ((x125^(x126/x127))/x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	int16_t x131 = INT16_MIN;
	int32_t x132 = INT32_MIN;
	volatile int32_t t31 = -1;

	t31 = ((x129^(x130/x131))/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	static int64_t x134 = -8384832641166818LL;
	static int16_t x135 = INT16_MAX;
	static int32_t x136 = INT32_MIN;
	static int64_t t32 = -7812233244460865LL;

	t32 = ((x133^(x134/x135))/x136);

	if (t32 != -119LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x137 = UINT64_MAX;
	int8_t x138 = 1;
	volatile int8_t x139 = INT8_MIN;
	uint64_t x140 = UINT64_MAX;
	uint64_t t33 = 1068101172308564LLU;

	t33 = ((x137^(x138/x139))/x140);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x141 = INT8_MIN;
	int16_t x142 = -930;
	static int16_t x143 = 212;
	int32_t t34 = -91527;

	t34 = ((x141^(x142/x143))/x144);

	if (t34 != 13) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MIN;
	int8_t x146 = -1;
	static int64_t x147 = 30755041LL;
	uint32_t x148 = 1779974751U;

	t35 = ((x145^(x146/x147))/x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x150 = 147U;
	int16_t x152 = -1;
	volatile int64_t t36 = 1236LL;

	t36 = ((x149^(x150/x151))/x152);

	if (t36 != 2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = 53007;
	int64_t x154 = -18LL;
	static volatile uint8_t x155 = UINT8_MAX;
	int16_t x156 = -1;
	int64_t t37 = -5393683670433LL;

	t37 = ((x153^(x154/x155))/x156);

	if (t37 != -53007LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x157 = -27;
	volatile int16_t x158 = INT16_MIN;
	uint8_t x159 = 62U;
	uint32_t x160 = 97891U;

	t38 = ((x157^(x158/x159))/x160);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x169 = -37;
	int64_t x170 = -16558650353104LL;
	uint8_t x171 = UINT8_MAX;
	static volatile int8_t x172 = INT8_MIN;
	static int64_t t39 = -359794638LL;

	t39 = ((x169^(x170/x171))/x172);

	if (t39 != -507311591LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 4U;
	int32_t x174 = INT32_MAX;
	static int32_t x175 = -1;
	int16_t x176 = INT16_MIN;
	static volatile uint32_t t40 = 27U;

	t40 = ((x173^(x174/x175))/x176);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x177 = 1U;
	static int64_t x178 = INT64_MAX;
	int16_t x180 = INT16_MIN;
	int64_t t41 = 4566LL;

	t41 = ((x177^(x178/x179))/x180);

	if (t41 != -60037953LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MAX;
	uint64_t x190 = UINT64_MAX;
	volatile int16_t x191 = INT16_MIN;
	volatile int64_t x192 = -126LL;
	uint64_t t42 = 31918047913LLU;

	t42 = ((x189^(x190/x191))/x192);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x193 = UINT16_MAX;
	static int32_t x195 = -43;
	static volatile int8_t x196 = -1;
	volatile int32_t t43 = 190450706;

	t43 = ((x193^(x194/x195))/x196);

	if (t43 != -65535) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x199 = 691LLU;

	t44 = ((x197^(x198/x199))/x200);

	if (t44 != 6LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = -3148;
	uint16_t x202 = UINT16_MAX;
	uint64_t x203 = 455492625305121LLU;
	int8_t x204 = INT8_MIN;
	static uint64_t t45 = 709LLU;

	t45 = ((x201^(x202/x203))/x204);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -1LL;
	int16_t x207 = -19;
	volatile int64_t t46 = 7841LL;

	t46 = ((x205^(x206/x207))/x208);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x209 = -1;
	int8_t x210 = INT8_MIN;
	volatile int64_t x211 = -18827653409028LL;
	int16_t x212 = INT16_MAX;
	static volatile int64_t t47 = 45810387296210LL;

	t47 = ((x209^(x210/x211))/x212);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x213 = 56U;
	int16_t x214 = 0;
	uint64_t x215 = UINT64_MAX;

	t48 = ((x213^(x214/x215))/x216);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x217 = INT16_MIN;
	uint16_t x218 = 0U;
	static int8_t x219 = -1;
	int16_t x220 = INT16_MIN;
	volatile int32_t t49 = -1609;

	t49 = ((x217^(x218/x219))/x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x221 = 397676;
	static uint8_t x222 = 0U;
	int32_t x223 = -2068;
	int64_t x224 = 4340965030662LL;
	int64_t t50 = -2892833LL;

	t50 = ((x221^(x222/x223))/x224);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x226 = INT32_MAX;
	int32_t x227 = INT32_MIN;
	uint8_t x228 = 24U;
	int64_t t51 = -1360690617LL;

	t51 = ((x225^(x226/x227))/x228);

	if (t51 != 8178792273LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x229 = 9LLU;
	int8_t x231 = -1;
	int32_t x232 = -1;
	volatile uint64_t t52 = 298662LLU;

	t52 = ((x229^(x230/x231))/x232);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = INT64_MAX;
	int64_t t53 = 6211983LL;

	t53 = ((x233^(x234/x235))/x236);

	if (t53 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x237 = INT32_MIN;
	volatile uint32_t x238 = 1763U;
	volatile uint64_t x240 = UINT64_MAX;

	t54 = ((x237^(x238/x239))/x240);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 13U;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = 3806LLU;
	static uint16_t x248 = 2035U;

	t55 = ((x245^(x246/x247))/x248);

	if (t55 != 1190848542112LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x249 = -1;
	volatile int8_t x250 = 0;
	int32_t x251 = INT32_MIN;
	int64_t x252 = 7878369LL;
	int64_t t56 = -7810892LL;

	t56 = ((x249^(x250/x251))/x252);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = INT8_MAX;
	int32_t x254 = INT32_MIN;
	int8_t x255 = INT8_MIN;
	int32_t x256 = 50243088;
	volatile int32_t t57 = -584677984;

	t57 = ((x253^(x254/x255))/x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = -42016;
	volatile int8_t x258 = -42;
	int64_t x260 = INT64_MAX;
	int64_t t58 = -1211310502016933184LL;

	t58 = ((x257^(x258/x259))/x260);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = -62784;
	int32_t x263 = INT32_MAX;
	int16_t x264 = -1;
	int64_t t59 = -289461LL;

	t59 = ((x261^(x262/x263))/x264);

	if (t59 != -4295030078LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x265 = 149145160172870LL;
	int32_t x266 = INT32_MAX;
	static volatile int8_t x268 = INT8_MIN;
	int64_t t60 = 4194193933LL;

	t60 = ((x265^(x266/x267))/x268);

	if (t60 != -1165196563594LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MIN;
	int16_t x271 = -4;
	volatile uint8_t x272 = 27U;
	volatile int32_t t61 = -4971745;

	t61 = ((x269^(x270/x271))/x272);

	if (t61 != 1213) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x273 = -37;
	uint16_t x274 = 7U;
	uint64_t x275 = 350567486LLU;
	int16_t x276 = INT16_MIN;
	static volatile uint64_t t62 = 1LLU;

	t62 = ((x273^(x274/x275))/x276);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x278 = -46214680081130LL;
	int32_t x279 = 918518231;
	static volatile uint32_t x280 = UINT32_MAX;
	static int64_t t63 = 168131106818991LL;

	t63 = ((x277^(x278/x279))/x280);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = 1;
	int32_t x284 = INT32_MIN;
	static int32_t t64 = -1704051;

	t64 = ((x281^(x282/x283))/x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = 44;
	uint64_t x286 = 1027LLU;
	static int64_t x288 = -191LL;
	uint64_t t65 = 663940LLU;

	t65 = ((x285^(x286/x287))/x288);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = -14;
	static int16_t x290 = -1;

	t66 = ((x289^(x290/x291))/x292);

	if (t66 != 165191049LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = 5U;
	uint8_t x295 = 38U;
	uint16_t x296 = 1872U;
	volatile int32_t t67 = -436;

	t67 = ((x293^(x294/x295))/x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = 16469262422LL;
	uint64_t x299 = 1LLU;
	uint64_t x300 = 1998995755296LLU;
	uint64_t t68 = 22802026666LLU;

	t68 = ((x297^(x298/x299))/x300);

	if (t68 != 9228005LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x306 = INT16_MAX;
	uint32_t x307 = 382U;
	volatile int64_t t69 = 26753LL;

	t69 = ((x305^(x306/x307))/x308);

	if (t69 != -4294934613LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x309 = UINT32_MAX;
	uint16_t x310 = 113U;
	uint8_t x311 = 25U;
	int32_t x312 = -1;
	uint32_t t70 = 2U;

	t70 = ((x309^(x310/x311))/x312);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x317 = INT32_MAX;
	int8_t x318 = 1;
	uint16_t x319 = UINT16_MAX;
	static int16_t x320 = INT16_MIN;
	volatile int32_t t71 = -6137099;

	t71 = ((x317^(x318/x319))/x320);

	if (t71 != -65535) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MIN;

	t72 = ((x321^(x322/x323))/x324);

	if (t72 != -552177) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x325 = INT8_MIN;
	int32_t x326 = 1225;
	static int32_t x327 = INT32_MIN;
	int64_t x328 = -1LL;
	volatile int64_t t73 = -63588705560LL;

	t73 = ((x325^(x326/x327))/x328);

	if (t73 != 128LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x329 = 22889;
	int64_t x330 = 139829583727304032LL;
	int32_t x331 = -38714818;
	int16_t x332 = -10;
	volatile int64_t t74 = -12496LL;

	t74 = ((x329^(x330/x331))/x332);

	if (t74 != 361176600LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x334 = 1532828U;
	int16_t x335 = INT16_MIN;
	int32_t x336 = 29232134;
	uint32_t t75 = 1U;

	t75 = ((x333^(x334/x335))/x336);

	if (t75 != 146U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x337 = 2068711LLU;
	volatile int16_t x338 = INT16_MAX;
	int16_t x340 = -1810;
	static uint64_t t76 = 3224659151853LLU;

	t76 = ((x337^(x338/x339))/x340);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x342 = 2;
	uint64_t x343 = 328LLU;
	static int64_t x344 = 134657756325133145LL;
	uint64_t t77 = 20LLU;

	t77 = ((x341^(x342/x343))/x344);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x345 = 1456U;
	volatile int32_t x347 = 323447291;
	volatile int32_t t78 = -937243;

	t78 = ((x345^(x346/x347))/x348);

	if (t78 != 291) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x349 = INT8_MIN;
	uint64_t x350 = 723340LLU;
	uint32_t x351 = UINT32_MAX;
	uint32_t x352 = UINT32_MAX;
	uint64_t t79 = 298708221484588LLU;

	t79 = ((x349^(x350/x351))/x352);

	if (t79 != 4294967296LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = INT64_MAX;
	static uint64_t x355 = UINT64_MAX;
	static int32_t x356 = INT32_MAX;
	static uint64_t t80 = 10490022674124LLU;

	t80 = ((x353^(x354/x355))/x356);

	if (t80 != 4294967298LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x358 = -1;
	int32_t x359 = INT32_MAX;
	uint64_t x360 = UINT64_MAX;

	t81 = ((x357^(x358/x359))/x360);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x361 = INT16_MAX;
	static uint8_t x362 = 29U;
	static volatile uint8_t x364 = 2U;

	t82 = ((x361^(x362/x363))/x364);

	if (t82 != 16383LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x365 = -1;
	static uint8_t x368 = 7U;
	int64_t t83 = 0LL;

	t83 = ((x365^(x366/x367))/x368);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x369 = INT8_MAX;
	uint8_t x370 = UINT8_MAX;
	int64_t x372 = -1LL;

	t84 = ((x369^(x370/x371))/x372);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x373 = 15U;
	uint64_t x374 = 267042084LLU;
	uint32_t x375 = 31U;
	volatile uint32_t x376 = 11173977U;
	static volatile uint64_t t85 = 7835639785LLU;

	t85 = ((x373^(x374/x375))/x376);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = INT8_MIN;
	volatile int8_t x379 = 10;
	int8_t x380 = 15;
	volatile uint32_t t86 = 55130881U;

	t86 = ((x377^(x378/x379))/x380);

	if (t86 != 286331145U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = -1;
	static int8_t x383 = INT8_MIN;
	volatile int32_t t87 = -3;

	t87 = ((x381^(x382/x383))/x384);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x389 = INT8_MAX;
	volatile uint32_t x390 = UINT32_MAX;
	volatile int8_t x391 = 3;
	uint16_t x392 = 1362U;
	volatile uint32_t t88 = 1015U;

	t88 = ((x389^(x390/x391))/x392);

	if (t88 != 1051142U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = INT64_MIN;
	int32_t x395 = -590294;
	int32_t x396 = INT32_MIN;
	int64_t t89 = 7165LL;

	t89 = ((x393^(x394/x395))/x396);

	if (t89 != 4294967296LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MIN;
	static int8_t x400 = -1;
	volatile int64_t t90 = INT64_MAX;

	t90 = ((x397^(x398/x399))/x400);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x401 = 991U;
	int16_t x402 = INT16_MIN;
	int64_t x403 = -466LL;
	int32_t x404 = 129322;
	int64_t t91 = -1083892018102548LL;

	t91 = ((x401^(x402/x403))/x404);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x405 = INT16_MAX;
	int16_t x406 = INT16_MIN;
	uint32_t x407 = 89U;
	int32_t x408 = INT32_MIN;

	t92 = ((x405^(x406/x407))/x408);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x409 = 1U;
	static int8_t x410 = INT8_MIN;
	int8_t x411 = -1;
	static uint64_t x412 = UINT64_MAX;
	uint64_t t93 = 3694LLU;

	t93 = ((x409^(x410/x411))/x412);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x413 = -1;
	static int64_t x414 = -5424229207784LL;
	int64_t x415 = INT64_MIN;
	volatile int64_t t94 = -86858422499909946LL;

	t94 = ((x413^(x414/x415))/x416);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x417 = 0U;
	uint16_t x418 = 0U;
	uint64_t x419 = 2106712963322545LLU;
	static uint64_t t95 = 519875332830LLU;

	t95 = ((x417^(x418/x419))/x420);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x421 = 24U;
	int32_t x423 = INT32_MIN;
	static int16_t x424 = INT16_MAX;

	t96 = ((x421^(x422/x423))/x424);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = -1;
	static int16_t x427 = 1;
	uint32_t x428 = 63U;
	volatile uint32_t t97 = 61649342U;

	t97 = ((x425^(x426/x427))/x428);

	if (t97 != 68174083U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x430 = 1;
	int32_t x431 = -1;
	int16_t x432 = 8807;
	int32_t t98 = -4377478;

	t98 = ((x429^(x430/x431))/x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x433 = INT8_MIN;
	volatile int16_t x434 = -1;
	uint8_t x435 = 12U;
	volatile int8_t x436 = INT8_MAX;
	volatile int32_t t99 = 1;

	t99 = ((x433^(x434/x435))/x436);

	if (t99 != -1) { NG(); } else { ; }
	
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

