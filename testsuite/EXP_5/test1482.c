#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = -1LL;
volatile uint16_t x13 = 2U;
int8_t x18 = 59;
uint8_t x22 = 6U;
static uint32_t x31 = 3U;
int16_t x34 = INT16_MIN;
int64_t x36 = -1LL;
int32_t x37 = INT32_MIN;
static uint16_t x45 = 2U;
volatile uint8_t x50 = 5U;
int8_t x51 = INT8_MAX;
int8_t x54 = INT8_MIN;
static volatile uint32_t x56 = 5977206U;
static volatile uint64_t x58 = 857962LLU;
volatile uint32_t t14 = 508U;
int32_t x61 = -3651;
static int64_t x62 = INT64_MIN;
uint64_t x63 = UINT64_MAX;
int16_t x64 = INT16_MAX;
volatile uint32_t x67 = 5748528U;
int32_t t16 = 2;
int64_t x79 = INT64_MIN;
volatile uint32_t x86 = UINT32_MAX;
uint32_t x87 = 148U;
int32_t x88 = -1;
int16_t x95 = -1;
static volatile uint64_t x96 = UINT64_MAX;
int16_t x101 = 384;
int8_t x102 = INT8_MIN;
int64_t x103 = -1LL;
static int32_t x118 = INT32_MIN;
int8_t x124 = -1;
volatile uint32_t x134 = UINT32_MAX;
volatile uint64_t x139 = 4527977893053363565LLU;
static int64_t x141 = INT64_MAX;
volatile int64_t t35 = 2101477895215802334LL;
volatile uint32_t x147 = 467837U;
volatile int32_t t37 = -6440502;
static uint16_t x154 = 15U;
volatile int32_t t38 = 20835414;
int8_t x160 = INT8_MIN;
static volatile int32_t t39 = 2305659;
int16_t x163 = 1298;
static uint64_t x166 = UINT64_MAX;
int16_t x168 = -238;
static volatile uint64_t t41 = UINT64_MAX;
static volatile int32_t t42 = 26;
volatile int16_t x173 = 2;
uint32_t x178 = 1827027U;
int64_t x181 = -1LL;
volatile int64_t t45 = 10LL;
uint64_t x185 = UINT64_MAX;
int8_t x190 = INT8_MIN;
int16_t x203 = INT16_MIN;
int32_t t50 = -44923;
static uint8_t x206 = 22U;
int64_t x210 = INT64_MIN;
volatile uint64_t x214 = 23581641068244935LLU;
int64_t x222 = -57211578758801LL;
uint32_t x225 = UINT32_MAX;
static uint64_t x227 = 5LLU;
int8_t x228 = 0;
int16_t x230 = INT16_MAX;
int64_t x236 = -68706LL;
volatile int32_t x241 = -1;
int32_t x244 = 979765802;
volatile uint64_t t61 = 574649010761644LLU;
uint8_t x252 = UINT8_MAX;
volatile int64_t x253 = 1LL;
static int32_t x255 = INT32_MAX;
uint32_t x256 = UINT32_MAX;
int64_t t63 = -27673285LL;
int32_t x261 = INT32_MIN;
volatile uint64_t x262 = UINT64_MAX;
int16_t x267 = INT16_MIN;
int64_t x274 = -1LL;
int32_t t70 = 3;
static int8_t x286 = INT8_MIN;
int16_t x288 = -1;
volatile int32_t t72 = 3;
static int8_t x295 = -20;
int32_t t74 = -441;
static int32_t t77 = 2657490;
static uint16_t x313 = 31754U;
volatile int32_t x314 = INT32_MAX;
int32_t x318 = INT32_MIN;
volatile uint8_t x319 = UINT8_MAX;
int64_t x320 = -3252895LL;
volatile uint64_t t79 = 5774395LLU;
uint8_t x322 = UINT8_MAX;
uint16_t x326 = UINT16_MAX;
int8_t x329 = INT8_MAX;
static uint32_t x332 = UINT32_MAX;
uint64_t x339 = 77126LLU;
int32_t x340 = INT32_MAX;
int64_t x346 = 1878283417930115LL;
volatile int64_t x347 = -167168092146LL;
int32_t t86 = 3321065;
int8_t x358 = 3;
int32_t t89 = -387291;
int16_t x371 = -4;
volatile uint64_t t92 = UINT64_MAX;
static uint8_t x383 = 30U;
static uint16_t x385 = 2576U;
uint32_t x386 = 47376U;
int64_t x387 = INT64_MIN;
uint32_t x389 = UINT32_MAX;
int64_t x391 = -1LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = -1;
	int64_t x4 = -32824286LL;
	int32_t t0 = INT32_MIN;

	t0 = (x1^((x2<x3)<=x4));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int64_t x6 = 0LL;
	static int64_t x7 = INT64_MAX;
	int32_t x8 = 8;
	volatile int64_t t1 = 5860LL;

	t1 = (x5^((x6<x7)<=x8));

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = INT8_MIN;
	uint16_t x11 = 1U;
	int64_t x12 = -2931988350795824430LL;
	volatile int64_t t2 = 103015190594845LL;

	t2 = (x9^((x10<x11)<=x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	static int8_t x15 = -19;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 57;

	t3 = (x13^((x14<x15)<=x16));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	volatile int32_t x19 = 237688;
	int8_t x20 = 4;
	int32_t t4 = -381920;

	t4 = (x17^((x18<x19)<=x20));

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 56;
	static volatile uint16_t x23 = 240U;
	static uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = 16271001;

	t5 = (x21^((x22<x23)<=x24));

	if (t5 != 57) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	volatile uint16_t x26 = 832U;
	int32_t x27 = INT32_MIN;
	uint8_t x28 = 9U;
	static int32_t t6 = 7751;

	t6 = (x25^((x26<x27)<=x28));

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 7466223U;
	int64_t x30 = INT64_MIN;
	static int32_t x32 = INT32_MIN;
	static uint32_t t7 = 86605675U;

	t7 = (x29^((x30<x31)<=x32));

	if (t7 != 7466223U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = 4;
	static uint16_t x35 = UINT16_MAX;
	int32_t t8 = -1295;

	t8 = (x33^((x34<x35)<=x36));

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x38 = 1U;
	int8_t x39 = 3;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = 598511065;

	t9 = (x37^((x38<x39)<=x40));

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	volatile int16_t x42 = INT16_MIN;
	int64_t x43 = INT64_MIN;
	int64_t x44 = INT64_MAX;
	int32_t t10 = 114827;

	t10 = (x41^((x42<x43)<=x44));

	if (t10 != 32766) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = 11138864018LL;
	int16_t x47 = -1;
	static int8_t x48 = 1;
	volatile int32_t t11 = -3977;

	t11 = (x45^((x46<x47)<=x48));

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -518851077;

	t12 = (x49^((x50<x51)<=x52));

	if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile int32_t x55 = INT32_MIN;
	static volatile int32_t t13 = 51137702;

	t13 = (x53^((x54<x55)<=x56));

	if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 29076043U;
	int32_t x59 = INT32_MAX;
	uint32_t x60 = UINT32_MAX;

	t14 = (x57^((x58<x59)<=x60));

	if (t14 != 29076042U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t t15 = -31;

	t15 = (x61^((x62<x63)<=x64));

	if (t15 != -3652) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	int8_t x66 = -32;
	int64_t x68 = -1LL;

	t16 = (x65^((x66<x67)<=x68));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -694;
	int16_t x70 = 6;
	int8_t x71 = 0;
	volatile int8_t x72 = -1;
	int32_t t17 = -1;

	t17 = (x69^((x70<x71)<=x72));

	if (t17 != -694) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	volatile int64_t x74 = INT64_MAX;
	static int16_t x75 = -1;
	static int16_t x76 = 2;
	volatile uint32_t t18 = 8889U;

	t18 = (x73^((x74<x75)<=x76));

	if (t18 != 4294967294U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = 13;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 29846235;

	t19 = (x77^((x78<x79)<=x80));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	uint32_t x82 = UINT32_MAX;
	uint32_t x83 = 949458U;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -4;

	t20 = (x81^((x82<x83)<=x84));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	int32_t t21 = -82568;

	t21 = (x85^((x86<x87)<=x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -2408499134113067892LL;
	int32_t x90 = INT32_MAX;
	int32_t x91 = INT32_MAX;
	int8_t x92 = INT8_MIN;
	static volatile int64_t t22 = -509567LL;

	t22 = (x89^((x90<x91)<=x92));

	if (t22 != -2408499134113067892LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int32_t x94 = INT32_MIN;
	volatile int32_t t23 = -428;

	t23 = (x93^((x94<x95)<=x96));

	if (t23 != 65534) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int32_t x98 = 496096650;
	uint8_t x99 = 111U;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = -41;

	t24 = (x97^((x98<x99)<=x100));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x104 = 14387503178125LLU;
	static int32_t t25 = 1;

	t25 = (x101^((x102<x103)<=x104));

	if (t25 != 385) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	volatile uint8_t x106 = 27U;
	static uint16_t x107 = UINT16_MAX;
	uint8_t x108 = 1U;
	int32_t t26 = 10511;

	t26 = (x105^((x106<x107)<=x108));

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 6U;
	volatile uint32_t x110 = 1301413U;
	int16_t x111 = -3;
	uint8_t x112 = UINT8_MAX;
	int32_t t27 = -113642;

	t27 = (x109^((x110<x111)<=x112));

	if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 53225618303755LLU;
	int32_t x114 = -1;
	static int8_t x115 = INT8_MIN;
	int32_t x116 = -1;
	uint64_t t28 = 7039465874209310693LLU;

	t28 = (x113^((x114<x115)<=x116));

	if (t28 != 53225618303755LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	static uint64_t x119 = UINT64_MAX;
	uint8_t x120 = 34U;
	static int64_t t29 = -24452255951LL;

	t29 = (x117^((x118<x119)<=x120));

	if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 110218581U;
	int64_t x122 = 22032LL;
	int32_t x123 = INT32_MIN;
	volatile uint32_t t30 = 11598U;

	t30 = (x121^((x122<x123)<=x124));

	if (t30 != 110218581U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int64_t x126 = INT64_MAX;
	static int16_t x127 = 1;
	int16_t x128 = INT16_MAX;
	int32_t t31 = 104389;

	t31 = (x125^((x126<x127)<=x128));

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MIN;
	static int8_t x131 = -1;
	int64_t x132 = INT64_MIN;
	volatile int32_t t32 = INT32_MIN;

	t32 = (x129^((x130<x131)<=x132));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int16_t x135 = INT16_MAX;
	static volatile uint32_t x136 = 4366U;
	static volatile int64_t t33 = 71562608558914881LL;

	t33 = (x133^((x134<x135)<=x136));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int64_t x138 = INT64_MIN;
	int64_t x140 = 3732435LL;
	static int32_t t34 = -278510424;

	t34 = (x137^((x138<x139)<=x140));

	if (t34 != 65534) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x142 = INT64_MIN;
	int32_t x143 = INT32_MIN;
	uint64_t x144 = UINT64_MAX;

	t35 = (x141^((x142<x143)<=x144));

	if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	static volatile uint8_t x146 = 1U;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = -6;

	t36 = (x145^((x146<x147)<=x148));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	int32_t x150 = 386;
	static uint8_t x151 = UINT8_MAX;
	int32_t x152 = INT32_MIN;

	t37 = (x149^((x150<x151)<=x152));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	static int64_t x155 = -60159090247LL;
	volatile uint32_t x156 = 2583145U;

	t38 = (x153^((x154<x155)<=x156));

	if (t38 != 2147483646) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = 35933;
	uint8_t x158 = 0U;
	uint16_t x159 = 2002U;

	t39 = (x157^((x158<x159)<=x160));

	if (t39 != 35933) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	static uint64_t x162 = UINT64_MAX;
	int32_t x164 = -530295;
	static int32_t t40 = 446;

	t40 = (x161^((x162<x163)<=x164));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	uint32_t x167 = 41439U;

	t41 = (x165^((x166<x167)<=x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 13U;
	uint32_t x170 = 490434U;
	volatile int8_t x171 = INT8_MIN;
	uint8_t x172 = 1U;

	t42 = (x169^((x170<x171)<=x172));

	if (t42 != 12) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = 113U;
	int8_t x175 = INT8_MAX;
	static uint32_t x176 = UINT32_MAX;
	static int32_t t43 = -1;

	t43 = (x173^((x174<x175)<=x176));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 54U;
	volatile int64_t x179 = -108055LL;
	uint64_t x180 = UINT64_MAX;
	uint32_t t44 = 143274U;

	t44 = (x177^((x178<x179)<=x180));

	if (t44 != 55U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x182 = UINT16_MAX;
	int16_t x183 = 1;
	static int16_t x184 = INT16_MIN;

	t45 = (x181^((x182<x183)<=x184));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = INT16_MAX;
	volatile uint32_t x187 = UINT32_MAX;
	int64_t x188 = -1LL;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x185^((x186<x187)<=x188));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 6;
	uint16_t x191 = UINT16_MAX;
	volatile uint32_t x192 = UINT32_MAX;
	volatile int32_t t47 = 23473;

	t47 = (x189^((x190<x191)<=x192));

	if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = 2570U;
	volatile int8_t x194 = -13;
	int8_t x195 = INT8_MIN;
	volatile int32_t x196 = 0;
	int32_t t48 = 31;

	t48 = (x193^((x194<x195)<=x196));

	if (t48 != 2571) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	int64_t x198 = INT64_MIN;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int64_t t49 = -13469LL;

	t49 = (x197^((x198<x199)<=x200));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	uint64_t x202 = UINT64_MAX;
	uint16_t x204 = UINT16_MAX;

	t50 = (x201^((x202<x203)<=x204));

	if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = -1;
	volatile int32_t t51 = -26923147;

	t51 = (x205^((x206<x207)<=x208));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	int32_t x211 = -1;
	int8_t x212 = INT8_MIN;
	static int32_t t52 = 127999;

	t52 = (x209^((x210<x211)<=x212));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 2204651349298476LL;
	volatile int8_t x215 = -18;
	volatile uint32_t x216 = 1414395U;
	int64_t t53 = -3625542466228541LL;

	t53 = (x213^((x214<x215)<=x216));

	if (t53 != 2204651349298477LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	static int32_t x218 = INT32_MIN;
	int16_t x219 = INT16_MAX;
	int32_t x220 = -1;
	static volatile int32_t t54 = -104921866;

	t54 = (x217^((x218<x219)<=x220));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 7330U;
	int32_t x223 = INT32_MAX;
	int16_t x224 = 0;
	int32_t t55 = -196842;

	t55 = (x221^((x222<x223)<=x224));

	if (t55 != 7330) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = -5632;
	uint32_t t56 = 51290U;

	t56 = (x225^((x226<x227)<=x228));

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	uint8_t x231 = UINT8_MAX;
	static int32_t x232 = -1;
	int32_t t57 = INT32_MIN;

	t57 = (x229^((x230<x231)<=x232));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	static int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MAX;
	volatile int32_t t58 = INT32_MAX;

	t58 = (x233^((x234<x235)<=x236));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = -1;
	static int32_t x238 = -1;
	volatile uint64_t x239 = UINT64_MAX;
	volatile int8_t x240 = INT8_MAX;
	int32_t t59 = 37195612;

	t59 = (x237^((x238<x239)<=x240));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = INT8_MIN;
	uint16_t x243 = 3U;
	volatile int32_t t60 = -119;

	t60 = (x241^((x242<x243)<=x244));

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = 207LLU;
	int16_t x246 = -419;
	volatile uint64_t x247 = UINT64_MAX;
	static uint8_t x248 = 6U;

	t61 = (x245^((x246<x247)<=x248));

	if (t61 != 206LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 3U;
	uint16_t x250 = UINT16_MAX;
	volatile uint64_t x251 = UINT64_MAX;
	volatile int32_t t62 = 1;

	t62 = (x249^((x250<x251)<=x252));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = 1;

	t63 = (x253^((x254<x255)<=x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	volatile uint8_t x259 = 80U;
	int8_t x260 = INT8_MIN;
	int32_t t64 = 58;

	t64 = (x257^((x258<x259)<=x260));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x263 = 1517767045396616307LLU;
	int64_t x264 = INT64_MIN;
	int32_t t65 = INT32_MIN;

	t65 = (x261^((x262<x263)<=x264));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	int8_t x266 = -1;
	static int16_t x268 = -1;
	int32_t t66 = -1098345;

	t66 = (x265^((x266<x267)<=x268));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MAX;
	static volatile uint16_t x270 = 0U;
	static int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MAX;
	volatile int32_t t67 = -29;

	t67 = (x269^((x270<x271)<=x272));

	if (t67 != 32766) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 19U;
	volatile int64_t x275 = 75128578660599340LL;
	int32_t x276 = -2204726;
	int32_t t68 = -3;

	t68 = (x273^((x274<x275)<=x276));

	if (t68 != 19) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int8_t x278 = INT8_MIN;
	uint64_t x279 = UINT64_MAX;
	static uint32_t x280 = 209714908U;
	uint32_t t69 = 1U;

	t69 = (x277^((x278<x279)<=x280));

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	int16_t x282 = INT16_MAX;
	volatile int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;

	t70 = (x281^((x282<x283)<=x284));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = 6;
	static volatile int8_t x287 = -1;
	static int32_t t71 = 77683503;

	t71 = (x285^((x286<x287)<=x288));

	if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = -1;
	int64_t x290 = INT64_MIN;
	static volatile int16_t x291 = -1;
	uint8_t x292 = 108U;

	t72 = (x289^((x290<x291)<=x292));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 21U;
	uint64_t x294 = 132020201340287LLU;
	int8_t x296 = 31;
	static volatile int32_t t73 = 8;

	t73 = (x293^((x294<x295)<=x296));

	if (t73 != 20) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = 625695062;
	volatile int8_t x298 = 1;
	static int8_t x299 = 1;
	int64_t x300 = INT64_MIN;

	t74 = (x297^((x298<x299)<=x300));

	if (t74 != 625695062) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 31LLU;
	volatile int64_t x302 = -1LL;
	static int32_t x303 = -1;
	static int8_t x304 = INT8_MAX;
	static volatile uint64_t t75 = 598298125586296977LLU;

	t75 = (x301^((x302<x303)<=x304));

	if (t75 != 30LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	uint64_t x306 = 47630534LLU;
	uint8_t x307 = 20U;
	static uint8_t x308 = 2U;
	uint32_t t76 = 1113U;

	t76 = (x305^((x306<x307)<=x308));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 18U;
	volatile int32_t x310 = INT32_MAX;
	uint64_t x311 = UINT64_MAX;
	uint16_t x312 = 2U;

	t77 = (x309^((x310<x311)<=x312));

	if (t77 != 19) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x315 = INT16_MIN;
	uint32_t x316 = UINT32_MAX;
	static volatile int32_t t78 = 3;

	t78 = (x313^((x314<x315)<=x316));

	if (t78 != 31755) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 139582095645989LLU;

	t79 = (x317^((x318<x319)<=x320));

	if (t79 != 139582095645989LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x321 = INT64_MIN;
	uint16_t x323 = UINT16_MAX;
	int32_t x324 = INT32_MIN;
	static volatile int64_t t80 = INT64_MIN;

	t80 = (x321^((x322<x323)<=x324));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	int32_t x327 = INT32_MIN;
	int64_t x328 = 5LL;
	int32_t t81 = 1;

	t81 = (x325^((x326<x327)<=x328));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = -1;
	int16_t x331 = INT16_MIN;
	volatile int32_t t82 = -72574035;

	t82 = (x329^((x330<x331)<=x332));

	if (t82 != 126) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 26794U;
	int8_t x334 = -1;
	static volatile int64_t x335 = 6186449635491LL;
	int32_t x336 = INT32_MIN;
	uint32_t t83 = 576641U;

	t83 = (x333^((x334<x335)<=x336));

	if (t83 != 26794U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 0;
	int64_t x338 = -1LL;
	volatile int32_t t84 = 1639878;

	t84 = (x337^((x338<x339)<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	uint8_t x342 = 0U;
	static uint8_t x343 = 0U;
	uint32_t x344 = 1480U;
	volatile int32_t t85 = 39688;

	t85 = (x341^((x342<x343)<=x344));

	if (t85 != 2147483646) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -28;
	uint8_t x348 = 17U;

	t86 = (x345^((x346<x347)<=x348));

	if (t86 != -27) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = 816LL;
	uint32_t x350 = UINT32_MAX;
	volatile int8_t x351 = INT8_MIN;
	static uint64_t x352 = 1239225564604553078LLU;
	static int64_t t87 = -1601643829392158LL;

	t87 = (x349^((x350<x351)<=x352));

	if (t87 != 817LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	volatile int8_t x355 = -8;
	uint16_t x356 = 1U;
	volatile int32_t t88 = -1851;

	t88 = (x353^((x354<x355)<=x356));

	if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	int8_t x359 = INT8_MAX;
	int64_t x360 = INT64_MIN;

	t89 = (x357^((x358<x359)<=x360));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint16_t x362 = UINT16_MAX;
	uint16_t x363 = 22U;
	static int32_t x364 = -69650;
	static int32_t t90 = 26;

	t90 = (x361^((x362<x363)<=x364));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = 5;
	int16_t x366 = 19;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -160422738;

	t91 = (x365^((x366<x367)<=x368));

	if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = UINT64_MAX;
	int32_t x370 = INT32_MIN;
	int8_t x372 = -1;

	t92 = (x369^((x370<x371)<=x372));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MAX;
	static int64_t x374 = INT64_MAX;
	volatile int8_t x375 = -1;
	volatile int64_t x376 = INT64_MIN;
	volatile int32_t t93 = 2477918;

	t93 = (x373^((x374<x375)<=x376));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 68U;
	int16_t x378 = -1;
	static int64_t x379 = INT64_MAX;
	int64_t x380 = INT64_MAX;
	int32_t t94 = -1;

	t94 = (x377^((x378<x379)<=x380));

	if (t94 != 69) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MAX;
	int16_t x382 = -126;
	int8_t x384 = -1;
	int32_t t95 = INT32_MAX;

	t95 = (x381^((x382<x383)<=x384));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x388 = 348286;
	static volatile int32_t t96 = 193;

	t96 = (x385^((x386<x387)<=x388));

	if (t96 != 2577) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = -37;
	static uint8_t x392 = UINT8_MAX;
	volatile uint32_t t97 = 117U;

	t97 = (x389^((x390<x391)<=x392));

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = -1LL;
	int16_t x394 = INT16_MIN;
	int16_t x395 = -1;
	int64_t x396 = INT64_MIN;
	int64_t t98 = 6578925LL;

	t98 = (x393^((x394<x395)<=x396));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x397 = -1;
	uint8_t x398 = UINT8_MAX;
	volatile int32_t x399 = INT32_MIN;
	uint32_t x400 = 1U;
	int32_t t99 = -13878302;

	t99 = (x397^((x398<x399)<=x400));

	if (t99 != -2) { NG(); } else { ; }
	
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

