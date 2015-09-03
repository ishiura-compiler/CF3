#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = -1LL;
static uint16_t x12 = 19409U;
uint16_t x15 = 155U;
static int32_t x16 = INT32_MAX;
uint64_t x22 = 254156790673LLU;
int8_t x23 = 1;
volatile int16_t x26 = INT16_MIN;
volatile uint8_t x29 = 2U;
int32_t x32 = INT32_MIN;
int32_t t7 = 5;
volatile uint64_t x35 = 14733756866194LLU;
int8_t x39 = -1;
static int8_t x40 = -1;
static uint32_t x42 = 681409U;
int32_t x43 = -1528;
int16_t x47 = -363;
uint64_t t11 = UINT64_MAX;
int64_t x51 = 5613650LL;
volatile int64_t t12 = 2811764LL;
uint16_t x56 = 0U;
static int16_t x59 = INT16_MIN;
static int16_t x65 = -4;
int16_t x73 = INT16_MIN;
int32_t x76 = INT32_MIN;
int32_t t19 = -1;
int32_t x81 = INT32_MIN;
volatile int32_t x82 = INT32_MIN;
static uint16_t x92 = 1508U;
uint8_t x93 = UINT8_MAX;
int8_t x104 = -17;
volatile int64_t t26 = -24190055511738459LL;
volatile uint32_t x112 = 3062U;
static int64_t x119 = 9433LL;
uint8_t x123 = UINT8_MAX;
volatile int64_t x124 = -1LL;
int64_t x127 = INT64_MAX;
uint8_t x129 = 69U;
volatile uint32_t t33 = UINT32_MAX;
int16_t x137 = INT16_MIN;
volatile int32_t t34 = 5;
static int64_t x142 = -1LL;
int64_t x143 = INT64_MIN;
int32_t t35 = -127;
int16_t x145 = INT16_MIN;
volatile int32_t t36 = 57;
static int64_t x162 = INT64_MIN;
static int32_t x163 = INT32_MIN;
uint64_t x165 = 5379468898LLU;
volatile int32_t x169 = -1;
uint16_t x171 = 2U;
int8_t x174 = -1;
static uint8_t x185 = 1U;
static int32_t x188 = -1;
volatile uint8_t x208 = 5U;
uint16_t x209 = 6U;
static int8_t x211 = -1;
uint8_t x214 = 0U;
volatile int8_t x220 = -1;
static int32_t x234 = INT32_MIN;
int64_t x236 = INT64_MAX;
static int8_t x242 = -1;
int32_t x245 = INT32_MAX;
uint16_t x255 = 1162U;
static int8_t x256 = INT8_MIN;
uint32_t x262 = 245157314U;
int16_t x264 = -1;
int16_t x268 = INT16_MIN;
volatile int32_t t66 = -808;
uint32_t x269 = UINT32_MAX;
uint8_t x276 = 35U;
static uint16_t x280 = 233U;
static int32_t x288 = -456675558;
static volatile int64_t x291 = INT64_MIN;
volatile int64_t x292 = INT64_MIN;
int16_t x297 = INT16_MAX;
volatile int64_t x310 = -1LL;
uint32_t x312 = 99735U;
static int32_t x321 = INT32_MIN;
uint64_t x328 = 2193LLU;
volatile uint8_t x335 = 0U;
int64_t x339 = -36018648894LL;
volatile int32_t x340 = INT32_MIN;
static int32_t x344 = 34;
volatile int64_t x345 = -251103793LL;
uint8_t x346 = 104U;
uint32_t x348 = 40039U;
volatile int64_t t86 = -1650863137614LL;
volatile int16_t x349 = INT16_MAX;
int8_t x354 = INT8_MAX;
uint16_t x360 = 6786U;
static int8_t x362 = -7;
int8_t x365 = INT8_MAX;
int32_t x367 = 0;
static uint32_t x377 = UINT32_MAX;
static uint32_t t94 = UINT32_MAX;
int64_t x382 = -1LL;
volatile int64_t t95 = -1LL;
uint64_t x390 = 1971720656015LLU;


