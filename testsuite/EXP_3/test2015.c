#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x11 = INT16_MAX;
volatile uint64_t x15 = 2942921132441129LLU;
int64_t t4 = -10618613574471597LL;
int64_t x32 = -50002047020425LL;
volatile int64_t x37 = 1666LL;
static volatile int64_t t9 = 0LL;
int8_t x41 = INT8_MIN;
static volatile int32_t x44 = INT32_MIN;
static uint16_t x49 = 45U;
int32_t x53 = INT32_MIN;
volatile uint64_t t14 = 46LLU;
volatile uint32_t x74 = UINT32_MAX;
static int64_t x75 = -1LL;
int8_t x78 = INT8_MAX;
int32_t x89 = INT32_MIN;
uint8_t x90 = 0U;
uint16_t x91 = UINT16_MAX;
int64_t t22 = 23712LL;
volatile int16_t x100 = 429;
volatile int32_t t27 = -1;
static uint8_t x117 = 20U;
volatile int64_t t31 = INT64_MAX;
int16_t x129 = INT16_MIN;
uint8_t x133 = 1U;
static int32_t x134 = INT32_MIN;
static uint32_t x136 = 76475U;
static uint32_t x138 = 3943U;
static volatile int16_t x142 = INT16_MAX;
int64_t x145 = INT64_MIN;
static uint64_t x151 = 14913390664LLU;
int16_t x154 = INT16_MIN;
int16_t x172 = INT16_MIN;
int64_t x173 = INT64_MIN;
uint8_t x184 = UINT8_MAX;
volatile int64_t t45 = -27338926513404LL;
int32_t x190 = -50;
volatile int32_t x192 = 41;
int32_t x194 = -109;
volatile int64_t x196 = INT64_MIN;
static int16_t x197 = 2;
uint32_t x200 = 81352U;
int64_t t49 = -63419600977480676LL;
int16_t x209 = -353;
volatile int64_t x212 = -11363529081LL;
volatile uint32_t x224 = 752654U;
volatile uint32_t x227 = 1U;
static int64_t x228 = -13917LL;
uint16_t x230 = 1U;
static int64_t x231 = -36957249LL;
volatile int64_t t57 = 12LL;
int8_t x239 = INT8_MIN;
int16_t x240 = INT16_MIN;
int8_t x246 = -1;
static volatile int16_t x251 = 244;
static int64_t t63 = -24LL;
volatile uint64_t t64 = 1516359622826404LLU;
int8_t x261 = -1;
volatile uint64_t x264 = UINT64_MAX;
uint32_t x267 = 40U;
uint32_t x268 = UINT32_MAX;
int64_t x283 = 201132824127LL;
uint8_t x286 = 0U;
int16_t x303 = INT16_MAX;
volatile int64_t t75 = 19724805LL;
int64_t x307 = INT64_MIN;
int8_t x308 = 10;
uint32_t x311 = 126718U;
uint16_t x313 = 2587U;
volatile int8_t x315 = INT8_MIN;
static int64_t x320 = 486LL;
volatile int64_t t79 = -331827LL;
uint16_t x323 = 204U;
int64_t x335 = INT64_MIN;
int8_t x337 = -14;
static int32_t x338 = INT32_MAX;
volatile int32_t x344 = -2192;
static int32_t x346 = INT32_MIN;
uint64_t x348 = 4116713678188316LLU;
volatile uint64_t t86 = 1812075141529712LLU;
volatile int64_t x357 = INT64_MIN;
uint16_t x366 = UINT16_MAX;
static int64_t x373 = -1LL;
static int64_t x377 = INT64_MIN;
volatile int64_t x382 = INT64_MIN;
uint8_t x388 = 0U;
static volatile uint64_t t96 = 12647661279738LLU;
int16_t x393 = -7070;
int64_t t98 = -23LL;
int64_t t99 = 49097873031746766LL;


