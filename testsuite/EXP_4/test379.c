#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x11 = -1;
volatile int64_t t0 = 245LL;
volatile int16_t x14 = 9418;
volatile int16_t x16 = -1;
int64_t x19 = -221705649LL;
int8_t x20 = INT8_MAX;
uint64_t x36 = UINT64_MAX;
int32_t x37 = INT32_MIN;
volatile uint64_t x38 = 1096720LLU;
static int32_t x53 = -1;
int64_t x70 = INT64_MAX;
volatile int8_t x73 = -1;
static uint32_t x76 = 990713896U;
static uint32_t x85 = UINT32_MAX;
uint16_t x86 = UINT16_MAX;
volatile int64_t x94 = 705313402LL;
static int64_t t18 = -19418240195238293LL;
static int8_t x116 = INT8_MIN;
volatile int32_t t21 = 1668;
int16_t x137 = -85;
uint16_t x145 = 14U;
static int16_t x146 = -1;
int32_t x150 = INT32_MIN;
int32_t x153 = -1;
static volatile uint64_t t28 = 4139587667317413LLU;
static volatile uint64_t x165 = 124257954839LLU;
static uint8_t x180 = 46U;
volatile int64_t t33 = 76032LL;
static volatile int64_t x191 = -1421645643028317LL;
static int32_t x195 = -1;
int8_t x199 = INT8_MIN;
int64_t x205 = INT64_MAX;
uint64_t x216 = 25LLU;
int8_t x220 = -1;
int32_t x225 = 0;
uint16_t x226 = 358U;
int32_t t42 = -28776253;
uint64_t t43 = 0LLU;
int64_t x238 = INT64_MIN;
volatile int64_t t44 = -2038894932019452LL;
int8_t x264 = 5;
int32_t x270 = -1;
volatile int32_t x271 = -352044;
uint16_t x275 = 1202U;
int32_t t47 = 682282028;
uint32_t x279 = 7507816U;
int16_t x281 = INT16_MIN;
volatile int64_t x291 = -1LL;
static volatile int64_t t51 = -523528110LL;
int64_t x293 = -1LL;
static int8_t x296 = 3;
static int32_t x310 = INT32_MIN;
static int32_t x311 = 588;
uint64_t x319 = UINT64_MAX;
static volatile uint64_t t56 = 19563510736546708LLU;
uint8_t x324 = UINT8_MAX;
uint32_t x326 = 2773993U;
static int8_t x328 = INT8_MIN;
int64_t x341 = INT64_MIN;
volatile int8_t x343 = 54;
int64_t x366 = INT64_MIN;
int64_t x374 = INT64_MIN;
int64_t x375 = -1LL;
uint64_t t67 = 4695397705964LLU;
uint32_t x388 = 410U;
uint16_t x389 = UINT16_MAX;
int64_t x393 = -1LL;
static volatile int64_t t71 = -1LL;
int32_t t72 = 111053;
int8_t x411 = -1;
volatile int32_t x413 = -1;
int64_t x419 = -1LL;
volatile int32_t x420 = -1068216200;
int64_t x423 = 13875481248552LL;
int64_t x439 = -506414962LL;
int64_t x440 = 3763LL;
int64_t x444 = 11304129212146402LL;
uint64_t t81 = UINT64_MAX;
int64_t t83 = 1LL;
int64_t x461 = INT64_MIN;
uint64_t x472 = 146863631LLU;
static volatile int64_t x479 = -1LL;
int32_t x483 = -1;
volatile uint64_t t91 = 457518LLU;
static int16_t x516 = INT16_MIN;
static volatile uint64_t t94 = 62554194668827674LLU;
int8_t x529 = 6;
uint8_t x533 = UINT8_MAX;
volatile int64_t x534 = INT64_MIN;


