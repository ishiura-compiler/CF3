#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 48967LL;
volatile int64_t t4 = 698576LL;
uint64_t x22 = UINT64_MAX;
int64_t x23 = -109094LL;
volatile uint64_t t5 = 17939LLU;
int32_t x38 = INT32_MIN;
int64_t x46 = -1LL;
int32_t x48 = -6134681;
static uint32_t t12 = 1U;
uint64_t x59 = 90LLU;
int16_t x60 = INT16_MIN;
static volatile int8_t x72 = -1;
static int8_t x73 = -19;
int8_t x76 = INT8_MAX;
volatile int32_t t17 = 171886;
int32_t x81 = -1;
uint16_t x82 = 238U;
volatile int32_t t19 = -314462827;
uint32_t x86 = 3838U;
uint64_t x87 = 76621558417428LLU;
int8_t x90 = INT8_MIN;
int64_t x111 = -1LL;
int16_t x112 = INT16_MIN;
int64_t t26 = -35LL;
int16_t x118 = -1;
volatile uint32_t t29 = 935523551U;
uint64_t x126 = 18LLU;
volatile uint64_t t30 = 13LLU;
int8_t x134 = INT8_MAX;
volatile uint16_t x137 = 34U;
int32_t x144 = 3;
int32_t x154 = INT32_MIN;
int64_t x159 = -1LL;
int64_t t38 = -217LL;
static int32_t x164 = INT32_MIN;
int8_t x166 = INT8_MIN;
static uint64_t x170 = UINT64_MAX;
static uint32_t x171 = 17473U;
uint32_t x172 = 321311714U;
int32_t x175 = INT32_MAX;
volatile uint32_t t42 = 1363332U;
int32_t x187 = 39;
int64_t x188 = INT64_MAX;
uint64_t t45 = 49828393470779385LLU;
uint64_t x190 = 54592057735499012LLU;
static uint64_t t46 = 1825265435121671470LLU;
static volatile uint64_t t47 = 56123318318766268LLU;
volatile uint64_t t48 = 51515943855269LLU;
int32_t x208 = INT32_MIN;
int32_t x222 = -1;
uint64_t t54 = 74515919222LLU;
volatile int32_t x227 = INT32_MIN;
static uint16_t x229 = 0U;
volatile uint32_t x232 = 31841885U;
int64_t x236 = INT64_MIN;
int32_t x238 = INT32_MIN;
volatile uint8_t x240 = 76U;
uint32_t x241 = UINT32_MAX;
uint32_t t59 = 64U;
int8_t x245 = -1;
int8_t x247 = -1;
volatile uint64_t x248 = UINT64_MAX;
int32_t x251 = INT32_MIN;
volatile int32_t x258 = 182963095;
int16_t x260 = INT16_MIN;
int32_t x263 = 18612622;
static int64_t x269 = -1LL;
static uint32_t x274 = UINT32_MAX;
int64_t x279 = -1LL;
int64_t x281 = -911590510275837LL;
uint16_t x287 = UINT16_MAX;
static int32_t t70 = -885752;
volatile int64_t t71 = 25498LL;
int8_t x296 = 0;
int32_t t73 = 1151603;
static uint8_t x318 = 1U;
static volatile uint64_t x321 = 244553725014238381LLU;
int32_t x326 = 86277380;
uint8_t x329 = UINT8_MAX;
int64_t x332 = INT64_MAX;
uint32_t x336 = 53U;
static uint8_t x339 = UINT8_MAX;
static volatile int8_t x344 = -30;
uint64_t x349 = 286194868198LLU;
uint8_t x352 = 1U;
uint64_t t85 = 15232LLU;
int8_t x361 = 0;
volatile int32_t x363 = INT32_MIN;
uint64_t x388 = 104593366859LLU;
volatile uint64_t t93 = 327449453205107702LLU;
static int32_t x406 = -1;


