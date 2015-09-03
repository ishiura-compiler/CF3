#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x11 = 13861U;
int16_t x16 = -1;
uint32_t x25 = 2611U;
uint8_t x27 = 3U;
volatile uint32_t t6 = 605U;
int8_t x37 = 0;
uint64_t x40 = UINT64_MAX;
static uint8_t x45 = UINT8_MAX;
int64_t x46 = INT64_MIN;
volatile int64_t t12 = 1711LL;
int32_t t13 = 3568884;
int16_t x61 = -1;
int8_t x66 = INT8_MIN;
static int64_t x69 = -1171892259556826LL;
volatile int64_t t19 = -4563LL;
volatile int32_t t20 = 4436;
int8_t x89 = INT8_MAX;
volatile int64_t t22 = -2594316LL;
volatile int8_t x97 = INT8_MIN;
uint64_t x102 = 12LLU;
volatile uint64_t t25 = 770LLU;
int32_t x111 = -18753;
int8_t x119 = -1;
volatile int32_t t29 = 0;
int8_t x128 = INT8_MAX;
int64_t t33 = -26694LL;
static volatile int16_t x149 = INT16_MIN;
int64_t x151 = 3278960113839594602LL;
volatile int32_t t36 = 778;
int16_t x166 = INT16_MIN;
uint16_t x168 = 1998U;
int32_t t38 = -498;
int16_t x169 = INT16_MIN;
volatile int32_t x170 = -1;
int64_t x171 = INT64_MIN;
int32_t x179 = INT32_MAX;
static int64_t x180 = INT64_MAX;
volatile uint32_t t43 = 6988U;
uint64_t x196 = 64555677LLU;
uint64_t t45 = 210742881886822LLU;
uint16_t x201 = UINT16_MAX;
uint8_t x204 = 109U;
int16_t x205 = INT16_MIN;
int32_t t47 = 14;
static volatile uint32_t t49 = 227705U;
volatile uint32_t t50 = 7U;
static int8_t x230 = 53;
static int64_t x232 = INT64_MAX;
static volatile uint32_t t56 = 441565480U;
int32_t x253 = -11770087;
volatile int16_t x268 = INT16_MIN;
int16_t x270 = INT16_MIN;
int32_t x271 = INT32_MIN;
int64_t x273 = -31LL;
int16_t x281 = INT16_MIN;
int8_t x284 = 0;
int64_t x285 = -1888748191LL;
int64_t x287 = -2416660818494151LL;
int32_t x290 = -1;
uint32_t x292 = UINT32_MAX;
static uint8_t x295 = 82U;
int16_t x304 = INT16_MIN;
volatile uint64_t x306 = 36313475442006LLU;
static volatile uint32_t x308 = 13U;
static int32_t x312 = 17205;
uint8_t x318 = UINT8_MAX;
int16_t x322 = INT16_MIN;
uint8_t x323 = 7U;
int32_t t76 = -427119909;
int8_t x336 = INT8_MIN;
static int64_t x341 = 20445LL;
static uint32_t x343 = 2U;
uint16_t x349 = 57U;
int32_t x350 = -26776749;
uint64_t t81 = 14188871881387629LLU;
int64_t x358 = INT64_MIN;
int32_t x363 = 80861;
static int32_t t83 = -752854;
static int8_t x367 = INT8_MIN;
int32_t x375 = INT32_MIN;
uint32_t x399 = 1515628665U;
volatile uint64_t t94 = 1157963763LLU;
volatile uint8_t x413 = 0U;
static uint16_t x414 = 2U;
volatile int64_t x417 = -1381730901152LL;
volatile int64_t t97 = 13080396438402951LL;
static int32_t x421 = -1;
volatile uint8_t x428 = 34U;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MAX;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 703;

	t0 = (x1/(x2^(x3==x4)));

	if (t0 != -65535) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = UINT16_MAX;
	int16_t x6 = -1;
	static volatile int8_t x7 = -1;
	volatile int8_t x8 = 18;
	static int32_t t1 = 99696;

	t1 = (x5/(x6^(x7==x8)));

	if (t1 != -65535) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint16_t x10 = 4U;
	int16_t x12 = 115;
	volatile int32_t t2 = -178748504;

	t2 = (x9/(x10^(x11==x12)));

	if (t2 != 16383) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = -179;
	uint32_t x15 = 43091U;
	volatile int32_t t3 = 0;

	t3 = (x13/(x14^(x15==x16)));

	if (t3 != 11997115) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1507;
	uint64_t x18 = UINT64_MAX;
	volatile int32_t x19 = -1;
	volatile uint32_t x20 = 371234869U;
	volatile uint64_t t4 = 4646319219LLU;

	t4 = (x17/(x18^(x19==x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -14;
	volatile int64_t x22 = 1LL;
	int64_t x23 = INT64_MIN;
	static volatile int16_t x24 = INT16_MAX;
	int64_t t5 = 291LL;

	t5 = (x21/(x22^(x23==x24)));

	if (t5 != -14LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = 1;
	static int32_t x28 = INT32_MAX;

	t6 = (x25/(x26^(x27==x28)));

	if (t6 != 2611U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	static volatile int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MAX;
	uint64_t x32 = UINT64_MAX;
	static volatile int32_t t7 = 10515485;

	t7 = (x29/(x30^(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 336;
	int16_t x34 = INT16_MIN;
	int32_t x35 = 777047218;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 5136;

	t8 = (x33/(x34^(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MAX;
	uint32_t x39 = UINT32_MAX;
	volatile int64_t t9 = -526456854046LL;

	t9 = (x37/(x38^(x39==x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 222882U;
	static int16_t x42 = INT16_MIN;
	static uint8_t x43 = 8U;
	static uint8_t x44 = 7U;
	volatile uint32_t t10 = 1540U;

	t10 = (x41/(x42^(x43==x44)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = 490600;
	uint16_t x48 = 11344U;
	int64_t t11 = -430LL;

	t11 = (x45/(x46^(x47==x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	int64_t x50 = INT64_MAX;
	static uint64_t x51 = 239LLU;
	int16_t x52 = INT16_MAX;

	t12 = (x49/(x50^(x51==x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	static int16_t x54 = -684;
	volatile int8_t x55 = 4;
	int16_t x56 = 0;

	t13 = (x53/(x54^(x55==x56)));

	if (t13 != 3139595) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	volatile int16_t x58 = -1;
	uint64_t x59 = 362108LLU;
	int32_t x60 = 849;
	volatile int64_t t14 = 18LL;

	t14 = (x57/(x58^(x59==x60)));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = UINT16_MAX;
	static uint32_t x63 = UINT32_MAX;
	uint64_t x64 = 4935978453120LLU;
	int32_t t15 = 1266082;

	t15 = (x61/(x62^(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	uint16_t x67 = UINT16_MAX;
	uint64_t x68 = 26LLU;
	int32_t t16 = 42180;

	t16 = (x65/(x66^(x67==x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MIN;
	int32_t x71 = -1;
	static int8_t x72 = INT8_MAX;
	int64_t t17 = 2614411919851190LL;

	t17 = (x69/(x70^(x71==x72)));

	if (t17 != 9155408277787LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int8_t x74 = -1;
	uint64_t x75 = 7721391102207779LLU;
	uint8_t x76 = 2U;
	volatile int32_t t18 = 853;

	t18 = (x73/(x74^(x75==x76)));

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 10;
	int64_t x78 = -1LL;
	int32_t x79 = INT32_MAX;
	uint8_t x80 = 38U;

	t19 = (x77/(x78^(x79==x80)));

	if (t19 != -10LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 32342U;
	uint8_t x82 = 14U;
	int64_t x83 = 16988LL;
	uint8_t x84 = 5U;

	t20 = (x81/(x82^(x83==x84)));

	if (t20 != 2310) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MIN;
	int32_t x87 = INT32_MAX;
	static int8_t x88 = -1;
	volatile int32_t t21 = -80428;

	t21 = (x85/(x86^(x87==x88)));

	if (t21 != 256) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x90 = INT64_MIN;
	volatile int8_t x91 = INT8_MAX;
	uint16_t x92 = 0U;

	t22 = (x89/(x90^(x91==x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1296;
	int32_t x94 = INT32_MAX;
	static volatile int16_t x95 = -52;
	int8_t x96 = -1;
	volatile int32_t t23 = 1080;

	t23 = (x93/(x94^(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x98 = 15U;
	volatile int32_t x99 = -1227;
	int16_t x100 = -71;
	volatile int32_t t24 = 223;

	t24 = (x97/(x98^(x99==x100)));

	if (t24 != -8) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	int64_t x104 = 345601018LL;

	t25 = (x101/(x102^(x103==x104)));

	if (t25 != 1537228672630172330LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	volatile int8_t x106 = -30;
	uint64_t x107 = 102264928230010904LLU;
	static int64_t x108 = -8713571210LL;
	static volatile int32_t t26 = -10743;

	t26 = (x105/(x106^(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 5U;
	uint64_t x110 = 63774745LLU;
	static int32_t x112 = -117809360;
	volatile uint64_t t27 = 84519401329016760LLU;

	t27 = (x109/(x110^(x111==x112)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	static int32_t x114 = -1;
	int64_t x115 = INT64_MAX;
	int32_t x116 = -147;
	volatile int32_t t28 = -223081934;

	t28 = (x113/(x114^(x115==x116)));

	if (t28 != -65535) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 14U;
	int32_t x118 = -9;
	uint32_t x120 = UINT32_MAX;

	t29 = (x117/(x118^(x119==x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -55;
	uint64_t x126 = 8265581LLU;
	static int16_t x127 = -362;
	uint64_t t30 = 412598832LLU;

	t30 = (x125/(x126^(x127==x128)));

	if (t30 != 2231754074360LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -1LL;
	int32_t x130 = INT32_MIN;
	int8_t x131 = -7;
	static int8_t x132 = -1;
	int64_t t31 = -3957211856261387LL;

	t31 = (x129/(x130^(x131==x132)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = -1;
	volatile uint32_t x134 = 141289643U;
	int8_t x135 = INT8_MAX;
	uint64_t x136 = 750211873LLU;
	volatile uint32_t t32 = 488601U;

	t32 = (x133/(x134^(x135==x136)));

	if (t32 != 30U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MAX;
	static int16_t x138 = INT16_MIN;
	uint64_t x139 = UINT64_MAX;
	int32_t x140 = INT32_MIN;

	t33 = (x137/(x138^(x139==x140)));

	if (t33 != -281474976710655LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x145 = INT16_MAX;
	int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MAX;
	int64_t x148 = 26988855761417519LL;
	int32_t t34 = 3;

	t34 = (x145/(x146^(x147==x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x150 = INT32_MAX;
	int8_t x152 = -1;
	int32_t t35 = 0;

	t35 = (x149/(x150^(x151==x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	volatile uint8_t x154 = 22U;
	volatile int16_t x155 = INT16_MIN;
	uint64_t x156 = UINT64_MAX;

	t36 = (x153/(x154^(x155==x156)));

	if (t36 != 1489) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MAX;
	uint64_t x158 = 29LLU;
	uint32_t x159 = 894590595U;
	volatile int64_t x160 = 146706006LL;
	uint64_t t37 = 4123175179433812LLU;

	t37 = (x157/(x158^(x159==x160)));

	if (t37 != 74051160LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x165 = 0U;
	int16_t x167 = INT16_MIN;

	t38 = (x165/(x166^(x167==x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x172 = INT64_MIN;
	int32_t t39 = -21687367;

	t39 = (x169/(x170^(x171==x172)));

	if (t39 != 16384) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = 2156094LL;
	uint64_t x174 = 165536185089826LLU;
	int32_t x175 = 1595775;
	int64_t x176 = INT64_MIN;
	volatile uint64_t t40 = 9LLU;

	t40 = (x173/(x174^(x175==x176)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x177 = INT8_MIN;
	static int8_t x178 = INT8_MAX;
	volatile int32_t t41 = -54561;

	t41 = (x177/(x178^(x179==x180)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x181 = 1725625066129455336LLU;
	volatile uint8_t x182 = 85U;
	int64_t x183 = INT64_MAX;
	static int8_t x184 = INT8_MIN;
	volatile uint64_t t42 = 7LLU;

	t42 = (x181/(x182^(x183==x184)));

	if (t42 != 20301471366228886LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x186 = 291502156U;
	volatile int64_t x187 = -1LL;
	int8_t x188 = -3;

	t43 = (x185/(x186^(x187==x188)));

	if (t43 != 14U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -1;
	int32_t x190 = 347;
	uint32_t x191 = 12531166U;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t44 = 56020;

	t44 = (x189/(x190^(x191==x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = 106169;
	static uint64_t x194 = 14004050477754LLU;
	static uint64_t x195 = 7624018LLU;

	t45 = (x193/(x194^(x195==x196)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x202 = -1;
	uint64_t x203 = 17932128365691925LLU;
	volatile int32_t t46 = 4;

	t46 = (x201/(x202^(x203==x204)));

	if (t46 != -65535) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x206 = INT32_MAX;
	int32_t x207 = -4353;
	volatile uint32_t x208 = 196783U;

	t47 = (x205/(x206^(x207==x208)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x209 = 500;
	uint8_t x210 = 43U;
	volatile int32_t x211 = INT32_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t48 = 206530610;

	t48 = (x209/(x210^(x211==x212)));

	if (t48 != 11) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x213 = 19887U;
	static uint32_t x214 = 6806605U;
	static int16_t x215 = 290;
	volatile int64_t x216 = INT64_MAX;

	t49 = (x213/(x214^(x215==x216)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x217 = UINT32_MAX;
	volatile int16_t x218 = INT16_MIN;
	int8_t x219 = -1;
	static int8_t x220 = INT8_MIN;

	t50 = (x217/(x218^(x219==x220)));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = 55068616581LLU;
	volatile uint8_t x226 = 4U;
	int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MIN;
	uint64_t t51 = 47LLU;

	t51 = (x225/(x226^(x227==x228)));

	if (t51 != 13767154145LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x229 = INT16_MIN;
	int16_t x231 = INT16_MIN;
	static volatile int32_t t52 = 1787380;

	t52 = (x229/(x230^(x231==x232)));

	if (t52 != -618) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MAX;
	int8_t x235 = 2;
	static uint8_t x236 = 7U;
	volatile int32_t t53 = 23272288;

	t53 = (x233/(x234^(x235==x236)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x237 = -1;
	int64_t x238 = -1LL;
	volatile uint32_t x239 = UINT32_MAX;
	uint8_t x240 = 13U;
	int64_t t54 = 31679535356423LL;

	t54 = (x237/(x238^(x239==x240)));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x241 = UINT16_MAX;
	volatile int8_t x242 = 6;
	static uint64_t x243 = 1759LLU;
	int32_t x244 = INT32_MIN;
	volatile int32_t t55 = -10774;

	t55 = (x241/(x242^(x243==x244)));

	if (t55 != 10922) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MIN;
	uint32_t x246 = UINT32_MAX;
	volatile int8_t x247 = 1;
	static volatile uint16_t x248 = 10U;

	t56 = (x245/(x246^(x247==x248)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = 11373914U;
	int64_t x250 = -3LL;
	int32_t x251 = -581897712;
	static volatile uint32_t x252 = 8U;
	volatile int64_t t57 = 1847157705441012993LL;

	t57 = (x249/(x250^(x251==x252)));

	if (t57 != -3791304LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x254 = -39;
	int8_t x255 = 6;
	int8_t x256 = INT8_MIN;
	int32_t t58 = 823952490;

	t58 = (x253/(x254^(x255==x256)));

	if (t58 != 301797) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x257 = -25;
	int64_t x258 = INT64_MIN;
	int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MAX;
	volatile int64_t t59 = -19LL;

	t59 = (x257/(x258^(x259==x260)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = -124511079344LL;
	volatile int64_t x262 = 278229015224129016LL;
	int64_t x263 = 0LL;
	static int8_t x264 = INT8_MIN;
	static volatile int64_t t60 = 444LL;

	t60 = (x261/(x262^(x263==x264)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = 42LL;
	int32_t x267 = 31501;
	volatile int64_t t61 = 289113866672450538LL;

	t61 = (x265/(x266^(x267==x268)));

	if (t61 != 102261126LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x269 = 140U;
	int32_t x272 = INT32_MIN;
	int32_t t62 = 22490;

	t62 = (x269/(x270^(x271==x272)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x274 = -1;
	static uint32_t x275 = 84U;
	int16_t x276 = INT16_MAX;
	volatile int64_t t63 = 2080160LL;

	t63 = (x273/(x274^(x275==x276)));

	if (t63 != 31LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = -1LL;
	int16_t x278 = 14636;
	int8_t x279 = -1;
	int64_t x280 = INT64_MIN;
	volatile int64_t t64 = -1452675LL;

	t64 = (x277/(x278^(x279==x280)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MAX;
	volatile uint32_t t65 = 666255232U;

	t65 = (x281/(x282^(x283==x284)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x286 = INT32_MIN;
	volatile int8_t x288 = 30;
	int64_t t66 = -1784188LL;

	t66 = (x285/(x286^(x287==x288)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x289 = 0;
	static int64_t x291 = -873964460868405971LL;
	volatile int32_t t67 = 248246;

	t67 = (x289/(x290^(x291==x292)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = INT32_MIN;
	volatile uint16_t x294 = 58U;
	volatile int16_t x296 = INT16_MAX;
	static int32_t t68 = 251275679;

	t68 = (x293/(x294^(x295==x296)));

	if (t68 != -37025580) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x297 = UINT64_MAX;
	static int64_t x298 = -8032888494LL;
	volatile int64_t x299 = 77769LL;
	int32_t x300 = INT32_MIN;
	uint64_t t69 = 220LLU;

	t69 = (x297/(x298^(x299==x300)));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x301 = 45U;
	static int64_t x302 = INT64_MAX;
	static int32_t x303 = -1627;
	int64_t t70 = 1LL;

	t70 = (x301/(x302^(x303==x304)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x305 = 117U;
	static volatile int16_t x307 = INT16_MAX;
	static volatile uint64_t t71 = 6234440922542662022LLU;

	t71 = (x305/(x306^(x307==x308)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x309 = 174851287719LLU;
	int8_t x310 = INT8_MAX;
	volatile int8_t x311 = INT8_MIN;
	uint64_t t72 = 178LLU;

	t72 = (x309/(x310^(x311==x312)));

	if (t72 != 1376781793LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 3006U;
	uint32_t x314 = 1U;
	int32_t x315 = -1650;
	int32_t x316 = INT32_MIN;
	static uint32_t t73 = 680U;

	t73 = (x313/(x314^(x315==x316)));

	if (t73 != 3006U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = INT8_MIN;
	uint64_t x319 = UINT64_MAX;
	int16_t x320 = 11620;
	int32_t t74 = -547115;

	t74 = (x317/(x318^(x319==x320)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = INT64_MIN;
	int32_t x324 = INT32_MIN;
	static volatile int64_t t75 = 146473LL;

	t75 = (x321/(x322^(x323==x324)));

	if (t75 != 281474976710656LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x330 = 15U;
	static int32_t x331 = -1;
	static volatile int32_t x332 = INT32_MAX;

	t76 = (x329/(x330^(x331==x332)));

	if (t76 != -8) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x333 = -1;
	int16_t x334 = INT16_MIN;
	uint16_t x335 = 5452U;
	volatile int32_t t77 = -2;

	t77 = (x333/(x334^(x335==x336)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x342 = INT16_MIN;
	int64_t x344 = INT64_MIN;
	int64_t t78 = -69257371456LL;

	t78 = (x341/(x342^(x343==x344)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = 1875918123LL;
	static uint64_t x346 = 568LLU;
	uint64_t x347 = 4023819686LLU;
	int16_t x348 = INT16_MIN;
	static volatile uint64_t t79 = 3LLU;

	t79 = (x345/(x346^(x347==x348)));

	if (t79 != 3302672LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x351 = UINT32_MAX;
	int64_t x352 = INT64_MIN;
	static int32_t t80 = 105996544;

	t80 = (x349/(x350^(x351==x352)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x353 = 1122U;
	uint64_t x354 = 1841078792643687667LLU;
	volatile uint32_t x355 = UINT32_MAX;
	int64_t x356 = INT64_MIN;

	t81 = (x353/(x354^(x355==x356)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x357 = 0U;
	uint8_t x359 = 12U;
	int16_t x360 = -1;
	volatile int64_t t82 = 79927962840239638LL;

	t82 = (x357/(x358^(x359==x360)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = INT32_MAX;
	uint8_t x362 = UINT8_MAX;
	uint32_t x364 = 146318799U;

	t83 = (x361/(x362^(x363==x364)));

	if (t83 != 8421504) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = -1;
	uint32_t x366 = 0U;
	volatile int8_t x368 = INT8_MIN;
	uint32_t t84 = UINT32_MAX;

	t84 = (x365/(x366^(x367==x368)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = INT8_MAX;
	volatile int64_t x370 = -1LL;
	volatile int8_t x371 = -2;
	int8_t x372 = INT8_MIN;
	int64_t t85 = 2LL;

	t85 = (x369/(x370^(x371==x372)));

	if (t85 != -127LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = -1;
	static uint16_t x374 = 566U;
	volatile int32_t x376 = INT32_MIN;
	volatile int32_t t86 = -10197;

	t86 = (x373/(x374^(x375==x376)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x377 = -123;
	int32_t x378 = 211436229;
	static int16_t x379 = -1;
	int32_t x380 = -1;
	int32_t t87 = 46;

	t87 = (x377/(x378^(x379==x380)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int32_t x382 = -746020330;
	int16_t x383 = -13854;
	volatile int64_t x384 = 8705546580712836LL;
	int32_t t88 = -27118;

	t88 = (x381/(x382^(x383==x384)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x385 = UINT64_MAX;
	uint64_t x386 = 134928754443023977LLU;
	static uint8_t x387 = UINT8_MAX;
	uint32_t x388 = UINT32_MAX;
	static uint64_t t89 = 34909182638489LLU;

	t89 = (x385/(x386^(x387==x388)));

	if (t89 != 136LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MIN;
	static uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MAX;
	int64_t t90 = 3029911897153LL;

	t90 = (x389/(x390^(x391==x392)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x394 = INT16_MAX;
	volatile uint32_t x395 = 10536174U;
	int16_t x396 = -1;
	int32_t t91 = -45913871;

	t91 = (x393/(x394^(x395==x396)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = 4088388832796107737LL;
	uint16_t x398 = 24U;
	static volatile int16_t x400 = INT16_MIN;
	static volatile int64_t t92 = -19134LL;

	t92 = (x397/(x398^(x399==x400)));

	if (t92 != 170349534699837822LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x401 = UINT32_MAX;
	uint16_t x402 = UINT16_MAX;
	uint64_t x403 = 7612552930952222LLU;
	static int16_t x404 = INT16_MIN;
	static uint32_t t93 = 21330U;

	t93 = (x401/(x402^(x403==x404)));

	if (t93 != 65537U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x405 = -314;
	volatile uint64_t x406 = UINT64_MAX;
	int64_t x407 = INT64_MIN;
	int8_t x408 = INT8_MAX;

	t94 = (x405/(x406^(x407==x408)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x409 = -33933090LL;
	int32_t x410 = INT32_MIN;
	int64_t x411 = INT64_MAX;
	int16_t x412 = -882;
	int64_t t95 = -3LL;

	t95 = (x409/(x410^(x411==x412)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x415 = 417981830865191LL;
	int32_t x416 = -1;
	int32_t t96 = -171787695;

	t96 = (x413/(x414^(x415==x416)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x418 = UINT8_MAX;
	static int16_t x419 = INT16_MAX;
	volatile int64_t x420 = INT64_MIN;

	t97 = (x417/(x418^(x419==x420)));

	if (t97 != -5418552553LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x422 = 6519113LLU;
	int64_t x423 = -248326515897LL;
	int32_t x424 = -1;
	uint64_t t98 = 4LLU;

	t98 = (x421/(x422^(x423==x424)));

	if (t98 != 2829640178611LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x425 = INT8_MIN;
	int16_t x426 = INT16_MAX;
	uint16_t x427 = 3550U;
	volatile int32_t t99 = -68052;

	t99 = (x425/(x426^(x427==x428)));

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

