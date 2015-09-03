#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x13 = 26897U;
static uint32_t x16 = UINT32_MAX;
volatile uint32_t x29 = UINT32_MAX;
static uint8_t x30 = UINT8_MAX;
int32_t t5 = 7186;
static int32_t x47 = -5021;
int8_t x75 = 0;
volatile int32_t t9 = 123726;
int32_t x86 = INT32_MIN;
static int64_t x87 = INT64_MIN;
int32_t x93 = 1540183;
static int64_t x94 = -74379866227557033LL;
volatile int32_t x96 = INT32_MAX;
static int16_t x101 = INT16_MAX;
int32_t x114 = INT32_MIN;
volatile int16_t x115 = INT16_MIN;
uint64_t x123 = 2LLU;
int16_t x133 = INT16_MAX;
uint16_t x135 = 1U;
int64_t x136 = 310308LL;
volatile int32_t t18 = 27882;
static uint16_t x142 = 10U;
uint16_t x144 = 68U;
int8_t x157 = INT8_MIN;
static int8_t x159 = 0;
int32_t t21 = -1479;
int8_t x173 = INT8_MIN;
static int32_t x175 = INT32_MIN;
uint16_t x178 = UINT16_MAX;
uint32_t x187 = 3900317U;
int32_t t25 = 37;
int16_t x189 = -1;
int32_t x193 = INT32_MIN;
int16_t x196 = INT16_MAX;
int32_t t27 = -3;
int32_t x205 = INT32_MIN;
int16_t x210 = INT16_MAX;
int16_t x214 = INT16_MAX;
int64_t x215 = -1LL;
uint32_t x224 = 112961815U;
volatile uint32_t x229 = 321928861U;
static volatile int32_t t33 = 7;
uint64_t x243 = 848727763934916039LLU;
int32_t x245 = INT32_MIN;
int16_t x249 = INT16_MIN;
volatile int32_t t36 = 2359262;
static volatile int32_t t38 = 11727;
int32_t x303 = -6876;
int8_t x321 = -1;
uint32_t x323 = 1830615U;
int16_t x380 = INT16_MIN;
int64_t x385 = INT64_MAX;
volatile int8_t x389 = INT8_MIN;
int16_t x392 = INT16_MAX;
int64_t x394 = INT64_MAX;
int64_t x411 = INT64_MIN;
uint32_t x419 = 1050U;
int64_t x423 = -2LL;
int32_t t54 = -310688423;
int8_t x429 = INT8_MIN;
volatile int32_t x431 = -1;
int32_t t55 = 14135;
static uint32_t x440 = UINT32_MAX;
uint8_t x447 = 5U;
int32_t x451 = -22583;
static int32_t x459 = -1;
uint16_t x460 = 63U;
int64_t x461 = INT64_MIN;
int32_t x477 = INT32_MIN;
volatile int32_t x479 = INT32_MIN;
static int32_t x488 = 58919621;
int32_t x489 = INT32_MIN;
int64_t x508 = -24464LL;
int32_t t64 = -8222390;
uint32_t x512 = 677409U;
static int32_t t67 = 26;
uint16_t x543 = 129U;
static int64_t x548 = 1067LL;
int32_t x552 = INT32_MIN;
int8_t x560 = 0;
int8_t x561 = INT8_MIN;
static int16_t x562 = 589;
int64_t x567 = INT64_MIN;
int32_t x581 = -45;
int8_t x622 = 3;
int32_t x624 = INT32_MAX;
int32_t x631 = INT32_MIN;
static int16_t x637 = -1;
uint8_t x644 = 1U;
int32_t x668 = INT32_MAX;
uint32_t x685 = 186250160U;
int16_t x687 = 1;
int16_t x693 = INT16_MAX;
int64_t x697 = 278232892462195960LL;
volatile int32_t t87 = -112307;
int32_t x703 = INT32_MIN;
static volatile int64_t x709 = 910698470863LL;
volatile uint8_t x710 = 6U;
volatile int32_t t89 = 222283774;
int32_t x717 = INT32_MAX;
int8_t x732 = INT8_MAX;
int16_t x746 = INT16_MIN;
uint16_t x754 = UINT16_MAX;
static int16_t x756 = INT16_MAX;
volatile int32_t x767 = -523535082;
volatile int8_t x768 = INT8_MAX;
static int16_t x797 = -1065;
int8_t x799 = -1;
uint64_t x802 = 23474494LLU;
volatile int32_t t98 = -121;
static volatile int32_t x812 = -1;


