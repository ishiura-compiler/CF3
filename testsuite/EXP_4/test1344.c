#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 248;
int16_t x8 = -390;
int16_t x12 = 1;
int16_t x14 = INT16_MIN;
static int32_t x15 = INT32_MAX;
volatile int8_t x16 = INT8_MAX;
int32_t t3 = -5695;
uint8_t x19 = 19U;
int64_t t4 = 11837LL;
volatile int64_t x35 = -1LL;
int16_t x42 = INT16_MAX;
int32_t x44 = INT32_MIN;
int8_t x45 = INT8_MIN;
static int16_t x50 = -1;
volatile int32_t t12 = 206938406;
volatile int32_t x67 = 22169;
static volatile int64_t x68 = -16692158577391786LL;
int8_t x71 = -56;
int64_t t17 = 0LL;
uint32_t x80 = 769U;
int16_t x82 = INT16_MIN;
int64_t x84 = -1LL;
uint8_t x86 = UINT8_MAX;
uint64_t x89 = UINT64_MAX;
static int64_t x91 = INT64_MIN;
int32_t x100 = INT32_MIN;
int64_t t23 = 19539483561811480LL;
int16_t x102 = -13;
static uint8_t x105 = 45U;
int16_t x107 = INT16_MIN;
int64_t x117 = -1LL;
int32_t x120 = INT32_MIN;
int32_t x121 = INT32_MIN;
int32_t x126 = INT32_MIN;
int32_t x130 = INT32_MIN;
static volatile int32_t x133 = INT32_MAX;
static volatile int32_t t31 = -14;
int16_t x139 = INT16_MIN;
int32_t x140 = 33286;
uint64_t t32 = 7520510200615LLU;
int16_t x142 = 15845;
int64_t x152 = -251LL;
int32_t x153 = 23;
int8_t x155 = INT8_MIN;
static int8_t x156 = -56;
int32_t t39 = -50824593;
int64_t t40 = -65228695780350199LL;
volatile int64_t t41 = 315512704699LL;
uint16_t x183 = 4U;
static volatile int32_t t43 = 447;
int32_t x186 = INT32_MIN;
int16_t x201 = INT16_MIN;
int16_t x213 = INT16_MAX;
static int8_t x219 = INT8_MIN;
volatile int32_t t51 = 505831;
int64_t x222 = 680162420592LL;
int32_t x238 = INT32_MIN;
uint8_t x239 = UINT8_MAX;
int16_t x246 = INT16_MIN;
int16_t x249 = INT16_MIN;
int8_t x250 = INT8_MIN;
int32_t x252 = INT32_MIN;
static uint8_t x259 = 7U;
int8_t x264 = 0;
uint64_t x266 = 508033683581589123LLU;
int16_t x272 = INT16_MIN;
uint32_t x273 = 417766737U;
volatile uint32_t t65 = 832489U;
int64_t t66 = 85465209063LL;
int64_t t67 = -3494LL;
int32_t x295 = -1;
static volatile int16_t x297 = -7012;
uint32_t x299 = 0U;
volatile uint64_t t73 = 9414LLU;
uint64_t x309 = 37599306506583LLU;
int64_t t75 = -8412422340702751LL;
uint32_t x318 = 183U;
volatile int8_t x319 = INT8_MIN;
volatile uint32_t x322 = UINT32_MAX;
static int64_t x325 = INT64_MAX;
int8_t x336 = INT8_MIN;
static volatile uint8_t x337 = 49U;
static volatile int32_t x341 = -1475821;
uint8_t x347 = 3U;
int32_t t83 = -10833;
uint32_t x350 = 64191057U;
volatile int64_t x351 = INT64_MAX;
static int8_t x352 = INT8_MIN;
uint16_t x358 = 85U;
volatile int32_t x361 = -1;
uint32_t x367 = 485871U;
uint64_t t88 = 129478293LLU;
int16_t x376 = -1;
volatile int32_t x378 = 1331831;
int32_t x380 = INT32_MIN;
volatile int64_t x381 = INT64_MIN;
uint32_t x389 = 35076U;
int64_t x393 = INT64_MIN;
int64_t x406 = -10LL;
static int32_t x411 = -1;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int32_t x3 = -24;
	int32_t x4 = 108;
	int32_t t0 = 23;

	t0 = (x1%(x2^(x3==x4)));

	if (t0 != -64) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	static uint16_t x6 = UINT16_MAX;
	uint8_t x7 = 2U;
	volatile int32_t t1 = -2826;

	t1 = (x5%(x6^(x7==x8)));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 13LLU;
	int32_t x10 = -1405;
	int64_t x11 = -1LL;
	static uint64_t t2 = 3302855213LLU;

	t2 = (x9%(x10^(x11==x12)));

	if (t2 != 13LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;

	t3 = (x13%(x14^(x15==x16)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int8_t x18 = INT8_MAX;
	int8_t x20 = -3;

	t4 = (x17%(x18^(x19==x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1060623466U;
	static uint32_t x22 = 59594333U;
	volatile int8_t x23 = INT8_MAX;
	static int64_t x24 = -11800LL;
	uint32_t t5 = 77531243U;

	t5 = (x21%(x22^(x23==x24)));

	if (t5 != 47519805U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -30;
	uint16_t x26 = UINT16_MAX;
	static int64_t x27 = INT64_MIN;
	int32_t x28 = -1;
	volatile int32_t t6 = -24767;

	t6 = (x25%(x26^(x27==x28)));

	if (t6 != -30) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	volatile int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = 24457056816267LLU;
	volatile uint32_t t7 = 13U;

	t7 = (x29%(x30^(x31==x32)));

	if (t7 != 127U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 24498;
	int16_t x34 = INT16_MAX;
	volatile uint64_t x36 = 2LLU;
	volatile int32_t t8 = -105245332;

	t8 = (x33%(x34^(x35==x36)));

	if (t8 != 24498) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x37 = 1306131609911280LLU;
	volatile int16_t x38 = INT16_MAX;
	int16_t x39 = 5;
	uint16_t x40 = 29614U;
	uint64_t t9 = 3079339813535033LLU;

	t9 = (x37%(x38^(x39==x40)));

	if (t9 != 32009LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 1;
	int8_t x43 = -19;
	int32_t t10 = -376470;

	t10 = (x41%(x42^(x43==x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x46 = INT8_MIN;
	static int16_t x47 = 2;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -24010;

	t11 = (x45%(x46^(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = -1LL;

	t12 = (x49%(x50^(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 342435978LLU;
	uint32_t x54 = 1U;
	int32_t x55 = -1;
	int16_t x56 = INT16_MIN;
	static volatile uint64_t t13 = 247124LLU;

	t13 = (x53%(x54^(x55==x56)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	static uint64_t x58 = 4321271372617535LLU;
	int32_t x59 = 244215;
	int16_t x60 = 3291;
	uint64_t t14 = 53913LLU;

	t14 = (x57%(x58^(x59==x60)));

	if (t14 != 3557855377912235LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	int64_t x66 = INT64_MIN;
	int64_t t15 = 20LL;

	t15 = (x65%(x66^(x67==x68)));

	if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x69 = 4840U;
	int16_t x70 = INT16_MAX;
	uint32_t x72 = 9U;
	volatile int32_t t16 = -172215942;

	t16 = (x69%(x70^(x71==x72)));

	if (t16 != 4840) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -1LL;
	volatile int64_t x74 = 245LL;
	uint64_t x75 = 8149441199859LLU;
	volatile int8_t x76 = 28;

	t17 = (x73%(x74^(x75==x76)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MIN;
	static volatile int32_t x78 = INT32_MIN;
	static int64_t x79 = 2314472LL;
	volatile int64_t t18 = -38778211497826LL;

	t18 = (x77%(x78^(x79==x80)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = -1;
	volatile int8_t x83 = -1;
	static volatile int32_t t19 = -1785385;

	t19 = (x81%(x82^(x83==x84)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 15U;
	volatile int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MAX;
	int32_t t20 = 3;

	t20 = (x85%(x86^(x87==x88)));

	if (t20 != 15) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x90 = 29226501274LLU;
	uint32_t x92 = UINT32_MAX;
	uint64_t t21 = 27796045502715808LLU;

	t21 = (x89%(x90^(x91==x92)));

	if (t21 != 10861868369LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	volatile int32_t x94 = 49698;
	int16_t x95 = -5;
	volatile int32_t x96 = -59;
	volatile int32_t t22 = 7662063;

	t22 = (x93%(x94^(x95==x96)));

	if (t22 != -33068) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	static int64_t x99 = -101438917293517LL;

	t23 = (x97%(x98^(x99==x100)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	int16_t x103 = INT16_MAX;
	int8_t x104 = INT8_MIN;
	volatile int64_t t24 = -3646LL;

	t24 = (x101%(x102^(x103==x104)));

	if (t24 != 7LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = -1LL;
	int16_t x108 = 784;
	int64_t t25 = -4384526120390793300LL;

	t25 = (x105%(x106^(x107==x108)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = 1;
	int8_t x111 = INT8_MIN;
	uint8_t x112 = 13U;
	volatile int32_t t26 = -3932;

	t26 = (x109%(x110^(x111==x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x118 = 22006;
	int16_t x119 = INT16_MIN;
	static int64_t t27 = -7898832LL;

	t27 = (x117%(x118^(x119==x120)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x122 = 4853;
	int16_t x123 = -1;
	int16_t x124 = INT16_MIN;
	volatile int32_t t28 = -7258013;

	t28 = (x121%(x122^(x123==x124)));

	if (t28 != -2030) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 940U;
	static int64_t x127 = INT64_MAX;
	uint8_t x128 = UINT8_MAX;
	uint32_t t29 = 1U;

	t29 = (x125%(x126^(x127==x128)));

	if (t29 != 940U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -1LL;
	int64_t x131 = 341LL;
	int32_t x132 = INT32_MAX;
	volatile int64_t t30 = 22919283764393LL;

	t30 = (x129%(x130^(x131==x132)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x134 = -1;
	uint64_t x135 = 246LLU;
	volatile int32_t x136 = INT32_MAX;

	t31 = (x133%(x134^(x135==x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x137 = -1LL;
	volatile uint64_t x138 = UINT64_MAX;

	t32 = (x137%(x138^(x139==x140)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = 319083563437296LL;
	int64_t x143 = -15245494LL;
	int64_t x144 = INT64_MIN;
	volatile int64_t t33 = 613215382380901196LL;

	t33 = (x141%(x142^(x143==x144)));

	if (t33 != 2981LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x145 = 2U;
	int16_t x146 = -1;
	volatile int16_t x147 = INT16_MAX;
	uint16_t x148 = 229U;
	int32_t t34 = 1630;

	t34 = (x145%(x146^(x147==x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = -10;
	uint32_t x150 = 359754U;
	static int64_t x151 = -1LL;
	volatile uint32_t t35 = 3U;

	t35 = (x149%(x150^(x151==x152)));

	if (t35 != 224034U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x154 = INT8_MIN;
	volatile int32_t t36 = 1;

	t36 = (x153%(x154^(x155==x156)));

	if (t36 != 23) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -1LL;
	volatile uint32_t x158 = UINT32_MAX;
	static int64_t x159 = INT64_MIN;
	volatile int32_t x160 = INT32_MIN;
	volatile int64_t t37 = -1601207LL;

	t37 = (x157%(x158^(x159==x160)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	int64_t x162 = -1LL;
	static uint8_t x163 = 37U;
	static int8_t x164 = INT8_MIN;
	int64_t t38 = -2366009758797491644LL;

	t38 = (x161%(x162^(x163==x164)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = INT8_MAX;
	volatile int8_t x166 = -1;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = -49;

	t39 = (x165%(x166^(x167==x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -1LL;
	uint8_t x170 = 1U;
	int8_t x171 = -1;
	volatile uint8_t x172 = 2U;

	t40 = (x169%(x170^(x171==x172)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -147047LL;
	int16_t x174 = INT16_MIN;
	static uint8_t x175 = UINT8_MAX;
	uint8_t x176 = 17U;

	t41 = (x173%(x174^(x175==x176)));

	if (t41 != -15975LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x177 = INT32_MAX;
	int8_t x178 = -7;
	uint64_t x179 = 1721387769035121LLU;
	static uint8_t x180 = UINT8_MAX;
	volatile int32_t t42 = 99419;

	t42 = (x177%(x178^(x179==x180)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = -1;
	uint16_t x182 = 37U;
	int32_t x184 = INT32_MAX;

	t43 = (x181%(x182^(x183==x184)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	int64_t x187 = INT64_MIN;
	int32_t x188 = 48;
	volatile int32_t t44 = 887;

	t44 = (x185%(x186^(x187==x188)));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = 55U;
	int8_t x190 = INT8_MAX;
	uint16_t x191 = 142U;
	int64_t x192 = INT64_MIN;
	uint32_t t45 = 689450U;

	t45 = (x189%(x190^(x191==x192)));

	if (t45 != 55U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MAX;
	static int32_t x194 = INT32_MIN;
	uint8_t x195 = UINT8_MAX;
	volatile int32_t x196 = INT32_MIN;
	int32_t t46 = -2063;

	t46 = (x193%(x194^(x195==x196)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MAX;
	static uint32_t x198 = 120U;
	int8_t x199 = -1;
	int16_t x200 = -399;
	uint32_t t47 = 4U;

	t47 = (x197%(x198^(x199==x200)));

	if (t47 != 7U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x202 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	int16_t x204 = -1;
	int32_t t48 = -5647240;

	t48 = (x201%(x202^(x203==x204)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	volatile uint64_t x210 = UINT64_MAX;
	int64_t x211 = 7290508845613LL;
	int16_t x212 = INT16_MAX;
	volatile uint64_t t49 = 8728193989376998819LLU;

	t49 = (x209%(x210^(x211==x212)));

	if (t49 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x214 = -961;
	int32_t x215 = INT32_MIN;
	int64_t x216 = -2820932891157781LL;
	volatile int32_t t50 = 931245897;

	t50 = (x213%(x214^(x215==x216)));

	if (t50 != 93) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = -1;
	volatile int16_t x218 = 10669;
	uint8_t x220 = 125U;

	t51 = (x217%(x218^(x219==x220)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -800998452700LL;
	int32_t x223 = -1;
	int32_t x224 = 2626248;
	volatile int64_t t52 = -147730025174403109LL;

	t52 = (x221%(x222^(x223==x224)));

	if (t52 != -120836032108LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = -1LL;
	int8_t x226 = INT8_MAX;
	int32_t x227 = INT32_MIN;
	int32_t x228 = -14376600;
	int64_t t53 = 5873676971LL;

	t53 = (x225%(x226^(x227==x228)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x229 = 3LL;
	int16_t x230 = INT16_MIN;
	static int64_t x231 = INT64_MAX;
	uint32_t x232 = UINT32_MAX;
	int64_t t54 = -933089LL;

	t54 = (x229%(x230^(x231==x232)));

	if (t54 != 3LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = 605121166;
	int8_t x234 = -13;
	int32_t x235 = INT32_MAX;
	int8_t x236 = -38;
	static volatile int32_t t55 = -7;

	t55 = (x233%(x234^(x235==x236)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x237 = -1;
	static int16_t x240 = INT16_MIN;
	volatile int32_t t56 = 7;

	t56 = (x237%(x238^(x239==x240)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	int32_t x242 = -1;
	volatile int8_t x243 = -1;
	static int32_t x244 = INT32_MAX;
	int32_t t57 = 332551;

	t57 = (x241%(x242^(x243==x244)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = UINT64_MAX;
	int64_t x247 = -2844614767654LL;
	int32_t x248 = 89334280;
	static uint64_t t58 = 112576LLU;

	t58 = (x245%(x246^(x247==x248)));

	if (t58 != 32767LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x251 = 6594993U;
	int32_t t59 = 919710;

	t59 = (x249%(x250^(x251==x252)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MIN;
	int8_t x254 = -1;
	static volatile uint8_t x255 = 110U;
	int8_t x256 = INT8_MIN;
	int32_t t60 = 161865266;

	t60 = (x253%(x254^(x255==x256)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = -1;
	int8_t x258 = -2;
	volatile uint32_t x260 = 1814917U;
	int32_t t61 = -258698;

	t61 = (x257%(x258^(x259==x260)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x261 = 584U;
	int64_t x262 = -1LL;
	int8_t x263 = INT8_MAX;
	volatile int64_t t62 = 293150314LL;

	t62 = (x261%(x262^(x263==x264)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x265 = UINT64_MAX;
	static int64_t x267 = INT64_MAX;
	static int64_t x268 = 37589459801LL;
	volatile uint64_t t63 = 39480738945LLU;

	t63 = (x265%(x266^(x267==x268)));

	if (t63 != 157531464772343187LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = INT16_MIN;
	volatile int32_t x270 = -1;
	volatile int64_t x271 = -1LL;
	volatile int32_t t64 = -1053992;

	t64 = (x269%(x270^(x271==x272)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x274 = 17U;
	volatile int32_t x275 = INT32_MAX;
	int16_t x276 = INT16_MAX;

	t65 = (x273%(x274^(x275==x276)));

	if (t65 != 16U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x277 = 8U;
	int64_t x278 = 6377890634LL;
	uint16_t x279 = 3U;
	uint64_t x280 = 311LLU;

	t66 = (x277%(x278^(x279==x280)));

	if (t66 != 8LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = -1LL;
	volatile int64_t x282 = 364552LL;
	int16_t x283 = -1;
	static int32_t x284 = INT32_MAX;

	t67 = (x281%(x282^(x283==x284)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = UINT16_MAX;
	uint8_t x286 = 77U;
	int16_t x287 = INT16_MIN;
	volatile int16_t x288 = -1;
	volatile int32_t t68 = -1981;

	t68 = (x285%(x286^(x287==x288)));

	if (t68 != 8) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x289 = 88567985LLU;
	uint64_t x290 = UINT64_MAX;
	int64_t x291 = -1LL;
	static int32_t x292 = INT32_MAX;
	uint64_t t69 = 11LLU;

	t69 = (x289%(x290^(x291==x292)));

	if (t69 != 88567985LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x293 = -1LL;
	int16_t x294 = -1;
	uint64_t x296 = UINT64_MAX;
	static int64_t t70 = 155629LL;

	t70 = (x293%(x294^(x295==x296)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x298 = 159832196;
	int8_t x300 = -5;
	int32_t t71 = -556445121;

	t71 = (x297%(x298^(x299==x300)));

	if (t71 != -7012) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = 348180816632643LL;
	int32_t x302 = INT32_MIN;
	static int16_t x303 = -1;
	uint64_t x304 = 34040LLU;
	static volatile int64_t t72 = -3LL;

	t72 = (x301%(x302^(x303==x304)));

	if (t72 != 702847811LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x305 = UINT64_MAX;
	uint16_t x306 = UINT16_MAX;
	volatile int16_t x307 = INT16_MIN;
	volatile int16_t x308 = -1;

	t73 = (x305%(x306^(x307==x308)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MAX;
	volatile uint32_t x312 = UINT32_MAX;
	uint64_t t74 = 723LLU;

	t74 = (x309%(x310^(x311==x312)));

	if (t74 != 37599306506583LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x313 = UINT16_MAX;
	static int64_t x314 = -1LL;
	uint64_t x315 = UINT64_MAX;
	int8_t x316 = -2;

	t75 = (x313%(x314^(x315==x316)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x317 = 4337459535694LLU;
	uint16_t x320 = 0U;
	uint64_t t76 = 1186616328LLU;

	t76 = (x317%(x318^(x319==x320)));

	if (t76 != 169LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x321 = -1;
	uint64_t x323 = 1978399LLU;
	int32_t x324 = INT32_MIN;
	volatile uint32_t t77 = 893U;

	t77 = (x321%(x322^(x323==x324)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x326 = INT32_MAX;
	int64_t x327 = -1362LL;
	uint16_t x328 = 14125U;
	volatile int64_t t78 = 6LL;

	t78 = (x325%(x326^(x327==x328)));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x329 = -1905;
	int8_t x330 = -47;
	int64_t x331 = -1LL;
	int32_t x332 = -1;
	int32_t t79 = 102804;

	t79 = (x329%(x330^(x331==x332)));

	if (t79 != -33) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x333 = INT8_MAX;
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = 31;
	volatile int32_t t80 = -503;

	t80 = (x333%(x334^(x335==x336)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x338 = 54;
	volatile int32_t x339 = INT32_MIN;
	uint32_t x340 = 31706118U;
	volatile int32_t t81 = 56;

	t81 = (x337%(x338^(x339==x340)));

	if (t81 != 49) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x342 = -6;
	volatile int8_t x343 = INT8_MIN;
	int8_t x344 = -1;
	static volatile int32_t t82 = -122803;

	t82 = (x341%(x342^(x343==x344)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = 172U;
	int32_t x346 = INT32_MIN;
	int8_t x348 = 26;

	t83 = (x345%(x346^(x347==x348)));

	if (t83 != 172) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = -1LL;
	volatile int64_t t84 = 207921LL;

	t84 = (x349%(x350^(x351==x352)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = -1LL;
	int32_t x354 = INT32_MAX;
	int32_t x355 = 8505505;
	int32_t x356 = -1;
	volatile int64_t t85 = -169121681742LL;

	t85 = (x353%(x354^(x355==x356)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = -2;
	int16_t x359 = INT16_MIN;
	int8_t x360 = -1;
	int32_t t86 = 16038847;

	t86 = (x357%(x358^(x359==x360)));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x362 = -1;
	int8_t x363 = -1;
	static int64_t x364 = INT64_MIN;
	int32_t t87 = -3103579;

	t87 = (x361%(x362^(x363==x364)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x365 = INT64_MIN;
	uint64_t x366 = UINT64_MAX;
	int16_t x368 = -1;

	t88 = (x365%(x366^(x367==x368)));

	if (t88 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = -6;
	static volatile int16_t x370 = 2850;
	uint32_t x371 = UINT32_MAX;
	uint64_t x372 = 4487091037600247164LLU;
	int32_t t89 = -2077539;

	t89 = (x369%(x370^(x371==x372)));

	if (t89 != -6) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = 20198LL;
	uint8_t x374 = 74U;
	int32_t x375 = -1;
	volatile int64_t t90 = 1806839LL;

	t90 = (x373%(x374^(x375==x376)));

	if (t90 != 23LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 30U;
	uint32_t x379 = UINT32_MAX;
	volatile int32_t t91 = 1935658;

	t91 = (x377%(x378^(x379==x380)));

	if (t91 != 30) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x382 = 91457046035136LL;
	int8_t x383 = 0;
	int16_t x384 = -48;
	volatile int64_t t92 = 1LL;

	t92 = (x381%(x382^(x383==x384)));

	if (t92 != -20401257345344LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MAX;
	int64_t x386 = INT64_MAX;
	static int16_t x387 = INT16_MIN;
	int32_t x388 = -1;
	volatile int64_t t93 = -385448487LL;

	t93 = (x385%(x386^(x387==x388)));

	if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x390 = INT8_MAX;
	int32_t x391 = INT32_MAX;
	int8_t x392 = -1;
	static volatile uint32_t t94 = 56U;

	t94 = (x389%(x390^(x391==x392)));

	if (t94 != 24U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x394 = INT8_MIN;
	uint8_t x395 = UINT8_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int64_t t95 = 1LL;

	t95 = (x393%(x394^(x395==x396)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x397 = -1059258128469LL;
	int64_t x398 = 26LL;
	static uint8_t x399 = 30U;
	volatile int8_t x400 = INT8_MIN;
	int64_t t96 = 37900393921LL;

	t96 = (x397%(x398^(x399==x400)));

	if (t96 != -21LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = INT32_MIN;
	int16_t x402 = -1;
	int32_t x403 = 495117827;
	int8_t x404 = INT8_MIN;
	int32_t t97 = 33380;

	t97 = (x401%(x402^(x403==x404)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x405 = 330129U;
	static volatile uint32_t x407 = 4U;
	volatile int64_t x408 = 56429LL;
	volatile int64_t t98 = 59635452687LL;

	t98 = (x405%(x406^(x407==x408)));

	if (t98 != 9LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = 13292;
	uint64_t x410 = 195306773307839LLU;
	int16_t x412 = INT16_MIN;
	volatile uint64_t t99 = 29765LLU;

	t99 = (x409%(x410^(x411==x412)));

	if (t99 != 13292LLU) { NG(); } else { ; }
	
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