void f0(void) {
	int32_t x1 = 3;
	int16_t x2 = 2;
	int64_t x3 = 27381703252249433LL;
	static volatile int32_t x4 = INT32_MIN;
	volatile int64_t t0 = 1628970LL;

	t0 = ((x1|x2)^(x3|x4));

	if (t0 != -1749939366LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 10;
	uint64_t x6 = 782626LLU;
	int32_t x7 = 6;
	static int8_t x8 = 0;
	volatile uint64_t t1 = 15497LLU;

	t1 = ((x5|x6)^(x7|x8));

	if (t1 != 782636LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 7796764800202596LLU;
	int32_t x10 = -1;
	static int8_t x12 = 0;
	static uint64_t t2 = 112LLU;

	t2 = ((x9|x10)^(x11|x12));

	if (t2 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 295479801462543LL;
	uint8_t x14 = 17U;
	int64_t x16 = -1LL;
	uint64_t t3 = 1353LLU;

	t3 = ((x13|x14)^(x15|x16));

	if (t3 != 18446448593908089056LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = -1;
	uint16_t x18 = 115U;
	volatile int32_t x19 = -1;
	volatile int64_t x20 = -11759LL;

	t4 = ((x17|x18)^(x19|x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 98U;
	int8_t x22 = -1;
	static volatile int64_t x23 = INT64_MAX;
	uint64_t x24 = 1063482348275165135LLU;
	volatile uint64_t t5 = 2LLU;

	t5 = ((x21|x22)^(x23|x24));

	if (t5 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -6;
	int16_t x26 = -1;
	volatile int8_t x27 = INT8_MIN;
	uint16_t x28 = 229U;
	volatile int32_t t6 = 111958;

	t6 = ((x25|x26)^(x27|x28));

	if (t6 != 26) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -621432698;
	uint32_t x30 = 7U;
	static int64_t x31 = INT64_MIN;
	volatile int64_t t7 = -524LL;

	t7 = ((x29|x30)^(x31|x32));

	if (t7 != -50005645040912LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 0;
	volatile uint32_t x34 = 27U;
	int16_t x35 = -337;
	volatile int32_t x36 = -1;
	volatile uint32_t t8 = 11628996U;

	t8 = ((x33|x34)^(x35|x36));

	if (t8 != 4294967268U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = 0;
	static int8_t x39 = 1;
	volatile int8_t x40 = INT8_MIN;

	t9 = ((x37|x38)^(x39|x40));

	if (t9 != -1789LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = 68U;
	volatile int64_t x43 = -1LL;
	int64_t t10 = 2335LL;

	t10 = ((x41|x42)^(x43|x44));

	if (t10 != 59LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	static int8_t x46 = INT8_MAX;
	static int32_t x47 = -525033975;
	int32_t x48 = -1;
	int32_t t11 = -1;

	t11 = ((x45|x46)^(x47|x48));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	int8_t x51 = -1;
	uint16_t x52 = UINT16_MAX;
	volatile int64_t t12 = 39495LL;

	t12 = ((x49|x50)^(x51|x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x54 = 1U;
	uint8_t x55 = 16U;
	static volatile uint32_t x56 = 2U;
	volatile uint32_t t13 = 104U;

	t13 = ((x53|x54)^(x55|x56));

	if (t13 != 2147483667U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 1U;
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = INT16_MAX;
	volatile int32_t x60 = INT32_MIN;

	t14 = ((x57|x58)^(x59|x60));

	if (t14 != 2147450880LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 14U;
	int32_t x62 = INT32_MAX;
	uint8_t x63 = 11U;
	volatile uint64_t x64 = 1637708659333LLU;
	volatile uint64_t t15 = 2861630249497808LLU;

	t15 = ((x61|x62)^(x63|x64));

	if (t15 != 1637203903856LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -117;
	uint8_t x66 = UINT8_MAX;
	uint8_t x67 = 2U;
	static uint16_t x68 = 7U;
	int32_t t16 = -600;

	t16 = ((x65|x66)^(x67|x68));

	if (t16 != -8) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -172;
	int64_t x70 = INT64_MAX;
	static uint32_t x71 = 369U;
	static uint8_t x72 = 15U;
	static volatile int64_t t17 = 27360154056155474LL;

	t17 = ((x69|x70)^(x71|x72));

	if (t17 != -384LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = UINT64_MAX;
	static int8_t x76 = INT8_MAX;
	volatile uint64_t t18 = 6LLU;

	t18 = ((x73|x74)^(x75|x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	static int16_t x79 = 5602;
	int8_t x80 = -1;
	int32_t t19 = -154452439;

	t19 = ((x77|x78)^(x79|x80));

	if (t19 != 32640) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = 39035LLU;
	uint16_t x82 = 2202U;
	int8_t x83 = -6;
	int8_t x84 = -3;
	volatile uint64_t t20 = 233204LLU;

	t20 = ((x81|x82)^(x83|x84));

	if (t20 != 18446744073709512452LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MAX;
	int16_t x86 = -1;
	static int16_t x87 = 619;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 593074;

	t21 = ((x85|x86)^(x87|x88));

	if (t21 != 20) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x92 = -1LL;

	t22 = ((x89|x90)^(x91|x92));

	if (t22 != 2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 180;
	volatile uint64_t x94 = UINT64_MAX;
	int16_t x95 = -67;
	int32_t x96 = INT32_MAX;
	volatile uint64_t t23 = 2401079LLU;

	t23 = ((x93|x94)^(x95|x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MIN;
	int64_t x99 = 31311LL;
	int64_t t24 = -102057934225162646LL;

	t24 = ((x97|x98)^(x99|x100));

	if (t24 != -31728LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 895U;
	int32_t x102 = -51554;
	static int8_t x103 = -1;
	uint32_t x104 = 5057U;
	volatile uint32_t t25 = 546115801U;

	t25 = ((x101|x102)^(x103|x104));

	if (t25 != 51200U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	int64_t x106 = -1LL;
	int64_t x107 = -1LL;
	int64_t x108 = 353448LL;
	static volatile int64_t t26 = 132319152197497476LL;

	t26 = ((x105|x106)^(x107|x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	static int16_t x110 = INT16_MIN;
	int32_t x111 = -1;
	int16_t x112 = 7;

	t27 = ((x109|x110)^(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 235U;
	static uint32_t x114 = 51U;
	int32_t x115 = 17866783;
	static int16_t x116 = -1;
	uint32_t t28 = 239630744U;

	t28 = ((x113|x114)^(x115|x116));

	if (t28 != 4294967044U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MAX;
	volatile int32_t x120 = 1;
	static int32_t t29 = -17;

	t29 = ((x117|x118)^(x119|x120));

	if (t29 != -21) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 3086396441345LLU;
	int32_t x122 = INT32_MIN;
	uint8_t x123 = 30U;
	volatile uint32_t x124 = UINT32_MAX;
	volatile uint64_t t30 = 991678859105LLU;

	t30 = ((x121|x122)^(x123|x124));

	if (t30 != 18446744071099628798LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	volatile int64_t x126 = INT64_MIN;
	int32_t x127 = -4676;
	int16_t x128 = -1;

	t31 = ((x125|x126)^(x127|x128));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MAX;
	int16_t x131 = INT16_MIN;
	int16_t x132 = -1;
	static volatile int64_t t32 = -1LL;

	t32 = ((x129|x130)^(x131|x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x135 = INT16_MAX;
	volatile uint32_t t33 = 12748690U;

	t33 = ((x133|x134)^(x135|x136));

	if (t33 != 2147581950U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 583378720LL;
	int16_t x139 = INT16_MAX;
	volatile int64_t x140 = 13LL;
	volatile int64_t t34 = 5LL;

	t34 = ((x137|x138)^(x139|x140));

	if (t34 != 583389336LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	volatile uint32_t x143 = UINT32_MAX;
	static uint16_t x144 = UINT16_MAX;
	static volatile uint32_t t35 = 181467U;

	t35 = ((x141|x142)^(x143|x144));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = UINT64_MAX;
	static uint32_t x147 = 140U;
	int32_t x148 = INT32_MAX;
	uint64_t t36 = 3520257956LLU;

	t36 = ((x145|x146)^(x147|x148));

	if (t36 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MAX;
	int16_t x152 = -1;
	volatile uint64_t t37 = 4LLU;

	t37 = ((x149|x150)^(x151|x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	int32_t x155 = 1;
	uint64_t x156 = 14640LLU;
	static volatile uint64_t t38 = 122884954LLU;

	t38 = ((x153|x154)^(x155|x156));

	if (t38 != 18446744073709536974LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 1;
	uint64_t x158 = UINT64_MAX;
	volatile uint16_t x159 = 113U;
	uint64_t x160 = 3LLU;
	volatile uint64_t t39 = 71460320237437716LLU;

	t39 = ((x157|x158)^(x159|x160));

	if (t39 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	volatile int16_t x162 = INT16_MIN;
	volatile int16_t x163 = INT16_MIN;
	int8_t x164 = 1;
	volatile int32_t t40 = -48083;

	t40 = ((x161|x162)^(x163|x164));

	if (t40 != 32641) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -1;
	volatile int32_t x166 = -1;
	int32_t x167 = -1;
	uint64_t x168 = 1886LLU;
	volatile uint64_t t41 = 3642LLU;

	t41 = ((x165|x166)^(x167|x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	int8_t x170 = 14;
	volatile int16_t x171 = 49;
	volatile uint64_t t42 = 1LLU;

	t42 = ((x169|x170)^(x171|x172));

	if (t42 != 32718LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = 124U;
	uint64_t x175 = 13LLU;
	volatile uint16_t x176 = 42U;
	uint64_t t43 = 66034972131515387LLU;

	t43 = ((x173|x174)^(x175|x176));

	if (t43 != 9223372036854775891LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	static int16_t x178 = 226;
	volatile uint16_t x179 = 1129U;
	int64_t x180 = -22LL;
	static volatile int64_t t44 = 4826820225293LL;

	t44 = ((x177|x178)^(x179|x180));

	if (t44 != -4294967276LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	int64_t x182 = INT64_MIN;
	int16_t x183 = INT16_MIN;

	t45 = ((x181|x182)^(x183|x184));

	if (t45 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int8_t x186 = INT8_MIN;
	uint64_t x187 = 3743098488LLU;
	int16_t x188 = 0;
	uint64_t t46 = 1981LLU;

	t46 = ((x185|x186)^(x187|x188));

	if (t46 != 551868807LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	uint64_t x191 = 429365262LLU;
	volatile uint64_t t47 = 300926324763LLU;

	t47 = ((x189|x190)^(x191|x192));

	if (t47 != 18446744073280186337LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x193 = 1238602356LL;
	int32_t x195 = INT32_MIN;
	volatile int64_t t48 = 1336873LL;

	t48 = ((x193|x194)^(x195|x196));

	if (t48 != 2147483639LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = INT64_MAX;
	int16_t x199 = -653;

	t49 = ((x197|x198)^(x199|x200));

	if (t49 != 9223372032559809028LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = -1;
	int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MIN;
	int64_t x204 = 1LL;
	volatile int64_t t50 = -1284085073LL;

	t50 = ((x201|x202)^(x203|x204));

	if (t50 != 126LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -5;
	uint32_t x206 = 1U;
	uint32_t x207 = 190947U;
	int32_t x208 = INT32_MIN;
	static volatile uint32_t t51 = 1848558U;

	t51 = ((x205|x206)^(x207|x208));

	if (t51 != 2147292696U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = -1000;
	uint32_t x211 = UINT32_MAX;
	volatile int64_t t52 = 153LL;

	t52 = ((x209|x210)^(x211|x212));

	if (t52 != 8589934944LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -10231;
	int16_t x214 = INT16_MIN;
	uint32_t x215 = 321366915U;
	volatile int64_t x216 = INT64_MAX;
	int64_t t53 = 10LL;

	t53 = ((x213|x214)^(x215|x216));

	if (t53 != -9223372036854765578LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	volatile int32_t x218 = INT32_MAX;
	volatile int64_t x219 = INT64_MIN;
	int32_t x220 = -1;
	volatile int64_t t54 = -73815683459701838LL;

	t54 = ((x217|x218)^(x219|x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	uint8_t x222 = UINT8_MAX;
	int16_t x223 = -1;
	volatile int64_t t55 = 633512264348384647LL;

	t55 = ((x221|x222)^(x223|x224));

	if (t55 != -9223372032559808768LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = INT8_MIN;
	static volatile uint16_t x226 = 1719U;
	int64_t t56 = 15154258031530LL;

	t56 = ((x225|x226)^(x227|x228));

	if (t56 != 13844LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 1;
	volatile uint32_t x232 = 2360U;

	t57 = ((x229|x230)^(x231|x232));

	if (t57 != -36955202LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	static int8_t x234 = -1;
	int8_t x235 = -1;
	uint64_t x236 = 2LLU;
	volatile uint64_t t58 = 40456LLU;

	t58 = ((x233|x234)^(x235|x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	static int16_t x238 = 3594;
	int64_t t59 = -30271LL;

	t59 = ((x237|x238)^(x239|x240));

	if (t59 != 9223372036854772106LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 0;
	uint16_t x242 = UINT16_MAX;
	static uint32_t x243 = UINT32_MAX;
	volatile int8_t x244 = INT8_MIN;
	static volatile uint32_t t60 = 369781U;

	t60 = ((x241|x242)^(x243|x244));

	if (t60 != 4294901760U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 241;
	int16_t x247 = INT16_MIN;
	int64_t x248 = 22794283369973488LL;
	volatile int64_t t61 = 64551926LL;

	t61 = ((x245|x246)^(x247|x248));

	if (t61 != 14607LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 17190U;
	int8_t x250 = 0;
	uint32_t x252 = 174795U;
	volatile uint32_t t62 = 5U;

	t62 = ((x249|x250)^(x251|x252));

	if (t62 != 190937U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -1LL;
	volatile uint8_t x254 = 3U;
	volatile int8_t x255 = -25;
	int32_t x256 = -1;

	t63 = ((x253|x254)^(x255|x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	volatile uint64_t x258 = 2LLU;
	static int8_t x259 = INT8_MIN;
	volatile int32_t x260 = 188526;

	t64 = ((x257|x258)^(x259|x260));

	if (t64 != 32748LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = -1;
	uint8_t x263 = UINT8_MAX;
	volatile uint64_t t65 = 65035601264LLU;

	t65 = ((x261|x262)^(x263|x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = 14596218569LL;
	int16_t x266 = -1;
	static volatile int64_t t66 = 1566030808393455001LL;

	t66 = ((x265|x266)^(x267|x268));

	if (t66 != -4294967296LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = UINT32_MAX;
	int16_t x270 = INT16_MAX;
	static int8_t x271 = INT8_MAX;
	static int8_t x272 = -18;
	static volatile uint32_t t67 = 1U;

	t67 = ((x269|x270)^(x271|x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = 71189;
	uint64_t x274 = 20534436475529388LLU;
	int64_t x275 = INT64_MIN;
	uint16_t x276 = UINT16_MAX;
	static volatile uint64_t t68 = 3381912084108795513LLU;

	t68 = ((x273|x274)^(x275|x276));

	if (t68 != 9243906473330311490LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = -977621LL;
	int64_t x278 = INT64_MIN;
	volatile int64_t x279 = -41762749459574278LL;
	volatile uint64_t x280 = 32643730315LLU;
	uint64_t t69 = 842371751373801875LLU;

	t69 = ((x277|x278)^(x279|x280));

	if (t69 != 41762716977647312LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = 121LLU;
	int64_t x282 = INT64_MIN;
	static uint8_t x284 = 7U;
	uint64_t t70 = 10646731LLU;

	t70 = ((x281|x282)^(x283|x284));

	if (t70 != 9223372237987599942LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	uint8_t x287 = 52U;
	uint32_t x288 = 372878900U;
	volatile uint64_t t71 = 1175370LLU;

	t71 = ((x285|x286)^(x287|x288));

	if (t71 != 18446744073336672715LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	volatile uint64_t x290 = UINT64_MAX;
	volatile uint16_t x291 = UINT16_MAX;
	int32_t x292 = -1;
	uint64_t t72 = 3624087LLU;

	t72 = ((x289|x290)^(x291|x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	uint8_t x295 = UINT8_MAX;
	volatile uint8_t x296 = 89U;
	static volatile int32_t t73 = -9332;

	t73 = ((x293|x294)^(x295|x296));

	if (t73 != -32513) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 1U;
	static int64_t x298 = INT64_MIN;
	static int64_t x299 = -1LL;
	volatile int16_t x300 = 3161;
	volatile int64_t t74 = -4709LL;

	t74 = ((x297|x298)^(x299|x300));

	if (t74 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -46;
	static volatile int64_t x302 = -1446109LL;
	static volatile int64_t x304 = 285601LL;

	t75 = ((x301|x302)^(x303|x304));

	if (t75 != -294900LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = -1;
	static uint64_t x306 = 73471LLU;
	volatile uint64_t t76 = 777761990064939LLU;

	t76 = ((x305|x306)^(x307|x308));

	if (t76 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x309 = UINT64_MAX;
	static uint32_t x310 = 2320U;
	int64_t x312 = -1LL;
	uint64_t t77 = 51151408687899715LLU;

	t77 = ((x309|x310)^(x311|x312));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = -3;
	int16_t x316 = 1;
	int32_t t78 = 8;

	t78 = ((x313|x314)^(x315|x316));

	if (t78 != 126) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x317 = INT32_MIN;
	static uint8_t x318 = UINT8_MAX;
	volatile int8_t x319 = 19;

	t79 = ((x317|x318)^(x319|x320));

	if (t79 != -2147483384LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = -1;
	uint64_t x324 = 15638LLU;
	static uint64_t t80 = 2688LLU;

	t80 = ((x321|x322)^(x323|x324));

	if (t80 != 18446744073709535777LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 246U;
	int8_t x326 = -1;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = INT8_MIN;
	volatile uint64_t t81 = 505104LLU;

	t81 = ((x325|x326)^(x327|x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = UINT8_MAX;
	int8_t x330 = -1;
	uint32_t x331 = UINT32_MAX;
	static int64_t x332 = -44673113LL;
	volatile int64_t t82 = 127078405608LL;

	t82 = ((x329|x330)^(x331|x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -3;
	volatile int32_t x334 = -918702363;
	int8_t x336 = INT8_MAX;
	int64_t t83 = -17484440473059LL;

	t83 = ((x333|x334)^(x335|x336));

	if (t83 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x339 = UINT16_MAX;
	volatile int16_t x340 = -3;
	volatile int32_t t84 = 580468330;

	t84 = ((x337|x338)^(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int32_t x342 = -35829469;
	uint16_t x343 = UINT16_MAX;
	volatile int32_t t85 = -228;

	t85 = ((x341|x342)^(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	int32_t x347 = -14519;

	t86 = ((x345|x346)^(x347|x348));

	if (t86 != 4258LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 930U;
	uint16_t x350 = 239U;
	int32_t x351 = INT32_MIN;
	int16_t x352 = 1048;
	static int32_t t87 = 287492;

	t87 = ((x349|x350)^(x351|x352));

	if (t87 != -2147481609) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	volatile int64_t x354 = -1LL;
	uint32_t x355 = UINT32_MAX;
	uint32_t x356 = 15U;
	int64_t t88 = 3936787316LL;

	t88 = ((x353|x354)^(x355|x356));

	if (t88 != -4294967296LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = 1939U;
	uint32_t x359 = 2392U;
	volatile uint32_t x360 = 374169580U;
	int64_t t89 = 2062586355464432738LL;

	t89 = ((x357|x358)^(x359|x360));

	if (t89 != -9223372036480608145LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	int8_t x362 = -1;
	int32_t x363 = 39720;
	uint64_t x364 = 635962162338171335LLU;
	uint64_t t90 = 0LLU;

	t90 = ((x361|x362)^(x363|x364));

	if (t90 != 17810781911371375632LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = -1;
	int32_t x367 = -1;
	static volatile uint64_t x368 = 26771LLU;
	uint64_t t91 = 2643817418315LLU;

	t91 = ((x365|x366)^(x367|x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	volatile uint8_t x370 = 0U;
	static int32_t x371 = INT32_MIN;
	static uint8_t x372 = 47U;
	static uint64_t t92 = 27085LLU;

	t92 = ((x369|x370)^(x371|x372));

	if (t92 != 2147483600LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = INT8_MIN;
	uint32_t x375 = UINT32_MAX;
	int64_t x376 = -1LL;
	volatile int64_t t93 = -32312223343445514LL;

	t93 = ((x373|x374)^(x375|x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MIN;
	uint16_t x379 = 0U;
	volatile uint8_t x380 = 14U;
	int64_t t94 = -11512748972956112LL;

	t94 = ((x377|x378)^(x379|x380));

	if (t94 != -2147483634LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MIN;
	int16_t x383 = -251;
	static volatile uint16_t x384 = 32U;
	int64_t t95 = 1520329121667801674LL;

	t95 = ((x381|x382)^(x383|x384));

	if (t95 != 32549LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = 22U;
	uint64_t x386 = UINT64_MAX;
	int32_t x387 = INT32_MIN;

	t96 = ((x385|x386)^(x387|x388));

	if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -7;
	int64_t x390 = INT64_MIN;
	static int16_t x391 = -1;
	static int64_t x392 = INT64_MIN;
	int64_t t97 = 1LL;

	t97 = ((x389|x390)^(x391|x392));

	if (t97 != 6LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = INT8_MAX;
	int64_t x395 = 30529848LL;
	static uint32_t x396 = UINT32_MAX;

	t98 = ((x393|x394)^(x395|x396));

	if (t98 != -4294960256LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	uint8_t x398 = 36U;
	int64_t x399 = INT64_MAX;
	int8_t x400 = 1;

	t99 = ((x397|x398)^(x399|x400));

	if (t99 != 9223372036854775680LL) { NG(); } else { ; }
	
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