void f0(void) {
	int8_t x1 = -1;
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = -5;
	uint8_t x4 = 3U;
	int32_t t0 = -1;

	t0 = (x1<=(x2%(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x14 = 72U;
	int8_t x15 = 9;
	volatile int32_t t1 = 0;

	t1 = (x13<=(x14%(x15<x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x17 = INT16_MAX;
	static uint16_t x18 = 11436U;
	int8_t x19 = -1;
	int8_t x20 = 16;
	int32_t t2 = 1960;

	t2 = (x17<=(x18%(x19<x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = UINT16_MAX;
	static int8_t x22 = -1;
	static int8_t x23 = INT8_MIN;
	uint64_t x24 = UINT64_MAX;
	volatile int32_t t3 = 1852204;

	t3 = (x21<=(x22%(x23<x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -863569321584LL;
	int32_t x26 = INT32_MAX;
	int8_t x27 = INT8_MIN;
	int8_t x28 = 40;
	int32_t t4 = 1;

	t4 = (x25<=(x26%(x27<x28)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x31 = INT16_MAX;
	volatile int64_t x32 = INT64_MAX;

	t5 = (x29<=(x30%(x31<x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = INT8_MIN;
	int32_t x46 = -13342;
	int8_t x48 = INT8_MIN;
	volatile int32_t t6 = 108628095;

	t6 = (x45<=(x46%(x47<x48)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x69 = INT64_MAX;
	int16_t x70 = INT16_MAX;
	int64_t x71 = INT64_MIN;
	uint32_t x72 = 7133769U;
	int32_t t7 = -1;

	t7 = (x69<=(x70%(x71<x72)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x73 = INT64_MIN;
	volatile int16_t x74 = INT16_MIN;
	uint32_t x76 = 331U;
	volatile int32_t t8 = 193509;

	t8 = (x73<=(x74%(x75<x76)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x81 = -1;
	volatile uint64_t x82 = UINT64_MAX;
	static int32_t x83 = -2641;
	uint16_t x84 = 201U;

	t9 = (x81<=(x82%(x83<x84)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x85 = -190394601;
	volatile int32_t x88 = -95;
	volatile int32_t t10 = -397556522;

	t10 = (x85<=(x86%(x87<x88)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x89 = 392016152590594328LL;
	int32_t x90 = 1598980;
	int8_t x91 = -1;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t11 = 48;

	t11 = (x89<=(x90%(x91<x92)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x95 = INT16_MAX;
	volatile int32_t t12 = -140351323;

	t12 = (x93<=(x94%(x95<x96)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x97 = INT8_MIN;
	volatile int32_t x98 = 195350;
	int32_t x99 = 201622659;
	int32_t x100 = INT32_MAX;
	volatile int32_t t13 = 1325681;

	t13 = (x97<=(x98%(x99<x100)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x102 = INT32_MIN;
	static volatile int16_t x103 = INT16_MAX;
	volatile int64_t x104 = 2179756636822732LL;
	int32_t t14 = 27501862;

	t14 = (x101<=(x102%(x103<x104)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x105 = -1;
	static int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MIN;
	int64_t x108 = -30631LL;
	volatile int32_t t15 = 183493;

	t15 = (x105<=(x106%(x107<x108)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x116 = INT16_MAX;
	int32_t t16 = -1;

	t16 = (x113<=(x114%(x115<x116)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x121 = -3;
	int32_t x122 = INT32_MIN;
	int64_t x124 = INT64_MAX;
	static int32_t t17 = 0;

	t17 = (x121<=(x122%(x123<x124)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x134 = 11961LLU;

	t18 = (x133<=(x134%(x135<x136)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x141 = 247LL;
	uint16_t x143 = 0U;
	volatile int32_t t19 = -2891763;

	t19 = (x141<=(x142%(x143<x144)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x149 = 0;
	static int16_t x150 = INT16_MIN;
	int8_t x151 = -11;
	int16_t x152 = 71;
	int32_t t20 = 31657827;

	t20 = (x149<=(x150%(x151<x152)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x158 = INT16_MIN;
	static uint64_t x160 = 3LLU;

	t21 = (x157<=(x158%(x159<x160)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x165 = INT32_MAX;
	static volatile uint32_t x166 = 83340573U;
	uint8_t x167 = 28U;
	static volatile uint8_t x168 = UINT8_MAX;
	volatile int32_t t22 = 0;

	t22 = (x165<=(x166%(x167<x168)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x174 = -641999027657943309LL;
	volatile int32_t x176 = -1;
	int32_t t23 = 3;

	t23 = (x173<=(x174%(x175<x176)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x177 = INT64_MIN;
	uint16_t x179 = 830U;
	static volatile uint16_t x180 = UINT16_MAX;
	int32_t t24 = 142144;

	t24 = (x177<=(x178%(x179<x180)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x185 = UINT8_MAX;
	int32_t x186 = -36;
	volatile int16_t x188 = INT16_MIN;

	t25 = (x185<=(x186%(x187<x188)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x190 = 6244;
	static int16_t x191 = INT16_MIN;
	int32_t x192 = -1;
	static volatile int32_t t26 = 2007;

	t26 = (x189<=(x190%(x191<x192)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x194 = -1LL;
	int64_t x195 = -13971LL;

	t27 = (x193<=(x194%(x195<x196)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x206 = 317U;
	int64_t x207 = -1LL;
	int16_t x208 = 145;
	int32_t t28 = 9439427;

	t28 = (x205<=(x206%(x207<x208)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x209 = 1U;
	static uint32_t x211 = 937U;
	int8_t x212 = INT8_MIN;
	int32_t t29 = 57845634;

	t29 = (x209<=(x210%(x211<x212)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x213 = -261792740140019LL;
	static int16_t x216 = INT16_MAX;
	static volatile int32_t t30 = -23895;

	t30 = (x213<=(x214%(x215<x216)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x221 = 4124761423066402LLU;
	static int16_t x222 = -6688;
	int64_t x223 = INT64_MIN;
	static volatile int32_t t31 = 881657;

	t31 = (x221<=(x222%(x223<x224)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x230 = 21U;
	int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	static int32_t t32 = -11589591;

	t32 = (x229<=(x230%(x231<x232)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x237 = 127610974;
	static int32_t x238 = 7351;
	uint32_t x239 = 123500794U;
	static volatile uint32_t x240 = UINT32_MAX;

	t33 = (x237<=(x238%(x239<x240)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x241 = UINT32_MAX;
	uint64_t x242 = UINT64_MAX;
	static int8_t x244 = -1;
	int32_t t34 = 1;

	t34 = (x241<=(x242%(x243<x244)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x246 = INT64_MIN;
	static int8_t x247 = -1;
	uint8_t x248 = 8U;
	volatile int32_t t35 = -239;

	t35 = (x245<=(x246%(x247<x248)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x250 = 55U;
	int32_t x251 = 109;
	int16_t x252 = 498;

	t36 = (x249<=(x250%(x251<x252)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x265 = -7158048;
	int64_t x266 = 25582959871089LL;
	uint16_t x267 = UINT16_MAX;
	uint64_t x268 = 660454LLU;
	static volatile int32_t t37 = 248;

	t37 = (x265<=(x266%(x267<x268)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = INT64_MAX;
	static int8_t x283 = INT8_MAX;
	volatile uint64_t x284 = 478033910007742594LLU;

	t38 = (x281<=(x282%(x283<x284)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x293 = INT64_MIN;
	int64_t x294 = -2068LL;
	int64_t x295 = -1948LL;
	int64_t x296 = -1LL;
	int32_t t39 = 297920591;

	t39 = (x293<=(x294%(x295<x296)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x301 = UINT8_MAX;
	int8_t x302 = 5;
	int8_t x304 = -1;
	int32_t t40 = -2;

	t40 = (x301<=(x302%(x303<x304)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x305 = -1675982541538867424LL;
	uint64_t x306 = 986733LLU;
	uint32_t x307 = 17U;
	int32_t x308 = INT32_MIN;
	int32_t t41 = -121511051;

	t41 = (x305<=(x306%(x307<x308)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x322 = -1;
	uint32_t x324 = UINT32_MAX;
	static int32_t t42 = 27;

	t42 = (x321<=(x322%(x323<x324)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x353 = INT64_MAX;
	static int32_t x354 = INT32_MIN;
	volatile int8_t x355 = -1;
	static volatile int32_t x356 = 407998;
	static int32_t t43 = -287338950;

	t43 = (x353<=(x354%(x355<x356)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x357 = 291016LL;
	static volatile int16_t x358 = INT16_MIN;
	static uint8_t x359 = 22U;
	uint32_t x360 = UINT32_MAX;
	int32_t t44 = -2;

	t44 = (x357<=(x358%(x359<x360)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x361 = INT64_MIN;
	uint32_t x362 = UINT32_MAX;
	int64_t x363 = 1932719LL;
	uint64_t x364 = 120406660866LLU;
	volatile int32_t t45 = -177133823;

	t45 = (x361<=(x362%(x363<x364)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x369 = 15;
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = 1492;
	static uint64_t x372 = UINT64_MAX;
	static volatile int32_t t46 = 499595;

	t46 = (x369<=(x370%(x371<x372)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x377 = UINT8_MAX;
	int64_t x378 = 0LL;
	volatile uint32_t x379 = 727477461U;
	int32_t t47 = -500965246;

	t47 = (x377<=(x378%(x379<x380)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x386 = 70U;
	volatile uint8_t x387 = 1U;
	static volatile int64_t x388 = INT64_MAX;
	int32_t t48 = 389228523;

	t48 = (x385<=(x386%(x387<x388)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x390 = -1;
	int8_t x391 = 3;
	static volatile int32_t t49 = 13288280;

	t49 = (x389<=(x390%(x391<x392)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x393 = INT64_MIN;
	uint8_t x395 = 25U;
	volatile uint8_t x396 = UINT8_MAX;
	static int32_t t50 = -373;

	t50 = (x393<=(x394%(x395<x396)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = 7343;
	int8_t x412 = -1;
	int32_t t51 = 1;

	t51 = (x409<=(x410%(x411<x412)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x417 = 24315U;
	int16_t x418 = INT16_MAX;
	int64_t x420 = 368871LL;
	int32_t t52 = -37;

	t52 = (x417<=(x418%(x419<x420)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x421 = 0U;
	uint16_t x422 = 2891U;
	static uint16_t x424 = 319U;
	int32_t t53 = 34713;

	t53 = (x421<=(x422%(x423<x424)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x425 = 1;
	uint8_t x426 = 15U;
	int64_t x427 = INT64_MIN;
	int64_t x428 = 1992416058881468207LL;

	t54 = (x425<=(x426%(x427<x428)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x430 = 11938U;
	volatile uint16_t x432 = 332U;

	t55 = (x429<=(x430%(x431<x432)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x437 = 635462429455985LL;
	volatile uint64_t x438 = UINT64_MAX;
	volatile uint16_t x439 = 892U;
	int32_t t56 = -33453;

	t56 = (x437<=(x438%(x439<x440)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x445 = -8;
	int8_t x446 = INT8_MAX;
	uint32_t x448 = 1963463U;
	volatile int32_t t57 = 0;

	t57 = (x445<=(x446%(x447<x448)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x449 = 57138LLU;
	volatile int16_t x450 = -1;
	static int8_t x452 = INT8_MAX;
	int32_t t58 = -123117;

	t58 = (x449<=(x450%(x451<x452)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x457 = 579LL;
	volatile int16_t x458 = -14;
	volatile int32_t t59 = -230703773;

	t59 = (x457<=(x458%(x459<x460)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x462 = 611U;
	int16_t x463 = INT16_MIN;
	uint16_t x464 = 15891U;
	volatile int32_t t60 = -766;

	t60 = (x461<=(x462%(x463<x464)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x478 = INT64_MIN;
	volatile int8_t x480 = -46;
	int32_t t61 = -216877;

	t61 = (x477<=(x478%(x479<x480)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x485 = 2U;
	static int8_t x486 = 1;
	static int16_t x487 = -1;
	static volatile int32_t t62 = 847115;

	t62 = (x485<=(x486%(x487<x488)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x490 = INT8_MAX;
	uint64_t x491 = 549146217835LLU;
	int64_t x492 = -1LL;
	volatile int32_t t63 = 120237064;

	t63 = (x489<=(x490%(x491<x492)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x505 = INT16_MIN;
	int32_t x506 = INT32_MIN;
	static volatile int16_t x507 = INT16_MIN;

	t64 = (x505<=(x506%(x507<x508)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x509 = -1;
	volatile int16_t x510 = INT16_MAX;
	static int8_t x511 = INT8_MAX;
	static int32_t t65 = 24210686;

	t65 = (x509<=(x510%(x511<x512)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x517 = 0;
	volatile int32_t x518 = INT32_MIN;
	static int8_t x519 = INT8_MIN;
	uint32_t x520 = UINT32_MAX;
	volatile int32_t t66 = -64269816;

	t66 = (x517<=(x518%(x519<x520)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x537 = 1U;
	static uint32_t x538 = 654195451U;
	volatile uint64_t x539 = 14685610LLU;
	static volatile int16_t x540 = -15350;

	t67 = (x537<=(x538%(x539<x540)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x541 = 70125374LLU;
	int32_t x542 = INT32_MIN;
	int64_t x544 = INT64_MAX;
	volatile int32_t t68 = 0;

	t68 = (x541<=(x542%(x543<x544)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x545 = 13U;
	int8_t x546 = INT8_MAX;
	uint8_t x547 = 12U;
	volatile int32_t t69 = 62840989;

	t69 = (x545<=(x546%(x547<x548)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x549 = -5326;
	int8_t x550 = -1;
	int64_t x551 = INT64_MIN;
	int32_t t70 = -1;

	t70 = (x549<=(x550%(x551<x552)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x553 = INT64_MIN;
	int8_t x554 = INT8_MAX;
	int8_t x555 = INT8_MIN;
	uint64_t x556 = UINT64_MAX;
	volatile int32_t t71 = -7341;

	t71 = (x553<=(x554%(x555<x556)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x557 = INT8_MIN;
	uint16_t x558 = UINT16_MAX;
	int16_t x559 = -4;
	volatile int32_t t72 = 557922760;

	t72 = (x557<=(x558%(x559<x560)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x563 = 2027427U;
	static volatile uint64_t x564 = 437934339LLU;
	int32_t t73 = -32254;

	t73 = (x561<=(x562%(x563<x564)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x565 = 0LL;
	volatile int32_t x566 = -315;
	uint16_t x568 = 25U;
	static volatile int32_t t74 = -15271;

	t74 = (x565<=(x566%(x567<x568)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x582 = INT8_MAX;
	int32_t x583 = -4053026;
	static int32_t x584 = -399119;
	volatile int32_t t75 = -3239236;

	t75 = (x581<=(x582%(x583<x584)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x589 = INT32_MAX;
	volatile int64_t x590 = -1147548924523809510LL;
	static uint16_t x591 = 1U;
	int32_t x592 = 24456;
	volatile int32_t t76 = 9;

	t76 = (x589<=(x590%(x591<x592)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x593 = 0LLU;
	uint16_t x594 = UINT16_MAX;
	int8_t x595 = -1;
	int64_t x596 = INT64_MAX;
	static int32_t t77 = 1095483;

	t77 = (x593<=(x594%(x595<x596)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x597 = INT16_MIN;
	uint32_t x598 = UINT32_MAX;
	volatile int8_t x599 = 1;
	volatile uint8_t x600 = UINT8_MAX;
	volatile int32_t t78 = 7;

	t78 = (x597<=(x598%(x599<x600)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x621 = INT16_MIN;
	static int16_t x623 = -1;
	int32_t t79 = -221276;

	t79 = (x621<=(x622%(x623<x624)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x629 = INT16_MIN;
	volatile int32_t x630 = INT32_MIN;
	int32_t x632 = -310;
	int32_t t80 = 396036302;

	t80 = (x629<=(x630%(x631<x632)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x638 = 1890528;
	volatile int32_t x639 = INT32_MIN;
	static uint16_t x640 = UINT16_MAX;
	int32_t t81 = -3;

	t81 = (x637<=(x638%(x639<x640)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x641 = 1337363899LLU;
	int16_t x642 = INT16_MIN;
	int64_t x643 = INT64_MIN;
	static volatile int32_t t82 = 20675421;

	t82 = (x641<=(x642%(x643<x644)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x665 = INT32_MIN;
	volatile int32_t x666 = INT32_MIN;
	uint16_t x667 = 7U;
	volatile int32_t t83 = -44089;

	t83 = (x665<=(x666%(x667<x668)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x673 = INT16_MIN;
	int16_t x674 = INT16_MIN;
	int32_t x675 = -3623;
	uint16_t x676 = UINT16_MAX;
	int32_t t84 = -28;

	t84 = (x673<=(x674%(x675<x676)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x686 = -17549;
	uint32_t x688 = 379129U;
	static volatile int32_t t85 = -3678290;

	t85 = (x685<=(x686%(x687<x688)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x694 = INT8_MIN;
	int16_t x695 = INT16_MIN;
	int8_t x696 = INT8_MIN;
	static int32_t t86 = 1603287;

	t86 = (x693<=(x694%(x695<x696)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x698 = -1;
	uint8_t x699 = UINT8_MAX;
	static uint64_t x700 = 50836147146LLU;

	t87 = (x697<=(x698%(x699<x700)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x701 = 0U;
	int32_t x702 = INT32_MIN;
	int16_t x704 = -1;
	volatile int32_t t88 = -1902;

	t88 = (x701<=(x702%(x703<x704)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x711 = INT16_MAX;
	static int64_t x712 = INT64_MAX;

	t89 = (x709<=(x710%(x711<x712)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x718 = 11;
	static volatile int32_t x719 = -24;
	static volatile int8_t x720 = -1;
	int32_t t90 = -133733423;

	t90 = (x717<=(x718%(x719<x720)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x721 = -48479;
	volatile uint8_t x722 = 97U;
	int16_t x723 = INT16_MAX;
	int64_t x724 = 3287794602LL;
	static volatile int32_t t91 = 2214;

	t91 = (x721<=(x722%(x723<x724)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x729 = 357U;
	int8_t x730 = INT8_MIN;
	volatile int16_t x731 = -1;
	int32_t t92 = -649;

	t92 = (x729<=(x730%(x731<x732)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x745 = -1;
	volatile uint64_t x747 = 240328617LLU;
	int8_t x748 = INT8_MIN;
	int32_t t93 = 32;

	t93 = (x745<=(x746%(x747<x748)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x753 = 22U;
	static volatile int32_t x755 = -529496;
	int32_t t94 = -29;

	t94 = (x753<=(x754%(x755<x756)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x765 = 77297751329LL;
	uint8_t x766 = 27U;
	int32_t t95 = -23;

	t95 = (x765<=(x766%(x767<x768)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x789 = INT32_MAX;
	int32_t x790 = -1;
	uint64_t x791 = 1296207LLU;
	volatile int16_t x792 = -4081;
	int32_t t96 = 41672;

	t96 = (x789<=(x790%(x791<x792)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x798 = 17U;
	uint8_t x800 = 1U;
	volatile int32_t t97 = 56487259;

	t97 = (x797<=(x798%(x799<x800)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x801 = UINT64_MAX;
	volatile uint8_t x803 = 20U;
	uint64_t x804 = 11170LLU;

	t98 = (x801<=(x802%(x803<x804)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x809 = INT64_MIN;
	int8_t x810 = 1;
	uint64_t x811 = 33319902004494514LLU;
	volatile int32_t t99 = -225906;

	t99 = (x809<=(x810%(x811<x812)));

	if (t99 != 1) { NG(); } else { ; }
	
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

