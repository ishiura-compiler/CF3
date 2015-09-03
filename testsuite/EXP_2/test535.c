#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = INT16_MIN;
static uint8_t x12 = 5U;
volatile uint32_t t1 = 1013821514U;
uint8_t x14 = 4U;
uint16_t x16 = UINT16_MAX;
int32_t t3 = -99634284;
int8_t x21 = -1;
uint8_t x22 = 21U;
int8_t x26 = 22;
volatile int64_t x28 = -1LL;
uint8_t x29 = UINT8_MAX;
int16_t x39 = INT16_MIN;
static volatile int32_t t7 = -6966455;
static uint16_t x42 = 22U;
volatile uint8_t x43 = UINT8_MAX;
static uint64_t x47 = UINT64_MAX;
uint8_t x52 = 3U;
uint64_t t10 = 624414044LLU;
int8_t x53 = 0;
static int64_t x55 = -6650LL;
uint32_t x56 = 45U;
volatile uint64_t t13 = 10565LLU;
int8_t x77 = -1;
int64_t x80 = -1LL;
int8_t x95 = INT8_MAX;
static int16_t x104 = INT16_MAX;
int8_t x109 = INT8_MAX;
static uint64_t x111 = 3358806LLU;
volatile uint32_t x114 = 38200206U;
volatile int64_t x116 = -5104534190898727LL;
int8_t x125 = INT8_MAX;
static uint32_t x129 = 4646284U;
int8_t x132 = -1;
uint32_t x140 = UINT32_MAX;
int8_t x158 = 0;
int16_t x165 = -1;
uint8_t x176 = 35U;
volatile int64_t t33 = 0LL;
int64_t t34 = -2324LL;
int64_t x190 = INT64_MIN;
volatile uint8_t x191 = 3U;
int8_t x192 = 9;
uint8_t x195 = UINT8_MAX;
uint16_t x199 = UINT16_MAX;
int32_t x200 = 1;
uint64_t x201 = UINT64_MAX;
int16_t x208 = INT16_MIN;
int32_t x209 = INT32_MIN;
uint32_t x211 = 1U;
volatile uint64_t t43 = 1256105556300LLU;
int64_t x227 = INT64_MIN;
static uint16_t x231 = 412U;
int32_t x233 = 1;
volatile int64_t t47 = -232831317465199850LL;
static uint8_t x238 = UINT8_MAX;
uint32_t x251 = UINT32_MAX;
int8_t x252 = INT8_MIN;
static int16_t x256 = INT16_MAX;
static uint64_t x263 = UINT64_MAX;
uint32_t x264 = UINT32_MAX;
volatile uint32_t x268 = 6U;
static volatile int64_t t52 = 6968904LL;
volatile int64_t x271 = -1LL;
int64_t x272 = -928440587LL;
int16_t x277 = 200;
volatile int64_t t57 = -22778303884LL;
uint64_t x298 = 2454315514458962LLU;
uint8_t x299 = 33U;
static int16_t x300 = INT16_MAX;
volatile int64_t t60 = 51409262653LL;
int16_t x313 = -1;
volatile int16_t x315 = 4873;
static volatile int32_t x324 = INT32_MIN;
int32_t x336 = INT32_MAX;
int64_t t65 = 4191LL;
uint32_t x342 = 59179332U;
static uint8_t x343 = 26U;
uint64_t x361 = UINT64_MAX;
static uint64_t t70 = 508908499587930LLU;
uint32_t x369 = 128308U;
static uint64_t x374 = UINT64_MAX;
uint16_t x377 = 3U;
static int16_t x379 = INT16_MAX;
int64_t x382 = -1LL;
volatile int64_t t74 = 704137163935115LL;
int16_t x388 = -1;
static uint64_t t75 = 857909LLU;
int32_t t76 = -1;
uint32_t x393 = UINT32_MAX;
volatile int8_t x400 = INT8_MIN;
volatile uint64_t t78 = 7376195564700LLU;
static uint64_t x402 = 311LLU;
uint8_t x407 = 15U;
volatile int32_t t80 = 31037973;
static int64_t x411 = 1307LL;
static int16_t x421 = INT16_MIN;
int64_t x425 = -1LL;
volatile uint32_t x447 = 23643814U;
volatile int64_t t89 = -134LL;
static volatile uint32_t x455 = 23421U;
static int16_t x457 = -1;
int8_t x474 = 30;
uint64_t x489 = UINT64_MAX;
static int64_t x492 = -882LL;
static volatile uint32_t t97 = 360170U;
uint8_t x502 = UINT8_MAX;
int64_t x503 = -1LL;
static volatile int32_t t99 = 25344;


