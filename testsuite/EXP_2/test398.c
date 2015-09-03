#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
static int8_t x11 = -1;
int64_t x30 = -32990082LL;
volatile int64_t x34 = -1LL;
uint16_t x48 = 0U;
uint64_t x50 = 115066230LLU;
static int32_t x57 = -1;
int64_t x60 = -1LL;
int8_t x82 = INT8_MAX;
int8_t x84 = INT8_MAX;
volatile uint32_t x89 = 53979973U;
uint64_t x90 = 731050LLU;
int8_t x92 = INT8_MAX;
static uint8_t x94 = 127U;
volatile int32_t x96 = 674081;
volatile int32_t t12 = -3501413;
volatile int32_t t15 = 28;
volatile uint32_t x111 = 31282513U;
volatile int32_t t17 = -679959133;
int16_t x130 = -1;
int32_t t20 = -116;
int32_t x145 = INT32_MIN;
volatile int32_t t21 = -574118247;
uint16_t x173 = UINT16_MAX;
int64_t x174 = -85920LL;
volatile int64_t x178 = -1LL;
static volatile uint32_t x179 = UINT32_MAX;
int32_t x193 = INT32_MIN;
uint16_t x194 = UINT16_MAX;
uint32_t x201 = 112U;
uint16_t x202 = UINT16_MAX;
int32_t x205 = 835839362;
int16_t x208 = INT16_MIN;
static int64_t x216 = INT64_MIN;
uint32_t x217 = 7U;
int8_t x218 = INT8_MIN;
volatile int32_t t33 = 109751652;
int8_t x226 = INT8_MAX;
uint32_t x234 = 593129792U;
int32_t x235 = -49284947;
int32_t x249 = INT32_MIN;
int64_t x256 = -253953LL;
volatile int16_t x261 = 2167;
uint64_t x264 = 64201817634LLU;
volatile int32_t x271 = -1;
int8_t x295 = INT8_MIN;
static int8_t x297 = INT8_MIN;
int32_t x299 = -689;
int16_t x300 = -1;
volatile uint16_t x305 = UINT16_MAX;
volatile uint32_t x306 = 23185U;
int32_t t48 = 996834124;
volatile int32_t x313 = 10;
static uint8_t x314 = 3U;
volatile int16_t x324 = -1;
volatile int16_t x333 = -1;
uint16_t x335 = 10194U;
uint32_t x340 = 27004U;
int16_t x344 = -1;
static int32_t t54 = -18323629;
int16_t x347 = INT16_MAX;
volatile uint16_t x354 = 2011U;
int64_t x356 = INT64_MIN;
volatile int32_t t57 = -1537186;
volatile uint64_t x361 = 1026096LLU;
int32_t t59 = 15078145;
static int64_t x384 = -203LL;
static int64_t x400 = INT64_MIN;
uint16_t x407 = 10U;
static int32_t t68 = 87981603;
static int64_t x437 = INT64_MIN;
uint64_t x440 = 3752399754269LLU;
static uint16_t x445 = 3U;
int8_t x448 = INT8_MIN;
static volatile uint64_t x458 = 702808LLU;
volatile int32_t t75 = 7;
int32_t x461 = 608237522;
int32_t t76 = -2917;
static int8_t x471 = INT8_MIN;
static int16_t x472 = INT16_MIN;
volatile int32_t t79 = -93118;
volatile int64_t x483 = -1LL;
volatile int32_t t80 = 1;
int64_t x486 = -1LL;
int32_t x488 = 0;
static int8_t x491 = 37;
uint8_t x497 = 114U;
int64_t x501 = -1LL;
int32_t x503 = -1;
int16_t x506 = INT16_MIN;
uint32_t x508 = UINT32_MAX;
int32_t t85 = -144896;
static volatile int32_t t86 = 196;
int16_t x515 = INT16_MAX;
static int32_t t87 = 35;
int32_t x519 = -1;
uint16_t x525 = UINT16_MAX;
uint64_t x527 = 13818766418LLU;
uint32_t x528 = 31U;
int8_t x539 = INT8_MIN;
int8_t x546 = INT8_MIN;
int16_t x559 = INT16_MIN;
static uint8_t x563 = 32U;
volatile int64_t x564 = INT64_MIN;
static int8_t x565 = INT8_MIN;
int16_t x575 = -40;
int32_t t98 = -13;
uint16_t x578 = UINT16_MAX;
volatile int64_t x579 = 1569072631380LL;
static volatile int8_t x580 = -5;


