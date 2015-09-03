#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
int64_t t0 = 330318973743785LL;
uint8_t x6 = 0U;
static int16_t x8 = -1;
int8_t x12 = INT8_MIN;
uint8_t x19 = UINT8_MAX;
uint64_t t4 = 6310155523414345LLU;
int16_t x21 = INT16_MIN;
static volatile int32_t t5 = 209;
volatile int16_t x27 = INT16_MIN;
int64_t x33 = 3295LL;
static int16_t x37 = -104;
int16_t x39 = INT16_MIN;
int64_t t9 = -19225224746468023LL;
volatile int16_t x50 = INT16_MIN;
volatile int32_t t12 = -788;
static uint32_t x57 = 26986445U;
volatile int32_t x67 = 57691728;
volatile int64_t t19 = 954970803940505465LL;
static int16_t x92 = INT16_MAX;
int32_t x94 = INT32_MAX;
uint32_t x96 = 3U;
int8_t x102 = INT8_MIN;
int64_t x112 = -1LL;
static uint8_t x120 = 14U;
volatile int32_t x127 = 80442366;
int64_t x128 = INT64_MAX;
volatile int32_t x129 = 2871505;
volatile int64_t x131 = INT64_MIN;
static int32_t x132 = INT32_MAX;
int32_t x133 = INT32_MIN;
uint16_t x135 = UINT16_MAX;
int16_t x139 = INT16_MAX;
int8_t x141 = -17;
int64_t x142 = INT64_MAX;
int16_t x144 = -1;
int32_t t33 = -2203;
int64_t x154 = -1LL;
static volatile uint16_t x157 = UINT16_MAX;
volatile uint64_t x165 = 93660LLU;
int64_t t38 = -17153978167LL;
volatile int8_t x173 = 54;
int64_t x176 = -1LL;
int64_t t39 = 58476LL;
volatile int32_t x177 = -1;
volatile int64_t t40 = -34764465LL;
uint8_t x192 = 27U;
static uint8_t x196 = 89U;
volatile int32_t t42 = 398126774;
int8_t x199 = INT8_MAX;
static int32_t t46 = -42;
uint32_t x215 = UINT32_MAX;
uint64_t x217 = 95458LLU;
int32_t x224 = -1;
volatile int8_t x230 = INT8_MAX;
static uint64_t x232 = 34250LLU;
int16_t x235 = 134;
static int32_t x236 = -1;
int64_t t52 = 138241798884786LL;
int8_t x241 = INT8_MAX;
static uint16_t x246 = 37U;
uint32_t x251 = 1409U;
volatile int32_t t56 = 3458;
int32_t x259 = INT32_MIN;
int8_t x260 = 6;
volatile int32_t t57 = -12483;
int64_t x262 = 0LL;
static uint16_t x264 = 81U;
int8_t x272 = -63;
uint16_t x275 = 29U;
static int8_t x278 = -1;
uint64_t t62 = 443498LLU;
uint32_t x282 = 1772U;
uint8_t x296 = 72U;
volatile int64_t t66 = 7289598059099591LL;
uint32_t x310 = 1798664U;
uint16_t x311 = 897U;
int32_t x312 = -3732407;
volatile int64_t x315 = -1LL;
static int64_t x317 = 6773294029669LL;
int32_t x324 = 85;
uint64_t x326 = 12946042221160LLU;
int8_t x328 = -1;
volatile int64_t x331 = INT64_MIN;
volatile uint64_t t74 = 2906790LLU;
int8_t x337 = -1;
int16_t x342 = -99;
int8_t x344 = -1;
static int8_t x345 = -1;
int64_t x353 = -1LL;
uint16_t x363 = 3U;
static volatile int16_t x367 = -1;
int16_t x379 = INT16_MIN;
int64_t x381 = -1356286630739LL;
volatile int16_t x382 = INT16_MAX;
int64_t x384 = INT64_MAX;
static int64_t t84 = 7715596489LL;
int32_t t87 = 26;
int16_t x403 = 5;
uint32_t x415 = UINT32_MAX;
int8_t x417 = 1;
int32_t x418 = 1;
uint64_t x420 = 6LLU;
static uint16_t x437 = 38U;
static int8_t x438 = 1;
int8_t x440 = -14;
uint32_t t99 = 1713686526U;


