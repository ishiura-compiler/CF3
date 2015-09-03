#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
static int64_t x12 = -7157LL;
uint32_t t3 = 6864U;
int32_t t8 = -3736;
int64_t t9 = -179145967334361367LL;
static int64_t x41 = 75824527LL;
int16_t x45 = INT16_MIN;
static uint8_t x47 = 11U;
int8_t x52 = INT8_MIN;
int32_t t12 = 4;
uint8_t x56 = 12U;
int64_t x58 = -4760379747525521LL;
int32_t x62 = -3057162;
int16_t x63 = -1579;
int16_t x64 = INT16_MIN;
volatile uint32_t t15 = 99655871U;
uint8_t x66 = UINT8_MAX;
uint32_t x72 = UINT32_MAX;
volatile uint16_t x75 = 3U;
uint8_t x76 = UINT8_MAX;
uint64_t t18 = 64942245875LLU;
int64_t t19 = -152885293487666LL;
uint16_t x86 = 133U;
int64_t x88 = INT64_MIN;
volatile int64_t t21 = -1990666140LL;
uint64_t x90 = 113570LLU;
uint64_t t22 = 4213610095LLU;
int32_t t24 = -61367;
int8_t x109 = INT8_MIN;
volatile int64_t x110 = -1LL;
uint64_t x118 = 25LLU;
uint64_t t28 = 4384844412908343LLU;
static uint32_t x124 = UINT32_MAX;
int32_t t29 = -154456947;
int16_t x126 = INT16_MIN;
uint16_t x134 = 7074U;
static int64_t x135 = INT64_MIN;
int16_t x146 = INT16_MIN;
volatile int16_t x147 = INT16_MAX;
static int16_t x151 = INT16_MIN;
volatile int32_t t36 = 16727;
static volatile int64_t t37 = 2850165068008LL;
int8_t x160 = INT8_MIN;
uint64_t x165 = UINT64_MAX;
int16_t x173 = -1;
uint32_t x185 = 18U;
int64_t x186 = INT64_MAX;
uint16_t x188 = 7U;
int64_t t45 = 1760360543020441755LL;
int32_t x194 = INT32_MAX;
int8_t x196 = 3;
int32_t x198 = INT32_MAX;
int32_t t48 = 0;
volatile uint32_t t49 = 16U;
int32_t x210 = INT32_MAX;
int16_t x212 = INT16_MIN;
uint64_t x217 = UINT64_MAX;
int16_t x220 = 93;
uint64_t t53 = 48077LLU;
uint16_t x222 = 24571U;
uint16_t x230 = UINT16_MAX;
uint32_t x232 = 126050098U;
volatile uint16_t x234 = 932U;
volatile int32_t t58 = 9637954;
int32_t x242 = -1;
volatile int32_t t59 = 0;
uint8_t x251 = 64U;
static int16_t x254 = -1;
volatile int32_t t62 = 4;
int16_t x258 = INT16_MAX;
volatile uint32_t x259 = 70U;
volatile int32_t x261 = INT32_MIN;
int32_t t64 = 631875544;
volatile int32_t x266 = -1;
volatile int64_t t66 = 3449176347080162LL;
static int8_t x274 = -19;
int64_t x276 = INT64_MAX;
static int32_t t67 = -614380873;
uint64_t x290 = UINT64_MAX;
uint64_t t73 = 20427310LLU;
int16_t x304 = INT16_MAX;
int8_t x310 = 1;
int64_t x311 = -1LL;
int32_t x319 = 9;
uint64_t x331 = 2051387170117340LLU;
uint8_t x334 = 50U;
static int32_t x343 = -86028256;
int32_t t86 = -17;
static int64_t x353 = 44LL;
uint32_t x360 = UINT32_MAX;
static volatile uint64_t t88 = 6LLU;
int32_t x366 = 10412745;
static uint32_t x374 = UINT32_MAX;
uint32_t x377 = 166676U;
uint32_t t92 = 3U;
int16_t x388 = -1;
volatile int64_t t95 = -30373892035LL;
uint64_t x399 = UINT64_MAX;
static int32_t t97 = -32700;
volatile int8_t x402 = INT8_MAX;
static volatile uint32_t x405 = 12369U;
uint32_t x407 = UINT32_MAX;
volatile int32_t x408 = INT32_MIN;
uint32_t t99 = 949U;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int32_t x2 = INT32_MIN;
	volatile int64_t x3 = INT64_MAX;
	int32_t x4 = -13455;
	volatile int64_t t0 = -882LL;

	t0 = (x1%(x2|(x3==x4)));

	if (t0 != 2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 45;
	int8_t x7 = 24;
	uint16_t x8 = 206U;
	volatile int64_t t1 = 13354825704445LL;

	t1 = (x5%(x6|(x7==x8)));

	if (t1 != 7LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 486U;
	int8_t x10 = INT8_MAX;
	int64_t x11 = INT64_MIN;
	uint32_t t2 = 321U;

	t2 = (x9%(x10|(x11==x12)));

	if (t2 != 105U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 16650815U;
	int16_t x14 = INT16_MIN;
	uint16_t x15 = 5481U;
	volatile int16_t x16 = INT16_MIN;

	t3 = (x13%(x14|(x15==x16)));

	if (t3 != 16650815U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 0U;
	static int8_t x18 = -1;
	uint64_t x19 = 58LLU;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = -18;

	t4 = (x17%(x18|(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -234625;
	uint16_t x22 = 49U;
	static int8_t x23 = INT8_MAX;
	int16_t x24 = 387;
	volatile int32_t t5 = -20706;

	t5 = (x21%(x22|(x23==x24)));

	if (t5 != -13) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -11;
	int8_t x26 = INT8_MIN;
	static uint16_t x27 = 1327U;
	static int16_t x28 = -43;
	int32_t t6 = 2097;

	t6 = (x25%(x26|(x27==x28)));

	if (t6 != -11) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	uint32_t x30 = UINT32_MAX;
	uint32_t x31 = 10650U;
	int32_t x32 = INT32_MAX;
	uint32_t t7 = 13U;

	t7 = (x29%(x30|(x31==x32)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -1;
	int8_t x34 = INT8_MAX;
	volatile uint8_t x35 = 0U;
	volatile int8_t x36 = INT8_MIN;

	t8 = (x33%(x34|(x35==x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int32_t x38 = INT32_MIN;
	static volatile int64_t x39 = -1LL;
	int32_t x40 = INT32_MAX;

	t9 = (x37%(x38|(x39==x40)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = UINT8_MAX;
	int64_t x43 = INT64_MIN;
	int8_t x44 = INT8_MAX;
	static volatile int64_t t10 = 509456LL;

	t10 = (x41%(x42|(x43==x44)));

	if (t10 != 22LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = INT8_MIN;
	int8_t x48 = 7;
	volatile int32_t t11 = -99401571;

	t11 = (x45%(x46|(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = 115952;
	int16_t x50 = -1;
	int16_t x51 = INT16_MAX;

	t12 = (x49%(x50|(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 6709656879701996LLU;
	static uint8_t x54 = 1U;
	volatile int32_t x55 = INT32_MIN;
	static volatile uint64_t t13 = 15LLU;

	t13 = (x53%(x54|(x55==x56)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint16_t x59 = 6U;
	int8_t x60 = INT8_MIN;
	int64_t t14 = -1002775046122062LL;

	t14 = (x57%(x58|(x59==x60)));

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;

	t15 = (x61%(x62|(x63==x64)));

	if (t15 != 3057161U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = 13725;
	uint16_t x67 = 43U;
	uint64_t x68 = 6683444127975629LLU;
	int32_t t16 = -63962;

	t16 = (x65%(x66|(x67==x68)));

	if (t16 != 210) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 15;
	volatile uint8_t x70 = UINT8_MAX;
	volatile uint64_t x71 = UINT64_MAX;
	volatile int32_t t17 = -184;

	t17 = (x69%(x70|(x71==x72)));

	if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 2401569281782215344LLU;
	int32_t x74 = INT32_MIN;

	t18 = (x73%(x74|(x75==x76)));

	if (t18 != 2401569281782215344LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	volatile int32_t x78 = INT32_MAX;
	int64_t x79 = INT64_MAX;
	int32_t x80 = INT32_MIN;

	t19 = (x77%(x78|(x79==x80)));

	if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 783025713197515LL;
	int8_t x82 = -1;
	static int16_t x83 = INT16_MAX;
	volatile uint32_t x84 = 667355862U;
	int64_t t20 = -30364855575530LL;

	t20 = (x81%(x82|(x83==x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	uint8_t x87 = 3U;

	t21 = (x85%(x86|(x87==x88)));

	if (t21 != 112LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	int32_t x91 = INT32_MIN;
	uint32_t x92 = 335373758U;

	t22 = (x89%(x90|(x91==x92)));

	if (t22 != 127LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = 8207103501423724402LLU;
	uint8_t x94 = 1U;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = UINT16_MAX;
	volatile uint64_t t23 = 168LLU;

	t23 = (x93%(x94|(x95==x96)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	int16_t x98 = INT16_MIN;
	static int8_t x99 = INT8_MIN;
	static uint16_t x100 = UINT16_MAX;

	t24 = (x97%(x98|(x99==x100)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MAX;
	static int32_t x102 = INT32_MAX;
	uint32_t x103 = 135013353U;
	int16_t x104 = INT16_MAX;
	volatile int32_t t25 = 0;

	t25 = (x101%(x102|(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = 383066LL;
	uint32_t x107 = 1868622U;
	uint16_t x108 = 75U;
	volatile int64_t t26 = 95042538194407734LL;

	t26 = (x105%(x106|(x107==x108)));

	if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x111 = INT32_MAX;
	uint16_t x112 = 1103U;
	volatile int64_t t27 = 38970126158LL;

	t27 = (x109%(x110|(x111==x112)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 98U;
	volatile int8_t x119 = 1;
	static volatile uint64_t x120 = 813559638LLU;

	t28 = (x117%(x118|(x119==x120)));

	if (t28 != 23LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -35019;
	uint16_t x122 = 4551U;
	uint64_t x123 = 1LLU;

	t29 = (x121%(x122|(x123==x124)));

	if (t29 != -3162) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 57U;
	volatile int16_t x127 = 8377;
	uint16_t x128 = 1U;
	static volatile int32_t t30 = 792;

	t30 = (x125%(x126|(x127==x128)));

	if (t30 != 57) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 381194608LLU;
	volatile int64_t x130 = -562709865511348LL;
	static uint8_t x131 = 2U;
	static uint32_t x132 = 1U;
	volatile uint64_t t31 = 52071056458289LLU;

	t31 = (x129%(x130|(x131==x132)));

	if (t31 != 381194608LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -75396;
	int64_t x136 = 1056414724672058LL;
	int32_t t32 = -1897636;

	t32 = (x133%(x134|(x135==x136)));

	if (t32 != -4656) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x137 = -5337;
	volatile int16_t x138 = 1;
	int8_t x139 = INT8_MAX;
	static int32_t x140 = INT32_MAX;
	int32_t t33 = 482;

	t33 = (x137%(x138|(x139==x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	volatile uint16_t x142 = 49U;
	int8_t x143 = 0;
	volatile uint16_t x144 = 225U;
	int64_t t34 = 2777320060039LL;

	t34 = (x141%(x142|(x143==x144)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = 55207608879LL;
	static uint64_t x148 = 72012333630LLU;
	volatile int64_t t35 = 50104875790LL;

	t35 = (x145%(x146|(x147==x148)));

	if (t35 != 16943LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = 14;
	int16_t x150 = INT16_MAX;
	static int64_t x152 = INT64_MIN;

	t36 = (x149%(x150|(x151==x152)));

	if (t36 != 14) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MAX;
	uint16_t x154 = 15881U;
	volatile uint16_t x155 = UINT16_MAX;
	static volatile uint32_t x156 = 24146105U;

	t37 = (x153%(x154|(x155==x156)));

	if (t37 != 6068LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = 1748LL;
	uint16_t x158 = 6U;
	static volatile uint8_t x159 = UINT8_MAX;
	volatile int64_t t38 = -841239770298105LL;

	t38 = (x157%(x158|(x159==x160)));

	if (t38 != 2LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x161 = 0U;
	volatile uint16_t x162 = 429U;
	static int32_t x163 = INT32_MAX;
	static uint32_t x164 = 35146U;
	int32_t t39 = -111501318;

	t39 = (x161%(x162|(x163==x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = INT8_MAX;
	uint8_t x168 = 123U;
	uint64_t t40 = 63LLU;

	t40 = (x165%(x166|(x167==x168)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = -3760794LL;
	int16_t x170 = -1;
	int16_t x171 = -6043;
	uint8_t x172 = UINT8_MAX;
	int64_t t41 = 1290951963LL;

	t41 = (x169%(x170|(x171==x172)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x174 = 398976467U;
	static int16_t x175 = -1;
	int8_t x176 = INT8_MAX;
	static uint32_t t42 = 1315U;

	t42 = (x173%(x174|(x175==x176)));

	if (t42 != 305202625U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x177 = 8367LLU;
	int16_t x178 = INT16_MIN;
	int16_t x179 = -456;
	int16_t x180 = INT16_MIN;
	static volatile uint64_t t43 = 15913681571LLU;

	t43 = (x177%(x178|(x179==x180)));

	if (t43 != 8367LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 0U;
	static int32_t x182 = INT32_MIN;
	int8_t x183 = 0;
	volatile uint8_t x184 = UINT8_MAX;
	static int32_t t44 = -1;

	t44 = (x181%(x182|(x183==x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x187 = INT32_MIN;

	t45 = (x185%(x186|(x187==x188)));

	if (t45 != 18LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = 44518718LLU;
	uint8_t x190 = UINT8_MAX;
	int64_t x191 = INT64_MIN;
	int16_t x192 = -1;
	uint64_t t46 = 72397885LLU;

	t46 = (x189%(x190|(x191==x192)));

	if (t46 != 53LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = UINT32_MAX;
	volatile uint64_t x195 = 125496357611LLU;
	static uint32_t t47 = 679648267U;

	t47 = (x193%(x194|(x195==x196)));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = 12;
	int16_t x199 = INT16_MIN;
	int64_t x200 = 17545812LL;

	t48 = (x197%(x198|(x199==x200)));

	if (t48 != 12) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = 14U;
	static uint32_t x202 = 558U;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = 0U;

	t49 = (x201%(x202|(x203==x204)));

	if (t49 != 14U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x205 = 75U;
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	static int32_t x208 = -1573;
	int32_t t50 = -7339660;

	t50 = (x205%(x206|(x207==x208)));

	if (t50 != 75) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 83U;
	int64_t x211 = 12299062LL;
	int32_t t51 = -127955972;

	t51 = (x209%(x210|(x211==x212)));

	if (t51 != 83) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = -8;
	int16_t x214 = INT16_MAX;
	int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	int32_t t52 = 15649195;

	t52 = (x213%(x214|(x215==x216)));

	if (t52 != -8) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x218 = UINT8_MAX;
	static int16_t x219 = INT16_MIN;

	t53 = (x217%(x218|(x219==x220)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 3U;
	uint16_t x223 = 11U;
	volatile int32_t x224 = INT32_MIN;
	int32_t t54 = 4693882;

	t54 = (x221%(x222|(x223==x224)));

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x225 = INT8_MIN;
	uint16_t x226 = 12U;
	volatile int8_t x227 = INT8_MIN;
	volatile int64_t x228 = INT64_MIN;
	volatile int32_t t55 = -12;

	t55 = (x225%(x226|(x227==x228)));

	if (t55 != -8) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x229 = UINT16_MAX;
	int64_t x231 = INT64_MIN;
	static int32_t t56 = 0;

	t56 = (x229%(x230|(x231==x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x233 = INT16_MIN;
	int8_t x235 = 1;
	int16_t x236 = -3;
	int32_t t57 = 594;

	t57 = (x233%(x234|(x235==x236)));

	if (t57 != -148) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MIN;
	uint8_t x238 = 121U;
	volatile int32_t x239 = INT32_MIN;
	int16_t x240 = INT16_MAX;

	t58 = (x237%(x238|(x239==x240)));

	if (t58 != -90) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = INT8_MIN;
	uint16_t x243 = 1U;
	int16_t x244 = INT16_MIN;

	t59 = (x241%(x242|(x243==x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = 677;
	int32_t x246 = INT32_MIN;
	static int32_t x247 = -1;
	volatile int8_t x248 = -1;
	volatile int32_t t60 = -362877004;

	t60 = (x245%(x246|(x247==x248)));

	if (t60 != 677) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x249 = 15LLU;
	static int16_t x250 = INT16_MIN;
	uint8_t x252 = UINT8_MAX;
	static uint64_t t61 = 21LLU;

	t61 = (x249%(x250|(x251==x252)));

	if (t61 != 15LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = -4;
	volatile int16_t x255 = INT16_MIN;
	int64_t x256 = 2930875931LL;

	t62 = (x253%(x254|(x255==x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x257 = 4665U;
	uint64_t x260 = 934725707LLU;
	volatile int32_t t63 = 2458;

	t63 = (x257%(x258|(x259==x260)));

	if (t63 != 4665) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x262 = UINT8_MAX;
	static volatile int32_t x263 = INT32_MAX;
	static int32_t x264 = -1335;

	t64 = (x261%(x262|(x263==x264)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -3;
	int32_t x267 = INT32_MIN;
	volatile int8_t x268 = -1;
	volatile int32_t t65 = -1;

	t65 = (x265%(x266|(x267==x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x269 = INT64_MIN;
	volatile int16_t x270 = INT16_MIN;
	int32_t x271 = -182;
	volatile int32_t x272 = 125856;

	t66 = (x269%(x270|(x271==x272)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = 156;
	int32_t x275 = INT32_MIN;

	t67 = (x273%(x274|(x275==x276)));

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = -1;
	static uint16_t x278 = UINT16_MAX;
	int16_t x279 = -1;
	uint8_t x280 = 0U;
	volatile int32_t t68 = -4149;

	t68 = (x277%(x278|(x279==x280)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x281 = INT32_MAX;
	int8_t x282 = -1;
	int64_t x283 = 1787152968264570247LL;
	volatile int32_t x284 = INT32_MIN;
	volatile int32_t t69 = 6;

	t69 = (x281%(x282|(x283==x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x285 = INT32_MIN;
	int32_t x286 = INT32_MIN;
	uint16_t x287 = UINT16_MAX;
	uint32_t x288 = UINT32_MAX;
	volatile int32_t t70 = 75543;

	t70 = (x285%(x286|(x287==x288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x289 = 1U;
	uint64_t x291 = 541463465689096841LLU;
	volatile int8_t x292 = -10;
	uint64_t t71 = 1LLU;

	t71 = (x289%(x290|(x291==x292)));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = 3U;
	uint16_t x294 = 15U;
	static int16_t x295 = 0;
	int8_t x296 = INT8_MIN;
	volatile int32_t t72 = 1;

	t72 = (x293%(x294|(x295==x296)));

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x297 = INT16_MAX;
	uint64_t x298 = UINT64_MAX;
	uint64_t x299 = 898233446767593LLU;
	static uint64_t x300 = UINT64_MAX;

	t73 = (x297%(x298|(x299==x300)));

	if (t73 != 32767LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x301 = UINT32_MAX;
	volatile uint64_t x302 = 1404133864569LLU;
	int16_t x303 = INT16_MIN;
	static uint64_t t74 = 4103218036423382570LLU;

	t74 = (x301%(x302|(x303==x304)));

	if (t74 != 4294967295LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x305 = UINT32_MAX;
	int32_t x306 = INT32_MIN;
	static int64_t x307 = -76147376467953448LL;
	uint64_t x308 = 0LLU;
	volatile uint32_t t75 = 686904741U;

	t75 = (x305%(x306|(x307==x308)));

	if (t75 != 2147483647U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x309 = 33102605375890LLU;
	volatile int32_t x312 = INT32_MIN;
	static uint64_t t76 = 7787666636LLU;

	t76 = (x309%(x310|(x311==x312)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = UINT8_MAX;
	static volatile int64_t x314 = -1LL;
	volatile int64_t x315 = INT64_MAX;
	int16_t x316 = -45;
	int64_t t77 = 334705726530490695LL;

	t77 = (x313%(x314|(x315==x316)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = 752284041445LL;
	static int16_t x318 = INT16_MAX;
	static uint16_t x320 = 14U;
	int64_t t78 = -351143759256867298LL;

	t78 = (x317%(x318|(x319==x320)));

	if (t78 != 21216LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MIN;
	volatile int64_t x323 = INT64_MAX;
	static uint8_t x324 = 43U;
	static int32_t t79 = -16853715;

	t79 = (x321%(x322|(x323==x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = 9;
	uint16_t x326 = 20U;
	int64_t x327 = INT64_MAX;
	int16_t x328 = INT16_MAX;
	int32_t t80 = 66021;

	t80 = (x325%(x326|(x327==x328)));

	if (t80 != 9) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = INT32_MIN;
	uint16_t x330 = 4U;
	volatile int16_t x332 = INT16_MAX;
	volatile int32_t t81 = -64119;

	t81 = (x329%(x330|(x331==x332)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x333 = UINT8_MAX;
	uint32_t x335 = UINT32_MAX;
	volatile uint8_t x336 = 26U;
	int32_t t82 = -26057;

	t82 = (x333%(x334|(x335==x336)));

	if (t82 != 5) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = INT16_MAX;
	volatile int32_t x338 = INT32_MAX;
	int16_t x339 = -51;
	uint64_t x340 = UINT64_MAX;
	static volatile int32_t t83 = -14196166;

	t83 = (x337%(x338|(x339==x340)));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x341 = 18782046U;
	uint32_t x342 = 8U;
	int16_t x344 = 12314;
	volatile uint32_t t84 = 303526693U;

	t84 = (x341%(x342|(x343==x344)));

	if (t84 != 6U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = -1;
	static int64_t x346 = -135LL;
	int16_t x347 = 0;
	static volatile int16_t x348 = 1974;
	volatile int64_t t85 = -56LL;

	t85 = (x345%(x346|(x347==x348)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = -1;
	uint64_t x351 = UINT64_MAX;
	uint32_t x352 = UINT32_MAX;

	t86 = (x349%(x350|(x351==x352)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x354 = INT8_MIN;
	volatile int64_t x355 = INT64_MIN;
	uint32_t x356 = 914788U;
	volatile int64_t t87 = 108LL;

	t87 = (x353%(x354|(x355==x356)));

	if (t87 != 44LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x357 = 4LLU;
	static int8_t x358 = INT8_MAX;
	uint16_t x359 = UINT16_MAX;

	t88 = (x357%(x358|(x359==x360)));

	if (t88 != 4LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x361 = 2U;
	static int16_t x362 = INT16_MAX;
	int32_t x363 = -1;
	int64_t x364 = 718585866LL;
	uint32_t t89 = 0U;

	t89 = (x361%(x362|(x363==x364)));

	if (t89 != 2U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = INT8_MIN;
	volatile uint16_t x367 = 1172U;
	int64_t x368 = -1LL;
	int32_t t90 = 1827448;

	t90 = (x365%(x366|(x367==x368)));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x373 = UINT64_MAX;
	uint64_t x375 = 262002362LLU;
	uint64_t x376 = UINT64_MAX;
	static uint64_t t91 = 537107568647LLU;

	t91 = (x373%(x374|(x375==x376)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x378 = INT8_MIN;
	volatile int32_t x379 = -1;
	int32_t x380 = INT32_MIN;

	t92 = (x377%(x378|(x379==x380)));

	if (t92 != 166676U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x381 = INT32_MIN;
	int64_t x382 = INT64_MAX;
	int8_t x383 = INT8_MAX;
	int8_t x384 = -56;
	volatile int64_t t93 = -8133LL;

	t93 = (x381%(x382|(x383==x384)));

	if (t93 != -2147483648LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x385 = 3U;
	int16_t x386 = INT16_MAX;
	int8_t x387 = INT8_MAX;
	static volatile int32_t t94 = -283493;

	t94 = (x385%(x386|(x387==x388)));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = INT64_MAX;
	volatile uint8_t x390 = UINT8_MAX;
	uint8_t x391 = 1U;
	int64_t x392 = INT64_MIN;

	t95 = (x389%(x390|(x391==x392)));

	if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = INT8_MAX;
	static int8_t x394 = -1;
	static volatile int32_t x395 = INT32_MIN;
	uint64_t x396 = 3564448382247LLU;
	int32_t t96 = 65340290;

	t96 = (x393%(x394|(x395==x396)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = 435526496;
	volatile int32_t x398 = INT32_MIN;
	uint64_t x400 = 291088398LLU;

	t97 = (x397%(x398|(x399==x400)));

	if (t97 != 435526496) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x401 = 5U;
	int32_t x403 = -1;
	int64_t x404 = INT64_MAX;
	static int32_t t98 = -1;

	t98 = (x401%(x402|(x403==x404)));

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x406 = 1896670;

	t99 = (x405%(x406|(x407==x408)));

	if (t99 != 12369U) { NG(); } else { ; }
	
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

