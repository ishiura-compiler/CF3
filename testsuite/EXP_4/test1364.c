#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = -298613494749LL;
static uint16_t x14 = 88U;
int8_t x15 = -1;
int32_t x31 = INT32_MAX;
uint32_t x36 = 5182515U;
int64_t t8 = -4LL;
volatile int32_t t9 = -698974;
volatile uint8_t x45 = UINT8_MAX;
static int32_t x52 = INT32_MAX;
volatile uint32_t x55 = 1494786U;
int64_t x63 = -772161724342240LL;
uint32_t x80 = UINT32_MAX;
int8_t x83 = INT8_MIN;
static int32_t x87 = INT32_MIN;
volatile int32_t t24 = 387;
int32_t x101 = 482846453;
uint64_t x102 = 38LLU;
volatile uint64_t t25 = 1672269217629440525LLU;
static int8_t x106 = -36;
int64_t t27 = 1LL;
static volatile int16_t x113 = -1;
uint32_t x117 = UINT32_MAX;
int8_t x124 = 8;
static uint32_t t30 = 3367U;
int16_t x142 = INT16_MIN;
int8_t x144 = INT8_MIN;
static int64_t x145 = INT64_MAX;
uint8_t x148 = UINT8_MAX;
volatile int8_t x151 = INT8_MAX;
uint8_t x153 = 65U;
uint32_t x156 = UINT32_MAX;
static int16_t x159 = INT16_MIN;
static volatile int8_t x166 = -1;
int64_t x171 = -1LL;
int32_t x172 = INT32_MIN;
int64_t x177 = -442578790LL;
volatile int64_t t44 = 3505724805284786689LL;
int32_t x186 = INT32_MIN;
int16_t x194 = -73;
int32_t x199 = INT32_MIN;
static uint64_t x200 = 179969296544671LLU;
int32_t x201 = INT32_MAX;
int64_t x204 = INT64_MIN;
int32_t t50 = -150153120;
volatile int32_t x206 = INT32_MIN;
int32_t x216 = -1;
volatile int64_t t52 = -1000978LL;
volatile uint16_t x218 = UINT16_MAX;
static volatile int64_t t53 = -2983239693LL;
static volatile uint32_t x222 = UINT32_MAX;
volatile int32_t x239 = INT32_MIN;
int32_t x248 = INT32_MAX;
volatile uint32_t t60 = UINT32_MAX;
static uint16_t x249 = 33U;
uint16_t x252 = 32765U;
int32_t t61 = 66659;
int64_t x258 = -1LL;
int64_t t63 = -46209518478LL;
int64_t x261 = -1LL;
static uint8_t x262 = 3U;
int8_t x267 = INT8_MIN;
static volatile int8_t x268 = INT8_MIN;
int64_t x271 = 43837230067344LL;
uint8_t x274 = 4U;
int32_t x277 = INT32_MIN;
int64_t x281 = 1LL;
int16_t x282 = INT16_MIN;
int64_t t69 = -65562LL;
int32_t x285 = 3643078;
int8_t x287 = -49;
int16_t x289 = -1;
volatile int32_t x295 = INT32_MAX;
static int32_t x317 = INT32_MIN;
int32_t t77 = 6;
static int8_t x323 = INT8_MIN;
static int8_t x325 = INT8_MAX;
uint16_t x328 = UINT16_MAX;
int32_t x333 = 2694;
volatile int32_t t83 = 11;
volatile int64_t x345 = -1LL;
uint64_t t85 = 53552LLU;
int16_t x358 = 249;
static int64_t x359 = INT64_MAX;
int32_t t87 = 0;
int64_t x369 = -1LL;
int32_t x372 = -1;
volatile uint8_t x376 = 14U;
static int64_t x378 = INT64_MIN;
int64_t t91 = -882690266142787427LL;
uint32_t x385 = UINT32_MAX;
uint64_t x389 = UINT64_MAX;
int16_t x392 = 22;
uint8_t x393 = 82U;
int16_t x395 = INT16_MIN;
volatile int64_t x400 = -37569485774LL;
int64_t t96 = -102571391LL;
uint8_t x401 = UINT8_MAX;
uint16_t x402 = UINT16_MAX;
int8_t x404 = -4;
static volatile uint32_t t98 = UINT32_MAX;
static int16_t x410 = INT16_MAX;