void f0(void) {
	uint64_t x1 = 158361806364412096LLU;
	uint64_t x2 = 3LLU;
	int64_t x4 = 9LL;

	t0 = ((x1<=(x2/x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int64_t x7 = INT64_MIN;
	volatile int32_t t1 = 765;

	t1 = ((x5<=(x6/x7))/x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int16_t x10 = -153;
	int32_t x11 = INT32_MAX;
	static int32_t t2 = 14;

	t2 = ((x9<=(x10/x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = 253U;
	static int8_t x14 = -1;
	static int8_t x15 = INT8_MIN;
	int8_t x16 = -1;
	int32_t t3 = -5025781;

	t3 = ((x13<=(x14/x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static uint64_t x18 = 3LLU;
	uint64_t x20 = 242993881559LLU;

	t4 = ((x17<=(x18/x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 1U;
	static int16_t x23 = -1;
	int16_t x24 = INT16_MAX;

	t5 = ((x21<=(x22/x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 3U;
	int16_t x26 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -8;

	t6 = ((x25<=(x26/x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	static int64_t x30 = INT64_MAX;
	int32_t x31 = -1;
	int64_t x32 = -1LL;
	volatile int64_t t7 = 2105583949887516LL;

	t7 = ((x29<=(x30/x31))/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	volatile uint64_t x35 = UINT64_MAX;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = -55527;

	t8 = ((x33<=(x34/x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = INT16_MAX;
	int64_t x40 = 29205134LL;

	t9 = ((x37<=(x38/x39))/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	static int16_t x42 = -79;
	uint32_t x43 = UINT32_MAX;
	volatile uint8_t x44 = 15U;
	int32_t t10 = 27946;

	t10 = ((x41<=(x42/x43))/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 265267551LL;
	uint32_t x51 = 27238U;
	uint64_t x52 = UINT64_MAX;
	static volatile uint64_t t11 = 471414006706900126LLU;

	t11 = ((x49<=(x50/x51))/x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	static uint8_t x54 = 1U;
	int64_t x55 = -1LL;
	int16_t x56 = 1;

	t12 = ((x53<=(x54/x55))/x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x58 = -1;
	int64_t x59 = INT64_MIN;
	static volatile uint16_t x60 = UINT16_MAX;
	int32_t t13 = 1001385097;

	t13 = ((x57<=(x58/x59))/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = -1164;
	static uint16_t x62 = 34U;
	static int16_t x63 = INT16_MAX;
	static int16_t x64 = INT16_MIN;
	int32_t t14 = -513563938;

	t14 = ((x61<=(x62/x63))/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	volatile uint64_t x66 = 28831LLU;
	int32_t x68 = -1;
	volatile int32_t t15 = -23932780;

	t15 = ((x65<=(x66/x67))/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	static int32_t x74 = INT32_MIN;
	volatile int64_t x75 = INT64_MIN;
	volatile int32_t x76 = INT32_MIN;
	int32_t t16 = 0;

	t16 = ((x73<=(x74/x75))/x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x77 = -445754977743784848LL;
	int16_t x78 = 0;
	int16_t x79 = -2;
	static uint16_t x80 = 13U;
	int32_t t17 = 6;

	t17 = ((x77<=(x78/x79))/x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MAX;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = INT16_MIN;
	uint16_t x84 = 30U;
	volatile int32_t t18 = -48895;

	t18 = ((x81<=(x82/x83))/x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x85 = UINT16_MAX;
	uint8_t x86 = 11U;
	int64_t x87 = -1LL;
	int64_t x88 = -1LL;

	t19 = ((x85<=(x86/x87))/x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = -1;
	static int8_t x90 = -1;
	uint64_t x91 = UINT64_MAX;
	static volatile int32_t t20 = -451719;

	t20 = ((x89<=(x90/x91))/x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x93 = -1;
	volatile int32_t x95 = INT32_MAX;
	volatile uint32_t t21 = 0U;

	t21 = ((x93<=(x94/x95))/x96);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MAX;
	int8_t x98 = -1;
	int16_t x99 = 427;
	int64_t x100 = -1LL;
	volatile int64_t t22 = 5LL;

	t22 = ((x97<=(x98/x99))/x100);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = -1;
	int64_t x103 = -1814874651967LL;
	static int64_t x104 = -27841378088LL;
	int64_t t23 = 16148843937620LL;

	t23 = ((x101<=(x102/x103))/x104);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x109 = UINT32_MAX;
	static int32_t x110 = -3;
	volatile int32_t x111 = INT32_MIN;
	volatile int64_t t24 = 16543484LL;

	t24 = ((x109<=(x110/x111))/x112);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = -25;
	int16_t x118 = -1;
	static uint8_t x119 = UINT8_MAX;
	int32_t t25 = 4;

	t25 = ((x117<=(x118/x119))/x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -1LL;
	volatile int8_t x122 = INT8_MAX;
	int64_t x123 = INT64_MIN;
	int64_t x124 = 877629365LL;
	static volatile int64_t t26 = -5LL;

	t26 = ((x121<=(x122/x123))/x124);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -25;
	static volatile int32_t x126 = 363;
	int64_t t27 = -1LL;

	t27 = ((x125<=(x126/x127))/x128);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x130 = INT32_MIN;
	int32_t t28 = 14129;

	t28 = ((x129<=(x130/x131))/x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x134 = -1;
	int8_t x136 = INT8_MAX;
	static volatile int32_t t29 = 56;

	t29 = ((x133<=(x134/x135))/x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x137 = INT64_MAX;
	volatile int8_t x138 = -4;
	static int32_t x140 = INT32_MIN;
	static int32_t t30 = 11982418;

	t30 = ((x137<=(x138/x139))/x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x143 = -2029;
	int32_t t31 = -659943;

	t31 = ((x141<=(x142/x143))/x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x145 = 0U;
	int8_t x146 = -54;
	int32_t x147 = INT32_MIN;
	volatile int64_t x148 = 1722238338LL;
	int64_t t32 = 6046199933140LL;

	t32 = ((x145<=(x146/x147))/x148);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = 3523;
	int16_t x150 = -1;
	uint16_t x151 = 23U;
	int8_t x152 = INT8_MAX;

	t33 = ((x149<=(x150/x151))/x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -1;
	int32_t x155 = 1400091;
	uint64_t x156 = UINT64_MAX;
	uint64_t t34 = 52637123LLU;

	t34 = ((x153<=(x154/x155))/x156);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x158 = 5785U;
	volatile uint8_t x159 = 6U;
	volatile uint16_t x160 = UINT16_MAX;
	int32_t t35 = 131333738;

	t35 = ((x157<=(x158/x159))/x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 59U;
	volatile int64_t x162 = -31LL;
	uint8_t x163 = UINT8_MAX;
	uint64_t x164 = 1014891755747LLU;
	volatile uint64_t t36 = 19445066655719379LLU;

	t36 = ((x161<=(x162/x163))/x164);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x166 = -1;
	volatile uint8_t x167 = 7U;
	int64_t x168 = 19032183559331LL;
	int64_t t37 = -107004590LL;

	t37 = ((x165<=(x166/x167))/x168);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MAX;
	int16_t x170 = INT16_MIN;
	volatile int64_t x171 = 74763LL;
	volatile int64_t x172 = -1LL;

	t38 = ((x169<=(x170/x171))/x172);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MAX;

	t39 = ((x173<=(x174/x175))/x176);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x178 = UINT64_MAX;
	int8_t x179 = INT8_MIN;
	int64_t x180 = 483669190826LL;

	t40 = ((x177<=(x178/x179))/x180);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x189 = INT32_MAX;
	volatile uint16_t x190 = 1125U;
	uint64_t x191 = 5955554LLU;
	volatile int32_t t41 = 1;

	t41 = ((x189<=(x190/x191))/x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 1727LLU;
	int32_t x194 = INT32_MIN;
	uint64_t x195 = 151LLU;

	t42 = ((x193<=(x194/x195))/x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = 124U;
	static int64_t x198 = -12652252LL;
	int32_t x200 = INT32_MAX;
	int32_t t43 = -433;

	t43 = ((x197<=(x198/x199))/x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x201 = 1U;
	uint8_t x202 = 0U;
	int32_t x203 = -1536313;
	uint64_t x204 = 1691302568209LLU;
	volatile uint64_t t44 = 4183845372337LLU;

	t44 = ((x201<=(x202/x203))/x204);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = INT8_MAX;
	int16_t x206 = INT16_MAX;
	int64_t x207 = INT64_MAX;
	int32_t x208 = INT32_MIN;
	volatile int32_t t45 = 356411835;

	t45 = ((x205<=(x206/x207))/x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MAX;
	static uint64_t x210 = 5604674394LLU;
	static int32_t x211 = INT32_MIN;
	uint16_t x212 = 117U;

	t46 = ((x209<=(x210/x211))/x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x213 = INT32_MIN;
	int64_t x214 = 23607147LL;
	static uint64_t x216 = 171562LLU;
	volatile uint64_t t47 = 3432301559985495LLU;

	t47 = ((x213<=(x214/x215))/x216);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x218 = -1;
	static int16_t x219 = INT16_MIN;
	volatile int64_t x220 = INT64_MIN;
	int64_t t48 = 39074LL;

	t48 = ((x217<=(x218/x219))/x220);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = INT64_MAX;
	int64_t x222 = -1LL;
	volatile uint16_t x223 = 319U;
	int32_t t49 = 1145;

	t49 = ((x221<=(x222/x223))/x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = INT8_MIN;
	uint32_t x231 = 99801U;
	volatile uint64_t t50 = 2LLU;

	t50 = ((x229<=(x230/x231))/x232);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = -1;
	uint64_t x234 = 61LLU;
	int32_t t51 = 58607502;

	t51 = ((x233<=(x234/x235))/x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x237 = 2416U;
	int64_t x238 = -1LL;
	uint64_t x239 = UINT64_MAX;
	int64_t x240 = -3401692LL;

	t52 = ((x237<=(x238/x239))/x240);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x242 = 413094;
	uint64_t x243 = UINT64_MAX;
	static int8_t x244 = INT8_MIN;
	static int32_t t53 = 56728982;

	t53 = ((x241<=(x242/x243))/x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x245 = INT32_MIN;
	uint64_t x247 = 14885946286LLU;
	static uint16_t x248 = 15U;
	static volatile int32_t t54 = 229186;

	t54 = ((x245<=(x246/x247))/x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MAX;
	int64_t x250 = INT64_MIN;
	int8_t x252 = INT8_MIN;
	volatile int32_t t55 = -3007;

	t55 = ((x249<=(x250/x251))/x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x253 = 3164378U;
	uint64_t x254 = 1939513455324637LLU;
	uint16_t x255 = 108U;
	uint16_t x256 = UINT16_MAX;

	t56 = ((x253<=(x254/x255))/x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x257 = 8;
	int8_t x258 = INT8_MAX;

	t57 = ((x257<=(x258/x259))/x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = -1242774551767LL;
	static int64_t x263 = 7010910850269LL;
	int32_t t58 = -13258;

	t58 = ((x261<=(x262/x263))/x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = -1;
	int16_t x266 = INT16_MIN;
	int16_t x267 = -7232;
	int8_t x268 = INT8_MAX;
	volatile int32_t t59 = 11465058;

	t59 = ((x265<=(x266/x267))/x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x269 = 7943507U;
	uint16_t x270 = 34U;
	volatile uint64_t x271 = 2934545859LLU;
	volatile int32_t t60 = -1828603;

	t60 = ((x269<=(x270/x271))/x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x273 = 95U;
	static volatile int16_t x274 = INT16_MIN;
	volatile uint16_t x276 = 20426U;
	int32_t t61 = 201;

	t61 = ((x273<=(x274/x275))/x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = -1;
	static uint64_t x279 = 343410LLU;
	uint64_t x280 = 131387772026087LLU;

	t62 = ((x277<=(x278/x279))/x280);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x281 = 12LLU;
	int64_t x283 = -1LL;
	static int16_t x284 = INT16_MAX;
	volatile int32_t t63 = -1315;

	t63 = ((x281<=(x282/x283))/x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x289 = 38U;
	volatile int32_t x290 = INT32_MIN;
	int8_t x291 = -4;
	int16_t x292 = 1440;
	int32_t t64 = 169748816;

	t64 = ((x289<=(x290/x291))/x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x293 = UINT32_MAX;
	static int16_t x294 = INT16_MIN;
	int8_t x295 = -1;
	int32_t t65 = 23;

	t65 = ((x293<=(x294/x295))/x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = 2355;
	int8_t x298 = INT8_MIN;
	int64_t x299 = 2323LL;
	int64_t x300 = INT64_MIN;

	t66 = ((x297<=(x298/x299))/x300);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = INT8_MAX;
	int8_t x306 = INT8_MIN;
	uint16_t x307 = UINT16_MAX;
	static uint8_t x308 = 7U;
	int32_t t67 = 28;

	t67 = ((x305<=(x306/x307))/x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x309 = UINT32_MAX;
	static int32_t t68 = -410926384;

	t68 = ((x309<=(x310/x311))/x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x313 = 1U;
	int32_t x314 = 198;
	static volatile int8_t x316 = 1;
	static volatile int32_t t69 = 7202;

	t69 = ((x313<=(x314/x315))/x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x318 = INT16_MIN;
	static int64_t x319 = 3370899297204LL;
	volatile int32_t x320 = INT32_MIN;
	volatile int32_t t70 = 11774;

	t70 = ((x317<=(x318/x319))/x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x321 = UINT32_MAX;
	uint16_t x322 = 1449U;
	int64_t x323 = INT64_MIN;
	static int32_t t71 = -54574;

	t71 = ((x321<=(x322/x323))/x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = -1;
	static int16_t x327 = INT16_MAX;
	volatile int32_t t72 = 3609594;

	t72 = ((x325<=(x326/x327))/x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x329 = 817524537LLU;
	int32_t x330 = INT32_MIN;
	int16_t x332 = INT16_MIN;
	int32_t t73 = 96481;

	t73 = ((x329<=(x330/x331))/x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = -1;
	static uint8_t x334 = UINT8_MAX;
	static uint16_t x335 = 15666U;
	uint64_t x336 = UINT64_MAX;

	t74 = ((x333<=(x334/x335))/x336);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x338 = INT64_MIN;
	static int8_t x339 = INT8_MIN;
	int8_t x340 = -1;
	static volatile int32_t t75 = 0;

	t75 = ((x337<=(x338/x339))/x340);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x341 = INT16_MAX;
	int32_t x343 = INT32_MAX;
	static int32_t t76 = 2001622;

	t76 = ((x341<=(x342/x343))/x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x346 = -1;
	uint8_t x347 = 1U;
	int64_t x348 = -1LL;
	volatile int64_t t77 = 1133299870173483638LL;

	t77 = ((x345<=(x346/x347))/x348);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x354 = INT8_MIN;
	volatile int32_t x355 = INT32_MIN;
	static uint32_t x356 = UINT32_MAX;
	static volatile uint32_t t78 = 10401011U;

	t78 = ((x353<=(x354/x355))/x356);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x357 = UINT16_MAX;
	int16_t x358 = INT16_MIN;
	volatile int16_t x359 = 15356;
	volatile int64_t x360 = 203343309863LL;
	volatile int64_t t79 = 10LL;

	t79 = ((x357<=(x358/x359))/x360);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x361 = 207208882LLU;
	int64_t x362 = INT64_MAX;
	static int32_t x364 = INT32_MIN;
	int32_t t80 = 50;

	t80 = ((x361<=(x362/x363))/x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x365 = 6841LLU;
	static int32_t x366 = INT32_MAX;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t81 = 1;

	t81 = ((x365<=(x366/x367))/x368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	uint8_t x371 = UINT8_MAX;
	volatile int32_t x372 = INT32_MIN;
	volatile int32_t t82 = -6949;

	t82 = ((x369<=(x370/x371))/x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x377 = UINT8_MAX;
	int32_t x378 = INT32_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t83 = 51;

	t83 = ((x377<=(x378/x379))/x380);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x383 = INT16_MAX;

	t84 = ((x381<=(x382/x383))/x384);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = -1LL;
	int16_t x386 = INT16_MAX;
	uint16_t x387 = 14622U;
	int32_t x388 = -1;
	volatile int32_t t85 = -676;

	t85 = ((x385<=(x386/x387))/x388);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = INT32_MAX;
	int8_t x391 = -1;
	int32_t x392 = -1;
	static int32_t t86 = 3665804;

	t86 = ((x389<=(x390/x391))/x392);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x393 = INT16_MAX;
	volatile uint8_t x394 = 6U;
	uint32_t x395 = 167U;
	uint16_t x396 = 1U;

	t87 = ((x393<=(x394/x395))/x396);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x397 = -66570192LL;
	int16_t x398 = INT16_MIN;
	volatile uint32_t x399 = UINT32_MAX;
	int32_t x400 = INT32_MIN;
	volatile int32_t t88 = 193316;

	t88 = ((x397<=(x398/x399))/x400);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x401 = 113U;
	int64_t x402 = -1LL;
	uint32_t x404 = 3328983U;
	static volatile uint32_t t89 = 361392U;

	t89 = ((x401<=(x402/x403))/x404);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x405 = INT32_MAX;
	uint64_t x406 = 14106654691LLU;
	int64_t x407 = -613LL;
	int8_t x408 = -1;
	volatile int32_t t90 = 0;

	t90 = ((x405<=(x406/x407))/x408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x413 = -56;
	volatile int8_t x414 = 0;
	static volatile int32_t x416 = INT32_MIN;
	volatile int32_t t91 = -1008512644;

	t91 = ((x413<=(x414/x415))/x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x419 = 10U;
	volatile uint64_t t92 = 101199924LLU;

	t92 = ((x417<=(x418/x419))/x420);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x421 = UINT8_MAX;
	volatile int16_t x422 = 2076;
	int8_t x423 = INT8_MIN;
	static int64_t x424 = 1409LL;
	volatile int64_t t93 = -6726LL;

	t93 = ((x421<=(x422/x423))/x424);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x429 = INT32_MAX;
	int16_t x430 = INT16_MIN;
	int16_t x431 = -4;
	static int64_t x432 = -123789123LL;
	static volatile int64_t t94 = -426LL;

	t94 = ((x429<=(x430/x431))/x432);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = INT8_MIN;
	uint16_t x434 = 1138U;
	volatile int64_t x435 = -1336466LL;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t95 = 55LLU;

	t95 = ((x433<=(x434/x435))/x436);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x439 = -1;
	int32_t t96 = 4734871;

	t96 = ((x437<=(x438/x439))/x440);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x441 = -1;
	static int64_t x442 = INT64_MIN;
	uint32_t x443 = 30290057U;
	uint32_t x444 = UINT32_MAX;
	uint32_t t97 = 173U;

	t97 = ((x441<=(x442/x443))/x444);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = -1;
	int8_t x446 = INT8_MAX;
	static uint16_t x447 = UINT16_MAX;
	int32_t x448 = INT32_MIN;
	static volatile int32_t t98 = 13382;

	t98 = ((x445<=(x446/x447))/x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x457 = -3;
	volatile int16_t x458 = 158;
	uint64_t x459 = 23182812LLU;
	volatile uint32_t x460 = 325143731U;

	t99 = ((x457<=(x458/x459))/x460);

	if (t99 != 0U) { NG(); } else { ; }
	
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