void f0(void) {
	int8_t x1 = -15;
	int8_t x3 = 58;
	int16_t x4 = INT16_MAX;
	static volatile int64_t t0 = 166830360LL;

	t0 = ((x1/x2)&(x3|x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int32_t x6 = 1056539;
	volatile uint32_t x7 = 1993U;
	uint8_t x8 = 34U;
	volatile uint32_t t1 = 1985U;

	t1 = ((x5/x6)&(x7|x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int64_t x10 = INT64_MAX;
	static int8_t x11 = INT8_MIN;
	static uint64_t x12 = 1893439046LLU;
	uint64_t t2 = 2189138085989LLU;

	t2 = ((x9/x10)&(x11|x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -45;
	uint8_t x14 = UINT8_MAX;
	volatile int8_t x15 = INT8_MIN;
	volatile int32_t x16 = -54099;
	volatile int32_t t3 = 82768105;

	t3 = ((x13/x14)&(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 440020221873133LL;
	uint8_t x18 = 1U;
	volatile int64_t x19 = -115470LL;
	uint8_t x20 = 3U;

	t4 = ((x17/x18)&(x19|x20));

	if (t4 != 440020221823201LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int8_t x24 = -1;

	t5 = ((x21/x22)&(x23|x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1721662888238954011LLU;
	int32_t x26 = -18915;
	static int64_t x27 = 2169859843940264812LL;
	int32_t x28 = 494058;
	uint64_t t6 = 318358754391LLU;

	t6 = ((x25/x26)&(x27|x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 2;
	int8_t x30 = INT8_MAX;
	uint32_t x31 = 779523U;
	uint64_t x32 = 10372865204233803LLU;
	volatile uint64_t t7 = 526LLU;

	t7 = ((x29/x30)&(x31|x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x33 = 43U;
	int64_t x34 = INT64_MAX;
	int16_t x35 = 1;
	int16_t x36 = 3;
	volatile int64_t t8 = -759308311LL;

	t8 = ((x33/x34)&(x35|x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 1002040178U;
	static int16_t x39 = INT16_MIN;
	volatile uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 536383U;

	t9 = ((x37/x38)&(x39|x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 54U;
	volatile int64_t x42 = INT64_MIN;
	int32_t x43 = 116;
	int16_t x44 = -6;
	volatile int64_t t10 = -1018863LL;

	t10 = ((x41/x42)&(x43|x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int16_t x47 = -1;
	volatile int64_t t11 = -353205645LL;

	t11 = ((x45/x46)&(x47|x48));

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 285585375U;
	int8_t x50 = -1;
	static uint32_t x51 = 127U;
	static int32_t x52 = INT32_MAX;

	t12 = ((x49/x50)&(x51|x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	int16_t x54 = INT16_MAX;
	int64_t x55 = -40320LL;
	int8_t x56 = INT8_MIN;
	static int64_t t13 = -941668970003999LL;

	t13 = ((x53/x54)&(x55|x56));

	if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MAX;
	int64_t x58 = INT64_MAX;
	uint64_t t14 = 54810183970573819LLU;

	t14 = ((x57/x58)&(x59|x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 65U;
	static int64_t x62 = 1709380517LL;
	int16_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	static volatile int64_t t15 = -392045602637247LL;

	t15 = ((x61/x62)&(x63|x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	volatile uint32_t x70 = 22109U;
	int16_t x71 = -1;
	static uint32_t t16 = 833464U;

	t16 = ((x69/x70)&(x71|x72));

	if (t16 != 97131U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = -1;
	int8_t x75 = INT8_MIN;

	t17 = ((x73/x74)&(x75|x76));

	if (t17 != 19) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -1;
	uint64_t x78 = 520985534562781452LLU;
	int8_t x79 = -25;
	volatile int64_t x80 = 2120049352981LL;
	volatile uint64_t t18 = 77LLU;

	t18 = ((x77/x78)&(x79|x80));

	if (t18 != 35LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x83 = 18517;
	int32_t x84 = -1;

	t19 = ((x81/x82)&(x83|x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	int16_t x88 = INT16_MAX;
	static volatile uint64_t t20 = 16304668796269337LLU;

	t20 = ((x85/x86)&(x87|x88));

	if (t20 != 70487LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x89 = UINT16_MAX;
	int64_t x91 = INT64_MAX;
	int8_t x92 = INT8_MIN;
	int64_t t21 = -2262400620074533LL;

	t21 = ((x89/x90)&(x91|x92));

	if (t21 != -511LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	int32_t x94 = -98;
	volatile int32_t x95 = -47668;
	volatile uint64_t x96 = 121859533085138490LLU;
	static volatile uint64_t t22 = 1637539261LLU;

	t22 = ((x93/x94)&(x95|x96));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x97 = -18744433049818476LL;
	int64_t x98 = INT64_MAX;
	int64_t x99 = INT64_MAX;
	volatile int32_t x100 = INT32_MIN;
	volatile int64_t t23 = -2LL;

	t23 = ((x97/x98)&(x99|x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	int8_t x102 = 1;
	int64_t x103 = INT64_MIN;
	uint64_t x104 = 1076992804LLU;
	uint64_t t24 = 4570524132774LLU;

	t24 = ((x101/x102)&(x103|x104));

	if (t24 != 9223372037931768612LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = 0;
	volatile int8_t x106 = INT8_MAX;
	static int32_t x107 = INT32_MIN;
	int8_t x108 = -26;
	int32_t t25 = 17169988;

	t25 = ((x105/x106)&(x107|x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = 2780683200611028341LL;
	int8_t x110 = INT8_MAX;

	t26 = ((x109/x110)&(x111|x112));

	if (t26 != 21895143311897860LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	volatile uint16_t x114 = 9U;
	uint32_t x115 = 6031855U;
	int16_t x116 = 68;
	uint32_t t27 = 12U;

	t27 = ((x113/x114)&(x115|x116));

	if (t27 != 4458594U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	volatile uint64_t x120 = 18177273134201391LLU;
	uint64_t t28 = 3017678LLU;

	t28 = ((x117/x118)&(x119|x120));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MIN;
	uint32_t x122 = UINT32_MAX;
	uint32_t x123 = UINT32_MAX;
	int32_t x124 = -1;

	t29 = ((x121/x122)&(x123|x124));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x127 = UINT8_MAX;
	static int16_t x128 = -1;

	t30 = ((x125/x126)&(x127|x128));

	if (t30 != 1024819115206086193LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 1;
	static int16_t x130 = -1;
	uint64_t x131 = UINT64_MAX;
	uint64_t x132 = 0LLU;
	uint64_t t31 = UINT64_MAX;

	t31 = ((x129/x130)&(x131|x132));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = -1;
	int32_t x135 = INT32_MAX;
	int64_t x136 = INT64_MIN;
	volatile int64_t t32 = 1LL;

	t32 = ((x133/x134)&(x135|x136));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x138 = -1LL;
	int8_t x139 = -3;
	static volatile uint32_t x140 = UINT32_MAX;
	volatile int64_t t33 = -21428034242444LL;

	t33 = ((x137/x138)&(x139|x140));

	if (t33 != 4294967262LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x141 = 9209057059937653493LLU;
	static uint32_t x142 = 186827163U;
	int32_t x143 = -17616;
	static volatile uint64_t t34 = 492831619LLU;

	t34 = ((x141/x142)&(x143|x144));

	if (t34 != 49291835426LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	volatile int32_t x146 = -205;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MAX;
	static int32_t t35 = -10;

	t35 = ((x145/x146)&(x147|x148));

	if (t35 != 159) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	volatile int16_t x150 = -90;
	uint32_t x151 = UINT32_MAX;
	static volatile uint32_t x152 = 28961924U;
	volatile uint32_t t36 = 714581U;

	t36 = ((x149/x150)&(x151|x152));

	if (t36 != 23860929U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x153 = INT16_MIN;
	int16_t x155 = -66;
	int64_t x156 = INT64_MIN;
	volatile int64_t t37 = -4891844LL;

	t37 = ((x153/x154)&(x155|x156));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 0U;
	int64_t x158 = INT64_MIN;
	int64_t x160 = -306791745536422LL;

	t38 = ((x157/x158)&(x159|x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = 12990525264LL;
	int64_t x162 = -1LL;
	volatile uint32_t x163 = 0U;
	int64_t t39 = 870LL;

	t39 = ((x161/x162)&(x163|x164));

	if (t39 != 2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = 0;
	uint16_t x167 = UINT16_MAX;
	static uint8_t x168 = 14U;
	int32_t t40 = -3090203;

	t40 = ((x165/x166)&(x167|x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MAX;
	volatile uint64_t t41 = 14084094LLU;

	t41 = ((x169/x170)&(x171|x172));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = INT8_MIN;
	uint32_t x174 = UINT32_MAX;
	uint32_t x176 = 2103U;

	t42 = ((x173/x174)&(x175|x176));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 6U;
	int32_t x178 = -1863;
	int32_t x179 = 0;
	volatile int32_t x180 = 253066;
	int32_t t43 = 966758096;

	t43 = ((x177/x178)&(x179|x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	volatile uint8_t x182 = 1U;
	int8_t x183 = INT8_MIN;
	uint32_t x184 = 5218U;
	volatile uint32_t t44 = 14794061U;

	t44 = ((x181/x182)&(x183|x184));

	if (t44 != 4294934528U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x185 = UINT8_MAX;
	uint64_t x186 = 15LLU;

	t45 = ((x185/x186)&(x187|x188));

	if (t45 != 17LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x191 = -4;
	int8_t x192 = 5;

	t46 = ((x189/x190)&(x191|x192));

	if (t46 != 337LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -1;
	int32_t x194 = 205178291;
	uint16_t x195 = 23U;
	uint64_t x196 = UINT64_MAX;

	t47 = ((x193/x194)&(x195|x196));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x197 = 31U;
	uint64_t x198 = UINT64_MAX;
	int64_t x199 = -1LL;
	uint32_t x200 = UINT32_MAX;

	t48 = ((x197/x198)&(x199|x200));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = 5;
	static uint32_t x202 = 21055173U;
	int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MIN;
	static volatile uint32_t t49 = 0U;

	t49 = ((x201/x202)&(x203|x204));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = 12;
	int32_t x206 = INT32_MAX;
	int16_t x207 = INT16_MAX;
	volatile int32_t t50 = 497687;

	t50 = ((x205/x206)&(x207|x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = 37LL;
	int16_t x211 = INT16_MAX;
	volatile int8_t x212 = INT8_MIN;
	volatile int64_t t51 = 88LL;

	t51 = ((x209/x210)&(x211|x212));

	if (t51 != -58040098LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -1;
	static int16_t x214 = INT16_MIN;
	volatile int8_t x215 = -4;
	uint8_t x216 = 5U;
	volatile int32_t t52 = -299226;

	t52 = ((x213/x214)&(x215|x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = -1LL;
	int64_t x218 = 1003LL;
	int64_t x219 = INT64_MAX;
	uint16_t x220 = UINT16_MAX;
	int64_t t53 = -15515916613024LL;

	t53 = ((x217/x218)&(x219|x220));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MAX;
	uint64_t x223 = UINT64_MAX;
	volatile int16_t x224 = INT16_MAX;

	t54 = ((x221/x222)&(x223|x224));

	if (t54 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x225 = UINT8_MAX;
	uint32_t x226 = 1807584514U;
	int32_t x228 = -24338992;
	volatile uint32_t t55 = 51640U;

	t55 = ((x225/x226)&(x227|x228));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x230 = 195753725194LLU;
	volatile int16_t x231 = -1;
	uint64_t t56 = 31LLU;

	t56 = ((x229/x230)&(x231|x232));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MAX;
	volatile uint16_t x234 = 1U;
	uint8_t x235 = 1U;
	volatile int64_t t57 = 4LL;

	t57 = ((x233/x234)&(x235|x236));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x237 = INT32_MAX;
	uint32_t x239 = 1148073U;
	static volatile uint32_t t58 = 237U;

	t58 = ((x237/x238)&(x239|x240));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MAX;
	static int8_t x244 = INT8_MIN;

	t59 = ((x241/x242)&(x243|x244));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x246 = INT64_MIN;
	volatile uint64_t t60 = 4780339668750024LLU;

	t60 = ((x245/x246)&(x247|x248));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x249 = INT16_MAX;
	int16_t x250 = 5964;
	uint8_t x252 = 0U;
	volatile int32_t t61 = 4921160;

	t61 = ((x249/x250)&(x251|x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x253 = INT16_MIN;
	static int8_t x254 = INT8_MIN;
	static volatile uint16_t x255 = 8657U;
	uint16_t x256 = UINT16_MAX;
	static volatile int32_t t62 = -93520085;

	t62 = ((x253/x254)&(x255|x256));

	if (t62 != 256) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = INT16_MIN;
	int16_t x259 = INT16_MIN;
	static volatile int32_t t63 = 365123932;

	t63 = ((x257/x258)&(x259|x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x261 = 77U;
	uint8_t x262 = UINT8_MAX;
	int32_t x264 = INT32_MAX;
	int32_t t64 = -3717083;

	t64 = ((x261/x262)&(x263|x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = UINT32_MAX;
	uint32_t x266 = UINT32_MAX;
	uint16_t x267 = UINT16_MAX;
	uint32_t x268 = 25501U;
	static volatile uint32_t t65 = 7378U;

	t65 = ((x265/x266)&(x267|x268));

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x270 = INT32_MIN;
	int32_t x271 = 128;
	int8_t x272 = INT8_MAX;
	int64_t t66 = -9166035LL;

	t66 = ((x269/x270)&(x271|x272));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x273 = -1;
	volatile int8_t x275 = -1;
	int8_t x276 = INT8_MIN;
	static uint32_t t67 = 614U;

	t67 = ((x273/x274)&(x275|x276));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x277 = -1;
	uint64_t x278 = 49489LLU;
	int8_t x280 = 0;
	static volatile uint64_t t68 = 987LLU;

	t68 = ((x277/x278)&(x279|x280));

	if (t68 != 372744328511579LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x282 = 8U;
	int8_t x283 = -1;
	volatile int64_t x284 = INT64_MAX;
	volatile int64_t t69 = -11274932LL;

	t69 = ((x281/x282)&(x283|x284));

	if (t69 != -113948813784479LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MAX;
	static int8_t x288 = INT8_MAX;

	t70 = ((x285/x286)&(x287|x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = INT32_MAX;
	int32_t x290 = -98191;
	volatile int64_t x291 = INT64_MIN;
	int64_t x292 = -1LL;

	t71 = ((x289/x290)&(x291|x292));

	if (t71 != -21870LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x293 = -1;
	volatile int8_t x294 = INT8_MAX;
	uint8_t x295 = UINT8_MAX;
	int32_t t72 = 140764977;

	t72 = ((x293/x294)&(x295|x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x297 = INT32_MIN;
	int16_t x298 = 50;
	int32_t x299 = -1;
	static volatile int16_t x300 = 11;

	t73 = ((x297/x298)&(x299|x300));

	if (t73 != -42949672) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x301 = 378546232863956LL;
	uint32_t x302 = UINT32_MAX;
	volatile uint64_t x303 = 2581406LLU;
	int16_t x304 = -1193;
	volatile uint64_t t74 = 21713276341380058LLU;

	t74 = ((x301/x302)&(x303|x304));

	if (t74 != 88137LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = -1;
	volatile int64_t x306 = INT64_MIN;
	uint8_t x307 = UINT8_MAX;
	static int32_t x308 = -257207;
	int64_t t75 = -18351810642LL;

	t75 = ((x305/x306)&(x307|x308));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = 1;
	int64_t x314 = -1LL;
	int16_t x315 = INT16_MAX;
	uint64_t x316 = 53367911262325LLU;
	volatile uint64_t t76 = 133LLU;

	t76 = ((x313/x314)&(x315|x316));

	if (t76 != 53367911284735LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MIN;
	static int8_t x319 = -1;
	int8_t x320 = INT8_MIN;
	int32_t t77 = 15545261;

	t77 = ((x317/x318)&(x319|x320));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x322 = INT8_MAX;
	static int32_t x323 = -4950506;
	int64_t x324 = INT64_MAX;
	static uint64_t t78 = 258542219LLU;

	t78 = ((x321/x322)&(x323|x324));

	if (t78 != 1925619882001877LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x325 = 383476977;
	int64_t x327 = -100LL;
	uint16_t x328 = 0U;
	int64_t t79 = -7LL;

	t79 = ((x325/x326)&(x327|x328));

	if (t79 != 4LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x330 = 10932216996657LL;
	int64_t x331 = 28694356747LL;
	static int64_t t80 = 0LL;

	t80 = ((x329/x330)&(x331|x332));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MAX;
	uint32_t t81 = 2118319554U;

	t81 = ((x333/x334)&(x335|x336));

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = INT8_MIN;
	static volatile int32_t x338 = -113;
	int8_t x340 = INT8_MIN;
	volatile int32_t t82 = 1;

	t82 = ((x337/x338)&(x339|x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = INT8_MIN;
	static int64_t x342 = INT64_MIN;
	uint64_t x343 = 204856LLU;
	static uint64_t t83 = 16124810484719743LLU;

	t83 = ((x341/x342)&(x343|x344));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x345 = 91;
	uint16_t x346 = 33U;
	uint8_t x347 = UINT8_MAX;
	static uint64_t x348 = UINT64_MAX;
	uint64_t t84 = 11349010701723LLU;

	t84 = ((x345/x346)&(x347|x348));

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x350 = 37598378750841LLU;
	int8_t x351 = -1;

	t85 = ((x349/x350)&(x351|x352));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x357 = 29U;
	static volatile int8_t x358 = INT8_MIN;
	uint8_t x359 = 65U;
	volatile int8_t x360 = 0;
	static int32_t t86 = 0;

	t86 = ((x357/x358)&(x359|x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x362 = -451798588552LL;
	int8_t x364 = INT8_MIN;
	int64_t t87 = -590426975LL;

	t87 = ((x361/x362)&(x363|x364));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x365 = 899203862LLU;
	int64_t x366 = -27746LL;
	volatile int8_t x367 = -33;
	int16_t x368 = INT16_MIN;
	uint64_t t88 = 1269182023LLU;

	t88 = ((x365/x366)&(x367|x368));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = -108756468;
	int32_t x371 = 21463987;
	int8_t x372 = INT8_MIN;
	int32_t t89 = 50310;

	t89 = ((x369/x370)&(x371|x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = INT16_MAX;
	int32_t x374 = INT32_MIN;
	uint32_t x375 = 2008414394U;
	int8_t x376 = 9;
	volatile uint32_t t90 = 22860U;

	t90 = ((x373/x374)&(x375|x376));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = 629;
	static int32_t x378 = INT32_MAX;
	static volatile int64_t x379 = -1LL;
	uint64_t x380 = 102587210484421LLU;
	uint64_t t91 = 3871109LLU;

	t91 = ((x377/x378)&(x379|x380));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x381 = -1;
	int8_t x382 = INT8_MAX;
	int32_t x383 = -54492;
	uint16_t x384 = 170U;
	int32_t t92 = -9337212;

	t92 = ((x381/x382)&(x383|x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x385 = UINT8_MAX;
	uint32_t x386 = UINT32_MAX;
	int32_t x387 = -119668384;

	t93 = ((x385/x386)&(x387|x388));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x389 = 144;
	uint64_t x390 = 109697LLU;
	int8_t x391 = 1;
	int32_t x392 = -29;
	uint64_t t94 = 2499985895414806LLU;

	t94 = ((x389/x390)&(x391|x392));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = -690;
	volatile int8_t x394 = INT8_MIN;
	int32_t x395 = 116;
	int8_t x396 = 5;
	volatile int32_t t95 = -89729697;

	t95 = ((x393/x394)&(x395|x396));

	if (t95 != 5) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = -1;
	volatile uint32_t x398 = 127169U;
	int16_t x399 = -1;
	uint64_t x400 = 2625283632LLU;
	uint64_t t96 = 7387010779944643946LLU;

	t96 = ((x397/x398)&(x399|x400));

	if (t96 != 33773LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = 0LL;
	int16_t x402 = 3038;
	int16_t x403 = INT16_MAX;
	uint32_t x404 = 312578861U;
	volatile int64_t t97 = 6099652LL;

	t97 = ((x401/x402)&(x403|x404));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x405 = -1;
	uint32_t x407 = 1663U;
	int16_t x408 = -1;
	uint32_t t98 = 9882523U;

	t98 = ((x405/x406)&(x407|x408));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MIN;
	uint8_t x411 = 37U;
	volatile uint32_t x412 = UINT32_MAX;
	static uint32_t t99 = 4U;

	t99 = ((x409/x410)&(x411|x412));

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

