#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 933;
int64_t t1 = -185LL;
int64_t x10 = INT64_MAX;
static uint8_t x14 = 5U;
int64_t x15 = INT64_MIN;
int64_t x17 = INT64_MIN;
int16_t x24 = 895;
static int32_t x30 = INT32_MAX;
volatile int32_t t7 = -4;
int64_t x33 = -86875926LL;
int16_t x38 = -1;
int16_t x39 = 967;
uint8_t x40 = UINT8_MAX;
uint64_t t10 = 2LLU;
int64_t x50 = -1LL;
uint32_t x52 = 2055U;
int64_t t11 = -480934856936LL;
int64_t x53 = 2342678LL;
uint8_t x55 = 26U;
static volatile uint32_t t14 = 714505U;
volatile int16_t x71 = 28;
int8_t x79 = INT8_MIN;
static volatile int32_t t18 = -5258;
int8_t x84 = -1;
int8_t x94 = INT8_MIN;
static int8_t x100 = INT8_MAX;
uint16_t x103 = UINT16_MAX;
int32_t x119 = INT32_MAX;
int16_t x134 = 140;
static uint64_t x142 = 10LLU;
int64_t x144 = 165813032350734LL;
static uint8_t x147 = 109U;
int16_t x155 = -1902;
uint8_t x160 = 10U;
int32_t t36 = -296659948;
int32_t t37 = 15432;
int32_t x166 = 28982;
int16_t x168 = -31;
int16_t x169 = INT16_MIN;
int8_t x172 = INT8_MAX;
int64_t t40 = 15LL;
int64_t x180 = INT64_MIN;
volatile uint32_t t41 = 1883U;
static volatile int32_t x186 = INT32_MAX;
uint32_t x201 = UINT32_MAX;
volatile int64_t t46 = 3283622913353990LL;
int16_t x207 = INT16_MIN;
static int16_t x212 = INT16_MIN;
int64_t x218 = 123LL;
static uint32_t x225 = 2135208U;
volatile int64_t t52 = 6883771905971LL;
int32_t x232 = 13;
volatile uint32_t t53 = 255146U;
uint64_t x237 = UINT64_MAX;
int64_t x247 = 13788215852274157LL;
volatile int32_t x252 = 3;
volatile int32_t t61 = -92;
volatile int64_t x265 = INT64_MIN;
volatile int64_t t62 = 286028980506031317LL;
static uint8_t x270 = UINT8_MAX;
volatile int64_t t63 = -9991250LL;
int64_t x276 = -1LL;
int64_t x277 = INT64_MIN;
static int64_t x278 = INT64_MAX;
volatile int64_t x279 = -1LL;
volatile int64_t t65 = 2106753198106709020LL;
int16_t x281 = INT16_MIN;
int64_t x283 = INT64_MIN;
uint8_t x288 = 49U;
int64_t x291 = INT64_MIN;
int32_t x296 = INT32_MIN;
volatile int64_t t69 = -178LL;
uint64_t x297 = UINT64_MAX;
volatile uint16_t x298 = 20491U;
static volatile uint64_t t70 = 6LLU;
uint8_t x302 = 1U;
int16_t x304 = -8157;
static int64_t t71 = -16577772LL;
static int64_t x309 = INT64_MIN;
int16_t x311 = 626;
volatile int8_t x313 = INT8_MIN;
volatile int64_t x314 = INT64_MIN;
uint32_t x319 = 0U;
volatile int16_t x320 = INT16_MIN;
uint16_t x324 = UINT16_MAX;
volatile int64_t t80 = 825LL;
uint16_t x345 = UINT16_MAX;
static int16_t x354 = -1;
volatile int16_t x355 = INT16_MAX;
int8_t x363 = INT8_MAX;
int32_t x365 = -860304;
uint64_t x369 = 7074LLU;
uint8_t x372 = UINT8_MAX;
static uint64_t x373 = UINT64_MAX;
static volatile int64_t t88 = -5444LL;
uint32_t x381 = 173770U;
uint32_t t89 = 1U;
int64_t x391 = 8001106433724230LL;
int32_t t91 = -14186761;
int32_t x393 = INT32_MAX;
uint8_t x400 = UINT8_MAX;
static int32_t x405 = INT32_MIN;
uint16_t x409 = 2396U;
uint8_t x413 = 0U;
volatile int8_t x421 = -1;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	int8_t x2 = INT8_MAX;
	uint8_t x3 = 0U;
	int8_t x4 = INT8_MAX;

	t0 = (x1%(x2-(x3<=x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 1U;
	int64_t x6 = 3LL;
	volatile uint32_t x7 = UINT32_MAX;
	volatile uint16_t x8 = UINT16_MAX;

	t1 = (x5%(x6-(x7<=x8)));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -17;
	int32_t x11 = 8;
	volatile int32_t x12 = 15186613;
	volatile int64_t t2 = 2009993437375367LL;

	t2 = (x9%(x10-(x11<=x12)));

	if (t2 != -17LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -178584621;

	t3 = (x13%(x14-(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = -1;
	volatile int8_t x19 = -15;
	static int32_t x20 = -1;
	int64_t t4 = 49769099LL;

	t4 = (x17%(x18-(x19<=x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	uint8_t x22 = 11U;
	int32_t x23 = INT32_MAX;
	volatile int32_t t5 = 482354;

	t5 = (x21%(x22-(x23<=x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = UINT64_MAX;
	static volatile uint16_t x26 = UINT16_MAX;
	int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MIN;
	uint64_t t6 = 9LLU;

	t6 = (x25%(x26-(x27<=x28)));

	if (t6 != 15LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	uint64_t x31 = 125541170230941537LLU;
	int16_t x32 = INT16_MIN;

	t7 = (x29%(x30-(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x34 = UINT64_MAX;
	uint32_t x35 = 311U;
	int64_t x36 = -1LL;
	uint64_t t8 = 56819887213992LLU;

	t8 = (x33%(x34-(x35<=x36)));

	if (t8 != 18446744073622675690LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int32_t t9 = 1030866;

	t9 = (x37%(x38-(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	int8_t x46 = INT8_MIN;
	volatile int8_t x47 = 15;
	uint64_t x48 = 3177191527LLU;

	t10 = (x45%(x46-(x47<=x48)));

	if (t10 != 128LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	int64_t x51 = 10529935950212145LL;

	t11 = (x49%(x50-(x51<=x52)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = INT16_MIN;
	uint16_t x56 = 9729U;
	static volatile int64_t t12 = -6964561008LL;

	t12 = (x53%(x54-(x55<=x56)));

	if (t12 != 16079LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int16_t x58 = INT16_MAX;
	volatile int8_t x59 = INT8_MAX;
	int32_t x60 = INT32_MIN;
	volatile int64_t t13 = 2613534529LL;

	t13 = (x57%(x58-(x59<=x60)));

	if (t13 != -8LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 18U;
	volatile int16_t x62 = INT16_MIN;
	int32_t x63 = 481;
	uint16_t x64 = UINT16_MAX;

	t14 = (x61%(x62-(x63<=x64)));

	if (t14 != 18U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MIN;
	uint64_t x67 = UINT64_MAX;
	static uint16_t x68 = 5U;
	static volatile int64_t t15 = 1805LL;

	t15 = (x65%(x66-(x67<=x68)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 17127U;
	static int64_t x70 = -1LL;
	volatile int16_t x72 = INT16_MIN;
	int64_t t16 = -1133875202368LL;

	t16 = (x69%(x70-(x71<=x72)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = -1;
	uint16_t x74 = 15U;
	int16_t x75 = INT16_MAX;
	int64_t x76 = -1LL;
	static volatile int32_t t17 = 708;

	t17 = (x73%(x74-(x75<=x76)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MIN;
	int32_t x78 = INT32_MAX;
	int8_t x80 = -5;

	t18 = (x77%(x78-(x79<=x80)));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	int8_t x82 = -15;
	volatile int8_t x83 = 21;
	uint64_t t19 = 28325699517LLU;

	t19 = (x81%(x82-(x83<=x84)));

	if (t19 != 14LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x89 = 757339LLU;
	int16_t x90 = -25;
	int64_t x91 = 1653045406LL;
	int8_t x92 = INT8_MIN;
	volatile uint64_t t20 = 280349904203100LLU;

	t20 = (x89%(x90-(x91<=x92)));

	if (t20 != 757339LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 61550U;
	volatile int32_t x95 = INT32_MIN;
	static uint64_t x96 = UINT64_MAX;
	uint32_t t21 = 985U;

	t21 = (x93%(x94-(x95<=x96)));

	if (t21 != 61550U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MIN;
	int64_t x98 = INT64_MAX;
	uint64_t x99 = 207116LLU;
	int64_t t22 = 55977022415906412LL;

	t22 = (x97%(x98-(x99<=x100)));

	if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	uint64_t x102 = UINT64_MAX;
	int32_t x104 = INT32_MIN;
	uint64_t t23 = 3124672435260959LLU;

	t23 = (x101%(x102-(x103<=x104)));

	if (t23 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -56094207703627LL;
	int32_t x106 = 80882;
	static volatile int16_t x107 = 11;
	int64_t x108 = INT64_MAX;
	static volatile int64_t t24 = -762205105048801046LL;

	t24 = (x105%(x106-(x107<=x108)));

	if (t24 != -15080LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = UINT64_MAX;
	int16_t x110 = INT16_MAX;
	int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	uint64_t t25 = 0LLU;

	t25 = (x109%(x110-(x111<=x112)));

	if (t25 != 255LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = INT64_MAX;
	uint8_t x114 = 45U;
	static int64_t x115 = INT64_MAX;
	static volatile int8_t x116 = INT8_MAX;
	static int64_t t26 = -63LL;

	t26 = (x113%(x114-(x115<=x116)));

	if (t26 != 7LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 9924926U;
	uint16_t x118 = UINT16_MAX;
	static volatile int64_t x120 = 33246125655672LL;
	volatile uint32_t t27 = 343U;

	t27 = (x117%(x118-(x119<=x120)));

	if (t27 != 29292U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 38405125069816LLU;
	int8_t x122 = INT8_MAX;
	uint8_t x123 = 1U;
	static int8_t x124 = INT8_MIN;
	volatile uint64_t t28 = 71738779555090069LLU;

	t28 = (x121%(x122-(x123<=x124)));

	if (t28 != 108LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = UINT64_MAX;
	int16_t x126 = INT16_MIN;
	uint8_t x127 = 101U;
	static volatile int32_t x128 = INT32_MIN;
	uint64_t t29 = 182151LLU;

	t29 = (x125%(x126-(x127<=x128)));

	if (t29 != 32767LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = INT16_MIN;
	uint64_t x135 = 118LLU;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t30 = -1;

	t30 = (x133%(x134-(x135<=x136)));

	if (t30 != -103) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x137 = 946U;
	int64_t x138 = -1LL;
	int8_t x139 = -1;
	volatile int64_t x140 = -1LL;
	volatile int64_t t31 = 143084136389670LL;

	t31 = (x137%(x138-(x139<=x140)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = 654661U;
	int32_t x143 = -552909;
	volatile uint64_t t32 = 3394757174165035777LLU;

	t32 = (x141%(x142-(x143<=x144)));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = 3955;
	int16_t x146 = INT16_MIN;
	int32_t x148 = INT32_MIN;
	static volatile int32_t t33 = 3068296;

	t33 = (x145%(x146-(x147<=x148)));

	if (t33 != 3955) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = -1;
	static int8_t x150 = 0;
	int8_t x151 = INT8_MIN;
	int8_t x152 = 5;
	static int32_t t34 = -655;

	t34 = (x149%(x150-(x151<=x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = INT32_MIN;
	static int32_t x154 = -1;
	int32_t x156 = INT32_MIN;
	volatile int32_t t35 = -96;

	t35 = (x153%(x154-(x155<=x156)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x157 = -1;
	int16_t x158 = -1;
	int8_t x159 = INT8_MAX;

	t36 = (x157%(x158-(x159<=x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MAX;
	uint16_t x162 = UINT16_MAX;
	static uint64_t x163 = UINT64_MAX;
	uint32_t x164 = 265117983U;

	t37 = (x161%(x162-(x163<=x164)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MIN;
	volatile uint16_t x167 = 1U;
	static int32_t t38 = -3713442;

	t38 = (x165%(x166-(x167<=x168)));

	if (t38 != -4394) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x170 = -1;
	int8_t x171 = -4;
	int32_t t39 = -13595749;

	t39 = (x169%(x170-(x171<=x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MAX;
	int8_t x174 = INT8_MIN;
	uint8_t x175 = 12U;
	volatile uint8_t x176 = 26U;

	t40 = (x173%(x174-(x175<=x176)));

	if (t40 != 127LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = -1;
	uint32_t x178 = 378U;
	int8_t x179 = INT8_MAX;

	t41 = (x177%(x178-(x179<=x180)));

	if (t41 != 129U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = 4;
	uint8_t x182 = 1U;
	int64_t x183 = INT64_MAX;
	static int16_t x184 = 3;
	static volatile int32_t t42 = 307;

	t42 = (x181%(x182-(x183<=x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x185 = UINT32_MAX;
	volatile uint16_t x187 = 59U;
	static uint64_t x188 = 57935724481941084LLU;
	volatile uint32_t t43 = 43U;

	t43 = (x185%(x186-(x187<=x188)));

	if (t43 != 3U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = 2;
	volatile uint64_t x194 = 14954459440256348LLU;
	static int16_t x195 = 5483;
	uint64_t x196 = UINT64_MAX;
	static volatile uint64_t t44 = 1320LLU;

	t44 = (x193%(x194-(x195<=x196)));

	if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x197 = 25U;
	static int16_t x198 = -5527;
	static uint8_t x199 = 3U;
	uint16_t x200 = UINT16_MAX;
	int32_t t45 = 53913;

	t45 = (x197%(x198-(x199<=x200)));

	if (t45 != 25) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x202 = -1LL;
	static int8_t x203 = -1;
	int32_t x204 = INT32_MIN;

	t46 = (x201%(x202-(x203<=x204)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = UINT32_MAX;
	uint16_t x206 = 219U;
	int8_t x208 = INT8_MIN;
	uint32_t t47 = 3664504U;

	t47 = (x205%(x206-(x207<=x208)));

	if (t47 != 183U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = -1;
	static volatile int64_t x210 = INT64_MAX;
	int64_t x211 = INT64_MAX;
	int64_t t48 = 86282211LL;

	t48 = (x209%(x210-(x211<=x212)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MIN;
	static volatile int8_t x214 = 52;
	int64_t x215 = -3214943LL;
	volatile int64_t x216 = -250069125858192225LL;
	int32_t t49 = 922;

	t49 = (x213%(x214-(x215<=x216)));

	if (t49 != -24) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x217 = 17;
	uint32_t x219 = 3U;
	int32_t x220 = -254617021;
	volatile int64_t t50 = -924799519001239LL;

	t50 = (x217%(x218-(x219<=x220)));

	if (t50 != 17LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x221 = -1LL;
	static uint16_t x222 = 4U;
	int64_t x223 = -1LL;
	volatile int8_t x224 = INT8_MIN;
	volatile int64_t t51 = -4LL;

	t51 = (x221%(x222-(x223<=x224)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x226 = -1LL;
	int8_t x227 = -1;
	int16_t x228 = -1;

	t52 = (x225%(x226-(x227<=x228)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x229 = 189U;
	static uint32_t x230 = 13U;
	static uint8_t x231 = 70U;

	t53 = (x229%(x230-(x231<=x232)));

	if (t53 != 7U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x233 = INT32_MIN;
	uint8_t x234 = UINT8_MAX;
	int64_t x235 = 173573842345534926LL;
	int8_t x236 = INT8_MIN;
	int32_t t54 = 1;

	t54 = (x233%(x234-(x235<=x236)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x238 = INT16_MAX;
	static int16_t x239 = INT16_MIN;
	static int8_t x240 = 18;
	volatile uint64_t t55 = 36975885LLU;

	t55 = (x237%(x238-(x239<=x240)));

	if (t55 != 255LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -6;
	uint16_t x242 = 107U;
	int64_t x243 = INT64_MIN;
	uint8_t x244 = 3U;
	int32_t t56 = -4138052;

	t56 = (x241%(x242-(x243<=x244)));

	if (t56 != -6) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x245 = 97U;
	volatile uint32_t x246 = 80126U;
	volatile int16_t x248 = INT16_MAX;
	uint32_t t57 = 155148U;

	t57 = (x245%(x246-(x247<=x248)));

	if (t57 != 97U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MIN;
	uint16_t x250 = 18521U;
	uint32_t x251 = UINT32_MAX;
	volatile int64_t t58 = 102321423068LL;

	t58 = (x249%(x250-(x251<=x252)));

	if (t58 != -16145LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x253 = 0;
	static int16_t x254 = 61;
	static volatile int16_t x255 = INT16_MAX;
	int32_t x256 = INT32_MAX;
	int32_t t59 = 3089;

	t59 = (x253%(x254-(x255<=x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MIN;
	uint16_t x258 = 3U;
	int8_t x259 = INT8_MIN;
	volatile uint8_t x260 = UINT8_MAX;
	volatile int64_t t60 = -312263LL;

	t60 = (x257%(x258-(x259<=x260)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x261 = -1;
	static volatile uint8_t x262 = UINT8_MAX;
	static uint8_t x263 = 1U;
	static volatile int8_t x264 = 0;

	t61 = (x261%(x262-(x263<=x264)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x266 = -27017257328LL;
	int64_t x267 = -1LL;
	volatile int32_t x268 = INT32_MAX;

	t62 = (x265%(x266-(x267<=x268)));

	if (t62 != -25905635207LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = -39204179LL;
	static int32_t x271 = INT32_MIN;
	int8_t x272 = 1;

	t63 = (x269%(x270-(x271<=x272)));

	if (t63 != -41LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = 648846393;
	uint8_t x274 = 3U;
	int16_t x275 = INT16_MAX;
	volatile int32_t t64 = 107;

	t64 = (x273%(x274-(x275<=x276)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x280 = -1;

	t65 = (x277%(x278-(x279<=x280)));

	if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x282 = INT16_MIN;
	static int64_t x284 = -919266981576607220LL;
	volatile int32_t t66 = -9786;

	t66 = (x281%(x282-(x283<=x284)));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = INT16_MAX;
	static int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MIN;
	volatile int32_t t67 = 221415737;

	t67 = (x285%(x286-(x287<=x288)));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -1LL;
	uint32_t x290 = 287529257U;
	static int16_t x292 = INT16_MIN;
	int64_t t68 = 137725LL;

	t68 = (x289%(x290-(x291<=x292)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x293 = 522U;
	static volatile int64_t x294 = INT64_MIN;
	static uint8_t x295 = UINT8_MAX;

	t69 = (x293%(x294-(x295<=x296)));

	if (t69 != 522LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x299 = UINT32_MAX;
	uint8_t x300 = 0U;

	t70 = (x297%(x298-(x299<=x300)));

	if (t70 != 12787LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = INT64_MIN;
	uint64_t x303 = UINT64_MAX;

	t71 = (x301%(x302-(x303<=x304)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = 3U;
	int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MIN;
	int32_t x308 = INT32_MIN;
	static int32_t t72 = -254703459;

	t72 = (x305%(x306-(x307<=x308)));

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x310 = UINT8_MAX;
	uint16_t x312 = UINT16_MAX;
	int64_t t73 = 6262445296572LL;

	t73 = (x309%(x310-(x311<=x312)));

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x315 = -29;
	uint64_t x316 = 15331467847982261LLU;
	static volatile int64_t t74 = 11LL;

	t74 = (x313%(x314-(x315<=x316)));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MIN;
	volatile uint64_t x318 = 13397228408886LLU;
	uint64_t t75 = 5252LLU;

	t75 = (x317%(x318-(x319<=x320)));

	if (t75 != 9947072670903LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x321 = 4U;
	int8_t x322 = -1;
	uint32_t x323 = 2398092U;
	volatile int32_t t76 = 0;

	t76 = (x321%(x322-(x323<=x324)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = INT32_MAX;
	int16_t x326 = INT16_MAX;
	volatile int16_t x327 = INT16_MAX;
	uint8_t x328 = 0U;
	static volatile int32_t t77 = 848;

	t77 = (x325%(x326-(x327<=x328)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x329 = 812642889LL;
	volatile uint8_t x330 = 7U;
	int8_t x331 = 1;
	int16_t x332 = INT16_MIN;
	volatile int64_t t78 = -120623LL;

	t78 = (x329%(x330-(x331<=x332)));

	if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x333 = INT32_MAX;
	int8_t x334 = INT8_MIN;
	int8_t x335 = -1;
	int16_t x336 = -4960;
	int32_t t79 = 215737104;

	t79 = (x333%(x334-(x335<=x336)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x341 = UINT32_MAX;
	int64_t x342 = INT64_MAX;
	int64_t x343 = INT64_MIN;
	int32_t x344 = INT32_MIN;

	t80 = (x341%(x342-(x343<=x344)));

	if (t80 != 4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = 128308426850LLU;
	volatile int64_t t81 = -120757LL;

	t81 = (x345%(x346-(x347<=x348)));

	if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = -1LL;
	static int16_t x350 = 0;
	uint8_t x351 = UINT8_MAX;
	volatile uint32_t x352 = UINT32_MAX;
	int64_t t82 = -337108LL;

	t82 = (x349%(x350-(x351<=x352)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = 1;
	uint64_t x356 = 60130LLU;
	int32_t t83 = 303074531;

	t83 = (x353%(x354-(x355<=x356)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = 181160183;
	volatile int64_t x362 = INT64_MIN;
	static int8_t x364 = 0;
	static int64_t t84 = -7310282304743LL;

	t84 = (x361%(x362-(x363<=x364)));

	if (t84 != 181160183LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x366 = -1LL;
	static int8_t x367 = -1;
	int16_t x368 = -214;
	volatile int64_t t85 = 1149266292728999LL;

	t85 = (x365%(x366-(x367<=x368)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x370 = UINT64_MAX;
	int16_t x371 = -1;
	uint64_t t86 = 118287LLU;

	t86 = (x369%(x370-(x371<=x372)));

	if (t86 != 7074LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x374 = INT32_MAX;
	int16_t x375 = INT16_MAX;
	int8_t x376 = INT8_MIN;
	uint64_t t87 = 81151LLU;

	t87 = (x373%(x374-(x375<=x376)));

	if (t87 != 3LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x377 = INT16_MAX;
	int64_t x378 = 64414LL;
	uint64_t x379 = 711401541294282LLU;
	volatile int8_t x380 = 0;

	t88 = (x377%(x378-(x379<=x380)));

	if (t88 != 32767LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x382 = UINT32_MAX;
	int8_t x383 = INT8_MIN;
	int16_t x384 = -13659;

	t89 = (x381%(x382-(x383<=x384)));

	if (t89 != 173770U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x385 = 526U;
	uint32_t x386 = 117610U;
	uint8_t x387 = UINT8_MAX;
	volatile uint32_t x388 = 791398190U;
	volatile uint32_t t90 = 23U;

	t90 = (x385%(x386-(x387<=x388)));

	if (t90 != 526U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x389 = INT32_MIN;
	int8_t x390 = -1;
	volatile int32_t x392 = -25;

	t91 = (x389%(x390-(x391<=x392)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x394 = -1;
	volatile int16_t x395 = -1;
	static int16_t x396 = 1;
	int32_t t92 = -1;

	t92 = (x393%(x394-(x395<=x396)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x397 = UINT16_MAX;
	int64_t x398 = -139881LL;
	static int16_t x399 = 1;
	volatile int64_t t93 = -12503268914642485LL;

	t93 = (x397%(x398-(x399<=x400)));

	if (t93 != 65535LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x401 = INT8_MAX;
	int16_t x402 = INT16_MAX;
	static uint64_t x403 = 1LLU;
	int16_t x404 = INT16_MIN;
	volatile int32_t t94 = -4620026;

	t94 = (x401%(x402-(x403<=x404)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x406 = 8567U;
	static uint16_t x407 = 3U;
	static int32_t x408 = INT32_MAX;
	int32_t t95 = 63912;

	t95 = (x405%(x406-(x407<=x408)));

	if (t95 != -4580) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x410 = -1;
	uint8_t x411 = 39U;
	uint32_t x412 = UINT32_MAX;
	static volatile int32_t t96 = -6;

	t96 = (x409%(x410-(x411<=x412)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x414 = 780LLU;
	volatile int64_t x415 = INT64_MIN;
	int16_t x416 = INT16_MAX;
	volatile uint64_t t97 = 250LLU;

	t97 = (x413%(x414-(x415<=x416)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x417 = INT32_MAX;
	volatile uint8_t x418 = 4U;
	int8_t x419 = -1;
	int16_t x420 = INT16_MAX;
	volatile int32_t t98 = -1;

	t98 = (x417%(x418-(x419<=x420)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x422 = INT16_MAX;
	volatile int8_t x423 = 28;
	int32_t x424 = 345226;
	static int32_t t99 = 0;

	t99 = (x421%(x422-(x423<=x424)));

	if (t99 != -1) { NG(); } else { ; }
	
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