void f0(void) {
	volatile int32_t x5 = INT32_MAX;
	static int32_t x6 = -1;
	uint32_t x7 = UINT32_MAX;
	int32_t x8 = 251258385;
	volatile uint32_t t0 = 1089802010U;

	t0 = ((x5*(x6/x7))-x8);

	if (t0 != 1896225262U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 0U;

	t1 = ((x9*(x10/x11))-x12);

	if (t1 != 4294967291U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = INT64_MAX;
	static uint64_t x15 = UINT64_MAX;
	uint64_t t2 = 481016572LLU;

	t2 = ((x13*(x14/x15))-x16);

	if (t2 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MAX;
	uint16_t x18 = UINT16_MAX;
	volatile uint16_t x19 = UINT16_MAX;
	uint8_t x20 = UINT8_MAX;

	t3 = ((x17*(x18/x19))-x20);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x23 = 5;
	static volatile uint64_t x24 = 234477600LLU;
	volatile uint64_t t4 = 478702LLU;

	t4 = ((x21*(x22/x23))-x24);

	if (t4 != 18446744073475074012LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	uint32_t x27 = UINT32_MAX;
	volatile int64_t t5 = -245LL;

	t5 = ((x25*(x26/x27))-x28);

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x30 = 1;
	int64_t x31 = 12LL;
	int32_t x32 = INT32_MAX;
	int64_t t6 = -1385123540230662LL;

	t6 = ((x29*(x30/x31))-x32);

	if (t6 != -2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	int32_t x38 = -1;
	int16_t x40 = -1;

	t7 = ((x37*(x38/x39))-x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MIN;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t8 = -890073974;

	t8 = ((x41*(x42/x43))-x44);

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 0U;
	static uint64_t x46 = 568708122LLU;
	uint32_t x48 = 221611U;
	uint64_t t9 = 115581LLU;

	t9 = ((x45*(x46/x47))-x48);

	if (t9 != 18446744073709330005LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x49 = 8668727221486LLU;
	volatile int32_t x50 = INT32_MAX;
	int16_t x51 = 9;

	t10 = ((x49*(x50/x51))-x52);

	if (t10 != 2403545941886309889LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = INT64_MAX;
	volatile int64_t t11 = 19826300954LL;

	t11 = ((x53*(x54/x55))-x56);

	if (t11 != -45LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = UINT16_MAX;
	uint64_t x58 = 17048740634102LLU;
	static int8_t x59 = -1;
	static int8_t x60 = -1;
	volatile uint64_t t12 = 2494642054LLU;

	t12 = ((x57*(x58/x59))-x60);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = -5;
	int8_t x66 = -16;
	volatile uint64_t x67 = 17425LLU;
	int16_t x68 = INT16_MAX;

	t13 = ((x65*(x66/x67))-x68);

	if (t13 != 18441450890331122999LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x78 = -2182;
	int8_t x79 = 1;
	int64_t t14 = -22LL;

	t14 = ((x77*(x78/x79))-x80);

	if (t14 != 2183LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = -1;
	volatile uint16_t x82 = UINT16_MAX;
	int32_t x83 = -1;
	uint16_t x84 = 6611U;
	volatile int32_t t15 = 3;

	t15 = ((x81*(x82/x83))-x84);

	if (t15 != 58924) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = 1246;
	int32_t x86 = INT32_MIN;
	int64_t x87 = 207979766673050LL;
	int8_t x88 = INT8_MIN;
	static int64_t t16 = -68258875556620207LL;

	t16 = ((x85*(x86/x87))-x88);

	if (t16 != 128LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = -2;
	uint32_t x90 = 2767236U;
	int16_t x91 = 370;
	int8_t x92 = INT8_MAX;
	volatile uint32_t t17 = 108844220U;

	t17 = ((x89*(x90/x91))-x92);

	if (t17 != 4294952211U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = UINT16_MAX;
	volatile int8_t x94 = INT8_MIN;
	int64_t x96 = INT64_MIN;
	static int64_t t18 = -25986535762320LL;

	t18 = ((x93*(x94/x95))-x96);

	if (t18 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = -636LL;
	static int32_t x98 = INT32_MIN;
	uint64_t x99 = 1LLU;
	int32_t x100 = INT32_MIN;
	uint64_t t19 = 16973735344159970LLU;

	t19 = ((x97*(x98/x99))-x100);

	if (t19 != 1367947083776LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x101 = INT64_MIN;
	static int16_t x102 = 31;
	int32_t x103 = -72576289;
	volatile int64_t t20 = -5887179LL;

	t20 = ((x101*(x102/x103))-x104);

	if (t20 != -32767LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = -1;
	uint8_t x106 = 7U;
	int64_t x107 = INT64_MIN;
	static uint8_t x108 = UINT8_MAX;
	static volatile int64_t t21 = -62437772458455583LL;

	t21 = ((x105*(x106/x107))-x108);

	if (t21 != -255LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x110 = -508195042281074LL;
	int16_t x112 = INT16_MIN;
	uint64_t t22 = 296862083LLU;

	t22 = ((x109*(x110/x111))-x112);

	if (t22 != 697471648169232LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x113 = UINT16_MAX;
	int8_t x115 = INT8_MIN;
	volatile int64_t t23 = -1746LL;

	t23 = ((x113*(x114/x115))-x116);

	if (t23 != 5104534190898727LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x126 = -4;
	volatile uint8_t x127 = UINT8_MAX;
	uint16_t x128 = UINT16_MAX;
	int32_t t24 = 373;

	t24 = ((x125*(x126/x127))-x128);

	if (t24 != -65535) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x130 = 6U;
	int64_t x131 = INT64_MIN;
	volatile int64_t t25 = -12964LL;

	t25 = ((x129*(x130/x131))-x132);

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x133 = 216U;
	int64_t x134 = 356152994LL;
	static volatile uint8_t x135 = UINT8_MAX;
	static uint16_t x136 = 3063U;
	int64_t t26 = 24412860LL;

	t26 = ((x133*(x134/x135))-x136);

	if (t26 != 301679385LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x137 = INT16_MIN;
	volatile uint64_t x138 = 14762LLU;
	volatile int8_t x139 = -6;
	uint64_t t27 = 11763941725LLU;

	t27 = ((x137*(x138/x139))-x140);

	if (t27 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x145 = 14404U;
	int8_t x146 = 11;
	static int16_t x147 = INT16_MIN;
	volatile uint8_t x148 = UINT8_MAX;
	volatile int32_t t28 = 2623052;

	t28 = ((x145*(x146/x147))-x148);

	if (t28 != -255) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = -155;
	int16_t x154 = INT16_MIN;
	static volatile int8_t x155 = INT8_MIN;
	static uint32_t x156 = 265832416U;
	uint32_t t29 = 0U;

	t29 = ((x153*(x154/x155))-x156);

	if (t29 != 4029095200U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x157 = 0U;
	int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MAX;
	int64_t t30 = -5953473897617LL;

	t30 = ((x157*(x158/x159))-x160);

	if (t30 != -127LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x166 = INT32_MIN;
	int64_t x167 = INT64_MAX;
	uint32_t x168 = 15195U;
	volatile int64_t t31 = 27814539539629936LL;

	t31 = ((x165*(x166/x167))-x168);

	if (t31 != -15195LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x173 = 1;
	volatile int32_t x174 = -15005597;
	uint8_t x175 = 45U;
	volatile int32_t t32 = -870140;

	t32 = ((x173*(x174/x175))-x176);

	if (t32 != -333492) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = INT16_MIN;
	volatile int8_t x178 = 57;
	int8_t x179 = -1;
	volatile int64_t x180 = -1LL;

	t33 = ((x177*(x178/x179))-x180);

	if (t33 != 1867777LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x181 = 9646;
	volatile int64_t x182 = 34303045214LL;
	uint32_t x183 = 30153096U;
	int32_t x184 = INT32_MIN;

	t34 = ((x181*(x182/x183))-x184);

	if (t34 != 2158451150LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x185 = 1;
	static uint16_t x186 = 6032U;
	uint64_t x187 = UINT64_MAX;
	int8_t x188 = 30;
	static uint64_t t35 = 26LLU;

	t35 = ((x185*(x186/x187))-x188);

	if (t35 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x189 = 676LLU;
	uint64_t t36 = 1481373438170412LLU;

	t36 = ((x189*(x190/x191))-x192);

	if (t36 != 6148914691236517647LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x193 = INT8_MAX;
	volatile int32_t x194 = INT32_MIN;
	volatile int16_t x196 = -1;
	static volatile int32_t t37 = -1763641;

	t37 = ((x193*(x194/x195))-x196);

	if (t37 != -1069531007) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x197 = -1;
	int16_t x198 = -1;
	static int32_t t38 = -49;

	t38 = ((x197*(x198/x199))-x200);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x202 = 0U;
	uint32_t x203 = 18054U;
	int16_t x204 = INT16_MAX;
	static volatile uint64_t t39 = 8LLU;

	t39 = ((x201*(x202/x203))-x204);

	if (t39 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x205 = 17266U;
	int16_t x206 = 0;
	uint32_t x207 = 5561U;
	uint32_t t40 = 260819U;

	t40 = ((x205*(x206/x207))-x208);

	if (t40 != 32768U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x210 = INT16_MAX;
	uint32_t x212 = 80826U;
	uint32_t t41 = 51U;

	t41 = ((x209*(x210/x211))-x212);

	if (t41 != 2147402822U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x213 = 7654;
	static int8_t x214 = INT8_MAX;
	volatile int8_t x215 = -1;
	uint16_t x216 = UINT16_MAX;
	static int32_t t42 = 3266987;

	t42 = ((x213*(x214/x215))-x216);

	if (t42 != -1037593) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = INT16_MIN;
	volatile int64_t x218 = 870LL;
	static uint32_t x219 = 95U;
	static uint64_t x220 = 1215664934020LLU;

	t43 = ((x217*(x218/x219))-x220);

	if (t43 != 18446742858044322684LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x221 = -1;
	int16_t x222 = INT16_MAX;
	int64_t x223 = INT64_MAX;
	int32_t x224 = -1;
	static volatile int64_t t44 = 16034897LL;

	t44 = ((x221*(x222/x223))-x224);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = INT16_MIN;
	uint64_t x226 = 152266323272602154LLU;
	int32_t x228 = -20443154;
	volatile uint64_t t45 = 113LLU;

	t45 = ((x225*(x226/x227))-x228);

	if (t45 != 20443154LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x229 = INT16_MIN;
	volatile int64_t x230 = 3016LL;
	int64_t x232 = 729734560723177801LL;
	static volatile int64_t t46 = -2217782LL;

	t46 = ((x229*(x230/x231))-x232);

	if (t46 != -729734560723407177LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x234 = INT8_MIN;
	int64_t x235 = -1LL;
	int16_t x236 = -29;

	t47 = ((x233*(x234/x235))-x236);

	if (t47 != 157LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x237 = 54U;
	uint8_t x239 = 7U;
	volatile int32_t x240 = -3;
	volatile uint32_t t48 = 4U;

	t48 = ((x237*(x238/x239))-x240);

	if (t48 != 1947U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x249 = INT16_MIN;
	uint64_t x250 = 224378025461303141LLU;
	uint64_t t49 = 7539713512491360LLU;

	t49 = ((x249*(x250/x251))-x252);

	if (t49 != 18446742361841074304LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = -1;
	int64_t x254 = -63LL;
	static volatile uint8_t x255 = 1U;
	int64_t t50 = 6715780748798078LL;

	t50 = ((x253*(x254/x255))-x256);

	if (t50 != -32704LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x261 = -1;
	int8_t x262 = -1;
	static volatile uint64_t t51 = 8709LLU;

	t51 = ((x261*(x262/x263))-x264);

	if (t51 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x265 = -1;
	static int64_t x266 = INT64_MIN;
	int32_t x267 = INT32_MAX;

	t52 = ((x265*(x266/x267))-x268);

	if (t52 != 4294967292LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x269 = UINT16_MAX;
	int8_t x270 = INT8_MIN;
	int64_t t53 = 141717279423618354LL;

	t53 = ((x269*(x270/x271))-x272);

	if (t53 != 936829067LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x278 = -1;
	static uint8_t x279 = 125U;
	int16_t x280 = -1;
	int32_t t54 = -10;

	t54 = ((x277*(x278/x279))-x280);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x281 = 277LLU;
	uint16_t x282 = UINT16_MAX;
	uint64_t x283 = 1505150652LLU;
	int32_t x284 = -126172;
	static volatile uint64_t t55 = 820605024690LLU;

	t55 = ((x281*(x282/x283))-x284);

	if (t55 != 126172LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = -147;
	static uint8_t x287 = UINT8_MAX;
	volatile int16_t x288 = INT16_MIN;
	int32_t t56 = 80;

	t56 = ((x285*(x286/x287))-x288);

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x289 = 190604U;
	static int16_t x290 = -942;
	int64_t x291 = 216LL;
	int16_t x292 = -17;

	t57 = ((x289*(x290/x291))-x292);

	if (t57 != -762399LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x297 = UINT16_MAX;
	uint64_t t58 = 365LLU;

	t58 = ((x297*(x298/x299))-x300);

	if (t58 != 4874047492123220378LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x301 = 9U;
	static int32_t x302 = -1399618;
	volatile int32_t x303 = -6771746;
	int64_t x304 = -13554LL;
	volatile int64_t t59 = -302571LL;

	t59 = ((x301*(x302/x303))-x304);

	if (t59 != 13554LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x309 = INT16_MIN;
	static volatile int64_t x310 = INT64_MIN;
	volatile int64_t x311 = INT64_MIN;
	static uint8_t x312 = UINT8_MAX;

	t60 = ((x309*(x310/x311))-x312);

	if (t60 != -33023LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x314 = 0;
	int8_t x316 = INT8_MIN;
	static int32_t t61 = 4;

	t61 = ((x313*(x314/x315))-x316);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MIN;
	uint64_t x323 = 3LLU;
	volatile uint64_t t62 = 22782726376021LLU;

	t62 = ((x321*(x322/x323))-x324);

	if (t62 != 12297829386052173824LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x329 = 14144462290042LLU;
	static volatile int16_t x330 = 77;
	volatile uint64_t x331 = 52111LLU;
	volatile int64_t x332 = INT64_MIN;
	uint64_t t63 = 11630283488LLU;

	t63 = ((x329*(x330/x331))-x332);

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x333 = 49LLU;
	int8_t x334 = 42;
	int64_t x335 = 8409686708276291LL;
	volatile uint64_t t64 = 23920869266891LLU;

	t64 = ((x333*(x334/x335))-x336);

	if (t64 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x337 = INT8_MIN;
	uint32_t x338 = 1061374098U;
	int64_t x339 = -1LL;
	static int32_t x340 = INT32_MIN;

	t65 = ((x337*(x338/x339))-x340);

	if (t65 != 138003368192LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x341 = -1;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t66 = 25LLU;

	t66 = ((x341*(x342/x343))-x344);

	if (t66 != 4292691169LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x349 = -25;
	volatile int16_t x350 = INT16_MIN;
	static volatile int32_t x351 = -1;
	int32_t x352 = 82862;
	static int32_t t67 = 38743445;

	t67 = ((x349*(x350/x351))-x352);

	if (t67 != -902062) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x357 = -304799553831862LL;
	int8_t x358 = -1;
	int8_t x359 = -1;
	uint8_t x360 = 14U;
	static int64_t t68 = 2017159LL;

	t68 = ((x357*(x358/x359))-x360);

	if (t68 != -304799553831876LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x362 = 10996687578192LLU;
	uint64_t x363 = 184987480LLU;
	int16_t x364 = INT16_MAX;
	uint64_t t69 = 2129279602253261LLU;

	t69 = ((x361*(x362/x363))-x364);

	if (t69 != 18446744073709459404LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x365 = 111851917U;
	volatile int32_t x366 = 191;
	uint64_t x367 = 405469897109LLU;
	uint16_t x368 = 2U;

	t70 = ((x365*(x366/x367))-x368);

	if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x370 = 0;
	int32_t x371 = 7850916;
	volatile uint16_t x372 = 239U;
	volatile uint32_t t71 = 2U;

	t71 = ((x369*(x370/x371))-x372);

	if (t71 != 4294967057U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x373 = INT32_MIN;
	int16_t x375 = INT16_MAX;
	static uint64_t x376 = UINT64_MAX;
	uint64_t t72 = 2795460765214085115LLU;

	t72 = ((x373*(x374/x375))-x376);

	if (t72 != 18445618139442970625LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x378 = -1;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t73 = -2190;

	t73 = ((x377*(x378/x379))-x380);

	if (t73 != -65535) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x381 = 53;
	int32_t x383 = INT32_MAX;
	int32_t x384 = -1;

	t74 = ((x381*(x382/x383))-x384);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x385 = 0U;
	volatile uint64_t x386 = UINT64_MAX;
	uint64_t x387 = UINT64_MAX;

	t75 = ((x385*(x386/x387))-x388);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x389 = 0;
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MIN;
	int8_t x392 = -1;

	t76 = ((x389*(x390/x391))-x392);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x394 = INT64_MIN;
	int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	int64_t t77 = 4512034921497958LL;

	t77 = ((x393*(x394/x395))-x396);

	if (t77 != 6442450943LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x397 = 354612025736151883LLU;
	volatile int16_t x398 = INT16_MIN;
	uint32_t x399 = 13U;

	t78 = ((x397*(x398/x399))-x400);

	if (t78 != 8886832502203768265LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x401 = UINT64_MAX;
	volatile int32_t x403 = 13;
	static int8_t x404 = 13;
	static uint64_t t79 = 1240699419821175248LLU;

	t79 = ((x401*(x402/x403))-x404);

	if (t79 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x405 = INT16_MIN;
	uint16_t x406 = UINT16_MAX;
	static uint16_t x408 = 1672U;

	t80 = ((x405*(x406/x407))-x408);

	if (t80 != -143165064) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x409 = UINT64_MAX;
	int16_t x410 = 15;
	static volatile int32_t x412 = 363812;
	uint64_t t81 = 301935LLU;

	t81 = ((x409*(x410/x411))-x412);

	if (t81 != 18446744073709187804LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x413 = 7679LLU;
	uint64_t x414 = 1478LLU;
	int64_t x415 = -1LL;
	static volatile uint64_t x416 = 54197607LLU;
	volatile uint64_t t82 = 471751692151318LLU;

	t82 = ((x413*(x414/x415))-x416);

	if (t82 != 18446744073655354009LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x417 = -29;
	uint16_t x418 = 477U;
	int32_t x419 = -3610;
	int16_t x420 = 31;
	int32_t t83 = 244;

	t83 = ((x417*(x418/x419))-x420);

	if (t83 != -31) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x422 = -2LL;
	int32_t x423 = INT32_MAX;
	volatile int8_t x424 = INT8_MIN;
	volatile int64_t t84 = -1137774800708158697LL;

	t84 = ((x421*(x422/x423))-x424);

	if (t84 != 128LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x426 = -1;
	int16_t x427 = 95;
	static uint8_t x428 = UINT8_MAX;
	static volatile int64_t t85 = 186667635LL;

	t85 = ((x425*(x426/x427))-x428);

	if (t85 != -255LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x433 = INT32_MAX;
	int64_t x434 = -1LL;
	static uint64_t x435 = 1160169354032220LLU;
	int16_t x436 = INT16_MIN;
	uint64_t t86 = 50085837203345571LLU;

	t86 = ((x433*(x434/x435))-x436);

	if (t86 != 34144990020068LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x441 = -55;
	static volatile uint16_t x442 = 7U;
	uint64_t x443 = UINT64_MAX;
	int16_t x444 = -1;
	volatile uint64_t t87 = 262477680LLU;

	t87 = ((x441*(x442/x443))-x444);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x445 = INT16_MIN;
	int16_t x446 = INT16_MIN;
	volatile uint16_t x448 = 158U;
	volatile uint32_t t88 = 75098U;

	t88 = ((x445*(x446/x447))-x448);

	if (t88 != 4289036130U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x449 = INT8_MIN;
	int64_t x450 = -1LL;
	volatile uint32_t x451 = 75199225U;
	uint16_t x452 = UINT16_MAX;

	t89 = ((x449*(x450/x451))-x452);

	if (t89 != -65535LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x453 = INT16_MIN;
	static int32_t x454 = INT32_MAX;
	volatile int64_t x456 = -9048LL;
	int64_t t90 = 1024625049LL;

	t90 = ((x453*(x454/x455))-x456);

	if (t90 != 1290478424LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x458 = -1;
	volatile int32_t x459 = INT32_MIN;
	static uint8_t x460 = UINT8_MAX;
	volatile int32_t t91 = 198247858;

	t91 = ((x457*(x458/x459))-x460);

	if (t91 != -255) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x465 = 18U;
	volatile uint8_t x466 = UINT8_MAX;
	uint64_t x467 = 287520LLU;
	static int64_t x468 = -1911766452856821LL;
	volatile uint64_t t92 = 95906358026245217LLU;

	t92 = ((x465*(x466/x467))-x468);

	if (t92 != 1911766452856821LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x473 = 1;
	int8_t x475 = INT8_MIN;
	int32_t x476 = 11;
	volatile int32_t t93 = 1;

	t93 = ((x473*(x474/x475))-x476);

	if (t93 != -11) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x477 = 4767192LLU;
	int64_t x478 = -5290096LL;
	volatile uint32_t x479 = 67666698U;
	volatile int16_t x480 = INT16_MAX;
	volatile uint64_t t94 = 176141LLU;

	t94 = ((x477*(x478/x479))-x480);

	if (t94 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x481 = -1;
	int16_t x482 = -1;
	int16_t x483 = 118;
	volatile int64_t x484 = 3530264LL;
	static volatile int64_t t95 = 1049404721821965LL;

	t95 = ((x481*(x482/x483))-x484);

	if (t95 != -3530264LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x490 = 408U;
	uint64_t x491 = 1LLU;
	volatile uint64_t t96 = 607375260514916LLU;

	t96 = ((x489*(x490/x491))-x492);

	if (t96 != 474LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x493 = 1;
	int16_t x494 = 807;
	uint32_t x495 = 28638U;
	volatile int16_t x496 = INT16_MIN;

	t97 = ((x493*(x494/x495))-x496);

	if (t97 != 32768U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x501 = UINT8_MAX;
	int16_t x504 = INT16_MAX;
	int64_t t98 = 3282167637812163LL;

	t98 = ((x501*(x502/x503))-x504);

	if (t98 != -97792LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x505 = 0U;
	uint16_t x506 = UINT16_MAX;
	int32_t x507 = -9;
	int8_t x508 = 3;

	t99 = ((x505*(x506/x507))-x508);

	if (t99 != -3) { NG(); } else { ; }
	
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

