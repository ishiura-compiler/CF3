#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = INT64_MAX;
int16_t x4 = INT16_MAX;
uint32_t x10 = UINT32_MAX;
int32_t t3 = 11393617;
static int32_t x18 = 3538;
int16_t x20 = INT16_MIN;
volatile int32_t t7 = 663;
int8_t x45 = -1;
static volatile int32_t t8 = 1353;
int32_t x53 = -12;
int16_t x54 = INT16_MIN;
uint64_t x64 = UINT64_MAX;
uint64_t x65 = 235981498LLU;
int32_t t15 = 66;
static int8_t x88 = -1;
static uint16_t x106 = UINT16_MAX;
volatile int8_t x120 = 50;
int32_t t19 = -1191;
int32_t x126 = INT32_MIN;
int8_t x137 = -12;
int8_t x139 = 57;
int32_t t22 = 0;
int8_t x144 = 3;
uint8_t x154 = UINT8_MAX;
uint16_t x156 = 233U;
uint32_t x161 = 4378U;
int16_t x162 = INT16_MIN;
uint64_t x163 = 22226958166LLU;
volatile int64_t x168 = INT64_MIN;
volatile int32_t t26 = 13486;
volatile int32_t t27 = 9;
volatile int32_t t30 = -11;
int8_t x213 = 2;
static volatile int32_t t31 = 1720774;
int16_t x222 = INT16_MIN;
int8_t x245 = -1;
int32_t x246 = -6;
int16_t x248 = INT16_MAX;
int32_t x249 = -1;
int16_t x257 = INT16_MIN;
int8_t x259 = -1;
int16_t x263 = -3;
uint8_t x287 = 49U;
uint16_t x288 = 76U;
int32_t t41 = -568579;
int64_t x294 = INT64_MIN;
int32_t x297 = INT32_MIN;
uint16_t x300 = 90U;
int32_t x301 = -1;
static int32_t x302 = 55138;
int64_t x321 = -199055723840LL;
static volatile uint16_t x328 = UINT16_MAX;
uint8_t x334 = 22U;
int32_t x368 = INT32_MAX;
int16_t x375 = -1;
int8_t x380 = INT8_MAX;
static uint16_t x386 = 16908U;
volatile uint32_t x387 = 4333020U;
volatile int8_t x394 = INT8_MIN;
int16_t x398 = -1;
volatile uint16_t x400 = UINT16_MAX;
volatile int64_t x408 = INT64_MAX;
int64_t x432 = 1LL;
int32_t t61 = -117332;
int8_t x441 = 4;
static int32_t t62 = -50;
volatile int32_t t64 = -1;
int64_t x462 = -90781381184LL;
int16_t x474 = -1296;
static int16_t x479 = INT16_MIN;
int8_t x484 = INT8_MAX;
int8_t x496 = INT8_MAX;
int16_t x499 = INT16_MIN;
uint64_t x510 = 71LLU;
int8_t x524 = -1;
volatile int32_t t76 = 43304;
int32_t t77 = 1746510;
static volatile int32_t t78 = 73196354;
volatile uint16_t x562 = 161U;
int8_t x563 = 1;
static uint8_t x565 = UINT8_MAX;
int32_t x570 = INT32_MIN;
volatile uint16_t x575 = 35U;
static int64_t x576 = INT64_MAX;
int32_t t83 = -13393;
int16_t x577 = -1;
int8_t x588 = -1;
volatile int32_t t88 = -24637177;
volatile uint32_t x612 = 26U;
static volatile int32_t t90 = 1761;
int16_t x649 = -131;
uint8_t x660 = UINT8_MAX;
int32_t t92 = 3950615;
int64_t x671 = -32LL;
volatile int32_t x678 = 142946;
int32_t t96 = -1;
uint8_t x692 = UINT8_MAX;


