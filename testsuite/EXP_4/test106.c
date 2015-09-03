#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
int8_t x21 = 1;
uint32_t x24 = UINT32_MAX;
int8_t x29 = -1;
static int8_t x31 = 21;
uint64_t x37 = UINT64_MAX;
volatile uint8_t x43 = 7U;
uint64_t x49 = 8162615904LLU;
static int32_t t9 = 1;
int16_t x57 = INT16_MIN;
uint8_t x67 = 21U;
uint64_t t12 = 410257467382040879LLU;
uint32_t x80 = 1U;
uint32_t x81 = UINT32_MAX;
volatile int8_t x100 = 26;
int8_t x102 = INT8_MIN;
volatile int8_t x107 = INT8_MAX;
volatile uint32_t x108 = 1160U;
int8_t x113 = INT8_MIN;
int32_t x114 = 0;
uint32_t x116 = UINT32_MAX;
static volatile int32_t t23 = 99;
int16_t x123 = -1;
static uint32_t t24 = 47069U;
static int16_t x126 = 14727;
int16_t x128 = INT16_MAX;
static uint32_t x129 = UINT32_MAX;
int8_t x130 = INT8_MIN;
int16_t x137 = -1;
volatile int64_t x141 = -1LL;
static int32_t t30 = 103;
static volatile uint8_t x151 = 1U;
volatile int32_t t31 = -46775;
uint64_t x158 = 3442907703547LLU;
int64_t x160 = 7110731161069LL;
static int64_t x165 = INT64_MIN;
int8_t x168 = INT8_MIN;
int8_t x172 = INT8_MIN;
static uint16_t x178 = 178U;
static int64_t t39 = -51015810958LL;
int64_t x195 = INT64_MIN;
static volatile uint8_t x197 = 55U;
int8_t x198 = INT8_MIN;
static int16_t x199 = 97;
uint16_t x201 = UINT16_MAX;
int64_t x206 = -1LL;
int16_t x218 = -1;
int64_t x219 = -440784448LL;
uint16_t x222 = 20589U;
volatile int8_t x223 = -1;
int16_t x225 = 31;
uint64_t x226 = UINT64_MAX;
static int64_t x228 = INT64_MIN;
uint64_t x237 = UINT64_MAX;
static int8_t x238 = -1;
static int32_t x244 = INT32_MAX;
static uint64_t t51 = 482LLU;
int16_t x258 = INT16_MIN;
int32_t x259 = -181;
volatile int16_t x262 = INT16_MIN;
volatile uint8_t x264 = 45U;
uint32_t x273 = UINT32_MAX;
static int8_t x274 = INT8_MAX;
volatile uint32_t t56 = UINT32_MAX;
uint32_t x283 = UINT32_MAX;
static int32_t t57 = 12603;
uint32_t x292 = 160070U;
static int8_t x295 = INT8_MIN;
int8_t x312 = INT8_MAX;
static volatile uint64_t x314 = 16851964LLU;
uint16_t x316 = 0U;
int16_t x318 = INT16_MIN;
int32_t t66 = 3723;
int32_t x333 = -58384;
static int32_t x339 = -1;
static uint32_t x341 = 3U;
volatile uint32_t x343 = 836U;
int64_t x365 = INT64_MIN;
int16_t x375 = -2;
int16_t x376 = INT16_MIN;
volatile uint64_t t72 = 4828353338697LLU;
static int64_t t75 = INT64_MAX;
volatile int32_t t81 = 1229;
static volatile int16_t x427 = INT16_MAX;
static int64_t x428 = -1LL;
static int8_t x430 = 1;
int8_t x439 = INT8_MIN;
volatile int64_t t87 = -12275626544175LL;
static uint8_t x452 = UINT8_MAX;
int8_t x457 = INT8_MAX;
volatile uint64_t x463 = UINT64_MAX;
uint8_t x465 = UINT8_MAX;
int64_t x466 = 411492LL;
static volatile int64_t x474 = -14095896084LL;
uint64_t x476 = 3LLU;
static int64_t x480 = -1LL;
int16_t x481 = -1;
static int32_t t96 = 0;
int32_t t97 = -709063;
uint32_t x489 = UINT32_MAX;
static uint16_t x493 = 6010U;


