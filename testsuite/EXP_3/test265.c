#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = 456;
int16_t x4 = 641;
static volatile int64_t t1 = 30379249518786LL;
uint32_t x13 = 86884380U;
volatile uint64_t x14 = UINT64_MAX;
int16_t x27 = -211;
static volatile int64_t x29 = 3693LL;
static volatile int16_t x30 = INT16_MIN;
volatile uint64_t t6 = 667LLU;
int8_t x33 = INT8_MIN;
volatile int64_t x34 = -1008LL;
static volatile int8_t x48 = 1;
uint64_t x53 = UINT64_MAX;
int8_t x55 = INT8_MAX;
uint8_t x57 = 4U;
uint8_t x62 = 1U;
volatile uint32_t x68 = UINT32_MAX;
int16_t x72 = 13;
int64_t t16 = 3330253867LL;
int8_t x82 = INT8_MIN;
volatile int32_t t18 = 99498;
int8_t x97 = -12;
int16_t x108 = INT16_MIN;
uint16_t x111 = 3809U;
int16_t x112 = INT16_MAX;
int32_t x120 = INT32_MAX;
static uint32_t x122 = UINT32_MAX;
uint32_t x126 = UINT32_MAX;
static int32_t x131 = -1;
uint64_t x135 = UINT64_MAX;
int64_t x141 = INT64_MAX;
int16_t x143 = INT16_MIN;
static uint32_t x144 = 1973U;
int16_t x150 = -13673;
static uint8_t x152 = 114U;
static volatile int32_t t32 = 2697;
int8_t x155 = INT8_MIN;
static volatile uint32_t t33 = 3U;
static int8_t x160 = 3;
uint64_t x164 = 518820336277LLU;
int8_t x168 = INT8_MIN;
int8_t x175 = INT8_MIN;
static uint8_t x177 = 4U;
static uint16_t x178 = 4233U;
static volatile int32_t x180 = -2;
uint32_t x187 = 1U;
int8_t x188 = -4;
uint8_t x190 = UINT8_MAX;
int64_t x198 = INT64_MAX;
int64_t t45 = -4500583354LL;
uint32_t t46 = 21U;
volatile uint32_t x209 = 878908U;
int16_t x210 = INT16_MIN;
volatile int32_t t49 = -42920980;
static volatile int16_t x221 = -1;
volatile int16_t x234 = INT16_MIN;
static int32_t x236 = INT32_MIN;
static volatile uint32_t t53 = 1386203U;
uint32_t t54 = 786U;
static int8_t x257 = INT8_MAX;
uint64_t x258 = UINT64_MAX;
int64_t x263 = INT64_MIN;
uint16_t x271 = 64U;
int64_t x282 = INT64_MIN;
static uint32_t x284 = 115861U;
volatile int32_t x287 = -2032;
int16_t x305 = INT16_MAX;
uint64_t x306 = 1LLU;
int8_t x307 = -10;
int32_t x318 = INT32_MIN;
volatile uint64_t t69 = 115473LLU;
volatile int8_t x327 = -1;
int32_t t70 = -2853518;
int8_t x331 = INT8_MIN;
static int16_t x332 = INT16_MIN;
volatile int8_t x335 = INT8_MIN;
int16_t x336 = -4;
int8_t x340 = -1;
uint64_t x358 = 1307LLU;
int8_t x360 = INT8_MIN;
static volatile uint64_t t77 = 3209815097706448LLU;
uint32_t t78 = 3U;
uint64_t x371 = 430566562LLU;
volatile int32_t t80 = 72;
int64_t x381 = -10203LL;
int64_t x384 = -1LL;
static volatile uint16_t x386 = 249U;
int8_t x391 = -43;
uint64_t t83 = 1LLU;
int16_t x396 = -860;
int64_t x399 = 31293163982264LL;
int64_t t85 = 2063403874318LL;
int32_t x431 = -79;
uint32_t x432 = 1889515U;
static volatile int32_t x438 = INT32_MAX;
static volatile int32_t t94 = 28393967;
static int64_t x453 = INT64_MIN;
uint8_t x456 = 2U;
uint32_t x458 = 1015U;
uint16_t x460 = UINT16_MAX;
int16_t x461 = -1;
volatile int32_t x462 = INT32_MAX;
volatile int32_t t98 = 116029;
static int32_t x469 = INT32_MIN;


