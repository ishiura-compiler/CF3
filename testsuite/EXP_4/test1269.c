#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -5451184995LL;
volatile int32_t x6 = 95511613;
int32_t t2 = 146674;
int16_t x30 = INT16_MAX;
uint8_t x40 = 97U;
int8_t x53 = INT8_MAX;
int16_t x56 = INT16_MIN;
uint32_t x68 = 56963929U;
int32_t t11 = -30;
uint16_t x81 = 7U;
volatile uint8_t x84 = 1U;
int64_t x96 = INT64_MIN;
uint16_t x102 = 93U;
int32_t t16 = -37572;
uint16_t x138 = UINT16_MAX;
static uint8_t x139 = UINT8_MAX;
int32_t t18 = -304;
int8_t x146 = INT8_MAX;
int32_t t20 = 119;
int8_t x149 = INT8_MIN;
volatile int64_t x155 = -1322185192211LL;
int16_t x157 = -1;
int64_t x160 = INT64_MAX;
volatile int32_t t23 = 444632164;
static uint8_t x162 = 14U;
int64_t x171 = INT64_MIN;
int16_t x173 = INT16_MIN;
uint16_t x174 = UINT16_MAX;
uint64_t x175 = 541404771321290LLU;
int32_t t26 = 20;
int16_t x196 = INT16_MIN;
uint32_t x198 = UINT32_MAX;
uint32_t x206 = UINT32_MAX;
static int64_t x215 = -1LL;
int16_t x216 = INT16_MAX;
int32_t t31 = -84930;
static int32_t x227 = -1960;
uint8_t x230 = 0U;
int32_t t33 = -149137;
int64_t x238 = 67465521899710LL;
uint64_t x253 = UINT64_MAX;
volatile int32_t x256 = INT32_MIN;
int32_t x259 = INT32_MAX;
volatile uint16_t x309 = 3U;
int32_t t45 = -1972;
int32_t x321 = INT32_MIN;
uint16_t x323 = UINT16_MAX;
int16_t x325 = -1;
volatile int64_t x329 = INT64_MIN;
int8_t x330 = INT8_MAX;
int64_t x332 = INT64_MIN;
uint32_t x334 = UINT32_MAX;
static int64_t x346 = 262995320131LL;
volatile int32_t t50 = 137150;
uint8_t x350 = UINT8_MAX;
int32_t x356 = INT32_MAX;
int16_t x359 = 1669;
static volatile int32_t t53 = 0;
volatile int32_t t54 = -26;
uint8_t x369 = UINT8_MAX;
volatile uint8_t x370 = 1U;
volatile int32_t t55 = -2;
static uint64_t x377 = 6520797085516170996LLU;
volatile int32_t t57 = -16064;
int16_t x387 = -4;
static int16_t x399 = -1;
volatile int64_t x400 = 402407315109641LL;
uint32_t x408 = 1441304014U;
int32_t t62 = -969;
int16_t x414 = INT16_MAX;
int32_t x423 = 30;
int8_t x427 = INT8_MIN;
int32_t x428 = 3927;
uint16_t x447 = 0U;
int8_t x448 = 10;
int32_t x454 = INT32_MAX;
int64_t x455 = INT64_MAX;
volatile int32_t t68 = -4006;
volatile int32_t t69 = 47029173;
static volatile int8_t x473 = INT8_MIN;
int8_t x475 = INT8_MIN;
int32_t t72 = -1368;
uint8_t x479 = 7U;
static uint8_t x486 = 6U;
int32_t t76 = 32976950;
int32_t x507 = INT32_MAX;
static int32_t x511 = INT32_MIN;
int64_t x520 = 1519741275250120339LL;
volatile int32_t x523 = -1;
int8_t x528 = INT8_MAX;
volatile int32_t t83 = 0;
static uint16_t x543 = 2782U;
uint64_t x544 = 3464170024067864LLU;
volatile int32_t t84 = 26257546;
int16_t x549 = -1;
volatile int32_t t86 = -123481;
int64_t x557 = INT64_MIN;
int64_t x559 = 160339LL;
volatile uint16_t x561 = UINT16_MAX;
volatile int32_t x569 = -45;
int8_t x571 = -43;
uint16_t x584 = 14544U;
volatile int32_t t90 = 340;
int32_t x596 = -1;
uint32_t x618 = UINT32_MAX;
int32_t t93 = -64644;
uint8_t x622 = 4U;
uint16_t x625 = 0U;
int8_t x628 = 1;
int32_t x641 = INT32_MAX;
static int32_t x643 = INT32_MIN;
uint16_t x650 = 5984U;
int8_t x651 = -1;


