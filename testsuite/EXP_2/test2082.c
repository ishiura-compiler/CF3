#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = -1;
volatile int32_t t1 = -50;
static uint64_t x12 = 179730LLU;
volatile int8_t x22 = -3;
volatile uint32_t x23 = UINT32_MAX;
uint64_t x28 = 16324368965355382LLU;
int32_t x35 = INT32_MIN;
uint64_t t7 = 24294LLU;
static int32_t x42 = INT32_MIN;
int16_t x44 = -1;
uint8_t x57 = UINT8_MAX;
volatile int32_t x59 = INT32_MIN;
volatile int64_t x61 = -12337983LL;
int64_t x65 = -3LL;
static volatile int16_t x66 = -1;
static int32_t x67 = 12273932;
int16_t x75 = -1;
uint16_t x82 = UINT16_MAX;
int64_t x84 = INT64_MAX;
int32_t x90 = INT32_MIN;
int32_t x91 = 16686888;
int16_t x101 = INT16_MIN;
uint8_t x102 = 2U;
int32_t x104 = -144;
int16_t x115 = INT16_MIN;
static int64_t x116 = 1LL;
int8_t x118 = -1;
int64_t t26 = -244576LL;
static volatile int8_t x124 = -24;
int32_t x132 = INT32_MAX;
uint32_t x137 = 377927U;
int16_t x139 = -10678;
static int16_t x149 = INT16_MIN;
int64_t x150 = 19531LL;
volatile int16_t x152 = 1;
static volatile int64_t x153 = INT64_MIN;
static uint8_t x163 = UINT8_MAX;
int16_t x165 = -1;
int64_t x167 = -2733621LL;
int16_t x170 = -1;
uint64_t x182 = 9990251141608781LLU;
int64_t x183 = INT64_MIN;
int8_t x184 = INT8_MIN;
volatile int64_t x201 = INT64_MAX;
int32_t x203 = -61390;
uint32_t x204 = 56U;
int64_t t45 = 136053062LL;
int32_t x205 = 58542;
int32_t x206 = -1;
volatile int64_t x208 = -1LL;
volatile int64_t t46 = 919863677961206342LL;
static uint8_t x216 = UINT8_MAX;
uint64_t t51 = 488199122LLU;
int8_t x232 = -1;
static int64_t t52 = 120508LL;
static uint16_t x235 = 5176U;
volatile int8_t x238 = -55;
int16_t x240 = 494;
int32_t t54 = 1215;
uint32_t x241 = 497317708U;
int8_t x244 = 10;
static uint16_t x248 = 12U;
static volatile uint32_t t58 = 43863U;
volatile uint16_t x263 = 3U;
int64_t x264 = -1LL;
uint64_t t59 = 87696042282907LLU;
static volatile int16_t x267 = -14480;
int32_t x273 = INT32_MIN;
static uint16_t x275 = 1U;
static int32_t x279 = INT32_MAX;
static volatile uint8_t x283 = 44U;
int16_t x284 = -1;
static int64_t x289 = 1974LL;
uint16_t x291 = 3U;
int32_t x292 = -1;
int8_t x293 = INT8_MIN;
int16_t x300 = -1;
int64_t t67 = 339659644LL;
volatile uint32_t x312 = 333226999U;
static int64_t t70 = -1071790443096049LL;
static volatile int32_t x316 = -1;
uint64_t x318 = UINT64_MAX;
uint64_t t72 = 800515084485788LLU;
int8_t x327 = INT8_MAX;
uint16_t x330 = 6924U;
static int32_t t76 = 4812289;
volatile uint64_t x338 = 49236613912472212LLU;
int32_t x342 = -14698127;
uint32_t x344 = UINT32_MAX;
volatile int32_t x347 = INT32_MAX;
int64_t t82 = -2199718149LL;
uint8_t x362 = 54U;
uint64_t t84 = 643866048054046068LLU;
int16_t x373 = INT16_MIN;
volatile int64_t x382 = 139328858166955LL;
volatile int64_t t87 = -614850330LL;
static volatile int64_t x393 = 347649693545LL;
volatile int64_t t89 = -6LL;
int8_t x398 = INT8_MAX;
static int32_t x404 = INT32_MAX;
static uint16_t x405 = 15062U;
uint32_t x415 = 21712U;
static int64_t x416 = INT64_MAX;
uint16_t x421 = UINT16_MAX;
int8_t x427 = INT8_MAX;


