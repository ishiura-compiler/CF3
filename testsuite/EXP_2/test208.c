#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 56307253584777952LLU;
int16_t x9 = INT16_MIN;
volatile uint8_t x19 = 18U;
static int16_t x21 = INT16_MAX;
uint64_t t5 = 922505834LLU;
int8_t x29 = INT8_MAX;
volatile int64_t t7 = -7527767743753480LL;
volatile uint16_t x44 = UINT16_MAX;
int8_t x53 = 1;
int32_t x54 = 0;
volatile uint64_t x62 = UINT64_MAX;
uint64_t t10 = 17806322821331886LLU;
volatile int8_t x68 = INT8_MAX;
static int16_t x81 = INT16_MIN;
int16_t x82 = INT16_MIN;
int8_t x84 = 5;
volatile uint16_t x91 = 32U;
volatile int64_t x102 = -15469217LL;
static volatile int64_t t16 = -773675772655166134LL;
uint8_t x113 = 54U;
uint8_t x131 = 0U;
volatile int64_t t19 = 65772556423253LL;
uint32_t x144 = 13318U;
uint32_t t21 = 49447U;
int16_t x149 = INT16_MIN;
volatile int16_t x152 = -36;
static int16_t x153 = -1;
int8_t x158 = INT8_MAX;
volatile int32_t x159 = -1;
uint64_t t24 = 488963LLU;
uint32_t x175 = 36423740U;
int32_t x176 = INT32_MAX;
int32_t x183 = INT32_MAX;
uint64_t x189 = UINT64_MAX;
int32_t x193 = -1;
volatile int8_t x211 = INT8_MAX;
int32_t x213 = -1639167;
static int8_t x218 = INT8_MIN;
int16_t x229 = INT16_MAX;
int64_t t37 = -34060802LL;
int16_t x246 = INT16_MIN;
static uint64_t x259 = UINT64_MAX;
uint16_t x260 = UINT16_MAX;
uint64_t t40 = 4745682477696LLU;
uint16_t x264 = 564U;
int32_t t41 = -85206;
volatile int8_t x271 = -1;
uint64_t t45 = 24640841LLU;
volatile uint8_t x289 = 71U;
static int16_t x293 = INT16_MAX;
int32_t x296 = INT32_MIN;
volatile uint64_t t48 = 36LLU;
uint8_t x324 = UINT8_MAX;
static uint16_t x333 = UINT16_MAX;
static int8_t x351 = 1;
int64_t x352 = INT64_MIN;
int16_t x360 = INT16_MAX;
uint16_t x363 = 363U;
uint64_t x366 = 221LLU;
int8_t x367 = -4;
volatile uint16_t x380 = UINT16_MAX;
int32_t x384 = 3890016;
int32_t t61 = -517249;
volatile int8_t x391 = INT8_MAX;
volatile int8_t x418 = -7;
static volatile uint64_t t68 = 632913916LLU;
static int32_t x434 = -1;
int8_t x435 = INT8_MIN;
uint64_t x454 = 18180591LLU;
static volatile int16_t x469 = -1;
static int16_t x470 = INT16_MAX;
static int8_t x471 = INT8_MIN;
int32_t x475 = 34345341;
int16_t x483 = INT16_MIN;
uint64_t t78 = 465186275002136033LLU;
uint8_t x486 = 2U;
volatile int64_t x487 = 676800447264LL;
static int16_t x494 = -45;
static volatile int8_t x495 = INT8_MIN;
int8_t x506 = INT8_MIN;
uint16_t x528 = 9U;
static volatile uint32_t t87 = 72U;
static volatile uint64_t x537 = 223LLU;
volatile uint64_t x542 = 22532757429878083LLU;
static int16_t x549 = -1;
volatile uint8_t x553 = UINT8_MAX;
static int16_t x560 = 5785;
int64_t x561 = -1LL;
uint32_t x564 = 215980U;
volatile uint8_t x576 = 1U;
uint32_t x578 = 26U;
int64_t x580 = 111517732848010LL;
static volatile int8_t x582 = -1;
uint32_t x583 = 171U;
volatile int8_t x588 = -1;


