#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = -1;
volatile int64_t t1 = INT64_MAX;
int16_t x24 = 10295;
volatile uint64_t t5 = 10179282LLU;
static int8_t x39 = INT8_MAX;
static uint64_t t9 = UINT64_MAX;
volatile uint32_t x54 = 8995241U;
int64_t t14 = INT64_MAX;
uint32_t x65 = 3717144U;
volatile int64_t x67 = INT64_MIN;
static int64_t x74 = INT64_MIN;
static volatile int8_t x79 = INT8_MIN;
volatile int64_t x80 = -3835543577LL;
int32_t t20 = 339;
int64_t x85 = -365632784LL;
int64_t t21 = -68271517LL;
uint8_t x102 = 3U;
uint16_t x106 = UINT16_MAX;
volatile int8_t x111 = -1;
static int16_t x116 = -9212;
static int32_t x117 = -2157156;
int16_t x126 = -4322;
int16_t x131 = INT16_MIN;
uint16_t x134 = 12658U;
int64_t x143 = 377LL;
uint8_t x148 = UINT8_MAX;
volatile int32_t t36 = -414;
int8_t x149 = INT8_MAX;
int32_t x151 = -25;
volatile int32_t t39 = -77935004;
int16_t x162 = -5;
uint32_t x164 = UINT32_MAX;
uint16_t x165 = 2U;
uint16_t x176 = 18U;
static uint16_t x184 = UINT16_MAX;
int64_t x194 = INT64_MAX;
volatile uint8_t x200 = 29U;
volatile uint64_t x204 = 60329LLU;
int16_t x207 = INT16_MIN;
static int8_t x215 = -1;
volatile int8_t x219 = -1;
uint8_t x222 = 1U;
static uint16_t x225 = UINT16_MAX;
static volatile uint64_t t56 = 126800403629LLU;
int64_t t57 = -8360857479LL;
static int16_t x237 = 0;
int64_t t59 = -277LL;
uint16_t x242 = 5U;
uint64_t x246 = UINT64_MAX;
uint64_t t61 = 436LLU;
volatile int8_t x252 = INT8_MIN;
volatile uint8_t x256 = 19U;
volatile int8_t x259 = -3;
uint64_t x263 = 34332850008LLU;
volatile int16_t x267 = INT16_MAX;
volatile int8_t x269 = -1;
volatile int64_t t68 = INT64_MIN;
int16_t x284 = INT16_MAX;
int8_t x289 = INT8_MIN;
int64_t x293 = -9385LL;
volatile int64_t x297 = INT64_MIN;
volatile int64_t t74 = INT64_MIN;
static volatile int64_t x303 = INT64_MIN;
volatile uint64_t t75 = UINT64_MAX;
uint16_t x319 = UINT16_MAX;
int32_t x325 = INT32_MAX;
static uint16_t x327 = UINT16_MAX;
int64_t x328 = 3476027245LL;
int32_t x333 = 570790;
uint64_t x336 = 5788241LLU;
static int32_t t83 = 3;
volatile int32_t x348 = INT32_MIN;
int64_t x349 = 374288619LL;
uint16_t x350 = UINT16_MAX;
uint16_t x353 = UINT16_MAX;
int64_t x355 = INT64_MIN;
static int64_t x356 = INT64_MIN;
static uint32_t x357 = 464927796U;
volatile uint64_t x362 = 73388LLU;
uint64_t t91 = 52947181686576792LLU;
int32_t x370 = -1;
int32_t t92 = 206750768;
uint64_t x374 = 138613026644LLU;
uint64_t t93 = 2868348391288524LLU;
uint64_t x379 = UINT64_MAX;
static volatile uint64_t t94 = UINT64_MAX;
int32_t x381 = INT32_MIN;
int64_t x388 = 1538598100119LL;
uint32_t x390 = 862U;
int64_t x392 = INT64_MIN;
uint64_t x394 = 416LLU;
uint8_t x397 = UINT8_MAX;


