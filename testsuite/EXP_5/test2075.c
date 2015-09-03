#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int8_t x11 = 0;
int64_t x14 = -1LL;
static int32_t t3 = -192;
volatile uint32_t x21 = UINT32_MAX;
uint16_t x24 = 21582U;
static volatile uint64_t x27 = UINT64_MAX;
int8_t x33 = -10;
int32_t t9 = 308;
volatile int16_t x45 = 7;
int16_t x49 = -124;
volatile int32_t t13 = 16069003;
volatile int16_t x58 = INT16_MAX;
volatile uint16_t x60 = UINT16_MAX;
volatile int16_t x61 = INT16_MIN;
uint8_t x66 = 2U;
uint16_t x67 = UINT16_MAX;
volatile int32_t t18 = 2805776;
int32_t x77 = -437;
static uint32_t x80 = UINT32_MAX;
int16_t x89 = 3877;
static uint64_t x99 = UINT64_MAX;
volatile int32_t t24 = 20431549;
uint16_t x107 = 2000U;
volatile int16_t x111 = -1;
uint32_t x115 = 51U;
static int32_t t28 = 16656587;
uint64_t x118 = 22642561LLU;
static int64_t x122 = 364414173365383021LL;
volatile uint8_t x124 = UINT8_MAX;
int64_t x133 = -47765LL;
uint8_t x136 = UINT8_MAX;
volatile int32_t t33 = -1786;
static int64_t x137 = -1LL;
uint8_t x138 = 0U;
static int64_t x142 = 0LL;
uint16_t x144 = UINT16_MAX;
int8_t x147 = -1;
int64_t x151 = INT64_MAX;
static uint8_t x152 = 3U;
int64_t x155 = 49264977LL;
int32_t x156 = -1;
static int64_t x162 = -253179214059LL;
int8_t x164 = INT8_MIN;
uint32_t x172 = UINT32_MAX;
uint64_t x173 = 115LLU;
volatile int16_t x181 = -1;
int32_t t45 = -88596;
uint8_t x185 = 3U;
uint32_t x187 = 0U;
volatile int8_t x188 = INT8_MIN;
int32_t t46 = -1;
static uint16_t x193 = 726U;
int32_t t48 = -5;
static uint64_t x197 = 31175383LLU;
int16_t x199 = -97;
int8_t x204 = INT8_MIN;
volatile int8_t x208 = -1;
volatile int64_t x209 = -1LL;
static uint64_t x215 = 188070LLU;
int64_t x220 = INT64_MAX;
volatile int64_t x222 = -3666608LL;
volatile int16_t x227 = -1;
static int8_t x231 = INT8_MAX;
uint32_t x241 = 32645644U;
uint32_t x248 = UINT32_MAX;
volatile int64_t x249 = INT64_MIN;
volatile int32_t t63 = 261647;
int16_t x258 = INT16_MIN;
int32_t t64 = -23;
volatile uint32_t x263 = 114U;
int32_t x268 = INT32_MIN;
uint16_t x269 = UINT16_MAX;
volatile uint16_t x275 = UINT16_MAX;
uint16_t x278 = UINT16_MAX;
int64_t x284 = -1LL;
static volatile int8_t x286 = INT8_MIN;
volatile int32_t t74 = 105;
int16_t x308 = 7143;
static volatile int32_t t76 = 10070;
int32_t t77 = 6187;
int8_t x315 = INT8_MIN;
int16_t x318 = -1;
int64_t x319 = 28163834LL;
int8_t x321 = 27;
int16_t x329 = -168;
uint32_t x331 = 2948U;
int8_t x336 = 10;
uint8_t x339 = 122U;
int16_t x342 = INT16_MIN;
static int64_t x343 = INT64_MIN;
int16_t x348 = INT16_MIN;
volatile int32_t t86 = 25;
uint8_t x351 = UINT8_MAX;
static int32_t t87 = 261998410;
int8_t x358 = -48;
int32_t t89 = 11093799;
uint64_t x363 = 1974929091830354LLU;
static volatile int32_t t91 = 1;
uint32_t x369 = 698U;
uint8_t x375 = 15U;
uint64_t x387 = 65568LLU;
uint64_t x389 = 767866089LLU;
int8_t x390 = -3;
volatile int32_t x394 = 565624;


