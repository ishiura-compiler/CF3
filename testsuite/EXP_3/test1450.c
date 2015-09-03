#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = INT32_MAX;
uint8_t x4 = UINT8_MAX;
static uint64_t x5 = 93540971348767511LLU;
static volatile int32_t t2 = 1969;
static int8_t x14 = 33;
uint32_t x16 = 52844U;
int32_t t3 = 14;
static int64_t x21 = INT64_MAX;
int32_t x27 = -155906660;
static volatile int32_t t6 = 136324864;
int8_t x30 = -1;
uint8_t x31 = UINT8_MAX;
static uint8_t x34 = UINT8_MAX;
int8_t x38 = INT8_MIN;
static uint16_t x40 = UINT16_MAX;
volatile int32_t t9 = -2;
uint32_t x41 = 6337U;
uint8_t x45 = 0U;
int32_t x46 = INT32_MIN;
static int32_t t11 = -677;
int8_t x51 = -1;
static volatile int32_t x52 = 469556;
uint64_t x60 = 15LLU;
static volatile int32_t t14 = 25;
uint8_t x61 = 0U;
volatile uint64_t x62 = 110273235044356138LLU;
int64_t x69 = INT64_MIN;
static volatile int32_t t17 = 131;
static uint64_t x75 = UINT64_MAX;
static int64_t x79 = INT64_MIN;
int32_t x83 = INT32_MAX;
int32_t x84 = -1;
volatile int32_t x85 = -1;
int32_t t21 = 305682;
volatile int8_t x93 = -1;
uint16_t x98 = UINT16_MAX;
int32_t t24 = -121768;
static volatile int32_t x107 = -1;
volatile int8_t x111 = INT8_MIN;
volatile int32_t t27 = 373257;
int16_t x115 = INT16_MIN;
int32_t t29 = -726;
int8_t x123 = -1;
uint32_t x126 = 911260630U;
int8_t x127 = -7;
static int32_t x134 = -11944;
int16_t x136 = INT16_MAX;
uint16_t x137 = 81U;
volatile int32_t t35 = -2;
uint32_t x148 = 6284U;
uint16_t x153 = 516U;
static int32_t x158 = 753167;
int64_t x176 = INT64_MIN;
volatile int32_t t43 = -25295;
static int32_t t45 = -185;
uint16_t x186 = 21U;
uint32_t x187 = 497274U;
int16_t x188 = INT16_MIN;
volatile uint16_t x190 = 2839U;
int32_t t48 = 852;
int32_t x198 = INT32_MAX;
uint64_t x201 = 50064040215557LLU;
int16_t x202 = INT16_MIN;
static volatile int32_t t51 = 3;
int32_t x219 = 0;
int32_t t54 = 6;
int32_t t56 = -255;
uint8_t x232 = 8U;
uint16_t x233 = 5U;
int16_t x238 = INT16_MIN;
uint32_t x239 = UINT32_MAX;
int8_t x247 = -25;
int32_t x248 = INT32_MAX;
int32_t t61 = 151938919;
static int8_t x256 = -1;
int64_t x257 = INT64_MIN;
volatile uint16_t x269 = 188U;
int32_t x271 = INT32_MAX;
uint16_t x279 = UINT16_MAX;
volatile int32_t t71 = -14094;
int8_t x289 = 25;
volatile uint8_t x294 = UINT8_MAX;
uint32_t x300 = 228U;
int32_t t76 = 3776102;
int64_t x310 = -22749624679640LL;
uint16_t x331 = UINT16_MAX;
volatile uint8_t x339 = UINT8_MAX;
volatile uint16_t x340 = 1193U;
int64_t x342 = 3321840871LL;
uint8_t x345 = UINT8_MAX;
int32_t t86 = 161;
uint64_t x351 = 64365425015570806LLU;
int16_t x356 = INT16_MIN;
static int64_t x362 = -1382531LL;
static uint32_t x368 = 733846192U;
uint16_t x371 = 3U;
int32_t t92 = 568354;
int64_t x373 = INT64_MAX;
volatile int8_t x379 = INT8_MIN;
volatile int32_t t94 = -260660335;
volatile int8_t x387 = -1;
int16_t x388 = INT16_MIN;
static uint64_t x391 = 13LLU;
volatile int32_t t97 = 392772813;
static int32_t x394 = 16215;
volatile int64_t x395 = 11854983LL;
uint32_t x396 = UINT32_MAX;
int32_t t99 = -80541711;