void f0(void) {
	int32_t x1 = -1;
	static volatile int8_t x2 = -1;
	static volatile int32_t x3 = -1529;
	static int8_t x4 = -1;
	volatile int32_t t0 = -37;

	t0 = (x1|(x2+(x3<x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static int32_t x6 = INT32_MIN;
	uint16_t x7 = 751U;
	int32_t t1 = -22926;

	t1 = (x5|(x6+(x7<x8)));

	if (t1 != -2147483393) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile int8_t x10 = 0;
	static volatile int8_t x11 = INT8_MAX;
	volatile uint8_t x12 = 0U;
	int32_t t2 = 0;

	t2 = (x9|(x10+(x11<x12)));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int8_t x16 = INT8_MAX;
	static int64_t t3 = 94894321601812111LL;

	t3 = (x13|(x14+(x15<x16)));

	if (t3 != -9223372036854775719LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1042;
	uint16_t x18 = UINT16_MAX;
	int8_t x19 = INT8_MAX;
	int64_t x20 = -1LL;
	volatile int32_t t4 = 0;

	t4 = (x17|(x18+(x19<x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 32850U;
	int32_t x22 = INT32_MAX;
	uint8_t x23 = UINT8_MAX;
	static uint8_t x24 = 0U;
	uint32_t t5 = 595U;

	t5 = (x21|(x22+(x23<x24)));

	if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 10U;
	int32_t x26 = -2777;
	volatile int32_t x27 = INT32_MIN;
	int8_t x28 = 27;
	volatile int32_t t6 = 7769;

	t6 = (x25|(x26+(x27<x28)));

	if (t6 != -2774) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile int64_t x30 = INT64_MAX;
	volatile int8_t x32 = 3;
	volatile int64_t t7 = 587LL;

	t7 = (x29|(x30+(x31<x32)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1980086784870304LL;
	static uint32_t x34 = 13107876U;
	static uint32_t x35 = UINT32_MAX;

	t8 = (x33|(x34+(x35<x36)));

	if (t8 != -1980086780151068LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	int32_t x38 = -148;
	volatile int32_t x39 = INT32_MAX;
	static volatile int8_t x40 = -1;

	t9 = (x37|(x38+(x39<x40)));

	if (t9 != -20) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	uint32_t x42 = 64936U;
	int64_t x43 = -28820788424182080LL;
	uint16_t x44 = UINT16_MAX;
	volatile int64_t t10 = 43534383LL;

	t10 = (x41|(x42+(x43<x44)));

	if (t10 != -9223372036854710871LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 1088U;
	volatile uint32_t x47 = 15U;
	int8_t x48 = INT8_MIN;
	uint32_t t11 = 36960011U;

	t11 = (x45|(x46+(x47<x48)));

	if (t11 != 1279U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	int16_t x50 = -171;
	int8_t x51 = INT8_MIN;
	static int32_t t12 = 6536731;

	t12 = (x49|(x50+(x51<x52)));

	if (t12 != -170) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint16_t x54 = 9U;
	int32_t x56 = -76356;
	int64_t t13 = -82659785998749304LL;

	t13 = (x53|(x54+(x55<x56)));

	if (t13 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -8;
	int32_t x58 = INT32_MIN;
	static int32_t x59 = INT32_MIN;
	uint32_t x60 = 35816U;
	volatile int32_t t14 = 1485;

	t14 = (x57|(x58+(x59<x60)));

	if (t14 != -8) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile uint8_t x62 = 1U;
	static int64_t x64 = -1LL;
	int32_t t15 = 150094;

	t15 = (x61|(x62+(x63<x64)));

	if (t15 != -32766) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	volatile int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MIN;
	int16_t x68 = -1;
	volatile int32_t t16 = 1;

	t16 = (x65|(x66+(x67<x68)));

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	static int64_t x70 = 27199062LL;
	static int32_t x71 = INT32_MAX;
	uint8_t x72 = 3U;
	volatile int64_t t17 = 105333164297510LL;

	t17 = (x69|(x70+(x71<x72)));

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int8_t x74 = -1;
	int64_t x75 = 4028128546643LL;
	int16_t x76 = -305;
	int32_t t18 = -2123;

	t18 = (x73|(x74+(x75<x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -8;
	int64_t x78 = INT64_MIN;
	int64_t x79 = -149364843LL;
	volatile int64_t t19 = -53628LL;

	t19 = (x77|(x78+(x79<x80)));

	if (t19 != -7LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 8U;
	int32_t x82 = INT32_MIN;
	int64_t x84 = 1437LL;
	int32_t t20 = 24;

	t20 = (x81|(x82+(x83<x84)));

	if (t20 != -2147483639) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x85 = -9;
	static int32_t x86 = INT32_MIN;
	volatile int8_t x88 = -1;
	volatile int32_t t21 = 1802440;

	t21 = (x85|(x86+(x87<x88)));

	if (t21 != -9) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x89 = 223051517666135LLU;
	int8_t x90 = 0;
	int64_t x91 = -617LL;
	static int8_t x92 = 13;
	volatile uint64_t t22 = 13762917LLU;

	t22 = (x89|(x90+(x91<x92)));

	if (t22 != 223051517666135LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	volatile int32_t x94 = INT32_MAX;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = -1;
	volatile int64_t t23 = 4481216369012LL;

	t23 = (x93|(x94+(x95<x96)));

	if (t23 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int16_t x98 = 60;
	volatile int16_t x99 = -599;
	uint32_t x100 = 224977823U;

	t24 = (x97|(x98+(x99<x100)));

	if (t24 != -2147483588) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x103 = UINT64_MAX;
	int64_t x104 = INT64_MIN;

	t25 = (x101|(x102+(x103<x104)));

	if (t25 != 482846455LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 13389U;
	int64_t x107 = -1LL;
	volatile int8_t x108 = 0;
	int32_t t26 = -54471;

	t26 = (x105|(x106+(x107<x108)));

	if (t26 != -35) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 0U;
	static int64_t x110 = -1LL;
	int32_t x111 = INT32_MIN;
	uint32_t x112 = 1897038U;

	t27 = (x109|(x110+(x111<x112)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 56U;
	int32_t x115 = INT32_MAX;
	int32_t x116 = INT32_MIN;
	int32_t t28 = 4211210;

	t28 = (x113|(x114+(x115<x116)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = -1;
	int8_t x119 = -5;
	volatile uint64_t x120 = UINT64_MAX;
	uint32_t t29 = UINT32_MAX;

	t29 = (x117|(x118+(x119<x120)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	uint32_t x122 = UINT32_MAX;
	static volatile int8_t x123 = INT8_MIN;

	t30 = (x121|(x122+(x123<x124)));

	if (t30 != 127U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = 44332;
	int16_t x126 = INT16_MIN;
	uint64_t x127 = 51199239551628825LLU;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = 635233;

	t31 = (x125|(x126+(x127<x128)));

	if (t31 != -21204) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	volatile uint64_t x130 = 112751355264374LLU;
	int8_t x131 = INT8_MAX;
	uint64_t x132 = 747844368776676LLU;
	volatile uint64_t t32 = 183165LLU;

	t32 = (x129|(x130+(x131<x132)));

	if (t32 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -65880;
	int32_t x134 = INT32_MIN;
	volatile uint32_t x135 = 5U;
	int8_t x136 = -46;
	int32_t t33 = -9117;

	t33 = (x133|(x134+(x135<x136)));

	if (t33 != -65879) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 9945852060751LLU;
	int16_t x138 = INT16_MIN;
	int32_t x139 = 64315;
	int8_t x140 = INT8_MIN;
	uint64_t t34 = 4559484351956640529LLU;

	t34 = (x137|(x138+(x139<x140)));

	if (t34 != 18446744073709528143LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	uint16_t x143 = 16262U;
	int32_t t35 = -2552;

	t35 = (x141|(x142+(x143<x144)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = -2931206448565601LL;
	uint8_t x147 = 2U;
	static int64_t t36 = -446259916442LL;

	t36 = (x145|(x146+(x147<x148)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = 4085550801321LL;
	int32_t x150 = 29;
	static uint16_t x152 = UINT16_MAX;
	int64_t t37 = -1000989755750LL;

	t37 = (x149|(x150+(x151<x152)));

	if (t37 != 4085550801343LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x154 = -1;
	volatile int8_t x155 = -2;
	int32_t t38 = -7;

	t38 = (x153|(x154+(x155<x156)));

	if (t38 != 65) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 75101653;
	int64_t x158 = -2697554988957031552LL;
	int8_t x160 = INT8_MIN;
	volatile int64_t t39 = 6LL;

	t39 = (x157|(x158+(x159<x160)));

	if (t39 != -2697554988884035627LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 7932991284191LL;
	int64_t x162 = INT64_MAX;
	uint8_t x163 = 60U;
	int32_t x164 = INT32_MIN;
	int64_t t40 = INT64_MAX;

	t40 = (x161|(x162+(x163<x164)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 4009140U;
	uint32_t x167 = 1302U;
	uint16_t x168 = UINT16_MAX;
	volatile uint32_t t41 = 55083750U;

	t41 = (x165|(x166+(x167<x168)));

	if (t41 != 4009140U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	uint8_t x170 = 19U;
	int32_t t42 = -1460959;

	t42 = (x169|(x170+(x171<x172)));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	static uint8_t x174 = 93U;
	static int8_t x175 = 1;
	int8_t x176 = -1;
	static volatile int64_t t43 = -32871198739956696LL;

	t43 = (x173|(x174+(x175<x176)));

	if (t43 != -9223372036854775715LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 1U;
	static uint32_t x179 = UINT32_MAX;
	uint16_t x180 = 29863U;

	t44 = (x177|(x178+(x179<x180)));

	if (t44 != -442578789LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 943U;
	uint8_t x182 = 1U;
	int16_t x183 = 2;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 8414917;

	t45 = (x181|(x182+(x183<x184)));

	if (t45 != 943) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = UINT16_MAX;
	int32_t x187 = 1;
	volatile uint32_t x188 = 438633241U;
	int32_t t46 = -383481887;

	t46 = (x185|(x186+(x187<x188)));

	if (t46 != -2147418113) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int16_t x190 = INT16_MIN;
	static uint32_t x191 = 463623U;
	static int8_t x192 = -1;
	int32_t t47 = 10371427;

	t47 = (x189|(x190+(x191<x192)));

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -4035381821487LL;
	static volatile uint64_t x195 = 6963114942613LLU;
	uint8_t x196 = 52U;
	volatile int64_t t48 = 100333376311292LL;

	t48 = (x193|(x194+(x195<x196)));

	if (t48 != -9LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	uint8_t x198 = 2U;
	volatile int32_t t49 = 166108456;

	t49 = (x197|(x198+(x199<x200)));

	if (t49 != -2147483646) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x202 = -1;
	static int32_t x203 = INT32_MIN;

	t50 = (x201|(x202+(x203<x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 13U;
	int64_t x207 = 109876103342375LL;
	static volatile int8_t x208 = -2;
	volatile uint32_t t51 = 399053381U;

	t51 = (x205|(x206+(x207<x208)));

	if (t51 != 2147483661U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x213 = INT64_MAX;
	volatile int16_t x214 = -1;
	int8_t x215 = INT8_MAX;

	t52 = (x213|(x214+(x215<x216)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x217 = INT64_MIN;
	int64_t x219 = INT64_MAX;
	int16_t x220 = 14;

	t53 = (x217|(x218+(x219<x220)));

	if (t53 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MIN;
	int32_t x223 = -1;
	volatile uint16_t x224 = UINT16_MAX;
	uint32_t t54 = 1897631211U;

	t54 = (x221|(x222+(x223<x224)));

	if (t54 != 2147483648U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x225 = 8U;
	uint8_t x226 = 10U;
	static uint64_t x227 = 22260187189171088LLU;
	uint32_t x228 = 106216U;
	uint32_t t55 = 5560143U;

	t55 = (x225|(x226+(x227<x228)));

	if (t55 != 10U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = 30;
	uint32_t x230 = UINT32_MAX;
	static volatile int8_t x231 = INT8_MAX;
	int64_t x232 = -1LL;
	uint32_t t56 = UINT32_MAX;

	t56 = (x229|(x230+(x231<x232)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = 2147;
	uint16_t x234 = 10U;
	int8_t x235 = INT8_MAX;
	static int16_t x236 = -7350;
	volatile int32_t t57 = -51573;

	t57 = (x233|(x234+(x235<x236)));

	if (t57 != 2155) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = -37;
	static uint64_t x240 = UINT64_MAX;
	volatile int64_t t58 = 477747699530LL;

	t58 = (x237|(x238+(x239<x240)));

	if (t58 != -36LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x241 = INT16_MAX;
	volatile int64_t x242 = INT64_MAX;
	uint64_t x243 = UINT64_MAX;
	uint32_t x244 = UINT32_MAX;
	int64_t t59 = INT64_MAX;

	t59 = (x241|(x242+(x243<x244)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x245 = UINT32_MAX;
	uint8_t x246 = UINT8_MAX;
	int64_t x247 = -1LL;

	t60 = (x245|(x246+(x247<x248)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x250 = INT16_MAX;
	int8_t x251 = -1;

	t61 = (x249|(x250+(x251<x252)));

	if (t61 != 32801) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x253 = INT32_MAX;
	volatile uint64_t x254 = 15630755027849LLU;
	volatile uint32_t x255 = 2072970384U;
	int8_t x256 = INT8_MIN;
	static volatile uint64_t t62 = 38LLU;

	t62 = (x253|(x254+(x255<x256)));

	if (t62 != 15631533473791LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x257 = INT8_MIN;
	uint64_t x259 = UINT64_MAX;
	int64_t x260 = INT64_MIN;

	t63 = (x257|(x258+(x259<x260)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x263 = 1100924625282105LL;
	int16_t x264 = -1;
	volatile int64_t t64 = -1492201497989598LL;

	t64 = (x261|(x262+(x263<x264)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x265 = 1;
	uint16_t x266 = 397U;
	int32_t t65 = -14062609;

	t65 = (x265|(x266+(x267<x268)));

	if (t65 != 397) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = UINT64_MAX;
	int64_t x270 = -1LL;
	uint8_t x272 = 101U;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x269|(x270+(x271<x272)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x273 = 2U;
	static uint8_t x275 = 4U;
	volatile int32_t x276 = INT32_MIN;
	uint32_t t67 = 72457U;

	t67 = (x273|(x274+(x275<x276)));

	if (t67 != 6U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x278 = INT16_MAX;
	int32_t x279 = 18963869;
	uint8_t x280 = 5U;
	int32_t t68 = 6778049;

	t68 = (x277|(x278+(x279<x280)));

	if (t68 != -2147450881) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x283 = 51887U;
	volatile uint8_t x284 = 36U;

	t69 = (x281|(x282+(x283<x284)));

	if (t69 != -32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x286 = -1;
	uint8_t x288 = UINT8_MAX;
	int32_t t70 = 889;

	t70 = (x285|(x286+(x287<x288)));

	if (t70 != 3643078) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x290 = 21U;
	static volatile int16_t x291 = -888;
	int16_t x292 = -710;
	volatile int32_t t71 = 33726;

	t71 = (x289|(x290+(x291<x292)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = 27LLU;
	int64_t x294 = -1LL;
	int16_t x296 = INT16_MAX;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (x293|(x294+(x295<x296)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x301 = 118118U;
	volatile int16_t x302 = INT16_MIN;
	uint64_t x303 = UINT64_MAX;
	uint32_t x304 = 25310763U;
	static uint32_t t73 = 148U;

	t73 = (x301|(x302+(x303<x304)));

	if (t73 != 4294954342U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = -218813043370LL;
	static int8_t x306 = -1;
	volatile int16_t x307 = -1;
	uint16_t x308 = 10U;
	int64_t t74 = -197073327LL;

	t74 = (x305|(x306+(x307<x308)));

	if (t74 != -218813043370LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = INT32_MIN;
	static int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	volatile int16_t x312 = 13368;
	volatile int64_t t75 = 359555LL;

	t75 = (x309|(x310+(x311<x312)));

	if (t75 != -2147483647LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = INT8_MIN;
	static int32_t x314 = -37244460;
	int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MIN;
	volatile int32_t t76 = -411968299;

	t76 = (x313|(x314+(x315<x316)));

	if (t76 != -44) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x318 = 245U;
	int16_t x319 = 4;
	volatile int64_t x320 = -16309613285897686LL;

	t77 = (x317|(x318+(x319<x320)));

	if (t77 != -2147483403) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x321 = -1;
	static int64_t x322 = INT64_MIN;
	uint64_t x324 = 2402LLU;
	static volatile int64_t t78 = -1LL;

	t78 = (x321|(x322+(x323<x324)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x326 = INT16_MIN;
	static int64_t x327 = INT64_MIN;
	static int32_t t79 = 247;

	t79 = (x325|(x326+(x327<x328)));

	if (t79 != -32641) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x329 = INT64_MIN;
	int32_t x330 = -1;
	int16_t x331 = INT16_MIN;
	uint8_t x332 = 38U;
	volatile int64_t t80 = INT64_MIN;

	t80 = (x329|(x330+(x331<x332)));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x334 = 224727;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MIN;
	int32_t t81 = 250731584;

	t81 = (x333|(x334+(x335<x336)));

	if (t81 != 225239) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x337 = INT8_MAX;
	int64_t x338 = -185013730314534LL;
	int32_t x339 = INT32_MIN;
	volatile int8_t x340 = INT8_MIN;
	volatile int64_t t82 = -2651970LL;

	t82 = (x337|(x338+(x339<x340)));

	if (t82 != -185013730314497LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x341 = 0;
	int16_t x342 = 10041;
	int16_t x343 = -1;
	volatile int32_t x344 = INT32_MIN;

	t83 = (x341|(x342+(x343<x344)));

	if (t83 != 10041) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x346 = -55;
	static int8_t x347 = INT8_MAX;
	int16_t x348 = INT16_MIN;
	volatile int64_t t84 = -1196LL;

	t84 = (x345|(x346+(x347<x348)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x353 = INT16_MAX;
	static uint64_t x354 = 16274366004262474LLU;
	int64_t x355 = -1LL;
	int8_t x356 = INT8_MAX;

	t85 = (x353|(x354+(x355<x356)));

	if (t85 != 16274366004264959LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x357 = UINT32_MAX;
	volatile uint32_t x360 = 27732U;
	uint32_t t86 = UINT32_MAX;

	t86 = (x357|(x358+(x359<x360)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MAX;
	int16_t x362 = INT16_MIN;
	int32_t x363 = -37632287;
	uint64_t x364 = 74954199912761LLU;

	t87 = (x361|(x362+(x363<x364)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = 0;
	uint8_t x366 = 0U;
	int64_t x367 = INT64_MAX;
	int32_t x368 = -40;
	static int32_t t88 = -100632426;

	t88 = (x365|(x366+(x367<x368)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x370 = 5U;
	uint16_t x371 = 266U;
	int64_t t89 = 86864244017833LL;

	t89 = (x369|(x370+(x371<x372)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = INT8_MIN;
	static int16_t x374 = INT16_MIN;
	volatile uint64_t x375 = 1983359LLU;
	volatile int32_t t90 = -3106;

	t90 = (x373|(x374+(x375<x376)));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = -1;
	int16_t x379 = INT16_MAX;
	int8_t x380 = 0;

	t91 = (x377|(x378+(x379<x380)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = 1;
	int16_t x382 = 7492;
	int32_t x383 = INT32_MAX;
	int16_t x384 = -174;
	static int32_t t92 = -10507318;

	t92 = (x381|(x382+(x383<x384)));

	if (t92 != 7493) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x386 = 64558797LL;
	static int8_t x387 = INT8_MIN;
	volatile uint64_t x388 = 1175622LLU;
	static volatile int64_t t93 = 0LL;

	t93 = (x385|(x386+(x387<x388)));

	if (t93 != 4294967295LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x390 = -149;
	int16_t x391 = -477;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (x389|(x390+(x391<x392)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x394 = INT64_MAX;
	volatile uint64_t x396 = 23156390LLU;
	volatile int64_t t95 = INT64_MAX;

	t95 = (x393|(x394+(x395<x396)));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x397 = INT32_MAX;
	int64_t x398 = INT64_MIN;
	int32_t x399 = 31416;

	t96 = (x397|(x398+(x399<x400)));

	if (t96 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x403 = INT64_MIN;
	int32_t t97 = 7;

	t97 = (x401|(x402+(x403<x404)));

	if (t97 != 65791) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x405 = -1;
	uint32_t x406 = UINT32_MAX;
	static int16_t x407 = -1;
	static volatile int64_t x408 = -5LL;

	t98 = (x405|(x406+(x407<x408)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x409 = INT32_MIN;
	uint64_t x411 = 8832015143734LLU;
	volatile uint8_t x412 = 84U;
	int32_t t99 = -9671;

	t99 = (x409|(x410+(x411<x412)));

	if (t99 != -2147450881) { NG(); } else { ; }
	
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

