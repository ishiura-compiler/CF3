#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
volatile int16_t x3 = INT16_MIN;
int8_t x6 = INT8_MIN;
uint32_t x7 = 1U;
int64_t x9 = INT64_MIN;
int32_t x21 = INT32_MIN;
int32_t x22 = 5;
uint32_t x27 = UINT32_MAX;
int64_t x34 = 375LL;
static int64_t x39 = 67LL;
volatile int32_t t9 = -586183681;
static volatile uint16_t x50 = 314U;
static volatile int8_t x54 = 21;
int32_t t13 = 15222939;
int64_t x57 = INT64_MIN;
uint32_t x61 = 1U;
int32_t t16 = 5820534;
uint8_t x69 = UINT8_MAX;
int8_t x70 = INT8_MIN;
uint64_t x72 = 604LLU;
static volatile int8_t x75 = INT8_MAX;
int32_t t18 = 358280340;
int64_t x78 = INT64_MIN;
int8_t x85 = INT8_MIN;
volatile int32_t x90 = INT32_MIN;
int32_t t22 = -1802;
static uint8_t x93 = 51U;
static uint64_t x98 = UINT64_MAX;
volatile uint16_t x100 = UINT16_MAX;
int32_t x121 = INT32_MIN;
volatile int16_t x123 = 287;
int64_t x126 = -785LL;
int64_t x127 = INT64_MIN;
int32_t t32 = 45955487;
uint8_t x135 = 12U;
int8_t x139 = -3;
volatile int64_t x142 = INT64_MIN;
uint32_t x161 = 258894608U;
int64_t x163 = -1LL;
uint32_t x167 = 47357936U;
static volatile uint8_t x173 = 27U;
int32_t x177 = -1;
int64_t x179 = -2976LL;
int32_t t44 = 104;
static volatile uint16_t x183 = 23294U;
static int8_t x186 = 1;
uint8_t x187 = 0U;
volatile int16_t x188 = 20;
static uint64_t x189 = UINT64_MAX;
static int16_t x190 = INT16_MIN;
int64_t x198 = -1LL;
int16_t x199 = -1;
int8_t x205 = -1;
volatile int16_t x207 = INT16_MAX;
static uint64_t x211 = 33277707647LLU;
static int32_t x214 = INT32_MAX;
volatile uint64_t x215 = 16058LLU;
static uint32_t x216 = 110724744U;
int8_t x217 = INT8_MIN;
int32_t x228 = INT32_MIN;
volatile int32_t t56 = -1;
static volatile int8_t x230 = -6;
int8_t x231 = 1;
int8_t x232 = -6;
volatile int32_t x237 = 0;
uint8_t x238 = 46U;
uint16_t x240 = 380U;
volatile int32_t t59 = -184123433;
uint32_t x243 = 431613U;
volatile int32_t t61 = -2;
int8_t x251 = INT8_MIN;
volatile int32_t t62 = -25;
volatile int32_t x260 = -306;
volatile int8_t x262 = -1;
static uint64_t x265 = 1486173361063792LLU;
int64_t x284 = INT64_MIN;
int16_t x293 = INT16_MAX;
int64_t x297 = -1LL;
int32_t t74 = -9877;
volatile int32_t t76 = -3141;
volatile uint8_t x309 = 4U;
static int16_t x318 = 53;
static int64_t x329 = -1LL;
int8_t x335 = -11;
int16_t x340 = INT16_MAX;
int32_t x349 = -1;
volatile int8_t x354 = INT8_MAX;
volatile int32_t t88 = 0;
int8_t x360 = INT8_MIN;
static int64_t x362 = INT64_MIN;
int64_t x363 = INT64_MIN;
static volatile int64_t x373 = 148628635163LL;
volatile int32_t x374 = 37091;
int32_t t94 = -4460;
int16_t x387 = -250;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	uint32_t x4 = 88U;
	int32_t t0 = -278;

	t0 = ((x1|x2)==(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -3333;

	t1 = ((x5|x6)==(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	int32_t x11 = 817754;
	uint64_t x12 = UINT64_MAX;
	int32_t t2 = 7655012;

	t2 = ((x9|x10)==(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 200688U;
	uint16_t x14 = 0U;
	static int8_t x15 = -18;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 302931;

	t3 = ((x13|x14)==(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int32_t x18 = -1;
	static int8_t x19 = INT8_MAX;
	static volatile uint16_t x20 = UINT16_MAX;
	int32_t t4 = 1;

	t4 = ((x17|x18)==(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x23 = INT8_MIN;
	volatile int16_t x24 = -1;
	int32_t t5 = -1;

	t5 = ((x21|x22)==(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	int32_t x26 = INT32_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -1344;

	t6 = ((x25|x26)==(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	static int32_t x30 = INT32_MAX;
	static volatile int8_t x31 = INT8_MIN;
	int8_t x32 = -1;
	int32_t t7 = -847;

	t7 = ((x29|x30)==(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint16_t x35 = 1611U;
	int64_t x36 = -54578006680LL;
	volatile int32_t t8 = 2;

	t8 = ((x33|x34)==(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	volatile uint16_t x38 = 5U;
	uint32_t x40 = 226917U;

	t9 = ((x37|x38)==(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -1LL;
	static int16_t x42 = -1;
	volatile int64_t x43 = -64242LL;
	volatile int8_t x44 = -1;
	volatile int32_t t10 = 1119537;

	t10 = ((x41|x42)==(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static int32_t x46 = INT32_MAX;
	static int16_t x47 = -1;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 487707;

	t11 = ((x45|x46)==(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 109706LLU;
	int32_t x51 = 272;
	int32_t x52 = -1;
	volatile int32_t t12 = 432079483;

	t12 = ((x49|x50)==(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	uint64_t x55 = UINT64_MAX;
	uint64_t x56 = UINT64_MAX;

	t13 = ((x53|x54)==(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	uint16_t x59 = 197U;
	volatile int64_t x60 = INT64_MIN;
	static int32_t t14 = 1102883;

	t14 = ((x57|x58)==(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MIN;
	int16_t x63 = -1;
	int8_t x64 = INT8_MAX;
	volatile int32_t t15 = 229;

	t15 = ((x61|x62)==(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MAX;
	int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MIN;
	int8_t x68 = -1;

	t16 = ((x65|x66)==(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x71 = INT16_MIN;
	int32_t t17 = -107529;

	t17 = ((x69|x70)==(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MAX;
	int32_t x76 = 5740;

	t18 = ((x73|x74)==(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 1LLU;
	uint8_t x79 = 82U;
	uint16_t x80 = 88U;
	static int32_t t19 = 38035;

	t19 = ((x77|x78)==(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MAX;
	uint16_t x82 = 0U;
	uint16_t x83 = UINT16_MAX;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = -7169334;

	t20 = ((x81|x82)==(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -138;
	volatile int64_t x87 = INT64_MIN;
	static int16_t x88 = -1651;
	volatile int32_t t21 = 15328446;

	t21 = ((x85|x86)==(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	static int32_t x91 = 6127;
	int64_t x92 = -1LL;

	t22 = ((x89|x90)==(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MIN;
	int64_t x95 = -1LL;
	static int16_t x96 = INT16_MAX;
	static volatile int32_t t23 = 977421928;

	t23 = ((x93|x94)==(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	int8_t x99 = INT8_MIN;
	volatile int32_t t24 = 6673;

	t24 = ((x97|x98)==(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x101 = -1;
	uint16_t x102 = UINT16_MAX;
	uint8_t x103 = 8U;
	uint32_t x104 = 21U;
	static int32_t t25 = -24148511;

	t25 = ((x101|x102)==(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 7LLU;
	static int16_t x106 = INT16_MAX;
	int64_t x107 = 244608890LL;
	uint32_t x108 = 484504U;
	int32_t t26 = -61773;

	t26 = ((x105|x106)==(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	static volatile int16_t x110 = INT16_MAX;
	static volatile uint8_t x111 = UINT8_MAX;
	uint8_t x112 = 1U;
	volatile int32_t t27 = 220;

	t27 = ((x109|x110)==(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 0;
	volatile int8_t x114 = -1;
	int8_t x115 = INT8_MIN;
	static uint8_t x116 = UINT8_MAX;
	int32_t t28 = -310099609;

	t28 = ((x113|x114)==(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 3000553394581LL;
	int16_t x118 = INT16_MIN;
	int8_t x119 = 18;
	int16_t x120 = 17;
	static int32_t t29 = -13009;

	t29 = ((x117|x118)==(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x122 = -1;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t30 = -1994270;

	t30 = ((x121|x122)==(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 2865222;

	t31 = ((x125|x126)==(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	int16_t x132 = -1;

	t32 = ((x129|x130)==(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	volatile uint16_t x134 = UINT16_MAX;
	int32_t x136 = 632;
	int32_t t33 = 303270;

	t33 = ((x133|x134)==(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	uint16_t x138 = 9U;
	static int32_t x140 = INT32_MAX;
	volatile int32_t t34 = 50;

	t34 = ((x137|x138)==(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 4U;
	int16_t x143 = 642;
	int8_t x144 = -1;
	int32_t t35 = -5184;

	t35 = ((x141|x142)==(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x145 = 1063278177781866327LLU;
	uint8_t x146 = UINT8_MAX;
	static int64_t x147 = -7721502728572064LL;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = 1571;

	t36 = ((x145|x146)==(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 11951035LL;
	uint64_t x150 = UINT64_MAX;
	int64_t x151 = 1366300LL;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t37 = -32993643;

	t37 = ((x149|x150)==(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	int8_t x154 = -1;
	uint64_t x155 = 2145445611886093LLU;
	int8_t x156 = INT8_MAX;
	static int32_t t38 = -28656;

	t38 = ((x153|x154)==(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 114U;
	uint64_t x158 = 2141551241022995LLU;
	static int8_t x159 = INT8_MIN;
	volatile uint16_t x160 = 0U;
	int32_t t39 = -16784620;

	t39 = ((x157|x158)==(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MIN;
	int64_t x164 = 303422LL;
	volatile int32_t t40 = -24406871;

	t40 = ((x161|x162)==(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 0;
	uint32_t x166 = 3278519U;
	uint32_t x168 = 3696712U;
	volatile int32_t t41 = 199;

	t41 = ((x165|x166)==(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MAX;
	int8_t x170 = -1;
	static volatile uint8_t x171 = 34U;
	int16_t x172 = 6910;
	static volatile int32_t t42 = -14168;

	t42 = ((x169|x170)==(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x174 = 14826393511LLU;
	volatile uint32_t x175 = UINT32_MAX;
	int8_t x176 = 0;
	static volatile int32_t t43 = -322785411;

	t43 = ((x173|x174)==(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x178 = 57U;
	volatile int32_t x180 = INT32_MIN;

	t44 = ((x177|x178)==(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	volatile uint32_t x182 = 0U;
	uint8_t x184 = 2U;
	static int32_t t45 = 48278548;

	t45 = ((x181|x182)==(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = 13830975U;
	static volatile int32_t t46 = -10480;

	t46 = ((x185|x186)==(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x191 = 0;
	int64_t x192 = INT64_MIN;
	int32_t t47 = 3358;

	t47 = ((x189|x190)==(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	uint64_t x194 = 37809940LLU;
	uint16_t x195 = 3U;
	volatile int64_t x196 = INT64_MAX;
	static int32_t t48 = -127;

	t48 = ((x193|x194)==(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = -1125727LL;
	static int16_t x200 = -13;
	volatile int32_t t49 = -338054;

	t49 = ((x197|x198)==(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x201 = 200U;
	int16_t x202 = -30;
	volatile int32_t x203 = -396891493;
	volatile int32_t x204 = INT32_MAX;
	volatile int32_t t50 = -564;

	t50 = ((x201|x202)==(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = -1;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 0;

	t51 = ((x205|x206)==(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	uint8_t x210 = 0U;
	int16_t x212 = INT16_MIN;
	int32_t t52 = 321;

	t52 = ((x209|x210)==(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int32_t t53 = -2116;

	t53 = ((x213|x214)==(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x218 = UINT64_MAX;
	static int8_t x219 = INT8_MIN;
	volatile int32_t x220 = -293;
	int32_t t54 = 3368223;

	t54 = ((x217|x218)==(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = UINT16_MAX;
	static int16_t x222 = -55;
	volatile uint16_t x223 = 2U;
	uint16_t x224 = UINT16_MAX;
	int32_t t55 = -2;

	t55 = ((x221|x222)==(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x226 = 0U;
	volatile uint8_t x227 = 53U;

	t56 = ((x225|x226)==(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	volatile int32_t t57 = 990903;

	t57 = ((x229|x230)==(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -12;
	static int8_t x234 = -1;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = INT64_MIN;
	volatile int32_t t58 = 13;

	t58 = ((x233|x234)==(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x239 = INT16_MIN;

	t59 = ((x237|x238)==(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x241 = -199962235;
	volatile int64_t x242 = INT64_MIN;
	volatile int32_t x244 = -388227;
	int32_t t60 = 12;

	t60 = ((x241|x242)==(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	volatile uint32_t x246 = 90U;
	int8_t x247 = -1;
	volatile uint8_t x248 = 8U;

	t61 = ((x245|x246)==(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	static int32_t x250 = -29;
	volatile int8_t x252 = INT8_MIN;

	t62 = ((x249|x250)==(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	volatile int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	volatile int64_t x256 = -1LL;
	int32_t t63 = 5601;

	t63 = ((x253|x254)==(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = 1;
	uint8_t x258 = UINT8_MAX;
	volatile int16_t x259 = INT16_MIN;
	volatile int32_t t64 = 44409;

	t64 = ((x257|x258)==(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 1;
	int64_t x263 = -720017801896132LL;
	volatile int16_t x264 = INT16_MIN;
	int32_t t65 = -3331;

	t65 = ((x261|x262)==(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MIN;
	static uint8_t x268 = 1U;
	int32_t t66 = -373774;

	t66 = ((x265|x266)==(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	uint32_t x270 = 5U;
	int16_t x271 = 0;
	static uint32_t x272 = 1072182958U;
	static int32_t t67 = -18221;

	t67 = ((x269|x270)==(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 1U;
	volatile uint8_t x274 = 5U;
	volatile int8_t x275 = 42;
	uint8_t x276 = 4U;
	volatile int32_t t68 = -25;

	t68 = ((x273|x274)==(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	volatile int16_t x278 = 1044;
	volatile int16_t x279 = INT16_MIN;
	static int16_t x280 = -1;
	static volatile int32_t t69 = -243314488;

	t69 = ((x277|x278)==(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 19603U;
	static uint32_t x282 = 1595U;
	int32_t x283 = INT32_MIN;
	int32_t t70 = 817;

	t70 = ((x281|x282)==(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 462181885276027491LL;
	uint32_t x286 = UINT32_MAX;
	volatile int8_t x287 = -1;
	uint8_t x288 = UINT8_MAX;
	int32_t t71 = -1;

	t71 = ((x285|x286)==(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 3;
	int64_t x290 = INT64_MIN;
	static int8_t x291 = -1;
	uint16_t x292 = 2U;
	static volatile int32_t t72 = -94;

	t72 = ((x289|x290)==(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = UINT64_MAX;
	uint32_t x295 = 5U;
	int16_t x296 = 0;
	volatile int32_t t73 = 639686359;

	t73 = ((x293|x294)==(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x298 = -22675617LL;
	volatile uint16_t x299 = 1633U;
	int8_t x300 = -1;

	t74 = ((x297|x298)==(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = 3;
	uint16_t x302 = 0U;
	static int16_t x303 = INT16_MIN;
	static int32_t x304 = INT32_MIN;
	int32_t t75 = 680237725;

	t75 = ((x301|x302)==(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 6321;
	uint32_t x306 = 315432U;
	int32_t x307 = INT32_MAX;
	int16_t x308 = INT16_MAX;

	t76 = ((x305|x306)==(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = -1LL;
	uint32_t x311 = UINT32_MAX;
	int8_t x312 = INT8_MIN;
	static int32_t t77 = 1;

	t77 = ((x309|x310)==(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	int64_t x314 = INT64_MIN;
	int8_t x315 = INT8_MIN;
	int16_t x316 = 23;
	static int32_t t78 = -234340;

	t78 = ((x313|x314)==(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 93870683702LL;
	static int8_t x319 = -1;
	int32_t x320 = INT32_MAX;
	static volatile int32_t t79 = 7;

	t79 = ((x317|x318)==(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint8_t x322 = 74U;
	int8_t x323 = INT8_MAX;
	volatile uint16_t x324 = 23U;
	static int32_t t80 = -48142261;

	t80 = ((x321|x322)==(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	static volatile uint8_t x326 = 32U;
	volatile uint8_t x327 = 22U;
	int8_t x328 = -29;
	volatile int32_t t81 = 2;

	t81 = ((x325|x326)==(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x330 = -1;
	static int16_t x331 = -475;
	static int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -1;

	t82 = ((x329|x330)==(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 697512LL;
	volatile int32_t x334 = INT32_MAX;
	uint64_t x336 = UINT64_MAX;
	volatile int32_t t83 = -40217;

	t83 = ((x333|x334)==(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = 61;
	uint16_t x338 = 1U;
	int64_t x339 = 16339779237271221LL;
	volatile int32_t t84 = -1;

	t84 = ((x337|x338)==(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -1558;
	volatile int32_t x342 = INT32_MAX;
	int64_t x343 = INT64_MIN;
	int64_t x344 = -1LL;
	volatile int32_t t85 = 1670889;

	t85 = ((x341|x342)==(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 10U;
	uint32_t x346 = UINT32_MAX;
	uint64_t x347 = UINT64_MAX;
	static int16_t x348 = -6;
	int32_t t86 = -266559598;

	t86 = ((x345|x346)==(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x350 = UINT64_MAX;
	volatile int8_t x351 = 0;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = 1;

	t87 = ((x349|x350)==(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;

	t88 = ((x353|x354)==(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -26;
	int16_t x358 = INT16_MIN;
	int8_t x359 = 33;
	int32_t t89 = -43640;

	t89 = ((x357|x358)==(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 5812U;
	int32_t x364 = INT32_MAX;
	int32_t t90 = -41702;

	t90 = ((x361|x362)==(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	volatile int16_t x366 = -1;
	static uint32_t x367 = 53U;
	int32_t x368 = INT32_MAX;
	int32_t t91 = 97429;

	t91 = ((x365|x366)==(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x369 = 3760U;
	static int16_t x370 = 1;
	int32_t x371 = -25458426;
	static int64_t x372 = INT64_MIN;
	int32_t t92 = -1662511;

	t92 = ((x369|x370)==(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x375 = 5U;
	static int64_t x376 = INT64_MIN;
	int32_t t93 = -68140;

	t93 = ((x373|x374)==(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 101U;
	uint8_t x378 = 16U;
	int64_t x379 = INT64_MIN;
	static uint32_t x380 = 36742724U;

	t94 = ((x377|x378)==(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	static volatile int16_t x382 = INT16_MAX;
	int8_t x383 = INT8_MAX;
	int32_t x384 = INT32_MAX;
	int32_t t95 = 96;

	t95 = ((x381|x382)==(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	uint16_t x386 = UINT16_MAX;
	int8_t x388 = -1;
	volatile int32_t t96 = 3038;

	t96 = ((x385|x386)==(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 15594LLU;
	int32_t x390 = 1042844;
	static int64_t x391 = INT64_MIN;
	volatile int64_t x392 = INT64_MIN;
	static volatile int32_t t97 = 941711493;

	t97 = ((x389|x390)==(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 454U;
	uint16_t x394 = UINT16_MAX;
	int8_t x395 = INT8_MAX;
	uint8_t x396 = UINT8_MAX;
	int32_t t98 = -6244;

	t98 = ((x393|x394)==(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	volatile int8_t x398 = -1;
	int8_t x399 = 9;
	static int64_t x400 = INT64_MIN;
	int32_t t99 = -230618;

	t99 = ((x397|x398)==(x399<=x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