void f0(void) {
	uint64_t x2 = UINT64_MAX;
	int32_t x3 = INT32_MIN;
	volatile uint8_t x4 = UINT8_MAX;
	static volatile uint64_t t0 = 647120LLU;

	t0 = ((x1*(x2-x3))^x4);

	if (t0 != 815536679045377503LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -2LL;
	int16_t x6 = -1;
	int32_t x7 = -27925;
	static uint32_t x8 = UINT32_MAX;
	volatile int64_t t1 = -47200349LL;

	t1 = ((x5*(x6-x7))^x8);

	if (t1 != -4294911449LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	uint64_t x11 = 61193LLU;
	uint16_t x12 = 1U;
	volatile uint64_t t2 = 1LLU;

	t2 = ((x9*(x10-x11))^x12);

	if (t2 != 3078914049LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 10U;
	uint64_t x14 = UINT64_MAX;
	volatile uint16_t x15 = 1U;
	int8_t x16 = 7;
	static volatile uint64_t t3 = 1459781717031896LLU;

	t3 = ((x13*(x14-x15))^x16);

	if (t3 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 12;
	volatile int8_t x18 = -1;
	int16_t x20 = INT16_MAX;
	int32_t t4 = -1057853732;

	t4 = ((x17*(x18-x19))^x20);

	if (t4 != -32541) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = UINT8_MAX;
	static uint64_t x23 = UINT64_MAX;
	volatile int8_t x24 = INT8_MIN;

	t5 = ((x21*(x22-x23))^x24);

	if (t5 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x30 = -1;
	static int8_t x31 = INT8_MIN;
	uint32_t x32 = UINT32_MAX;
	uint32_t t6 = 29U;

	t6 = ((x29*(x30-x31))^x32);

	if (t6 != 4294951166U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	int32_t x38 = -1;
	int64_t x39 = -1LL;
	volatile uint16_t x40 = 28U;

	t7 = ((x37*(x38-x39))^x40);

	if (t7 != 28LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x41 = 0;
	static int64_t x42 = 896668795342282LL;
	int16_t x43 = -1;
	volatile int64_t t8 = 755062044LL;

	t8 = ((x41*(x42-x43))^x44);

	if (t8 != 65535LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x55 = 135054;
	int8_t x56 = -1;
	static volatile int32_t t9 = 18672;

	t9 = ((x53*(x54-x55))^x56);

	if (t9 != 135053) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 219665414LLU;
	int32_t x63 = -1;
	volatile uint8_t x64 = UINT8_MAX;

	t10 = ((x61*(x62-x63))^x64);

	if (t10 != 255LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = 0U;
	static int64_t x66 = -3017562570LL;
	static int8_t x67 = 3;
	volatile int64_t t11 = 46750498537LL;

	t11 = ((x65*(x66-x67))^x68);

	if (t11 != 127LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = -1;
	volatile uint64_t x74 = UINT64_MAX;
	uint32_t x75 = 19U;
	uint16_t x76 = 2571U;
	uint64_t t12 = 223481386724073822LLU;

	t12 = ((x73*(x74-x75))^x76);

	if (t12 != 2591LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x83 = -1;
	int32_t t13 = 8481844;

	t13 = ((x81*(x82-x83))^x84);

	if (t13 != 1073709061) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x89 = 1600U;
	volatile int32_t x90 = -1;
	int64_t x92 = 517419249LL;
	int64_t t14 = -27462LL;

	t14 = ((x89*(x90-x91))^x92);

	if (t14 != -517471951LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x93 = 3U;
	int8_t x94 = -1;
	static int32_t x95 = -1374017;
	static int16_t x96 = INT16_MIN;
	int32_t t15 = -940181259;

	t15 = ((x93*(x94-x95))^x96);

	if (t15 != -4102720) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x101 = INT8_MIN;
	uint8_t x103 = UINT8_MAX;
	volatile uint32_t x104 = 761007050U;

	t16 = ((x101*(x102-x103))^x104);

	if (t16 != 1532615626LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x114 = INT8_MAX;
	volatile int16_t x115 = -1;
	int32_t x116 = INT32_MAX;
	int32_t t17 = 2201;

	t17 = ((x113*(x114-x115))^x116);

	if (t17 != 2147476735) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MAX;
	uint8_t x132 = UINT8_MAX;
	static volatile int32_t t18 = 316;

	t18 = ((x129*(x130-x131))^x132);

	if (t18 != -1073708801) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x133 = -1LL;
	uint32_t x134 = 0U;
	uint8_t x135 = UINT8_MAX;
	uint32_t x136 = UINT32_MAX;

	t19 = ((x133*(x134-x135))^x136);

	if (t19 != -256LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x137 = 2892453442194LLU;
	int16_t x138 = INT16_MAX;
	uint32_t x139 = UINT32_MAX;
	int8_t x140 = INT8_MAX;
	uint64_t t20 = 28839LLU;

	t20 = ((x137*(x138-x139))^x140);

	if (t20 != 94779914393813119LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x141 = INT8_MAX;
	int8_t x142 = INT8_MIN;
	int16_t x143 = -103;

	t21 = ((x141*(x142-x143))^x144);

	if (t21 != 4294952863U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x150 = -1;
	int8_t x151 = INT8_MIN;
	volatile int32_t t22 = 1;

	t22 = ((x149*(x150-x151))^x152);

	if (t22 != 4161500) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x154 = UINT64_MAX;
	static int8_t x155 = -1;
	uint8_t x156 = 56U;
	static volatile uint64_t t23 = 900057LLU;

	t23 = ((x153*(x154-x155))^x156);

	if (t23 != 56LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x157 = INT16_MIN;
	uint64_t x160 = UINT64_MAX;

	t24 = ((x157*(x158-x159))^x160);

	if (t24 != 4194303LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x161 = UINT32_MAX;
	uint16_t x162 = 18U;
	volatile uint8_t x163 = UINT8_MAX;
	int32_t x164 = -1;
	uint32_t t25 = 2000U;

	t25 = ((x161*(x162-x163))^x164);

	if (t25 != 4294967058U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x165 = -1;
	int32_t x166 = 35108062;
	int16_t x167 = INT16_MAX;
	static int64_t x168 = -1062470780394LL;
	volatile int64_t t26 = 84910226249LL;

	t26 = ((x165*(x166-x167))^x168);

	if (t26 != 1062503625015LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x169 = INT16_MAX;
	uint16_t x170 = 1U;
	uint64_t x171 = 688LLU;
	int16_t x172 = INT16_MIN;
	uint64_t t27 = 4116LLU;

	t27 = ((x169*(x170-x171))^x172);

	if (t27 != 22479535LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x173 = INT16_MAX;
	uint32_t x174 = 5745U;
	static uint32_t t28 = 108089U;

	t28 = ((x173*(x174-x175))^x176);

	if (t28 != 1455017524U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x181 = -1;
	static int8_t x182 = INT8_MAX;
	int8_t x184 = -12;
	static volatile int32_t t29 = 9476921;

	t29 = ((x181*(x182-x183))^x184);

	if (t29 != -2147483532) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x190 = 283;
	volatile uint16_t x191 = 1888U;
	int8_t x192 = INT8_MAX;
	static uint64_t t30 = 310903894LLU;

	t30 = ((x189*(x190-x191))^x192);

	if (t30 != 1594LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x194 = INT8_MIN;
	int32_t x195 = INT32_MIN;
	int32_t x196 = -93;
	int32_t t31 = -75076;

	t31 = ((x193*(x194-x195))^x196);

	if (t31 != 2147483427) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x209 = -1;
	int16_t x210 = INT16_MIN;
	volatile int64_t x212 = INT64_MIN;
	static volatile int64_t t32 = -1079658096263000LL;

	t32 = ((x209*(x210-x211))^x212);

	if (t32 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x214 = 10U;
	static int16_t x215 = -63;
	volatile uint8_t x216 = 54U;
	static int32_t t33 = 28;

	t33 = ((x213*(x214-x215))^x216);

	if (t33 != -119659137) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x217 = 15893U;
	volatile uint16_t x219 = 79U;
	int64_t x220 = 95358132444222LL;
	volatile int64_t t34 = 113396182LL;

	t34 = ((x217*(x218-x219))^x220);

	if (t34 != -95358133628613LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x225 = 113U;
	volatile int32_t x226 = INT32_MIN;
	static uint64_t x227 = 2261074150804LLU;
	int64_t x228 = INT64_MIN;
	uint64_t t35 = 4131235792364702419LLU;

	t35 = ((x225*(x226-x227))^x228);

	if (t35 != 9223116292810082732LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x230 = 6638U;
	volatile uint8_t x231 = 31U;
	volatile int32_t x232 = 948874;
	uint32_t t36 = 236640775U;

	t36 = ((x229*(x230-x231))^x232);

	if (t36 != 216603835U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x233 = 579739724U;
	int64_t x234 = -1LL;
	static int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;

	t37 = ((x233*(x234-x235))^x236);

	if (t37 != -73626944972LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x241 = -3524795;
	int64_t x242 = -453873LL;
	int32_t x243 = 355;
	uint64_t x244 = 25911961469631LLU;
	uint64_t t38 = 26573972LLU;

	t38 = ((x241*(x242-x243))^x244);

	if (t38 != 25176559842787LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x245 = 1658LLU;
	int16_t x247 = INT16_MIN;
	int8_t x248 = -33;
	uint64_t t39 = 683384348847524619LLU;

	t39 = ((x245*(x246-x247))^x248);

	if (t39 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x257 = INT8_MAX;
	int64_t x258 = -126824LL;

	t40 = ((x257*(x258-x259))^x260);

	if (t40 != 18446744073693479960LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x261 = INT16_MAX;
	volatile int16_t x262 = -1;
	static volatile int8_t x263 = 20;

	t41 = ((x261*(x262-x263))^x264);

	if (t41 != -687583) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x269 = INT64_MIN;
	volatile int8_t x270 = -1;
	int8_t x272 = -7;
	int64_t t42 = 63LL;

	t42 = ((x269*(x270-x271))^x272);

	if (t42 != -7LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x273 = 205U;
	static int32_t x274 = 52176953;
	int16_t x275 = INT16_MIN;
	int64_t x276 = -2687269961269601063LL;
	volatile int64_t t43 = -364290781LL;

	t43 = ((x273*(x274-x275))^x276);

	if (t43 != -2687269961201604228LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = -1829;
	int32_t t44 = -2054118;

	t44 = ((x277*(x278-x279))^x280);

	if (t44 != -1082099493) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x281 = UINT64_MAX;
	volatile int8_t x282 = 1;
	int64_t x283 = -1LL;
	int64_t x284 = INT64_MAX;

	t45 = ((x281*(x282-x283))^x284);

	if (t45 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = -1LL;
	int32_t x287 = INT32_MAX;
	uint8_t x288 = 11U;
	int64_t t46 = -13063638248LL;

	t46 = ((x285*(x286-x287))^x288);

	if (t46 != 4611686018427387915LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x290 = 154U;
	static volatile uint64_t x291 = 271339641857LLU;
	static uint64_t x292 = 456221195451376LLU;
	volatile uint64_t t47 = 350275545249LLU;

	t47 = ((x289*(x290-x291))^x292);

	if (t47 != 18446304905719946655LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x294 = UINT64_MAX;
	int16_t x295 = -1;

	t48 = ((x293*(x294-x295))^x296);

	if (t48 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x309 = -6310143LL;
	uint64_t x310 = UINT64_MAX;
	uint8_t x311 = 2U;
	int32_t x312 = INT32_MIN;
	uint64_t t49 = 2319845871769LLU;

	t49 = ((x309*(x310-x311))^x312);

	if (t49 != 18446744071580998397LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x321 = INT8_MAX;
	static uint32_t x322 = 54U;
	uint64_t x323 = 139283197781LLU;
	uint64_t t50 = 2LLU;

	t50 = ((x321*(x322-x323))^x324);

	if (t50 != 18446726384743440224LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x334 = 21U;
	int8_t x335 = INT8_MIN;
	int16_t x336 = -9856;
	static volatile int32_t t51 = 62133;

	t51 = ((x333*(x334-x335))^x336);

	if (t51 != -9754901) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x341 = -1;
	static int64_t x342 = INT64_MAX;
	int64_t x343 = 27LL;
	uint64_t x344 = 118LLU;
	uint64_t t52 = 309129185894299LLU;

	t52 = ((x341*(x342-x343))^x344);

	if (t52 != 9223372036854775914LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x349 = -11576LL;
	int16_t x350 = INT16_MAX;
	static volatile int64_t t53 = -18844871953LL;

	t53 = ((x349*(x350-x351))^x352);

	if (t53 != 9223372036475476592LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x357 = -5;
	uint32_t x358 = UINT32_MAX;
	uint16_t x359 = 2021U;
	volatile uint32_t t54 = 3U;

	t54 = ((x357*(x358-x359))^x360);

	if (t54 != 22657U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x361 = -1LL;
	static int64_t x362 = -94132LL;
	static int64_t x364 = INT64_MIN;
	int64_t t55 = -1910456754848986LL;

	t55 = ((x361*(x362-x363))^x364);

	if (t55 != -9223372036854681313LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x365 = INT16_MAX;
	int64_t x368 = 1085855033732157LL;
	volatile uint64_t t56 = 10357160000638LLU;

	t56 = ((x365*(x366-x367))^x368);

	if (t56 != 1085855038984994LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x369 = INT16_MIN;
	volatile int32_t x370 = 14;
	int16_t x371 = INT16_MIN;
	int16_t x372 = -1;
	volatile int32_t t57 = 1595;

	t57 = ((x369*(x370-x371))^x372);

	if (t57 != 1074200575) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x373 = -921;
	int64_t x374 = -6LL;
	uint16_t x375 = 438U;
	int16_t x376 = INT16_MIN;
	int64_t t58 = 31277784LL;

	t58 = ((x373*(x374-x375))^x376);

	if (t58 != -410276LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = INT32_MIN;
	static uint64_t x379 = 312323496467599LLU;
	static uint64_t t59 = 250276556LLU;

	t59 = ((x377*(x378-x379))^x380);

	if (t59 != 10234286700994461695LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x381 = 9U;
	int16_t x382 = 0;
	int16_t x383 = 12789;
	static volatile int32_t t60 = -998029;

	t60 = ((x381*(x382-x383))^x384);

	if (t60 != -3840765) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x385 = 2;
	volatile int8_t x386 = INT8_MAX;
	int8_t x387 = 6;
	uint8_t x388 = 115U;

	t61 = ((x385*(x386-x387))^x388);

	if (t61 != 129) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x389 = 1882U;
	int32_t x390 = -2969161;
	int32_t x392 = INT32_MIN;
	static uint32_t t62 = 96986U;

	t62 = ((x389*(x390-x391))^x392);

	if (t62 != 854250928U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x401 = INT8_MAX;
	static volatile int16_t x402 = -8416;
	int64_t x403 = -1LL;
	volatile int64_t x404 = INT64_MIN;
	volatile int64_t t63 = -1864807775591LL;

	t63 = ((x401*(x402-x403))^x404);

	if (t63 != 9223372036853707103LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x405 = -1;
	static uint16_t x406 = 0U;
	uint32_t x407 = 3289U;
	int32_t x408 = -1;
	volatile uint32_t t64 = 9410607U;

	t64 = ((x405*(x406-x407))^x408);

	if (t64 != 4294964006U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x409 = UINT64_MAX;
	int8_t x410 = -13;
	static uint32_t x411 = UINT32_MAX;
	static volatile int16_t x412 = 173;
	volatile uint64_t t65 = 408LLU;

	t65 = ((x409*(x410-x411))^x412);

	if (t65 != 18446744069414584481LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x417 = INT8_MAX;
	uint32_t x419 = 1U;
	int16_t x420 = INT16_MIN;
	volatile uint32_t t66 = 19735547U;

	t66 = ((x417*(x418-x419))^x420);

	if (t66 != 31752U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x425 = 818780085U;
	volatile int16_t x426 = -25;
	int16_t x427 = -1;
	int32_t x428 = INT32_MIN;
	volatile uint32_t t67 = 2077013U;

	t67 = ((x425*(x426-x427))^x428);

	if (t67 != 3971598088U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x429 = -1;
	static int64_t x430 = -1LL;
	uint16_t x431 = UINT16_MAX;
	uint64_t x432 = UINT64_MAX;

	t68 = ((x429*(x430-x431))^x432);

	if (t68 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x433 = 233646582LLU;
	static int64_t x436 = INT64_MIN;
	volatile uint64_t t69 = 30930161LLU;

	t69 = ((x433*(x434-x435))^x436);

	if (t69 != 9223372066527891722LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x449 = 6535U;
	int32_t x450 = 3201376;
	uint16_t x451 = UINT16_MAX;
	uint64_t x452 = 693280953848348LLU;
	uint64_t t70 = 1231134LLU;

	t70 = ((x449*(x450-x451))^x452);

	if (t70 != 693284117530939LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x453 = -1;
	int64_t x455 = INT64_MIN;
	static int32_t x456 = INT32_MIN;
	uint64_t t71 = 119265LLU;

	t71 = ((x453*(x454-x455))^x456);

	if (t71 != 9223372038984078865LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x457 = INT64_MIN;
	volatile int32_t x458 = INT32_MIN;
	static uint64_t x459 = 152969406430043LLU;
	static int16_t x460 = -1;
	uint64_t t72 = 0LLU;

	t72 = ((x457*(x458-x459))^x460);

	if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x461 = INT8_MIN;
	static uint32_t x462 = UINT32_MAX;
	int64_t x463 = 0LL;
	int16_t x464 = INT16_MAX;
	volatile int64_t t73 = -71400716990231186LL;

	t73 = ((x461*(x462-x463))^x464);

	if (t73 != -549755781249LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x465 = INT16_MIN;
	int32_t x466 = INT32_MAX;
	uint64_t x467 = UINT64_MAX;
	volatile uint16_t x468 = UINT16_MAX;
	uint64_t t74 = 0LLU;

	t74 = ((x465*(x466-x467))^x468);

	if (t74 != 18446673704965439487LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x472 = -1;
	static volatile int32_t t75 = 186475056;

	t75 = ((x469*(x470-x471))^x472);

	if (t75 != 32894) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x473 = 2156628276942LLU;
	uint8_t x474 = 95U;
	int8_t x476 = -1;
	uint64_t t76 = 3531971007870LLU;

	t76 = ((x473*(x474-x475))^x476);

	if (t76 != 282952407290911267LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x477 = 23376978959867736LLU;
	volatile int8_t x478 = INT8_MIN;
	int16_t x479 = -17;
	int32_t x480 = INT32_MIN;
	volatile uint64_t t77 = 1164137LLU;

	t77 = ((x477*(x478-x479))^x480);

	if (t77 != 2594844663017203928LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x481 = INT8_MAX;
	uint64_t x482 = 198125823337LLU;
	static volatile uint64_t x484 = 869379147972307683LLU;

	t78 = ((x481*(x482-x483))^x484);

	if (t78 != 869389723374675444LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x485 = -10931406;
	static volatile int8_t x488 = -1;
	volatile int64_t t79 = 370904756666738137LL;

	t79 = ((x485*(x486-x487))^x488);

	if (t79 != -7398380470002510373LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x489 = INT8_MIN;
	uint16_t x490 = 10U;
	int8_t x491 = 1;
	uint64_t x492 = 95LLU;
	uint64_t t80 = 1028409316198LLU;

	t80 = ((x489*(x490-x491))^x492);

	if (t80 != 18446744073709550559LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x493 = INT16_MIN;
	int64_t x496 = INT64_MIN;
	static volatile int64_t t81 = 65375LL;

	t81 = ((x493*(x494-x495))^x496);

	if (t81 != 9223372036852056064LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x501 = 1;
	uint8_t x502 = UINT8_MAX;
	int8_t x503 = INT8_MIN;
	int8_t x504 = 0;
	static int32_t t82 = -500344;

	t82 = ((x501*(x502-x503))^x504);

	if (t82 != 383) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x505 = INT64_MIN;
	volatile uint64_t x507 = 2317731837683LLU;
	uint32_t x508 = UINT32_MAX;
	static uint64_t t83 = 5061840678827970LLU;

	t83 = ((x505*(x506-x507))^x508);

	if (t83 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x513 = -1;
	volatile int64_t x514 = INT64_MAX;
	static int32_t x515 = 31256;
	int8_t x516 = INT8_MIN;
	volatile int64_t t84 = 241909399371162LL;

	t84 = ((x513*(x514-x515))^x516);

	if (t84 != 9223372036854744473LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x525 = -1148;
	uint64_t x526 = 351117LLU;
	int16_t x527 = 352;
	uint64_t t85 = 46701210199LLU;

	t85 = ((x525*(x526-x527))^x528);

	if (t85 != 18446744073306873405LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x529 = INT64_MAX;
	static int8_t x530 = INT8_MIN;
	int8_t x531 = INT8_MIN;
	static uint16_t x532 = 54U;
	int64_t t86 = -41528LL;

	t86 = ((x529*(x530-x531))^x532);

	if (t86 != 54LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x533 = 338553U;
	int16_t x534 = 46;
	uint32_t x535 = 126733U;
	uint32_t x536 = 366653U;

	t87 = ((x533*(x534-x535))^x536);

	if (t87 != 59710116U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x538 = 368711U;
	static int16_t x539 = INT16_MIN;
	volatile uint8_t x540 = 26U;
	volatile uint64_t t88 = 1809499LLU;

	t88 = ((x537*(x538-x539))^x540);

	if (t88 != 89529795LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x541 = 125U;
	int16_t x543 = -1;
	volatile int16_t x544 = INT16_MAX;
	volatile uint64_t t89 = 223687LLU;

	t89 = ((x541*(x542-x543))^x544);

	if (t89 != 2816594678734771659LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x550 = 334U;
	int64_t x551 = -1LL;
	uint32_t x552 = 3U;
	int64_t t90 = -51067869805LL;

	t90 = ((x549*(x550-x551))^x552);

	if (t90 != -334LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x554 = -1;
	static int64_t x555 = -73290504359LL;
	uint8_t x556 = 0U;
	volatile int64_t t91 = 248164664LL;

	t91 = ((x553*(x554-x555))^x556);

	if (t91 != 18689078611290LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x557 = INT8_MIN;
	int32_t x558 = INT32_MIN;
	int64_t x559 = -1LL;
	volatile int64_t t92 = 77031LL;

	t92 = ((x557*(x558-x559))^x560);

	if (t92 != 274877901081LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x562 = -1;
	int8_t x563 = INT8_MIN;
	int64_t t93 = -14095636506LL;

	t93 = ((x561*(x562-x563))^x564);

	if (t93 != -216019LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x565 = -1;
	uint64_t x566 = 956783LLU;
	uint16_t x567 = 63U;
	int32_t x568 = INT32_MAX;
	uint64_t t94 = 29100357LLU;

	t94 = ((x565*(x566-x567))^x568);

	if (t94 != 18446744071563024687LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x569 = -1;
	int8_t x570 = INT8_MIN;
	uint8_t x571 = 6U;
	static uint64_t x572 = 20919LLU;
	uint64_t t95 = 2872257987546989LLU;

	t95 = ((x569*(x570-x571))^x572);

	if (t95 != 20785LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x573 = 5699867;
	int64_t x574 = -1LL;
	static volatile int32_t x575 = INT32_MIN;
	int64_t t96 = 10827516179387LL;

	t96 = ((x573*(x574-x575))^x576);

	if (t96 != 12240371172574948LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x577 = 66673477;
	volatile int32_t x579 = INT32_MIN;
	volatile int64_t t97 = -5770598077LL;

	t97 = ((x577*(x578-x579))^x580);

	if (t97 != 111516033025160LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x581 = 227737883908715LLU;
	uint8_t x584 = 2U;
	uint64_t t98 = 405LLU;

	t98 = ((x581*(x582-x583))^x584);

	if (t98 != 6566512884277198878LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x585 = -1;
	int16_t x586 = INT16_MIN;
	static int64_t x587 = -21611279247158LL;
	static int64_t t99 = -52488669002673139LL;

	t99 = ((x585*(x586-x587))^x588);

	if (t99 != 21611279214389LL) { NG(); } else { ; }
	
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