void f0(void) {
	int64_t x9 = -9439464925997LL;
	static uint16_t x10 = 1407U;
	int64_t x12 = 1260LL;

	t0 = (x9-(x10/(x11*x12)));

	if (t0 != -9439464925996LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MAX;
	uint32_t x15 = 528975761U;
	volatile uint32_t t1 = 967225U;

	t1 = (x13-(x14/(x15*x16)));

	if (t1 != 32767U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = 24;
	static int64_t x18 = INT64_MIN;
	volatile int64_t t2 = -1LL;

	t2 = (x17-(x18/(x19*x20)));

	if (t2 != -327573842LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x21 = -1;
	static int32_t x22 = INT32_MAX;
	static int32_t x23 = 499880;
	static uint64_t x24 = UINT64_MAX;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (x21-(x22/(x23*x24)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x25 = INT16_MAX;
	volatile int16_t x26 = INT16_MAX;
	uint32_t x27 = 1058U;
	int16_t x28 = INT16_MIN;
	uint32_t t4 = 365372232U;

	t4 = (x25-(x26/(x27*x28)));

	if (t4 != 32767U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = -1;
	volatile int64_t x35 = INT64_MIN;
	uint64_t t5 = 7786607051LLU;

	t5 = (x33-(x34/(x35*x36)));

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x39 = UINT16_MAX;
	volatile uint64_t x40 = UINT64_MAX;
	volatile uint64_t t6 = 7959283116798209LLU;

	t6 = (x37-(x38/(x39*x40)));

	if (t6 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x41 = INT32_MAX;
	volatile int64_t x42 = INT64_MAX;
	static uint64_t x43 = 1LLU;
	int64_t x44 = 123129522615058384LL;
	static uint64_t t7 = 5700016LLU;

	t7 = (x41-(x42/(x43*x44)));

	if (t7 != 2147483573LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	static uint32_t x46 = 1963415U;
	volatile uint32_t x47 = UINT32_MAX;
	uint8_t x48 = 1U;
	volatile uint32_t t8 = 135601142U;

	t8 = (x45-(x46/(x47*x48)));

	if (t8 != 4294934528U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = -1LL;
	volatile int8_t x50 = INT8_MIN;
	static int16_t x51 = 665;
	static volatile uint16_t x52 = 257U;
	static volatile int64_t t9 = -29338LL;

	t9 = (x49-(x50/(x51*x52)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x54 = UINT32_MAX;
	static uint64_t x55 = 207849483531556145LLU;
	int64_t x56 = INT64_MIN;
	static volatile uint64_t t10 = UINT64_MAX;

	t10 = (x53-(x54/(x55*x56)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x57 = -1LL;
	int16_t x58 = -1;
	volatile int8_t x59 = -1;
	int64_t x60 = INT64_MAX;
	static volatile int64_t t11 = 831160217695LL;

	t11 = (x57-(x58/(x59*x60)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x61 = -1;
	int32_t x62 = 12309877;
	static int16_t x63 = -1;
	volatile uint8_t x64 = UINT8_MAX;
	volatile int32_t t12 = 1;

	t12 = (x61-(x62/(x63*x64)));

	if (t12 != 48273) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MIN;
	volatile int32_t x71 = -1;
	int16_t x72 = 1844;
	static volatile int64_t t13 = -4056LL;

	t13 = (x69-(x70/(x71*x72)));

	if (t13 != 5001826505908312LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x74 = INT8_MAX;
	static uint32_t x75 = 23U;
	uint32_t t14 = UINT32_MAX;

	t14 = (x73-(x74/(x75*x76)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x81 = UINT8_MAX;
	static volatile uint16_t x82 = 495U;
	int16_t x83 = INT16_MAX;
	int16_t x84 = INT16_MIN;
	volatile int32_t t15 = 0;

	t15 = (x81-(x82/(x83*x84)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x87 = UINT64_MAX;
	int8_t x88 = -1;
	volatile uint64_t t16 = 5855990LLU;

	t16 = (x85-(x86/(x87*x88)));

	if (t16 != 4294901760LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = -11283925157785838LL;
	uint64_t x90 = 2696512989971LLU;
	int64_t x91 = -600187626LL;
	volatile int16_t x92 = 551;
	uint64_t t17 = 116494780040LLU;

	t17 = (x89-(x90/(x91*x92)));

	if (t17 != 18435460148551765778LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = UINT32_MAX;
	int64_t x95 = 112LL;
	int16_t x96 = INT16_MIN;

	t18 = (x93-(x94/(x95*x96)));

	if (t18 != 4294967487LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x101 = 0U;
	static volatile uint64_t x102 = 55LLU;
	int64_t x103 = -935848LL;
	int16_t x104 = -1;
	uint64_t t19 = 507LLU;

	t19 = (x101-(x102/(x103*x104)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x109 = 0U;
	int16_t x110 = INT16_MIN;
	uint32_t x111 = 78U;
	uint64_t x112 = 24075670857205084LLU;
	static volatile uint64_t t20 = 371194968728510134LLU;

	t20 = (x109-(x110/(x111*x112)));

	if (t20 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x113 = INT16_MAX;
	int16_t x114 = 1;
	uint16_t x115 = 283U;

	t21 = (x113-(x114/(x115*x116)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = INT32_MIN;
	uint16_t x119 = 1U;
	int64_t x120 = INT64_MIN;
	volatile int64_t t22 = 31112420377LL;

	t22 = (x117-(x118/(x119*x120)));

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MIN;
	uint64_t x122 = UINT64_MAX;
	int8_t x123 = -1;
	int16_t x124 = 107;
	uint64_t t23 = 716461114350394026LLU;

	t23 = (x121-(x122/(x123*x124)));

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x125 = 5U;
	static volatile int8_t x126 = -1;
	volatile uint8_t x127 = 7U;
	int16_t x128 = -118;
	int32_t t24 = -522;

	t24 = (x125-(x126/(x127*x128)));

	if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x138 = INT8_MIN;
	uint16_t x139 = 1U;
	volatile int32_t x140 = INT32_MAX;
	int32_t t25 = -92914735;

	t25 = (x137-(x138/(x139*x140)));

	if (t25 != -85) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x147 = INT8_MAX;
	static uint8_t x148 = 1U;
	int32_t t26 = 1;

	t26 = (x145-(x146/(x147*x148)));

	if (t26 != 14) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x149 = UINT8_MAX;
	volatile int32_t x151 = -1;
	volatile uint16_t x152 = UINT16_MAX;
	volatile int32_t t27 = -1;

	t27 = (x149-(x150/(x151*x152)));

	if (t27 != -32513) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x154 = UINT64_MAX;
	int16_t x155 = INT16_MAX;
	int16_t x156 = -1;

	t28 = (x153-(x154/(x155*x156)));

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = -1;
	static uint64_t x162 = 1985372950255777735LLU;
	int16_t x163 = -1;
	int32_t x164 = -1;
	volatile uint64_t t29 = 2LLU;

	t29 = (x161-(x162/(x163*x164)));

	if (t29 != 16461371123453773880LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x166 = 3500U;
	static int16_t x167 = 10824;
	uint8_t x168 = 3U;
	uint64_t t30 = 4088638706857LLU;

	t30 = (x165-(x166/(x167*x168)));

	if (t30 != 124257954839LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x169 = 57;
	int16_t x170 = -1;
	int32_t x171 = INT32_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t31 = 8040463U;

	t31 = (x169-(x170/(x171*x172)));

	if (t31 != 56U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = INT16_MAX;
	int16_t x174 = -1;
	int32_t x175 = 4938;
	volatile uint8_t x176 = UINT8_MAX;
	volatile int32_t t32 = 3386;

	t32 = (x173-(x174/(x175*x176)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x177 = -1LL;
	uint8_t x178 = UINT8_MAX;
	int16_t x179 = -1;

	t33 = (x177-(x178/(x179*x180)));

	if (t33 != 4LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x189 = INT8_MAX;
	int8_t x190 = 1;
	int64_t x192 = -1LL;
	static int64_t t34 = 8228606LL;

	t34 = (x189-(x190/(x191*x192)));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x193 = INT32_MAX;
	int8_t x194 = INT8_MIN;
	uint32_t x196 = 649200648U;
	uint32_t t35 = 30633U;

	t35 = (x193-(x194/(x195*x196)));

	if (t35 != 2147483646U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x197 = INT16_MIN;
	int32_t x198 = -20;
	uint16_t x200 = UINT16_MAX;
	int32_t t36 = -73;

	t36 = (x197-(x198/(x199*x200)));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = -1;
	int64_t x202 = -7186LL;
	int16_t x203 = INT16_MIN;
	int16_t x204 = -1;
	volatile int64_t t37 = 4016LL;

	t37 = (x201-(x202/(x203*x204)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x206 = INT8_MAX;
	uint32_t x207 = 105353U;
	int16_t x208 = INT16_MIN;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x205-(x206/(x207*x208)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x209 = 891;
	uint16_t x210 = 30U;
	static volatile int64_t x211 = -30841068842417LL;
	int8_t x212 = INT8_MAX;
	int64_t t39 = 4270662414LL;

	t39 = (x209-(x210/(x211*x212)));

	if (t39 != 891LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x213 = INT64_MIN;
	static int64_t x214 = -1LL;
	volatile int64_t x215 = -1LL;
	uint64_t t40 = 8094394353003LLU;

	t40 = (x213-(x214/(x215*x216)));

	if (t40 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x217 = INT64_MIN;
	int8_t x218 = INT8_MIN;
	static volatile int8_t x219 = INT8_MIN;
	volatile int64_t t41 = -217532LL;

	t41 = (x217-(x218/(x219*x220)));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x227 = -32;
	int32_t x228 = -1999550;

	t42 = (x225-(x226/(x227*x228)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x233 = INT32_MIN;
	static uint32_t x234 = 2U;
	static uint64_t x235 = UINT64_MAX;
	uint64_t x236 = UINT64_MAX;

	t43 = (x233-(x234/(x235*x236)));

	if (t43 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x237 = -1LL;
	int64_t x239 = 7700551LL;
	int32_t x240 = INT32_MIN;

	t44 = (x237-(x238/(x239*x240)));

	if (t44 != -558LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x261 = INT32_MIN;
	volatile uint64_t x262 = UINT64_MAX;
	static int8_t x263 = INT8_MAX;
	static uint64_t t45 = 354LLU;

	t45 = (x261-(x262/(x263*x264)));

	if (t45 != 18417694080894808832LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x269 = INT8_MIN;
	static uint64_t x272 = UINT64_MAX;
	static uint64_t t46 = 63LLU;

	t46 = (x269-(x270/(x271*x272)));

	if (t46 != 18446691674736486447LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x273 = -1;
	static int32_t x274 = -1;
	int8_t x276 = INT8_MIN;

	t47 = (x273-(x274/(x275*x276)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x277 = -1LL;
	volatile uint8_t x278 = UINT8_MAX;
	static int16_t x280 = INT16_MIN;
	int64_t t48 = -697LL;

	t48 = (x277-(x278/(x279*x280)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x282 = INT16_MAX;
	volatile uint32_t x283 = 48590003U;
	int16_t x284 = INT16_MIN;
	static volatile uint32_t t49 = 388200743U;

	t49 = (x281-(x282/(x283*x284)));

	if (t49 != 4294934528U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x285 = INT64_MIN;
	uint8_t x286 = 76U;
	uint32_t x287 = 3U;
	uint64_t x288 = 4194252LLU;
	uint64_t t50 = 434770LLU;

	t50 = (x285-(x286/(x287*x288)));

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x289 = 3473U;
	volatile int16_t x290 = -1;
	static int32_t x292 = INT32_MAX;

	t51 = (x289-(x290/(x291*x292)));

	if (t51 != 3473LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x294 = INT32_MAX;
	int16_t x295 = INT16_MAX;
	volatile int64_t t52 = -184LL;

	t52 = (x293-(x294/(x295*x296)));

	if (t52 != -21847LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x297 = INT8_MAX;
	uint64_t x298 = 220483LLU;
	static int8_t x299 = INT8_MAX;
	int32_t x300 = -2376;
	static volatile uint64_t t53 = 498603610082LLU;

	t53 = (x297-(x298/(x299*x300)));

	if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x309 = -1LL;
	uint16_t x312 = UINT16_MAX;
	int64_t t54 = 837637278LL;

	t54 = (x309-(x310/(x311*x312)));

	if (t54 != 54LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x313 = -1;
	int8_t x314 = INT8_MAX;
	static volatile uint16_t x315 = UINT16_MAX;
	uint64_t x316 = 522591443151004240LLU;
	uint64_t t55 = UINT64_MAX;

	t55 = (x313-(x314/(x315*x316)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x318 = -226;
	volatile uint8_t x320 = 14U;

	t56 = (x317-(x318/(x319*x320)));

	if (t56 != 65535LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x321 = INT8_MIN;
	static int32_t x322 = INT32_MIN;
	static uint64_t x323 = 2806255458LLU;
	uint64_t t57 = 21292451504333LLU;

	t57 = (x321-(x322/(x323*x324)));

	if (t57 != 18446744073683773303LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x325 = 356U;
	int16_t x327 = INT16_MAX;
	volatile uint32_t t58 = 39694U;

	t58 = (x325-(x326/(x327*x328)));

	if (t58 != 356U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x337 = 20U;
	int16_t x338 = INT16_MIN;
	int32_t x339 = -1;
	static int8_t x340 = 2;
	int32_t t59 = 456;

	t59 = (x337-(x338/(x339*x340)));

	if (t59 != -16364) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x342 = INT64_MIN;
	static uint32_t x344 = UINT32_MAX;
	volatile int64_t t60 = -12LL;

	t60 = (x341-(x342/(x343*x344)));

	if (t60 != -9223372034707292133LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x349 = 3137;
	uint16_t x350 = 3U;
	uint64_t x351 = UINT64_MAX;
	int16_t x352 = -1;
	uint64_t t61 = 524LLU;

	t61 = (x349-(x350/(x351*x352)));

	if (t61 != 3134LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MIN;
	uint16_t x355 = UINT16_MAX;
	int16_t x356 = 7814;
	static volatile int32_t t62 = INT32_MIN;

	t62 = (x353-(x354/(x355*x356)));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x357 = INT8_MAX;
	int16_t x358 = INT16_MIN;
	uint16_t x359 = UINT16_MAX;
	uint16_t x360 = 711U;
	volatile int32_t t63 = 117718862;

	t63 = (x357-(x358/(x359*x360)));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x361 = 3393LLU;
	int64_t x362 = 138281432855917670LL;
	static uint8_t x363 = 1U;
	static uint64_t x364 = 108430508LLU;
	uint64_t t64 = 7476LLU;

	t64 = (x361-(x362/(x363*x364)));

	if (t64 != 18446744072434254954LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x365 = INT32_MIN;
	uint8_t x367 = UINT8_MAX;
	int16_t x368 = -1;
	volatile int64_t t65 = 12798840LL;

	t65 = (x365-(x366/(x367*x368)));

	if (t65 != -36170088566521984LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x369 = -16786327;
	int16_t x370 = INT16_MIN;
	static uint16_t x371 = UINT16_MAX;
	uint8_t x372 = 95U;
	static int32_t t66 = 16728659;

	t66 = (x369-(x370/(x371*x372)));

	if (t66 != -16786327) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x373 = 58U;
	uint64_t x376 = 25662242230LLU;

	t67 = (x373-(x374/(x375*x376)));

	if (t67 != 58LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x377 = INT8_MIN;
	uint64_t x378 = UINT64_MAX;
	static uint16_t x379 = 1U;
	volatile int64_t x380 = INT64_MAX;
	uint64_t t68 = 6669555062114691LLU;

	t68 = (x377-(x378/(x379*x380)));

	if (t68 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x385 = INT16_MAX;
	uint64_t x386 = 4LLU;
	uint8_t x387 = 7U;
	static uint64_t t69 = 11297LLU;

	t69 = (x385-(x386/(x387*x388)));

	if (t69 != 32767LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x390 = -480;
	volatile int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MIN;
	int32_t t70 = 395234;

	t70 = (x389-(x390/(x391*x392)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x394 = INT64_MIN;
	uint8_t x395 = 113U;
	int8_t x396 = -1;

	t71 = (x393-(x394/(x395*x396)));

	if (t71 != -81622761388095362LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x397 = INT8_MAX;
	int16_t x398 = INT16_MIN;
	int32_t x399 = -1;
	int16_t x400 = INT16_MIN;

	t72 = (x397-(x398/(x399*x400)));

	if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x401 = -1;
	int16_t x402 = 541;
	int8_t x403 = 1;
	static volatile int64_t x404 = 32808797388115LL;
	volatile int64_t t73 = -835811852293519LL;

	t73 = (x401-(x402/(x403*x404)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x405 = 5619450LLU;
	int64_t x406 = -1LL;
	int8_t x407 = INT8_MAX;
	int8_t x408 = INT8_MIN;
	uint64_t t74 = 55402LLU;

	t74 = (x405-(x406/(x407*x408)));

	if (t74 != 5619450LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MAX;
	uint8_t x412 = 9U;
	static volatile int32_t t75 = -1;

	t75 = (x409-(x410/(x411*x412)));

	if (t75 != -29128) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x414 = -2;
	int32_t x415 = INT32_MIN;
	int64_t x416 = -6116848LL;
	volatile int64_t t76 = -2321093961752LL;

	t76 = (x413-(x414/(x415*x416)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x417 = 59633;
	volatile uint32_t x418 = UINT32_MAX;
	static volatile int64_t t77 = -3724581043LL;

	t77 = (x417-(x418/(x419*x420)));

	if (t77 != 59629LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x421 = -16064;
	uint64_t x422 = 6720663785LLU;
	uint8_t x424 = 5U;
	volatile uint64_t t78 = 10068919537LLU;

	t78 = (x421-(x422/(x423*x424)));

	if (t78 != 18446744073709535552LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x433 = -1;
	int64_t x434 = -1LL;
	int8_t x435 = INT8_MIN;
	int8_t x436 = INT8_MIN;
	volatile int64_t t79 = -37440625465LL;

	t79 = (x433-(x434/(x435*x436)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x437 = 43;
	uint16_t x438 = UINT16_MAX;
	volatile int64_t t80 = -1488265LL;

	t80 = (x437-(x438/(x439*x440)));

	if (t80 != 43LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x441 = UINT64_MAX;
	int64_t x442 = 1045897031563786LL;
	int16_t x443 = -220;

	t81 = (x441-(x442/(x443*x444)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x445 = 766923U;
	uint32_t x446 = UINT32_MAX;
	int64_t x447 = 42430LL;
	volatile int8_t x448 = INT8_MIN;
	static int64_t t82 = 4585213467858828LL;

	t82 = (x445-(x446/(x447*x448)));

	if (t82 != 767713LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x453 = -1LL;
	static uint8_t x454 = 1U;
	int8_t x455 = 20;
	uint8_t x456 = UINT8_MAX;

	t83 = (x453-(x454/(x455*x456)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x457 = 1;
	uint32_t x458 = 125774U;
	volatile int8_t x459 = -1;
	int16_t x460 = -6179;
	volatile uint32_t t84 = 122606539U;

	t84 = (x457-(x458/(x459*x460)));

	if (t84 != 4294967277U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x462 = -22;
	uint64_t x463 = 2149342LLU;
	int8_t x464 = INT8_MIN;
	uint64_t t85 = 2669LLU;

	t85 = (x461-(x462/(x463*x464)));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x465 = 189U;
	uint16_t x466 = 1U;
	volatile uint64_t x467 = 181LLU;
	static uint8_t x468 = 1U;
	uint64_t t86 = 7268520LLU;

	t86 = (x465-(x466/(x467*x468)));

	if (t86 != 189LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x469 = UINT16_MAX;
	int64_t x470 = 134909LL;
	uint64_t x471 = UINT64_MAX;
	uint64_t t87 = 1362743LLU;

	t87 = (x469-(x470/(x471*x472)));

	if (t87 != 65535LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x477 = INT8_MIN;
	int32_t x478 = INT32_MIN;
	int8_t x480 = INT8_MAX;
	static volatile int64_t t88 = 1551916373979515LL;

	t88 = (x477-(x478/(x479*x480)));

	if (t88 != -16909448LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x481 = UINT8_MAX;
	volatile int8_t x482 = INT8_MAX;
	int16_t x484 = INT16_MIN;
	int32_t t89 = -7;

	t89 = (x481-(x482/(x483*x484)));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x485 = 1472U;
	uint8_t x486 = UINT8_MAX;
	int16_t x487 = INT16_MIN;
	uint32_t x488 = 3U;
	uint32_t t90 = 517687U;

	t90 = (x485-(x486/(x487*x488)));

	if (t90 != 1472U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x497 = 475893LLU;
	volatile uint16_t x498 = UINT16_MAX;
	int16_t x499 = INT16_MAX;
	volatile int64_t x500 = -47964713229471LL;

	t91 = (x497-(x498/(x499*x500)));

	if (t91 != 475893LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x505 = INT8_MIN;
	int64_t x506 = INT64_MIN;
	uint64_t x507 = 1308762084522200472LLU;
	uint32_t x508 = 46449727U;
	uint64_t t92 = 3LLU;

	t92 = (x505-(x506/(x507*x508)));

	if (t92 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x509 = -1;
	uint16_t x510 = 116U;
	uint8_t x511 = UINT8_MAX;
	uint64_t x512 = 27651271136884280LLU;
	uint64_t t93 = UINT64_MAX;

	t93 = (x509-(x510/(x511*x512)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x513 = 8392284LLU;
	volatile int8_t x514 = INT8_MIN;
	int16_t x515 = 1931;

	t94 = (x513-(x514/(x515*x516)));

	if (t94 != 8392284LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x517 = -1LL;
	int64_t x518 = -1LL;
	volatile int32_t x519 = -1;
	volatile int8_t x520 = -1;
	static volatile int64_t t95 = -673LL;

	t95 = (x517-(x518/(x519*x520)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x525 = -61LL;
	static int16_t x526 = -1;
	static int64_t x527 = 25497149833823LL;
	int16_t x528 = -19;
	int64_t t96 = -1341543183294LL;

	t96 = (x525-(x526/(x527*x528)));

	if (t96 != -61LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x530 = -1;
	int16_t x531 = 50;
	int16_t x532 = -343;
	volatile int32_t t97 = 1;

	t97 = (x529-(x530/(x531*x532)));

	if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x535 = UINT32_MAX;
	int8_t x536 = INT8_MAX;
	static int64_t t98 = -280415742378LL;

	t98 = (x533-(x534/(x535*x536)));

	if (t98 != 2147483966LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x537 = INT64_MIN;
	volatile int32_t x538 = INT32_MAX;
	int64_t x539 = 55559LL;
	int16_t x540 = -1;
	int64_t t99 = -666087885392253LL;

	t99 = (x537-(x538/(x539*x540)));

	if (t99 != -9223372036854737156LL) { NG(); } else { ; }
	
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

