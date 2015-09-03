#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
uint32_t x6 = UINT32_MAX;
uint16_t x8 = 2767U;
int64_t x19 = -1LL;
static int32_t t3 = -2023747;
int16_t x25 = INT16_MIN;
volatile uint32_t x29 = UINT32_MAX;
uint8_t x30 = 2U;
int32_t t7 = 95944;
static int64_t x37 = INT64_MAX;
int8_t x39 = INT8_MAX;
int8_t x47 = -5;
static int8_t x54 = INT8_MIN;
uint8_t x70 = 0U;
static int32_t x75 = INT32_MAX;
int64_t x76 = 497381336976431039LL;
int8_t x78 = -1;
int32_t t17 = 19785;
static int32_t t18 = -3;
static volatile int64_t x95 = -1LL;
int8_t x96 = -7;
int64_t x110 = 558660LL;
int32_t t22 = -298;
int8_t x114 = -1;
static volatile uint64_t x122 = 216LLU;
int64_t x128 = 1040272294291841041LL;
volatile int16_t x130 = -2;
volatile uint64_t x131 = UINT64_MAX;
volatile uint16_t x132 = 4179U;
uint16_t x134 = UINT16_MAX;
int8_t x148 = INT8_MIN;
volatile int32_t t31 = 498431069;
int32_t x158 = -13403;
int32_t t32 = 5530;
volatile int16_t x167 = -1;
int64_t x181 = INT64_MIN;
int32_t t36 = -1;
static uint64_t x194 = UINT64_MAX;
uint8_t x201 = 23U;
uint64_t x210 = 7249LLU;
static volatile int8_t x227 = INT8_MIN;
uint64_t x228 = UINT64_MAX;
volatile int32_t t43 = 3;
static volatile int32_t t44 = 56910;
int32_t x237 = INT32_MIN;
int64_t x245 = -27761362516440LL;
static volatile int64_t x269 = INT64_MIN;
static int16_t x270 = INT16_MIN;
int16_t x278 = 11871;
int16_t x280 = 0;
volatile int8_t x290 = 1;
int32_t x296 = INT32_MIN;
int64_t x297 = 0LL;
static uint64_t x310 = 743LLU;
static int32_t t55 = 15287;
int32_t x314 = 115;
static volatile uint32_t x315 = 79955514U;
static uint8_t x319 = 6U;
int16_t x321 = -1;
static int32_t t58 = -16914;
int16_t x341 = INT16_MIN;
int32_t t62 = -16210;
static int8_t x346 = INT8_MAX;
int32_t t64 = -435582;
static uint32_t x353 = UINT32_MAX;
uint8_t x357 = 0U;
int8_t x358 = -1;
static volatile int16_t x363 = 1;
uint32_t x367 = 223U;
volatile int64_t x370 = -1LL;
int8_t x373 = INT8_MIN;
int32_t x375 = -39310;
uint64_t x378 = 68031716155LLU;
volatile int16_t x381 = INT16_MIN;
uint8_t x382 = 0U;
static volatile int8_t x394 = 1;
int8_t x395 = -1;
static int8_t x396 = 9;
int8_t x400 = INT8_MIN;
static int8_t x410 = INT8_MIN;
uint16_t x414 = 100U;
volatile int32_t t80 = -6695416;
static volatile int32_t t82 = 454;
static int64_t x435 = -28LL;
int8_t x438 = 0;
uint16_t x440 = 739U;
volatile int64_t x448 = INT64_MAX;
volatile uint16_t x453 = 116U;
uint16_t x454 = 7U;
int32_t t88 = 409;
int8_t x461 = -7;
uint16_t x462 = 290U;
int32_t t90 = -19786;
uint32_t x467 = 1944U;
volatile int32_t t95 = -4193271;
int16_t x496 = INT16_MAX;
static int16_t x499 = INT16_MIN;
int16_t x501 = 1;
uint8_t x502 = UINT8_MAX;
int16_t x504 = -1;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	static int16_t x3 = INT16_MIN;
	uint16_t x4 = 1624U;
	volatile int32_t t0 = 435;

	t0 = (x1==((x2*x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	static uint32_t x7 = 108U;
	int32_t t1 = -3;

	t1 = (x5==((x6*x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile int16_t x10 = -1;
	uint16_t x11 = 29U;
	uint8_t x12 = 0U;
	volatile int32_t t2 = -47211;

	t2 = (x9==((x10*x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = 2U;
	uint8_t x18 = 33U;
	int32_t x20 = -23;

	t3 = (x17==((x18*x19)|x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 194395U;
	int32_t x22 = INT32_MAX;
	int64_t x23 = 7394LL;
	uint32_t x24 = 31U;
	int32_t t4 = 2302;

	t4 = (x21==((x22*x23)|x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = 7;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = 12074U;
	volatile int32_t t5 = -1709590;

	t5 = (x25==((x26*x27)|x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x31 = 28612519;
	static int64_t x32 = INT64_MIN;
	int32_t t6 = -1490;

	t6 = (x29==((x30*x31)|x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	int16_t x34 = INT16_MAX;
	int16_t x35 = 9136;
	volatile uint32_t x36 = 293678U;

	t7 = (x33==((x34*x35)|x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x38 = 1U;
	static int16_t x40 = INT16_MIN;
	static volatile int32_t t8 = -21141;

	t8 = (x37==((x38*x39)|x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = INT32_MIN;
	volatile uint64_t x42 = 1160721503LLU;
	int64_t x43 = 1120536151713863869LL;
	int64_t x44 = INT64_MIN;
	int32_t t9 = -1015969;

	t9 = (x41==((x42*x43)|x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -184286LL;
	int32_t x46 = -80;
	volatile uint8_t x48 = 1U;
	int32_t t10 = 1869783;

	t10 = (x45==((x46*x47)|x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	uint16_t x55 = 961U;
	uint64_t x56 = 4LLU;
	static int32_t t11 = 67430;

	t11 = (x53==((x54*x55)|x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	volatile int16_t x58 = INT16_MIN;
	static uint64_t x59 = UINT64_MAX;
	int64_t x60 = -832219972240997LL;
	static int32_t t12 = -339285166;

	t12 = (x57==((x58*x59)|x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x62 = 94U;
	int8_t x63 = -1;
	int64_t x64 = INT64_MIN;
	int32_t t13 = -1388;

	t13 = (x61==((x62*x63)|x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 268856682U;
	uint32_t x71 = 737U;
	int64_t x72 = -7811208LL;
	volatile int32_t t14 = 481;

	t14 = (x69==((x70*x71)|x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -118;
	int64_t x74 = 3042112LL;
	volatile int32_t t15 = -299864;

	t15 = (x73==((x74*x75)|x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 14363U;
	uint32_t x79 = 57706704U;
	int32_t x80 = 2743;
	volatile int32_t t16 = -3716;

	t16 = (x77==((x78*x79)|x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 613U;
	int64_t x82 = 1823LL;
	static volatile uint32_t x83 = UINT32_MAX;
	int32_t x84 = -911258841;

	t17 = (x81==((x82*x83)|x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x89 = INT8_MAX;
	int16_t x90 = INT16_MIN;
	int8_t x91 = 1;
	int32_t x92 = -2351;

	t18 = (x89==((x90*x91)|x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = 1089;
	int32_t t19 = -86;

	t19 = (x93==((x94*x95)|x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -2;
	uint64_t x98 = 13791623LLU;
	int32_t x99 = -102706299;
	int32_t x100 = 12329143;
	volatile int32_t t20 = -2;

	t20 = (x97==((x98*x99)|x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MAX;
	static int16_t x102 = -388;
	uint16_t x103 = 13766U;
	uint32_t x104 = 2U;
	int32_t t21 = -6;

	t21 = (x101==((x102*x103)|x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x109 = INT16_MIN;
	uint16_t x111 = 509U;
	static uint64_t x112 = 1448LLU;

	t22 = (x109==((x110*x111)|x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x113 = UINT32_MAX;
	static int16_t x115 = INT16_MIN;
	int16_t x116 = INT16_MIN;
	static int32_t t23 = 12818;

	t23 = (x113==((x114*x115)|x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = 1U;
	int64_t x118 = -457264932LL;
	int32_t x119 = INT32_MIN;
	int64_t x120 = 14909558164305LL;
	volatile int32_t t24 = -172;

	t24 = (x117==((x118*x119)|x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x121 = -1;
	static int64_t x123 = INT64_MIN;
	static int8_t x124 = -1;
	static volatile int32_t t25 = -3632707;

	t25 = (x121==((x122*x123)|x124));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = -3408;
	int32_t x126 = INT32_MAX;
	uint32_t x127 = UINT32_MAX;
	int32_t t26 = 2;

	t26 = (x125==((x126*x127)|x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = 0U;
	int32_t t27 = -116308;

	t27 = (x129==((x130*x131)|x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x133 = 0U;
	int8_t x135 = INT8_MAX;
	uint64_t x136 = 7671774LLU;
	static int32_t t28 = 4;

	t28 = (x133==((x134*x135)|x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = -1;
	volatile int16_t x146 = INT16_MIN;
	uint16_t x147 = 22761U;
	int32_t t29 = 47;

	t29 = (x145==((x146*x147)|x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x149 = -139186;
	volatile int16_t x150 = INT16_MIN;
	volatile int8_t x151 = INT8_MAX;
	int64_t x152 = -2413449744155784525LL;
	volatile int32_t t30 = -3;

	t30 = (x149==((x150*x151)|x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x153 = 3U;
	int32_t x154 = 46;
	static int8_t x155 = -7;
	volatile int16_t x156 = -1;

	t31 = (x153==((x154*x155)|x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = INT32_MIN;
	int8_t x159 = INT8_MAX;
	volatile int64_t x160 = INT64_MIN;

	t32 = (x157==((x158*x159)|x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x165 = -1;
	uint16_t x166 = 239U;
	int64_t x168 = INT64_MIN;
	volatile int32_t t33 = -1;

	t33 = (x165==((x166*x167)|x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x169 = UINT32_MAX;
	volatile uint8_t x170 = 54U;
	int64_t x171 = -1LL;
	int16_t x172 = INT16_MIN;
	volatile int32_t t34 = -809996436;

	t34 = (x169==((x170*x171)|x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = -12921664996235LL;
	int8_t x179 = 1;
	uint8_t x180 = UINT8_MAX;
	int32_t t35 = 107472473;

	t35 = (x177==((x178*x179)|x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x182 = 1U;
	int32_t x183 = -1;
	static uint64_t x184 = 58513132784310LLU;

	t36 = (x181==((x182*x183)|x184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x193 = 6U;
	int64_t x195 = INT64_MIN;
	volatile uint8_t x196 = UINT8_MAX;
	volatile int32_t t37 = -53;

	t37 = (x193==((x194*x195)|x196));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x202 = INT8_MAX;
	uint32_t x203 = UINT32_MAX;
	uint8_t x204 = UINT8_MAX;
	int32_t t38 = -9914;

	t38 = (x201==((x202*x203)|x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = 180849215148465LL;
	uint64_t x211 = UINT64_MAX;
	uint16_t x212 = UINT16_MAX;
	int32_t t39 = -7;

	t39 = (x209==((x210*x211)|x212));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x217 = UINT16_MAX;
	int8_t x218 = -1;
	int8_t x219 = 8;
	static int8_t x220 = INT8_MIN;
	int32_t t40 = 77768082;

	t40 = (x217==((x218*x219)|x220));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = INT64_MAX;
	uint16_t x222 = 395U;
	int8_t x223 = INT8_MAX;
	static volatile int8_t x224 = -9;
	volatile int32_t t41 = -8020;

	t41 = (x221==((x222*x223)|x224));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x225 = INT16_MAX;
	volatile int64_t x226 = -1LL;
	int32_t t42 = -1142;

	t42 = (x225==((x226*x227)|x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x229 = 3381733180LL;
	static int16_t x230 = -1;
	int8_t x231 = -1;
	uint64_t x232 = 330913400051890638LLU;

	t43 = (x229==((x230*x231)|x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x233 = UINT32_MAX;
	int8_t x234 = -63;
	uint16_t x235 = 835U;
	int64_t x236 = -1LL;

	t44 = (x233==((x234*x235)|x236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x238 = 188LLU;
	int16_t x239 = INT16_MAX;
	int8_t x240 = INT8_MAX;
	static volatile int32_t t45 = 1;

	t45 = (x237==((x238*x239)|x240));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x241 = 4352022746401747537LLU;
	uint32_t x242 = 109515U;
	int32_t x243 = INT32_MAX;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t46 = 7746;

	t46 = (x241==((x242*x243)|x244));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x246 = -1;
	volatile uint8_t x247 = UINT8_MAX;
	int8_t x248 = -6;
	int32_t t47 = 125;

	t47 = (x245==((x246*x247)|x248));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x249 = INT32_MIN;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = -40;
	static volatile uint16_t x252 = 93U;
	int32_t t48 = -4;

	t48 = (x249==((x250*x251)|x252));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x261 = -2;
	int32_t x262 = INT32_MAX;
	static uint64_t x263 = 984566370467333LLU;
	int16_t x264 = INT16_MIN;
	int32_t t49 = 0;

	t49 = (x261==((x262*x263)|x264));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x271 = INT16_MAX;
	volatile int64_t x272 = 1LL;
	volatile int32_t t50 = -2391;

	t50 = (x269==((x270*x271)|x272));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x277 = INT32_MAX;
	static volatile int8_t x279 = INT8_MIN;
	int32_t t51 = -2601651;

	t51 = (x277==((x278*x279)|x280));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x289 = -1;
	volatile uint8_t x291 = 76U;
	static int32_t x292 = -6651490;
	int32_t t52 = -370;

	t52 = (x289==((x290*x291)|x292));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x293 = -35;
	uint16_t x294 = 25708U;
	static volatile int8_t x295 = INT8_MAX;
	volatile int32_t t53 = 189966926;

	t53 = (x293==((x294*x295)|x296));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x298 = INT16_MIN;
	uint8_t x299 = 13U;
	static volatile int8_t x300 = -1;
	volatile int32_t t54 = -98242946;

	t54 = (x297==((x298*x299)|x300));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x309 = UINT8_MAX;
	int32_t x311 = -1;
	int16_t x312 = -1310;

	t55 = (x309==((x310*x311)|x312));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x313 = -1LL;
	volatile int16_t x316 = INT16_MAX;
	int32_t t56 = -1886;

	t56 = (x313==((x314*x315)|x316));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x317 = 1;
	volatile int64_t x318 = -1165LL;
	int8_t x320 = -1;
	volatile int32_t t57 = 4424002;

	t57 = (x317==((x318*x319)|x320));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x322 = -26;
	uint8_t x323 = 3U;
	int16_t x324 = INT16_MIN;

	t58 = (x321==((x322*x323)|x324));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x325 = INT64_MIN;
	int32_t x326 = -4637;
	volatile int16_t x327 = 4916;
	int16_t x328 = INT16_MIN;
	int32_t t59 = 20;

	t59 = (x325==((x326*x327)|x328));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x333 = 254069024979904LLU;
	int64_t x334 = -1LL;
	static volatile int32_t x335 = 0;
	int64_t x336 = 282356254475LL;
	volatile int32_t t60 = -493582388;

	t60 = (x333==((x334*x335)|x336));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x337 = -1;
	uint8_t x338 = 3U;
	int64_t x339 = -1LL;
	static uint32_t x340 = 2U;
	int32_t t61 = -5506;

	t61 = (x337==((x338*x339)|x340));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x342 = 6U;
	int32_t x343 = -1;
	uint32_t x344 = 1331203U;

	t62 = (x341==((x342*x343)|x344));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x345 = -1;
	uint32_t x347 = 21635U;
	static int8_t x348 = -1;
	volatile int32_t t63 = 466;

	t63 = (x345==((x346*x347)|x348));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x349 = -1LL;
	uint32_t x350 = UINT32_MAX;
	uint16_t x351 = 1882U;
	volatile int32_t x352 = -1;

	t64 = (x349==((x350*x351)|x352));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x354 = 0;
	int8_t x355 = 25;
	uint64_t x356 = 26783667003450942LLU;
	volatile int32_t t65 = 0;

	t65 = (x353==((x354*x355)|x356));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x359 = INT8_MAX;
	int16_t x360 = 6116;
	volatile int32_t t66 = -18044449;

	t66 = (x357==((x358*x359)|x360));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x361 = -1;
	int32_t x362 = -1;
	volatile int64_t x364 = 77568027445769LL;
	int32_t t67 = 10969721;

	t67 = (x361==((x362*x363)|x364));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x365 = 8283;
	int32_t x366 = -1;
	int8_t x368 = INT8_MIN;
	int32_t t68 = 233105;

	t68 = (x365==((x366*x367)|x368));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x369 = INT32_MIN;
	volatile int64_t x371 = INT64_MAX;
	uint8_t x372 = UINT8_MAX;
	static volatile int32_t t69 = 124830288;

	t69 = (x369==((x370*x371)|x372));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x374 = 267U;
	int64_t x376 = INT64_MAX;
	int32_t t70 = 29547258;

	t70 = (x373==((x374*x375)|x376));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x377 = -302;
	static int32_t x379 = INT32_MAX;
	int16_t x380 = INT16_MIN;
	volatile int32_t t71 = 183;

	t71 = (x377==((x378*x379)|x380));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x383 = -1;
	uint16_t x384 = UINT16_MAX;
	static int32_t t72 = -111;

	t72 = (x381==((x382*x383)|x384));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x385 = 12U;
	static int64_t x386 = -1LL;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = UINT64_MAX;
	int32_t t73 = -580;

	t73 = (x385==((x386*x387)|x388));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x389 = 190450U;
	uint64_t x390 = UINT64_MAX;
	uint8_t x391 = 0U;
	uint8_t x392 = 10U;
	volatile int32_t t74 = -2130;

	t74 = (x389==((x390*x391)|x392));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x393 = -1;
	static volatile int32_t t75 = 12117;

	t75 = (x393==((x394*x395)|x396));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x397 = UINT64_MAX;
	static uint16_t x398 = 0U;
	int32_t x399 = INT32_MAX;
	int32_t t76 = -13901;

	t76 = (x397==((x398*x399)|x400));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x405 = -25;
	int16_t x406 = -1534;
	uint64_t x407 = UINT64_MAX;
	static uint8_t x408 = UINT8_MAX;
	static int32_t t77 = 52;

	t77 = (x405==((x406*x407)|x408));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x409 = -21;
	volatile int16_t x411 = -105;
	static uint64_t x412 = UINT64_MAX;
	int32_t t78 = -6;

	t78 = (x409==((x410*x411)|x412));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x413 = INT16_MIN;
	volatile int16_t x415 = 0;
	uint32_t x416 = 749U;
	static int32_t t79 = -54987;

	t79 = (x413==((x414*x415)|x416));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x417 = 859712374;
	volatile int8_t x418 = INT8_MIN;
	uint32_t x419 = 3000918U;
	uint16_t x420 = 1972U;

	t80 = (x417==((x418*x419)|x420));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x421 = UINT32_MAX;
	uint32_t x422 = 108860U;
	static int32_t x423 = -221;
	uint64_t x424 = 6LLU;
	volatile int32_t t81 = 233238104;

	t81 = (x421==((x422*x423)|x424));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x425 = UINT64_MAX;
	int8_t x426 = -2;
	static volatile uint8_t x427 = 1U;
	uint16_t x428 = UINT16_MAX;

	t82 = (x425==((x426*x427)|x428));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x429 = 19511923629LLU;
	static int16_t x430 = INT16_MIN;
	int8_t x431 = INT8_MAX;
	int32_t x432 = INT32_MIN;
	int32_t t83 = 1;

	t83 = (x429==((x430*x431)|x432));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x433 = UINT64_MAX;
	static int32_t x434 = INT32_MIN;
	static uint16_t x436 = 3U;
	int32_t t84 = 705063;

	t84 = (x433==((x434*x435)|x436));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x437 = UINT64_MAX;
	int64_t x439 = 57057690291951LL;
	static int32_t t85 = 127290109;

	t85 = (x437==((x438*x439)|x440));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x445 = INT64_MIN;
	int32_t x446 = INT32_MIN;
	uint32_t x447 = 309906080U;
	static int32_t t86 = 1755092;

	t86 = (x445==((x446*x447)|x448));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x449 = UINT32_MAX;
	uint8_t x450 = UINT8_MAX;
	volatile int32_t x451 = 0;
	uint8_t x452 = 11U;
	volatile int32_t t87 = 8145817;

	t87 = (x449==((x450*x451)|x452));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x455 = 1140U;
	uint8_t x456 = 26U;

	t88 = (x453==((x454*x455)|x456));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x457 = INT32_MIN;
	static int64_t x458 = 4185453LL;
	uint8_t x459 = UINT8_MAX;
	uint64_t x460 = UINT64_MAX;
	int32_t t89 = -16196;

	t89 = (x457==((x458*x459)|x460));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x463 = -1LL;
	static volatile int32_t x464 = 7175283;

	t90 = (x461==((x462*x463)|x464));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x465 = INT16_MAX;
	int32_t x466 = INT32_MIN;
	volatile uint16_t x468 = 800U;
	volatile int32_t t91 = -1;

	t91 = (x465==((x466*x467)|x468));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x469 = -13;
	volatile int8_t x470 = INT8_MIN;
	volatile int16_t x471 = -1;
	int8_t x472 = -19;
	int32_t t92 = -497068;

	t92 = (x469==((x470*x471)|x472));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x477 = INT64_MIN;
	int16_t x478 = INT16_MIN;
	volatile uint8_t x479 = UINT8_MAX;
	uint64_t x480 = UINT64_MAX;
	volatile int32_t t93 = -84;

	t93 = (x477==((x478*x479)|x480));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x481 = 3598;
	uint32_t x482 = 13U;
	uint16_t x483 = 1786U;
	static uint64_t x484 = 615861LLU;
	volatile int32_t t94 = -3328802;

	t94 = (x481==((x482*x483)|x484));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x485 = 1;
	int8_t x486 = -1;
	int64_t x487 = INT64_MAX;
	uint64_t x488 = UINT64_MAX;

	t95 = (x485==((x486*x487)|x488));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x493 = 227173178306708LLU;
	int32_t x494 = -2025;
	volatile uint16_t x495 = 3955U;
	int32_t t96 = -14;

	t96 = (x493==((x494*x495)|x496));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x497 = 22U;
	static uint8_t x498 = 34U;
	uint32_t x500 = 19559U;
	volatile int32_t t97 = 4;

	t97 = (x497==((x498*x499)|x500));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x503 = UINT16_MAX;
	static int32_t t98 = 0;

	t98 = (x501==((x502*x503)|x504));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x505 = UINT16_MAX;
	volatile int16_t x506 = 3;
	uint16_t x507 = UINT16_MAX;
	int32_t x508 = INT32_MIN;
	int32_t t99 = -214;

	t99 = (x505==((x506*x507)|x508));

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

