#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MAX;
static volatile int32_t t0 = -204;
int32_t x17 = -1971816;
int32_t x31 = 1;
int16_t x32 = INT16_MIN;
volatile uint16_t x34 = UINT16_MAX;
int16_t x36 = -1;
static volatile uint32_t x38 = UINT32_MAX;
int32_t t9 = 7;
int16_t x57 = -1;
int32_t x61 = INT32_MIN;
int16_t x73 = INT16_MIN;
int16_t x75 = INT16_MAX;
int32_t t15 = -44979378;
uint16_t x78 = UINT16_MAX;
static int64_t x79 = -1LL;
volatile int32_t t16 = 48;
uint16_t x83 = UINT16_MAX;
volatile int64_t x90 = -1LL;
int64_t x92 = INT64_MIN;
int64_t x110 = INT64_MIN;
static int32_t t22 = -11989651;
volatile int32_t t23 = -2;
int32_t x125 = INT32_MAX;
int8_t x130 = 3;
uint16_t x134 = 3U;
uint64_t x137 = UINT64_MAX;
volatile uint64_t x141 = UINT64_MAX;
int8_t x143 = INT8_MIN;
int32_t t29 = 3734;
volatile int8_t x148 = INT8_MAX;
static uint16_t x150 = 826U;
int16_t x151 = -1;
int32_t x152 = 8;
int8_t x153 = 0;
volatile int64_t x157 = INT64_MIN;
static volatile int64_t x159 = INT64_MAX;
int32_t t33 = 16981673;
int32_t x161 = -1;
static int16_t x162 = -1;
uint32_t x163 = UINT32_MAX;
static int32_t t35 = -621;
static uint16_t x177 = 2U;
static int8_t x180 = INT8_MIN;
volatile int32_t t36 = 1548;
uint64_t x183 = 540690316717099579LLU;
int32_t t37 = 137936;
int32_t x185 = -1;
int16_t x202 = INT16_MAX;
static int32_t t42 = 0;
int16_t x211 = -12112;
int32_t x225 = INT32_MAX;
int64_t x227 = -1LL;
uint8_t x228 = 70U;
volatile int32_t t45 = 4518;
volatile int32_t t46 = -1;
int64_t x239 = INT64_MIN;
uint32_t x244 = 5765U;
volatile int32_t t49 = -12479;
static uint64_t x245 = 89042LLU;
int16_t x246 = -22;
static int64_t x247 = INT64_MIN;
uint32_t x252 = UINT32_MAX;
int16_t x256 = -5;
uint32_t x260 = 56711U;
static uint16_t x261 = UINT16_MAX;
int32_t x266 = INT32_MIN;
int8_t x268 = INT8_MIN;
int64_t x274 = 58325619LL;
uint16_t x282 = UINT16_MAX;
static volatile uint16_t x286 = UINT16_MAX;
int16_t x288 = 27;
uint64_t x291 = 40010307LLU;
uint32_t x295 = UINT32_MAX;
volatile uint64_t x296 = 2004517657441748LLU;
static int16_t x309 = -1;
uint32_t x311 = 95056U;
int16_t x328 = -5;
int32_t t64 = -3432216;
int16_t x329 = -1;
int8_t x333 = -1;
int8_t x334 = INT8_MIN;
int32_t t67 = -24;
uint16_t x344 = 22294U;
int32_t t68 = 6049516;
volatile uint16_t x345 = UINT16_MAX;
int16_t x347 = -7;
uint32_t x348 = 243U;
int32_t x359 = 182;
static int64_t x360 = INT64_MIN;
volatile int32_t t73 = -13192889;
static volatile int32_t t74 = -45833651;
uint16_t x374 = 724U;
uint8_t x375 = 62U;
volatile int32_t t75 = 389264;
uint8_t x386 = 25U;
int8_t x391 = INT8_MIN;
int16_t x392 = 11805;
int8_t x398 = -1;
int16_t x403 = -1;
int32_t x404 = INT32_MAX;
int32_t t80 = 22448;
volatile int16_t x408 = INT16_MIN;
int16_t x415 = INT16_MIN;
static int32_t x418 = 321282;
int64_t x445 = -1LL;
int32_t x446 = INT32_MIN;
int32_t t89 = 0;
uint16_t x456 = 515U;
volatile int32_t t90 = 178588;
static int64_t x458 = -1LL;
volatile int8_t x462 = INT8_MIN;
volatile int32_t t92 = -1005;
int8_t x490 = INT8_MIN;
volatile int32_t t97 = -645932;
int8_t x498 = INT8_MIN;
static int32_t x504 = 93055294;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	uint8_t x3 = UINT8_MAX;
	volatile int16_t x4 = -31;

	t0 = (x1<=(x2%(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 454003U;
	uint8_t x6 = 27U;
	static uint8_t x7 = 6U;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -3;

	t1 = (x5<=(x6%(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int8_t x10 = INT8_MAX;
	int64_t x11 = INT64_MAX;
	int32_t x12 = 5177643;
	int32_t t2 = -798676;

	t2 = (x9<=(x10%(x11%x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 124U;
	volatile int32_t x14 = 1761973;
	int32_t x15 = INT32_MIN;
	volatile int64_t x16 = INT64_MAX;
	int32_t t3 = -1;

	t3 = (x13<=(x14%(x15%x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x18 = INT16_MIN;
	uint16_t x19 = 3U;
	int32_t x20 = 335;
	volatile int32_t t4 = 1620035;

	t4 = (x17<=(x18%(x19%x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 4U;
	uint16_t x22 = 61U;
	int64_t x23 = -13728LL;
	uint8_t x24 = UINT8_MAX;
	static volatile int32_t t5 = -3424456;

	t5 = (x21<=(x22%(x23%x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	volatile uint8_t x30 = UINT8_MAX;
	int32_t t6 = -658003851;

	t6 = (x29<=(x30%(x31%x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = -1;
	volatile uint32_t x35 = 24U;
	int32_t t7 = -48;

	t7 = (x33<=(x34%(x35%x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = 25U;
	int8_t x39 = -1;
	static int8_t x40 = -41;
	int32_t t8 = 7;

	t8 = (x37<=(x38%(x39%x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -3;
	static int16_t x42 = -1;
	int64_t x43 = -1LL;
	uint32_t x44 = 45U;

	t9 = (x41<=(x42%(x43%x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = 21U;
	static int8_t x50 = INT8_MAX;
	static int32_t x51 = -79789957;
	int8_t x52 = INT8_MAX;
	volatile int32_t t10 = 104946930;

	t10 = (x49<=(x50%(x51%x52)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x58 = 170899466LLU;
	int32_t x59 = INT32_MAX;
	uint32_t x60 = 221U;
	static volatile int32_t t11 = -261989;

	t11 = (x57<=(x58%(x59%x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = -1LL;
	static int64_t x63 = INT64_MAX;
	int32_t x64 = INT32_MIN;
	volatile int32_t t12 = 32;

	t12 = (x61<=(x62%(x63%x64)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = -1LL;
	int8_t x66 = INT8_MIN;
	uint16_t x67 = 14U;
	volatile int8_t x68 = -5;
	int32_t t13 = -224933498;

	t13 = (x65<=(x66%(x67%x68)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = 3931614;
	volatile uint64_t x70 = 52893267LLU;
	static int16_t x71 = -278;
	volatile uint32_t x72 = 3U;
	volatile int32_t t14 = -1070458011;

	t14 = (x69<=(x70%(x71%x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x74 = UINT16_MAX;
	uint32_t x76 = UINT32_MAX;

	t15 = (x73<=(x74%(x75%x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = 3;
	volatile uint32_t x80 = 131194129U;

	t16 = (x77<=(x78%(x79%x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x81 = 3U;
	static int8_t x82 = -1;
	int32_t x84 = -3010502;
	int32_t t17 = 36;

	t17 = (x81<=(x82%(x83%x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -426165060;
	volatile int16_t x91 = INT16_MAX;
	volatile int32_t t18 = -3;

	t18 = (x89<=(x90%(x91%x92)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x97 = -1;
	static int32_t x98 = -1;
	uint32_t x99 = 226U;
	int16_t x100 = -3585;
	volatile int32_t t19 = 1636686;

	t19 = (x97<=(x98%(x99%x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x101 = -1;
	volatile int32_t x102 = -52;
	volatile int8_t x103 = INT8_MIN;
	int32_t x104 = -1973733;
	static volatile int32_t t20 = 46;

	t20 = (x101<=(x102%(x103%x104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x105 = 1U;
	int64_t x106 = INT64_MAX;
	static uint64_t x107 = UINT64_MAX;
	static int32_t x108 = INT32_MAX;
	int32_t t21 = 995;

	t21 = (x105<=(x106%(x107%x108)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -1;
	int64_t x111 = -16063241627489LL;
	uint16_t x112 = UINT16_MAX;

	t22 = (x109<=(x110%(x111%x112)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = INT8_MIN;
	static int8_t x118 = -1;
	static volatile uint8_t x119 = 43U;
	int8_t x120 = INT8_MAX;

	t23 = (x117<=(x118%(x119%x120)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = 124413032LL;
	uint16_t x122 = 33U;
	int16_t x123 = -2;
	uint16_t x124 = 147U;
	int32_t t24 = 39;

	t24 = (x121<=(x122%(x123%x124)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x126 = -1;
	uint64_t x127 = 449990705930441LLU;
	int16_t x128 = -1;
	int32_t t25 = -16142;

	t25 = (x125<=(x126%(x127%x128)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x129 = 11;
	static int8_t x131 = -1;
	static volatile int32_t x132 = INT32_MIN;
	volatile int32_t t26 = -117551;

	t26 = (x129<=(x130%(x131%x132)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x133 = INT64_MAX;
	volatile int32_t x135 = -1;
	uint32_t x136 = 5652U;
	static volatile int32_t t27 = -1100371;

	t27 = (x133<=(x134%(x135%x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x138 = -5LL;
	uint64_t x139 = 26873797986LLU;
	int16_t x140 = 5;
	int32_t t28 = 46381092;

	t28 = (x137<=(x138%(x139%x140)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x142 = 1;
	volatile int32_t x144 = INT32_MIN;

	t29 = (x141<=(x142%(x143%x144)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = -1;
	int32_t x147 = INT32_MIN;
	volatile int32_t t30 = -197067;

	t30 = (x145<=(x146%(x147%x148)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x149 = INT64_MAX;
	int32_t t31 = -35;

	t31 = (x149<=(x150%(x151%x152)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x154 = 18;
	static int32_t x155 = INT32_MIN;
	volatile uint8_t x156 = 3U;
	int32_t t32 = 3491;

	t32 = (x153<=(x154%(x155%x156)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x158 = INT32_MIN;
	int32_t x160 = 478;

	t33 = (x157<=(x158%(x159%x160)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x164 = INT64_MAX;
	volatile int32_t t34 = 134856542;

	t34 = (x161<=(x162%(x163%x164)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x169 = 5U;
	int16_t x170 = INT16_MAX;
	volatile uint64_t x171 = UINT64_MAX;
	int32_t x172 = 43335137;

	t35 = (x169<=(x170%(x171%x172)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x178 = INT64_MIN;
	int32_t x179 = -3474;

	t36 = (x177<=(x178%(x179%x180)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x181 = 2145116096LLU;
	static int8_t x182 = INT8_MAX;
	int32_t x184 = INT32_MIN;

	t37 = (x181<=(x182%(x183%x184)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x186 = 205;
	volatile int16_t x187 = INT16_MIN;
	static uint64_t x188 = 444632757904909LLU;
	volatile int32_t t38 = -1032102;

	t38 = (x185<=(x186%(x187%x188)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x189 = -1;
	int16_t x190 = INT16_MIN;
	static uint8_t x191 = 52U;
	volatile uint32_t x192 = 202U;
	int32_t t39 = -7437542;

	t39 = (x189<=(x190%(x191%x192)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = INT16_MIN;
	volatile int16_t x194 = -4447;
	static int64_t x195 = -1LL;
	int32_t x196 = -266923129;
	int32_t t40 = -4268553;

	t40 = (x193<=(x194%(x195%x196)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = 483;
	int32_t x203 = INT32_MIN;
	static uint8_t x204 = UINT8_MAX;
	static int32_t t41 = 1433;

	t41 = (x201<=(x202%(x203%x204)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MAX;
	volatile uint32_t x206 = 15704943U;
	static uint16_t x207 = 24U;
	uint64_t x208 = 25198684047549LLU;

	t42 = (x205<=(x206%(x207%x208)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x209 = 829960407;
	int16_t x210 = INT16_MAX;
	int64_t x212 = INT64_MAX;
	volatile int32_t t43 = 436741;

	t43 = (x209<=(x210%(x211%x212)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x213 = 4U;
	int8_t x214 = INT8_MAX;
	int8_t x215 = 1;
	volatile int32_t x216 = INT32_MAX;
	volatile int32_t t44 = 29507459;

	t44 = (x213<=(x214%(x215%x216)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x226 = INT16_MIN;

	t45 = (x225<=(x226%(x227%x228)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x229 = INT32_MAX;
	static int16_t x230 = INT16_MIN;
	volatile int16_t x231 = INT16_MIN;
	uint64_t x232 = 6735LLU;

	t46 = (x229<=(x230%(x231%x232)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = -6393;
	volatile int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MIN;
	static int32_t t47 = -1;

	t47 = (x233<=(x234%(x235%x236)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x237 = UINT64_MAX;
	static int32_t x238 = INT32_MAX;
	static uint32_t x240 = UINT32_MAX;
	int32_t t48 = 10486411;

	t48 = (x237<=(x238%(x239%x240)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x241 = UINT64_MAX;
	uint64_t x242 = UINT64_MAX;
	uint16_t x243 = 223U;

	t49 = (x241<=(x242%(x243%x244)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x248 = 833U;
	int32_t t50 = -17947;

	t50 = (x245<=(x246%(x247%x248)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = -1;
	int16_t x250 = -567;
	int16_t x251 = INT16_MIN;
	int32_t t51 = 26;

	t51 = (x249<=(x250%(x251%x252)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x253 = UINT16_MAX;
	int32_t x254 = -28020;
	static uint32_t x255 = 1311155015U;
	static volatile int32_t t52 = 618;

	t52 = (x253<=(x254%(x255%x256)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x257 = UINT16_MAX;
	uint16_t x258 = 3U;
	uint64_t x259 = 3915155190372LLU;
	volatile int32_t t53 = 24576603;

	t53 = (x257<=(x258%(x259%x260)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x262 = UINT16_MAX;
	static int32_t x263 = -72217706;
	volatile uint8_t x264 = 97U;
	int32_t t54 = 3853;

	t54 = (x261<=(x262%(x263%x264)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x265 = -1;
	static uint32_t x267 = UINT32_MAX;
	volatile int32_t t55 = 125;

	t55 = (x265<=(x266%(x267%x268)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x273 = 0U;
	int8_t x275 = 2;
	static volatile int8_t x276 = INT8_MAX;
	int32_t t56 = -48853;

	t56 = (x273<=(x274%(x275%x276)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x281 = 510U;
	int8_t x283 = -16;
	int8_t x284 = INT8_MAX;
	volatile int32_t t57 = 20713;

	t57 = (x281<=(x282%(x283%x284)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x287 = UINT64_MAX;
	int32_t t58 = -41;

	t58 = (x285<=(x286%(x287%x288)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x289 = INT32_MIN;
	static volatile int64_t x290 = -5554562677LL;
	int64_t x292 = INT64_MAX;
	volatile int32_t t59 = 3;

	t59 = (x289<=(x290%(x291%x292)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x293 = INT8_MIN;
	int64_t x294 = -10234973149423074LL;
	static int32_t t60 = 532391202;

	t60 = (x293<=(x294%(x295%x296)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x310 = -3177095057LL;
	volatile uint32_t x312 = 98770U;
	volatile int32_t t61 = -197863064;

	t61 = (x309<=(x310%(x311%x312)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x317 = -1;
	volatile int32_t x318 = -1;
	int32_t x319 = -1;
	volatile int64_t x320 = INT64_MIN;
	int32_t t62 = -13;

	t62 = (x317<=(x318%(x319%x320)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x321 = 74;
	volatile uint8_t x322 = 122U;
	uint8_t x323 = 7U;
	int64_t x324 = INT64_MAX;
	static int32_t t63 = 29;

	t63 = (x321<=(x322%(x323%x324)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x325 = 84U;
	int64_t x326 = INT64_MAX;
	int8_t x327 = -47;

	t64 = (x325<=(x326%(x327%x328)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x330 = -10;
	int8_t x331 = INT8_MIN;
	static uint64_t x332 = UINT64_MAX;
	volatile int32_t t65 = -5098404;

	t65 = (x329<=(x330%(x331%x332)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x335 = -1LL;
	volatile int32_t x336 = -6814204;
	int32_t t66 = -75923906;

	t66 = (x333<=(x334%(x335%x336)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x337 = INT8_MAX;
	int64_t x338 = INT64_MIN;
	int32_t x339 = 157;
	int32_t x340 = 2320289;

	t67 = (x337<=(x338%(x339%x340)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x341 = 165U;
	int16_t x342 = INT16_MIN;
	uint32_t x343 = 173526510U;

	t68 = (x341<=(x342%(x343%x344)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x346 = INT8_MAX;
	volatile int32_t t69 = 133253109;

	t69 = (x345<=(x346%(x347%x348)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = 226279119LL;
	uint8_t x350 = 106U;
	int8_t x351 = INT8_MIN;
	int64_t x352 = INT64_MAX;
	static int32_t t70 = 379;

	t70 = (x349<=(x350%(x351%x352)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x353 = 174U;
	static int8_t x354 = INT8_MIN;
	static volatile uint64_t x355 = 38LLU;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t71 = 46044337;

	t71 = (x353<=(x354%(x355%x356)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x357 = -1;
	int16_t x358 = INT16_MIN;
	volatile int32_t t72 = -671968103;

	t72 = (x357<=(x358%(x359%x360)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = -1;
	int32_t x362 = 116279;
	uint8_t x363 = 5U;
	static int64_t x364 = 26344LL;

	t73 = (x361<=(x362%(x363%x364)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x369 = INT64_MAX;
	uint8_t x370 = 1U;
	int16_t x371 = INT16_MIN;
	uint32_t x372 = UINT32_MAX;

	t74 = (x369<=(x370%(x371%x372)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x373 = 7052LLU;
	int8_t x376 = INT8_MIN;

	t75 = (x373<=(x374%(x375%x376)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x381 = 429074688175956980LLU;
	int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MAX;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t76 = 0;

	t76 = (x381<=(x382%(x383%x384)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x385 = -19296367;
	volatile int64_t x387 = 923LL;
	uint16_t x388 = 25U;
	int32_t t77 = 1427;

	t77 = (x385<=(x386%(x387%x388)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x389 = 3U;
	int16_t x390 = INT16_MIN;
	int32_t t78 = 1;

	t78 = (x389<=(x390%(x391%x392)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x397 = 175LL;
	int64_t x399 = INT64_MIN;
	volatile int16_t x400 = INT16_MAX;
	int32_t t79 = 85009206;

	t79 = (x397<=(x398%(x399%x400)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x401 = 1U;
	volatile int64_t x402 = -1LL;

	t80 = (x401<=(x402%(x403%x404)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x405 = -7LL;
	int8_t x406 = -1;
	uint16_t x407 = 901U;
	volatile int32_t t81 = 1;

	t81 = (x405<=(x406%(x407%x408)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x413 = INT8_MAX;
	uint8_t x414 = 1U;
	volatile int32_t x416 = INT32_MAX;
	int32_t t82 = 2;

	t82 = (x413<=(x414%(x415%x416)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x417 = INT16_MIN;
	int32_t x419 = INT32_MAX;
	int8_t x420 = 41;
	volatile int32_t t83 = 233;

	t83 = (x417<=(x418%(x419%x420)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x425 = INT8_MIN;
	int8_t x426 = 0;
	int64_t x427 = 60613691042437LL;
	int16_t x428 = INT16_MIN;
	volatile int32_t t84 = 7;

	t84 = (x425<=(x426%(x427%x428)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x429 = 515292875;
	uint32_t x430 = UINT32_MAX;
	int32_t x431 = 5;
	static int8_t x432 = INT8_MIN;
	int32_t t85 = 5;

	t85 = (x429<=(x430%(x431%x432)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x437 = -1;
	volatile uint8_t x438 = UINT8_MAX;
	uint32_t x439 = UINT32_MAX;
	static int32_t x440 = INT32_MIN;
	int32_t t86 = -45;

	t86 = (x437<=(x438%(x439%x440)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x441 = 1;
	static volatile int16_t x442 = -1;
	static uint32_t x443 = 5U;
	int8_t x444 = INT8_MIN;
	static int32_t t87 = -11145;

	t87 = (x441<=(x442%(x443%x444)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x447 = -1;
	int8_t x448 = 2;
	int32_t t88 = 8228198;

	t88 = (x445<=(x446%(x447%x448)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x449 = INT32_MIN;
	static uint64_t x450 = UINT64_MAX;
	int16_t x451 = INT16_MIN;
	int32_t x452 = INT32_MIN;

	t89 = (x449<=(x450%(x451%x452)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x453 = UINT32_MAX;
	uint16_t x454 = UINT16_MAX;
	int32_t x455 = -1472074;

	t90 = (x453<=(x454%(x455%x456)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x457 = INT32_MIN;
	uint64_t x459 = 445LLU;
	int64_t x460 = -1LL;
	volatile int32_t t91 = 36422;

	t91 = (x457<=(x458%(x459%x460)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x461 = 12U;
	int16_t x463 = 178;
	volatile uint32_t x464 = 434617394U;

	t92 = (x461<=(x462%(x463%x464)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x469 = 1;
	int64_t x470 = -5469222LL;
	int32_t x471 = -156962423;
	uint32_t x472 = 67079215U;
	int32_t t93 = 0;

	t93 = (x469<=(x470%(x471%x472)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x477 = 6U;
	int32_t x478 = INT32_MAX;
	int8_t x479 = INT8_MAX;
	uint8_t x480 = UINT8_MAX;
	int32_t t94 = 2522350;

	t94 = (x477<=(x478%(x479%x480)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x481 = UINT64_MAX;
	int8_t x482 = -1;
	int16_t x483 = INT16_MAX;
	int64_t x484 = 15LL;
	int32_t t95 = 36800764;

	t95 = (x481<=(x482%(x483%x484)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x489 = 0LL;
	static int64_t x491 = INT64_MIN;
	volatile int16_t x492 = -45;
	volatile int32_t t96 = -3268;

	t96 = (x489<=(x490%(x491%x492)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x493 = 12618190U;
	volatile int16_t x494 = INT16_MAX;
	uint16_t x495 = UINT16_MAX;
	int32_t x496 = INT32_MIN;

	t97 = (x493<=(x494%(x495%x496)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x497 = -111;
	int64_t x499 = 1373464778LL;
	int8_t x500 = 8;
	static volatile int32_t t98 = 0;

	t98 = (x497<=(x498%(x499%x500)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x501 = -1LL;
	volatile int8_t x502 = INT8_MIN;
	int8_t x503 = 55;
	volatile int32_t t99 = 127963;

	t99 = (x501<=(x502%(x503%x504)));

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

