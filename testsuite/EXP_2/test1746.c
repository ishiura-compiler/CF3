#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
int64_t x10 = -8439294817331LL;
int16_t x11 = 9;
volatile int32_t x16 = INT32_MIN;
int32_t x21 = -193710247;
volatile int8_t x35 = -1;
volatile int8_t x41 = INT8_MAX;
int16_t x42 = INT16_MIN;
int8_t x49 = -1;
static int16_t x52 = -1;
static volatile int64_t t10 = 27944106620LL;
int8_t x58 = INT8_MIN;
int64_t x59 = 19832353LL;
volatile uint32_t t13 = 90288U;
int64_t x84 = INT64_MIN;
int32_t x91 = INT32_MIN;
volatile int64_t t17 = 1589LL;
int32_t x104 = -1849;
static volatile int32_t x109 = INT32_MAX;
uint64_t t21 = 80338LLU;
int64_t t22 = 685LL;
uint8_t x125 = UINT8_MAX;
uint8_t x129 = UINT8_MAX;
volatile int64_t x134 = -15LL;
volatile uint32_t x136 = UINT32_MAX;
volatile uint64_t t27 = 1051LLU;
int32_t x157 = INT32_MIN;
static uint64_t x158 = 513663161627LLU;
int64_t x167 = INT64_MIN;
int16_t x172 = INT16_MAX;
volatile uint8_t x174 = UINT8_MAX;
int16_t x178 = INT16_MIN;
static int32_t x180 = INT32_MIN;
int64_t t37 = 2615353425LL;
int64_t x198 = INT64_MIN;
int64_t x200 = 214582135244781769LL;
static int64_t t38 = 2055196LL;
int8_t x219 = INT8_MIN;
uint32_t t42 = 59727425U;
uint8_t x224 = 5U;
int64_t t44 = -15360079LL;
int16_t x239 = INT16_MIN;
volatile int64_t t47 = -22603141911034818LL;
volatile int16_t x245 = -1;
volatile int32_t t48 = 5;
volatile int64_t x260 = 117918150509461381LL;
volatile uint64_t t50 = 418706LLU;
uint32_t x264 = 869112U;
int16_t x266 = INT16_MAX;
uint64_t x267 = 249950104505LLU;
uint64_t t52 = 784040912285LLU;
volatile uint8_t x278 = UINT8_MAX;
uint64_t x279 = 138543317LLU;
uint8_t x283 = UINT8_MAX;
int64_t x290 = INT64_MIN;
static volatile int8_t x294 = INT8_MIN;
uint16_t x298 = 2350U;
int32_t x300 = INT32_MIN;
volatile int64_t x301 = -1LL;
volatile uint64_t t60 = 33627858LLU;
uint32_t x309 = 317U;
volatile int16_t x311 = -1;
static uint64_t x318 = 15550695LLU;
uint32_t x330 = UINT32_MAX;
static uint16_t x332 = 321U;
uint32_t t64 = 2U;
uint64_t x334 = 324640286LLU;
volatile uint16_t x337 = UINT16_MAX;
static volatile int16_t x338 = 14508;
static volatile int32_t x340 = 1419;
static int64_t x348 = 327635034086LL;
volatile int32_t x354 = INT32_MAX;
int8_t x373 = -1;
uint64_t x376 = UINT64_MAX;
int64_t x377 = INT64_MAX;
static uint64_t t73 = 385535LLU;
int16_t x381 = INT16_MAX;
int8_t x383 = -1;
volatile uint8_t x390 = UINT8_MAX;
uint64_t x405 = 1062545682212LLU;
uint64_t x407 = 104391LLU;
volatile int16_t x420 = 1;
int32_t x436 = INT32_MAX;
int8_t x439 = -1;
volatile uint64_t t83 = 4087LLU;
uint32_t t86 = 0U;
static int16_t x465 = 1444;
uint16_t x467 = UINT16_MAX;
int64_t x468 = INT64_MIN;
volatile uint16_t x478 = 1574U;
volatile uint32_t t91 = 1410U;
static int8_t x485 = INT8_MIN;
volatile uint64_t t94 = 28LLU;
int16_t x497 = -154;
uint8_t x503 = 10U;
int32_t x521 = INT32_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static uint32_t x3 = 332657U;
	int64_t x4 = -80366123976443836LL;
	static volatile uint64_t t0 = 146495238210357LLU;

	t0 = ((x1%(x2&x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int64_t x6 = 1137055961LL;
	static int8_t x7 = INT8_MAX;
	int32_t x8 = INT32_MIN;
	volatile int64_t t1 = 28762975217413251LL;

	t1 = ((x5%(x6&x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static volatile int16_t x12 = INT16_MAX;
	int64_t t2 = -10006025694763LL;

	t2 = ((x9%(x10&x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MAX;
	uint8_t x14 = UINT8_MAX;
	uint8_t x15 = 1U;
	static int32_t t3 = -14;

	t3 = ((x13%(x14&x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x22 = INT8_MAX;
	int32_t x23 = -1;
	static int64_t x24 = INT64_MIN;
	int64_t t4 = -1507931LL;

	t4 = ((x21%(x22&x23))/x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MAX;
	static int32_t x26 = INT32_MAX;
	volatile int64_t x27 = -1834LL;
	int8_t x28 = INT8_MIN;
	int64_t t5 = -13311752691940LL;

	t5 = ((x25%(x26&x27))/x28);

	if (t5 != -52555LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MAX;
	int16_t x36 = 74;
	int64_t t6 = 3336777211660LL;

	t6 = ((x33%(x34&x35))/x36);

	if (t6 != -29020049LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MIN;
	int32_t x38 = -1;
	static int8_t x39 = INT8_MAX;
	int32_t x40 = -1;
	static int64_t t7 = 225955643980865112LL;

	t7 = ((x37%(x38&x39))/x40);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x43 = 228911835U;
	static int16_t x44 = 5;
	static volatile uint32_t t8 = 7565U;

	t8 = ((x41%(x42&x43))/x44);

	if (t8 != 25U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x50 = INT16_MAX;
	int16_t x51 = INT16_MAX;
	static int32_t t9 = 12644839;

	t9 = ((x49%(x50&x51))/x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -20762428800LL;
	uint16_t x54 = 1U;
	int16_t x55 = INT16_MAX;
	int16_t x56 = INT16_MAX;

	t10 = ((x53%(x54&x55))/x56);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	int64_t t11 = -3527304146258465LL;

	t11 = ((x57%(x58&x59))/x60);

	if (t11 != 43696LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MAX;
	static volatile int64_t x62 = -101194702743664LL;
	static uint64_t x63 = UINT64_MAX;
	static volatile int64_t x64 = 4147614344951387381LL;
	uint64_t t12 = 6994782618502727LLU;

	t12 = ((x61%(x62&x63))/x64);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x65 = 3U;
	uint16_t x66 = 4784U;
	int8_t x67 = -3;
	uint8_t x68 = UINT8_MAX;

	t13 = ((x65%(x66&x67))/x68);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x69 = INT16_MIN;
	static int32_t x70 = 223765337;
	int8_t x71 = -1;
	int64_t x72 = -93683388094LL;
	int64_t t14 = -1LL;

	t14 = ((x69%(x70&x71))/x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = INT16_MAX;
	uint8_t x78 = UINT8_MAX;
	uint16_t x79 = 59U;
	static uint8_t x80 = 3U;
	int32_t t15 = -2803482;

	t15 = ((x77%(x78&x79))/x80);

	if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = -118;
	uint8_t x82 = 1U;
	int32_t x83 = -87549;
	int64_t t16 = -2099LL;

	t16 = ((x81%(x82&x83))/x84);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = -1;
	volatile int64_t x90 = INT64_MIN;
	int64_t x92 = -1LL;

	t17 = ((x89%(x90&x91))/x92);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x97 = 1;
	static int32_t x98 = INT32_MAX;
	int64_t x99 = INT64_MAX;
	int64_t x100 = INT64_MIN;
	int64_t t18 = 962215LL;

	t18 = ((x97%(x98&x99))/x100);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x101 = -1;
	int8_t x102 = -1;
	uint64_t x103 = 585247428460047LLU;
	uint64_t t19 = 127LLU;

	t19 = ((x101%(x102&x103))/x104);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x110 = 6942777769987109LL;
	int64_t x111 = 421807914108LL;
	int32_t x112 = -1;
	volatile int64_t t20 = 22LL;

	t20 = ((x109%(x110&x111))/x112);

	if (t20 != -2147483647LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x113 = 4351679947047282LLU;
	int64_t x114 = INT64_MIN;
	static volatile int64_t x115 = -1LL;
	volatile uint32_t x116 = 1U;

	t21 = ((x113%(x114&x115))/x116);

	if (t21 != 4351679947047282LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x117 = UINT32_MAX;
	static int64_t x118 = -1LL;
	static uint16_t x119 = 32U;
	uint8_t x120 = UINT8_MAX;

	t22 = ((x117%(x118&x119))/x120);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x126 = -45;
	int8_t x127 = 1;
	volatile int8_t x128 = INT8_MIN;
	int32_t t23 = 126;

	t23 = ((x125%(x126&x127))/x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x130 = -1;
	int64_t x131 = -852797406744591768LL;
	int64_t x132 = -1LL;
	volatile int64_t t24 = 144234476LL;

	t24 = ((x129%(x130&x131))/x132);

	if (t24 != -255LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x133 = 711U;
	uint8_t x135 = 37U;
	int64_t t25 = -3174331020564LL;

	t25 = ((x133%(x134&x135))/x136);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = 620579641;
	volatile uint64_t x143 = UINT64_MAX;
	static uint8_t x144 = UINT8_MAX;
	uint64_t t26 = 25942607156263367LLU;

	t26 = ((x141%(x142&x143))/x144);

	if (t26 != 782115LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = INT8_MAX;
	uint64_t x146 = 1798648LLU;
	uint32_t x147 = UINT32_MAX;
	uint64_t x148 = 497843419362LLU;

	t27 = ((x145%(x146&x147))/x148);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x149 = INT32_MAX;
	uint64_t x150 = UINT64_MAX;
	uint8_t x151 = UINT8_MAX;
	int8_t x152 = -1;
	uint64_t t28 = 6506LLU;

	t28 = ((x149%(x150&x151))/x152);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x153 = INT8_MIN;
	int64_t x154 = -1LL;
	static int8_t x155 = -1;
	int64_t x156 = 132172466LL;
	int64_t t29 = 547809417202341LL;

	t29 = ((x153%(x154&x155))/x156);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x159 = -1;
	int8_t x160 = INT8_MAX;
	uint64_t t30 = 192047LLU;

	t30 = ((x157%(x158&x159))/x160);

	if (t30 != 1454389405LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = INT64_MAX;
	uint64_t x162 = 708057650LLU;
	volatile uint32_t x163 = 5977568U;
	volatile uint16_t x164 = 5U;
	uint64_t t31 = 767288878155LLU;

	t31 = ((x161%(x162&x163))/x164);

	if (t31 != 46131LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x165 = 3041963757LLU;
	volatile int32_t x166 = -1254;
	int64_t x168 = INT64_MAX;
	volatile uint64_t t32 = 451417460676LLU;

	t32 = ((x165%(x166&x167))/x168);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = -2;
	int32_t x170 = -1;
	int32_t x171 = INT32_MIN;
	volatile int32_t t33 = 57753476;

	t33 = ((x169%(x170&x171))/x172);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x173 = UINT32_MAX;
	static volatile int8_t x175 = INT8_MIN;
	int64_t x176 = -1LL;
	int64_t t34 = -5517788392871LL;

	t34 = ((x173%(x174&x175))/x176);

	if (t34 != -127LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = INT8_MIN;
	int32_t x179 = INT32_MAX;
	volatile int32_t t35 = 89198;

	t35 = ((x177%(x178&x179))/x180);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x185 = 44U;
	volatile int16_t x186 = -2;
	int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	static int32_t t36 = 342857;

	t36 = ((x185%(x186&x187))/x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = INT16_MAX;
	static int32_t x190 = INT32_MIN;
	int64_t x191 = INT64_MIN;
	static uint32_t x192 = 2495U;

	t37 = ((x189%(x190&x191))/x192);

	if (t37 != 13LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x197 = INT8_MIN;
	int32_t x199 = -1;

	t38 = ((x197%(x198&x199))/x200);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x201 = INT64_MAX;
	int16_t x202 = -4;
	int8_t x203 = -34;
	volatile int16_t x204 = -1;
	volatile int64_t t39 = 15215396664176347LL;

	t39 = ((x201%(x202&x203))/x204);

	if (t39 != -7LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x205 = -7084;
	uint16_t x206 = UINT16_MAX;
	int64_t x207 = INT64_MAX;
	uint16_t x208 = UINT16_MAX;
	volatile int64_t t40 = -372781LL;

	t40 = ((x205%(x206&x207))/x208);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x209 = UINT64_MAX;
	int16_t x210 = INT16_MAX;
	static uint64_t x211 = 32184533749569LLU;
	volatile int32_t x212 = INT32_MIN;
	uint64_t t41 = 5124069349005483LLU;

	t41 = ((x209%(x210&x211))/x212);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x217 = 1129152057U;
	volatile int16_t x218 = -1;
	uint16_t x220 = 6U;

	t42 = ((x217%(x218&x219))/x220);

	if (t42 != 188192009U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = INT16_MAX;
	static int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	volatile int32_t t43 = -1;

	t43 = ((x221%(x222&x223))/x224);

	if (t43 != 25) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = -474LL;
	volatile int64_t x227 = -508LL;
	int64_t x228 = 9LL;

	t44 = ((x225%(x226&x227))/x228);

	if (t44 != -14LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = 5;
	uint64_t x231 = UINT64_MAX;
	static int8_t x232 = -1;
	uint64_t t45 = 4667954873315559LLU;

	t45 = ((x229%(x230&x231))/x232);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x233 = INT32_MAX;
	static volatile int64_t x234 = INT64_MIN;
	int64_t x235 = INT64_MIN;
	uint32_t x236 = UINT32_MAX;
	int64_t t46 = -1LL;

	t46 = ((x233%(x234&x235))/x236);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x237 = 1114U;
	volatile int64_t x238 = INT64_MIN;
	static int64_t x240 = INT64_MAX;

	t47 = ((x237%(x238&x239))/x240);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x246 = 644;
	int8_t x247 = INT8_MAX;
	static volatile int16_t x248 = INT16_MIN;

	t48 = ((x245%(x246&x247))/x248);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x249 = UINT32_MAX;
	int32_t x250 = -351685007;
	volatile uint8_t x251 = UINT8_MAX;
	uint16_t x252 = 1035U;
	volatile uint32_t t49 = 38192U;

	t49 = ((x249%(x250&x251))/x252);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x257 = UINT16_MAX;
	static volatile uint64_t x258 = 116LLU;
	uint32_t x259 = 101U;

	t50 = ((x257%(x258&x259))/x260);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x261 = 0U;
	volatile uint64_t x262 = UINT64_MAX;
	int16_t x263 = -2;
	uint64_t t51 = 215140508LLU;

	t51 = ((x261%(x262&x263))/x264);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x265 = UINT16_MAX;
	int32_t x268 = INT32_MIN;

	t52 = ((x265%(x266&x267))/x268);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x273 = INT64_MAX;
	volatile int8_t x274 = -3;
	volatile int16_t x275 = INT16_MIN;
	uint64_t x276 = 8LLU;
	uint64_t t53 = 609LLU;

	t53 = ((x273%(x274&x275))/x276);

	if (t53 != 4095LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x277 = INT8_MIN;
	int8_t x280 = INT8_MIN;
	uint64_t t54 = 1784120LLU;

	t54 = ((x277%(x278&x279))/x280);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x281 = INT64_MIN;
	volatile uint64_t x282 = 212155806888713149LLU;
	int32_t x284 = INT32_MIN;
	volatile uint64_t t55 = 16408487903LLU;

	t55 = ((x281%(x282&x283))/x284);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x289 = INT64_MIN;
	int32_t x291 = -50337330;
	int8_t x292 = 25;
	volatile int64_t t56 = -874945709708LL;

	t56 = ((x289%(x290&x291))/x292);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x293 = -1;
	uint32_t x295 = 106739U;
	static int16_t x296 = INT16_MIN;
	volatile uint32_t t57 = 19298273U;

	t57 = ((x293%(x294&x295))/x296);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x297 = -1;
	int16_t x299 = 713;
	int32_t t58 = 942743035;

	t58 = ((x297%(x298&x299))/x300);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x302 = -1;
	static uint8_t x303 = UINT8_MAX;
	int32_t x304 = INT32_MIN;
	int64_t t59 = -17007324747287LL;

	t59 = ((x301%(x302&x303))/x304);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x305 = INT16_MAX;
	uint16_t x306 = 1U;
	int16_t x307 = INT16_MAX;
	static uint64_t x308 = UINT64_MAX;

	t60 = ((x305%(x306&x307))/x308);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x310 = 10964525U;
	uint16_t x312 = UINT16_MAX;
	volatile uint32_t t61 = 3273U;

	t61 = ((x309%(x310&x311))/x312);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x317 = 13274192;
	volatile int32_t x319 = -3658;
	int16_t x320 = -1;
	uint64_t t62 = 15569165LLU;

	t62 = ((x317%(x318&x319))/x320);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MIN;
	static int32_t x328 = -1;
	static int64_t t63 = -211139033770001LL;

	t63 = ((x325%(x326&x327))/x328);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x329 = INT8_MIN;
	volatile uint16_t x331 = 1U;

	t64 = ((x329%(x330&x331))/x332);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x333 = INT32_MAX;
	uint8_t x335 = 42U;
	uint64_t x336 = 131685198897270183LLU;
	uint64_t t65 = 3316716253378LLU;

	t65 = ((x333%(x334&x335))/x336);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x339 = -9;
	int32_t t66 = 159;

	t66 = ((x337%(x338&x339))/x340);

	if (t66 != 5) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x341 = 6;
	static int32_t x342 = -1834;
	int32_t x343 = INT32_MAX;
	volatile int8_t x344 = INT8_MIN;
	volatile int32_t t67 = -633;

	t67 = ((x341%(x342&x343))/x344);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x345 = 4U;
	static volatile int64_t x346 = 1295LL;
	int64_t x347 = INT64_MAX;
	static int64_t t68 = 0LL;

	t68 = ((x345%(x346&x347))/x348);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x349 = UINT64_MAX;
	volatile int32_t x350 = -1;
	int16_t x351 = -103;
	static int8_t x352 = 1;
	volatile uint64_t t69 = 682LLU;

	t69 = ((x349%(x350&x351))/x352);

	if (t69 != 102LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x353 = -1;
	volatile int16_t x355 = -4068;
	uint32_t x356 = 5742U;
	static uint32_t t70 = 14U;

	t70 = ((x353%(x354&x355))/x356);

	if (t70 != 747991U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x361 = INT32_MAX;
	int8_t x362 = INT8_MAX;
	int64_t x363 = INT64_MAX;
	int16_t x364 = -1306;
	int64_t t71 = 452LL;

	t71 = ((x361%(x362&x363))/x364);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x374 = -18333;
	static int8_t x375 = 9;
	static volatile uint64_t t72 = 6636739LLU;

	t72 = ((x373%(x374&x375))/x376);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x378 = 2559457LLU;
	int64_t x379 = -1LL;
	uint8_t x380 = 1U;

	t73 = ((x377%(x378&x379))/x380);

	if (t73 != 1298548LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x382 = INT32_MIN;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t74 = -13;

	t74 = ((x381%(x382&x383))/x384);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x389 = INT16_MAX;
	static uint8_t x391 = 2U;
	uint32_t x392 = 4U;
	uint32_t t75 = 1047582U;

	t75 = ((x389%(x390&x391))/x392);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x393 = UINT8_MAX;
	uint32_t x394 = 92782U;
	volatile int8_t x395 = INT8_MIN;
	volatile uint16_t x396 = 3912U;
	volatile uint32_t t76 = 26128U;

	t76 = ((x393%(x394&x395))/x396);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x406 = UINT32_MAX;
	int8_t x408 = -1;
	static volatile uint64_t t77 = 836580249LLU;

	t77 = ((x405%(x406&x407))/x408);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x417 = -1;
	int64_t x418 = INT64_MAX;
	volatile int32_t x419 = INT32_MAX;
	int64_t t78 = -4299854LL;

	t78 = ((x417%(x418&x419))/x420);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x421 = 0;
	int8_t x422 = -1;
	int16_t x423 = -86;
	int64_t x424 = INT64_MIN;
	static int64_t t79 = 1LL;

	t79 = ((x421%(x422&x423))/x424);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x425 = UINT16_MAX;
	static int64_t x426 = INT64_MAX;
	uint64_t x427 = UINT64_MAX;
	int64_t x428 = INT64_MIN;
	static uint64_t t80 = 233994242542228660LLU;

	t80 = ((x425%(x426&x427))/x428);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x429 = INT64_MIN;
	int32_t x430 = -8883192;
	volatile int32_t x431 = -7592;
	volatile int8_t x432 = INT8_MAX;
	static volatile int64_t t81 = -52LL;

	t81 = ((x429%(x430&x431))/x432);

	if (t81 != -2466LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x433 = -1;
	volatile int64_t x434 = -1LL;
	static int64_t x435 = INT64_MAX;
	volatile int64_t t82 = -1750LL;

	t82 = ((x433%(x434&x435))/x436);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x437 = -1;
	static uint64_t x438 = 233658670894LLU;
	uint16_t x440 = 7505U;

	t83 = ((x437%(x438&x439))/x440);

	if (t83 != 29333589LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x445 = -1;
	static int16_t x446 = -1;
	volatile int8_t x447 = INT8_MIN;
	static volatile int8_t x448 = 1;
	int32_t t84 = 113;

	t84 = ((x445%(x446&x447))/x448);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x449 = INT16_MAX;
	int32_t x450 = INT32_MIN;
	int8_t x451 = INT8_MIN;
	int64_t x452 = -16LL;
	volatile int64_t t85 = -1867403LL;

	t85 = ((x449%(x450&x451))/x452);

	if (t85 != -2047LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x453 = 254123828U;
	static volatile int16_t x454 = -320;
	uint32_t x455 = UINT32_MAX;
	uint32_t x456 = 451138389U;

	t86 = ((x453%(x454&x455))/x456);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x457 = 0U;
	volatile int32_t x458 = INT32_MAX;
	uint32_t x459 = 8274478U;
	int64_t x460 = INT64_MIN;
	volatile int64_t t87 = 3LL;

	t87 = ((x457%(x458&x459))/x460);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x461 = -1;
	uint8_t x462 = 61U;
	int8_t x463 = INT8_MAX;
	int16_t x464 = INT16_MAX;
	int32_t t88 = -3;

	t88 = ((x461%(x462&x463))/x464);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x466 = -24;
	volatile int64_t t89 = -65235275442032279LL;

	t89 = ((x465%(x466&x467))/x468);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x473 = -856;
	uint16_t x474 = 2U;
	volatile int64_t x475 = -1LL;
	static uint16_t x476 = 3U;
	int64_t t90 = -2320622917LL;

	t90 = ((x473%(x474&x475))/x476);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x477 = 51;
	static int16_t x479 = INT16_MAX;
	static uint32_t x480 = 119612419U;

	t91 = ((x477%(x478&x479))/x480);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x481 = -3574;
	static int16_t x482 = INT16_MAX;
	uint16_t x483 = UINT16_MAX;
	volatile int32_t x484 = INT32_MIN;
	volatile int32_t t92 = 8651599;

	t92 = ((x481%(x482&x483))/x484);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x486 = 58U;
	int32_t x487 = -4227677;
	int32_t x488 = INT32_MIN;
	int32_t t93 = -5354510;

	t93 = ((x485%(x486&x487))/x488);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x493 = 17;
	int32_t x494 = 182387;
	uint64_t x495 = 448079006LLU;
	int8_t x496 = INT8_MIN;

	t94 = ((x493%(x494&x495))/x496);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x498 = 273U;
	volatile int8_t x499 = INT8_MAX;
	uint64_t x500 = 924136179927510LLU;
	volatile uint64_t t95 = 14477LLU;

	t95 = ((x497%(x498&x499))/x500);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x501 = 13690761;
	uint8_t x502 = 7U;
	static volatile int32_t x504 = INT32_MIN;
	volatile int32_t t96 = 36;

	t96 = ((x501%(x502&x503))/x504);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x505 = INT16_MIN;
	static uint32_t x506 = 1010U;
	uint16_t x507 = UINT16_MAX;
	int32_t x508 = INT32_MIN;
	volatile uint32_t t97 = 161393U;

	t97 = ((x505%(x506&x507))/x508);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x513 = 32;
	int64_t x514 = 130491023568LL;
	int8_t x515 = -1;
	uint64_t x516 = UINT64_MAX;
	volatile uint64_t t98 = 447015994925713936LLU;

	t98 = ((x513%(x514&x515))/x516);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x522 = 45447713832081LLU;
	uint64_t x523 = 9673033LLU;
	uint64_t x524 = UINT64_MAX;
	uint64_t t99 = 204660098000262952LLU;

	t99 = ((x521%(x522&x523))/x524);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