void f0(void) {
	volatile uint32_t x1 = 1260826U;
	volatile int8_t x3 = -1;
	static int32_t x4 = INT32_MAX;
	volatile uint32_t t0 = 320034U;

	t0 = (x1|(x2&(x3<x4)));

	if (t0 != 1260827U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static volatile int64_t x6 = 1000138762210LL;
	uint64_t x7 = 1466776LLU;
	uint8_t x8 = 11U;

	t1 = (x5|(x6&(x7<x8)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	volatile int32_t x10 = INT32_MIN;
	static uint64_t x11 = 8330156016057LLU;
	int8_t x12 = 0;
	int32_t t2 = 240959;

	t2 = (x9|(x10&(x11<x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	uint64_t x14 = 486422LLU;
	int16_t x15 = INT16_MIN;
	uint16_t x16 = 0U;
	static volatile uint64_t t3 = 55LLU;

	t3 = (x13|(x14&(x15<x16)));

	if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = 1;
	uint64_t x19 = 126410LLU;
	volatile int64_t x20 = 585LL;
	static volatile int32_t t4 = -7200662;

	t4 = (x17|(x18&(x19<x20)));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 11046874984LLU;
	uint16_t x22 = 9310U;
	volatile uint32_t x23 = 2020103U;

	t5 = (x21|(x22&(x23<x24)));

	if (t5 != 11046874984LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MIN;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -5;

	t6 = (x25|(x26&(x27<x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	static volatile uint64_t x30 = 543351508415039LLU;
	int32_t x31 = -40032;
	uint64_t x32 = 292496166LLU;
	uint64_t t7 = 16689539LLU;

	t7 = (x29|(x30&(x31<x32)));

	if (t7 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static uint8_t x34 = 1U;
	volatile int64_t x35 = -1LL;
	uint16_t x36 = 77U;
	volatile int32_t t8 = 1;

	t8 = (x33|(x34&(x35<x36)));

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = UINT64_MAX;
	uint8_t x38 = 1U;
	int32_t x40 = -88;

	t9 = (x37|(x38&(x39<x40)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = INT32_MIN;
	int32_t x43 = -1;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -6466250;

	t10 = (x41|(x42&(x43<x44)));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -14910;
	uint8_t x46 = 20U;
	static int64_t x47 = -14949283044725327LL;
	static uint8_t x48 = 1U;
	volatile int32_t t11 = 15100;

	t11 = (x45|(x46&(x47<x48)));

	if (t11 != -14910) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	uint32_t x50 = 24U;
	uint32_t x51 = 32133712U;
	int8_t x52 = -1;
	uint32_t t12 = UINT32_MAX;

	t12 = (x49|(x50&(x51<x52)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int64_t x55 = INT64_MIN;
	int8_t x56 = -1;
	static uint32_t t13 = 31U;

	t13 = (x53|(x54&(x55<x56)));

	if (t13 != 65535U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int64_t x58 = INT64_MAX;
	uint8_t x59 = 3U;
	int8_t x60 = 7;

	t14 = (x57|(x58&(x59<x60)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	int32_t x62 = -53311;
	volatile int64_t x63 = INT64_MAX;
	int64_t x64 = -13937423972LL;
	volatile int32_t t15 = 1069797245;

	t15 = (x61|(x62&(x63<x64)));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -6852;
	int8_t x68 = -1;
	static volatile uint32_t t16 = 86277611U;

	t16 = (x65|(x66&(x67<x68)));

	if (t16 != 3717144U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	static int64_t x70 = INT64_MIN;
	int32_t x71 = -2638;
	volatile uint16_t x72 = UINT16_MAX;
	int64_t t17 = 200452295127LL;

	t17 = (x69|(x70&(x71<x72)));

	if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MIN;
	int16_t x75 = INT16_MIN;
	int32_t x76 = 221;
	static volatile int64_t t18 = INT64_MIN;

	t18 = (x73|(x74&(x75<x76)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = -1;
	int16_t x78 = -1;
	volatile int32_t t19 = -447527262;

	t19 = (x77|(x78&(x79<x80)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	volatile int32_t x82 = INT32_MIN;
	int32_t x83 = 377;
	int8_t x84 = -3;

	t20 = (x81|(x82&(x83<x84)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MIN;
	static int32_t x87 = -1;
	uint64_t x88 = 8796872605829806824LLU;

	t21 = (x85|(x86&(x87<x88)));

	if (t21 != -365632784LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MIN;
	uint16_t x90 = UINT16_MAX;
	uint32_t x91 = 19322U;
	int8_t x92 = 31;
	int32_t t22 = INT32_MIN;

	t22 = (x89|(x90&(x91<x92)));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = INT16_MAX;
	int16_t x94 = INT16_MAX;
	uint32_t x95 = 6834U;
	uint16_t x96 = 9541U;
	int32_t t23 = 27757;

	t23 = (x93|(x94&(x95<x96)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = -10;
	int8_t x98 = -1;
	static int16_t x99 = -11668;
	int64_t x100 = 17LL;
	volatile int32_t t24 = 1762713;

	t24 = (x97|(x98&(x99<x100)));

	if (t24 != -9) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	static int8_t x103 = INT8_MAX;
	static int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -35;

	t25 = (x101|(x102&(x103<x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MAX;
	int16_t x107 = INT16_MIN;
	volatile uint64_t x108 = 37298406582879163LLU;
	int32_t t26 = INT32_MAX;

	t26 = (x105|(x106&(x107<x108)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 261569U;
	int8_t x110 = -1;
	int64_t x112 = INT64_MIN;
	uint32_t t27 = 802U;

	t27 = (x109|(x110&(x111<x112)));

	if (t27 != 261569U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int8_t x114 = INT8_MIN;
	static int16_t x115 = INT16_MIN;
	volatile int32_t t28 = INT32_MIN;

	t28 = (x113|(x114&(x115<x116)));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = 14581935;
	volatile int64_t x119 = INT64_MAX;
	int64_t x120 = -1490687699829299LL;
	int32_t t29 = 14022193;

	t29 = (x117|(x118&(x119<x120)));

	if (t29 != -2157156) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 3160362;
	int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MIN;
	static uint32_t x124 = 385U;
	static volatile int64_t t30 = 15316758898LL;

	t30 = (x121|(x122&(x123<x124)));

	if (t30 != 3160362LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 120U;
	int32_t x127 = INT32_MIN;
	int16_t x128 = INT16_MAX;
	volatile int32_t t31 = -48643;

	t31 = (x125|(x126&(x127<x128)));

	if (t31 != 120) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = UINT16_MAX;
	volatile int8_t x130 = 2;
	volatile uint32_t x132 = 1865U;
	int32_t t32 = -577;

	t32 = (x129|(x130&(x131<x132)));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 21857381775LLU;
	int32_t x135 = INT32_MAX;
	uint16_t x136 = 26U;
	volatile uint64_t t33 = 986520263841LLU;

	t33 = (x133|(x134&(x135<x136)));

	if (t33 != 21857381775LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = -1LL;
	static volatile uint16_t x138 = UINT16_MAX;
	static int16_t x139 = INT16_MIN;
	volatile int8_t x140 = -4;
	volatile int64_t t34 = -1366LL;

	t34 = (x137|(x138&(x139<x140)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	int8_t x142 = INT8_MAX;
	int32_t x144 = INT32_MIN;
	int32_t t35 = 38531123;

	t35 = (x141|(x142&(x143<x144)));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -426;
	static int8_t x146 = -25;
	int8_t x147 = 0;

	t36 = (x145|(x146&(x147<x148)));

	if (t36 != -425) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x150 = INT64_MIN;
	int32_t x152 = INT32_MAX;
	volatile int64_t t37 = -9852063LL;

	t37 = (x149|(x150&(x151<x152)));

	if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int16_t x154 = INT16_MAX;
	int8_t x155 = INT8_MIN;
	int8_t x156 = -1;
	static int32_t t38 = 350406;

	t38 = (x153|(x154&(x155<x156)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile int16_t x158 = 6019;
	int32_t x159 = 527;
	int8_t x160 = 12;

	t39 = (x157|(x158&(x159<x160)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	uint32_t x163 = UINT32_MAX;
	static volatile int32_t t40 = 0;

	t40 = (x161|(x162&(x163<x164)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 2707U;
	uint8_t x167 = 6U;
	uint8_t x168 = UINT8_MAX;
	int32_t t41 = 41055305;

	t41 = (x165|(x166&(x167<x168)));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 26966U;
	static uint64_t x170 = 18874197718LLU;
	volatile uint8_t x171 = 1U;
	static int32_t x172 = INT32_MIN;
	volatile uint64_t t42 = 603838635345635207LLU;

	t42 = (x169|(x170&(x171<x172)));

	if (t42 != 26966LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	uint32_t x174 = 504U;
	int16_t x175 = INT16_MAX;
	volatile uint32_t t43 = 18420U;

	t43 = (x173|(x174&(x175<x176)));

	if (t43 != 4294934528U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	static volatile uint16_t x178 = UINT16_MAX;
	uint16_t x179 = 0U;
	volatile uint64_t x180 = 1338475LLU;
	static int32_t t44 = INT32_MAX;

	t44 = (x177|(x178&(x179<x180)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	static uint32_t x182 = 31141740U;
	static int32_t x183 = 2518491;
	uint32_t t45 = UINT32_MAX;

	t45 = (x181|(x182&(x183<x184)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	int8_t x186 = 2;
	int32_t x187 = -1237675;
	int64_t x188 = -2832933273LL;
	static int32_t t46 = -11952593;

	t46 = (x185|(x186&(x187<x188)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	static int16_t x190 = INT16_MIN;
	static volatile uint32_t x191 = UINT32_MAX;
	int8_t x192 = INT8_MIN;
	int64_t t47 = INT64_MAX;

	t47 = (x189|(x190&(x191<x192)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 1182U;
	uint32_t x195 = 515932026U;
	uint64_t x196 = 41616785314859LLU;
	volatile int64_t t48 = 84380331LL;

	t48 = (x193|(x194&(x195<x196)));

	if (t48 != 1183LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 183996579854LLU;
	volatile int16_t x198 = INT16_MIN;
	int64_t x199 = INT64_MIN;
	volatile uint64_t t49 = 35221576LLU;

	t49 = (x197|(x198&(x199<x200)));

	if (t49 != 183996579854LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 7U;
	int64_t x202 = INT64_MAX;
	uint16_t x203 = 3U;
	int64_t t50 = 30404LL;

	t50 = (x201|(x202&(x203<x204)));

	if (t50 != 7LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	volatile uint16_t x206 = UINT16_MAX;
	volatile int16_t x208 = INT16_MAX;
	int32_t t51 = 3302;

	t51 = (x205|(x206&(x207<x208)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 2276862;
	volatile uint64_t x210 = 14700648LLU;
	volatile int8_t x211 = -15;
	int8_t x212 = -37;
	static volatile uint64_t t52 = 191739710992087LLU;

	t52 = (x209|(x210&(x211<x212)));

	if (t52 != 2276862LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 47U;
	int16_t x214 = -1;
	int32_t x216 = -6983891;
	int32_t t53 = 196;

	t53 = (x213|(x214&(x215<x216)));

	if (t53 != 47) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = -2;
	volatile int16_t x218 = 9015;
	uint16_t x220 = 1U;
	static int32_t t54 = 796106719;

	t54 = (x217|(x218&(x219<x220)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = UINT8_MAX;
	static volatile int32_t x223 = -1;
	volatile int8_t x224 = -1;
	static int32_t t55 = -5;

	t55 = (x221|(x222&(x223<x224)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = 1LLU;
	static volatile uint16_t x227 = 2U;
	static int8_t x228 = -1;

	t56 = (x225|(x226&(x227<x228)));

	if (t56 != 65535LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int8_t x230 = 1;
	int32_t x231 = INT32_MIN;
	volatile uint16_t x232 = UINT16_MAX;

	t57 = (x229|(x230&(x231<x232)));

	if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 91;
	int32_t x234 = INT32_MIN;
	int32_t x235 = -1;
	int64_t x236 = 31337021014466080LL;
	int32_t t58 = -102627409;

	t58 = (x233|(x234&(x235<x236)));

	if (t58 != 91) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = -3LL;
	static int32_t x239 = INT32_MAX;
	int32_t x240 = INT32_MAX;

	t59 = (x237|(x238&(x239<x240)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = UINT8_MAX;
	int64_t x243 = INT64_MAX;
	uint64_t x244 = 43565039LLU;
	volatile int32_t t60 = -11;

	t60 = (x241|(x242&(x243<x244)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	uint8_t x247 = 53U;
	int16_t x248 = -5;

	t61 = (x245|(x246&(x247<x248)));

	if (t61 != 127LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = 718U;
	static int8_t x250 = INT8_MIN;
	uint8_t x251 = 12U;
	volatile uint32_t t62 = 6700U;

	t62 = (x249|(x250&(x251<x252)));

	if (t62 != 718U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	int16_t x254 = INT16_MAX;
	uint16_t x255 = UINT16_MAX;
	volatile int32_t t63 = -618682;

	t63 = (x253|(x254&(x255<x256)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int64_t x258 = INT64_MAX;
	int64_t x260 = 420500456610800689LL;
	int64_t t64 = 1024949174750283LL;

	t64 = (x257|(x258&(x259<x260)));

	if (t64 != -2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	static int32_t x262 = -1;
	static int32_t x264 = INT32_MIN;
	static volatile int32_t t65 = 31;

	t65 = (x261|(x262&(x263<x264)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MAX;
	int32_t x266 = 7058164;
	int32_t x268 = INT32_MIN;
	int32_t t66 = -99;

	t66 = (x265|(x266&(x267<x268)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = 1;
	int16_t x271 = INT16_MAX;
	int16_t x272 = 1;
	static volatile int32_t t67 = -2612;

	t67 = (x269|(x270&(x271<x272)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int8_t x274 = 4;
	volatile int64_t x275 = INT64_MIN;
	int16_t x276 = -1;

	t68 = (x273|(x274&(x275<x276)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int64_t x278 = INT64_MIN;
	int8_t x279 = -1;
	int8_t x280 = -37;
	volatile int64_t t69 = 655613975LL;

	t69 = (x277|(x278&(x279<x280)));

	if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 1391;
	static int8_t x282 = -1;
	uint8_t x283 = 35U;
	int32_t t70 = -11424569;

	t70 = (x281|(x282&(x283<x284)));

	if (t70 != 1391) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile int64_t x286 = -1LL;
	volatile int16_t x287 = INT16_MIN;
	volatile int64_t x288 = -51LL;
	int64_t t71 = 466058631LL;

	t71 = (x285|(x286&(x287<x288)));

	if (t71 != -127LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MAX;
	int64_t x291 = 20304LL;
	static int64_t x292 = INT64_MIN;
	int32_t t72 = 0;

	t72 = (x289|(x290&(x291<x292)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x294 = 31U;
	volatile uint16_t x295 = UINT16_MAX;
	int64_t x296 = INT64_MIN;
	static volatile int64_t t73 = -14352324231LL;

	t73 = (x293|(x294&(x295<x296)));

	if (t73 != -9385LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = 46797;
	uint32_t x299 = 2433389U;
	static uint16_t x300 = UINT16_MAX;

	t74 = (x297|(x298&(x299<x300)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int16_t x302 = 3;
	uint64_t x304 = 6077LLU;

	t75 = (x301|(x302&(x303<x304)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MAX;
	uint32_t x307 = 98U;
	int32_t x308 = 158102327;
	int64_t t76 = 32389429203360745LL;

	t76 = (x305|(x306&(x307<x308)));

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	volatile int16_t x310 = 0;
	int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MIN;
	static int32_t t77 = 0;

	t77 = (x309|(x310&(x311<x312)));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -17937;
	uint16_t x314 = UINT16_MAX;
	int16_t x315 = -1;
	int8_t x316 = INT8_MIN;
	int32_t t78 = -19792;

	t78 = (x313|(x314&(x315<x316)));

	if (t78 != -17937) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	uint64_t x318 = 203370394157LLU;
	int32_t x320 = 15760;
	uint64_t t79 = UINT64_MAX;

	t79 = (x317|(x318&(x319<x320)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	int8_t x322 = -12;
	uint16_t x323 = 0U;
	int8_t x324 = INT8_MIN;
	volatile int64_t t80 = -80686030LL;

	t80 = (x321|(x322&(x323<x324)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x326 = 25198LLU;
	uint64_t t81 = 1296860424LLU;

	t81 = (x325|(x326&(x327<x328)));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int8_t x330 = -13;
	uint64_t x331 = 3573983LLU;
	static int64_t x332 = -1477892045642503374LL;
	int32_t t82 = -21550;

	t82 = (x329|(x330&(x331<x332)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x334 = UINT16_MAX;
	volatile uint32_t x335 = UINT32_MAX;

	t83 = (x333|(x334&(x335<x336)));

	if (t83 != 570790) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1180;
	volatile uint64_t x338 = UINT64_MAX;
	int32_t x339 = INT32_MAX;
	int32_t x340 = -847;
	uint64_t t84 = 854095592724329342LLU;

	t84 = (x337|(x338&(x339<x340)));

	if (t84 != 18446744073709550436LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	uint64_t x342 = 19225687319083202LLU;
	int8_t x343 = -3;
	int32_t x344 = INT32_MIN;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x341|(x342&(x343<x344)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = 227;
	static int64_t x346 = INT64_MIN;
	uint8_t x347 = 3U;
	static int64_t t86 = 6031174338958760LL;

	t86 = (x345|(x346&(x347<x348)));

	if (t86 != 227LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x351 = -1;
	static int32_t x352 = INT32_MAX;
	volatile int64_t t87 = 4330769062216LL;

	t87 = (x349|(x350&(x351<x352)));

	if (t87 != 374288619LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x354 = 72U;
	uint32_t t88 = 33093692U;

	t88 = (x353|(x354&(x355<x356)));

	if (t88 != 65535U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x358 = INT64_MIN;
	int16_t x359 = 6511;
	int16_t x360 = -1;
	int64_t t89 = 15LL;

	t89 = (x357|(x358&(x359<x360)));

	if (t89 != 464927796LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -17245;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = -3341527652935970LL;
	uint64_t t90 = 8291313LLU;

	t90 = (x361|(x362&(x363<x364)));

	if (t90 != 18446744073709534371LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x365 = 139;
	uint64_t x366 = UINT64_MAX;
	int8_t x367 = -1;
	int64_t x368 = INT64_MAX;

	t91 = (x365|(x366&(x367<x368)));

	if (t91 != 139LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int8_t x371 = -45;
	int64_t x372 = -234722375349412LL;

	t92 = (x369|(x370&(x371<x372)));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	static int8_t x375 = -1;
	int8_t x376 = INT8_MAX;

	t93 = (x373|(x374&(x375<x376)));

	if (t93 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = UINT64_MAX;
	uint64_t x378 = 56652486050284993LLU;
	uint8_t x380 = UINT8_MAX;

	t94 = (x377|(x378&(x379<x380)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -473413LL;
	volatile uint32_t x383 = UINT32_MAX;
	uint64_t x384 = 7164808803800LLU;
	volatile int64_t t95 = -16682596374380057LL;

	t95 = (x381|(x382&(x383<x384)));

	if (t95 != -2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	volatile int8_t x386 = -1;
	static volatile int8_t x387 = INT8_MAX;
	volatile int64_t t96 = 54LL;

	t96 = (x385|(x386&(x387<x388)));

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int64_t x391 = INT64_MAX;
	static uint32_t t97 = 11691115U;

	t97 = (x389|(x390&(x391<x392)));

	if (t97 != 4294967168U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = -156626344LL;
	uint64_t x395 = 483262LLU;
	int16_t x396 = -1;
	uint64_t t98 = 802853584LLU;

	t98 = (x393|(x394&(x395<x396)));

	if (t98 != 18446744073552925272LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x398 = -12;
	volatile int16_t x399 = INT16_MAX;
	uint64_t x400 = 293599503788LLU;
	volatile int32_t t99 = 58671858;

	t99 = (x397|(x398&(x399<x400)));

	if (t99 != 255) { NG(); } else { ; }
	
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