void f0(void) {
	uint32_t x1 = 7121475U;
	volatile int32_t x2 = -21980826;
	static uint16_t x3 = 30599U;
	int16_t x4 = -1;
	uint32_t t0 = 1767U;

	t0 = ((x1%(x2^x3))-x4);

	if (t0 != 7121476U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MIN;
	uint16_t x8 = 133U;

	t1 = ((x5%(x6^x7))-x8);

	if (t1 != -134) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile uint32_t x10 = 6489613U;
	uint16_t x11 = UINT16_MAX;
	volatile uint64_t t2 = 12237335LLU;

	t2 = ((x9%(x10^x11))-x12);

	if (t2 != 18446744073709404653LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	int64_t x18 = INT64_MIN;
	volatile uint16_t x19 = UINT16_MAX;
	int16_t x20 = -1;
	static volatile int64_t t3 = 64805752864032LL;

	t3 = ((x17%(x18^x19))-x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = INT8_MIN;
	int32_t x24 = -1;
	static volatile uint32_t t4 = 158155104U;

	t4 = ((x21%(x22^x23))-x24);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	static volatile uint8_t x26 = 1U;
	static volatile int8_t x27 = 0;
	volatile uint64_t t5 = 22979871LLU;

	t5 = ((x25%(x26^x27))-x28);

	if (t5 != 18430419704744196234LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x29 = 3597707LLU;
	uint8_t x30 = 25U;
	int64_t x31 = INT64_MIN;
	int16_t x32 = -1;
	static volatile uint64_t t6 = 4268558036LLU;

	t6 = ((x29%(x30^x31))-x32);

	if (t6 != 3597708LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	static uint8_t x34 = 23U;
	volatile uint64_t x36 = 3570224069LLU;

	t7 = ((x33%(x34^x35))-x36);

	if (t7 != 18446744070139327419LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x37 = INT32_MIN;
	uint64_t x38 = 1573612654879554359LLU;
	static int64_t x39 = 592615755895056LL;
	int16_t x40 = -76;
	uint64_t t8 = 1296341LLU;

	t8 = ((x37%(x38^x39))-x40);

	if (t8 != 1143460137172922527LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 9U;
	int64_t x43 = -895813798202487013LL;
	int64_t t9 = 10252142594430535LL;

	t9 = ((x41%(x42^x43))-x44);

	if (t9 != 10LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 2399856201LLU;
	uint32_t x50 = UINT32_MAX;
	uint64_t x51 = 129761161530LLU;
	uint16_t x52 = UINT16_MAX;
	uint64_t t10 = 22123162696LLU;

	t10 = ((x49%(x50^x51))-x52);

	if (t10 != 2399790666LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 1;
	int16_t x54 = INT16_MAX;
	uint64_t x55 = UINT64_MAX;
	int16_t x56 = INT16_MIN;
	static volatile uint64_t t11 = 20452860LLU;

	t11 = ((x53%(x54^x55))-x56);

	if (t11 != 32769LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x58 = INT16_MAX;
	int32_t x60 = INT32_MAX;
	static volatile int32_t t12 = 5684655;

	t12 = ((x57%(x58^x59))-x60);

	if (t12 != -2147483392) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x62 = 4013841U;
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = INT16_MAX;
	int64_t t13 = -69330311591LL;

	t13 = ((x61%(x62^x63))-x64);

	if (t13 != -328564LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x68 = INT8_MAX;
	volatile int64_t t14 = 111951178982LL;

	t14 = ((x65%(x66^x67))-x68);

	if (t14 != -130LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	static int16_t x70 = INT16_MIN;
	int8_t x71 = -42;
	volatile uint32_t x72 = 1349U;
	volatile uint32_t t15 = 14366U;

	t15 = ((x69%(x70^x71))-x72);

	if (t15 != 4294962419U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	volatile int32_t x74 = 89897;
	int8_t x76 = INT8_MAX;
	int32_t t16 = 2283500;

	t16 = ((x73%(x74^x75))-x76);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x77 = 1U;
	static int8_t x78 = -1;
	int16_t x79 = 3707;
	volatile int32_t x80 = INT32_MAX;
	static int32_t t17 = -20358953;

	t17 = ((x77%(x78^x79))-x80);

	if (t17 != -2147483646) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 1425U;
	static volatile int64_t x83 = -550LL;
	int64_t t18 = -1658LL;

	t18 = ((x81%(x82^x83))-x84);

	if (t18 != -9223372036854774382LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = UINT32_MAX;
	int64_t x86 = -1LL;
	uint64_t x87 = 383976631LLU;
	int8_t x88 = INT8_MIN;
	uint64_t t19 = 30801988822LLU;

	t19 = ((x85%(x86^x87))-x88);

	if (t19 != 4294967423LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x89 = 6U;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t20 = 128315121U;

	t20 = ((x89%(x90^x91))-x92);

	if (t20 != 7U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = INT8_MIN;
	int64_t x94 = 68572254812241363LL;
	static uint16_t x95 = 96U;
	int8_t x96 = INT8_MIN;
	volatile int64_t t21 = 1LL;

	t21 = ((x93%(x94^x95))-x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x103 = INT16_MIN;
	static volatile int32_t t22 = 12;

	t22 = ((x101%(x102^x103))-x104);

	if (t22 != 142) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = 2982402182599749805LL;
	int32_t x106 = 62;
	int8_t x107 = -1;
	volatile int8_t x108 = 1;
	volatile int64_t t23 = -1182LL;

	t23 = ((x105%(x106^x107))-x108);

	if (t23 != 48LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 3588U;
	static int16_t x110 = -13;
	int64_t x111 = INT64_MAX;
	static int16_t x112 = INT16_MIN;
	volatile int64_t t24 = 78676573968LL;

	t24 = ((x109%(x110^x111))-x112);

	if (t24 != 36356LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MAX;
	volatile int32_t x114 = -53742243;
	volatile int64_t t25 = -95748884038LL;

	t25 = ((x113%(x114^x115))-x116);

	if (t25 != 32766LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 13U;
	int32_t x119 = 840;
	int64_t x120 = -1LL;

	t26 = ((x117%(x118^x119))-x120);

	if (t26 != 14LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MIN;
	uint16_t x122 = 28U;
	int16_t x123 = INT16_MIN;
	int32_t t27 = -1;

	t27 = ((x121%(x122^x123))-x124);

	if (t27 != -4) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x125 = 110897258809119861LLU;
	int32_t x126 = INT32_MAX;
	static uint64_t x127 = 34196744161815LLU;
	uint32_t x128 = UINT32_MAX;
	uint64_t t28 = 251615431756389482LLU;

	t28 = ((x125%(x126^x127))-x128);

	if (t28 != 25838948657254LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x129 = 5740;
	int32_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	static int32_t t29 = 939;

	t29 = ((x129%(x130^x131))-x132);

	if (t29 != -2147477907) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x138 = INT16_MAX;
	int16_t x140 = INT16_MIN;
	volatile uint32_t t30 = 7843413U;

	t30 = ((x137%(x138^x139))-x140);

	if (t30 != 410695U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x141 = 3U;
	int64_t x142 = 3826206637549081545LL;
	volatile int64_t x143 = INT64_MAX;
	volatile uint32_t x144 = 35206606U;
	volatile int64_t t31 = 1192938937267533LL;

	t31 = ((x141%(x142^x143))-x144);

	if (t31 != -35206603LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x145 = INT8_MIN;
	int64_t x146 = -36028343LL;
	int64_t x147 = -1LL;
	int8_t x148 = -2;
	static int64_t t32 = 3481160789054856081LL;

	t32 = ((x145%(x146^x147))-x148);

	if (t32 != -126LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x151 = UINT32_MAX;
	static volatile int64_t t33 = 1LL;

	t33 = ((x149%(x150^x151))-x152);

	if (t33 != -32769LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x154 = 31U;
	uint64_t x155 = UINT64_MAX;
	volatile int8_t x156 = -1;
	uint64_t t34 = 1717828376713924LLU;

	t34 = ((x153%(x154^x155))-x156);

	if (t34 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x157 = 242U;
	int32_t x158 = 302190;
	uint64_t x159 = UINT64_MAX;
	uint32_t x160 = 314902658U;
	uint64_t t35 = 452879578LLU;

	t35 = ((x157%(x158^x159))-x160);

	if (t35 != 18446744073394649200LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = INT32_MIN;
	uint16_t x162 = 127U;
	int8_t x164 = 1;
	int32_t t36 = -1;

	t36 = ((x161%(x162^x163))-x164);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x166 = 31;
	static volatile int64_t x168 = INT64_MAX;
	int64_t t37 = INT64_MIN;

	t37 = ((x165%(x166^x167))-x168);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 2U;
	int16_t x171 = INT16_MIN;
	volatile int16_t x172 = INT16_MIN;
	int32_t t38 = 49;

	t38 = ((x169%(x170^x171))-x172);

	if (t38 != 32770) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = INT8_MIN;
	int8_t x174 = 1;
	volatile uint64_t x175 = 16092LLU;
	int64_t x176 = INT64_MAX;
	static volatile uint64_t t39 = 378706LLU;

	t39 = ((x173%(x174^x175))-x176);

	if (t39 != 9223372036854791867LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x177 = 5062974519688836923LLU;
	uint64_t x178 = UINT64_MAX;
	uint64_t x179 = 16252492LLU;
	int32_t x180 = -1;
	static uint64_t t40 = 27LLU;

	t40 = ((x177%(x178^x179))-x180);

	if (t40 != 5062974519688836924LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x181 = INT8_MAX;
	uint64_t t41 = 1471375391LLU;

	t41 = ((x181%(x182^x183))-x184);

	if (t41 != 255LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x185 = INT16_MIN;
	volatile uint32_t x186 = UINT32_MAX;
	uint8_t x187 = UINT8_MAX;
	int64_t x188 = 1539349311111LL;
	volatile int64_t t42 = -65LL;

	t42 = ((x185%(x186^x187))-x188);

	if (t42 != -1535054376583LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = INT8_MAX;
	static uint8_t x190 = UINT8_MAX;
	int64_t x191 = INT64_MIN;
	int32_t x192 = -1007;
	static int64_t t43 = -60LL;

	t43 = ((x189%(x190^x191))-x192);

	if (t43 != 1134LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = 99U;
	int32_t x198 = INT32_MIN;
	volatile int8_t x199 = -1;
	int64_t x200 = 0LL;
	static int64_t t44 = 42LL;

	t44 = ((x197%(x198^x199))-x200);

	if (t44 != 99LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x202 = 1;

	t45 = ((x201%(x202^x203))-x204);

	if (t45 != 25763LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x207 = 1197U;

	t46 = ((x205%(x206^x207))-x208);

	if (t46 != 1039LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MAX;
	int16_t x210 = INT16_MIN;
	int16_t x211 = -2737;
	volatile uint32_t x212 = UINT32_MAX;
	uint32_t t47 = 685U;

	t47 = ((x209%(x210^x211))-x212);

	if (t47 != 26900U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x213 = 10077U;
	uint32_t x214 = UINT32_MAX;
	volatile int32_t x215 = INT32_MIN;
	volatile uint32_t t48 = 1714U;

	t48 = ((x213%(x214^x215))-x216);

	if (t48 != 9822U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x217 = INT32_MIN;
	int32_t x218 = INT32_MAX;
	int32_t x219 = 18482469;
	int64_t x220 = -4LL;
	int64_t t49 = 7742221LL;

	t49 = ((x217%(x218^x219))-x220);

	if (t49 != -18482466LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x221 = 1;
	int32_t x222 = 108052;
	uint64_t x223 = UINT64_MAX;
	uint8_t x224 = 38U;
	static volatile uint64_t t50 = 200LLU;

	t50 = ((x221%(x222^x223))-x224);

	if (t50 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = 7340407260625346016LLU;
	int16_t x226 = 3;
	static uint16_t x227 = 11U;
	static volatile int16_t x228 = 107;

	t51 = ((x225%(x226^x227))-x228);

	if (t51 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = -1LL;
	volatile uint16_t x230 = 1U;
	volatile int64_t x231 = -1LL;

	t52 = ((x229%(x230^x231))-x232);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = -1;
	volatile int16_t x234 = -1;
	uint32_t x236 = UINT32_MAX;
	uint32_t t53 = 17661967U;

	t53 = ((x233%(x234^x235))-x236);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x237 = -5;
	volatile int8_t x239 = INT8_MIN;

	t54 = ((x237%(x238^x239))-x240);

	if (t54 != -499) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x242 = INT16_MAX;
	static int8_t x243 = INT8_MAX;
	uint32_t t55 = 11362077U;

	t55 = ((x241%(x242^x243))-x244);

	if (t55 != 14658U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x245 = -1LL;
	static uint8_t x246 = UINT8_MAX;
	int32_t x247 = INT32_MIN;
	volatile int64_t t56 = -166420656LL;

	t56 = ((x245%(x246^x247))-x248);

	if (t56 != -13LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = INT32_MIN;
	uint32_t x250 = 225223U;
	uint64_t x251 = 1639314479915LLU;
	volatile int8_t x252 = -52;
	static volatile uint64_t t57 = 274437LLU;

	t57 = ((x249%(x250^x251))-x252);

	if (t57 != 1527793679800LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x257 = UINT32_MAX;
	uint32_t x258 = UINT32_MAX;
	uint8_t x259 = 1U;
	uint16_t x260 = 13330U;

	t58 = ((x257%(x258^x259))-x260);

	if (t58 != 4294953967U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x261 = 219582LLU;
	volatile int64_t x262 = -1LL;

	t59 = ((x261%(x262^x263))-x264);

	if (t59 != 219583LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x265 = UINT32_MAX;
	int32_t x266 = INT32_MIN;
	uint8_t x268 = 0U;
	static volatile uint32_t t60 = 55U;

	t60 = ((x265%(x266^x267))-x268);

	if (t60 != 28959U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x269 = -25;
	volatile int64_t x270 = -1LL;
	int32_t x271 = -515;
	uint8_t x272 = 20U;
	volatile int64_t t61 = -4LL;

	t61 = ((x269%(x270^x271))-x272);

	if (t61 != -45LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x274 = 75U;
	volatile int32_t x276 = INT32_MIN;
	int32_t t62 = -433372;

	t62 = ((x273%(x274^x275))-x276);

	if (t62 != 2147483626) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MIN;
	int64_t x280 = INT64_MIN;
	volatile int64_t t63 = -794869677365417909LL;

	t63 = ((x277%(x278^x279))-x280);

	if (t63 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = INT8_MIN;
	int16_t x282 = -1;
	volatile int32_t t64 = 642633;

	t64 = ((x281%(x282^x283))-x284);

	if (t64 != -37) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x290 = INT64_MAX;
	int64_t t65 = -20LL;

	t65 = ((x289%(x290^x291))-x292);

	if (t65 != 1975LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x294 = 7;
	int32_t x295 = -14885;
	volatile int64_t x296 = -539420LL;
	int64_t t66 = -90567079744214LL;

	t66 = ((x293%(x294^x295))-x296);

	if (t66 != 539292LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = -1;
	int64_t x298 = 122286942LL;
	uint16_t x299 = UINT16_MAX;

	t67 = ((x297%(x298^x299))-x300);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x301 = 577297U;
	static uint16_t x302 = 648U;
	static int64_t x303 = INT64_MIN;
	int8_t x304 = -1;
	volatile int64_t t68 = -88888LL;

	t68 = ((x301%(x302^x303))-x304);

	if (t68 != 577298LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x305 = -1LL;
	volatile int64_t x306 = INT64_MAX;
	static uint64_t x307 = 66773709LLU;
	int8_t x308 = 2;
	uint64_t t69 = 5036LLU;

	t69 = ((x305%(x306^x307))-x308);

	if (t69 != 133547417LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x309 = 0;
	uint32_t x310 = 1058002138U;
	int64_t x311 = -1LL;

	t70 = ((x309%(x310^x311))-x312);

	if (t70 != -333226999LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = INT8_MAX;
	uint64_t x314 = 120848688033957LLU;
	int8_t x315 = INT8_MAX;
	uint64_t t71 = 149890947949LLU;

	t71 = ((x313%(x314^x315))-x316);

	if (t71 != 128LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = INT64_MIN;
	static volatile int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;

	t72 = ((x317%(x318^x319))-x320);

	if (t72 != 2147483649LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = 60;
	static int16_t x322 = -1;
	int8_t x323 = INT8_MIN;
	int64_t x324 = -30889768LL;
	int64_t t73 = -18953491LL;

	t73 = ((x321%(x322^x323))-x324);

	if (t73 != 30889828LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x325 = 141;
	volatile int64_t x326 = INT64_MAX;
	volatile int32_t x328 = -7127364;
	int64_t t74 = -3928599LL;

	t74 = ((x325%(x326^x327))-x328);

	if (t74 != 7127505LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x329 = UINT64_MAX;
	uint16_t x331 = 68U;
	int16_t x332 = INT16_MIN;
	volatile uint64_t t75 = 58794LLU;

	t75 = ((x329%(x330^x331))-x332);

	if (t75 != 35447LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x333 = UINT8_MAX;
	uint16_t x334 = 7U;
	int8_t x335 = 23;
	int8_t x336 = -1;

	t76 = ((x333%(x334^x335))-x336);

	if (t76 != 16) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = -31;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = 8038729U;
	uint64_t t77 = 2121279018072LLU;

	t77 = ((x337%(x338^x339))-x340);

	if (t77 != 49236615978232836LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x341 = 1804439069502534LL;
	int32_t x343 = INT32_MAX;
	volatile int64_t t78 = 12763LL;

	t78 = ((x341%(x342^x343))-x344);

	if (t78 != -4150781817LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = INT64_MIN;
	int32_t x346 = -1;
	static int32_t x348 = -2387672;
	volatile int64_t t79 = -1937178557172LL;

	t79 = ((x345%(x346^x347))-x348);

	if (t79 != 2387672LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	uint64_t x351 = 193980LLU;
	uint8_t x352 = 0U;
	volatile uint64_t t80 = 77886966571331525LLU;

	t80 = ((x349%(x350^x351))-x352);

	if (t80 != 2147256900LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x353 = 1U;
	int32_t x354 = -1;
	volatile uint8_t x355 = 9U;
	int16_t x356 = -1;
	volatile int32_t t81 = 10247;

	t81 = ((x353%(x354^x355))-x356);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x357 = 11;
	int64_t x358 = INT64_MAX;
	int8_t x359 = 0;
	int16_t x360 = -2;

	t82 = ((x357%(x358^x359))-x360);

	if (t82 != 13LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x361 = 7U;
	static uint8_t x363 = 89U;
	int32_t x364 = -1;
	volatile int32_t t83 = -7901386;

	t83 = ((x361%(x362^x363))-x364);

	if (t83 != 8) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x365 = UINT16_MAX;
	uint8_t x366 = 11U;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = INT8_MIN;

	t84 = ((x365%(x366^x367))-x368);

	if (t84 != 65663LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x369 = INT64_MIN;
	int16_t x370 = -541;
	int32_t x371 = -15408965;
	static uint32_t x372 = 1665U;
	int64_t t85 = -333914LL;

	t85 = ((x369%(x370^x371))-x372);

	if (t85 != -10628721LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x374 = INT8_MAX;
	int32_t x375 = -20392999;
	static int64_t x376 = INT64_MIN;
	int64_t t86 = 46LL;

	t86 = ((x373%(x374^x375))-x376);

	if (t86 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = -18;
	uint8_t x383 = UINT8_MAX;
	uint8_t x384 = 6U;

	t87 = ((x381%(x382^x383))-x384);

	if (t87 != -24LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x389 = 33898U;
	static volatile int32_t x390 = INT32_MAX;
	static volatile int16_t x391 = INT16_MAX;
	int32_t x392 = -1;
	volatile uint32_t t88 = 1U;

	t88 = ((x389%(x390^x391))-x392);

	if (t88 != 33899U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x394 = INT8_MIN;
	volatile uint8_t x395 = UINT8_MAX;
	int64_t x396 = -64129228342474613LL;

	t89 = ((x393%(x394^x395))-x396);

	if (t89 != 64129228342474702LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x397 = 3798U;
	volatile int16_t x399 = -101;
	int64_t x400 = 919084537LL;
	int64_t t90 = -11487LL;

	t90 = ((x397%(x398^x399))-x400);

	if (t90 != -919084519LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x401 = 288113247U;
	volatile int16_t x402 = -55;
	static int16_t x403 = INT16_MAX;
	volatile uint32_t t91 = 7575U;

	t91 = ((x401%(x402^x403))-x404);

	if (t91 != 2435596896U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x406 = INT32_MIN;
	static uint8_t x407 = UINT8_MAX;
	uint16_t x408 = 6U;
	int32_t t92 = 81093705;

	t92 = ((x405%(x406^x407))-x408);

	if (t92 != 15056) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x413 = 10LL;
	volatile int32_t x414 = INT32_MIN;
	int64_t t93 = 320223074LL;

	t93 = ((x413%(x414^x415))-x416);

	if (t93 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x417 = UINT8_MAX;
	int64_t x418 = 131169598819LL;
	int64_t x419 = INT64_MIN;
	int32_t x420 = -645;
	volatile int64_t t94 = 10929165011781LL;

	t94 = ((x417%(x418^x419))-x420);

	if (t94 != 900LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x422 = INT32_MAX;
	uint32_t x423 = 10908U;
	int8_t x424 = INT8_MIN;
	uint32_t t95 = 60U;

	t95 = ((x421%(x422^x423))-x424);

	if (t95 != 65663U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x425 = INT8_MIN;
	volatile int16_t x426 = INT16_MIN;
	int32_t x428 = -549095;
	volatile int32_t t96 = 184360301;

	t96 = ((x425%(x426^x427))-x428);

	if (t96 != 548967) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x429 = 35U;
	int8_t x430 = 1;
	int8_t x431 = INT8_MIN;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t97 = 160938587848LLU;

	t97 = ((x429%(x430^x431))-x432);

	if (t97 != 36LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x437 = 2U;
	uint16_t x438 = UINT16_MAX;
	static uint32_t x439 = UINT32_MAX;
	uint8_t x440 = 2U;
	volatile uint32_t t98 = 1780U;

	t98 = ((x437%(x438^x439))-x440);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x441 = INT64_MAX;
	uint16_t x442 = 81U;
	int8_t x443 = -1;
	uint64_t x444 = 1023102095682737LLU;
	uint64_t t99 = 9011318LLU;

	t99 = ((x441%(x442^x443))-x444);

	if (t99 != 18445720971613868886LLU) { NG(); } else { ; }
	
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

