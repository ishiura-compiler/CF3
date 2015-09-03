#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
uint64_t x15 = 22132770305LLU;
int16_t x25 = -7;
volatile int64_t t6 = -2LL;
int64_t x33 = INT64_MIN;
int32_t x43 = INT32_MIN;
volatile int8_t x47 = INT8_MIN;
volatile uint32_t t12 = 0U;
volatile uint32_t t13 = 10980671U;
uint16_t x69 = 29U;
volatile int16_t x70 = -1;
uint8_t x73 = 56U;
static uint16_t x74 = UINT16_MAX;
volatile int8_t x75 = INT8_MIN;
int64_t x79 = INT64_MIN;
volatile int64_t t19 = -49382117701053841LL;
uint8_t x85 = 23U;
uint32_t x86 = UINT32_MAX;
int32_t x87 = -1;
uint32_t t21 = 9522492U;
int32_t x91 = INT32_MIN;
int8_t x97 = INT8_MIN;
int8_t x102 = -1;
static uint64_t x128 = 4329552753553485101LLU;
static uint32_t t32 = 257596U;
static int32_t x143 = -1;
static int32_t x146 = -1;
int32_t x152 = -42837653;
volatile uint16_t x153 = 11853U;
uint64_t x154 = UINT64_MAX;
uint16_t x157 = 1U;
static int32_t x164 = INT32_MIN;
int16_t x167 = INT16_MIN;
uint8_t x169 = 1U;
int8_t x171 = 1;
uint16_t x172 = UINT16_MAX;
static uint16_t x175 = UINT16_MAX;
uint16_t x176 = 3131U;
uint32_t x179 = 162877168U;
volatile uint8_t x189 = UINT8_MAX;
static int16_t x191 = -1;
volatile uint16_t x193 = 15487U;
uint16_t x197 = UINT16_MAX;
uint16_t x198 = UINT16_MAX;
int8_t x203 = -1;
int64_t x204 = INT64_MIN;
int32_t x214 = INT32_MIN;
uint8_t x215 = 51U;
volatile uint64_t t59 = 141301538LLU;
static volatile int32_t t60 = 11286811;
volatile int16_t x247 = -1;
uint64_t t61 = 4262080856327159090LLU;
int64_t x255 = INT64_MIN;
int64_t x273 = INT64_MIN;
uint8_t x279 = UINT8_MAX;
int16_t x281 = INT16_MIN;
int16_t x282 = -56;
volatile uint64_t t70 = 42077286436LLU;
static int64_t x288 = -1LL;
static uint8_t x290 = UINT8_MAX;
static int16_t x291 = 4521;
volatile uint16_t x300 = 37U;
static int32_t t74 = 27;
volatile uint32_t x309 = 521557344U;
int16_t x310 = INT16_MIN;
volatile int64_t t77 = -475562891523LL;
volatile uint8_t x320 = 10U;
uint32_t t79 = 211U;
int16_t x321 = INT16_MIN;
uint64_t x323 = 4123LLU;
volatile int16_t x332 = 608;
int32_t t82 = 264311152;
uint64_t x333 = UINT64_MAX;
uint32_t x334 = 7614312U;
static uint32_t x343 = 171833673U;
int64_t x351 = INT64_MIN;
static volatile int16_t x356 = INT16_MAX;
volatile int32_t t88 = 178165216;
int16_t x359 = -1;
volatile uint64_t t89 = 249235827LLU;
volatile int8_t x363 = -17;
int64_t t91 = 1669779819199273LL;
uint64_t x370 = 14134LLU;
volatile uint64_t t92 = 111LLU;
static uint16_t x373 = 250U;
static int64_t x374 = -1LL;
int16_t x377 = INT16_MIN;
int64_t x385 = -1031LL;
static uint8_t x386 = UINT8_MAX;
uint16_t x388 = 14U;
static int16_t x391 = INT16_MIN;
volatile uint8_t x398 = UINT8_MAX;


