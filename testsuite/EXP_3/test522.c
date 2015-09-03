#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = INT64_MIN;
static uint32_t x4 = 1748735U;
volatile int32_t t1 = 22867;
static uint64_t t3 = 42LLU;
volatile int32_t x28 = INT32_MAX;
uint32_t x29 = UINT32_MAX;
int32_t x31 = 4;
static int64_t x40 = -24776432503810646LL;
static volatile int8_t x44 = 5;
uint32_t t8 = 737U;
static volatile uint32_t x47 = 79669349U;
static int16_t x57 = -8;
int16_t x77 = INT16_MIN;
int32_t x81 = INT32_MIN;
static uint8_t x84 = UINT8_MAX;
volatile uint8_t x86 = 2U;
volatile uint64_t x87 = 2741LLU;
int8_t x94 = INT8_MIN;
static uint32_t x96 = UINT32_MAX;
volatile uint8_t x98 = 38U;
volatile int32_t t21 = -79815632;
uint8_t x106 = 6U;
uint16_t x108 = 7U;
volatile int32_t x109 = -1;
volatile uint32_t t27 = 7755U;
int8_t x129 = 13;
volatile int32_t t28 = 9;
int32_t x138 = 235252555;
int16_t x144 = INT16_MIN;
int32_t x152 = 1184530;
static volatile int64_t x155 = 1579LL;
static int8_t x158 = INT8_MIN;
int8_t x162 = 0;
int16_t x166 = INT16_MAX;
volatile uint16_t x176 = 18473U;
volatile uint32_t t36 = 5830593U;
int32_t x183 = -9;
uint64_t x184 = 833989814828832161LLU;
static volatile uint64_t t37 = 309LLU;
uint64_t x187 = 74552575853475LLU;
uint16_t x188 = UINT16_MAX;
static int64_t t39 = 243506633LL;
volatile int32_t x208 = 6;
static int8_t x209 = -4;
int16_t x224 = INT16_MAX;
int32_t t45 = -775653;
static volatile uint64_t x225 = UINT64_MAX;
uint8_t x231 = 49U;
uint64_t x232 = 913012LLU;
int8_t x237 = 0;
int64_t x242 = INT64_MIN;
uint32_t x244 = UINT32_MAX;
uint64_t x250 = 9310749132750279LLU;
uint16_t x253 = 8068U;
uint64_t x254 = 1786LLU;
uint16_t x255 = UINT16_MAX;
int64_t x256 = -1LL;
int64_t x258 = -78407LL;
static uint16_t x259 = 12206U;
int16_t x268 = INT16_MIN;
int8_t x285 = INT8_MIN;
volatile int32_t x287 = INT32_MIN;
int64_t x298 = -1LL;
volatile int16_t x299 = INT16_MAX;
static int64_t x305 = -1LL;
volatile int32_t t63 = -3;
static int8_t x318 = INT8_MIN;
static uint64_t x321 = 455312284856848399LLU;
uint16_t x322 = 7440U;
uint64_t t65 = 57LLU;
int16_t x328 = INT16_MIN;
volatile uint64_t t68 = 7553LLU;
int64_t t70 = 11105LL;
static int16_t x357 = INT16_MAX;
uint8_t x365 = UINT8_MAX;
uint32_t t76 = 663216028U;
static volatile uint8_t x370 = 105U;
volatile int64_t t77 = 80767817813591723LL;
static int16_t x376 = -44;
uint64_t t78 = 4468439LLU;
int16_t x385 = -1;
volatile uint16_t x386 = UINT16_MAX;
volatile int32_t t79 = -4;
uint32_t x395 = 423421289U;
int8_t x397 = INT8_MIN;
uint16_t x406 = UINT16_MAX;
int64_t t83 = 925808LL;
uint16_t x413 = 1U;
int8_t x417 = 0;
static int8_t x418 = INT8_MIN;
static uint64_t x423 = 142459051704LLU;
static volatile uint64_t x425 = 30777083250233258LLU;
static int32_t x436 = 22;
uint32_t t89 = 7592U;
volatile int64_t t90 = 7550LL;
volatile int32_t x445 = -3092;
uint16_t x446 = 0U;
uint8_t x448 = UINT8_MAX;
int8_t x459 = 46;
volatile uint64_t t94 = 977314004LLU;
volatile int64_t t95 = 17576556519743LL;
volatile uint8_t x479 = 37U;
volatile int64_t x481 = INT64_MAX;
volatile int64_t t99 = 549099020008231LL;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile int8_t x2 = INT8_MIN;
	volatile int64_t t0 = 2506083261LL;

	t0 = ((x1-x2)-(x3/x4));

	if (t0 != 5272163396547LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = -1;
	static int8_t x10 = INT8_MAX;
	uint16_t x11 = 1191U;
	volatile uint8_t x12 = 2U;

	t1 = ((x9-x10)-(x11/x12));

	if (t1 != -723) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x17 = UINT8_MAX;
	int8_t x18 = 7;
	volatile uint16_t x19 = 1U;
	int32_t x20 = INT32_MAX;
	static volatile int32_t t2 = -25;

	t2 = ((x17-x18)-(x19/x20));

	if (t2 != 248) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 63U;
	int16_t x22 = 0;
	static uint64_t x23 = UINT64_MAX;
	int64_t x24 = -1LL;

	t3 = ((x21-x22)-(x23/x24));

	if (t3 != 62LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 1;
	int8_t x26 = 0;
	uint64_t x27 = 1638297167LLU;
	uint64_t t4 = 2985469782414868LLU;

	t4 = ((x25-x26)-(x27/x28));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x30 = 35U;
	int32_t x32 = -502619310;
	volatile uint32_t t5 = 3U;

	t5 = ((x29-x30)-(x31/x32));

	if (t5 != 4294967260U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 13U;
	static uint64_t x34 = 11013LLU;
	uint64_t x35 = 3892079LLU;
	int16_t x36 = INT16_MIN;
	volatile uint64_t t6 = 78219731616148LLU;

	t6 = ((x33-x34)-(x35/x36));

	if (t6 != 18446744073709540616LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = -5347;
	int64_t x38 = -1LL;
	int64_t x39 = -1LL;
	volatile int64_t t7 = -13234LL;

	t7 = ((x37-x38)-(x39/x40));

	if (t7 != -5346LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	uint32_t x42 = 52155006U;
	int8_t x43 = 3;

	t8 = ((x41-x42)-(x43/x44));

	if (t8 != 4242877825U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = 6378341LL;
	volatile uint32_t x46 = 55U;
	int64_t x48 = INT64_MIN;
	volatile int64_t t9 = -18209361LL;

	t9 = ((x45-x46)-(x47/x48));

	if (t9 != 6378286LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = 1;
	volatile uint16_t x50 = UINT16_MAX;
	int32_t x51 = -1;
	int16_t x52 = INT16_MAX;
	volatile int32_t t10 = -114433906;

	t10 = ((x49-x50)-(x51/x52));

	if (t10 != -65534) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 801386LLU;
	int32_t x54 = INT32_MIN;
	uint64_t x55 = UINT64_MAX;
	int16_t x56 = INT16_MIN;
	volatile uint64_t t11 = 80LLU;

	t11 = ((x53-x54)-(x55/x56));

	if (t11 != 2148285033LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x58 = 879292;
	int16_t x59 = INT16_MIN;
	static int8_t x60 = 48;
	volatile int32_t t12 = 0;

	t12 = ((x57-x58)-(x59/x60));

	if (t12 != -878618) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = 5LL;
	static volatile int32_t x62 = -12;
	uint64_t x63 = UINT64_MAX;
	volatile int8_t x64 = INT8_MIN;
	static uint64_t t13 = 171497107953LLU;

	t13 = ((x61-x62)-(x63/x64));

	if (t13 != 16LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -44510LL;
	uint8_t x66 = UINT8_MAX;
	uint16_t x67 = 715U;
	uint16_t x68 = 3U;
	int64_t t14 = 8LL;

	t14 = ((x65-x66)-(x67/x68));

	if (t14 != -45003LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -238081LL;
	int32_t x70 = INT32_MIN;
	int64_t x71 = INT64_MAX;
	volatile int64_t x72 = 879151352994LL;
	static int64_t t15 = 24374LL;

	t15 = ((x69-x70)-(x71/x72));

	if (t15 != 2136754345LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = -9897348811LL;
	volatile int8_t x74 = INT8_MIN;
	int16_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	volatile int64_t t16 = 4115297004700426LL;

	t16 = ((x73-x74)-(x75/x76));

	if (t16 != -9897348683LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x78 = INT64_MIN;
	int32_t x79 = 2795250;
	uint16_t x80 = 18725U;
	int64_t t17 = -50LL;

	t17 = ((x77-x78)-(x79/x80));

	if (t17 != 9223372036854742891LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x82 = 290222841U;
	int32_t x83 = -1;
	uint32_t t18 = 5784566U;

	t18 = ((x81-x82)-(x83/x84));

	if (t18 != 1857260807U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -19456926503579LL;
	int64_t x88 = INT64_MIN;
	volatile uint64_t t19 = 10734637466LLU;

	t19 = ((x85-x86)-(x87/x88));

	if (t19 != 18446724616783048035LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = 606;
	volatile int16_t x95 = INT16_MIN;
	uint32_t t20 = 11316790U;

	t20 = ((x93-x94)-(x95/x96));

	if (t20 != 734U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = -23;
	int32_t x99 = INT32_MAX;
	volatile int16_t x100 = 7;

	t21 = ((x97-x98)-(x99/x100));

	if (t21 != -306783439) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = -1;
	static int8_t x102 = INT8_MIN;
	volatile uint32_t x103 = 27550372U;
	static uint8_t x104 = UINT8_MAX;
	uint32_t t22 = 2141U;

	t22 = ((x101-x102)-(x103/x104));

	if (t22 != 4294859383U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = UINT16_MAX;
	volatile int16_t x107 = 7512;
	int32_t t23 = 189485449;

	t23 = ((x105-x106)-(x107/x108));

	if (t23 != 64456) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x110 = -30260287;
	uint32_t x111 = 1213987504U;
	int64_t x112 = INT64_MIN;
	int64_t t24 = 7436035518LL;

	t24 = ((x109-x110)-(x111/x112));

	if (t24 != 30260286LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x117 = -1;
	int8_t x118 = 0;
	uint64_t x119 = 3LLU;
	static int16_t x120 = INT16_MIN;
	uint64_t t25 = UINT64_MAX;

	t25 = ((x117-x118)-(x119/x120));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x121 = -1;
	int64_t x122 = 528116958428LL;
	int8_t x123 = 0;
	uint32_t x124 = UINT32_MAX;
	int64_t t26 = -634589079521002699LL;

	t26 = ((x121-x122)-(x123/x124));

	if (t26 != -528116958429LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = INT16_MAX;
	uint32_t x126 = 1999511505U;
	int16_t x127 = -1;
	static int32_t x128 = -1;

	t27 = ((x125-x126)-(x127/x128));

	if (t27 != 2295488557U) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x130 = -1;
	static int8_t x131 = INT8_MIN;
	uint8_t x132 = 2U;

	t28 = ((x129-x130)-(x131/x132));

	if (t28 != 78) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile int8_t x139 = INT8_MIN;
	static uint32_t x140 = UINT32_MAX;
	volatile uint32_t t29 = 1789417148U;

	t29 = ((x137-x138)-(x139/x140));

	if (t29 != 4059681973U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = 73718LL;
	static volatile int64_t x142 = 100905051LL;
	volatile int64_t x143 = INT64_MAX;
	static int64_t t30 = 86118LL;

	t30 = ((x141-x142)-(x143/x144));

	if (t30 != 281474875879322LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x149 = 56028;
	static volatile int8_t x150 = INT8_MIN;
	int16_t x151 = 167;
	volatile int32_t t31 = 37070;

	t31 = ((x149-x150)-(x151/x152));

	if (t31 != 56156) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = -1LL;
	static int32_t x154 = -1;
	int8_t x156 = 1;
	int64_t t32 = 1474003299LL;

	t32 = ((x153-x154)-(x155/x156));

	if (t32 != -1579LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x157 = INT16_MAX;
	int8_t x159 = INT8_MIN;
	volatile int8_t x160 = INT8_MIN;
	static int32_t t33 = -58145996;

	t33 = ((x157-x158)-(x159/x160));

	if (t33 != 32894) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = -3;
	int32_t x163 = INT32_MAX;
	uint8_t x164 = 4U;
	int32_t t34 = 771;

	t34 = ((x161-x162)-(x163/x164));

	if (t34 != -536870914) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x165 = INT8_MIN;
	uint32_t x167 = 12084U;
	static uint32_t x168 = UINT32_MAX;
	static uint32_t t35 = 663U;

	t35 = ((x165-x166)-(x167/x168));

	if (t35 != 4294934401U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int32_t x174 = INT32_MAX;
	int32_t x175 = 3;

	t36 = ((x173-x174)-(x175/x176));

	if (t36 != 2147483648U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = -242;
	uint16_t x182 = UINT16_MAX;

	t37 = ((x181-x182)-(x183/x184));

	if (t37 != 18446744073709485817LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x185 = UINT8_MAX;
	int8_t x186 = -1;
	volatile uint64_t t38 = 75309438102635LLU;

	t38 = ((x185-x186)-(x187/x188));

	if (t38 != 18446744072571952485LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = INT64_MAX;
	uint8_t x194 = 21U;
	static int64_t x195 = -1LL;
	uint8_t x196 = UINT8_MAX;

	t39 = ((x193-x194)-(x195/x196));

	if (t39 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = -1;
	int32_t x198 = INT32_MIN;
	int8_t x199 = INT8_MIN;
	int64_t x200 = INT64_MIN;
	int64_t t40 = -50281950619513226LL;

	t40 = ((x197-x198)-(x199/x200));

	if (t40 != 2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x201 = 9229383LLU;
	int32_t x202 = INT32_MAX;
	uint64_t x203 = UINT64_MAX;
	int32_t x204 = -8842;
	uint64_t t41 = 5832417591LLU;

	t41 = ((x201-x202)-(x203/x204));

	if (t41 != 18446744071571297351LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = INT64_MAX;
	int16_t x206 = 211;
	int32_t x207 = -1;
	volatile int64_t t42 = 508557641508377LL;

	t42 = ((x205-x206)-(x207/x208));

	if (t42 != 9223372036854775596LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x210 = 26127U;
	uint16_t x211 = 17U;
	static uint64_t x212 = 8269912LLU;
	uint64_t t43 = 5364760163524743LLU;

	t43 = ((x209-x210)-(x211/x212));

	if (t43 != 4294941165LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x217 = 18U;
	int32_t x218 = INT32_MAX;
	static uint32_t x219 = UINT32_MAX;
	static int64_t x220 = -2LL;
	volatile int64_t t44 = -89958LL;

	t44 = ((x217-x218)-(x219/x220));

	if (t44 != 18LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x221 = INT16_MAX;
	volatile uint16_t x222 = UINT16_MAX;
	volatile int16_t x223 = INT16_MAX;

	t45 = ((x221-x222)-(x223/x224));

	if (t45 != -32769) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x226 = INT16_MAX;
	volatile int32_t x227 = -20552;
	int8_t x228 = INT8_MIN;
	uint64_t t46 = 5935371LLU;

	t46 = ((x225-x226)-(x227/x228));

	if (t46 != 18446744073709518688LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x229 = 1627591384LLU;
	int16_t x230 = INT16_MIN;
	volatile uint64_t t47 = 812762LLU;

	t47 = ((x229-x230)-(x231/x232));

	if (t47 != 1627624152LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x238 = INT32_MAX;
	static int64_t x239 = INT64_MIN;
	uint16_t x240 = 86U;
	int64_t t48 = -1LL;

	t48 = ((x237-x238)-(x239/x240));

	if (t48 != 107248509908967234LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x241 = UINT64_MAX;
	static int16_t x243 = 23;
	uint64_t t49 = 57632024023107043LLU;

	t49 = ((x241-x242)-(x243/x244));

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x245 = INT8_MIN;
	int8_t x246 = 60;
	uint8_t x247 = 7U;
	static uint8_t x248 = UINT8_MAX;
	volatile int32_t t50 = -201777;

	t50 = ((x245-x246)-(x247/x248));

	if (t50 != -188) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x249 = 0U;
	volatile int16_t x251 = 29;
	int8_t x252 = INT8_MIN;
	uint64_t t51 = 6LLU;

	t51 = ((x249-x250)-(x251/x252));

	if (t51 != 18437433324576801337LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t t52 = 2589687078436305LLU;

	t52 = ((x253-x254)-(x255/x256));

	if (t52 != 71817LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = INT64_MIN;
	volatile uint32_t x260 = 141553472U;
	int64_t t53 = 26762843721LL;

	t53 = ((x257-x258)-(x259/x260));

	if (t53 != -9223372036854697401LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = 1;
	static uint32_t x266 = 776U;
	volatile int64_t x267 = INT64_MAX;
	volatile int64_t t54 = 11977LL;

	t54 = ((x265-x266)-(x267/x268));

	if (t54 != 281479271677176LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = INT16_MAX;
	int64_t x270 = -1LL;
	static volatile int16_t x271 = -1;
	int64_t x272 = INT64_MAX;
	volatile int64_t t55 = 1233950791798708LL;

	t55 = ((x269-x270)-(x271/x272));

	if (t55 != 32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x273 = 3739438215980LLU;
	static int16_t x274 = INT16_MAX;
	int64_t x275 = INT64_MIN;
	static int64_t x276 = 43767992LL;
	uint64_t t56 = 4973786917819914LLU;

	t56 = ((x273-x274)-(x275/x276));

	if (t56 != 3950171452330LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x281 = INT64_MIN;
	int8_t x282 = INT8_MIN;
	static uint32_t x283 = 360U;
	volatile int8_t x284 = INT8_MAX;
	int64_t t57 = -3090214972720338LL;

	t57 = ((x281-x282)-(x283/x284));

	if (t57 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x286 = -32264LL;
	volatile uint64_t x288 = 1327254LLU;
	volatile uint64_t t58 = 0LLU;

	t58 = ((x285-x286)-(x287/x288));

	if (t58 != 18446730175281647907LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	int16_t x295 = INT16_MIN;
	int16_t x296 = INT16_MIN;
	volatile int32_t t59 = 2;

	t59 = ((x293-x294)-(x295/x296));

	if (t59 != 32766) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x297 = 4U;
	int16_t x300 = INT16_MIN;
	static int64_t t60 = 14214768LL;

	t60 = ((x297-x298)-(x299/x300));

	if (t60 != 5LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = -99;
	static uint32_t x302 = 1U;
	uint8_t x303 = 3U;
	uint32_t x304 = 117U;
	uint32_t t61 = 29U;

	t61 = ((x301-x302)-(x303/x304));

	if (t61 != 4294967196U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x306 = -1;
	static volatile int16_t x307 = -37;
	static int8_t x308 = INT8_MIN;
	static int64_t t62 = 9707490LL;

	t62 = ((x305-x306)-(x307/x308));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x309 = INT16_MAX;
	volatile int32_t x310 = 2984;
	uint16_t x311 = 25441U;
	uint8_t x312 = 55U;

	t63 = ((x309-x310)-(x311/x312));

	if (t63 != 29321) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x317 = -1LL;
	int64_t x319 = INT64_MIN;
	int8_t x320 = INT8_MIN;
	volatile int64_t t64 = 7733LL;

	t64 = ((x317-x318)-(x319/x320));

	if (t64 != -72057594037927809LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x323 = -884176;
	static volatile uint8_t x324 = UINT8_MAX;

	t65 = ((x321-x322)-(x323/x324));

	if (t65 != 455312284856844426LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x325 = INT16_MIN;
	uint8_t x326 = 0U;
	int16_t x327 = -1;
	static volatile int32_t t66 = 46449332;

	t66 = ((x325-x326)-(x327/x328));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x329 = 127U;
	static int8_t x330 = 54;
	int32_t x331 = -1;
	uint16_t x332 = 63U;
	static int32_t t67 = -138699934;

	t67 = ((x329-x330)-(x331/x332));

	if (t67 != 73) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x333 = INT32_MIN;
	static uint64_t x334 = 168214793LLU;
	volatile int64_t x335 = 1884313361660405LL;
	int64_t x336 = -1LL;

	t68 = ((x333-x334)-(x335/x336));

	if (t68 != 1884311045961964LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x337 = 384;
	int64_t x338 = -3481198101357814294LL;
	int64_t x339 = 0LL;
	int32_t x340 = -433290;
	volatile int64_t t69 = -246032644875LL;

	t69 = ((x337-x338)-(x339/x340));

	if (t69 != 3481198101357814678LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x341 = 3;
	int16_t x342 = 3165;
	int32_t x343 = INT32_MIN;
	static int64_t x344 = -6119451961309LL;

	t70 = ((x341-x342)-(x343/x344));

	if (t70 != -3162LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x345 = 971395341U;
	int16_t x346 = 1206;
	static int64_t x347 = INT64_MIN;
	int32_t x348 = -20129;
	int64_t t71 = 2550LL;

	t71 = ((x345-x346)-(x347/x348));

	if (t71 != -458212155778341LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x349 = -1;
	static uint64_t x350 = 913883209350209LLU;
	int64_t x351 = INT64_MAX;
	int16_t x352 = -1;
	volatile uint64_t t72 = 558169880361LLU;

	t72 = ((x349-x350)-(x351/x352));

	if (t72 != 9222458153645425597LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x353 = 30U;
	static volatile uint64_t x354 = UINT64_MAX;
	uint8_t x355 = 3U;
	static uint32_t x356 = 14011762U;
	static volatile uint64_t t73 = 212508076777753LLU;

	t73 = ((x353-x354)-(x355/x356));

	if (t73 != 31LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x358 = UINT8_MAX;
	int64_t x359 = 59624LL;
	uint64_t x360 = 3154LLU;
	volatile uint64_t t74 = 332202LLU;

	t74 = ((x357-x358)-(x359/x360));

	if (t74 != 32494LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x361 = INT16_MIN;
	uint8_t x362 = 46U;
	int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MAX;
	volatile int64_t t75 = 6LL;

	t75 = ((x361-x362)-(x363/x364));

	if (t75 != 4294934484LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x366 = UINT32_MAX;
	int8_t x367 = 2;
	static int32_t x368 = 159502;

	t76 = ((x365-x366)-(x367/x368));

	if (t76 != 256U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x369 = -1LL;
	uint8_t x371 = 6U;
	int8_t x372 = -1;

	t77 = ((x369-x370)-(x371/x372));

	if (t77 != -100LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x373 = INT8_MAX;
	uint16_t x374 = UINT16_MAX;
	static uint64_t x375 = 15837226354395LLU;

	t78 = ((x373-x374)-(x375/x376));

	if (t78 != 18446744073709486208LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x387 = 231;
	static int32_t x388 = -1;

	t79 = ((x385-x386)-(x387/x388));

	if (t79 != -65305) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x393 = -1LL;
	int16_t x394 = INT16_MIN;
	uint16_t x396 = UINT16_MAX;
	static int64_t t80 = 1LL;

	t80 = ((x393-x394)-(x395/x396));

	if (t80 != 26307LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x398 = 3921336;
	int8_t x399 = -1;
	int64_t x400 = -9652278422429LL;
	static volatile int64_t t81 = 741820640358224341LL;

	t81 = ((x397-x398)-(x399/x400));

	if (t81 != -3921464LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x401 = INT64_MIN;
	volatile int32_t x402 = INT32_MIN;
	int16_t x403 = 13;
	uint8_t x404 = 28U;
	int64_t t82 = 8442113646LL;

	t82 = ((x401-x402)-(x403/x404));

	if (t82 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x405 = 29736805900286838LL;
	uint8_t x407 = UINT8_MAX;
	uint32_t x408 = 8U;

	t83 = ((x405-x406)-(x407/x408));

	if (t83 != 29736805900221272LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x414 = 1386U;
	int16_t x415 = INT16_MAX;
	uint32_t x416 = UINT32_MAX;
	static volatile uint32_t t84 = 8U;

	t84 = ((x413-x414)-(x415/x416));

	if (t84 != 4294965911U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x419 = INT32_MAX;
	static int16_t x420 = INT16_MAX;
	volatile int32_t t85 = -108;

	t85 = ((x417-x418)-(x419/x420));

	if (t85 != -65410) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x421 = -2958764;
	int64_t x422 = 474763797287LL;
	int16_t x424 = INT16_MIN;
	static volatile uint64_t t86 = 310200LLU;

	t86 = ((x421-x422)-(x423/x424));

	if (t86 != 18446743598942795565LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x426 = INT8_MIN;
	static int16_t x427 = -1;
	uint8_t x428 = 6U;
	uint64_t t87 = 621372083759LLU;

	t87 = ((x425-x426)-(x427/x428));

	if (t87 != 30777083250233386LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x429 = UINT16_MAX;
	uint64_t x430 = UINT64_MAX;
	int64_t x431 = INT64_MAX;
	static uint32_t x432 = 8636510U;
	static uint64_t t88 = 579647479426LLU;

	t88 = ((x429-x430)-(x431/x432));

	if (t88 != 18446743005758322375LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x433 = 14U;
	volatile int32_t x434 = -2361;
	static int16_t x435 = INT16_MIN;

	t89 = ((x433-x434)-(x435/x436));

	if (t89 != 3864U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x437 = INT64_MIN;
	static int8_t x438 = INT8_MIN;
	uint32_t x439 = 47237417U;
	int64_t x440 = INT64_MIN;

	t90 = ((x437-x438)-(x439/x440));

	if (t90 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x447 = -3911751481155LL;
	int64_t t91 = -1LL;

	t91 = ((x445-x446)-(x447/x448));

	if (t91 != 15340198794LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x449 = INT8_MAX;
	int32_t x450 = INT32_MAX;
	int64_t x451 = INT64_MAX;
	uint8_t x452 = 3U;
	volatile int64_t t92 = -8134255029LL;

	t92 = ((x449-x450)-(x451/x452));

	if (t92 != -3074457347765742122LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x453 = 1744LLU;
	uint32_t x454 = 29526U;
	uint64_t x455 = 3032212293922813LLU;
	static int16_t x456 = 447;
	uint64_t t93 = 1080264622567626893LLU;

	t93 = ((x453-x454)-(x455/x456));

	if (t93 != 18446737290236830495LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x457 = UINT64_MAX;
	int8_t x458 = INT8_MIN;
	int32_t x460 = INT32_MIN;

	t94 = ((x457-x458)-(x459/x460));

	if (t94 != 127LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x461 = -1;
	uint32_t x462 = 7281U;
	int64_t x463 = INT64_MIN;
	int16_t x464 = INT16_MIN;

	t95 = ((x461-x462)-(x463/x464));

	if (t95 != -281470681750642LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x465 = 3;
	static uint8_t x466 = 19U;
	uint32_t x467 = UINT32_MAX;
	int64_t x468 = INT64_MAX;
	volatile int64_t t96 = -56468576904445LL;

	t96 = ((x465-x466)-(x467/x468));

	if (t96 != -16LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x469 = INT16_MIN;
	int8_t x470 = -1;
	volatile uint64_t x471 = UINT64_MAX;
	static int16_t x472 = -14;
	volatile uint64_t t97 = 7560783LLU;

	t97 = ((x469-x470)-(x471/x472));

	if (t97 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x477 = INT16_MIN;
	static uint64_t x478 = 82776LLU;
	uint64_t x480 = 11433LLU;
	static volatile uint64_t t98 = 118237815LLU;

	t98 = ((x477-x478)-(x479/x480));

	if (t98 != 18446744073709436072LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x482 = INT32_MAX;
	static volatile int8_t x483 = INT8_MIN;
	int16_t x484 = 1;

	t99 = ((x481-x482)-(x483/x484));

	if (t99 != 9223372034707292288LL) { NG(); } else { ; }
	
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