void f0(void) {
	int32_t x6 = -428;
	int16_t x7 = INT16_MAX;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t0 = -513;

	t0 = ((x5%(x6*x7))==x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	int8_t x10 = -1;
	uint64_t x12 = 124783640824029LLU;
	int32_t t1 = -168922;

	t1 = ((x9%(x10*x11))==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 32249066U;
	int8_t x18 = INT8_MIN;
	static int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MAX;
	int32_t t2 = -1183820;

	t2 = ((x17%(x18*x19))==x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x29 = 66U;
	int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t3 = 1043429;

	t3 = ((x29%(x30*x31))==x32);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = INT32_MAX;
	uint32_t x35 = 222220043U;
	int32_t x36 = INT32_MAX;
	int32_t t4 = -3450604;

	t4 = ((x33%(x34*x35))==x36);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x45 = UINT64_MAX;
	static uint16_t x46 = 3U;
	uint8_t x47 = 60U;
	static int32_t t5 = -39575543;

	t5 = ((x45%(x46*x47))==x48);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int16_t x51 = INT16_MIN;
	int8_t x52 = -1;
	static volatile int32_t t6 = 3;

	t6 = ((x49%(x50*x51))==x52);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x58 = -1;
	int64_t x59 = 59901183911225548LL;
	volatile int32_t t7 = -32;

	t7 = ((x57%(x58*x59))==x60);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x61 = INT16_MIN;
	int32_t x62 = 2;
	int32_t x63 = -1;
	int16_t x64 = INT16_MIN;
	volatile int32_t t8 = -10;

	t8 = ((x61%(x62*x63))==x64);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x69 = 555250LLU;
	volatile int8_t x70 = -1;
	int16_t x71 = -1;
	uint8_t x72 = 0U;
	volatile int32_t t9 = 1818686;

	t9 = ((x69%(x70*x71))==x72);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x81 = -1LL;
	static uint64_t x83 = 1511LLU;
	int32_t t10 = 1;

	t10 = ((x81%(x82*x83))==x84);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x91 = -1;
	int32_t t11 = 233;

	t11 = ((x89%(x90*x91))==x92);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x93 = UINT8_MAX;
	uint16_t x95 = 239U;

	t12 = ((x93%(x94*x95))==x96);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x97 = -3327709;
	uint64_t x98 = UINT64_MAX;
	uint32_t x99 = 2666863U;
	int64_t x100 = INT64_MAX;
	volatile int32_t t13 = -33263990;

	t13 = ((x97%(x98*x99))==x100);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x101 = UINT64_MAX;
	static volatile int64_t x102 = -538527069343LL;
	volatile uint64_t x103 = 11181317472572LLU;
	int64_t x104 = -4245309713463LL;
	int32_t t14 = 84908;

	t14 = ((x101%(x102*x103))==x104);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x105 = INT16_MIN;
	uint16_t x106 = 12U;
	static volatile uint32_t x107 = UINT32_MAX;
	uint8_t x108 = UINT8_MAX;

	t15 = ((x105%(x106*x107))==x108);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x109 = UINT64_MAX;
	static uint64_t x110 = 5499771008LLU;
	uint8_t x112 = 104U;
	int32_t t16 = -1;

	t16 = ((x109%(x110*x111))==x112);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x113 = INT8_MIN;
	static int32_t x114 = 4570984;
	static uint32_t x115 = 22633U;
	int64_t x116 = -1110115980739172344LL;

	t17 = ((x113%(x114*x115))==x116);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x121 = INT64_MAX;
	int32_t x122 = -43;
	uint64_t x123 = 7977676395099363LLU;
	int32_t x124 = INT32_MAX;
	volatile int32_t t18 = 29;

	t18 = ((x121%(x122*x123))==x124);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x125 = INT8_MAX;
	int8_t x126 = -1;
	static uint16_t x127 = UINT16_MAX;
	int64_t x128 = INT64_MAX;
	static volatile int32_t t19 = -525600740;

	t19 = ((x125%(x126*x127))==x128);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x129 = INT16_MAX;
	int16_t x131 = -1;
	static int16_t x132 = INT16_MAX;

	t20 = ((x129%(x130*x131))==x132);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x146 = UINT32_MAX;
	uint32_t x147 = 7573866U;
	int8_t x148 = -1;

	t21 = ((x145%(x146*x147))==x148);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x157 = UINT32_MAX;
	static int8_t x158 = -21;
	int16_t x159 = 11;
	int64_t x160 = INT64_MIN;
	volatile int32_t t22 = -17660;

	t22 = ((x157%(x158*x159))==x160);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x161 = 12U;
	uint32_t x162 = 67U;
	int64_t x163 = 84LL;
	static int16_t x164 = -1;
	int32_t t23 = 15477020;

	t23 = ((x161%(x162*x163))==x164);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x169 = 1U;
	uint64_t x170 = 80151237766569LLU;
	static uint32_t x171 = 29422U;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t24 = -3433257;

	t24 = ((x169%(x170*x171))==x172);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x175 = INT8_MIN;
	volatile uint64_t x176 = 3535LLU;
	volatile int32_t t25 = -5511;

	t25 = ((x173%(x174*x175))==x176);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x177 = INT16_MIN;
	uint16_t x180 = 174U;
	static volatile int32_t t26 = -3;

	t26 = ((x177%(x178*x179))==x180);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x195 = 1346U;
	int16_t x196 = -1;
	volatile int32_t t27 = 2780;

	t27 = ((x193%(x194*x195))==x196);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x203 = INT8_MAX;
	int8_t x204 = 6;
	int32_t t28 = 109702642;

	t28 = ((x201%(x202*x203))==x204);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x206 = -1;
	uint64_t x207 = 312431578LLU;
	volatile int32_t t29 = -92314;

	t29 = ((x205%(x206*x207))==x208);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x209 = INT64_MIN;
	volatile int16_t x210 = -1;
	static int64_t x211 = -1LL;
	int16_t x212 = INT16_MIN;
	static int32_t t30 = 114;

	t30 = ((x209%(x210*x211))==x212);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x213 = 44;
	static int16_t x214 = -1;
	int32_t x215 = INT32_MAX;
	static volatile int32_t t31 = 302;

	t31 = ((x213%(x214*x215))==x216);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x219 = 45U;
	uint16_t x220 = UINT16_MAX;
	static int32_t t32 = -922;

	t32 = ((x217%(x218*x219))==x220);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x221 = 178603U;
	volatile int64_t x222 = 1LL;
	int32_t x223 = -3052;
	int8_t x224 = 7;

	t33 = ((x221%(x222*x223))==x224);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x225 = 38U;
	int16_t x227 = -6602;
	uint8_t x228 = 22U;
	int32_t t34 = 1128;

	t34 = ((x225%(x226*x227))==x228);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x233 = -11660834910914LL;
	int32_t x236 = -1;
	static int32_t t35 = -26735573;

	t35 = ((x233%(x234*x235))==x236);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	uint32_t x239 = 37U;
	volatile int8_t x240 = -1;
	static int32_t t36 = -660;

	t36 = ((x237%(x238*x239))==x240);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x245 = 51430975U;
	int16_t x246 = INT16_MAX;
	static uint32_t x247 = 11U;
	int8_t x248 = -29;
	static int32_t t37 = 10693101;

	t37 = ((x245%(x246*x247))==x248);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x250 = INT8_MIN;
	uint64_t x251 = UINT64_MAX;
	uint32_t x252 = 54U;
	volatile int32_t t38 = 252691576;

	t38 = ((x249%(x250*x251))==x252);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x253 = 4U;
	uint32_t x254 = 831979411U;
	int16_t x255 = INT16_MAX;
	volatile int32_t t39 = 975251488;

	t39 = ((x253%(x254*x255))==x256);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x262 = -1LL;
	uint8_t x263 = 1U;
	static int32_t t40 = 55908;

	t40 = ((x261%(x262*x263))==x264);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x265 = INT32_MIN;
	int16_t x266 = 1;
	int16_t x267 = -1;
	uint32_t x268 = 215U;
	int32_t t41 = -4;

	t41 = ((x265%(x266*x267))==x268);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x269 = UINT16_MAX;
	static uint16_t x270 = UINT16_MAX;
	int16_t x272 = INT16_MAX;
	int32_t t42 = 0;

	t42 = ((x269%(x270*x271))==x272);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x281 = 8698U;
	uint16_t x282 = 375U;
	int16_t x283 = INT16_MIN;
	volatile int32_t x284 = -1;
	static int32_t t43 = 327532287;

	t43 = ((x281%(x282*x283))==x284);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x285 = -1LL;
	uint32_t x286 = 3001081U;
	uint8_t x287 = UINT8_MAX;
	int8_t x288 = -1;
	volatile int32_t t44 = 39;

	t44 = ((x285%(x286*x287))==x288);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x289 = INT8_MIN;
	static int64_t x290 = INT64_MAX;
	uint8_t x291 = 1U;
	uint32_t x292 = 428901747U;
	static int32_t t45 = 99;

	t45 = ((x289%(x290*x291))==x292);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x293 = INT16_MIN;
	uint32_t x294 = 781U;
	int16_t x296 = INT16_MIN;
	volatile int32_t t46 = 15444;

	t46 = ((x293%(x294*x295))==x296);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x298 = -1LL;
	static int32_t t47 = 0;

	t47 = ((x297%(x298*x299))==x300);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x307 = INT16_MAX;
	uint8_t x308 = 26U;

	t48 = ((x305%(x306*x307))==x308);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x309 = -1;
	int16_t x310 = -1;
	uint32_t x311 = UINT32_MAX;
	static int32_t x312 = INT32_MAX;
	static int32_t t49 = -5;

	t49 = ((x309%(x310*x311))==x312);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x315 = INT8_MIN;
	static int16_t x316 = INT16_MIN;
	int32_t t50 = -104203209;

	t50 = ((x313%(x314*x315))==x316);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x321 = 3304888857LLU;
	volatile int32_t x322 = -1;
	volatile int64_t x323 = 984751368LL;
	int32_t t51 = 3960;

	t51 = ((x321%(x322*x323))==x324);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x334 = INT8_MIN;
	volatile int8_t x336 = INT8_MAX;
	int32_t t52 = 22;

	t52 = ((x333%(x334*x335))==x336);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = -1;
	uint16_t x339 = 3437U;
	volatile int32_t t53 = -3037653;

	t53 = ((x337%(x338*x339))==x340);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x341 = 2U;
	int8_t x342 = -1;
	volatile int8_t x343 = 7;

	t54 = ((x341%(x342*x343))==x344);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x345 = -1;
	int16_t x346 = 12828;
	volatile int64_t x348 = INT64_MIN;
	static int32_t t55 = -935457007;

	t55 = ((x345%(x346*x347))==x348);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x349 = INT16_MAX;
	static uint64_t x350 = 21470LLU;
	uint64_t x351 = 14825LLU;
	uint16_t x352 = 4U;
	int32_t t56 = 56701;

	t56 = ((x349%(x350*x351))==x352);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x353 = UINT64_MAX;
	int16_t x355 = -14;

	t57 = ((x353%(x354*x355))==x356);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x357 = -1LL;
	static uint16_t x358 = UINT16_MAX;
	uint8_t x359 = 2U;
	int8_t x360 = -1;
	static volatile int32_t t58 = 12257003;

	t58 = ((x357%(x358*x359))==x360);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x362 = 4063;
	volatile int16_t x363 = 271;
	volatile int8_t x364 = INT8_MAX;

	t59 = ((x361%(x362*x363))==x364);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x365 = INT64_MIN;
	uint16_t x366 = 407U;
	int16_t x367 = -30;
	uint16_t x368 = 12U;
	int32_t t60 = -943213551;

	t60 = ((x365%(x366*x367))==x368);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x369 = INT16_MIN;
	int8_t x370 = 1;
	uint8_t x371 = 23U;
	static uint16_t x372 = 1603U;
	volatile int32_t t61 = -9913;

	t61 = ((x369%(x370*x371))==x372);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x381 = -1;
	volatile uint16_t x382 = UINT16_MAX;
	uint64_t x383 = UINT64_MAX;
	int32_t t62 = -17240;

	t62 = ((x381%(x382*x383))==x384);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x385 = INT32_MAX;
	int16_t x386 = 39;
	uint32_t x387 = 127731442U;
	static volatile int16_t x388 = INT16_MIN;
	static int32_t t63 = -13286819;

	t63 = ((x385%(x386*x387))==x388);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x389 = 105U;
	volatile int64_t x390 = INT64_MAX;
	int8_t x391 = -1;
	int32_t x392 = INT32_MIN;
	int32_t t64 = 835;

	t64 = ((x389%(x390*x391))==x392);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x393 = INT64_MAX;
	static volatile uint16_t x394 = UINT16_MAX;
	int8_t x395 = 22;
	uint64_t x396 = 599178LLU;
	int32_t t65 = 74188;

	t65 = ((x393%(x394*x395))==x396);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x397 = INT16_MAX;
	static int8_t x398 = INT8_MIN;
	uint16_t x399 = UINT16_MAX;
	static volatile int32_t t66 = 8242282;

	t66 = ((x397%(x398*x399))==x400);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x405 = INT16_MAX;
	int8_t x406 = -1;
	static volatile uint8_t x408 = 8U;
	int32_t t67 = 2;

	t67 = ((x405%(x406*x407))==x408);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x413 = INT8_MIN;
	uint8_t x414 = 45U;
	uint64_t x415 = 1542662258LLU;
	static int8_t x416 = 9;

	t68 = ((x413%(x414*x415))==x416);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x421 = 4U;
	uint8_t x422 = 48U;
	static uint32_t x423 = 25U;
	static int8_t x424 = -5;
	int32_t t69 = 6;

	t69 = ((x421%(x422*x423))==x424);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x429 = 30;
	uint64_t x430 = 39281521298LLU;
	uint64_t x431 = 5984761191LLU;
	uint32_t x432 = 46687U;
	static volatile int32_t t70 = -1629478;

	t70 = ((x429%(x430*x431))==x432);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x433 = UINT8_MAX;
	int16_t x434 = 15887;
	volatile uint16_t x435 = 13U;
	int8_t x436 = 9;
	int32_t t71 = 346;

	t71 = ((x433%(x434*x435))==x436);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x438 = 10214445235LLU;
	int8_t x439 = INT8_MAX;
	static int32_t t72 = 9;

	t72 = ((x437%(x438*x439))==x440);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x446 = INT8_MIN;
	uint16_t x447 = UINT16_MAX;
	int32_t t73 = 12883624;

	t73 = ((x445%(x446*x447))==x448);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x453 = 3;
	uint64_t x454 = 14849769LLU;
	uint64_t x455 = 13LLU;
	uint32_t x456 = 200024U;
	volatile int32_t t74 = 26;

	t74 = ((x453%(x454*x455))==x456);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x457 = -1;
	volatile int64_t x459 = 1150659318499688LL;
	uint32_t x460 = UINT32_MAX;

	t75 = ((x457%(x458*x459))==x460);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x462 = UINT64_MAX;
	uint8_t x463 = 51U;
	static int16_t x464 = -1;

	t76 = ((x461%(x462*x463))==x464);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x469 = 290U;
	int8_t x470 = -1;
	int32_t t77 = -109;

	t77 = ((x469%(x470*x471))==x472);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x473 = -1;
	uint16_t x474 = 2836U;
	static int64_t x475 = 34116095LL;
	static uint8_t x476 = UINT8_MAX;
	volatile int32_t t78 = -866512;

	t78 = ((x473%(x474*x475))==x476);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x477 = 2755U;
	static int32_t x478 = -466;
	static volatile int8_t x479 = -1;
	int32_t x480 = -741;

	t79 = ((x477%(x478*x479))==x480);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x481 = -4537344074089890LL;
	int32_t x482 = -1744;
	int64_t x484 = INT64_MIN;

	t80 = ((x481%(x482*x483))==x484);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x485 = 14023U;
	volatile int8_t x487 = 24;
	static volatile int32_t t81 = 404;

	t81 = ((x485%(x486*x487))==x488);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x489 = 1992U;
	static int8_t x490 = INT8_MIN;
	volatile uint16_t x492 = 3621U;
	volatile int32_t t82 = 0;

	t82 = ((x489%(x490*x491))==x492);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x498 = -777058520658LL;
	static volatile uint32_t x499 = 59U;
	static int64_t x500 = INT64_MIN;
	volatile int32_t t83 = 2;

	t83 = ((x497%(x498*x499))==x500);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x502 = UINT32_MAX;
	uint16_t x504 = 136U;
	static int32_t t84 = -1;

	t84 = ((x501%(x502*x503))==x504);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x505 = 0U;
	volatile int16_t x507 = -1;

	t85 = ((x505%(x506*x507))==x508);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x509 = INT64_MAX;
	uint64_t x510 = UINT64_MAX;
	static volatile int8_t x511 = INT8_MIN;
	int32_t x512 = INT32_MIN;

	t86 = ((x509%(x510*x511))==x512);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x513 = 68175;
	int16_t x514 = INT16_MAX;
	int64_t x516 = 5780532333LL;

	t87 = ((x513%(x514*x515))==x516);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x517 = INT64_MIN;
	static uint32_t x518 = 203U;
	int8_t x520 = INT8_MIN;
	volatile int32_t t88 = -1;

	t88 = ((x517%(x518*x519))==x520);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x526 = 22U;
	int32_t t89 = 21219986;

	t89 = ((x525%(x526*x527))==x528);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x529 = -1;
	int16_t x530 = INT16_MAX;
	volatile int16_t x531 = 1;
	volatile int16_t x532 = 521;
	volatile int32_t t90 = -5869868;

	t90 = ((x529%(x530*x531))==x532);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x537 = 30178813438161LLU;
	uint64_t x538 = 14LLU;
	int8_t x540 = INT8_MIN;
	int32_t t91 = 14;

	t91 = ((x537%(x538*x539))==x540);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x545 = INT32_MIN;
	uint64_t x547 = UINT64_MAX;
	int16_t x548 = INT16_MIN;
	int32_t t92 = 1587866;

	t92 = ((x545%(x546*x547))==x548);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x549 = 1832401899U;
	uint64_t x550 = UINT64_MAX;
	uint16_t x551 = UINT16_MAX;
	static int32_t x552 = 3452;
	static int32_t t93 = -3;

	t93 = ((x549%(x550*x551))==x552);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x553 = -1LL;
	volatile uint64_t x554 = 353626LLU;
	int16_t x555 = -1;
	static int64_t x556 = INT64_MIN;
	int32_t t94 = 6385898;

	t94 = ((x553%(x554*x555))==x556);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x557 = 23351447U;
	volatile int8_t x558 = INT8_MIN;
	int64_t x560 = -1LL;
	int32_t t95 = 152411178;

	t95 = ((x557%(x558*x559))==x560);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x561 = 21U;
	uint8_t x562 = UINT8_MAX;
	int32_t t96 = -448145;

	t96 = ((x561%(x562*x563))==x564);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x566 = 198434344900590LL;
	static int8_t x567 = INT8_MIN;
	int64_t x568 = INT64_MAX;
	int32_t t97 = 0;

	t97 = ((x565%(x566*x567))==x568);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x573 = 507363344U;
	uint64_t x574 = 1190638073717LLU;
	static int64_t x576 = INT64_MAX;

	t98 = ((x573%(x574*x575))==x576);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x577 = 86;
	static volatile int32_t t99 = -78;

	t99 = ((x577%(x578*x579))==x580);

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