void f0(void) {
	uint8_t x1 = 20U;
	int32_t x2 = INT32_MAX;
	int64_t x3 = INT64_MIN;
	volatile uint16_t x4 = 63U;
	volatile int64_t t0 = -4868102298802240LL;

	t0 = ((x1^x2)%(x3|x4));

	if (t0 != 2147483627LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int16_t x7 = -5774;
	uint8_t x8 = UINT8_MAX;
	volatile uint32_t t1 = 410U;

	t1 = ((x5^x6)%(x7|x8));

	if (t1 != 32767U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 486099869728LLU;
	uint64_t x10 = UINT64_MAX;
	volatile int8_t x11 = 0;
	static volatile uint64_t x12 = UINT64_MAX;
	static uint64_t t2 = 100LLU;

	t2 = ((x9^x10)%(x11|x12));

	if (t2 != 18446743587609681887LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	int64_t x14 = 98275429450LL;
	static uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t3 = 563402466648167564LLU;

	t3 = ((x13^x14)%(x15|x16));

	if (t3 != 98275488693LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x17 = INT64_MAX;
	volatile int64_t x18 = INT64_MAX;
	int32_t x19 = INT32_MAX;
	static volatile int8_t x20 = -1;
	volatile int64_t t4 = 1LL;

	t4 = ((x17^x18)%(x19|x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 7U;
	int32_t x22 = 2447969;
	static int8_t x23 = -1;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -347701661;

	t5 = ((x21^x22)%(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MAX;
	volatile uint16_t x27 = 24U;
	volatile int16_t x28 = -1;

	t6 = ((x25^x26)%(x27|x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	static volatile int8_t x30 = INT8_MAX;
	int64_t x31 = -1LL;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 5178629857327971LL;

	t7 = ((x29^x30)%(x31|x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x34 = INT64_MIN;
	volatile int8_t x35 = INT8_MIN;
	static volatile int64_t x36 = INT64_MIN;
	volatile int64_t t8 = -52468LL;

	t8 = ((x33^x34)%(x35|x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 2805LL;
	int64_t x38 = 93277875LL;
	int32_t x39 = INT32_MIN;
	volatile int16_t x40 = INT16_MIN;
	int64_t t9 = 990342464145071084LL;

	t9 = ((x37^x38)%(x39|x40));

	if (t9 != 17478LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	static uint32_t x42 = 47950U;
	uint64_t x44 = 689346935485LLU;
	static uint64_t t10 = 1973296820LLU;

	t10 = ((x41^x42)%(x43|x44));

	if (t10 != 48049LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 26423854LLU;
	int8_t x46 = -3;
	int8_t x48 = INT8_MAX;
	volatile uint64_t t11 = 4177LLU;

	t11 = ((x45^x46)%(x47|x48));

	if (t11 != 18446744073683127763LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	uint32_t x50 = UINT32_MAX;
	static int32_t x51 = -1;
	uint32_t x52 = UINT32_MAX;

	t12 = ((x49^x50)%(x51|x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	volatile uint32_t x54 = 29687U;
	uint32_t x55 = 193217277U;
	int32_t x56 = INT32_MIN;

	t13 = ((x53^x54)%(x55|x56));

	if (t13 != 29576U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 12U;
	int32_t x58 = 118;
	volatile int32_t x59 = -1;
	static volatile int8_t x60 = -1;
	int32_t t14 = 14136;

	t14 = ((x57^x58)%(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint64_t x62 = 624508LLU;
	int8_t x63 = INT8_MIN;
	static volatile int8_t x64 = -1;
	volatile uint64_t t15 = 46277LLU;

	t15 = ((x61^x62)%(x63|x64));

	if (t15 != 18446744073708898172LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	static uint8_t x66 = UINT8_MAX;
	static int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MIN;
	uint64_t t16 = 279580091054LLU;

	t16 = ((x65^x66)%(x67|x68));

	if (t16 != 2147483392LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;
	static volatile int64_t t17 = 192459855754715196LL;

	t17 = ((x69^x70)%(x71|x72));

	if (t17 != -30LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x76 = INT64_MAX;
	int64_t t18 = 991009821173225743LL;

	t18 = ((x73^x74)%(x75|x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint16_t x78 = 2U;
	int64_t x80 = INT64_MIN;

	t19 = ((x77^x78)%(x79|x80));

	if (t19 != -2147483646LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	int64_t x83 = 424LL;
	int64_t x84 = -456417LL;
	volatile uint64_t t20 = 178557LLU;

	t20 = ((x81^x82)%(x83|x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x88 = 0;

	t21 = ((x85^x86)%(x87|x88));

	if (t21 != 4294967272U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	uint32_t x90 = 50430U;
	int16_t x92 = -1;
	int64_t t22 = -486LL;

	t22 = ((x89^x90)%(x91|x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = 2684U;
	int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	volatile uint8_t x96 = 4U;
	static volatile int64_t t23 = -12LL;

	t23 = ((x93^x94)%(x95|x96));

	if (t23 != -2147480964LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MAX;
	uint32_t x99 = 161U;
	uint16_t x100 = UINT16_MAX;
	uint32_t t24 = 41U;

	t24 = ((x97^x98)%(x99|x100));

	if (t24 != 32895U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	uint32_t x103 = 2614190U;
	int32_t x104 = INT32_MIN;
	volatile uint32_t t25 = 216659894U;

	t25 = ((x101^x102)%(x103|x104));

	if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 4U;
	int64_t x106 = -1LL;
	int8_t x107 = INT8_MIN;
	uint32_t x108 = UINT32_MAX;
	static int64_t t26 = 266606495022086LL;

	t26 = ((x105^x106)%(x107|x108));

	if (t26 != -5LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	static int64_t x110 = -975LL;
	int32_t x111 = INT32_MIN;
	static volatile int32_t x112 = -1317658;
	int64_t t27 = 61163LL;

	t27 = ((x109^x110)%(x111|x112));

	if (t27 != 974LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = INT16_MIN;
	int64_t x115 = 6486822259LL;
	int8_t x116 = 5;
	volatile int64_t t28 = -45LL;

	t28 = ((x113^x114)%(x115|x116));

	if (t28 != 2147450880LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x117 = INT64_MIN;
	uint32_t x118 = 38401U;
	int64_t x119 = -8688218594LL;
	volatile int16_t x120 = INT16_MAX;
	static volatile int64_t t29 = 1LL;

	t29 = ((x117^x118)%(x119|x120));

	if (t29 != -5312822082LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -31;
	int8_t x122 = -18;
	static int16_t x123 = INT16_MIN;
	int64_t x124 = -1412640148678LL;
	volatile int64_t t30 = 1084691722445389398LL;

	t30 = ((x121^x122)%(x123|x124));

	if (t30 != 15LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	int32_t x126 = -17482075;
	volatile uint8_t x127 = 80U;
	static volatile uint64_t t31 = 2227488150439477225LLU;

	t31 = ((x125^x126)%(x127|x128));

	if (t31 != 2130001573LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = UINT32_MAX;
	int16_t x130 = 7;
	volatile int32_t x131 = -99383;
	int32_t x132 = INT32_MIN;

	t32 = ((x129^x130)%(x131|x132));

	if (t32 != 99375U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 19U;
	static uint64_t x134 = UINT64_MAX;
	int64_t x135 = 26057751LL;
	int16_t x136 = -1;
	static volatile uint64_t t33 = 885197527572952LLU;

	t33 = ((x133^x134)%(x135|x136));

	if (t33 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MAX;
	static int64_t x138 = -1LL;
	uint8_t x139 = 2U;
	volatile int16_t x140 = INT16_MAX;
	int64_t t34 = 52100212756161008LL;

	t34 = ((x137^x138)%(x139|x140));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 3843042LL;
	static uint8_t x142 = 0U;
	static volatile int64_t x144 = 5918287LL;
	int64_t t35 = -2LL;

	t35 = ((x141^x142)%(x143|x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	int8_t x147 = INT8_MIN;
	volatile uint16_t x148 = 25U;
	volatile int32_t t36 = -1020;

	t36 = ((x145^x146)%(x147|x148));

	if (t36 != -50) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	uint16_t x150 = 496U;
	uint8_t x151 = UINT8_MAX;
	static int64_t t37 = 4LL;

	t37 = ((x149^x150)%(x151|x152));

	if (t37 != -9359652LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x155 = -30;
	volatile int32_t x156 = INT32_MIN;
	volatile uint64_t t38 = 995733496LLU;

	t38 = ((x153^x154)%(x155|x156));

	if (t38 != 18446744073709539762LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = 8614843952286924026LLU;
	int16_t x159 = -1;
	uint8_t x160 = UINT8_MAX;
	uint64_t t39 = 2470367452290604LLU;

	t39 = ((x157^x158)%(x159|x160));

	if (t39 != 8614843952286924027LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = INT64_MIN;
	static volatile uint64_t t40 = 69LLU;

	t40 = ((x161^x162)%(x163|x164));

	if (t40 != 2147483392LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 8501;
	int8_t x166 = 13;
	uint64_t x168 = 0LLU;
	static uint64_t t41 = 5641364844LLU;

	t41 = ((x165^x166)%(x167|x168));

	if (t41 != 8504LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -1;
	volatile int32_t t42 = 4;

	t42 = ((x169^x170)%(x171|x172));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int32_t x174 = INT32_MIN;
	volatile int32_t t43 = 1611;

	t43 = ((x173^x174)%(x175|x176));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	uint16_t x178 = 28U;
	static uint8_t x180 = 116U;
	int64_t t44 = -1256499LL;

	t44 = ((x177^x178)%(x179|x180));

	if (t44 != 79342119LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = INT64_MIN;
	int32_t x183 = -4808443;
	static int16_t x184 = -1;
	int64_t t45 = 58577762650332LL;

	t45 = ((x181^x182)%(x183|x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -1;
	static int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	int8_t x188 = 1;
	volatile int64_t t46 = -259496LL;

	t46 = ((x185^x186)%(x187|x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x190 = -1LL;
	volatile int64_t x192 = INT64_MAX;
	volatile int64_t t47 = -8LL;

	t47 = ((x189^x190)%(x191|x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x194 = UINT8_MAX;
	uint16_t x195 = 14U;
	volatile int64_t x196 = INT64_MIN;
	int64_t t48 = -204754593LL;

	t48 = ((x193^x194)%(x195|x196));

	if (t48 != 15488LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x199 = -1;
	uint64_t x200 = UINT64_MAX;
	static uint64_t t49 = 3302122LLU;

	t49 = ((x197^x198)%(x199|x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = -384360LL;
	volatile int32_t x202 = INT32_MAX;
	int64_t t50 = 33275759LL;

	t50 = ((x201^x202)%(x203|x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MIN;
	volatile int16_t x206 = INT16_MIN;
	static volatile int64_t x207 = -3635448465805503427LL;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t51 = 3745107789672LLU;

	t51 = ((x205^x206)%(x207|x208));

	if (t51 != 32640LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MIN;
	uint64_t x211 = 46820125489LLU;
	static int8_t x212 = INT8_MIN;
	volatile uint64_t t52 = 31411826469LLU;

	t52 = ((x209^x210)%(x211|x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MAX;
	uint32_t x216 = 1811U;
	volatile uint32_t t53 = 136816366U;

	t53 = ((x213^x214)%(x215|x216));

	if (t53 != 1211U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	volatile int8_t x218 = -1;
	uint8_t x219 = UINT8_MAX;
	uint32_t x220 = 236390337U;
	static uint32_t t54 = 194141747U;

	t54 = ((x217^x218)%(x219|x220));

	if (t54 != 32767U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	volatile int64_t x223 = INT64_MAX;
	int64_t x224 = INT64_MIN;
	static int64_t t55 = -1129207489128816766LL;

	t55 = ((x221^x222)%(x223|x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = 16071;
	uint64_t x226 = 912783920054LLU;
	int32_t x227 = -58053348;
	uint64_t x228 = 1556LLU;
	uint64_t t56 = 3691273014130085LLU;

	t56 = ((x225^x226)%(x227|x228));

	if (t56 != 912783930737LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = 240030U;
	static uint32_t x230 = 33U;
	uint64_t x231 = 49015628283370790LLU;
	volatile int16_t x232 = INT16_MAX;
	volatile uint64_t t57 = 201239007099LLU;

	t57 = ((x229^x230)%(x231|x232));

	if (t57 != 240063LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = UINT64_MAX;
	uint64_t x234 = UINT64_MAX;
	int16_t x235 = INT16_MIN;
	int8_t x236 = 39;
	uint64_t t58 = 92941815408222LLU;

	t58 = ((x233^x234)%(x235|x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MIN;
	volatile int8_t x238 = -36;
	int16_t x239 = -1;
	volatile uint64_t x240 = 54284970118096232LLU;

	t59 = ((x237^x238)%(x239|x240));

	if (t59 != 2147483612LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = 2U;
	int16_t x242 = -3;
	int16_t x243 = INT16_MAX;
	static int8_t x244 = INT8_MAX;

	t60 = ((x241^x242)%(x243|x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 12U;
	volatile uint64_t x246 = 119510897601LLU;
	int16_t x248 = INT16_MAX;

	t61 = ((x245^x246)%(x247|x248));

	if (t61 != 119510897613LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -1;
	int32_t x250 = -1;
	static volatile uint8_t x251 = 106U;
	static int16_t x252 = INT16_MIN;
	int32_t t62 = 30542987;

	t62 = ((x249^x250)%(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	volatile int16_t x254 = -9;
	static int32_t x256 = INT32_MIN;
	int64_t t63 = -193812239LL;

	t63 = ((x253^x254)%(x255|x256));

	if (t63 != 8LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	int8_t x259 = -6;
	static uint8_t x260 = 22U;
	volatile int32_t t64 = 37;

	t64 = ((x257^x258)%(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = 250121493341093202LL;
	volatile uint8_t x262 = UINT8_MAX;
	int32_t x263 = -1;
	int16_t x264 = 282;
	int64_t t65 = 7953285865125LL;

	t65 = ((x261^x262)%(x263|x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = -32;
	volatile int32_t x266 = INT32_MAX;
	int8_t x267 = -1;
	volatile int64_t x268 = -1LL;
	int64_t t66 = 575351299LL;

	t66 = ((x265^x266)%(x267|x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1618;
	int16_t x270 = -424;
	volatile uint8_t x271 = 57U;
	volatile int16_t x272 = 321;
	static int32_t t67 = -538086;

	t67 = ((x269^x270)%(x271|x272));

	if (t67 != 153) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x274 = -1;
	static int32_t x275 = INT32_MIN;
	static int32_t x276 = -44836804;
	int64_t t68 = 125042959116855LL;

	t68 = ((x273^x274)%(x275|x276));

	if (t68 != 29299823LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	uint32_t x278 = UINT32_MAX;
	uint16_t x280 = 4U;
	static volatile int64_t t69 = -866512448LL;

	t69 = ((x277^x278)%(x279|x280));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x283 = UINT64_MAX;
	int64_t x284 = -1LL;

	t70 = ((x281^x282)%(x283|x284));

	if (t70 != 32712LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 2U;
	uint64_t x286 = 1LLU;
	int32_t x287 = 936763;
	uint64_t t71 = 6331LLU;

	t71 = ((x285^x286)%(x287|x288));

	if (t71 != 3LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	volatile int8_t x292 = -1;
	volatile uint64_t t72 = 345133217666869LLU;

	t72 = ((x289^x290)%(x291|x292));

	if (t72 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MAX;
	int32_t x294 = 284173229;
	static int32_t x295 = INT32_MIN;
	int16_t x296 = 0;
	int32_t t73 = 754;

	t73 = ((x293^x294)%(x295|x296));

	if (t73 != 284187730) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x297 = 12U;
	int16_t x298 = INT16_MIN;
	static int32_t x299 = -749;

	t74 = ((x297^x298)%(x299|x300));

	if (t74 != -671) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 39;
	int8_t x302 = 0;
	uint32_t x303 = UINT32_MAX;
	static volatile int16_t x304 = 136;
	volatile uint32_t t75 = 139498393U;

	t75 = ((x301^x302)%(x303|x304));

	if (t75 != 39U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	static int8_t x306 = -1;
	uint16_t x307 = 1089U;
	volatile int8_t x308 = -1;
	static uint32_t t76 = 24795U;

	t76 = ((x305^x306)%(x307|x308));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x311 = -1;
	int64_t x312 = -32634174939760233LL;

	t77 = ((x309^x310)%(x311|x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 15456997U;
	int8_t x314 = 13;
	int32_t x315 = -1;
	uint16_t x316 = 192U;
	volatile uint32_t t78 = 14U;

	t78 = ((x313^x314)%(x315|x316));

	if (t78 != 15457000U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 19U;
	int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MAX;

	t79 = ((x317^x318)%(x319|x320));

	if (t79 != 21U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x322 = 6;
	int16_t x324 = INT16_MAX;
	volatile uint64_t t80 = 30680LLU;

	t80 = ((x321^x322)%(x323|x324));

	if (t80 != 21LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	uint64_t x326 = UINT64_MAX;
	uint64_t x327 = 1088672790LLU;
	uint16_t x328 = 35U;
	volatile uint64_t t81 = 1038777089LLU;

	t81 = ((x325^x326)%(x327|x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	static int32_t x330 = INT32_MAX;
	int32_t x331 = -1;

	t82 = ((x329^x330)%(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x335 = 2U;
	volatile int16_t x336 = INT16_MIN;
	volatile uint64_t t83 = 5845745877LLU;

	t83 = ((x333^x334)%(x335|x336));

	if (t83 != 18446744073701937303LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = -1;
	int8_t x338 = -48;
	volatile int32_t x339 = 3;
	int64_t x340 = -1LL;
	volatile int64_t t84 = 124373610LL;

	t84 = ((x337^x338)%(x339|x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = UINT64_MAX;
	int64_t x342 = 35070LL;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t85 = 16407796151879161LLU;

	t85 = ((x341^x342)%(x343|x344));

	if (t85 != 4294935195LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MAX;
	int32_t x346 = 4745137;
	int16_t x347 = INT16_MAX;
	volatile int32_t x348 = -1;
	int32_t t86 = -2;

	t86 = ((x345^x346)%(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	volatile int32_t x350 = INT32_MIN;
	int32_t x352 = -1;
	static int64_t t87 = -1670360792020530345LL;

	t87 = ((x349^x350)%(x351|x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = -1;
	volatile uint8_t x355 = 0U;

	t88 = ((x353^x354)%(x355|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 0U;
	volatile uint64_t x358 = 4349210LLU;
	int64_t x360 = INT64_MAX;

	t89 = ((x357^x358)%(x359|x360));

	if (t89 != 4349210LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = UINT32_MAX;
	volatile uint32_t x362 = 3558429U;
	volatile int64_t x364 = INT64_MAX;
	volatile int64_t t90 = 22142382614952LL;

	t90 = ((x361^x362)%(x363|x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -3093460531212784077LL;
	uint16_t x366 = 25U;
	static uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MAX;

	t91 = ((x365^x366)%(x367|x368));

	if (t91 != -3297722316LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x369 = INT64_MIN;
	uint16_t x371 = 885U;
	volatile int8_t x372 = -1;

	t92 = ((x369^x370)%(x371|x372));

	if (t92 != 9223372036854789942LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x375 = 0;
	volatile int64_t x376 = INT64_MAX;
	int64_t t93 = -281754701655341064LL;

	t93 = ((x373^x374)%(x375|x376));

	if (t93 != -251LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x378 = 194168U;
	uint32_t x379 = 661U;
	static int8_t x380 = INT8_MIN;
	volatile uint32_t t94 = 879U;

	t94 = ((x377^x378)%(x379|x380));

	if (t94 != 4294801016U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MAX;
	int64_t x382 = INT64_MIN;
	int8_t x383 = -1;
	int32_t x384 = INT32_MIN;
	volatile int64_t t95 = -216799507619685LL;

	t95 = ((x381^x382)%(x383|x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x387 = -3;
	int64_t t96 = -25980636253LL;

	t96 = ((x385^x386)%(x387|x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	int8_t x390 = -1;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t97 = 194971LLU;

	t97 = ((x389^x390)%(x391|x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1032592LL;
	int32_t x394 = INT32_MIN;
	int64_t x395 = -1LL;
	static uint8_t x396 = 4U;
	int64_t t98 = 4724530775LL;

	t98 = ((x393^x394)%(x395|x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = 0;
	static uint64_t x399 = 7856281382218LLU;
	uint8_t x400 = 104U;
	uint64_t t99 = 3206567066555469LLU;

	t99 = ((x397^x398)%(x399|x400));

	if (t99 != 255LLU) { NG(); } else { ; }
	
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