void f0(void) {
	static uint64_t x1 = 91366074LLU;
	int16_t x2 = -897;
	int32_t t0 = 1171525;

	t0 = ((x1==x2)>>(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 0;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 854551;

	t1 = ((x5==x6)>>(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -43465;
	int64_t x10 = INT64_MIN;
	int8_t x11 = -5;
	uint32_t x12 = UINT32_MAX;

	t2 = ((x9==x10)>>(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 24U;
	uint32_t x15 = UINT32_MAX;

	t3 = ((x13==x14)>>(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -20313LL;
	int16_t x18 = 483;
	volatile uint32_t x19 = 1962U;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = -430;

	t4 = ((x17==x18)>>(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -49;
	int16_t x23 = INT16_MIN;
	uint16_t x24 = 276U;
	volatile int32_t t5 = -57766;

	t5 = ((x21==x22)>>(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	int32_t x26 = 376819;
	uint16_t x28 = 7U;

	t6 = ((x25==x26)>>(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -460814976322873LL;
	volatile uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = 29;

	t7 = ((x29==x30)>>(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int32_t x35 = INT32_MAX;
	uint8_t x36 = 3U;
	int32_t t8 = 3;

	t8 = ((x33==x34)>>(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile uint64_t x39 = 25LLU;

	t9 = ((x37==x38)>>(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 270U;
	uint64_t x43 = 5LLU;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -307950579;

	t10 = ((x41==x42)>>(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x47 = UINT8_MAX;
	volatile int8_t x48 = 26;

	t11 = ((x45==x46)>>(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	int32_t x50 = INT32_MIN;
	int32_t t12 = -123557411;

	t12 = ((x49==x50)>>(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static volatile int16_t x54 = INT16_MAX;
	int16_t x55 = INT16_MAX;
	uint64_t x56 = 224LLU;
	int32_t t13 = 6;

	t13 = ((x53==x54)>>(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	static uint8_t x58 = 2U;
	uint16_t x59 = 205U;

	t14 = ((x57==x58)>>(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x63 = 56U;
	int8_t x64 = INT8_MIN;
	static volatile int32_t t15 = 0;

	t15 = ((x61==x62)>>(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = 22;
	uint16_t x66 = 14918U;
	uint8_t x67 = UINT8_MAX;
	static uint16_t x68 = UINT16_MAX;
	static volatile int32_t t16 = -51867526;

	t16 = ((x65==x66)>>(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MIN;
	int64_t x72 = -1LL;

	t17 = ((x69==x70)>>(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	volatile int16_t x74 = -1;
	uint32_t x76 = 61596482U;
	int32_t t18 = -25022088;

	t18 = ((x73==x74)>>(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int32_t x78 = -106315;
	static int32_t x80 = INT32_MAX;
	static volatile int32_t t19 = -1625;

	t19 = ((x77==x78)>>(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MAX;
	static uint8_t x82 = 3U;
	int32_t t20 = -201180;

	t20 = ((x81==x82)>>(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x86 = INT16_MAX;
	uint8_t x87 = 1U;
	uint16_t x88 = UINT16_MAX;

	t21 = ((x85==x86)>>(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 19U;
	int32_t x90 = -1;
	int64_t x91 = -1LL;
	uint8_t x92 = 0U;
	volatile int32_t t22 = 58;

	t22 = ((x89==x90)>>(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x94 = INT16_MAX;
	uint16_t x95 = 873U;
	volatile uint64_t x96 = 533260388060LLU;
	volatile int32_t t23 = 1892;

	t23 = ((x93==x94)>>(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int32_t x99 = -1;
	int64_t x100 = -417LL;

	t24 = ((x97==x98)>>(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	int64_t x102 = INT64_MIN;
	uint8_t x103 = 12U;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = 10199980;

	t25 = ((x101==x102)>>(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	uint16_t x106 = 394U;
	int32_t x108 = INT32_MAX;
	volatile int32_t t26 = -7644324;

	t26 = ((x105==x106)>>(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	uint64_t x110 = 28717273227072LLU;
	volatile int64_t x112 = INT64_MAX;

	t27 = ((x109==x110)>>(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 84500LLU;
	uint8_t x114 = UINT8_MAX;
	uint32_t x116 = UINT32_MAX;
	volatile int32_t t28 = 24;

	t28 = ((x113==x114)>>(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MAX;
	int8_t x118 = -1;
	int32_t x119 = INT32_MIN;
	int8_t x120 = -1;

	t29 = ((x117==x118)>>(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int32_t x122 = INT32_MIN;
	volatile int32_t x124 = -10774;
	int32_t t30 = -885574095;

	t30 = ((x121==x122)>>(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MIN;
	static uint8_t x128 = 52U;
	static int32_t t31 = 6744775;

	t31 = ((x125==x126)>>(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = -1;
	static int64_t x130 = -1LL;
	int16_t x131 = -1;
	uint8_t x132 = 42U;
	int32_t t32 = -1;

	t32 = ((x129==x130)>>(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int64_t x135 = -1LL;
	static int32_t t33 = -10389;

	t33 = ((x133==x134)>>(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -3468856967302LL;
	int8_t x139 = INT8_MAX;
	int8_t x140 = INT8_MAX;
	volatile int32_t t34 = 1530;

	t34 = ((x137==x138)>>(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	uint16_t x142 = UINT16_MAX;
	volatile uint32_t x143 = 150145997U;
	int64_t x144 = 723727317652531LL;

	t35 = ((x141==x142)>>(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 1;
	uint32_t x146 = UINT32_MAX;
	uint32_t x147 = 221U;
	volatile int32_t t36 = 1399;

	t36 = ((x145==x146)>>(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 2U;
	volatile int32_t x150 = INT32_MIN;
	int16_t x151 = INT16_MAX;
	uint16_t x152 = 2179U;
	static int32_t t37 = 995067;

	t37 = ((x149==x150)>>(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = 4LL;
	volatile int8_t x155 = INT8_MIN;
	static uint64_t x156 = 1778275899LLU;
	volatile int32_t t38 = 559071;

	t38 = ((x153==x154)>>(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int8_t x159 = -12;
	int64_t x160 = -3405971046644063956LL;
	int32_t t39 = 730878;

	t39 = ((x157==x158)>>(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = -1LL;
	int32_t x163 = -804550;
	int32_t x164 = -188481228;
	static volatile int32_t t40 = -2555855;

	t40 = ((x161==x162)>>(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	int32_t x166 = -1;
	uint64_t x167 = 5LLU;
	volatile uint64_t x168 = UINT64_MAX;
	volatile int32_t t41 = 26371212;

	t41 = ((x165==x166)>>(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	int16_t x170 = 1474;
	volatile uint64_t x171 = 83352904LLU;
	int32_t x172 = INT32_MIN;
	int32_t t42 = -3;

	t42 = ((x169==x170)>>(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 175526785U;
	static int32_t x174 = INT32_MAX;
	int8_t x175 = -24;

	t43 = ((x173==x174)>>(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	int64_t x178 = -1LL;
	int64_t x179 = 0LL;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -20418;

	t44 = ((x177==x178)>>(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 37;
	uint8_t x182 = UINT8_MAX;
	int64_t x183 = INT64_MAX;
	int8_t x184 = -1;

	t45 = ((x181==x182)>>(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = INT8_MIN;
	volatile int32_t t46 = -2747;

	t46 = ((x185==x186)>>(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -30002476758680LL;
	volatile int8_t x191 = INT8_MAX;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 15696;

	t47 = ((x189==x190)>>(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = -11035707LL;
	int64_t x194 = INT64_MIN;
	volatile int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MIN;

	t48 = ((x193==x194)>>(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	volatile int64_t x199 = INT64_MAX;
	volatile int8_t x200 = INT8_MIN;
	int32_t t49 = 3;

	t49 = ((x197==x198)>>(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x203 = 0U;
	int32_t x204 = INT32_MAX;
	static int32_t t50 = 1;

	t50 = ((x201==x202)>>(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 1117161083564940LL;
	uint64_t x206 = 4191LLU;
	uint16_t x207 = 6U;
	volatile uint32_t x208 = UINT32_MAX;

	t51 = ((x205==x206)>>(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 44U;
	uint64_t x210 = 1325262LLU;
	static volatile int32_t x211 = INT32_MIN;
	uint64_t x212 = 3724LLU;
	volatile int32_t t52 = 171683314;

	t52 = ((x209==x210)>>(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 3U;
	volatile int16_t x214 = -4622;
	volatile int32_t x215 = INT32_MIN;
	static int8_t x216 = INT8_MIN;
	static volatile int32_t t53 = 207;

	t53 = ((x213==x214)>>(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 1770695531U;
	int32_t x218 = INT32_MAX;
	static int32_t x220 = -1;

	t54 = ((x217==x218)>>(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 7U;
	volatile int16_t x222 = INT16_MIN;
	int32_t x223 = -14694;
	static int8_t x224 = INT8_MIN;
	static int32_t t55 = -54037952;

	t55 = ((x221==x222)>>(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	static volatile uint16_t x226 = UINT16_MAX;
	uint64_t x227 = 13218180025251LLU;
	uint8_t x228 = 3U;

	t56 = ((x225==x226)>>(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 1;
	int64_t x230 = -2333145LL;
	int32_t x231 = INT32_MIN;
	volatile int32_t t57 = -15;

	t57 = ((x229==x230)>>(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x234 = INT16_MIN;
	int32_t x235 = -1;
	volatile int8_t x236 = -1;
	volatile int32_t t58 = 207605;

	t58 = ((x233==x234)>>(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MAX;
	volatile int8_t x240 = -1;
	int32_t t59 = 79001200;

	t59 = ((x237==x238)>>(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = 25902775U;
	volatile uint64_t x242 = 92033156LLU;
	static volatile int64_t x243 = -11LL;
	int64_t x244 = INT64_MIN;
	int32_t t60 = 11619429;

	t60 = ((x241==x242)>>(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = 0;
	int32_t x246 = -1;

	t61 = ((x245==x246)>>(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MAX;
	static int32_t x251 = -1;
	static uint64_t x252 = 346LLU;
	static volatile int32_t t62 = 145789052;

	t62 = ((x249==x250)>>(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 1U;
	uint64_t x254 = UINT64_MAX;
	static int8_t x255 = INT8_MIN;
	volatile int32_t t63 = 3;

	t63 = ((x253==x254)>>(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = 0;
	static volatile int64_t x259 = 21066634017401614LL;
	volatile uint32_t x260 = UINT32_MAX;
	int32_t t64 = 117274936;

	t64 = ((x257==x258)>>(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = UINT32_MAX;
	uint64_t x262 = 1360LLU;
	int8_t x263 = INT8_MIN;
	int16_t x264 = 0;
	int32_t t65 = -116;

	t65 = ((x261==x262)>>(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = INT64_MAX;
	volatile int16_t x266 = -15;
	volatile uint8_t x267 = 56U;
	int32_t x268 = -1;
	static int32_t t66 = 13;

	t66 = ((x265==x266)>>(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x270 = -7038088;
	int16_t x272 = INT16_MAX;
	static volatile int32_t t67 = 1214236;

	t67 = ((x269==x270)>>(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	uint16_t x274 = 128U;
	static uint16_t x275 = UINT16_MAX;
	int16_t x276 = 5011;
	volatile int32_t t68 = -741706;

	t68 = ((x273==x274)>>(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	uint8_t x278 = 11U;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t69 = 3579182;

	t69 = ((x277==x278)>>(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	static volatile uint16_t x282 = 1U;
	uint16_t x283 = 4575U;
	static int64_t x284 = -1LL;
	int32_t t70 = -61;

	t70 = ((x281==x282)>>(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MAX;
	int64_t x286 = 31443006046667LL;
	int8_t x287 = -1;
	int32_t x288 = INT32_MAX;

	t71 = ((x285==x286)>>(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x290 = 55U;
	volatile int64_t x291 = INT64_MAX;
	static volatile uint8_t x292 = 3U;
	static volatile int32_t t72 = 10201744;

	t72 = ((x289==x290)>>(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 54873829;
	int16_t x295 = INT16_MIN;
	int8_t x296 = 13;
	static volatile int32_t t73 = -1400;

	t73 = ((x293==x294)>>(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 221548053606510296LL;
	int16_t x298 = INT16_MAX;
	int32_t x299 = -1;
	volatile int32_t t74 = -1770;

	t74 = ((x297==x298)>>(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	static int16_t x302 = -20;
	uint8_t x303 = 23U;
	static int64_t x304 = 0LL;
	int32_t t75 = 489;

	t75 = ((x301==x302)>>(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	int16_t x306 = -1;
	int64_t x307 = -1LL;
	static volatile uint32_t x308 = UINT32_MAX;

	t76 = ((x305==x306)>>(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 49437U;
	int8_t x311 = -1;
	volatile int8_t x312 = INT8_MAX;
	int32_t t77 = 31;

	t77 = ((x309==x310)>>(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 588543245172778442LLU;
	uint64_t x314 = 1724387342368058007LLU;
	uint8_t x315 = UINT8_MAX;
	int8_t x316 = -1;
	volatile int32_t t78 = 10985509;

	t78 = ((x313==x314)>>(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x317 = 81481U;
	int32_t x318 = INT32_MAX;
	int32_t x319 = INT32_MAX;
	static volatile int64_t x320 = INT64_MAX;
	int32_t t79 = 64058;

	t79 = ((x317==x318)>>(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 2U;
	static uint64_t x322 = 910243932208376916LLU;
	volatile uint8_t x323 = 22U;
	static volatile int8_t x324 = 28;
	static volatile int32_t t80 = 500963617;

	t80 = ((x321==x322)>>(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = 132;
	int64_t x327 = -1LL;
	int16_t x328 = INT16_MIN;
	int32_t t81 = -1638094;

	t81 = ((x325==x326)>>(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	static int16_t x330 = -1;
	int16_t x332 = 385;
	volatile int32_t t82 = 3496024;

	t82 = ((x329==x330)>>(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 1;
	static int16_t x334 = -1;
	uint32_t x335 = 113509U;
	int32_t x336 = -755312767;
	volatile int32_t t83 = 160119;

	t83 = ((x333==x334)>>(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	static int64_t x338 = INT64_MIN;
	volatile int32_t t84 = 51;

	t84 = ((x337==x338)>>(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = 1;
	int8_t x343 = -1;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 0;

	t85 = ((x341==x342)>>(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x346 = 0U;
	int64_t x347 = INT64_MIN;
	static uint64_t x348 = UINT64_MAX;

	t86 = ((x345==x346)>>(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int64_t x350 = -1LL;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t87 = 757578;

	t87 = ((x349==x350)>>(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 544LLU;
	int32_t x354 = 1;
	uint8_t x355 = 31U;
	volatile int32_t t88 = 3690346;

	t88 = ((x353==x354)>>(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x357 = UINT16_MAX;
	static int64_t x358 = INT64_MAX;
	static int16_t x359 = -15838;
	static volatile int16_t x360 = -1;
	static int32_t t89 = 980;

	t89 = ((x357==x358)>>(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 182;
	int16_t x363 = 2;
	uint16_t x364 = 43U;
	static int32_t t90 = -6;

	t90 = ((x361==x362)>>(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	volatile int8_t x366 = 7;
	static int8_t x367 = INT8_MAX;
	volatile int32_t t91 = -52850243;

	t91 = ((x365==x366)>>(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = 1;
	int32_t x370 = -48;
	static uint8_t x372 = 1U;

	t92 = ((x369==x370)>>(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = INT8_MAX;
	int32_t x375 = INT32_MAX;
	static int8_t x376 = INT8_MIN;
	int32_t t93 = -9707848;

	t93 = ((x373==x374)>>(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	static int64_t x378 = -1545112457268LL;
	volatile int16_t x380 = INT16_MIN;

	t94 = ((x377==x378)>>(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = 99;
	int16_t x382 = INT16_MAX;
	volatile int64_t x383 = -1LL;
	volatile uint64_t x384 = 2045663041LLU;
	volatile int32_t t95 = -489136386;

	t95 = ((x381==x382)>>(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -204290;
	uint32_t x386 = 13473U;
	volatile int32_t t96 = -14;

	t96 = ((x385==x386)>>(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 1715U;
	uint64_t x390 = UINT64_MAX;
	volatile uint8_t x392 = 1U;

	t97 = ((x389==x390)>>(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = -1;
	volatile int32_t t98 = -61660;

	t98 = ((x393==x394)>>(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 1955LLU;
	volatile uint16_t x398 = 33U;
	volatile uint16_t x399 = 7U;
	static int8_t x400 = -1;

	t99 = ((x397==x398)>>(x399<x400));

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