void f0(void) {
	int8_t x2 = INT8_MAX;
	int32_t x3 = INT32_MIN;
	int64_t x4 = 8294641361763143LL;
	volatile int64_t t0 = 1LL;

	t0 = (x1|((x2<x3)|x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MAX;
	int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 0;

	t1 = (x5|((x6<x7)|x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int64_t x10 = -212835001308909LL;
	static volatile int16_t x11 = -223;
	int32_t t2 = -24535;

	t2 = (x9|((x10<x11)|x12));

	if (t2 != -2147464239) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	static uint16_t x14 = 4U;
	int32_t t3 = -42888;

	t3 = (x13|((x14<x15)|x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 81LLU;
	static volatile uint16_t x18 = 5U;
	uint8_t x19 = UINT8_MAX;
	volatile int8_t x20 = -1;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17|((x18<x19)|x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x21 = 32U;
	uint64_t x24 = UINT64_MAX;
	uint64_t t5 = UINT64_MAX;

	t5 = (x21|((x22<x23)|x24));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x27 = 54U;
	uint16_t x28 = 393U;
	int32_t t6 = 1;

	t6 = (x25|((x26<x27)|x28));

	if (t6 != -2147483255) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 1;
	static volatile int32_t x31 = 281273;

	t7 = (x29|((x30<x31)|x32));

	if (t7 != -2147483645) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	int8_t x34 = INT8_MIN;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 214;

	t8 = (x33|((x34<x35)|x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int16_t x38 = INT16_MIN;
	volatile int32_t t9 = 27981;

	t9 = (x37|((x38<x39)|x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int8_t x44 = -1;
	static volatile int32_t t10 = 3;

	t10 = (x41|((x42<x43)|x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 463;
	int64_t x46 = 2732055LL;
	static uint64_t x48 = UINT64_MAX;

	t11 = (x45|((x46<x47)|x48));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x50 = 880U;
	int64_t x52 = -136361896992LL;

	t12 = (x49|((x50<x51)|x52));

	if (t12 != -31LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int8_t x54 = 1;
	uint64_t x55 = UINT64_MAX;
	volatile int32_t t13 = INT32_MAX;

	t13 = (x53|((x54<x55)|x56));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static int32_t x58 = INT32_MIN;
	volatile int8_t x60 = -3;
	int32_t t14 = 483760563;

	t14 = (x57|((x58<x59)|x60));

	if (t14 != -3) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = UINT64_MAX;
	int8_t x62 = 13;
	static uint32_t x63 = UINT32_MAX;
	int64_t x64 = INT64_MAX;
	uint64_t t15 = UINT64_MAX;

	t15 = (x61|((x62<x63)|x64));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MAX;
	volatile int16_t x67 = -1;
	int32_t x68 = -18925;
	volatile int32_t t16 = -2;

	t16 = (x65|((x66<x67)|x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -136933856871LL;
	int16_t x70 = INT16_MIN;
	volatile int64_t x71 = INT64_MIN;
	static volatile uint8_t x72 = 72U;
	volatile int64_t t17 = -6958893900914LL;

	t17 = (x69|((x70<x71)|x72));

	if (t17 != -136933856807LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -1;
	volatile int16_t x75 = INT16_MAX;
	int32_t t18 = 411801;

	t18 = (x73|((x74<x75)|x76));

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -3316;
	static int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MAX;
	static int8_t x80 = -52;

	t19 = (x77|((x78<x79)|x80));

	if (t19 != -51) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x83 = 51;
	int16_t x84 = INT16_MIN;
	int32_t t20 = 17;

	t20 = (x81|((x82<x83)|x84));

	if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -684;
	int32_t x86 = INT32_MAX;
	int16_t x87 = INT16_MIN;
	static int16_t x88 = INT16_MIN;
	int32_t t21 = 1592848;

	t21 = (x85|((x86<x87)|x88));

	if (t21 != -684) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	volatile int16_t x90 = -1;
	uint64_t x91 = 70061309625LLU;
	int64_t t22 = -1LL;

	t22 = (x89|((x90<x91)|x92));

	if (t22 != -9223372036854774300LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x94 = -1;
	static int64_t x95 = INT64_MAX;
	static volatile uint8_t x96 = 47U;
	static int32_t t23 = 2482278;

	t23 = (x93|((x94<x95)|x96));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -4;
	int64_t x98 = 5103LL;
	uint16_t x99 = 0U;
	uint64_t x100 = 170997919440882305LLU;
	volatile uint64_t t24 = 2973772487065LLU;

	t24 = (x97|((x98<x99)|x100));

	if (t24 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 0U;
	int16_t x102 = 588;
	uint16_t x103 = UINT16_MAX;
	volatile int32_t t25 = -642;

	t25 = (x101|((x102<x103)|x104));

	if (t25 != -17) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = -1LL;
	int8_t x106 = 1;
	int32_t x107 = -1;
	uint16_t x108 = UINT16_MAX;

	t26 = (x105|((x106<x107)|x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -1LL;
	int32_t x110 = INT32_MIN;
	static int16_t x111 = INT16_MIN;
	static int64_t t27 = 4793030LL;

	t27 = (x109|((x110<x111)|x112));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 1;
	int32_t x114 = -16573947;
	static int32_t x115 = INT32_MIN;
	uint16_t x116 = 3U;
	volatile int32_t t28 = -4009476;

	t28 = (x113|((x114<x115)|x116));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = 15311U;
	int16_t x118 = INT16_MAX;
	volatile int32_t x120 = INT32_MIN;
	int32_t t29 = 1316117;

	t29 = (x117|((x118<x119)|x120));

	if (t29 != -2147468337) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 1587485LLU;
	uint16_t x122 = 3U;
	static uint64_t t30 = UINT64_MAX;

	t30 = (x121|((x122<x123)|x124));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static uint32_t x126 = 489818450U;
	volatile uint8_t x128 = 29U;
	int32_t t31 = 55878585;

	t31 = (x125|((x126<x127)|x128));

	if (t31 != -2147483619) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MAX;
	int64_t x131 = INT64_MAX;
	uint8_t x132 = UINT8_MAX;
	static int32_t t32 = -1677;

	t32 = (x129|((x130<x131)|x132));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x133 = UINT32_MAX;
	int16_t x134 = INT16_MAX;
	int16_t x135 = -1;
	uint32_t x136 = 238744U;

	t33 = (x133|((x134<x135)|x136));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;
	volatile int8_t x139 = INT8_MAX;
	int16_t x140 = INT16_MIN;

	t34 = (x137|((x138<x139)|x140));

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	int8_t x144 = INT8_MIN;

	t35 = (x141|((x142<x143)|x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x146 = 2991463U;
	uint8_t x147 = 27U;
	static uint16_t x148 = 10U;

	t36 = (x145|((x146<x147)|x148));

	if (t36 != -32758) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MIN;
	int64_t x150 = -12112526LL;
	int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MIN;
	volatile int64_t t37 = 15344589049LL;

	t37 = (x149|((x150<x151)|x152));

	if (t37 != -127LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = -1;
	static uint64_t x154 = 193982273LLU;
	int64_t x155 = INT64_MAX;
	int64_t x156 = INT64_MIN;
	int64_t t38 = -220225445161666070LL;

	t38 = (x153|((x154<x155)|x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = INT8_MIN;
	static int32_t x158 = INT32_MIN;
	volatile int64_t x159 = INT64_MIN;
	int8_t x160 = 5;
	int32_t t39 = -695476;

	t39 = (x157|((x158<x159)|x160));

	if (t39 != -123) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	uint8_t x164 = 1U;
	static volatile int32_t t40 = 2;

	t40 = (x161|((x162<x163)|x164));

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = -1;
	static int8_t x167 = INT8_MIN;
	static uint16_t x168 = 111U;
	uint64_t t41 = 0LLU;

	t41 = (x165|((x166<x167)|x168));

	if (t41 != 5379468911LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -1;
	int16_t x172 = -746;
	volatile int32_t t42 = -27;

	t42 = (x169|((x170<x171)|x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	int64_t x175 = INT64_MIN;
	int8_t x176 = -1;
	static int64_t t43 = -1086957567968LL;

	t43 = (x173|((x174<x175)|x176));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 23U;
	volatile uint64_t x178 = 60716LLU;
	int32_t x179 = INT32_MAX;
	uint16_t x180 = 22570U;
	volatile int32_t t44 = -42887715;

	t44 = (x177|((x178<x179)|x180));

	if (t44 != 22591) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = -1;
	volatile int32_t x182 = INT32_MIN;
	int64_t x183 = 2030661229052030161LL;
	uint32_t x184 = 678990U;
	static uint32_t t45 = UINT32_MAX;

	t45 = (x181|((x182<x183)|x184));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = 0U;
	volatile int8_t x187 = INT8_MIN;
	volatile int32_t t46 = 1589400;

	t46 = (x185|((x186<x187)|x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 1686258410U;
	int8_t x190 = 0;
	uint64_t x191 = 68266635332LLU;
	uint32_t x192 = 38548184U;
	volatile uint32_t t47 = 250U;

	t47 = (x189|((x190<x191)|x192));

	if (t47 != 1724805883U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	static volatile int16_t x194 = INT16_MIN;
	static volatile uint32_t x195 = UINT32_MAX;
	volatile int64_t x196 = INT64_MAX;
	int64_t t48 = 148358LL;

	t48 = (x193|((x194<x195)|x196));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 8LLU;
	static int32_t x198 = INT32_MIN;
	uint64_t x199 = 11LLU;
	volatile uint64_t x200 = UINT64_MAX;
	static volatile uint64_t t49 = UINT64_MAX;

	t49 = (x197|((x198<x199)|x200));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = 0LL;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	int8_t x204 = 12;
	volatile int64_t t50 = -7LL;

	t50 = (x201|((x202<x203)|x204));

	if (t50 != 13LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 2U;
	int64_t x206 = INT64_MIN;
	uint32_t x207 = 413U;
	static int32_t t51 = -134882010;

	t51 = (x205|((x206<x207)|x208));

	if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = INT64_MAX;
	volatile uint32_t x212 = UINT32_MAX;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x209|((x210<x211)|x212));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = -1;
	uint8_t x215 = UINT8_MAX;
	int16_t x216 = -12480;
	int32_t t53 = 4;

	t53 = (x213|((x214<x215)|x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	uint64_t x218 = 181726LLU;
	uint16_t x219 = 26294U;
	uint64_t t54 = UINT64_MAX;

	t54 = (x217|((x218<x219)|x220));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 1U;
	int32_t x222 = INT32_MIN;
	volatile uint8_t x223 = 95U;
	uint64_t x224 = 1105376861072870LLU;
	volatile uint64_t t55 = 39621466909328LLU;

	t55 = (x221|((x222<x223)|x224));

	if (t55 != 1105376861072871LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	static int8_t x226 = -1;
	int64_t x227 = 18296938625613613LL;
	static int32_t x228 = INT32_MAX;
	int32_t t56 = 2;

	t56 = (x225|((x226<x227)|x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -30;
	uint8_t x230 = 13U;
	static int8_t x231 = -1;
	int32_t x232 = INT32_MIN;
	int32_t t57 = 20764730;

	t57 = (x229|((x230<x231)|x232));

	if (t57 != -30) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MAX;
	uint64_t x235 = UINT64_MAX;
	int64_t t58 = INT64_MAX;

	t58 = (x233|((x234<x235)|x236));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	volatile uint64_t x238 = UINT64_MAX;
	uint64_t x239 = 8LLU;
	int64_t x240 = INT64_MIN;
	int64_t t59 = -449614LL;

	t59 = (x237|((x238<x239)|x240));

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = -90806389243LL;
	int8_t x243 = INT8_MIN;
	int8_t x244 = -41;
	volatile int64_t t60 = 213458632654LL;

	t60 = (x241|((x242<x243)|x244));

	if (t60 != -41LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = INT8_MIN;
	uint16_t x247 = 2503U;
	int16_t x248 = INT16_MAX;
	volatile int32_t t61 = INT32_MAX;

	t61 = (x245|((x246<x247)|x248));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 636U;
	static uint8_t x250 = UINT8_MAX;
	static volatile uint16_t x251 = 25U;
	static uint64_t x252 = 6328591326LLU;
	uint64_t t62 = 0LLU;

	t62 = (x249|((x250<x251)|x252));

	if (t62 != 6328591358LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -144302396210LL;
	uint32_t x254 = 113958330U;
	int64_t t63 = -101968LL;

	t63 = (x253|((x254<x255)|x256));

	if (t63 != -50LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 206775LLU;
	uint16_t x258 = UINT16_MAX;
	static int8_t x259 = INT8_MAX;
	volatile uint64_t x260 = 2LLU;
	volatile uint64_t t64 = 3825139228627155129LLU;

	t64 = (x257|((x258<x259)|x260));

	if (t64 != 206775LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MIN;
	int32_t x263 = -1;
	volatile int32_t t65 = -1;

	t65 = (x261|((x262<x263)|x264));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	int16_t x266 = INT16_MIN;
	int8_t x267 = -1;

	t66 = (x265|((x266<x267)|x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x270 = 7U;
	static uint8_t x271 = 52U;
	volatile int64_t x272 = INT64_MIN;
	int64_t t67 = -1176LL;

	t67 = (x269|((x270<x271)|x272));

	if (t67 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MAX;
	int32_t x274 = -1;
	int8_t x275 = -1;
	int32_t t68 = -15215;

	t68 = (x273|((x274<x275)|x276));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int8_t x278 = 1;
	volatile uint16_t x279 = 37U;
	uint32_t t69 = UINT32_MAX;

	t69 = (x277|((x278<x279)|x280));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MIN;
	volatile int32_t x282 = -44;
	int64_t x283 = INT64_MAX;
	static volatile int32_t x284 = -1;
	int32_t t70 = -103;

	t70 = (x281|((x282<x283)|x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -3;
	uint8_t x286 = 2U;
	int64_t x287 = INT64_MIN;
	static int32_t t71 = -233;

	t71 = (x285|((x286<x287)|x288));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	static int64_t x290 = -1LL;
	static int64_t t72 = -959509077646805105LL;

	t72 = (x289|((x290<x291)|x292));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x293 = -1;
	uint64_t x294 = UINT64_MAX;
	uint32_t x295 = UINT32_MAX;
	uint8_t x296 = 2U;
	int32_t t73 = 331062;

	t73 = (x293|((x294<x295)|x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x298 = 3U;
	static uint8_t x299 = 27U;
	uint32_t x300 = 6960U;
	uint32_t t74 = 20916U;

	t74 = (x297|((x298<x299)|x300));

	if (t74 != 32767U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 28U;
	uint32_t x302 = 15U;
	int32_t x303 = 0;
	volatile uint32_t x304 = UINT32_MAX;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (x301|((x302<x303)|x304));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static uint16_t x306 = 1U;
	volatile int64_t x307 = -1LL;
	int16_t x308 = -1;
	volatile int32_t t76 = 0;

	t76 = (x305|((x306<x307)|x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 124U;
	int16_t x311 = INT16_MIN;
	volatile uint32_t t77 = 1235U;

	t77 = (x309|((x310<x311)|x312));

	if (t77 != 99839U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	int16_t x314 = -99;
	uint64_t x315 = 4567LLU;
	int64_t x316 = INT64_MAX;
	volatile int64_t t78 = INT64_MAX;

	t78 = (x313|((x314<x315)|x316));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 3;
	static int8_t x318 = -1;
	int32_t x319 = INT32_MAX;
	int16_t x320 = INT16_MIN;
	int32_t t79 = -407149853;

	t79 = (x317|((x318<x319)|x320));

	if (t79 != -32765) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = 1637313872063010279LLU;
	uint16_t x323 = 9U;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t80 = 19359;

	t80 = (x321|((x322<x323)|x324));

	if (t80 != -2147418113) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = 7U;
	int8_t x326 = INT8_MIN;
	int32_t x327 = INT32_MIN;
	volatile uint64_t t81 = 479LLU;

	t81 = (x325|((x326<x327)|x328));

	if (t81 != 2199LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	static int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MAX;
	int8_t x332 = INT8_MIN;
	int32_t t82 = -4809;

	t82 = (x329|((x330<x331)|x332));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -1;
	int32_t x334 = 747;
	static int32_t x336 = INT32_MIN;
	volatile int32_t t83 = 94420;

	t83 = (x333|((x334<x335)|x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 84536078490LLU;
	int64_t x338 = -1LL;
	static uint64_t t84 = 1962LLU;

	t84 = (x337|((x338<x339)|x340));

	if (t84 != 18446744072346284186LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x341 = UINT64_MAX;
	uint64_t x342 = 74431LLU;
	volatile int8_t x343 = INT8_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = (x341|((x342<x343)|x344));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x347 = -1;

	t86 = (x345|((x346<x347)|x348));

	if (t86 != -251068945LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x350 = INT16_MAX;
	uint32_t x351 = UINT32_MAX;
	volatile int16_t x352 = -1;
	volatile int32_t t87 = -94534;

	t87 = (x349|((x350<x351)|x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 0U;
	uint32_t x355 = 9330564U;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 942;

	t88 = (x353|((x354<x355)|x356));

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x357 = UINT64_MAX;
	volatile int16_t x358 = -425;
	int64_t x359 = INT64_MIN;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x357|((x358<x359)|x360));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 185386504U;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MAX;
	int64_t t90 = INT64_MAX;

	t90 = (x361|((x362<x363)|x364));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x366 = 14LLU;
	static int16_t x368 = -118;
	static int32_t t91 = 62685639;

	t91 = (x365|((x366<x367)|x368));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 19203895590LLU;
	static int8_t x370 = INT8_MAX;
	int64_t x371 = INT64_MAX;
	static uint16_t x372 = UINT16_MAX;
	static uint64_t t92 = 63LLU;

	t92 = (x369|((x370<x371)|x372));

	if (t92 != 19203948543LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	static int16_t x374 = INT16_MIN;
	uint16_t x375 = 27092U;
	uint8_t x376 = 1U;
	static int32_t t93 = 441;

	t93 = (x373|((x374<x375)|x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = 84;
	static int64_t x379 = INT64_MIN;
	uint16_t x380 = 77U;

	t94 = (x377|((x378<x379)|x380));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = -1LL;
	uint8_t x383 = UINT8_MAX;
	static int8_t x384 = -1;

	t95 = (x381|((x382<x383)|x384));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MIN;
	volatile uint8_t x386 = UINT8_MAX;
	uint32_t x387 = 4262U;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = -2;

	t96 = (x385|((x386<x387)|x388));

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	int16_t x391 = -26;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x389|((x390<x391)|x392));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 33LL;
	uint32_t x394 = UINT32_MAX;
	uint64_t x395 = UINT64_MAX;
	uint32_t x396 = 110U;
	int64_t t98 = -11LL;

	t98 = (x393|((x394<x395)|x396));

	if (t98 != 111LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 13U;
	volatile int32_t x398 = INT32_MIN;
	static int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MAX;
	static volatile int32_t t99 = 274575681;

	t99 = (x397|((x398<x399)|x400));

	if (t99 != 32767) { NG(); } else { ; }
	
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