void f0(void) {
	uint32_t x2 = 1U;
	uint32_t x3 = 324609311U;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = 9;

	t0 = (x1==(x2>>(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 104780LLU;
	int16_t x7 = -1;
	int16_t x8 = 9;
	volatile int32_t t1 = 12097255;

	t1 = (x5==(x6>>(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	int64_t x10 = 0LL;
	static volatile int16_t x11 = -1;
	static int32_t x12 = INT32_MIN;

	t2 = (x9==(x10>>(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	uint64_t x14 = 247LLU;
	uint16_t x15 = 350U;
	int16_t x16 = -1;
	volatile int32_t t3 = 45068451;

	t3 = (x13==(x14>>(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MAX;
	volatile int8_t x27 = 0;
	uint64_t x28 = UINT64_MAX;
	int32_t t4 = 15253088;

	t4 = (x25==(x26>>(x27==x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = -764259LL;
	int64_t x31 = 1LL;
	int32_t x32 = -78438;
	static volatile int32_t t5 = 116;

	t5 = (x29==(x30>>(x31==x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -1;
	static uint16_t x38 = UINT16_MAX;
	static uint32_t x39 = UINT32_MAX;
	volatile int32_t t6 = -47;

	t6 = (x37==(x38>>(x39==x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = INT64_MAX;
	int16_t x43 = -118;
	uint16_t x44 = 18683U;
	static volatile int32_t t7 = -1;

	t7 = (x41==(x42>>(x43==x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x54 = 2LLU;
	int32_t x55 = INT32_MIN;
	volatile int32_t t8 = -29;

	t8 = (x53==(x54>>(x55==x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = 11LL;
	static int8_t x58 = 1;
	volatile uint32_t x59 = UINT32_MAX;
	int64_t x60 = INT64_MIN;
	volatile int32_t t9 = -22692;

	t9 = (x57==(x58>>(x59==x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x61 = -643LL;
	static int32_t x62 = INT32_MAX;
	uint32_t x63 = 837132U;
	static int8_t x64 = INT8_MIN;
	int32_t t10 = -1;

	t10 = (x61==(x62>>(x63==x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = 1;
	volatile uint8_t x66 = 0U;
	static volatile int64_t x67 = INT64_MAX;

	t11 = (x65==(x66>>(x67==x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x82 = INT8_MAX;
	static uint64_t x83 = 10729583618572735LLU;
	volatile int32_t t12 = 15895701;

	t12 = (x81==(x82>>(x83==x84)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x89 = UINT8_MAX;
	static int16_t x90 = 27;
	int8_t x91 = -13;
	int8_t x92 = -2;
	static volatile int32_t t13 = -41895;

	t13 = (x89==(x90>>(x91==x92)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x93 = INT32_MIN;
	volatile int32_t x94 = 7;
	uint64_t x95 = 109433745566LLU;
	static int32_t t14 = 48962020;

	t14 = (x93==(x94>>(x95==x96)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x97 = 2U;
	uint16_t x98 = UINT16_MAX;
	volatile uint32_t x99 = UINT32_MAX;
	uint64_t x100 = 1536615606937LLU;
	int32_t t15 = -5;

	t15 = (x97==(x98>>(x99==x100)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = -1;
	int64_t x103 = -1LL;
	int32_t x104 = -77919;

	t16 = (x101==(x102>>(x103==x104)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x121 = UINT8_MAX;
	int8_t x122 = 0;
	int8_t x123 = 7;
	volatile int8_t x124 = INT8_MAX;
	static int32_t t17 = -498;

	t17 = (x121==(x122>>(x123==x124)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x137 = INT8_MIN;
	int32_t x140 = INT32_MIN;

	t18 = (x137==(x138>>(x139==x140)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x141 = INT64_MIN;
	uint32_t x142 = 1818524U;
	volatile uint8_t x143 = 7U;
	int16_t x144 = -1;
	int32_t t19 = 60;

	t19 = (x141==(x142>>(x143==x144)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x145 = INT64_MIN;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = 10044014U;

	t20 = (x145==(x146>>(x147==x148)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x150 = 1U;
	int8_t x151 = INT8_MIN;
	int32_t x152 = -9280508;
	int32_t t21 = -6018;

	t21 = (x149==(x150>>(x151==x152)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x153 = 14;
	uint16_t x154 = 26U;
	int16_t x156 = 983;
	volatile int32_t t22 = 3604232;

	t22 = (x153==(x154>>(x155==x156)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x158 = 210U;
	volatile int16_t x159 = INT16_MAX;

	t23 = (x157==(x158>>(x159==x160)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x161 = INT8_MIN;
	static uint32_t x163 = 3U;
	uint8_t x164 = 14U;
	int32_t t24 = 683415;

	t24 = (x161==(x162>>(x163==x164)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x169 = 133058090;
	int8_t x170 = 15;
	static int16_t x172 = -1;
	int32_t t25 = 26144307;

	t25 = (x169==(x170>>(x171==x172)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x176 = 25;

	t26 = (x173==(x174>>(x175==x176)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x177 = -16;
	int64_t x178 = 20801319109LL;
	static int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t27 = 217;

	t27 = (x177==(x178>>(x179==x180)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x193 = 214380630641LLU;
	volatile int64_t x194 = INT64_MAX;
	uint32_t x195 = 12157914U;
	int32_t t28 = 295;

	t28 = (x193==(x194>>(x195==x196)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x197 = INT32_MIN;
	uint32_t x199 = 77U;
	uint64_t x200 = 36LLU;
	volatile int32_t t29 = -3415;

	t29 = (x197==(x198>>(x199==x200)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x205 = INT16_MIN;
	int16_t x207 = -21;
	int32_t x208 = -1;
	int32_t t30 = -29056;

	t30 = (x205==(x206>>(x207==x208)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x213 = INT16_MAX;
	uint32_t x214 = 2163U;

	t31 = (x213==(x214>>(x215==x216)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x225 = UINT32_MAX;
	uint32_t x226 = 1219537U;
	volatile int32_t x228 = INT32_MAX;
	static volatile int32_t t32 = -44181735;

	t32 = (x225==(x226>>(x227==x228)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x229 = INT32_MIN;
	uint32_t x231 = 189772U;
	uint32_t x232 = UINT32_MAX;

	t33 = (x229==(x230>>(x231==x232)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x233 = 13LLU;
	static int32_t x234 = 12;
	int8_t x235 = -1;
	static int16_t x236 = -1;
	int32_t t34 = 1;

	t34 = (x233==(x234>>(x235==x236)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x237 = INT8_MAX;
	int16_t x239 = INT16_MIN;
	int32_t x240 = 504;
	int32_t t35 = -675;

	t35 = (x237==(x238>>(x239==x240)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x254 = 56119809LLU;
	int8_t x255 = INT8_MIN;
	static volatile int32_t t36 = 688241;

	t36 = (x253==(x254>>(x255==x256)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x257 = 108U;
	uint8_t x258 = 2U;
	int8_t x260 = 14;
	int32_t t37 = -1614;

	t37 = (x257==(x258>>(x259==x260)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x262 = 119U;
	int16_t x263 = -48;
	static uint32_t x264 = 3943908U;
	int32_t t38 = 763510974;

	t38 = (x261==(x262>>(x263==x264)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x265 = 2142538964U;
	uint64_t x266 = UINT64_MAX;
	int64_t x267 = INT64_MAX;
	int32_t x268 = 946964;
	int32_t t39 = -38996;

	t39 = (x265==(x266>>(x267==x268)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x269 = UINT16_MAX;
	static int16_t x270 = 2327;
	uint16_t x271 = 36U;
	int8_t x272 = INT8_MAX;
	int32_t t40 = -1022480154;

	t40 = (x269==(x270>>(x271==x272)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x289 = INT64_MAX;
	volatile uint32_t x290 = UINT32_MAX;
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t41 = 17;

	t41 = (x289==(x290>>(x291==x292)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x297 = 1860563108257LL;
	static uint64_t x298 = UINT64_MAX;
	volatile int8_t x299 = INT8_MIN;
	static volatile uint16_t x300 = 225U;
	volatile int32_t t42 = -1;

	t42 = (x297==(x298>>(x299==x300)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x305 = 0U;
	static int16_t x306 = INT16_MAX;
	int64_t x307 = INT64_MIN;
	uint16_t x308 = 1267U;
	int32_t t43 = 274;

	t43 = (x305==(x306>>(x307==x308)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x310 = INT64_MAX;
	int64_t x311 = INT64_MIN;
	int8_t x312 = 2;
	volatile int32_t t44 = -995280;

	t44 = (x309==(x310>>(x311==x312)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x317 = INT16_MIN;
	int32_t x318 = INT32_MAX;
	volatile int32_t x319 = -223;
	int64_t x320 = -110595614852LL;

	t45 = (x317==(x318>>(x319==x320)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x322 = 22U;
	int32_t x324 = INT32_MAX;
	int32_t t46 = -42220;

	t46 = (x321==(x322>>(x323==x324)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x326 = UINT8_MAX;
	uint64_t x327 = 3311575932055538LLU;
	int64_t x328 = -1LL;
	volatile int32_t t47 = -3174;

	t47 = (x325==(x326>>(x327==x328)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x331 = INT8_MIN;
	static volatile int32_t t48 = -809886581;

	t48 = (x329==(x330>>(x331==x332)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x333 = 0;
	int32_t x335 = INT32_MAX;
	int8_t x336 = 10;
	volatile int32_t t49 = 107842047;

	t49 = (x333==(x334>>(x335==x336)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x345 = -1;
	int16_t x347 = 77;
	uint8_t x348 = UINT8_MAX;

	t50 = (x345==(x346>>(x347==x348)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int64_t x351 = -1LL;
	int8_t x352 = INT8_MIN;
	int32_t t51 = 1;

	t51 = (x349==(x350>>(x351==x352)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x353 = -1LL;
	volatile uint64_t x354 = 941402LLU;
	static int64_t x355 = INT64_MIN;
	int32_t t52 = -63347;

	t52 = (x353==(x354>>(x355==x356)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x357 = 15683;
	uint32_t x358 = 509387760U;
	int16_t x360 = -12;

	t53 = (x357==(x358>>(x359==x360)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x361 = INT8_MIN;
	uint8_t x362 = 8U;
	uint32_t x363 = 1005U;
	int64_t x364 = INT64_MAX;

	t54 = (x361==(x362>>(x363==x364)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x371 = 52;
	static int16_t x372 = INT16_MAX;

	t55 = (x369==(x370>>(x371==x372)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x373 = UINT16_MAX;
	uint8_t x374 = 10U;
	int8_t x375 = 1;
	static int32_t x376 = INT32_MIN;
	volatile int32_t t56 = -216473920;

	t56 = (x373==(x374>>(x375==x376)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x378 = 15U;
	int16_t x379 = INT16_MIN;
	int8_t x380 = -1;

	t57 = (x377==(x378>>(x379==x380)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x385 = 14;
	uint64_t x386 = 226490062727715223LLU;
	uint16_t x388 = UINT16_MAX;
	static volatile int32_t t58 = 23230283;

	t58 = (x385==(x386>>(x387==x388)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x389 = 234373144826780LLU;
	volatile int8_t x390 = 7;
	volatile int32_t x391 = 102;
	int64_t x392 = INT64_MIN;
	static int32_t t59 = -1287883;

	t59 = (x389==(x390>>(x391==x392)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = 93088;
	volatile int64_t x395 = INT64_MIN;
	volatile uint64_t x396 = 61736051LLU;
	static volatile int32_t t60 = -90691;

	t60 = (x393==(x394>>(x395==x396)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = 1;
	volatile int32_t t61 = -427;

	t61 = (x397==(x398>>(x399==x400)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x405 = -60697404;
	int8_t x406 = INT8_MAX;
	int32_t x407 = INT32_MIN;

	t62 = (x405==(x406>>(x407==x408)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x413 = INT32_MIN;
	static int8_t x415 = -11;
	int16_t x416 = INT16_MIN;
	volatile int32_t t63 = -630;

	t63 = (x413==(x414>>(x415==x416)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x421 = UINT8_MAX;
	volatile uint32_t x422 = UINT32_MAX;
	int8_t x424 = -1;
	volatile int32_t t64 = 75;

	t64 = (x421==(x422>>(x423==x424)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x425 = -15;
	uint32_t x426 = 490U;
	int32_t t65 = 29706338;

	t65 = (x425==(x426>>(x427==x428)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x433 = 368633U;
	volatile uint64_t x434 = 136423961343783348LLU;
	static volatile int32_t x435 = -1770965;
	uint32_t x436 = 63491U;
	volatile int32_t t66 = 3540;

	t66 = (x433==(x434>>(x435==x436)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x445 = -3;
	static int32_t x446 = INT32_MAX;
	volatile int32_t t67 = -8243185;

	t67 = (x445==(x446>>(x447==x448)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x453 = INT64_MIN;
	static uint32_t x456 = UINT32_MAX;

	t68 = (x453==(x454>>(x455==x456)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x457 = INT8_MIN;
	int32_t x458 = 0;
	static volatile int16_t x459 = INT16_MIN;
	uint32_t x460 = 594592U;

	t69 = (x457==(x458>>(x459==x460)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x461 = -32LL;
	volatile int64_t x462 = 49352LL;
	static uint16_t x463 = 16782U;
	int16_t x464 = INT16_MIN;
	static int32_t t70 = -58939;

	t70 = (x461==(x462>>(x463==x464)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x465 = -1;
	uint32_t x466 = UINT32_MAX;
	int64_t x467 = -36088LL;
	static int8_t x468 = INT8_MAX;
	volatile int32_t t71 = 7;

	t71 = (x465==(x466>>(x467==x468)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x474 = INT32_MAX;
	int64_t x476 = INT64_MIN;

	t72 = (x473==(x474>>(x475==x476)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x477 = INT8_MIN;
	static int64_t x478 = 1383368262881LL;
	int8_t x480 = INT8_MIN;
	int32_t t73 = 1;

	t73 = (x477==(x478>>(x479==x480)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x485 = 8372077258545048683LLU;
	static volatile int64_t x487 = INT64_MIN;
	uint16_t x488 = 7U;
	int32_t t74 = 224924;

	t74 = (x485==(x486>>(x487==x488)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x489 = 68LL;
	volatile uint16_t x490 = 159U;
	uint16_t x491 = 7U;
	int64_t x492 = 5813773081LL;
	volatile int32_t t75 = 5472;

	t75 = (x489==(x490>>(x491==x492)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x501 = INT8_MIN;
	uint32_t x502 = 23U;
	int16_t x503 = 5;
	static int32_t x504 = INT32_MAX;

	t76 = (x501==(x502>>(x503==x504)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x505 = 0;
	static uint8_t x506 = 75U;
	uint8_t x508 = 1U;
	static int32_t t77 = 96770;

	t77 = (x505==(x506>>(x507==x508)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x509 = 107;
	uint8_t x510 = 79U;
	volatile int8_t x512 = -1;
	int32_t t78 = -3708651;

	t78 = (x509==(x510>>(x511==x512)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x517 = INT8_MIN;
	static uint64_t x518 = 31074524979LLU;
	static int32_t x519 = -216;
	static volatile int32_t t79 = 488794;

	t79 = (x517==(x518>>(x519==x520)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x521 = 1234U;
	volatile uint16_t x522 = UINT16_MAX;
	int64_t x524 = -1LL;
	int32_t t80 = -1033;

	t80 = (x521==(x522>>(x523==x524)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x525 = 7058U;
	int8_t x526 = INT8_MAX;
	uint16_t x527 = UINT16_MAX;
	int32_t t81 = -26;

	t81 = (x525==(x526>>(x527==x528)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x529 = -1824282258070LL;
	uint16_t x530 = 173U;
	volatile int32_t x531 = INT32_MIN;
	uint8_t x532 = 1U;
	int32_t t82 = 202648;

	t82 = (x529==(x530>>(x531==x532)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x537 = 222506754;
	uint8_t x538 = 1U;
	volatile int8_t x539 = 24;
	int64_t x540 = -1LL;

	t83 = (x537==(x538>>(x539==x540)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x541 = UINT64_MAX;
	uint16_t x542 = 2401U;

	t84 = (x541==(x542>>(x543==x544)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x550 = 5443399515194967LLU;
	int8_t x551 = INT8_MAX;
	volatile uint8_t x552 = UINT8_MAX;
	volatile int32_t t85 = 1747;

	t85 = (x549==(x550>>(x551==x552)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x553 = UINT32_MAX;
	int8_t x554 = INT8_MAX;
	static int64_t x555 = -77451612201069LL;
	static volatile int64_t x556 = 24515938900550LL;

	t86 = (x553==(x554>>(x555==x556)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x558 = 1U;
	static volatile int8_t x560 = 17;
	static int32_t t87 = -910158;

	t87 = (x557==(x558>>(x559==x560)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x562 = INT8_MAX;
	static volatile uint16_t x563 = 2U;
	volatile int32_t x564 = INT32_MAX;
	static int32_t t88 = -141231418;

	t88 = (x561==(x562>>(x563==x564)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x570 = 19571560LLU;
	static int8_t x572 = 42;
	volatile int32_t t89 = -2;

	t89 = (x569==(x570>>(x571==x572)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x581 = 13U;
	uint64_t x582 = UINT64_MAX;
	int64_t x583 = INT64_MIN;

	t90 = (x581==(x582>>(x583==x584)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x593 = 31256487485684548LLU;
	volatile int16_t x594 = INT16_MAX;
	int16_t x595 = INT16_MAX;
	static int32_t t91 = -156;

	t91 = (x593==(x594>>(x595==x596)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x609 = 4U;
	int8_t x610 = 1;
	uint8_t x611 = 3U;
	uint32_t x612 = UINT32_MAX;
	volatile int32_t t92 = -576740030;

	t92 = (x609==(x610>>(x611==x612)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x617 = UINT8_MAX;
	int8_t x619 = 1;
	int16_t x620 = INT16_MIN;

	t93 = (x617==(x618>>(x619==x620)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x621 = -1LL;
	int32_t x623 = -1;
	int8_t x624 = INT8_MIN;
	volatile int32_t t94 = 671681;

	t94 = (x621==(x622>>(x623==x624)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x626 = UINT16_MAX;
	uint16_t x627 = UINT16_MAX;
	volatile int32_t t95 = -116;

	t95 = (x625==(x626>>(x627==x628)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x642 = INT8_MAX;
	static int32_t x644 = 16761868;
	static int32_t t96 = 9009320;

	t96 = (x641==(x642>>(x643==x644)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x649 = 1U;
	uint8_t x652 = 4U;
	volatile int32_t t97 = -192;

	t97 = (x649==(x650>>(x651==x652)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x653 = INT16_MAX;
	volatile uint8_t x654 = 0U;
	volatile int32_t x655 = -128811282;
	int8_t x656 = -3;
	static volatile int32_t t98 = 46;

	t98 = (x653==(x654>>(x655==x656)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x657 = 21866LLU;
	static uint32_t x658 = 29571U;
	int32_t x659 = INT32_MIN;
	uint16_t x660 = 0U;
	volatile int32_t t99 = -18174;

	t99 = (x657==(x658>>(x659==x660)));

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