void f0(void) {
	int32_t x2 = -1;
	static int16_t x3 = INT16_MIN;
	uint16_t x4 = 126U;
	static int32_t t0 = 1;

	t0 = (x1==((x2^x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint16_t x6 = 12U;
	uint64_t x7 = UINT64_MAX;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 23642423;

	t1 = (x5==((x6^x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 0U;
	int8_t x10 = INT8_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -4856500;

	t2 = (x9==((x10^x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 32604924U;
	static int32_t x15 = -1;
	static int16_t x16 = INT16_MAX;

	t3 = (x13==((x14^x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 11U;
	int16_t x18 = INT16_MIN;
	static int16_t x19 = 1129;
	uint16_t x20 = 1612U;
	static volatile int32_t t4 = 3146;

	t4 = (x17==((x18^x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MAX;
	volatile int32_t x23 = INT32_MIN;
	static volatile int32_t t5 = 40;

	t5 = (x21==((x22^x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 0;
	static volatile int8_t x26 = 0;
	volatile int8_t x28 = -1;
	static volatile int32_t t6 = 1604448;

	t6 = (x25==((x26^x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 107556095239296949LL;
	uint8_t x30 = UINT8_MAX;
	int16_t x31 = -99;
	volatile int8_t x32 = -4;
	static int32_t t7 = 377174;

	t7 = (x29==((x30^x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = 1;
	int8_t x35 = INT8_MIN;
	static volatile uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 582;

	t8 = (x33==((x34^x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 0;
	int16_t x38 = INT16_MIN;
	uint64_t x39 = 14LLU;
	int16_t x40 = INT16_MIN;

	t9 = (x37==((x38^x39)/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = -13;
	volatile int64_t x43 = INT64_MIN;
	volatile uint8_t x44 = 50U;
	static int32_t t10 = -6198;

	t10 = (x41==((x42^x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 5U;
	uint32_t x47 = UINT32_MAX;
	static volatile int8_t x48 = 43;
	int32_t t11 = 157414;

	t11 = (x45==((x46^x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = 2U;
	static int64_t x51 = 746113LL;
	volatile uint64_t x52 = UINT64_MAX;
	volatile int32_t t12 = -4522;

	t12 = (x49==((x50^x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 220514687931487LL;
	int64_t x54 = INT64_MIN;
	int16_t x55 = -1;
	static uint8_t x56 = 6U;

	t13 = (x53==((x54^x55)/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 100030;
	int32_t x59 = -191848088;
	int32_t t14 = 6407898;

	t14 = (x57==((x58^x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x62 = 514250;
	volatile uint16_t x63 = 1403U;
	volatile int64_t x64 = -40LL;
	static int32_t t15 = -3191915;

	t15 = (x61==((x62^x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	static volatile uint8_t x68 = 114U;
	int32_t t16 = -396557794;

	t16 = (x65==((x66^x67)/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 57U;
	static uint16_t x70 = 1U;
	int8_t x71 = -1;
	volatile int8_t x72 = INT8_MAX;
	volatile int32_t t17 = 30887731;

	t17 = (x69==((x70^x71)/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 3629501140LLU;
	int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MIN;
	static uint64_t x76 = 1364425755255162LLU;

	t18 = (x73==((x74^x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x78 = INT32_MIN;
	static volatile int32_t x79 = 56269;
	int32_t t19 = -1501980;

	t19 = (x77==((x78^x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	static int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	int16_t x84 = -1;
	volatile int32_t t20 = -2;

	t20 = (x81==((x82^x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -2441;
	volatile int64_t x86 = INT64_MIN;
	uint64_t x87 = 540250750960835LLU;
	int32_t x88 = INT32_MIN;
	static volatile int32_t t21 = -121561089;

	t21 = (x85==((x86^x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 591LLU;
	static int16_t x91 = -1;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = -369536;

	t22 = (x89==((x90^x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	int8_t x94 = INT8_MAX;
	static int16_t x95 = INT16_MIN;
	int64_t x96 = 7LL;
	static volatile int32_t t23 = -10588521;

	t23 = (x93==((x94^x95)/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 21U;
	static int64_t x98 = INT64_MAX;
	int32_t x100 = 245943;

	t24 = (x97==((x98^x99)/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 0U;
	int64_t x102 = INT64_MAX;
	uint64_t x103 = 2102538713LLU;
	volatile uint32_t x104 = UINT32_MAX;
	static volatile int32_t t25 = -1;

	t25 = (x101==((x102^x103)/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	volatile int32_t x106 = INT32_MAX;
	int8_t x108 = -1;
	int32_t t26 = 3;

	t26 = (x105==((x106^x107)/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int8_t x110 = -1;
	volatile int64_t x112 = 66451099LL;
	volatile int32_t t27 = -1797921;

	t27 = (x109==((x110^x111)/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	uint16_t x114 = 2U;
	volatile int8_t x116 = 31;

	t28 = (x113==((x114^x115)/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 27U;
	static volatile uint8_t x119 = UINT8_MAX;
	int64_t x120 = INT64_MAX;
	int32_t t29 = 191;

	t29 = (x117==((x118^x119)/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	static uint8_t x123 = 72U;
	int32_t t30 = 3351;

	t30 = (x121==((x122^x123)/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 52798U;
	uint64_t x126 = 486880074LLU;
	volatile int8_t x127 = INT8_MIN;
	static int32_t x128 = INT32_MIN;
	int32_t t31 = -355414442;

	t31 = (x125==((x126^x127)/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = -4LL;
	volatile int16_t x131 = -1;
	int64_t x132 = INT64_MIN;
	volatile int32_t t32 = -26;

	t32 = (x129==((x130^x131)/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x134 = INT8_MAX;
	static int64_t x135 = INT64_MIN;

	t33 = (x133==((x134^x135)/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x139 = -39107;
	int32_t x140 = -1;
	int32_t t34 = 1073631;

	t34 = (x137==((x138^x139)/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x141 = INT8_MAX;
	volatile int16_t x143 = INT16_MIN;
	int32_t t35 = 1;

	t35 = (x141==((x142^x143)/x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 30U;
	uint64_t x146 = 35668850LLU;
	int8_t x148 = -1;
	volatile int32_t t36 = -24361;

	t36 = (x145==((x146^x147)/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	static int8_t x150 = -1;
	volatile int32_t t37 = 1325302;

	t37 = (x149==((x150^x151)/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 87LLU;
	static int64_t x154 = -2982LL;
	static int32_t t38 = -929240826;

	t38 = (x153==((x154^x155)/x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = 0;
	static int8_t x158 = INT8_MAX;
	int64_t x159 = INT64_MAX;
	int32_t x160 = INT32_MAX;
	static int32_t t39 = -23;

	t39 = (x157==((x158^x159)/x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -1;
	static int16_t x163 = -10;
	volatile int32_t t40 = 253401098;

	t40 = (x161==((x162^x163)/x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = UINT32_MAX;
	int32_t x166 = 488744;
	uint32_t x167 = 272250U;
	static int32_t x168 = INT32_MIN;
	volatile int32_t t41 = -3202;

	t41 = (x165==((x166^x167)/x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 638253957U;
	int32_t x170 = 43900086;
	int8_t x171 = -1;
	static volatile int32_t t42 = 89550574;

	t42 = (x169==((x170^x171)/x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = 21U;
	int32_t x175 = 338883;
	uint32_t x176 = 10119U;
	volatile int32_t t43 = 23;

	t43 = (x173==((x174^x175)/x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	uint8_t x178 = UINT8_MAX;
	int64_t x179 = -4422711LL;
	int64_t x180 = -404692LL;
	volatile int32_t t44 = -3;

	t44 = (x177==((x178^x179)/x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 1947547U;
	static uint32_t x183 = 26529U;
	int32_t x184 = INT32_MAX;

	t45 = (x181==((x182^x183)/x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x186 = 8300660U;

	t46 = (x185==((x186^x187)/x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	int8_t x190 = 12;
	static int8_t x191 = INT8_MAX;
	int32_t x192 = -1;
	int32_t t47 = -1011;

	t47 = (x189==((x190^x191)/x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x194 = 42U;
	int16_t x195 = INT16_MIN;
	int64_t x196 = 525743862659LL;

	t48 = (x193==((x194^x195)/x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = INT64_MIN;
	static volatile uint8_t x200 = 5U;
	volatile int32_t t49 = -861685486;

	t49 = (x197==((x198^x199)/x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -10;
	static volatile int16_t x202 = -1;
	volatile int16_t x203 = INT16_MIN;
	int32_t t50 = 152210318;

	t50 = (x201==((x202^x203)/x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	uint32_t x206 = 302075U;
	int8_t x207 = INT8_MIN;
	static volatile int32_t t51 = -50367;

	t51 = (x205==((x206^x207)/x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x210 = INT32_MAX;
	int16_t x211 = 1;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = -21104361;

	t52 = (x209==((x210^x211)/x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	uint64_t x216 = UINT64_MAX;
	volatile int32_t t53 = -317;

	t53 = (x213==((x214^x215)/x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	int64_t x218 = INT64_MAX;
	int64_t x219 = -1LL;
	int32_t t54 = 731;

	t54 = (x217==((x218^x219)/x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x221 = -1;
	int64_t x223 = INT64_MAX;
	volatile int8_t x224 = INT8_MIN;
	volatile int32_t t55 = 497;

	t55 = (x221==((x222^x223)/x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 29U;
	int32_t x226 = INT32_MIN;
	int32_t x228 = INT32_MAX;
	int32_t t56 = -18616282;

	t56 = (x225==((x226^x227)/x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x229 = UINT16_MAX;
	uint64_t x230 = 3801664975773951000LLU;
	uint8_t x232 = 98U;
	volatile int32_t t57 = -187554251;

	t57 = (x229==((x230^x231)/x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = 22;
	int8_t x234 = INT8_MIN;
	volatile int16_t x235 = -1;
	volatile int16_t x236 = INT16_MAX;
	volatile int32_t t58 = 1953;

	t58 = (x233==((x234^x235)/x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MIN;
	int32_t x239 = -1;
	uint64_t x240 = 4472740630230LLU;
	static volatile int32_t t59 = 164754;

	t59 = (x237==((x238^x239)/x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = -1;
	static volatile int16_t x243 = -1;
	uint64_t x244 = UINT64_MAX;
	volatile int32_t t60 = 15453;

	t60 = (x241==((x242^x243)/x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x245 = 6LL;
	volatile int8_t x246 = INT8_MIN;
	volatile int16_t x247 = -1;
	int32_t t61 = 7616;

	t61 = (x245==((x246^x247)/x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x250 = UINT32_MAX;
	static volatile int16_t x251 = -1;
	static uint8_t x252 = 9U;
	volatile int32_t t62 = -3157471;

	t62 = (x249==((x250^x251)/x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MAX;
	int64_t x255 = -1LL;
	int16_t x256 = 1753;

	t63 = (x253==((x254^x255)/x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 269134691452611630LLU;
	int8_t x259 = INT8_MAX;
	uint8_t x260 = UINT8_MAX;

	t64 = (x257==((x258^x259)/x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 5088068782101781838LLU;
	volatile int64_t x262 = 939849510LL;
	int16_t x264 = INT16_MIN;
	int32_t t65 = 22868877;

	t65 = (x261==((x262^x263)/x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = INT64_MIN;
	volatile int64_t x266 = 99883069881LL;
	int16_t x267 = -1;
	static int32_t t66 = 32;

	t66 = (x265==((x266^x267)/x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = -266;
	uint8_t x271 = UINT8_MAX;
	uint8_t x272 = 3U;
	static int32_t t67 = -82;

	t67 = (x269==((x270^x271)/x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 756U;
	int8_t x274 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	static int32_t t68 = -6945;

	t68 = (x273==((x274^x275)/x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	uint32_t x280 = 80276U;
	volatile int32_t t69 = -878347248;

	t69 = (x277==((x278^x279)/x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 1044453013652879553LLU;
	static volatile int32_t x282 = 50421;
	static int64_t x283 = -1LL;
	int32_t t70 = 4208;

	t70 = (x281==((x282^x283)/x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	int32_t x287 = -1;
	int16_t x288 = INT16_MAX;
	int32_t t71 = -61;

	t71 = (x285==((x286^x287)/x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 1834944618203007LL;
	int8_t x290 = 1;
	int64_t x291 = -23726074500911LL;
	int16_t x292 = -1;
	int32_t t72 = 20805730;

	t72 = (x289==((x290^x291)/x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	int8_t x294 = -1;
	int32_t x295 = INT32_MIN;
	volatile uint16_t x296 = 57U;
	static volatile int32_t t73 = -231114264;

	t73 = (x293==((x294^x295)/x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 7U;
	static int32_t x298 = INT32_MIN;
	int64_t x299 = -229406699LL;
	int8_t x300 = -1;

	t74 = (x297==((x298^x299)/x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = 6;
	uint8_t x303 = 5U;
	int16_t x304 = INT16_MAX;
	int32_t t75 = -5096968;

	t75 = (x301==((x302^x303)/x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 27;
	uint32_t x306 = 24709859U;
	int64_t x307 = INT64_MIN;

	t76 = (x305==((x306^x307)/x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x309 = UINT16_MAX;
	int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MAX;
	uint32_t x312 = UINT32_MAX;

	t77 = (x309==((x310^x311)/x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 0;
	int16_t x314 = INT16_MAX;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t78 = -94;

	t78 = (x313==((x314^x315)/x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = 15709880451LLU;
	int8_t x320 = 12;
	int32_t t79 = -431133;

	t79 = (x317==((x318^x319)/x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x322 = 0U;
	volatile uint64_t x323 = 229572LLU;
	uint16_t x324 = 1034U;
	static int32_t t80 = 51;

	t80 = (x321==((x322^x323)/x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = INT64_MIN;
	int32_t x327 = 64581;
	volatile uint64_t x328 = 496879228946LLU;
	int32_t t81 = -3;

	t81 = (x325==((x326^x327)/x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x330 = -1LL;
	uint32_t x332 = UINT32_MAX;
	int32_t t82 = -9940;

	t82 = (x329==((x330^x331)/x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MIN;
	uint32_t x335 = 12U;
	static volatile int32_t t83 = 1;

	t83 = (x333==((x334^x335)/x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = -207259609323902880LL;
	static uint16_t x338 = UINT16_MAX;
	int8_t x340 = INT8_MAX;
	volatile int32_t t84 = 202430680;

	t84 = (x337==((x338^x339)/x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	static int8_t x344 = INT8_MIN;
	static volatile int32_t t85 = 231;

	t85 = (x341==((x342^x343)/x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	int16_t x346 = -7044;
	volatile int32_t x347 = INT32_MIN;

	t86 = (x345==((x346^x347)/x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MAX;
	uint16_t x352 = 6U;

	t87 = (x349==((x350^x351)/x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	int64_t x354 = 440195286LL;
	int16_t x355 = 255;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t88 = 459224;

	t88 = (x353==((x354^x355)/x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	volatile int16_t x359 = INT16_MIN;
	int8_t x360 = INT8_MIN;

	t89 = (x357==((x358^x359)/x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	uint32_t x362 = 110807U;
	static uint32_t x364 = 44442369U;
	int32_t t90 = 215;

	t90 = (x361==((x362^x363)/x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = 14;
	int8_t x366 = INT8_MIN;
	int64_t x367 = 139754679628824LL;
	static uint16_t x368 = 1210U;

	t91 = (x365==((x366^x367)/x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = -15664;
	int64_t x371 = -33599867054961LL;
	volatile int16_t x372 = INT16_MIN;
	int32_t t92 = -3437;

	t92 = (x369==((x370^x371)/x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = UINT64_MAX;
	int32_t x374 = INT32_MIN;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = -63902830;

	t93 = (x373==((x374^x375)/x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x377 = 0U;
	static volatile int16_t x378 = -699;
	int8_t x379 = -10;
	int16_t x380 = 6;
	static volatile int32_t t94 = -433726379;

	t94 = (x377==((x378^x379)/x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x381 = 6790008090LLU;
	int64_t x382 = INT64_MAX;
	static int16_t x383 = INT16_MAX;
	int8_t x384 = INT8_MIN;
	int32_t t95 = 187;

	t95 = (x381==((x382^x383)/x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int16_t x386 = 20;
	volatile uint8_t x388 = UINT8_MAX;
	int32_t t96 = 133;

	t96 = (x385==((x386^x387)/x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MIN;
	static int32_t t97 = 45;

	t97 = (x389==((x390^x391)/x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	static uint32_t x395 = 47U;
	int32_t x396 = 2;
	static volatile int32_t t98 = 2;

	t98 = (x393==((x394^x395)/x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = 6LL;
	static volatile int16_t x398 = -1;
	int8_t x399 = -1;
	uint16_t x400 = 14256U;
	volatile int32_t t99 = -854235;

	t99 = (x397==((x398^x399)/x400));

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

