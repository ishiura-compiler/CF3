#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
static uint64_t x7 = 12694226LLU;
volatile int32_t x9 = INT32_MIN;
int8_t x12 = -14;
int16_t x13 = INT16_MAX;
volatile int32_t x20 = INT32_MAX;
static volatile int32_t t5 = 2555;
int64_t t8 = 148999408858512LL;
int16_t x42 = INT16_MAX;
static int32_t x46 = -199181689;
volatile int64_t x47 = 2606450393684242LL;
static volatile int32_t t13 = -117;
uint8_t x72 = UINT8_MAX;
int16_t x90 = INT16_MAX;
int8_t x92 = -1;
int32_t t20 = -1790384;
int64_t t23 = -3740265275540LL;
int32_t x111 = INT32_MIN;
static volatile uint8_t x131 = 3U;
volatile int32_t x135 = INT32_MIN;
volatile int8_t x142 = INT8_MAX;
uint32_t x145 = 125988U;
volatile uint16_t x147 = 2U;
uint8_t x148 = UINT8_MAX;
volatile uint8_t x149 = 87U;
int64_t x150 = INT64_MIN;
int32_t x162 = INT32_MIN;
int64_t x166 = -10LL;
int64_t x170 = INT64_MIN;
int8_t x173 = INT8_MIN;
int64_t x174 = INT64_MIN;
int16_t x187 = INT16_MIN;
static volatile uint64_t x191 = UINT64_MAX;
uint16_t x200 = UINT16_MAX;
volatile uint64_t t43 = 5150401564068LLU;
int32_t x206 = 598428218;
int32_t x210 = -1;
uint32_t x214 = 43825U;
volatile uint64_t t46 = 3796921LLU;
uint8_t x220 = UINT8_MAX;
volatile uint32_t t48 = 0U;
uint64_t x225 = 5706LLU;
uint8_t x227 = 17U;
static int8_t x235 = -1;
uint64_t x236 = 2381711LLU;
volatile int64_t t52 = -26LL;
int16_t x242 = -66;
int16_t x245 = INT16_MAX;
int8_t x246 = -12;
int8_t x248 = -1;
uint64_t t56 = 146933561099738475LLU;
volatile int64_t t58 = -1065731125644485LL;
volatile int32_t t60 = 286;
int16_t x307 = INT16_MIN;
static uint16_t x309 = 13253U;
uint16_t x319 = UINT16_MAX;
static int64_t t67 = -31407067520LL;
int8_t x329 = -1;
int32_t x332 = INT32_MIN;
static int64_t x335 = INT64_MIN;
int8_t x340 = INT8_MIN;
int32_t t71 = 530684584;
int32_t x352 = INT32_MIN;
volatile uint64_t t76 = 5174679630147483LLU;
uint16_t x368 = UINT16_MAX;
int16_t x373 = -1;
int32_t x374 = INT32_MAX;
int32_t t79 = 28;
uint64_t t80 = 7000618982LLU;
volatile int64_t x383 = INT64_MAX;
uint16_t x386 = 1U;
volatile int64_t t85 = 3400862454LL;
static int16_t x404 = INT16_MIN;
int16_t x408 = -634;
static int64_t x413 = -1LL;
volatile int64_t x414 = -1LL;
uint64_t x420 = 570LLU;
static volatile uint32_t x421 = UINT32_MAX;
int8_t x429 = -1;
volatile int64_t t94 = 1331061045149646LL;
static int64_t x445 = 400823977256627620LL;
int64_t x446 = INT64_MIN;
uint32_t x452 = 6U;
volatile int64_t t96 = -3LL;
uint64_t x458 = 1213155499739LLU;


