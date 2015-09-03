#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 13U;
static uint8_t x3 = 4U;
static int8_t x4 = -1;
volatile int32_t x5 = -1;
uint32_t x18 = 126397U;
int32_t x19 = INT32_MIN;
uint16_t x22 = 297U;
uint64_t x27 = 112409966LLU;
int32_t x34 = INT32_MAX;
static int8_t x42 = INT8_MAX;
int16_t x45 = -4303;
int8_t x47 = INT8_MIN;
int32_t t10 = 59543232;
uint16_t x54 = 1U;
uint64_t x57 = UINT64_MAX;
uint32_t x60 = 1U;
static int32_t x68 = -8196330;
int16_t x75 = -24;
volatile uint64_t t18 = 31221088602LLU;
static volatile int64_t x97 = INT64_MIN;
int8_t x101 = 5;
int32_t x113 = 341872402;
int64_t x124 = -1LL;
int8_t x125 = INT8_MAX;
volatile int64_t t26 = -2120392279840895LL;
int64_t x129 = 3051741977526LL;
int32_t x132 = INT32_MIN;
static int32_t x134 = 4;
int16_t x135 = INT16_MIN;
static volatile int16_t x138 = INT16_MIN;
uint16_t x145 = UINT16_MAX;
uint64_t x151 = UINT64_MAX;
volatile uint16_t x153 = UINT16_MAX;
int16_t x155 = -1;
int32_t x158 = INT32_MIN;
int8_t x161 = -1;
uint64_t t35 = 37832565289LLU;
static int16_t x171 = INT16_MIN;
int16_t x173 = INT16_MIN;
int32_t x178 = INT32_MIN;
uint8_t x181 = 52U;
uint16_t x182 = UINT16_MAX;
int32_t t39 = -31;
static uint32_t x186 = 9U;
uint32_t x192 = 9U;
uint16_t x197 = 1U;
static int8_t x200 = INT8_MAX;
int64_t t43 = 23LL;
int64_t x202 = INT64_MIN;
int8_t x206 = 56;
uint32_t t45 = 117U;
int32_t x224 = INT32_MIN;
int32_t x225 = INT32_MIN;
static int64_t x236 = -1736119215555LL;
int16_t x238 = -1;
uint32_t t52 = 104895228U;
int32_t x242 = -424178;
volatile uint32_t t53 = 23U;
static int16_t x245 = INT16_MAX;
static uint64_t t54 = 94995179351879334LLU;
static uint8_t x252 = UINT8_MAX;
volatile uint64_t t56 = 93172LLU;
uint64_t x261 = UINT64_MAX;
static int8_t x277 = -7;
static int8_t x283 = INT8_MAX;
uint16_t x284 = 1U;
int8_t x288 = 14;
volatile int8_t x291 = -1;
static int64_t x303 = -8310646984LL;
int8_t x310 = INT8_MIN;
volatile uint32_t x311 = UINT32_MAX;
uint32_t x313 = UINT32_MAX;
int8_t x316 = INT8_MAX;
int8_t x324 = -1;
int16_t x325 = INT16_MAX;
uint8_t x331 = 1U;
static int16_t x332 = INT16_MAX;
volatile uint16_t x333 = 100U;
int64_t x340 = 504305947301260596LL;
volatile int32_t x350 = -280649;
uint16_t x351 = UINT16_MAX;
int16_t x357 = -1;
static uint16_t x360 = UINT16_MAX;
static int16_t x363 = 1;
int64_t x372 = 30222LL;
int32_t x374 = -1;
volatile uint64_t x375 = 127264371951182499LLU;
int32_t x376 = INT32_MAX;
static volatile int64_t x383 = INT64_MIN;
int16_t x386 = -4694;
uint8_t x393 = 17U;
uint32_t x398 = UINT32_MAX;
static int64_t t91 = -3670302LL;
int64_t x411 = -1LL;
volatile int32_t x419 = INT32_MIN;
int16_t x428 = INT16_MIN;
uint64_t x431 = 1522292414LLU;
int64_t x435 = -4623240859227LL;
uint8_t x436 = 40U;