void f0(void) {
	int8_t x2 = -1;
	int8_t x3 = -1;
	volatile int32_t t0 = 64;

	t0 = ((x1<x2)%(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 108336949278LLU;
	uint32_t x6 = 5367691U;
	int16_t x7 = -3;
	static uint16_t x8 = UINT16_MAX;
	int32_t t1 = 701987308;

	t1 = ((x5<x6)%(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static int32_t x11 = 33;
	int16_t x12 = INT16_MAX;
	static volatile int32_t t2 = 45;

	t2 = ((x9<x10)%(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = UINT8_MAX;
	volatile int64_t x14 = -1LL;
	int8_t x15 = 1;
	uint16_t x16 = 159U;

	t3 = ((x13<x14)%(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	int32_t t4 = 35439;

	t4 = ((x17<x18)%(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x25 = 121U;
	int64_t x26 = INT64_MIN;
	static int64_t x27 = INT64_MIN;
	static uint8_t x28 = 0U;
	static volatile int32_t t5 = -44;

	t5 = ((x25<x26)%(x27<=x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 1U;
	static int32_t x30 = INT32_MAX;
	static uint32_t x31 = UINT32_MAX;
	int32_t x32 = -1;
	int32_t t6 = -8092278;

	t6 = ((x29<x30)%(x31<=x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -4152;
	int32_t x38 = INT32_MIN;
	static volatile int64_t x39 = -1LL;
	int8_t x40 = 3;

	t7 = ((x37<x38)%(x39<=x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x46 = UINT8_MAX;
	static uint64_t x47 = 437459413LLU;
	int16_t x48 = -1;

	t8 = ((x45<x46)%(x47<=x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = 2;
	static volatile uint16_t x50 = UINT16_MAX;
	static int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;
	volatile int32_t t9 = 40;

	t9 = ((x49<x50)%(x51<=x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x55 = INT16_MIN;
	int32_t x56 = 672;
	volatile int32_t t10 = 75516;

	t10 = ((x53<x54)%(x55<=x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = INT64_MAX;
	uint16_t x58 = 58U;
	static volatile uint64_t x59 = 487976LLU;
	int32_t x60 = 39564386;
	static int32_t t11 = 3223;

	t11 = ((x57<x58)%(x59<=x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -1408721078840696LL;
	int64_t x62 = INT64_MAX;
	volatile int16_t x63 = INT16_MAX;
	int32_t t12 = -271020;

	t12 = ((x61<x62)%(x63<=x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x66 = UINT32_MAX;
	int64_t x67 = -1LL;
	int16_t x68 = -1;
	volatile int32_t t13 = -199869942;

	t13 = ((x65<x66)%(x67<=x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = -8;
	volatile uint8_t x70 = UINT8_MAX;
	volatile int16_t x71 = INT16_MIN;
	static volatile uint64_t x72 = UINT64_MAX;
	volatile int32_t t14 = 173110;

	t14 = ((x69<x70)%(x71<=x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x81 = INT8_MAX;
	uint8_t x82 = UINT8_MAX;
	int8_t x83 = 22;
	volatile uint16_t x84 = 252U;

	t15 = ((x81<x82)%(x83<=x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = 567LLU;
	static volatile int8_t x86 = -1;
	static int32_t x87 = -1;
	int32_t t16 = -839473545;

	t16 = ((x85<x86)%(x87<=x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = -577;
	static int64_t x94 = -1LL;
	volatile uint16_t x95 = UINT16_MAX;
	static uint32_t x96 = 127539U;
	int32_t t17 = 691993655;

	t17 = ((x93<x94)%(x95<=x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x105 = 11155U;
	uint16_t x107 = 14U;
	int64_t x108 = INT64_MAX;
	volatile int32_t t18 = 31253360;

	t18 = ((x105<x106)%(x107<=x108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x117 = 9U;
	int8_t x118 = -1;
	int16_t x119 = -1;

	t19 = ((x117<x118)%(x119<=x120));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x121 = INT32_MIN;
	int16_t x122 = 0;
	int64_t x123 = INT64_MIN;
	int64_t x124 = -1LL;
	volatile int32_t t20 = -1;

	t20 = ((x121<x122)%(x123<=x124));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x125 = INT32_MIN;
	int8_t x127 = 0;
	int16_t x128 = INT16_MAX;
	int32_t t21 = 323;

	t21 = ((x125<x126)%(x127<=x128));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x138 = INT64_MIN;
	uint64_t x140 = 86178732LLU;

	t22 = ((x137<x138)%(x139<=x140));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x141 = -1LL;
	static volatile int16_t x142 = -1;
	int32_t x143 = INT32_MIN;
	static int32_t t23 = -530;

	t23 = ((x141<x142)%(x143<=x144));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x153 = 741U;
	int16_t x155 = -22;
	volatile int32_t t24 = -6518;

	t24 = ((x153<x154)%(x155<=x156));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x164 = INT16_MIN;
	int32_t t25 = -4132948;

	t25 = ((x161<x162)%(x163<=x164));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x165 = -52;
	int64_t x166 = 150602258212120LL;
	volatile int64_t x167 = INT64_MIN;

	t26 = ((x165<x166)%(x167<=x168));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x169 = 16U;
	volatile uint64_t x170 = 112LLU;
	volatile int64_t x171 = -20809LL;
	static int32_t x172 = 3;

	t27 = ((x169<x170)%(x171<=x172));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x177 = INT32_MAX;
	static uint8_t x178 = 2U;
	static volatile int8_t x179 = -1;
	int32_t x180 = -1;
	int32_t t28 = 10;

	t28 = ((x177<x178)%(x179<=x180));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x189 = -1LL;
	uint64_t x190 = 3563268680598LLU;
	int16_t x191 = INT16_MIN;
	uint32_t x192 = UINT32_MAX;
	volatile int32_t t29 = -55392;

	t29 = ((x189<x190)%(x191<=x192));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x209 = INT8_MAX;
	uint16_t x210 = 0U;
	volatile int16_t x211 = INT16_MAX;
	int16_t x212 = INT16_MAX;

	t30 = ((x209<x210)%(x211<=x212));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x214 = INT64_MAX;
	static uint8_t x215 = 5U;
	static int16_t x216 = 218;

	t31 = ((x213<x214)%(x215<=x216));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x221 = INT64_MAX;
	volatile int8_t x223 = INT8_MIN;
	static uint16_t x224 = 7710U;
	volatile int32_t t32 = -109;

	t32 = ((x221<x222)%(x223<=x224));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x225 = INT64_MAX;
	uint8_t x226 = 3U;
	uint8_t x227 = 1U;
	int16_t x228 = 12909;
	volatile int32_t t33 = 679824986;

	t33 = ((x225<x226)%(x227<=x228));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x233 = INT8_MIN;
	static int8_t x234 = INT8_MIN;
	int8_t x235 = 0;
	uint8_t x236 = 39U;
	volatile int32_t t34 = -461841;

	t34 = ((x233<x234)%(x235<=x236));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x241 = 5U;
	static int8_t x242 = INT8_MIN;
	int16_t x243 = -5643;
	static int8_t x244 = 1;
	static int32_t t35 = -155;

	t35 = ((x241<x242)%(x243<=x244));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x247 = INT16_MIN;
	volatile int32_t t36 = -245165850;

	t36 = ((x245<x246)%(x247<=x248));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x250 = 814527U;
	int16_t x251 = INT16_MIN;
	volatile int32_t x252 = -1;
	volatile int32_t t37 = 30813;

	t37 = ((x249<x250)%(x251<=x252));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x258 = -1;
	static int32_t x260 = 2392357;
	static int32_t t38 = 52655;

	t38 = ((x257<x258)%(x259<=x260));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x261 = INT32_MAX;
	uint16_t x262 = UINT16_MAX;
	uint16_t x264 = 24U;
	volatile int32_t t39 = -91643;

	t39 = ((x261<x262)%(x263<=x264));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x277 = INT8_MIN;
	int16_t x278 = -1;
	uint16_t x279 = 18U;
	uint16_t x280 = UINT16_MAX;
	int32_t t40 = 832667;

	t40 = ((x277<x278)%(x279<=x280));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x285 = 2U;
	int32_t x286 = INT32_MAX;

	t41 = ((x285<x286)%(x287<=x288));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x293 = INT8_MIN;
	uint64_t x295 = 3LLU;
	int8_t x296 = INT8_MAX;
	volatile int32_t t42 = 662626230;

	t42 = ((x293<x294)%(x295<=x296));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x298 = INT64_MIN;
	static int8_t x299 = 1;
	static volatile int32_t t43 = 24;

	t43 = ((x297<x298)%(x299<=x300));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x303 = -1;
	static volatile int32_t x304 = INT32_MAX;
	int32_t t44 = 8666189;

	t44 = ((x301<x302)%(x303<=x304));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x313 = INT64_MIN;
	volatile int64_t x314 = INT64_MIN;
	uint8_t x315 = 5U;
	int32_t x316 = INT32_MAX;
	int32_t t45 = 6502448;

	t45 = ((x313<x314)%(x315<=x316));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x317 = 35;
	volatile int32_t x318 = -2;
	static int8_t x319 = INT8_MIN;
	uint8_t x320 = 0U;
	static volatile int32_t t46 = -39301;

	t46 = ((x317<x318)%(x319<=x320));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x322 = INT16_MIN;
	static int8_t x323 = -11;
	static uint8_t x324 = UINT8_MAX;
	static int32_t t47 = -65105;

	t47 = ((x321<x322)%(x323<=x324));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x325 = 12U;
	uint16_t x326 = 46U;
	volatile uint8_t x327 = UINT8_MAX;
	volatile int32_t t48 = -6;

	t48 = ((x325<x326)%(x327<=x328));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x333 = INT16_MIN;
	int16_t x335 = INT16_MIN;
	static int32_t x336 = -1;
	volatile int32_t t49 = -116560127;

	t49 = ((x333<x334)%(x335<=x336));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x345 = INT32_MIN;
	uint64_t x346 = 1628208701260110LLU;
	int64_t x347 = 0LL;
	static int64_t x348 = 333247994LL;
	int32_t t50 = -764835;

	t50 = ((x345<x346)%(x347<=x348));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x365 = INT8_MAX;
	int8_t x366 = 6;
	int8_t x367 = INT8_MIN;
	int32_t t51 = 106101;

	t51 = ((x365<x366)%(x367<=x368));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x369 = INT32_MAX;
	static int64_t x370 = -29514119LL;
	int32_t x371 = -1;
	uint32_t x372 = UINT32_MAX;
	int32_t t52 = 5;

	t52 = ((x369<x370)%(x371<=x372));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x373 = INT32_MAX;
	uint8_t x374 = UINT8_MAX;
	uint8_t x376 = 0U;
	volatile int32_t t53 = -1;

	t53 = ((x373<x374)%(x375<=x376));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x377 = INT32_MAX;
	uint16_t x378 = 475U;
	static int16_t x379 = -8639;
	static volatile int32_t t54 = -327365252;

	t54 = ((x377<x378)%(x379<=x380));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x385 = INT8_MAX;
	int32_t x388 = INT32_MAX;
	int32_t t55 = -181376;

	t55 = ((x385<x386)%(x387<=x388));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x393 = 47281451LLU;
	static int16_t x395 = INT16_MIN;
	int16_t x396 = -3898;
	int32_t t56 = -2667051;

	t56 = ((x393<x394)%(x395<=x396));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x397 = INT32_MAX;
	volatile uint32_t x399 = 16489U;
	static int32_t t57 = 12286864;

	t57 = ((x397<x398)%(x399<=x400));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x401 = INT32_MIN;
	int64_t x402 = -10559656633649276LL;
	volatile int32_t x403 = -1;
	int8_t x404 = 0;
	static volatile int32_t t58 = -10;

	t58 = ((x401<x402)%(x403<=x404));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x405 = INT8_MIN;
	static int64_t x406 = INT64_MAX;
	int16_t x407 = INT16_MIN;
	int32_t t59 = 238394;

	t59 = ((x405<x406)%(x407<=x408));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x413 = INT64_MIN;
	uint32_t x414 = 51634651U;
	uint64_t x415 = 878741811649937LLU;
	int16_t x416 = INT16_MIN;
	volatile int32_t t60 = -7010;

	t60 = ((x413<x414)%(x415<=x416));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x429 = 892;
	uint32_t x430 = 10U;
	static int8_t x431 = INT8_MIN;

	t61 = ((x429<x430)%(x431<=x432));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x442 = UINT16_MAX;
	uint16_t x443 = 24873U;
	int32_t x444 = INT32_MAX;

	t62 = ((x441<x442)%(x443<=x444));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x449 = UINT32_MAX;
	int8_t x450 = INT8_MIN;
	uint32_t x451 = 1057590U;
	int8_t x452 = -6;
	static volatile int32_t t63 = -49;

	t63 = ((x449<x450)%(x451<=x452));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x457 = INT32_MIN;
	int16_t x458 = 3;
	int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MIN;

	t64 = ((x457<x458)%(x459<=x460));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x461 = 1U;
	uint8_t x463 = 88U;
	volatile int32_t x464 = 229719046;
	static volatile int32_t t65 = 165749;

	t65 = ((x461<x462)%(x463<=x464));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x473 = 187U;
	uint32_t x475 = 12751694U;
	volatile int16_t x476 = INT16_MIN;
	int32_t t66 = 3;

	t66 = ((x473<x474)%(x475<=x476));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x477 = UINT16_MAX;
	volatile int64_t x478 = INT64_MIN;
	static int8_t x480 = 28;
	int32_t t67 = -1020811;

	t67 = ((x477<x478)%(x479<=x480));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x481 = 22;
	int32_t x482 = INT32_MAX;
	int64_t x483 = INT64_MIN;
	int32_t t68 = -508027509;

	t68 = ((x481<x482)%(x483<=x484));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x485 = UINT64_MAX;
	int16_t x486 = INT16_MAX;
	int32_t x487 = 176963;
	uint32_t x488 = 6190633U;
	static int32_t t69 = 2;

	t69 = ((x485<x486)%(x487<=x488));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x489 = -2;
	uint16_t x490 = 31U;
	int8_t x491 = INT8_MIN;
	int32_t x492 = -1;
	volatile int32_t t70 = 184115225;

	t70 = ((x489<x490)%(x491<=x492));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x493 = -1;
	int64_t x494 = INT64_MAX;
	static int64_t x495 = INT64_MIN;
	volatile int32_t t71 = 16188745;

	t71 = ((x493<x494)%(x495<=x496));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x497 = INT32_MIN;
	uint64_t x498 = UINT64_MAX;
	int64_t x500 = -1LL;
	int32_t t72 = 379824320;

	t72 = ((x497<x498)%(x499<=x500));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x501 = INT64_MAX;
	static int16_t x502 = INT16_MIN;
	static int32_t x503 = INT32_MAX;
	static uint32_t x504 = UINT32_MAX;
	volatile int32_t t73 = 37148386;

	t73 = ((x501<x502)%(x503<=x504));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x505 = -1;
	volatile uint8_t x506 = UINT8_MAX;
	uint8_t x507 = 23U;
	int32_t x508 = 216;
	int32_t t74 = 2550;

	t74 = ((x505<x506)%(x507<=x508));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x509 = -1LL;
	static int8_t x511 = INT8_MIN;
	int32_t x512 = INT32_MAX;
	volatile int32_t t75 = 525781;

	t75 = ((x509<x510)%(x511<=x512));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x521 = INT8_MIN;
	int32_t x522 = INT32_MAX;
	int32_t x523 = -1;

	t76 = ((x521<x522)%(x523<=x524));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x541 = UINT64_MAX;
	int32_t x542 = INT32_MAX;
	uint32_t x543 = 13995U;
	int16_t x544 = INT16_MIN;

	t77 = ((x541<x542)%(x543<=x544));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x545 = 1U;
	int16_t x546 = -54;
	int64_t x547 = INT64_MAX;
	uint64_t x548 = UINT64_MAX;

	t78 = ((x545<x546)%(x547<=x548));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x557 = UINT32_MAX;
	int64_t x558 = INT64_MAX;
	static int32_t x559 = INT32_MIN;
	volatile uint64_t x560 = UINT64_MAX;
	int32_t t79 = -2159135;

	t79 = ((x557<x558)%(x559<=x560));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x561 = INT32_MIN;
	uint8_t x564 = 110U;
	static int32_t t80 = 16165828;

	t80 = ((x561<x562)%(x563<=x564));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x566 = INT8_MAX;
	static int32_t x567 = INT32_MIN;
	int64_t x568 = -1LL;
	int32_t t81 = -6;

	t81 = ((x565<x566)%(x567<=x568));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x569 = INT32_MIN;
	int32_t x571 = INT32_MIN;
	uint8_t x572 = UINT8_MAX;
	int32_t t82 = -56139;

	t82 = ((x569<x570)%(x571<=x572));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x573 = -32;
	int64_t x574 = INT64_MIN;

	t83 = ((x573<x574)%(x575<=x576));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x578 = -4;
	int64_t x579 = INT64_MIN;
	static uint64_t x580 = UINT64_MAX;
	volatile int32_t t84 = 849;

	t84 = ((x577<x578)%(x579<=x580));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x585 = -1;
	int8_t x586 = 25;
	int16_t x587 = INT16_MIN;
	volatile int32_t t85 = 828816009;

	t85 = ((x585<x586)%(x587<=x588));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x597 = -44;
	uint32_t x598 = 1932U;
	int16_t x599 = INT16_MIN;
	uint8_t x600 = 1U;
	int32_t t86 = -23084;

	t86 = ((x597<x598)%(x599<=x600));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x601 = UINT16_MAX;
	int64_t x602 = INT64_MAX;
	int32_t x603 = -1;
	int16_t x604 = INT16_MAX;
	static volatile int32_t t87 = -946225181;

	t87 = ((x601<x602)%(x603<=x604));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x605 = -1LL;
	int16_t x606 = INT16_MIN;
	int32_t x607 = INT32_MAX;
	int64_t x608 = INT64_MAX;

	t88 = ((x605<x606)%(x607<=x608));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x609 = 33567345019LLU;
	int32_t x610 = INT32_MIN;
	int16_t x611 = 6;
	int32_t t89 = -493;

	t89 = ((x609<x610)%(x611<=x612));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x625 = 56U;
	int8_t x626 = -5;
	uint8_t x627 = 5U;
	volatile int16_t x628 = 14;

	t90 = ((x625<x626)%(x627<=x628));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x650 = 7779643626LLU;
	int64_t x651 = INT64_MIN;
	static int32_t x652 = 930245884;
	volatile int32_t t91 = 41;

	t91 = ((x649<x650)%(x651<=x652));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x657 = 11LLU;
	int64_t x658 = -133006117LL;
	int16_t x659 = INT16_MIN;

	t92 = ((x657<x658)%(x659<=x660));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x665 = INT8_MAX;
	int16_t x666 = INT16_MAX;
	int16_t x667 = -1;
	int32_t x668 = INT32_MAX;
	volatile int32_t t93 = -362968;

	t93 = ((x665<x666)%(x667<=x668));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x669 = UINT8_MAX;
	int64_t x670 = INT64_MIN;
	volatile int64_t x672 = -1LL;
	volatile int32_t t94 = 38642563;

	t94 = ((x669<x670)%(x671<=x672));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x677 = INT8_MIN;
	int32_t x679 = INT32_MIN;
	int16_t x680 = 1;
	volatile int32_t t95 = 101;

	t95 = ((x677<x678)%(x679<=x680));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x681 = INT8_MIN;
	int16_t x682 = INT16_MIN;
	uint16_t x683 = 3378U;
	int64_t x684 = INT64_MAX;

	t96 = ((x681<x682)%(x683<=x684));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x685 = INT16_MIN;
	static int64_t x686 = 99570517689873969LL;
	int64_t x687 = INT64_MIN;
	int32_t x688 = INT32_MIN;
	static volatile int32_t t97 = -28449;

	t97 = ((x685<x686)%(x687<=x688));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x689 = INT32_MIN;
	volatile uint64_t x690 = 3771307102600450699LLU;
	static int64_t x691 = INT64_MIN;
	volatile int32_t t98 = -57167416;

	t98 = ((x689<x690)%(x691<=x692));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x697 = 1U;
	int16_t x698 = -1;
	int64_t x699 = INT64_MIN;
	int8_t x700 = -17;
	static int32_t t99 = -101876646;

	t99 = ((x697<x698)%(x699<=x700));

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