void f0(void) {
	int32_t x2 = INT32_MIN;
	int64_t x3 = 1022705202LL;
	int64_t t0 = 451660965914698LL;

	t0 = ((x1==x2)%(x3-x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint32_t x6 = 0U;
	int64_t x7 = -96281225855400454LL;
	static int8_t x8 = -20;

	t1 = ((x5==x6)%(x7-x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int32_t x10 = -1;
	uint16_t x11 = 164U;
	static volatile int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 2850112;

	t2 = ((x9==x10)%(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x15 = INT16_MIN;
	uint32_t x16 = 101372U;
	volatile uint32_t t3 = 5059370U;

	t3 = ((x13==x14)%(x15-x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 118383873;
	volatile int8_t x18 = -1;
	int16_t x19 = -40;
	int16_t x20 = -9383;
	static volatile int32_t t4 = -9;

	t4 = ((x17==x18)%(x19-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	volatile uint8_t x26 = UINT8_MAX;
	volatile int8_t x28 = INT8_MIN;
	static int32_t t5 = 1872;

	t5 = ((x25==x26)%(x27-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x31 = UINT8_MAX;
	uint64_t x32 = UINT64_MAX;

	t6 = ((x29==x30)%(x31-x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x35 = 24510LLU;
	int8_t x36 = INT8_MIN;
	uint64_t t7 = 213LLU;

	t7 = ((x33==x34)%(x35-x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = 72U;
	int8_t x38 = 1;
	static int8_t x39 = INT8_MIN;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t8 = 3348;

	t8 = ((x37==x38)%(x39-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 0U;
	int64_t x42 = INT64_MIN;
	int32_t x43 = -1;
	uint8_t x44 = 38U;
	int32_t t9 = 16670622;

	t9 = ((x41==x42)%(x43-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MIN;
	volatile int64_t x46 = INT64_MIN;
	int16_t x47 = -12947;
	static volatile int32_t t10 = -2945997;

	t10 = ((x45==x46)%(x47-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x54 = 0;
	uint8_t x56 = 85U;
	int32_t t11 = -1;

	t11 = ((x53==x54)%(x55-x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x58 = 493895LLU;
	uint16_t x59 = 50U;
	static int8_t x60 = INT8_MIN;
	volatile int32_t t12 = 1;

	t12 = ((x57==x58)%(x59-x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = 3177LL;
	static uint8_t x63 = 86U;
	volatile int16_t x64 = -1;
	int32_t t13 = 147;

	t13 = ((x61==x62)%(x63-x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 662622510223653LL;
	int8_t x66 = 2;
	uint16_t x67 = 6U;
	uint32_t t14 = 33687U;

	t14 = ((x65==x66)%(x67-x68));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x69 = 1;
	uint32_t x70 = 2016657981U;
	static uint16_t x71 = 3U;
	volatile int32_t t15 = -762;

	t15 = ((x69==x70)%(x71-x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = INT16_MIN;
	int64_t x74 = -1LL;
	int64_t x75 = -1LL;
	static int8_t x76 = -22;

	t16 = ((x73==x74)%(x75-x76));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	int64_t x78 = 10LL;
	volatile uint64_t x79 = UINT64_MAX;
	uint8_t x80 = 42U;
	uint64_t t17 = 3224994390LLU;

	t17 = ((x77==x78)%(x79-x80));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 13U;
	volatile int32_t x83 = -828332812;
	int16_t x84 = INT16_MIN;

	t18 = ((x81==x82)%(x83-x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = 2;
	int32_t x87 = 50;
	static int16_t x88 = -157;
	int32_t t19 = 642677145;

	t19 = ((x85==x86)%(x87-x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = UINT32_MAX;
	uint64_t x90 = 4936752LLU;
	volatile uint64_t x91 = 0LLU;
	volatile int64_t x92 = -25592629LL;
	volatile uint64_t t20 = 2LLU;

	t20 = ((x89==x90)%(x91-x92));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = 0;
	uint16_t x94 = 0U;
	static int16_t x95 = -750;
	static int32_t x96 = -1;
	int32_t t21 = 115;

	t21 = ((x93==x94)%(x95-x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x98 = 4453419U;
	int32_t x99 = -1;
	uint64_t x100 = 104394600861319LLU;
	static volatile uint64_t t22 = 3LLU;

	t22 = ((x97==x98)%(x99-x100));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MAX;
	static uint32_t x106 = 6948409U;
	static uint8_t x107 = 0U;
	int32_t t23 = 192017;

	t23 = ((x105==x106)%(x107-x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = -1;
	volatile int32_t t24 = -1368;

	t24 = ((x109==x110)%(x111-x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = -364542LL;
	int32_t x118 = INT32_MIN;
	int64_t x119 = INT64_MAX;
	int64_t t25 = -15547515LL;

	t25 = ((x117==x118)%(x119-x120));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x121 = INT16_MAX;
	int16_t x123 = 1;
	volatile int32_t x124 = 1578;
	static volatile int32_t t26 = 784069;

	t26 = ((x121==x122)%(x123-x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = 54360810U;
	int64_t x127 = INT64_MAX;
	uint8_t x128 = UINT8_MAX;
	int64_t t27 = 107556676235LL;

	t27 = ((x125==x126)%(x127-x128));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MAX;
	int64_t x130 = 1LL;
	volatile int8_t x132 = INT8_MIN;
	int32_t t28 = 220709893;

	t28 = ((x129==x130)%(x131-x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x133 = 1U;
	volatile uint64_t x134 = 858951308LLU;
	static int64_t x136 = INT64_MAX;
	static uint64_t t29 = 7LLU;

	t29 = ((x133==x134)%(x135-x136));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x142 = INT8_MIN;
	volatile uint32_t t30 = 48015U;

	t30 = ((x141==x142)%(x143-x144));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = -1;
	int64_t x146 = INT64_MIN;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = -1;
	static int32_t t31 = -42147732;

	t31 = ((x145==x146)%(x147-x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = -27;
	int32_t x151 = 16962903;

	t32 = ((x149==x150)%(x151-x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x153 = INT32_MIN;
	int16_t x154 = -1;
	uint32_t x156 = 6369U;

	t33 = ((x153==x154)%(x155-x156));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x157 = 85U;
	static int64_t x158 = INT64_MIN;
	static volatile int16_t x159 = -1759;
	static volatile int32_t t34 = -258492997;

	t34 = ((x157==x158)%(x159-x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = 0;
	static uint16_t x163 = 1U;
	volatile uint64_t t35 = 33170152321915LLU;

	t35 = ((x161==x162)%(x163-x164));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x165 = -364579862LL;
	int32_t x166 = INT32_MAX;
	int32_t x167 = -99;
	int32_t t36 = 417;

	t36 = ((x165==x166)%(x167-x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	volatile int8_t x170 = -1;
	int8_t x171 = -1;
	static uint8_t x172 = UINT8_MAX;
	int32_t t37 = 516670086;

	t37 = ((x169==x170)%(x171-x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x173 = 441788864LLU;
	volatile uint16_t x174 = 2U;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t38 = 997524U;

	t38 = ((x173==x174)%(x175-x176));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x179 = INT16_MIN;
	static int32_t t39 = 14847342;

	t39 = ((x177==x178)%(x179-x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = INT64_MAX;
	int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	uint16_t x184 = 0U;
	static int32_t t40 = -117099750;

	t40 = ((x181==x182)%(x183-x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = 85372458980274LL;
	static uint64_t x186 = 47LLU;
	uint32_t t41 = 3041U;

	t41 = ((x185==x186)%(x187-x188));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = -1;
	volatile int16_t x191 = INT16_MIN;
	int16_t x192 = -974;
	int32_t t42 = -7352;

	t42 = ((x189==x190)%(x191-x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x193 = -1;
	volatile uint16_t x194 = 13U;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = -1;
	volatile int32_t t43 = 172774164;

	t43 = ((x193==x194)%(x195-x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -450430LL;
	static int8_t x199 = -1;
	static int8_t x200 = INT8_MAX;
	static volatile int32_t t44 = -10155;

	t44 = ((x197==x198)%(x199-x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = -51;
	volatile uint16_t x202 = 8860U;
	volatile int8_t x203 = INT8_MIN;
	static int64_t x204 = -1LL;

	t45 = ((x201==x202)%(x203-x204));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = 2;
	int8_t x206 = -1;
	int16_t x207 = INT16_MIN;
	uint32_t x208 = 14821634U;

	t46 = ((x205==x206)%(x207-x208));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x211 = -3886;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t47 = 1071U;

	t47 = ((x209==x210)%(x211-x212));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x213 = -2721187LL;
	volatile int32_t x214 = -319;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 29U;
	static volatile int32_t t48 = -308;

	t48 = ((x213==x214)%(x215-x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = 9881150486LLU;
	uint32_t x218 = UINT32_MAX;
	volatile int32_t x219 = INT32_MIN;
	int32_t x220 = -1;

	t49 = ((x217==x218)%(x219-x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x222 = INT16_MIN;
	static int16_t x223 = -11769;
	static uint16_t x224 = 107U;
	volatile int32_t t50 = -161086;

	t50 = ((x221==x222)%(x223-x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = 0;
	int64_t x227 = INT64_MAX;
	int32_t x228 = INT32_MAX;
	int64_t t51 = 40097LL;

	t51 = ((x225==x226)%(x227-x228));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = 18;
	int8_t x230 = INT8_MAX;
	int32_t x231 = INT32_MIN;
	int32_t x232 = -4951003;
	static volatile int32_t t52 = -816086;

	t52 = ((x229==x230)%(x231-x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = -1;
	volatile uint32_t x235 = UINT32_MAX;

	t53 = ((x233==x234)%(x235-x236));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = UINT8_MAX;
	uint32_t x242 = 0U;
	int16_t x243 = INT16_MIN;
	volatile uint32_t x244 = 409730396U;

	t54 = ((x241==x242)%(x243-x244));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 482166U;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = UINT32_MAX;
	uint8_t x248 = 4U;
	uint32_t t55 = 6852970U;

	t55 = ((x245==x246)%(x247-x248));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = INT64_MIN;
	uint32_t x250 = 65828U;
	uint32_t x251 = 7607117U;
	uint64_t x252 = 904006LLU;
	volatile uint64_t t56 = 8LLU;

	t56 = ((x249==x250)%(x251-x252));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MAX;
	volatile uint8_t x255 = 1U;
	volatile uint8_t x256 = 22U;
	static volatile int32_t t57 = -152946;

	t57 = ((x253==x254)%(x255-x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x259 = 2270U;
	uint32_t x260 = 17559U;
	static volatile uint32_t t58 = 0U;

	t58 = ((x257==x258)%(x259-x260));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x261 = 29450U;
	static int32_t x262 = INT32_MIN;
	int32_t x264 = INT32_MIN;
	volatile int64_t t59 = -1180754091458345LL;

	t59 = ((x261==x262)%(x263-x264));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x269 = 1U;
	volatile uint32_t x270 = 544822213U;
	volatile uint16_t x272 = 835U;
	int32_t t60 = -64950419;

	t60 = ((x269==x270)%(x271-x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = -1LL;
	uint64_t x283 = UINT64_MAX;
	static uint64_t t61 = 29142088088LLU;

	t61 = ((x281==x282)%(x283-x284));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x285 = 1;
	int64_t x286 = -25349638446551497LL;
	int8_t x288 = 24;
	int32_t t62 = 24;

	t62 = ((x285==x286)%(x287-x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x289 = -1;
	uint32_t x290 = 96U;
	volatile uint16_t x291 = 10403U;
	int32_t x292 = -1;
	int32_t t63 = -699129087;

	t63 = ((x289==x290)%(x291-x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = -1;
	uint8_t x294 = 1U;
	uint64_t x295 = 1978LLU;
	int64_t x296 = -1LL;
	uint64_t t64 = 100981424205829LLU;

	t64 = ((x293==x294)%(x295-x296));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x308 = 13;
	int32_t t65 = -456494917;

	t65 = ((x305==x306)%(x307-x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x309 = -3;
	uint8_t x310 = 47U;
	int16_t x311 = 0;
	int8_t x312 = -1;
	volatile int32_t t66 = 50626;

	t66 = ((x309==x310)%(x311-x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x313 = INT8_MAX;
	int64_t x314 = INT64_MIN;
	volatile uint32_t x315 = 2519471U;
	int8_t x316 = 9;
	static volatile uint32_t t67 = 838930U;

	t67 = ((x313==x314)%(x315-x316));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = INT16_MAX;
	int16_t x319 = -11766;
	int16_t x320 = 24;
	int32_t t68 = -2;

	t68 = ((x317==x318)%(x319-x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x321 = INT32_MIN;
	volatile uint16_t x322 = UINT16_MAX;
	uint64_t x323 = 1LLU;
	int64_t x324 = 3728195312647166804LL;

	t69 = ((x321==x322)%(x323-x324));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = 1854;
	volatile int8_t x326 = INT8_MIN;
	volatile int32_t x328 = 3613;

	t70 = ((x325==x326)%(x327-x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = INT16_MAX;
	volatile uint8_t x330 = 22U;
	volatile int32_t t71 = 286;

	t71 = ((x329==x330)%(x331-x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x333 = INT32_MIN;
	int16_t x334 = 0;
	static int32_t t72 = -18;

	t72 = ((x333==x334)%(x335-x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x337 = 55U;
	uint64_t x338 = UINT64_MAX;
	int64_t x339 = INT64_MIN;
	volatile int64_t t73 = 21145869LL;

	t73 = ((x337==x338)%(x339-x340));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x341 = 1735LLU;
	uint16_t x342 = 191U;
	volatile int32_t x343 = INT32_MAX;
	uint64_t x344 = UINT64_MAX;
	static volatile uint64_t t74 = 60189195876470LLU;

	t74 = ((x341==x342)%(x343-x344));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x345 = INT64_MAX;
	uint16_t x346 = 2416U;
	uint16_t x347 = 233U;
	int16_t x348 = INT16_MIN;
	volatile int32_t t75 = -917533;

	t75 = ((x345==x346)%(x347-x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x357 = -1454621;
	uint8_t x359 = UINT8_MAX;
	volatile int32_t t76 = 27778;

	t76 = ((x357==x358)%(x359-x360));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = INT64_MIN;
	int64_t x362 = 50LL;
	int16_t x363 = INT16_MIN;
	static uint64_t x364 = 8689LLU;

	t77 = ((x361==x362)%(x363-x364));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x365 = -1;
	int16_t x366 = 24;
	static uint32_t x367 = 118989U;
	volatile uint16_t x368 = 262U;

	t78 = ((x365==x366)%(x367-x368));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x369 = -1;
	uint64_t x370 = UINT64_MAX;
	int64_t x372 = INT64_MAX;
	volatile uint64_t t79 = 62018LLU;

	t79 = ((x369==x370)%(x371-x372));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = -1LL;
	volatile int16_t x374 = -1;
	int8_t x375 = 0;
	uint16_t x376 = 320U;

	t80 = ((x373==x374)%(x375-x376));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x382 = 101U;
	uint16_t x383 = 4U;
	volatile int64_t t81 = 1673626688LL;

	t81 = ((x381==x382)%(x383-x384));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x385 = INT32_MIN;
	uint64_t x387 = 489591100719224476LLU;
	int32_t x388 = -1005;
	volatile uint64_t t82 = 8123712721363778116LLU;

	t82 = ((x385==x386)%(x387-x388));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x389 = -193348143;
	int64_t x390 = INT64_MIN;
	uint64_t x392 = UINT64_MAX;

	t83 = ((x389==x390)%(x391-x392));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x393 = 101U;
	static uint8_t x394 = 6U;
	static int8_t x395 = -1;
	volatile int32_t t84 = 357218458;

	t84 = ((x393==x394)%(x395-x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x397 = 5180576835678LLU;
	uint32_t x398 = 830553915U;
	int8_t x400 = INT8_MIN;

	t85 = ((x397==x398)%(x399-x400));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = -1;
	int8_t x403 = -1;
	int16_t x404 = INT16_MIN;
	int32_t t86 = 13897;

	t86 = ((x401==x402)%(x403-x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x409 = 0U;
	int16_t x410 = -1;
	int64_t x411 = 1581538875150916399LL;
	static int16_t x412 = INT16_MIN;
	static volatile int64_t t87 = -760192916LL;

	t87 = ((x409==x410)%(x411-x412));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x413 = 6068722781141805388LLU;
	uint8_t x414 = 8U;
	volatile int64_t x415 = 18127480414LL;
	int32_t x416 = INT32_MIN;
	static volatile int64_t t88 = 1LL;

	t88 = ((x413==x414)%(x415-x416));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x421 = INT16_MIN;
	static int64_t x422 = INT64_MAX;
	int16_t x423 = 8;
	int8_t x424 = -38;
	volatile int32_t t89 = -16436056;

	t89 = ((x421==x422)%(x423-x424));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = 3;
	uint16_t x430 = UINT16_MAX;
	static uint32_t t90 = 33U;

	t90 = ((x429==x430)%(x431-x432));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x433 = -1;
	int64_t x434 = -1LL;
	int8_t x435 = -1;
	static uint8_t x436 = 71U;
	int32_t t91 = -1;

	t91 = ((x433==x434)%(x435-x436));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x437 = -24;
	int8_t x439 = INT8_MAX;
	static uint32_t x440 = 347363U;
	uint32_t t92 = 4544U;

	t92 = ((x437==x438)%(x439-x440));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x441 = UINT32_MAX;
	uint8_t x442 = UINT8_MAX;
	int8_t x443 = INT8_MIN;
	uint64_t x444 = 8474071791728766338LLU;
	uint64_t t93 = 28081763452589595LLU;

	t93 = ((x441==x442)%(x443-x444));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x445 = 4398U;
	int64_t x446 = INT64_MIN;
	static int8_t x447 = INT8_MIN;
	uint16_t x448 = 200U;

	t94 = ((x445==x446)%(x447-x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x449 = -1LL;
	uint32_t x450 = UINT32_MAX;
	int32_t x451 = -68670906;
	static int32_t x452 = -1;
	int32_t t95 = 5288;

	t95 = ((x449==x450)%(x451-x452));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x454 = INT32_MIN;
	volatile uint64_t x455 = 1LLU;
	volatile uint64_t t96 = 16803942920872371LLU;

	t96 = ((x453==x454)%(x455-x456));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x457 = INT16_MIN;
	int8_t x459 = -1;
	static volatile int32_t t97 = 8795045;

	t97 = ((x457==x458)%(x459-x460));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x463 = -1;
	int8_t x464 = 15;

	t98 = ((x461==x462)%(x463-x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x470 = INT16_MIN;
	uint8_t x471 = 5U;
	static int8_t x472 = INT8_MAX;
	int32_t t99 = -1;

	t99 = ((x469==x470)%(x471-x472));

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