void f0(void) {
	uint16_t x1 = 388U;
	volatile uint32_t t0 = 881734102U;

	t0 = ((x1+(x2%x3))/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 5LLU;
	static int8_t x7 = 1;
	static uint16_t x8 = UINT16_MAX;
	volatile uint64_t t1 = 57459736LLU;

	t1 = ((x5+(x6%x7))/x8);

	if (t1 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	volatile uint8_t x10 = UINT8_MAX;
	int8_t x11 = INT8_MIN;
	static int32_t x12 = -30;
	static volatile int32_t t2 = 246990;

	t2 = ((x9+(x10%x11))/x12);

	if (t2 != 1088) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	static int64_t x20 = INT64_MAX;
	volatile int64_t t3 = -435814596060LL;

	t3 = ((x17+(x18%x19))/x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 1U;
	static int8_t x23 = INT8_MAX;
	int8_t x24 = -1;
	volatile uint32_t t4 = 187318U;

	t4 = ((x21+(x22%x23))/x24);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = 147494447454LLU;
	static volatile uint16_t x26 = 3U;
	static int32_t x28 = -10932;
	volatile uint64_t t5 = 31907500307LLU;

	t5 = ((x25+(x26%x27))/x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = INT32_MIN;
	static int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MAX;
	static int32_t t6 = -2;

	t6 = ((x33+(x34%x35))/x36);

	if (t6 != -16909062) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	volatile int32_t x38 = -1;
	static volatile int8_t x39 = -1;
	int32_t x40 = -1;
	volatile int32_t t7 = -427182;

	t7 = ((x37+(x38%x39))/x40);

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x41 = 455U;
	int32_t x43 = INT32_MAX;
	int64_t x44 = INT64_MAX;
	int64_t t8 = -11520761555912LL;

	t8 = ((x41+(x42%x43))/x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x46 = UINT8_MAX;
	int16_t x48 = INT16_MIN;
	int32_t t9 = -385938;

	t9 = ((x45+(x46%x47))/x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;
	volatile int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MIN;

	t10 = ((x49+(x50%x51))/x52);

	if (t10 != 16777216) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 0;
	int16_t x55 = 14938;
	volatile uint16_t x56 = 2760U;
	int32_t t11 = -2150;

	t11 = ((x53+(x54%x55))/x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x58 = 34;
	volatile int64_t x59 = -1LL;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x57+(x58%x59))/x60);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MAX;
	uint32_t x62 = UINT32_MAX;
	volatile int8_t x63 = INT8_MAX;
	int32_t x64 = INT32_MAX;
	uint32_t t13 = 2388U;

	t13 = ((x61+(x62%x63))/x64);

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 3920317950967012203LL;
	volatile int16_t x66 = -98;
	uint16_t x67 = UINT16_MAX;
	int64_t t14 = 1997077LL;

	t14 = ((x65+(x66%x67))/x68);

	if (t14 != -478301624137LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MIN;
	uint16_t x74 = 7U;
	static int8_t x76 = -1;
	int32_t t15 = -11333039;

	t15 = ((x73+(x74%x75))/x76);

	if (t15 != 121) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = -123;
	static int16_t x79 = INT16_MIN;
	static uint64_t x80 = UINT64_MAX;
	volatile uint64_t t16 = 160162026049161638LLU;

	t16 = ((x77+(x78%x79))/x80);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x85 = INT32_MIN;
	int64_t x86 = -1LL;
	int16_t x87 = INT16_MAX;
	int32_t x88 = INT32_MIN;
	int64_t t17 = -605134405346LL;

	t17 = ((x85+(x86%x87))/x88);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = -390896715907LL;
	uint64_t x90 = 157LLU;
	static uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MIN;

	t18 = ((x89+(x90%x91))/x92);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 2538938913603518449LLU;
	static volatile int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MAX;
	volatile int32_t x96 = -1491531;
	volatile uint64_t t19 = 1821844LLU;

	t19 = ((x93+(x94%x95))/x96);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x98 = UINT8_MAX;
	static uint32_t x99 = UINT32_MAX;
	volatile int16_t x100 = INT16_MAX;
	static volatile int64_t t20 = -221421LL;

	t20 = ((x97+(x98%x99))/x100);

	if (t20 != -281483566907399LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x102 = -1;
	volatile int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t21 = -25;

	t21 = ((x101+(x102%x103))/x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = UINT16_MAX;
	volatile int8_t x106 = INT8_MIN;
	int32_t x107 = -1;
	uint32_t x108 = 3424U;
	uint32_t t22 = 40591472U;

	t22 = ((x105+(x106%x107))/x108);

	if (t22 != 19U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 11899307761651486LLU;
	volatile int16_t x110 = 2451;
	static uint32_t x111 = 204U;
	volatile int32_t x112 = -1;
	uint64_t t23 = 74170792745LLU;

	t23 = ((x109+(x110%x111))/x112);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x114 = 10U;
	uint32_t x115 = 14U;
	static volatile int16_t x116 = 39;
	volatile uint32_t t24 = 3U;

	t24 = ((x113+(x114%x115))/x116);

	if (t24 != 8765959U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = 35;
	volatile uint32_t x122 = 7U;
	uint32_t x123 = 1U;
	static volatile int64_t t25 = 4229LL;

	t25 = ((x121+(x122%x123))/x124);

	if (t25 != -35LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x126 = -1LL;
	static uint8_t x127 = 59U;
	int8_t x128 = INT8_MIN;

	t26 = ((x125+(x126%x127))/x128);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x130 = 168U;
	int32_t x131 = -1;
	int64_t t27 = -1710190826371446LL;

	t27 = ((x129+(x130%x131))/x132);

	if (t27 != -1421LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MIN;
	int64_t x136 = 1725114390LL;
	volatile int64_t t28 = -12LL;

	t28 = ((x133+(x134%x135))/x136);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = INT16_MAX;
	int64_t x139 = 1LL;
	int64_t x140 = -1LL;
	int64_t t29 = -8479435454461963LL;

	t29 = ((x137+(x138%x139))/x140);

	if (t29 != -32767LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x146 = INT64_MIN;
	uint16_t x147 = 143U;
	int64_t x148 = -1LL;
	volatile int64_t t30 = -15384358705599245LL;

	t30 = ((x145+(x146%x147))/x148);

	if (t30 != -65527LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = UINT32_MAX;
	static uint8_t x150 = UINT8_MAX;
	volatile uint16_t x152 = 27457U;
	uint64_t t31 = 29915LLU;

	t31 = ((x149+(x150%x151))/x152);

	if (t31 != 156425LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x154 = 494246821U;
	int32_t x156 = INT32_MIN;
	uint32_t t32 = 66U;

	t32 = ((x153+(x154%x155))/x156);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x157 = INT8_MIN;
	uint32_t x159 = 1U;
	int8_t x160 = INT8_MAX;
	volatile uint32_t t33 = 43502218U;

	t33 = ((x157+(x158%x159))/x160);

	if (t33 != 33818639U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x162 = -12;
	int32_t x163 = -6686953;
	int64_t x164 = INT64_MAX;
	int64_t t34 = -2881LL;

	t34 = ((x161+(x162%x163))/x164);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x165 = 132LLU;
	volatile uint8_t x166 = UINT8_MAX;
	int8_t x167 = INT8_MIN;
	volatile int8_t x168 = INT8_MIN;

	t35 = ((x165+(x166%x167))/x168);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = 69021LLU;
	uint16_t x170 = UINT16_MAX;
	uint16_t x172 = 11962U;
	static volatile uint64_t t36 = 286869177834013673LLU;

	t36 = ((x169+(x170%x171))/x172);

	if (t36 != 8LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x174 = UINT32_MAX;
	volatile int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MAX;
	volatile uint32_t t37 = 3127U;

	t37 = ((x173+(x174%x175))/x176);

	if (t37 != 2U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MIN;
	int16_t x179 = INT16_MIN;
	uint32_t x180 = 12431783U;
	uint32_t t38 = 37832U;

	t38 = ((x177+(x178%x179))/x180);

	if (t38 != 172U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x183 = 98;
	volatile int32_t x184 = 7022585;

	t39 = ((x181+(x182%x183))/x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MAX;
	int8_t x187 = 50;
	static int64_t x188 = INT64_MIN;
	volatile int64_t t40 = 108057061764LL;

	t40 = ((x185+(x186%x187))/x188);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MAX;
	static int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MAX;
	volatile int64_t t41 = 149970910LL;

	t41 = ((x189+(x190%x191))/x192);

	if (t41 != 13LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x193 = UINT16_MAX;
	static int32_t x194 = INT32_MIN;
	static uint16_t x195 = UINT16_MAX;
	int8_t x196 = 1;
	int32_t t42 = -22;

	t42 = ((x193+(x194%x195))/x196);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x198 = INT16_MIN;
	static int64_t x199 = INT64_MIN;

	t43 = ((x197+(x198%x199))/x200);

	if (t43 != -258LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = INT8_MAX;
	static uint64_t x203 = UINT64_MAX;
	volatile int32_t x204 = INT32_MIN;
	static volatile uint64_t t44 = 5LLU;

	t44 = ((x201+(x202%x203))/x204);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = 3;
	uint32_t x207 = UINT32_MAX;
	static int32_t x208 = 17030;

	t45 = ((x205+(x206%x207))/x208);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x209 = UINT16_MAX;
	volatile uint16_t x210 = 1U;
	static uint64_t x211 = 494132548771LLU;
	static int32_t x212 = 8128509;
	volatile uint64_t t46 = 25758091LLU;

	t46 = ((x209+(x210%x211))/x212);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = -680;
	static int64_t x214 = -3246801626650985655LL;
	static int64_t x215 = -1LL;
	volatile int16_t x216 = 55;
	volatile int64_t t47 = -3225178613663204LL;

	t47 = ((x213+(x214%x215))/x216);

	if (t47 != -12LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MAX;
	uint64_t x218 = 38870983839LLU;
	uint16_t x219 = 4097U;
	static int8_t x220 = INT8_MAX;
	volatile uint64_t t48 = 2104LLU;

	t48 = ((x217+(x218%x219))/x220);

	if (t48 != 289LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x221 = 309654U;
	int64_t x222 = INT64_MIN;
	int16_t x223 = 1;
	int64_t t49 = -2942LL;

	t49 = ((x221+(x222%x223))/x224);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x226 = 1459163LLU;
	uint32_t x227 = 15751286U;
	static int16_t x228 = -7689;
	static volatile uint64_t t50 = 224LLU;

	t50 = ((x225+(x226%x227))/x228);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x233 = 46;
	uint64_t x234 = UINT64_MAX;
	volatile int16_t x235 = INT16_MAX;
	volatile uint64_t t51 = 59LLU;

	t51 = ((x233+(x234%x235))/x236);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x237 = UINT16_MAX;
	int32_t x239 = -3664;
	uint32_t x240 = UINT32_MAX;

	t52 = ((x237+(x238%x239))/x240);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x241 = 57U;
	int32_t x243 = -949;
	static int32_t x244 = -1;

	t53 = ((x241+(x242%x243))/x244);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x246 = UINT64_MAX;
	static int16_t x247 = INT16_MIN;
	int16_t x248 = -478;

	t54 = ((x245+(x246%x247))/x248);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = 12U;
	static int64_t x250 = INT64_MIN;
	static uint32_t x251 = 22578U;
	volatile int64_t t55 = -83885531668366333LL;

	t55 = ((x249+(x250%x251))/x252);

	if (t55 != -24LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = INT8_MIN;
	int32_t x254 = -1;
	uint64_t x255 = 1357313LLU;
	int8_t x256 = INT8_MIN;

	t56 = ((x253+(x254%x255))/x256);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x257 = -111591158;
	volatile uint32_t x258 = 6950130U;
	int32_t x259 = 464977269;
	int64_t x260 = INT64_MIN;
	int64_t t57 = 30747174619LL;

	t57 = ((x257+(x258%x259))/x260);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x262 = INT8_MAX;
	int64_t x263 = -78493535LL;
	int8_t x264 = 2;
	volatile uint64_t t58 = 1042LLU;

	t58 = ((x261+(x262%x263))/x264);

	if (t58 != 63LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = INT64_MIN;
	uint32_t x267 = 1U;
	static int32_t x268 = -1;
	static int64_t t59 = -8211998536LL;

	t59 = ((x265+(x266%x267))/x268);

	if (t59 != -4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x269 = 248365952U;
	uint16_t x270 = UINT16_MAX;
	int16_t x271 = -1;
	static volatile int8_t x272 = 5;
	static uint32_t t60 = 150346U;

	t60 = ((x269+(x270%x271))/x272);

	if (t60 != 49673190U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x273 = -1;
	volatile uint16_t x274 = 59U;
	int8_t x275 = INT8_MAX;
	int64_t x276 = INT64_MIN;
	volatile int64_t t61 = 785665718733719LL;

	t61 = ((x273+(x274%x275))/x276);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x278 = 277520LLU;
	int16_t x279 = INT16_MIN;
	int8_t x280 = 27;
	uint64_t t62 = 20035223130LLU;

	t62 = ((x277+(x278%x279))/x280);

	if (t62 != 10278LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x281 = 1U;
	uint8_t x282 = 111U;
	uint32_t t63 = 957158001U;

	t63 = ((x281+(x282%x283))/x284);

	if (t63 != 112U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x285 = INT64_MIN;
	uint16_t x286 = 1426U;
	static int32_t x287 = -1;
	volatile int64_t t64 = -219135523LL;

	t64 = ((x285+(x286%x287))/x288);

	if (t64 != -658812288346769700LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x289 = 107U;
	uint8_t x290 = UINT8_MAX;
	int32_t x292 = INT32_MAX;
	int32_t t65 = -441941464;

	t65 = ((x289+(x290%x291))/x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = -1;
	int32_t x298 = 6676;
	uint8_t x299 = 15U;
	volatile uint64_t x300 = UINT64_MAX;
	volatile uint64_t t66 = 1956LLU;

	t66 = ((x297+(x298%x299))/x300);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = INT32_MAX;
	static uint16_t x302 = UINT16_MAX;
	int32_t x304 = -1;
	volatile int64_t t67 = 470360103605753005LL;

	t67 = ((x301+(x302%x303))/x304);

	if (t67 != -2147549182LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x305 = -449231;
	int64_t x306 = INT64_MIN;
	volatile uint64_t x307 = UINT64_MAX;
	static int16_t x308 = 470;
	volatile uint64_t t68 = 2509LLU;

	t68 = ((x305+(x306%x307))/x308);

	if (t68 != 19624195823094311LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = 466756443269080704LL;
	static uint64_t x312 = UINT64_MAX;
	volatile uint64_t t69 = 13667LLU;

	t69 = ((x309+(x310%x311))/x312);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x314 = UINT8_MAX;
	volatile int8_t x315 = INT8_MAX;
	uint32_t t70 = 86398U;

	t70 = ((x313+(x314%x315))/x316);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x321 = -1;
	int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	volatile int32_t t71 = -255710523;

	t71 = ((x321+(x322%x323))/x324);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x326 = UINT32_MAX;
	volatile int16_t x327 = -1;
	int64_t x328 = INT64_MAX;
	static int64_t t72 = 4601070LL;

	t72 = ((x325+(x326%x327))/x328);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = -1;
	int64_t x330 = 51471450259LL;
	volatile int64_t t73 = 119LL;

	t73 = ((x329+(x330%x331))/x332);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x334 = -1;
	volatile int16_t x335 = INT16_MAX;
	volatile uint8_t x336 = 12U;
	int32_t t74 = -2;

	t74 = ((x333+(x334%x335))/x336);

	if (t74 != 8) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x337 = 109U;
	static int32_t x338 = -609261032;
	uint64_t x339 = UINT64_MAX;
	volatile uint64_t t75 = 33049861985281559LLU;

	t75 = ((x337+(x338%x339))/x340);

	if (t75 != 36LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x341 = 2200676U;
	int32_t x342 = INT32_MIN;
	static uint64_t x343 = UINT64_MAX;
	volatile int8_t x344 = INT8_MIN;
	volatile uint64_t t76 = 492470LLU;

	t76 = ((x341+(x342%x343))/x344);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = -1;
	uint32_t x352 = 2162776U;
	uint32_t t77 = 22248968U;

	t77 = ((x349+(x350%x351))/x352);

	if (t77 != 1985U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = INT64_MAX;
	int8_t x354 = -1;
	int32_t x355 = -1;
	static uint16_t x356 = 125U;
	int64_t t78 = 31412322619409LL;

	t78 = ((x353+(x354%x355))/x356);

	if (t78 != 73786976294838206LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x358 = INT32_MIN;
	uint64_t x359 = UINT64_MAX;
	volatile uint64_t t79 = 20240642LLU;

	t79 = ((x357+(x358%x359))/x360);

	if (t79 != 281479271710720LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x361 = 3296U;
	uint16_t x362 = UINT16_MAX;
	static uint32_t x364 = UINT32_MAX;
	uint32_t t80 = 769U;

	t80 = ((x361+(x362%x363))/x364);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x365 = 2U;
	int32_t x366 = -1;
	int16_t x367 = INT16_MAX;
	uint32_t x368 = 3U;
	uint32_t t81 = 831916U;

	t81 = ((x365+(x366%x367))/x368);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x369 = -5102;
	volatile int32_t x370 = INT32_MIN;
	int16_t x371 = -1;
	int64_t t82 = 1LL;

	t82 = ((x369+(x370%x371))/x372);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x373 = UINT32_MAX;
	volatile uint64_t t83 = 7LLU;

	t83 = ((x373+(x374%x375))/x376);

	if (t83 != 56193450LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x377 = INT64_MAX;
	volatile uint64_t x378 = 179229875LLU;
	int64_t x379 = -1LL;
	int16_t x380 = -66;
	uint64_t t84 = 7869591641245LLU;

	t84 = ((x377+(x378%x379))/x380);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x382 = UINT8_MAX;
	int16_t x384 = INT16_MIN;
	volatile int64_t t85 = -72232581239LL;

	t85 = ((x381+(x382%x383))/x384);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x385 = UINT8_MAX;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = INT8_MIN;
	uint32_t t86 = 5415U;

	t86 = ((x385+(x386%x387))/x388);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = INT16_MAX;
	uint32_t x390 = 1U;
	int64_t x391 = INT64_MIN;
	uint32_t x392 = 3712U;
	volatile int64_t t87 = 26645204LL;

	t87 = ((x389+(x390%x391))/x392);

	if (t87 != 8LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x394 = INT64_MIN;
	uint16_t x395 = 22U;
	int16_t x396 = INT16_MIN;
	volatile int64_t t88 = 240669LL;

	t88 = ((x393+(x394%x395))/x396);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = -3;
	uint64_t x399 = 571LLU;
	uint64_t x400 = UINT64_MAX;
	uint64_t t89 = 36195LLU;

	t89 = ((x397+(x398%x399))/x400);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x401 = UINT32_MAX;
	int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MIN;
	int64_t x404 = -858732LL;
	static int64_t t90 = -16577723LL;

	t90 = ((x401+(x402%x403))/x404);

	if (t90 != -5001LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x405 = UINT8_MAX;
	int32_t x406 = 1039161;
	int32_t x407 = INT32_MAX;
	static int64_t x408 = INT64_MIN;

	t91 = ((x405+(x406%x407))/x408);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x409 = INT32_MIN;
	static volatile int32_t x410 = INT32_MIN;
	static int32_t x412 = -1;
	volatile int64_t t92 = -1261LL;

	t92 = ((x409+(x410%x411))/x412);

	if (t92 != 2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x413 = -44540;
	static int64_t x414 = -129232434667075684LL;
	static int16_t x415 = INT16_MIN;
	int8_t x416 = INT8_MAX;
	volatile int64_t t93 = -656LL;

	t93 = ((x413+(x414%x415))/x416);

	if (t93 != -464LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x417 = 3U;
	volatile int8_t x418 = -1;
	int16_t x420 = 1;
	int32_t t94 = -241120;

	t94 = ((x417+(x418%x419))/x420);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x421 = INT16_MAX;
	int64_t x422 = INT64_MIN;
	int32_t x423 = INT32_MAX;
	int16_t x424 = 18;
	static int64_t t95 = -44464LL;

	t95 = ((x421+(x422%x423))/x424);

	if (t95 != 1820LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = INT16_MAX;
	int64_t x426 = INT64_MIN;
	int64_t x427 = INT64_MIN;
	int64_t t96 = 1098281515300LL;

	t96 = ((x425+(x426%x427))/x428);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x429 = 1;
	int64_t x430 = INT64_MIN;
	int32_t x432 = INT32_MIN;
	volatile uint64_t t97 = 33500469997162LLU;

	t97 = ((x429+(x430%x431))/x432);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x433 = 30880849U;
	uint32_t x434 = UINT32_MAX;
	int64_t t98 = -5667126LL;

	t98 = ((x433+(x434%x435))/x436);

	if (t98 != 108146203LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x437 = INT16_MAX;
	static uint32_t x438 = 193U;
	int64_t x439 = 572252678095LL;
	int32_t x440 = INT32_MIN;
	volatile int64_t t99 = 94LL;

	t99 = ((x437+(x438%x439))/x440);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