void f0(void) {
	uint16_t x1 = 1U;
	uint64_t x3 = 5580LLU;
	int64_t x4 = -1109976530LL;
	int32_t t0 = 1072;

	t0 = (x1-(x2<(x3+x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	static uint8_t x6 = 14U;
	static uint64_t x7 = UINT64_MAX;
	uint64_t x8 = UINT64_MAX;
	int64_t t1 = -5976311518726LL;

	t1 = (x5-(x6<(x7+x8)));

	if (t1 != -2LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x22 = INT16_MIN;
	uint32_t x23 = 12U;
	volatile int32_t t2 = -13;

	t2 = (x21-(x22<(x23+x24)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x30 = 5804713791LLU;
	uint64_t x32 = UINT64_MAX;
	static int32_t t3 = 326;

	t3 = (x29-(x30<(x31+x32)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x33 = -6789392;
	volatile uint32_t x34 = 69809794U;
	volatile int16_t x35 = INT16_MAX;
	static uint16_t x36 = UINT16_MAX;
	int32_t t4 = -41;

	t4 = (x33-(x34<(x35+x36)));

	if (t4 != -6789392) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x38 = 520U;
	int16_t x39 = -1;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t5 = 1785720529772083LLU;

	t5 = (x37-(x38<(x39+x40)));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x41 = 804774LLU;
	int16_t x42 = INT16_MAX;
	volatile int64_t x44 = INT64_MIN;
	volatile uint64_t t6 = 18919564719LLU;

	t6 = (x41-(x42<(x43+x44)));

	if (t6 != 804774LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x45 = INT32_MAX;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = INT16_MAX;
	volatile int64_t x48 = INT64_MIN;
	static int32_t t7 = INT32_MAX;

	t7 = (x45-(x46<(x47+x48)));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x50 = UINT32_MAX;
	volatile int16_t x51 = INT16_MIN;
	static int16_t x52 = INT16_MAX;
	uint64_t t8 = 2LLU;

	t8 = (x49-(x50<(x51+x52)));

	if (t8 != 8162615904LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x53 = 1056U;
	int8_t x54 = -1;
	uint32_t x55 = UINT32_MAX;
	int64_t x56 = -1LL;

	t9 = (x53-(x54<(x55+x56)));

	if (t9 != 1055) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x58 = 43;
	int64_t x59 = -1LL;
	uint8_t x60 = 1U;
	int32_t t10 = -249593;

	t10 = (x57-(x58<(x59+x60)));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MIN;
	int8_t x62 = -1;
	static volatile int16_t x63 = -1;
	volatile uint64_t x64 = 1LLU;
	static volatile int32_t t11 = -118494073;

	t11 = (x61-(x62<(x63+x64)));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = 183492046LLU;
	uint16_t x66 = UINT16_MAX;
	uint64_t x68 = 77194854778664LLU;

	t12 = (x65-(x66<(x67+x68)));

	if (t12 != 183492045LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x69 = INT64_MIN;
	static int8_t x70 = INT8_MIN;
	static uint32_t x71 = 1035U;
	static uint16_t x72 = UINT16_MAX;
	volatile int64_t t13 = INT64_MIN;

	t13 = (x69-(x70<(x71+x72)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = -1;
	static int8_t x74 = -1;
	uint8_t x75 = UINT8_MAX;
	int64_t x76 = INT64_MIN;
	static volatile int32_t t14 = -551658379;

	t14 = (x73-(x74<(x75+x76)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MIN;
	static int32_t x78 = -93874;
	volatile int32_t x79 = INT32_MIN;
	int32_t t15 = INT32_MIN;

	t15 = (x77-(x78<(x79+x80)));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x82 = INT32_MIN;
	uint64_t x83 = 428050440978856311LLU;
	int16_t x84 = -2;
	static volatile uint32_t t16 = UINT32_MAX;

	t16 = (x81-(x82<(x83+x84)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = 1U;
	volatile int8_t x86 = INT8_MIN;
	uint64_t x87 = UINT64_MAX;
	uint8_t x88 = UINT8_MAX;
	int32_t t17 = 13;

	t17 = (x85-(x86<(x87+x88)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x97 = UINT64_MAX;
	uint16_t x98 = UINT16_MAX;
	volatile int16_t x99 = INT16_MIN;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x97-(x98<(x99+x100)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x101 = INT16_MIN;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t19 = -668;

	t19 = (x101-(x102<(x103+x104)));

	if (t19 != -32769) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x105 = -1LL;
	int8_t x106 = INT8_MIN;
	volatile int64_t t20 = -4022092741539075LL;

	t20 = (x105-(x106<(x107+x108)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x109 = 1U;
	static uint16_t x110 = 3U;
	volatile int64_t x111 = INT64_MIN;
	volatile uint16_t x112 = 893U;
	int32_t t21 = 6444;

	t21 = (x109-(x110<(x111+x112)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x115 = -1;
	static volatile int32_t t22 = 1875;

	t22 = (x113-(x114<(x115+x116)));

	if (t22 != -129) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = UINT8_MAX;
	static int8_t x118 = INT8_MIN;
	volatile int64_t x119 = -1LL;
	int32_t x120 = INT32_MIN;

	t23 = (x117-(x118<(x119+x120)));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x121 = 12294U;
	uint64_t x122 = 7238449777531751LLU;
	int64_t x124 = -1LL;

	t24 = (x121-(x122<(x123+x124)));

	if (t24 != 12293U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x125 = UINT32_MAX;
	int32_t x127 = -387121153;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (x125-(x126<(x127+x128)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x131 = 1U;
	uint32_t x132 = 114644423U;
	static volatile uint32_t t26 = UINT32_MAX;

	t26 = (x129-(x130<(x131+x132)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = 61U;
	int16_t x134 = -1;
	uint8_t x135 = UINT8_MAX;
	static uint64_t x136 = 569376807508LLU;
	int32_t t27 = 295;

	t27 = (x133-(x134<(x135+x136)));

	if (t27 != 61) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x138 = -19802633164LL;
	uint16_t x139 = 312U;
	uint16_t x140 = 1U;
	volatile int32_t t28 = -1;

	t28 = (x137-(x138<(x139+x140)));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x142 = INT64_MAX;
	uint64_t x143 = 0LLU;
	static volatile int32_t x144 = INT32_MIN;
	volatile int64_t t29 = 2510212654215100LL;

	t29 = (x141-(x142<(x143+x144)));

	if (t29 != -2LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = UINT8_MAX;
	static int32_t x146 = 120549000;
	int8_t x147 = 0;
	uint16_t x148 = 28841U;

	t30 = (x145-(x146<(x147+x148)));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x149 = UINT16_MAX;
	uint32_t x150 = 24U;
	int64_t x152 = -1LL;

	t31 = (x149-(x150<(x151+x152)));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = -1;
	static int64_t x154 = INT64_MAX;
	uint32_t x155 = 14590724U;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t32 = 411667;

	t32 = (x153-(x154<(x155+x156)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MAX;
	int64_t x159 = INT64_MIN;
	int32_t t33 = 845723565;

	t33 = (x157-(x158<(x159+x160)));

	if (t33 != 32766) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x166 = INT64_MAX;
	uint32_t x167 = 6962553U;
	volatile int64_t t34 = INT64_MIN;

	t34 = (x165-(x166<(x167+x168)));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = UINT32_MAX;
	uint64_t x170 = 1865262344261LLU;
	int8_t x171 = 18;
	uint32_t t35 = 110944526U;

	t35 = (x169-(x170<(x171+x172)));

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 4U;
	int64_t x174 = INT64_MIN;
	static int16_t x175 = 1;
	volatile int64_t x176 = -448998LL;
	volatile int32_t t36 = -294;

	t36 = (x173-(x174<(x175+x176)));

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x177 = -1;
	int8_t x179 = 0;
	int16_t x180 = INT16_MIN;
	volatile int32_t t37 = 65;

	t37 = (x177-(x178<(x179+x180)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x185 = INT64_MIN;
	int64_t x186 = -1LL;
	static uint8_t x187 = UINT8_MAX;
	uint64_t x188 = 163926401LLU;
	static volatile int64_t t38 = INT64_MIN;

	t38 = (x185-(x186<(x187+x188)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = -66635502460LL;
	int8_t x190 = -62;
	static int16_t x191 = -20;
	static int16_t x192 = -1;

	t39 = (x189-(x190<(x191+x192)));

	if (t39 != -66635502461LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x193 = 1U;
	volatile uint32_t x194 = 51963344U;
	int8_t x196 = INT8_MAX;
	volatile int32_t t40 = -1;

	t40 = (x193-(x194<(x195+x196)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x200 = -13;
	static int32_t t41 = 933671320;

	t41 = (x197-(x198<(x199+x200)));

	if (t41 != 54) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x202 = UINT64_MAX;
	int64_t x203 = -1LL;
	static uint32_t x204 = 22U;
	int32_t t42 = -126304;

	t42 = (x201-(x202<(x203+x204)));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x205 = 0U;
	int32_t x207 = -1;
	volatile int16_t x208 = -2;
	static volatile int32_t t43 = -19945308;

	t43 = (x205-(x206<(x207+x208)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x217 = -1930423LL;
	static uint8_t x220 = UINT8_MAX;
	volatile int64_t t44 = -70132LL;

	t44 = (x217-(x218<(x219+x220)));

	if (t44 != -1930423LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x221 = UINT64_MAX;
	int16_t x224 = 2;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = (x221-(x222<(x223+x224)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x227 = UINT8_MAX;
	int32_t t46 = 53695313;

	t46 = (x225-(x226<(x227+x228)));

	if (t46 != 31) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = INT32_MIN;
	static int16_t x230 = -1;
	int8_t x231 = INT8_MIN;
	static int32_t x232 = -1;
	int32_t t47 = INT32_MIN;

	t47 = (x229-(x230<(x231+x232)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x239 = INT64_MIN;
	static uint64_t x240 = 40115437835261799LLU;
	uint64_t t48 = UINT64_MAX;

	t48 = (x237-(x238<(x239+x240)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = -14;
	static uint32_t x243 = 16263900U;
	static int32_t t49 = 123;

	t49 = (x241-(x242<(x243+x244)));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x249 = -10509;
	volatile uint8_t x250 = 11U;
	volatile uint64_t x251 = 211LLU;
	int16_t x252 = -1;
	static volatile int32_t t50 = 0;

	t50 = (x249-(x250<(x251+x252)));

	if (t50 != -10510) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x253 = 1056215973LLU;
	static int32_t x254 = INT32_MAX;
	volatile uint32_t x255 = 98U;
	int32_t x256 = 0;

	t51 = (x253-(x254<(x255+x256)));

	if (t51 != 1056215973LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x257 = -1;
	volatile int64_t x260 = -1LL;
	int32_t t52 = 1;

	t52 = (x257-(x258<(x259+x260)));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x261 = UINT16_MAX;
	uint16_t x263 = 909U;
	volatile int32_t t53 = 79;

	t53 = (x261-(x262<(x263+x264)));

	if (t53 != 65534) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x265 = 65503892U;
	int64_t x266 = -25692203LL;
	volatile int16_t x267 = -1;
	int32_t x268 = -1;
	uint32_t t54 = 151U;

	t54 = (x265-(x266<(x267+x268)));

	if (t54 != 65503891U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x269 = UINT8_MAX;
	int8_t x270 = 43;
	static uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MAX;
	int32_t t55 = 0;

	t55 = (x269-(x270<(x271+x272)));

	if (t55 != 254) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x275 = 1;
	int32_t x276 = -733426;

	t56 = (x273-(x274<(x275+x276)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x281 = UINT8_MAX;
	volatile uint64_t x282 = UINT64_MAX;
	static volatile uint8_t x284 = 2U;

	t57 = (x281-(x282<(x283+x284)));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = -1;
	int32_t x287 = -11143;
	int64_t x288 = 236LL;
	volatile int32_t t58 = INT32_MIN;

	t58 = (x285-(x286<(x287+x288)));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x289 = -1;
	int8_t x290 = INT8_MAX;
	uint8_t x291 = 27U;
	static int32_t t59 = -5910679;

	t59 = (x289-(x290<(x291+x292)));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x293 = 5536U;
	uint16_t x294 = 7397U;
	uint64_t x296 = 120927LLU;
	volatile uint32_t t60 = 31273647U;

	t60 = (x293-(x294<(x295+x296)));

	if (t60 != 5535U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x297 = -9;
	static uint8_t x298 = 1U;
	volatile int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MAX;
	int32_t t61 = -4921629;

	t61 = (x297-(x298<(x299+x300)));

	if (t61 != -9) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = 2684;
	volatile int16_t x306 = 135;
	volatile int64_t x307 = INT64_MAX;
	static uint16_t x308 = 0U;
	int32_t t62 = -11560372;

	t62 = (x305-(x306<(x307+x308)));

	if (t62 != 2683) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x309 = 1;
	int64_t x310 = INT64_MAX;
	volatile uint8_t x311 = 6U;
	volatile int32_t t63 = -5322;

	t63 = (x309-(x310<(x311+x312)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x313 = -1;
	int16_t x315 = -1;
	int32_t t64 = -37573;

	t64 = (x313-(x314<(x315+x316)));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x317 = INT32_MIN;
	int16_t x319 = -1;
	uint64_t x320 = 136342236033294010LLU;
	volatile int32_t t65 = INT32_MIN;

	t65 = (x317-(x318<(x319+x320)));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x321 = 6230U;
	uint16_t x322 = UINT16_MAX;
	volatile int64_t x323 = -32147969527400LL;
	int8_t x324 = -40;

	t66 = (x321-(x322<(x323+x324)));

	if (t66 != 6230) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x334 = 27018928U;
	uint64_t x335 = UINT64_MAX;
	uint8_t x336 = 117U;
	static volatile int32_t t67 = 611775;

	t67 = (x333-(x334<(x335+x336)));

	if (t67 != -58384) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x337 = INT64_MIN;
	int64_t x338 = -1LL;
	int8_t x340 = -35;
	int64_t t68 = INT64_MIN;

	t68 = (x337-(x338<(x339+x340)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x342 = 12U;
	int32_t x344 = INT32_MAX;
	static uint32_t t69 = 8302477U;

	t69 = (x341-(x342<(x343+x344)));

	if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x349 = UINT8_MAX;
	volatile uint8_t x350 = 0U;
	int64_t x351 = INT64_MIN;
	int16_t x352 = INT16_MAX;
	int32_t t70 = 53;

	t70 = (x349-(x350<(x351+x352)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x366 = -1;
	int16_t x367 = 1;
	volatile int64_t x368 = INT64_MIN;
	int64_t t71 = INT64_MIN;

	t71 = (x365-(x366<(x367+x368)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x373 = 1505771589725503496LLU;
	uint8_t x374 = 11U;

	t72 = (x373-(x374<(x375+x376)));

	if (t72 != 1505771589725503496LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x377 = 1U;
	uint16_t x378 = 1U;
	int32_t x379 = INT32_MIN;
	static int64_t x380 = INT64_MAX;
	volatile int32_t t73 = -31495;

	t73 = (x377-(x378<(x379+x380)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x381 = -764;
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = INT64_MIN;
	uint32_t x384 = 1387594U;
	int32_t t74 = -839;

	t74 = (x381-(x382<(x383+x384)));

	if (t74 != -764) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x385 = INT64_MAX;
	static volatile int32_t x386 = -57;
	int8_t x387 = -5;
	int8_t x388 = INT8_MIN;

	t75 = (x385-(x386<(x387+x388)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x389 = INT64_MAX;
	volatile uint32_t x390 = UINT32_MAX;
	volatile int16_t x391 = 398;
	uint64_t x392 = UINT64_MAX;
	volatile int64_t t76 = INT64_MAX;

	t76 = (x389-(x390<(x391+x392)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x393 = 4070312U;
	int16_t x394 = INT16_MAX;
	uint32_t x395 = UINT32_MAX;
	int16_t x396 = INT16_MAX;
	static uint32_t t77 = 27U;

	t77 = (x393-(x394<(x395+x396)));

	if (t77 != 4070312U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x397 = INT64_MAX;
	int32_t x398 = -1;
	uint64_t x399 = 2346179176LLU;
	int64_t x400 = INT64_MIN;
	volatile int64_t t78 = INT64_MAX;

	t78 = (x397-(x398<(x399+x400)));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x401 = 103;
	uint64_t x402 = 372LLU;
	static volatile int64_t x403 = -1LL;
	uint8_t x404 = 0U;
	int32_t t79 = -212417;

	t79 = (x401-(x402<(x403+x404)));

	if (t79 != 102) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x405 = INT64_MIN;
	int32_t x406 = INT32_MAX;
	uint8_t x407 = 1U;
	int16_t x408 = INT16_MAX;
	int64_t t80 = INT64_MIN;

	t80 = (x405-(x406<(x407+x408)));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x409 = -1;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = 69U;
	static uint32_t x412 = 43U;

	t81 = (x409-(x410<(x411+x412)));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x417 = INT8_MIN;
	int32_t x418 = 51184442;
	uint16_t x419 = UINT16_MAX;
	int32_t x420 = -2164;
	volatile int32_t t82 = -1;

	t82 = (x417-(x418<(x419+x420)));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x421 = -5187110569002212LL;
	volatile uint64_t x422 = 3428856584221765894LLU;
	static int64_t x423 = INT64_MIN;
	static uint8_t x424 = 2U;
	volatile int64_t t83 = 2LL;

	t83 = (x421-(x422<(x423+x424)));

	if (t83 != -5187110569002213LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x425 = INT32_MIN;
	int32_t x426 = INT32_MAX;
	volatile int32_t t84 = INT32_MIN;

	t84 = (x425-(x426<(x427+x428)));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x429 = 8242121159503LL;
	uint16_t x431 = 1632U;
	volatile uint64_t x432 = 475274534190692925LLU;
	volatile int64_t t85 = -873652178LL;

	t85 = (x429-(x430<(x431+x432)));

	if (t85 != 8242121159502LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x437 = INT8_MAX;
	int8_t x438 = INT8_MIN;
	int8_t x440 = INT8_MAX;
	int32_t t86 = -439912577;

	t86 = (x437-(x438<(x439+x440)));

	if (t86 != 126) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x441 = -1LL;
	int64_t x442 = -12215LL;
	int32_t x443 = -3;
	int16_t x444 = INT16_MIN;

	t87 = (x441-(x442<(x443+x444)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x445 = INT16_MIN;
	int64_t x446 = 1311849185297LL;
	uint8_t x447 = UINT8_MAX;
	uint64_t x448 = 17374098633LLU;
	volatile int32_t t88 = 19742;

	t88 = (x445-(x446<(x447+x448)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x449 = -1;
	static uint8_t x450 = 57U;
	int32_t x451 = INT32_MIN;
	volatile int32_t t89 = -905;

	t89 = (x449-(x450<(x451+x452)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x453 = 274U;
	uint8_t x454 = UINT8_MAX;
	int16_t x455 = INT16_MAX;
	int64_t x456 = -540374251149LL;
	volatile int32_t t90 = 10;

	t90 = (x453-(x454<(x455+x456)));

	if (t90 != 274) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x458 = -6400960;
	volatile uint32_t x459 = UINT32_MAX;
	int8_t x460 = INT8_MIN;
	int32_t t91 = 6711;

	t91 = (x457-(x458<(x459+x460)));

	if (t91 != 126) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x461 = -323546042;
	uint16_t x462 = 18U;
	int16_t x464 = INT16_MIN;
	volatile int32_t t92 = 65028;

	t92 = (x461-(x462<(x463+x464)));

	if (t92 != -323546043) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x467 = INT64_MIN;
	uint32_t x468 = UINT32_MAX;
	int32_t t93 = -1050675;

	t93 = (x465-(x466<(x467+x468)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x473 = INT64_MIN;
	int16_t x475 = 36;
	volatile int64_t t94 = INT64_MIN;

	t94 = (x473-(x474<(x475+x476)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x477 = 0;
	int16_t x478 = INT16_MIN;
	uint64_t x479 = UINT64_MAX;
	volatile int32_t t95 = 73;

	t95 = (x477-(x478<(x479+x480)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x482 = -1;
	static uint32_t x483 = UINT32_MAX;
	volatile int32_t x484 = INT32_MAX;

	t96 = (x481-(x482<(x483+x484)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x485 = INT16_MIN;
	int32_t x486 = INT32_MAX;
	uint8_t x487 = UINT8_MAX;
	volatile int8_t x488 = 14;

	t97 = (x485-(x486<(x487+x488)));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x490 = UINT8_MAX;
	volatile uint32_t x491 = 6757478U;
	uint32_t x492 = 3061422U;
	volatile uint32_t t98 = 23U;

	t98 = (x489-(x490<(x491+x492)));

	if (t98 != 4294967294U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x494 = INT16_MIN;
	static uint8_t x495 = 8U;
	static volatile uint8_t x496 = 0U;
	int32_t t99 = -4596;

	t99 = (x493-(x494<(x495+x496)));

	if (t99 != 6009) { NG(); } else { ; }
	
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