void f0(void) {
	volatile uint32_t x1 = 619U;
	volatile int8_t x2 = 3;
	uint8_t x3 = UINT8_MAX;
	volatile uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 45309534LLU;

	t0 = (x1+((x2/x3)+x4));

	if (t0 != 618LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	int16_t x8 = -429;
	static uint64_t t1 = 17182456109566LLU;

	t1 = (x5+((x6/x7)+x8));

	if (t1 != 1453160206055LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	uint64_t x11 = UINT64_MAX;
	static uint64_t t2 = 372730026764LLU;

	t2 = (x9+((x10/x11)+x12));

	if (t2 != 18446744071562067954LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = INT16_MIN;
	int16_t x15 = INT16_MAX;
	volatile int64_t x16 = -3564093889501030232LL;
	int64_t t3 = 15869130456LL;

	t3 = (x13+((x14/x15)+x16));

	if (t3 != -3564093889500997466LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = 4593878LL;
	volatile int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MAX;
	int64_t t4 = -854LL;

	t4 = (x17+((x18/x19)+x20));

	if (t4 != -2142889773LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -41350468;
	static int8_t x26 = INT8_MAX;
	int16_t x27 = -1;
	uint16_t x28 = 1U;

	t5 = (x25+((x26/x27)+x28));

	if (t5 != -41350594) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = INT32_MAX;
	static int16_t x31 = INT16_MIN;
	int8_t x32 = -47;
	int32_t t6 = -85889;

	t6 = (x29+((x30/x31)+x32));

	if (t6 != -98350) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	static int32_t x34 = -1;
	static int8_t x35 = -1;
	uint64_t x36 = 76837553790303LLU;
	volatile uint64_t t7 = 1920LLU;

	t7 = (x33+((x34/x35)+x36));

	if (t7 != 76841848757599LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	volatile int8_t x38 = 7;
	static int8_t x39 = INT8_MIN;
	uint32_t x40 = 2857077U;

	t8 = (x37+((x38/x39)+x40));

	if (t8 != -9223372036851918731LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 698;
	int8_t x43 = 13;
	static int32_t x44 = 17742351;
	int32_t t9 = -3966;

	t9 = (x41+((x42/x43)+x44));

	if (t9 != 17745569) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 20737734468630LL;
	int8_t x48 = INT8_MAX;
	static int64_t t10 = 33169360834LL;

	t10 = (x45+((x46/x47)+x48));

	if (t10 != 20737734468757LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x49 = 637LLU;
	int8_t x50 = -2;
	int8_t x51 = 1;
	volatile uint64_t x52 = 258970232070806LLU;
	static uint64_t t11 = 18551192285883LLU;

	t11 = (x49+((x50/x51)+x52));

	if (t11 != 258970232071441LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 16866019159153LLU;
	int64_t x54 = INT64_MIN;
	int8_t x55 = -31;
	int8_t x56 = -1;
	static uint64_t t12 = 11288LLU;

	t12 = (x53+((x54/x55)+x56));

	if (t12 != 297544996240280952LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = 0;
	uint8_t x62 = UINT8_MAX;
	volatile int32_t x63 = INT32_MIN;
	uint8_t x64 = 31U;

	t13 = (x61+((x62/x63)+x64));

	if (t13 != 31) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MAX;
	int16_t x66 = INT16_MIN;
	int8_t x67 = 1;
	int64_t x68 = -4150LL;
	static volatile int64_t t14 = 243240LL;

	t14 = (x65+((x66/x67)+x68));

	if (t14 != 9223372036854738889LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = INT32_MIN;
	volatile uint8_t x70 = 1U;
	int64_t x71 = -11761419919LL;
	int64_t t15 = 0LL;

	t15 = (x69+((x70/x71)+x72));

	if (t15 != -2147483393LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = 43;
	static volatile int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MIN;
	int32_t x76 = INT32_MAX;
	volatile int64_t t16 = 975859500021770LL;

	t16 = (x73+((x74/x75)+x76));

	if (t16 != -281472829226965LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = -353351LL;
	int8_t x78 = -36;
	int16_t x79 = 1;
	static int64_t x80 = INT64_MAX;
	volatile int64_t t17 = 247799111760LL;

	t17 = (x77+((x78/x79)+x80));

	if (t17 != 9223372036854422420LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = UINT64_MAX;
	static int32_t x82 = 12983;
	int32_t x83 = -26301;
	volatile uint8_t x84 = 0U;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x81+((x82/x83)+x84));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = UINT8_MAX;
	uint64_t x86 = 2305231722025598LLU;
	static uint64_t x87 = UINT64_MAX;
	volatile uint32_t x88 = 1U;
	volatile uint64_t t19 = 845343510099339424LLU;

	t19 = (x85+((x86/x87)+x88));

	if (t19 != 256LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x89 = INT8_MAX;
	static int8_t x91 = -2;

	t20 = (x89+((x90/x91)+x92));

	if (t20 != -16257) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = UINT8_MAX;
	volatile int32_t x94 = -1;
	uint32_t x95 = 14699163U;
	static volatile uint64_t x96 = UINT64_MAX;
	volatile uint64_t t21 = 100324LLU;

	t21 = (x93+((x94/x95)+x96));

	if (t21 != 546LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = UINT32_MAX;
	static volatile int32_t x98 = INT32_MIN;
	volatile int8_t x99 = 1;
	volatile uint16_t x100 = 355U;
	uint32_t t22 = 430055U;

	t22 = (x97+((x98/x99)+x100));

	if (t22 != 2147484002U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = INT32_MIN;
	int32_t x102 = -1;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MIN;

	t23 = (x101+((x102/x103)+x104));

	if (t23 != -2147516416LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -1LL;
	uint64_t x110 = UINT64_MAX;
	static uint32_t x112 = UINT32_MAX;
	uint64_t t24 = 2900380845LLU;

	t24 = (x109+((x110/x111)+x112));

	if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = UINT32_MAX;
	static int32_t x118 = -1157;
	int64_t x119 = -1808676LL;
	int8_t x120 = INT8_MAX;
	int64_t t25 = -236886LL;

	t25 = (x117+((x118/x119)+x120));

	if (t25 != 4294967422LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x121 = 239599351LLU;
	uint64_t x122 = 47320747LLU;
	uint32_t x123 = UINT32_MAX;
	volatile uint64_t x124 = 2210058705630LLU;
	volatile uint64_t t26 = 198155767246LLU;

	t26 = (x121+((x122/x123)+x124));

	if (t26 != 2210298304981LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MAX;
	uint8_t x126 = UINT8_MAX;
	volatile int64_t x127 = -1LL;
	static int8_t x128 = INT8_MIN;
	int64_t t27 = -3LL;

	t27 = (x125+((x126/x127)+x128));

	if (t27 != 9223372036854775424LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MAX;
	uint64_t x130 = 1LLU;
	int64_t x132 = INT64_MAX;
	static volatile uint64_t t28 = 913LLU;

	t28 = (x129+((x130/x131)+x132));

	if (t28 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = 0;
	uint64_t x134 = 783373695038305LLU;
	int64_t x136 = INT64_MIN;
	uint64_t t29 = 3014906591540050238LLU;

	t29 = (x133+((x134/x135)+x136));

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = UINT8_MAX;
	uint16_t x138 = 8512U;
	int8_t x139 = 28;
	int32_t x140 = INT32_MIN;
	int32_t t30 = 378692;

	t30 = (x137+((x138/x139)+x140));

	if (t30 != -2147483089) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x141 = -1;
	int8_t x143 = INT8_MAX;
	volatile uint8_t x144 = 1U;
	static int32_t t31 = 88;

	t31 = (x141+((x142/x143)+x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x146 = INT32_MAX;
	uint32_t t32 = 12759599U;

	t32 = (x145+((x146/x147)+x148));

	if (t32 != 1073868066U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x151 = INT64_MAX;
	uint64_t x152 = 542858LLU;
	uint64_t t33 = 582266894567217183LLU;

	t33 = (x149+((x150/x151)+x152));

	if (t33 != 542944LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x157 = 1497LLU;
	static uint16_t x158 = UINT16_MAX;
	volatile int16_t x159 = 3011;
	static int16_t x160 = INT16_MAX;
	static uint64_t t34 = 7387726996156987216LLU;

	t34 = (x157+((x158/x159)+x160));

	if (t34 != 34285LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x161 = 14U;
	int16_t x163 = -335;
	int8_t x164 = INT8_MIN;
	static int32_t t35 = -124;

	t35 = (x161+((x162/x163)+x164));

	if (t35 != 6410284) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x165 = 4527541776405178789LL;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = 459113583U;
	int64_t t36 = 28LL;

	t36 = (x165+((x166/x167)+x168));

	if (t36 != 4527541776864292372LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x169 = 50U;
	uint8_t x171 = 2U;
	int32_t x172 = INT32_MIN;
	int64_t t37 = -4882102LL;

	t37 = (x169+((x170/x171)+x172));

	if (t37 != -4611686020574871502LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x175 = INT32_MIN;
	int64_t x176 = -1052571910112973LL;
	static int64_t t38 = -115026440540392418LL;

	t38 = (x173+((x174/x175)+x176));

	if (t38 != -1052567615145805LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MAX;
	int32_t x183 = 656619;
	int8_t x184 = 4;
	volatile int32_t t39 = -6289848;

	t39 = (x181+((x182/x183)+x184));

	if (t39 != -124) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x185 = 4416;
	uint16_t x186 = 863U;
	uint8_t x188 = 46U;
	static volatile int32_t t40 = 23;

	t40 = (x185+((x186/x187)+x188));

	if (t40 != 4462) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = -1522166LL;
	uint8_t x190 = 15U;
	volatile int32_t x192 = -3;
	uint64_t t41 = 7244493LLU;

	t41 = (x189+((x190/x191)+x192));

	if (t41 != 18446744073708029447LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x194 = 56576898472LL;
	int16_t x195 = -1;
	int16_t x196 = INT16_MIN;
	volatile int64_t t42 = 184097LL;

	t42 = (x193+((x194/x195)+x196));

	if (t42 != -56576865705LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x197 = INT8_MIN;
	uint64_t x198 = 69LLU;
	int64_t x199 = -724244LL;

	t43 = (x197+((x198/x199)+x200));

	if (t43 != 65407LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x205 = UINT64_MAX;
	int8_t x207 = INT8_MIN;
	static int16_t x208 = -10;
	uint64_t t44 = 91564LLU;

	t44 = (x205+((x206/x207)+x208));

	if (t44 != 18446744073704876385LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = -1;
	volatile int8_t x211 = INT8_MAX;
	int16_t x212 = INT16_MIN;
	int32_t t45 = -16;

	t45 = (x209+((x210/x211)+x212));

	if (t45 != -32769) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x213 = 4549521247LLU;
	int64_t x215 = INT64_MIN;
	static int16_t x216 = -1;

	t46 = (x213+((x214/x215)+x216));

	if (t46 != 4549521246LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MIN;
	int32_t x218 = -4734;
	uint64_t x219 = 40LLU;
	volatile uint64_t t47 = 64752LLU;

	t47 = (x217+((x218/x219)+x220));

	if (t47 != 461168599695255279LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = INT16_MAX;
	static volatile int8_t x222 = -1;
	static uint32_t x223 = 258948294U;
	static int8_t x224 = INT8_MIN;

	t48 = (x221+((x222/x223)+x224));

	if (t48 != 32655U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x226 = INT16_MIN;
	volatile uint8_t x228 = 3U;
	uint64_t t49 = 12LLU;

	t49 = (x225+((x226/x227)+x228));

	if (t49 != 3782LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x229 = 2871938LL;
	uint8_t x230 = 0U;
	volatile uint8_t x231 = UINT8_MAX;
	int32_t x232 = INT32_MAX;
	int64_t t50 = -42LL;

	t50 = (x229+((x230/x231)+x232));

	if (t50 != 2150355585LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = 58;
	volatile int64_t x234 = -88824898658277447LL;
	uint64_t t51 = 12623062285966345LLU;

	t51 = (x233+((x234/x235)+x236));

	if (t51 != 88824898660659216LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x237 = INT32_MIN;
	volatile int8_t x238 = -1;
	uint32_t x239 = 453U;
	static int64_t x240 = -5262040LL;

	t52 = (x237+((x238/x239)+x240));

	if (t52 != -2143264524LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = -1;
	int64_t x243 = -1LL;
	int8_t x244 = 0;
	static int64_t t53 = 216448LL;

	t53 = (x241+((x242/x243)+x244));

	if (t53 != 65LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x247 = INT64_MAX;
	int64_t t54 = -294956552LL;

	t54 = (x245+((x246/x247)+x248));

	if (t54 != 32766LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x265 = INT32_MIN;
	uint8_t x266 = 6U;
	static uint32_t x267 = 1911175841U;
	uint8_t x268 = UINT8_MAX;
	volatile uint32_t t55 = 468U;

	t55 = (x265+((x266/x267)+x268));

	if (t55 != 2147483903U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = -169;
	uint64_t x270 = 292LLU;
	int16_t x271 = INT16_MIN;
	int64_t x272 = -1LL;

	t56 = (x269+((x270/x271)+x272));

	if (t56 != 18446744073709551446LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x277 = 30;
	int16_t x278 = 165;
	int16_t x279 = 6;
	volatile uint8_t x280 = 23U;
	int32_t t57 = -2780;

	t57 = (x277+((x278/x279)+x280));

	if (t57 != 80) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x281 = -1LL;
	uint32_t x282 = UINT32_MAX;
	int32_t x283 = INT32_MIN;
	int32_t x284 = 1784;

	t58 = (x281+((x282/x283)+x284));

	if (t58 != 1784LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = 6;
	int16_t x286 = 38;
	int32_t x287 = -1;
	int32_t x288 = INT32_MAX;
	int32_t t59 = -3650206;

	t59 = (x285+((x286/x287)+x288));

	if (t59 != 2147483615) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x289 = -2;
	volatile int8_t x290 = -14;
	uint8_t x291 = UINT8_MAX;
	static uint8_t x292 = 3U;

	t60 = (x289+((x290/x291)+x292));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x293 = 93U;
	int32_t x294 = 404760108;
	int8_t x295 = INT8_MAX;
	int8_t x296 = INT8_MAX;
	volatile int32_t t61 = 45326001;

	t61 = (x293+((x294/x295)+x296));

	if (t61 != 3187307) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x297 = 1;
	static volatile uint8_t x298 = 5U;
	int32_t x299 = 50151;
	int32_t x300 = 1361;
	volatile int32_t t62 = -187241;

	t62 = (x297+((x298/x299)+x300));

	if (t62 != 1362) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int32_t x302 = INT32_MIN;
	int32_t x303 = INT32_MAX;
	int32_t x304 = -1;
	static volatile uint32_t t63 = 3U;

	t63 = (x301+((x302/x303)+x304));

	if (t63 != 4294967293U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x305 = -33186438;
	uint8_t x306 = 1U;
	static int8_t x308 = 0;
	int32_t t64 = -10788740;

	t64 = (x305+((x306/x307)+x308));

	if (t64 != -33186438) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x310 = 44670U;
	volatile int64_t x311 = -1LL;
	int16_t x312 = INT16_MAX;
	volatile int64_t t65 = -1101290909LL;

	t65 = (x309+((x310/x311)+x312));

	if (t65 != 1350LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x313 = INT32_MAX;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = INT32_MIN;
	static volatile int8_t x316 = -1;
	int32_t t66 = -38514;

	t66 = (x313+((x314/x315)+x316));

	if (t66 != 2147483646) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x317 = INT32_MIN;
	int64_t x318 = 2369003389106603613LL;
	uint32_t x320 = 13U;

	t67 = (x317+((x318/x319)+x320));

	if (t67 != 36146527104090LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x321 = UINT16_MAX;
	uint64_t x322 = UINT64_MAX;
	volatile int64_t x323 = INT64_MIN;
	volatile uint8_t x324 = 91U;
	volatile uint64_t t68 = 65687304LLU;

	t68 = (x321+((x322/x323)+x324));

	if (t68 != 65627LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x330 = 17213352008LLU;
	volatile int16_t x331 = -1;
	uint64_t t69 = 3385266LLU;

	t69 = (x329+((x330/x331)+x332));

	if (t69 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x333 = 90U;
	int32_t x334 = -1;
	static int32_t x336 = INT32_MIN;
	int64_t t70 = -556746137200046144LL;

	t70 = (x333+((x334/x335)+x336));

	if (t70 != -2147483558LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x337 = 40;
	volatile int8_t x338 = -8;
	volatile int16_t x339 = INT16_MIN;

	t71 = (x337+((x338/x339)+x340));

	if (t71 != -88) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x341 = -1LL;
	int32_t x342 = INT32_MIN;
	uint64_t x343 = UINT64_MAX;
	uint64_t x344 = 6LLU;
	uint64_t t72 = 2535278823546643864LLU;

	t72 = (x341+((x342/x343)+x344));

	if (t72 != 5LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x345 = -1;
	volatile int8_t x346 = -1;
	static int16_t x347 = INT16_MIN;
	int64_t x348 = -100832977LL;
	int64_t t73 = 331LL;

	t73 = (x345+((x346/x347)+x348));

	if (t73 != -100832978LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = 10784692865597816LLU;
	uint16_t x350 = 82U;
	int8_t x351 = INT8_MAX;
	static volatile uint64_t t74 = 30LLU;

	t74 = (x349+((x350/x351)+x352));

	if (t74 != 10784690718114168LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x353 = 5329U;
	int64_t x354 = 885492LL;
	static volatile int8_t x355 = -1;
	int64_t x356 = -1LL;
	volatile int64_t t75 = 4965269623103LL;

	t75 = (x353+((x354/x355)+x356));

	if (t75 != -880164LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x361 = 416734502251049LLU;
	static int32_t x362 = INT32_MIN;
	static volatile uint16_t x363 = 293U;
	static int8_t x364 = INT8_MAX;

	t76 = (x361+((x362/x363)+x364));

	if (t76 != 416734494921881LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x365 = INT8_MIN;
	volatile uint16_t x366 = 10148U;
	int32_t x367 = -543994;
	volatile int32_t t77 = 106;

	t77 = (x365+((x366/x367)+x368));

	if (t77 != 65407) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x369 = 7077088623LLU;
	static int32_t x370 = INT32_MAX;
	int64_t x371 = -1LL;
	volatile int8_t x372 = INT8_MAX;
	static volatile uint64_t t78 = 768LLU;

	t78 = (x369+((x370/x371)+x372));

	if (t78 != 4929605103LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x375 = 97;
	static int16_t x376 = INT16_MIN;

	t79 = (x373+((x374/x375)+x376));

	if (t79 != 22106237) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x377 = UINT64_MAX;
	int8_t x378 = 1;
	static volatile uint16_t x379 = 30059U;
	int64_t x380 = -1LL;

	t80 = (x377+((x378/x379)+x380));

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x381 = INT32_MIN;
	uint8_t x382 = 46U;
	volatile uint32_t x384 = 73853755U;
	static volatile int64_t t81 = -8040501987647894LL;

	t81 = (x381+((x382/x383)+x384));

	if (t81 != -2073629893LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x385 = -1LL;
	int8_t x387 = INT8_MIN;
	volatile uint64_t x388 = 30656626458LLU;
	volatile uint64_t t82 = 28377LLU;

	t82 = (x385+((x386/x387)+x388));

	if (t82 != 30656626457LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x389 = 1;
	uint32_t x390 = 3558260U;
	int8_t x391 = -1;
	volatile int16_t x392 = INT16_MAX;
	volatile uint32_t t83 = 37955275U;

	t83 = (x389+((x390/x391)+x392));

	if (t83 != 32768U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = INT8_MIN;
	uint8_t x394 = UINT8_MAX;
	int16_t x395 = INT16_MAX;
	int16_t x396 = INT16_MAX;
	int32_t t84 = -22;

	t84 = (x393+((x394/x395)+x396));

	if (t84 != 32639) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x397 = 5112U;
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MAX;
	static int32_t x400 = 2004668;

	t85 = (x397+((x398/x399)+x400));

	if (t85 != 2009780LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = INT64_MAX;
	volatile int64_t x402 = INT64_MIN;
	uint8_t x403 = UINT8_MAX;
	int64_t t86 = 1LL;

	t86 = (x401+((x402/x403)+x404));

	if (t86 != 9187201950435704703LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x405 = 137U;
	int32_t x406 = -1;
	int32_t x407 = -1;
	volatile int32_t t87 = 303062788;

	t87 = (x405+((x406/x407)+x408));

	if (t87 != -496) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x415 = -1;
	int64_t x416 = 2954875712804838480LL;
	int64_t t88 = 103762676670223037LL;

	t88 = (x413+((x414/x415)+x416));

	if (t88 != 2954875712804838480LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x417 = 5LL;
	uint8_t x418 = UINT8_MAX;
	static uint32_t x419 = UINT32_MAX;
	static volatile uint64_t t89 = 4194372LLU;

	t89 = (x417+((x418/x419)+x420));

	if (t89 != 575LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x422 = 6950761478705024LLU;
	int16_t x423 = INT16_MAX;
	static volatile int64_t x424 = -153412632728405LL;
	volatile uint64_t t90 = 3566000376425LLU;

	t90 = (x421+((x422/x423)+x424));

	if (t90 != 18446590877498670559LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x425 = 30U;
	int8_t x426 = 17;
	int16_t x427 = -12;
	int64_t x428 = -6LL;
	volatile int64_t t91 = -3167614LL;

	t91 = (x425+((x426/x427)+x428));

	if (t91 != 23LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x430 = -1LL;
	uint32_t x431 = UINT32_MAX;
	int8_t x432 = 15;
	static volatile int64_t t92 = -16575502753LL;

	t92 = (x429+((x430/x431)+x432));

	if (t92 != 14LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x433 = INT8_MIN;
	uint8_t x434 = 3U;
	uint16_t x435 = UINT16_MAX;
	int8_t x436 = INT8_MIN;
	volatile int32_t t93 = 678;

	t93 = (x433+((x434/x435)+x436));

	if (t93 != -256) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x441 = 6487U;
	static int16_t x442 = -699;
	int64_t x443 = 2075495466LL;
	int32_t x444 = INT32_MIN;

	t94 = (x441+((x442/x443)+x444));

	if (t94 != -2147477161LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x447 = INT32_MIN;
	volatile int64_t x448 = INT64_MIN;
	volatile int64_t t95 = -1LL;

	t95 = (x445+((x446/x447)+x448));

	if (t95 != -8822548055303180892LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x449 = 7911407U;
	volatile int64_t x450 = -1LL;
	uint8_t x451 = 1U;

	t96 = (x449+((x450/x451)+x452));

	if (t96 != 7911412LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x453 = INT16_MIN;
	static uint16_t x454 = UINT16_MAX;
	uint64_t x455 = UINT64_MAX;
	int64_t x456 = INT64_MAX;
	uint64_t t97 = 10882422312682377LLU;

	t97 = (x453+((x454/x455)+x456));

	if (t97 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x457 = UINT64_MAX;
	int32_t x459 = -83546432;
	int64_t x460 = INT64_MIN;
	uint64_t t98 = 15901611002633521LLU;

	t98 = (x457+((x458/x459)+x460));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x461 = 25566LLU;
	static volatile uint16_t x462 = UINT16_MAX;
	uint32_t x463 = 204538U;
	uint32_t x464 = 3U;
	static volatile uint64_t t99 = 152537367609121416LLU;

	t99 = (x461+((x462/x463)+x464));

	if (t99 != 25569LLU) { NG(); } else { ; }
	
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

