#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 3702;
int16_t x8 = INT16_MIN;
static uint8_t x13 = UINT8_MAX;
volatile int32_t t4 = -22682413;
int32_t t5 = -17450771;
int8_t x28 = -43;
uint64_t x34 = 30LLU;
int16_t x51 = 0;
volatile int64_t x52 = INT64_MIN;
int64_t x53 = INT64_MAX;
int8_t x56 = INT8_MIN;
static uint16_t x63 = 376U;
volatile int32_t x64 = INT32_MIN;
volatile int16_t x66 = INT16_MIN;
volatile int32_t t16 = 8223327;
uint32_t x77 = 215815654U;
static int8_t x81 = -1;
volatile int32_t t18 = 74690033;
int16_t x86 = -1;
int16_t x87 = INT16_MAX;
int16_t x95 = INT16_MIN;
uint32_t t21 = 26U;
int32_t x103 = INT32_MIN;
int64_t x108 = -4397789335LL;
uint16_t x114 = UINT16_MAX;
int32_t x115 = 8168900;
static volatile int32_t t28 = 19528676;
static int16_t x133 = INT16_MIN;
uint64_t x135 = UINT64_MAX;
static int64_t x161 = INT64_MAX;
uint64_t x162 = UINT64_MAX;
uint32_t x164 = UINT32_MAX;
int8_t x167 = INT8_MIN;
volatile int32_t t36 = -356409;
int16_t x174 = -12;
int8_t x176 = -11;
int16_t x177 = -1;
static int32_t x180 = -1;
uint8_t x190 = 1U;
volatile int32_t t41 = INT32_MIN;
int32_t x195 = -1;
int32_t t42 = -3598;
int32_t x201 = 5;
uint16_t x204 = 240U;
volatile int32_t x207 = INT32_MIN;
uint64_t x210 = 66LLU;
int16_t x211 = 2;
int32_t t46 = -311725051;
int32_t x214 = -5;
int32_t t49 = -852042;
int16_t x232 = INT16_MAX;
int8_t x235 = INT8_MIN;
uint16_t x241 = 420U;
uint16_t x248 = UINT16_MAX;
int64_t x253 = -1LL;
uint64_t t55 = UINT64_MAX;
int8_t x259 = 6;
uint64_t x260 = UINT64_MAX;
int8_t x261 = INT8_MIN;
int64_t x265 = 15872359515174LL;
uint64_t x268 = UINT64_MAX;
int32_t x275 = -4048;
int32_t x276 = INT32_MAX;
int8_t x277 = 14;
volatile uint64_t x279 = 71775LLU;
int32_t x284 = -1;
uint32_t x290 = 120U;
int64_t t63 = -3982641733752765233LL;
static volatile int64_t x293 = INT64_MIN;
uint8_t x295 = 12U;
int32_t t64 = 109188768;
int64_t x297 = INT64_MIN;
int32_t x307 = -59174934;
uint8_t x309 = 96U;
static uint8_t x310 = UINT8_MAX;
volatile int32_t t67 = 3;
volatile int8_t x313 = INT8_MIN;
int8_t x316 = -2;
uint16_t x317 = 346U;
static int8_t x320 = INT8_MIN;
volatile int16_t x323 = INT16_MAX;
uint32_t x332 = 107U;
volatile int8_t x339 = -1;
uint64_t x344 = UINT64_MAX;
static int64_t x348 = 15268111521739LL;
int16_t x354 = 253;
int32_t x356 = INT32_MIN;
static int32_t x359 = -23401043;
int64_t x360 = INT64_MIN;
int16_t x362 = -1;
static volatile uint64_t x364 = 154492487158480719LLU;
volatile int8_t x366 = -46;
uint16_t x367 = 249U;
int8_t x370 = INT8_MAX;
uint16_t x372 = UINT16_MAX;
int64_t x376 = -1006LL;
int32_t x378 = -1;
static volatile int16_t x379 = 11;
uint64_t t84 = 9LLU;
int32_t t85 = -6421566;
volatile int16_t x389 = 1;
int16_t x393 = INT16_MIN;
static uint16_t x406 = 494U;
int8_t x412 = -62;
int16_t x421 = INT16_MAX;
static volatile int64_t x424 = -1LL;
static int64_t t95 = 318614922168128LL;
static int16_t x425 = -11672;
int64_t x428 = -872LL;
volatile int16_t x429 = INT16_MAX;
int16_t x430 = 50;
static int16_t x432 = -5;
int16_t x433 = INT16_MIN;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	int64_t x2 = INT64_MIN;
	uint64_t x3 = UINT64_MAX;
	int32_t t0 = 121052;

	t0 = ((x1<(x2+x3))^x4);

	if (t0 != 3703) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = INT64_MAX;
	int32_t x7 = INT32_MIN;
	int32_t t1 = -69602678;

	t1 = ((x5<(x6+x7))^x8);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 244575457645LL;
	static uint8_t x10 = 25U;
	int8_t x11 = 16;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = INT64_MIN;

	t2 = ((x9<(x10+x11))^x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	int16_t x15 = -1406;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 89453101;

	t3 = ((x13<(x14+x15))^x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	int16_t x18 = -1;
	int16_t x19 = INT16_MIN;
	volatile int16_t x20 = -1;

	t4 = ((x17<(x18+x19))^x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 9U;
	uint32_t x22 = 82U;
	static uint64_t x23 = 488231229229LLU;
	int8_t x24 = -1;

	t5 = ((x21<(x22+x23))^x24);

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x25 = UINT32_MAX;
	uint8_t x26 = 1U;
	int32_t x27 = INT32_MIN;
	int32_t t6 = 6271;

	t6 = ((x25<(x26+x27))^x28);

	if (t6 != -43) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -334;
	int32_t x35 = INT32_MAX;
	int8_t x36 = INT8_MIN;
	static volatile int32_t t7 = -128968;

	t7 = ((x33<(x34+x35))^x36);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x41 = UINT16_MAX;
	uint8_t x42 = UINT8_MAX;
	static uint16_t x43 = UINT16_MAX;
	volatile int64_t x44 = -22441149161958LL;
	static int64_t t8 = -8621LL;

	t8 = ((x41<(x42+x43))^x44);

	if (t8 != -22441149161957LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	static int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MAX;
	int32_t t9 = -80619;

	t9 = ((x45<(x46+x47))^x48);

	if (t9 != 2147483646) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -1LL;
	uint8_t x50 = 0U;
	int64_t t10 = 629322198835419415LL;

	t10 = ((x49<(x50+x51))^x52);

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x54 = INT64_MIN;
	int64_t x55 = 1LL;
	volatile int32_t t11 = 123044;

	t11 = ((x53<(x54+x55))^x56);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x57 = UINT16_MAX;
	int16_t x58 = INT16_MIN;
	volatile uint32_t x59 = 408269934U;
	int8_t x60 = INT8_MIN;
	int32_t t12 = 2277172;

	t12 = ((x57<(x58+x59))^x60);

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = UINT8_MAX;
	volatile uint8_t x62 = 6U;
	volatile int32_t t13 = -6194;

	t13 = ((x61<(x62+x63))^x64);

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	volatile uint8_t x67 = 9U;
	uint32_t x68 = UINT32_MAX;
	uint32_t t14 = UINT32_MAX;

	t14 = ((x65<(x66+x67))^x68);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 10U;
	static volatile int8_t x70 = -1;
	static uint8_t x71 = 3U;
	int64_t x72 = 9398491898274588LL;
	int64_t t15 = -11722241390LL;

	t15 = ((x69<(x70+x71))^x72);

	if (t15 != 9398491898274588LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x73 = 8U;
	int32_t x74 = -1;
	uint8_t x75 = UINT8_MAX;
	int16_t x76 = 856;

	t16 = ((x73<(x74+x75))^x76);

	if (t16 != 857) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x78 = UINT8_MAX;
	volatile int64_t x79 = INT64_MIN;
	static int16_t x80 = 2098;
	volatile int32_t t17 = 1;

	t17 = ((x77<(x78+x79))^x80);

	if (t17 != 2098) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x82 = 12U;
	uint8_t x83 = 0U;
	static volatile int8_t x84 = INT8_MAX;

	t18 = ((x81<(x82+x83))^x84);

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 129569U;
	volatile int32_t x88 = -98400;
	int32_t t19 = 1155;

	t19 = ((x85<(x86+x87))^x88);

	if (t19 != -98400) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MAX;
	volatile uint16_t x94 = 1641U;
	static int16_t x96 = INT16_MAX;
	int32_t t20 = 31606213;

	t20 = ((x93<(x94+x95))^x96);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x97 = 49059828749323332LLU;
	int64_t x98 = 90178932270108LL;
	int32_t x99 = INT32_MIN;
	uint32_t x100 = 1U;

	t21 = ((x97<(x98+x99))^x100);

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MAX;
	uint32_t x102 = 203U;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t22 = -7762261;

	t22 = ((x101<(x102+x103))^x104);

	if (t22 != 65534) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MAX;
	uint16_t x106 = 0U;
	int16_t x107 = INT16_MIN;
	volatile int64_t t23 = 12714124LL;

	t23 = ((x105<(x106+x107))^x108);

	if (t23 != -4397789335LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -1LL;
	uint64_t x110 = 8008861105LLU;
	int8_t x111 = 30;
	int32_t x112 = INT32_MIN;
	static int32_t t24 = INT32_MIN;

	t24 = ((x109<(x110+x111))^x112);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 2LLU;
	static int32_t x116 = 3;
	volatile int32_t t25 = 0;

	t25 = ((x113<(x114+x115))^x116);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = UINT32_MAX;
	uint32_t x118 = UINT32_MAX;
	uint64_t x119 = 19903692632079920LLU;
	uint8_t x120 = 50U;
	volatile int32_t t26 = -823243;

	t26 = ((x117<(x118+x119))^x120);

	if (t26 != 51) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x121 = -1;
	uint16_t x122 = 0U;
	uint8_t x123 = UINT8_MAX;
	static volatile int32_t x124 = -1;
	volatile int32_t t27 = 0;

	t27 = ((x121<(x122+x123))^x124);

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x125 = 30;
	int32_t x126 = 198;
	uint32_t x127 = 24U;
	uint8_t x128 = UINT8_MAX;

	t28 = ((x125<(x126+x127))^x128);

	if (t28 != 254) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	uint64_t x130 = UINT64_MAX;
	volatile int8_t x131 = -13;
	int8_t x132 = INT8_MAX;
	volatile int32_t t29 = 46;

	t29 = ((x129<(x130+x131))^x132);

	if (t29 != 126) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x134 = UINT8_MAX;
	static int32_t x136 = -1;
	int32_t t30 = 187991;

	t30 = ((x133<(x134+x135))^x136);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = -1075;
	int16_t x142 = -1;
	int16_t x143 = -1;
	int64_t x144 = INT64_MAX;
	volatile int64_t t31 = 24912489LL;

	t31 = ((x141<(x142+x143))^x144);

	if (t31 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MAX;
	int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MAX;
	volatile int8_t x148 = INT8_MAX;
	int32_t t32 = -1485;

	t32 = ((x145<(x146+x147))^x148);

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = INT8_MIN;
	int16_t x154 = INT16_MIN;
	volatile int64_t x155 = -1LL;
	static volatile int32_t x156 = -777;
	int32_t t33 = -5;

	t33 = ((x153<(x154+x155))^x156);

	if (t33 != -777) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x157 = INT32_MIN;
	int8_t x158 = -1;
	int8_t x159 = -1;
	volatile int8_t x160 = INT8_MIN;
	volatile int32_t t34 = -167;

	t34 = ((x157<(x158+x159))^x160);

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x163 = INT8_MAX;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = ((x161<(x162+x163))^x164);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x165 = 163U;
	uint32_t x166 = UINT32_MAX;
	uint8_t x168 = 73U;

	t36 = ((x165<(x166+x167))^x168);

	if (t36 != 72) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MAX;
	static int64_t x170 = -1LL;
	int8_t x171 = INT8_MAX;
	volatile int32_t x172 = 2;
	static volatile int32_t t37 = -1;

	t37 = ((x169<(x170+x171))^x172);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = -1;
	int16_t x175 = INT16_MIN;
	int32_t t38 = 35973964;

	t38 = ((x173<(x174+x175))^x176);

	if (t38 != -11) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x178 = -7;
	static uint64_t x179 = 121LLU;
	int32_t t39 = 123;

	t39 = ((x177<(x178+x179))^x180);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 14662373939LLU;
	static uint8_t x182 = 1U;
	uint16_t x183 = 221U;
	uint64_t x184 = UINT64_MAX;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x181<(x182+x183))^x184);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x189 = 0LLU;
	int8_t x191 = -1;
	int32_t x192 = INT32_MIN;

	t41 = ((x189<(x190+x191))^x192);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MAX;
	static int16_t x196 = INT16_MAX;

	t42 = ((x193<(x194+x195))^x196);

	if (t42 != 32766) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = UINT16_MAX;
	int64_t x198 = -1LL;
	int8_t x199 = 6;
	volatile int8_t x200 = 3;
	volatile int32_t t43 = 21587687;

	t43 = ((x197<(x198+x199))^x200);

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x202 = 509;
	static int32_t x203 = -256044;
	int32_t t44 = 12470485;

	t44 = ((x201<(x202+x203))^x204);

	if (t44 != 240) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x205 = 0U;
	volatile int8_t x206 = INT8_MAX;
	int8_t x208 = -15;
	int32_t t45 = 3;

	t45 = ((x205<(x206+x207))^x208);

	if (t45 != -15) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x209 = 233469LLU;
	int8_t x212 = 63;

	t46 = ((x209<(x210+x211))^x212);

	if (t46 != 63) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = UINT8_MAX;
	volatile int32_t x215 = INT32_MAX;
	int8_t x216 = INT8_MIN;
	volatile int32_t t47 = 514637525;

	t47 = ((x213<(x214+x215))^x216);

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MIN;
	volatile uint16_t x218 = 16472U;
	static uint16_t x219 = 24U;
	uint16_t x220 = 1107U;
	volatile int32_t t48 = -80617;

	t48 = ((x217<(x218+x219))^x220);

	if (t48 != 1106) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x225 = 8185LLU;
	volatile uint8_t x226 = 69U;
	int8_t x227 = -45;
	int32_t x228 = -1;

	t49 = ((x225<(x226+x227))^x228);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x229 = -454;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = INT64_MIN;
	volatile int32_t t50 = -218;

	t50 = ((x229<(x230+x231))^x232);

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = 6486LL;
	uint8_t x234 = 5U;
	uint32_t x236 = 36757241U;
	uint32_t t51 = 14411609U;

	t51 = ((x233<(x234+x235))^x236);

	if (t51 != 36757241U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x237 = 1;
	static int64_t x238 = 61LL;
	volatile int8_t x239 = -1;
	int32_t x240 = INT32_MIN;
	int32_t t52 = -111409917;

	t52 = ((x237<(x238+x239))^x240);

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x242 = 1;
	int64_t x243 = INT64_MIN;
	static int64_t x244 = -1LL;
	static volatile int64_t t53 = 88381192241657568LL;

	t53 = ((x241<(x242+x243))^x244);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = -1;
	volatile int16_t x246 = -235;
	static uint32_t x247 = UINT32_MAX;
	int32_t t54 = -11789;

	t54 = ((x245<(x246+x247))^x248);

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x254 = 12U;
	int64_t x255 = INT64_MIN;
	static uint64_t x256 = UINT64_MAX;

	t55 = ((x253<(x254+x255))^x256);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = INT8_MIN;
	static uint8_t x258 = UINT8_MAX;
	volatile uint64_t t56 = 12373655LLU;

	t56 = ((x257<(x258+x259))^x260);

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x262 = 11U;
	int32_t x263 = INT32_MIN;
	uint32_t x264 = 987U;
	uint32_t t57 = 278622858U;

	t57 = ((x261<(x262+x263))^x264);

	if (t57 != 987U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x266 = 32370985545LL;
	int32_t x267 = INT32_MIN;
	uint64_t t58 = UINT64_MAX;

	t58 = ((x265<(x266+x267))^x268);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x273 = 1LLU;
	uint64_t x274 = 5170991128LLU;
	volatile int32_t t59 = -1;

	t59 = ((x273<(x274+x275))^x276);

	if (t59 != 2147483646) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x278 = 4U;
	static volatile int8_t x280 = 0;
	volatile int32_t t60 = 412855595;

	t60 = ((x277<(x278+x279))^x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = INT32_MAX;
	int64_t x282 = INT64_MIN;
	int32_t x283 = 0;
	static int32_t t61 = 0;

	t61 = ((x281<(x282+x283))^x284);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x285 = 56704280U;
	uint64_t x286 = UINT64_MAX;
	int32_t x287 = 155;
	int8_t x288 = -1;
	int32_t t62 = -1780522;

	t62 = ((x285<(x286+x287))^x288);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x289 = -1;
	volatile int16_t x291 = INT16_MAX;
	static int64_t x292 = 194267234877LL;

	t63 = ((x289<(x290+x291))^x292);

	if (t63 != 194267234877LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x294 = 0;
	uint16_t x296 = UINT16_MAX;

	t64 = ((x293<(x294+x295))^x296);

	if (t64 != 65534) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x298 = INT8_MIN;
	static int8_t x299 = -30;
	volatile int32_t x300 = INT32_MIN;
	volatile int32_t t65 = -91;

	t65 = ((x297<(x298+x299))^x300);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MIN;
	volatile int32_t x306 = INT32_MAX;
	uint64_t x308 = UINT64_MAX;
	static uint64_t t66 = 9958172226838LLU;

	t66 = ((x305<(x306+x307))^x308);

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x311 = -1;
	int16_t x312 = INT16_MAX;

	t67 = ((x309<(x310+x311))^x312);

	if (t67 != 32766) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x314 = 32423399136967388LLU;
	volatile int8_t x315 = 2;
	static volatile int32_t t68 = -32406;

	t68 = ((x313<(x314+x315))^x316);

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x318 = 6;
	int16_t x319 = 1;
	volatile int32_t t69 = -33;

	t69 = ((x317<(x318+x319))^x320);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = -1;
	int16_t x322 = INT16_MAX;
	static int16_t x324 = -976;
	int32_t t70 = 5494;

	t70 = ((x321<(x322+x323))^x324);

	if (t70 != -975) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = -11435696227884LL;
	int32_t x326 = INT32_MAX;
	uint32_t x327 = 1492177162U;
	int64_t x328 = 119579095LL;
	volatile int64_t t71 = 2853760763158916LL;

	t71 = ((x325<(x326+x327))^x328);

	if (t71 != 119579094LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x329 = INT32_MAX;
	int64_t x330 = -1LL;
	uint64_t x331 = UINT64_MAX;
	volatile uint32_t t72 = 731U;

	t72 = ((x329<(x330+x331))^x332);

	if (t72 != 106U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x333 = -1;
	int16_t x334 = 436;
	volatile int8_t x335 = INT8_MAX;
	int16_t x336 = INT16_MIN;
	static volatile int32_t t73 = 4444452;

	t73 = ((x333<(x334+x335))^x336);

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = -4;
	uint64_t x338 = 939146543495110109LLU;
	int8_t x340 = INT8_MIN;
	volatile int32_t t74 = 3827;

	t74 = ((x337<(x338+x339))^x340);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = 260152LL;
	static int16_t x342 = -1;
	static int64_t x343 = 98880LL;
	static volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x341<(x342+x343))^x344);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x345 = 1;
	int64_t x346 = INT64_MIN;
	static int64_t x347 = 811233LL;
	int64_t t76 = 10327368881806600LL;

	t76 = ((x345<(x346+x347))^x348);

	if (t76 != 15268111521739LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x349 = UINT16_MAX;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = 4920079354599LLU;
	int16_t x352 = INT16_MAX;
	volatile int32_t t77 = -1;

	t77 = ((x349<(x350+x351))^x352);

	if (t77 != 32766) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = INT16_MIN;
	int16_t x355 = INT16_MIN;
	int32_t t78 = 0;

	t78 = ((x353<(x354+x355))^x356);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x357 = 347U;
	int8_t x358 = INT8_MAX;
	volatile int64_t t79 = INT64_MIN;

	t79 = ((x357<(x358+x359))^x360);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x361 = UINT8_MAX;
	uint16_t x363 = 42U;
	uint64_t t80 = 6283087355064992905LLU;

	t80 = ((x361<(x362+x363))^x364);

	if (t80 != 154492487158480719LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x365 = 32U;
	int32_t x368 = INT32_MAX;
	int32_t t81 = 771762;

	t81 = ((x365<(x366+x367))^x368);

	if (t81 != 2147483646) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x369 = INT64_MIN;
	volatile int8_t x371 = INT8_MIN;
	int32_t t82 = 2039463;

	t82 = ((x369<(x370+x371))^x372);

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x373 = INT8_MIN;
	int16_t x374 = -2;
	static uint8_t x375 = 35U;
	int64_t t83 = 16157335845202LL;

	t83 = ((x373<(x374+x375))^x376);

	if (t83 != -1005LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x377 = 4462U;
	uint64_t x380 = 257LLU;

	t84 = ((x377<(x378+x379))^x380);

	if (t84 != 257LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x381 = 6LLU;
	int8_t x382 = -49;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = UINT8_MAX;

	t85 = ((x381<(x382+x383))^x384);

	if (t85 != 254) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x385 = 52271494889265LLU;
	uint32_t x386 = 1589705752U;
	int8_t x387 = INT8_MIN;
	volatile int16_t x388 = INT16_MIN;
	int32_t t86 = -1;

	t86 = ((x385<(x386+x387))^x388);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x390 = UINT8_MAX;
	static uint32_t x391 = 1200830U;
	volatile uint32_t x392 = UINT32_MAX;
	volatile uint32_t t87 = 106478181U;

	t87 = ((x389<(x390+x391))^x392);

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x394 = INT8_MAX;
	int32_t x395 = INT32_MIN;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t88 = 205;

	t88 = ((x393<(x394+x395))^x396);

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = INT8_MIN;
	static uint16_t x398 = 9196U;
	int32_t x399 = -290;
	uint16_t x400 = UINT16_MAX;
	static int32_t t89 = -4819738;

	t89 = ((x397<(x398+x399))^x400);

	if (t89 != 65534) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x401 = INT64_MAX;
	int32_t x402 = INT32_MAX;
	static volatile int64_t x403 = -1LL;
	volatile uint8_t x404 = 0U;
	int32_t t90 = 21054725;

	t90 = ((x401<(x402+x403))^x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x405 = 0;
	int8_t x407 = -31;
	static int8_t x408 = -46;
	static volatile int32_t t91 = 4;

	t91 = ((x405<(x406+x407))^x408);

	if (t91 != -45) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = INT8_MIN;
	int16_t x410 = -1;
	volatile int16_t x411 = -44;
	int32_t t92 = -994928575;

	t92 = ((x409<(x410+x411))^x412);

	if (t92 != -61) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x413 = -1;
	int16_t x414 = INT16_MIN;
	volatile uint64_t x415 = UINT64_MAX;
	int32_t x416 = INT32_MAX;
	static volatile int32_t t93 = INT32_MAX;

	t93 = ((x413<(x414+x415))^x416);

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = -1;
	uint32_t x418 = UINT32_MAX;
	static volatile uint32_t x419 = 0U;
	int32_t x420 = 728;
	int32_t t94 = 690461636;

	t94 = ((x417<(x418+x419))^x420);

	if (t94 != 728) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x422 = -21506757986911LL;
	int64_t x423 = -1LL;

	t95 = ((x421<(x422+x423))^x424);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x426 = INT32_MIN;
	int8_t x427 = INT8_MAX;
	int64_t t96 = 1405924LL;

	t96 = ((x425<(x426+x427))^x428);

	if (t96 != -872LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x431 = 804922902278LLU;
	static volatile int32_t t97 = -30679689;

	t97 = ((x429<(x430+x431))^x432);

	if (t97 != -6) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x434 = 23280U;
	uint16_t x435 = 3U;
	int16_t x436 = 0;
	int32_t t98 = -899397625;

	t98 = ((x433<(x434+x435))^x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x441 = INT32_MAX;
	int64_t x442 = 2246262720LL;
	int64_t x443 = -1LL;
	int64_t x444 = INT64_MAX;
	int64_t t99 = -35315344687123LL;

	t99 = ((x441<(x442+x443))^x444);

	if (t99 != 9223372036854775806LL) { NG(); } else { ; }
	
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

