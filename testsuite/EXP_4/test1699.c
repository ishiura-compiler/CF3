#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
volatile int16_t x8 = -1;
static int16_t x10 = 549;
volatile int8_t x14 = INT8_MIN;
uint16_t x19 = 5513U;
static volatile int32_t t4 = -6875;
int32_t x24 = INT32_MAX;
int16_t x35 = -1;
int32_t t8 = -58226;
int32_t x39 = INT32_MAX;
int32_t x61 = -530318;
volatile uint64_t x64 = 156976LLU;
volatile int32_t t14 = 85847;
static uint64_t x70 = 3263493511783285639LLU;
volatile int32_t x74 = INT32_MIN;
uint32_t x83 = 11U;
static uint64_t x88 = 1885343774600LLU;
static int32_t t20 = 447;
uint32_t x89 = 28676U;
volatile int32_t x94 = INT32_MIN;
static int8_t x101 = INT8_MIN;
uint16_t x103 = 0U;
volatile int32_t t25 = -66;
volatile int32_t t26 = 1;
volatile int16_t x116 = INT16_MIN;
int64_t x119 = INT64_MAX;
volatile int32_t t28 = 296;
int32_t x122 = -119333606;
int8_t x130 = -1;
volatile int64_t x132 = -732327623566888LL;
int64_t x133 = 120082898537813LL;
int32_t t32 = -730;
int32_t x144 = 775820;
int8_t x151 = -3;
int16_t x173 = INT16_MAX;
uint32_t x179 = 211U;
uint16_t x181 = 460U;
uint8_t x183 = 2U;
volatile int64_t x185 = -1LL;
int8_t x186 = 0;
volatile int32_t x191 = INT32_MIN;
static volatile int32_t t45 = 2872;
volatile int8_t x197 = INT8_MIN;
volatile int32_t x203 = INT32_MIN;
int32_t t49 = 218008154;
volatile int16_t x219 = INT16_MIN;
volatile int8_t x228 = -7;
static int64_t x229 = -1LL;
static int32_t t54 = 2887;
volatile uint32_t x235 = 0U;
static int32_t t55 = 30;
int32_t x237 = INT32_MIN;
volatile int64_t x238 = -85806LL;
uint64_t x241 = UINT64_MAX;
int32_t x245 = INT32_MIN;
int32_t t58 = 79;
int32_t x252 = -7549;
volatile int32_t t59 = 29;
uint16_t x253 = 15U;
volatile int32_t t61 = 1937980;
int64_t x264 = INT64_MIN;
int16_t x277 = -1;
volatile int32_t t66 = 7365985;
volatile int32_t x283 = 56;
volatile uint16_t x285 = UINT16_MAX;
int64_t x291 = -1LL;
int64_t x299 = -1LL;
int32_t x302 = INT32_MIN;
int32_t t72 = -589324;
volatile int8_t x305 = 9;
volatile int8_t x309 = INT8_MIN;
int16_t x311 = 1;
int32_t t77 = 1063787113;
static uint32_t x349 = 4U;
uint32_t x350 = 2U;
uint64_t x351 = 457073326619LLU;
int32_t t81 = 910;
int8_t x353 = INT8_MAX;
volatile int32_t t83 = 3;
uint16_t x368 = 2161U;
int32_t t85 = 300;
int8_t x370 = INT8_MAX;
int32_t t86 = -213356755;
static uint32_t x375 = 109864U;
static uint16_t x376 = UINT16_MAX;
uint32_t x377 = 13804224U;
static int16_t x386 = INT16_MIN;
static int8_t x393 = 59;
volatile int32_t x394 = 0;
static int16_t x398 = INT16_MAX;
int16_t x409 = -1;
int32_t x413 = -1;
volatile int32_t t99 = -1947;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile int8_t x2 = -27;
	static volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = -63627;

	t0 = (x1<(x2+(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 0;
	int32_t x6 = 0;
	uint64_t x7 = UINT64_MAX;
	static volatile int32_t t1 = 11;

	t1 = (x5<(x6+(x7&x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	uint64_t x11 = UINT64_MAX;
	volatile int64_t x12 = INT64_MAX;
	volatile int32_t t2 = -10;

	t2 = (x9<(x10+(x11&x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	int64_t x15 = INT64_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -5572104;

	t3 = (x13<(x14+(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int8_t x18 = -1;
	int32_t x20 = 4285117;

	t4 = (x17<(x18+(x19&x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MAX;
	int8_t x23 = 10;
	static volatile int32_t t5 = -223;

	t5 = (x21<(x22+(x23&x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static volatile int8_t x26 = INT8_MIN;
	int16_t x27 = 28;
	int32_t x28 = INT32_MAX;
	static int32_t t6 = 76;

	t6 = (x25<(x26+(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x29 = UINT64_MAX;
	static int8_t x30 = -1;
	int8_t x31 = -3;
	int64_t x32 = 5495LL;
	volatile int32_t t7 = 245521982;

	t7 = (x29<(x30+(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	uint16_t x34 = UINT16_MAX;
	static int64_t x36 = -1LL;

	t8 = (x33<(x34+(x35&x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 36U;
	static volatile uint32_t x38 = 31007U;
	int64_t x40 = INT64_MIN;
	int32_t t9 = 1;

	t9 = (x37<(x38+(x39&x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 176U;
	int64_t x42 = -3644975LL;
	uint64_t x43 = UINT64_MAX;
	int64_t x44 = -1172422547362674LL;
	volatile int32_t t10 = 10;

	t10 = (x41<(x42+(x43&x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x49 = INT32_MAX;
	volatile int8_t x50 = INT8_MIN;
	int64_t x51 = INT64_MIN;
	volatile uint8_t x52 = 2U;
	int32_t t11 = 49;

	t11 = (x49<(x50+(x51&x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 1212325031LLU;
	int64_t x54 = -111878LL;
	uint64_t x55 = 3979LLU;
	static int16_t x56 = 122;
	int32_t t12 = 510354394;

	t12 = (x53<(x54+(x55&x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	uint64_t x58 = 872253625LLU;
	static int16_t x59 = INT16_MIN;
	int8_t x60 = -5;
	volatile int32_t t13 = -65;

	t13 = (x57<(x58+(x59&x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = -1LL;
	uint8_t x63 = UINT8_MAX;

	t14 = (x61<(x62+(x63&x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = UINT32_MAX;
	uint16_t x66 = 98U;
	static int32_t x67 = INT32_MIN;
	volatile int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 0;

	t15 = (x65<(x66+(x67&x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = 1;
	int64_t x71 = 1009834695100LL;
	uint8_t x72 = 49U;
	int32_t t16 = -601;

	t16 = (x69<(x70+(x71&x72)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = -168842363;
	static int32_t x75 = -2;
	volatile uint8_t x76 = 15U;
	static volatile int32_t t17 = -3005389;

	t17 = (x73<(x74+(x75&x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 99480301U;
	int8_t x78 = -1;
	uint8_t x79 = 77U;
	static uint64_t x80 = UINT64_MAX;
	volatile int32_t t18 = -110;

	t18 = (x77<(x78+(x79&x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 11LLU;
	volatile uint64_t x82 = 63005973321326LLU;
	volatile int64_t x84 = -1LL;
	volatile int32_t t19 = 2451104;

	t19 = (x81<(x82+(x83&x84)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MIN;
	static uint16_t x87 = 21465U;

	t20 = (x85<(x86+(x87&x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = 195U;
	int64_t x91 = INT64_MAX;
	int16_t x92 = INT16_MAX;
	volatile int32_t t21 = 22;

	t21 = (x89<(x90+(x91&x92)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = INT8_MAX;
	volatile uint32_t x95 = 0U;
	int64_t x96 = INT64_MIN;
	int32_t t22 = 2;

	t22 = (x93<(x94+(x95&x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x97 = 0U;
	int16_t x98 = -1;
	uint8_t x99 = 1U;
	volatile int64_t x100 = -77LL;
	int32_t t23 = -122381938;

	t23 = (x97<(x98+(x99&x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = 919LL;
	uint8_t x104 = 31U;
	int32_t t24 = 102287;

	t24 = (x101<(x102+(x103&x104)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	int8_t x106 = INT8_MAX;
	int16_t x107 = -1;
	uint64_t x108 = 198575322520061LLU;

	t25 = (x105<(x106+(x107&x108)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 26524693907LLU;
	static int8_t x110 = INT8_MIN;
	uint8_t x111 = 6U;
	int64_t x112 = 2651LL;

	t26 = (x109<(x110+(x111&x112)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = INT32_MAX;
	static volatile int8_t x114 = -1;
	uint16_t x115 = 1089U;
	int32_t t27 = 74;

	t27 = (x113<(x114+(x115&x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x117 = UINT32_MAX;
	uint16_t x118 = UINT16_MAX;
	static int8_t x120 = 9;

	t28 = (x117<(x118+(x119&x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = -1;
	int8_t x123 = INT8_MAX;
	int64_t x124 = -15915807LL;
	volatile int32_t t29 = -419;

	t29 = (x121<(x122+(x123&x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 10U;
	int32_t x126 = -172;
	int8_t x127 = INT8_MIN;
	uint8_t x128 = 2U;
	volatile int32_t t30 = 104603293;

	t30 = (x125<(x126+(x127&x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = INT16_MIN;
	int16_t x131 = INT16_MAX;
	static int32_t t31 = -563732;

	t31 = (x129<(x130+(x131&x132)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x134 = UINT64_MAX;
	uint64_t x135 = 111445455LLU;
	volatile uint64_t x136 = UINT64_MAX;

	t32 = (x133<(x134+(x135&x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	static uint8_t x138 = UINT8_MAX;
	int64_t x139 = -1LL;
	int64_t x140 = INT64_MIN;
	int32_t t33 = -287110;

	t33 = (x137<(x138+(x139&x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = 1412931348762204LLU;
	static uint32_t x142 = 76968U;
	int16_t x143 = -1;
	volatile int32_t t34 = -52;

	t34 = (x141<(x142+(x143&x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 7U;
	int32_t x146 = INT32_MAX;
	int64_t x147 = INT64_MIN;
	static volatile uint16_t x148 = 21739U;
	volatile int32_t t35 = 185080;

	t35 = (x145<(x146+(x147&x148)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = 6744U;
	volatile int64_t x150 = -29666306352899223LL;
	uint16_t x152 = 3U;
	volatile int32_t t36 = -53;

	t36 = (x149<(x150+(x151&x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 10U;
	int8_t x158 = -1;
	int8_t x159 = -1;
	uint16_t x160 = 0U;
	volatile int32_t t37 = -172179;

	t37 = (x157<(x158+(x159&x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x165 = -1;
	uint32_t x166 = 140U;
	uint64_t x167 = 275LLU;
	uint8_t x168 = UINT8_MAX;
	int32_t t38 = -350747;

	t38 = (x165<(x166+(x167&x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MAX;
	int8_t x170 = INT8_MAX;
	uint64_t x171 = 17LLU;
	volatile uint32_t x172 = UINT32_MAX;
	static int32_t t39 = -215781069;

	t39 = (x169<(x170+(x171&x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x174 = INT32_MAX;
	static uint64_t x175 = UINT64_MAX;
	static uint16_t x176 = 0U;
	int32_t t40 = 15612986;

	t40 = (x173<(x174+(x175&x176)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = 28;
	static int16_t x178 = 7031;
	volatile int64_t x180 = INT64_MAX;
	static int32_t t41 = -83667;

	t41 = (x177<(x178+(x179&x180)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x182 = -1;
	static int16_t x184 = INT16_MIN;
	static volatile int32_t t42 = 131;

	t42 = (x181<(x182+(x183&x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x187 = INT32_MIN;
	int64_t x188 = -315LL;
	volatile int32_t t43 = 2019;

	t43 = (x185<(x186+(x187&x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MAX;
	static volatile uint32_t x192 = 75728U;
	int32_t t44 = 101;

	t44 = (x189<(x190+(x191&x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x193 = UINT64_MAX;
	static uint8_t x194 = 28U;
	uint32_t x195 = UINT32_MAX;
	uint32_t x196 = 63756U;

	t45 = (x193<(x194+(x195&x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x198 = -230496691;
	int64_t x199 = -1LL;
	volatile uint32_t x200 = 12763628U;
	int32_t t46 = 621231;

	t46 = (x197<(x198+(x199&x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x201 = INT32_MAX;
	uint8_t x202 = 12U;
	volatile uint64_t x204 = UINT64_MAX;
	int32_t t47 = 50675281;

	t47 = (x201<(x202+(x203&x204)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	int64_t x206 = -1387821972534LL;
	int8_t x207 = 55;
	volatile uint8_t x208 = UINT8_MAX;
	int32_t t48 = 70765;

	t48 = (x205<(x206+(x207&x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x209 = 2106U;
	volatile uint16_t x210 = 110U;
	volatile uint32_t x211 = 12U;
	int16_t x212 = -1;

	t49 = (x209<(x210+(x211&x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = 48812327301LLU;
	int8_t x214 = -1;
	static int8_t x215 = INT8_MAX;
	int8_t x216 = -1;
	int32_t t50 = -2;

	t50 = (x213<(x214+(x215&x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = UINT32_MAX;
	uint64_t x218 = 12388545953LLU;
	static int64_t x220 = -352LL;
	volatile int32_t t51 = 548067429;

	t51 = (x217<(x218+(x219&x220)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x221 = INT8_MIN;
	static int32_t x222 = INT32_MIN;
	static int64_t x223 = -1LL;
	int32_t x224 = INT32_MIN;
	volatile int32_t t52 = -33;

	t52 = (x221<(x222+(x223&x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x225 = 968150291962388031LLU;
	int16_t x226 = -1;
	static uint8_t x227 = UINT8_MAX;
	static volatile int32_t t53 = -55711565;

	t53 = (x225<(x226+(x227&x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x230 = 164015987043729LL;
	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;

	t54 = (x229<(x230+(x231&x232)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x233 = INT64_MIN;
	int32_t x234 = -122;
	int8_t x236 = 38;

	t55 = (x233<(x234+(x235&x236)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x239 = UINT8_MAX;
	static volatile int8_t x240 = -52;
	int32_t t56 = 959269364;

	t56 = (x237<(x238+(x239&x240)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = 1382052532273512LL;
	int32_t t57 = -3093;

	t57 = (x241<(x242+(x243&x244)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MIN;
	volatile int64_t x248 = -1LL;

	t58 = (x245<(x246+(x247&x248)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x249 = 787U;
	static uint8_t x250 = UINT8_MAX;
	uint32_t x251 = 196109U;

	t59 = (x249<(x250+(x251&x252)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x254 = UINT32_MAX;
	volatile int64_t x255 = 16936207583284171LL;
	volatile int8_t x256 = -1;
	static volatile int32_t t60 = 2;

	t60 = (x253<(x254+(x255&x256)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 1U;
	uint8_t x258 = UINT8_MAX;
	int8_t x259 = 14;
	int64_t x260 = INT64_MIN;

	t61 = (x257<(x258+(x259&x260)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x261 = UINT8_MAX;
	uint32_t x262 = UINT32_MAX;
	static int16_t x263 = -1;
	int32_t t62 = -56375033;

	t62 = (x261<(x262+(x263&x264)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x265 = 0U;
	static uint16_t x266 = UINT16_MAX;
	int16_t x267 = 121;
	static int16_t x268 = INT16_MAX;
	int32_t t63 = -114497950;

	t63 = (x265<(x266+(x267&x268)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = INT64_MIN;
	volatile uint32_t x270 = 792410418U;
	int32_t x271 = INT32_MIN;
	uint8_t x272 = 60U;
	int32_t t64 = -1;

	t64 = (x269<(x270+(x271&x272)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -12417021500LL;
	uint8_t x274 = 0U;
	volatile uint8_t x275 = 10U;
	int32_t x276 = -89414294;
	int32_t t65 = 6499174;

	t65 = (x273<(x274+(x275&x276)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x278 = 1638U;
	int32_t x279 = INT32_MAX;
	int64_t x280 = INT64_MAX;

	t66 = (x277<(x278+(x279&x280)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x281 = 1;
	uint64_t x282 = 6LLU;
	int64_t x284 = 568LL;
	int32_t t67 = 692;

	t67 = (x281<(x282+(x283&x284)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x286 = UINT16_MAX;
	int64_t x287 = INT64_MIN;
	static int64_t x288 = INT64_MIN;
	volatile int32_t t68 = -28575;

	t68 = (x285<(x286+(x287&x288)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x289 = INT64_MIN;
	int8_t x290 = -25;
	volatile int8_t x292 = INT8_MAX;
	int32_t t69 = 738;

	t69 = (x289<(x290+(x291&x292)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = -1;
	static volatile int8_t x294 = INT8_MIN;
	uint8_t x295 = 6U;
	uint8_t x296 = 5U;
	volatile int32_t t70 = 1;

	t70 = (x293<(x294+(x295&x296)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x297 = 94U;
	int8_t x298 = INT8_MIN;
	int8_t x300 = INT8_MIN;
	int32_t t71 = -399866;

	t71 = (x297<(x298+(x299&x300)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 1U;
	uint64_t x303 = 2913493479772316656LLU;
	static uint8_t x304 = 4U;

	t72 = (x301<(x302+(x303&x304)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x306 = 92U;
	volatile int16_t x307 = -10;
	int64_t x308 = -6936865500527LL;
	static int32_t t73 = -3;

	t73 = (x305<(x306+(x307&x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x310 = INT64_MIN;
	int8_t x312 = -1;
	int32_t t74 = 45053;

	t74 = (x309<(x310+(x311&x312)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MIN;
	int64_t x314 = INT64_MAX;
	int64_t x315 = INT64_MIN;
	static volatile int32_t x316 = INT32_MIN;
	volatile int32_t t75 = -12494;

	t75 = (x313<(x314+(x315&x316)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = -12808;
	volatile int16_t x318 = -1;
	static uint32_t x319 = UINT32_MAX;
	uint64_t x320 = 2061154836737676LLU;
	int32_t t76 = -520024;

	t76 = (x317<(x318+(x319&x320)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = INT32_MAX;
	volatile uint64_t x322 = 8263970613402LLU;
	int8_t x323 = INT8_MIN;
	uint16_t x324 = 1U;

	t77 = (x321<(x322+(x323&x324)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MIN;
	uint16_t x326 = 12U;
	int16_t x327 = 20;
	static uint64_t x328 = 0LLU;
	static int32_t t78 = -921;

	t78 = (x325<(x326+(x327&x328)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = 1229;
	int8_t x334 = -11;
	static int8_t x335 = -1;
	static uint64_t x336 = UINT64_MAX;
	volatile int32_t t79 = -2;

	t79 = (x333<(x334+(x335&x336)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x341 = UINT32_MAX;
	int8_t x342 = 0;
	int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t80 = -11569401;

	t80 = (x341<(x342+(x343&x344)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x352 = -9LL;

	t81 = (x349<(x350+(x351&x352)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x354 = INT16_MIN;
	static int16_t x355 = INT16_MIN;
	int64_t x356 = 272062382202259545LL;
	int32_t t82 = 7583405;

	t82 = (x353<(x354+(x355&x356)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = -359;
	static int32_t x358 = 0;
	uint64_t x359 = 26117784712673379LLU;
	uint64_t x360 = 545351622652LLU;

	t83 = (x357<(x358+(x359&x360)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x361 = INT8_MIN;
	uint8_t x362 = 9U;
	int64_t x363 = -131LL;
	static uint64_t x364 = 1137214703LLU;
	int32_t t84 = 0;

	t84 = (x361<(x362+(x363&x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x365 = -266867;
	int8_t x366 = INT8_MAX;
	static uint8_t x367 = UINT8_MAX;

	t85 = (x365<(x366+(x367&x368)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x369 = -7;
	uint8_t x371 = 3U;
	int32_t x372 = -1;

	t86 = (x369<(x370+(x371&x372)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x373 = 40U;
	volatile uint64_t x374 = 0LLU;
	int32_t t87 = 7268070;

	t87 = (x373<(x374+(x375&x376)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x378 = 1962LLU;
	int32_t x379 = -1;
	static volatile int32_t x380 = 2;
	volatile int32_t t88 = 7189;

	t88 = (x377<(x378+(x379&x380)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x381 = INT64_MAX;
	uint64_t x382 = UINT64_MAX;
	int64_t x383 = 36LL;
	int16_t x384 = INT16_MIN;
	int32_t t89 = 23;

	t89 = (x381<(x382+(x383&x384)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x385 = 10276U;
	uint16_t x387 = 250U;
	uint32_t x388 = 170U;
	volatile int32_t t90 = 0;

	t90 = (x385<(x386+(x387&x388)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = -7896297LL;
	static int64_t x390 = 3020050438352018LL;
	int32_t x391 = 10761860;
	static int16_t x392 = -1;
	int32_t t91 = 45;

	t91 = (x389<(x390+(x391&x392)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x395 = INT64_MAX;
	uint16_t x396 = 15328U;
	int32_t t92 = 1660342;

	t92 = (x393<(x394+(x395&x396)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x397 = 20U;
	volatile int32_t x399 = 8;
	int32_t x400 = INT32_MIN;
	int32_t t93 = 564964;

	t93 = (x397<(x398+(x399&x400)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = -16806;
	static uint16_t x402 = 3941U;
	int16_t x403 = INT16_MAX;
	uint16_t x404 = 506U;
	volatile int32_t t94 = -1923842;

	t94 = (x401<(x402+(x403&x404)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x405 = 492085U;
	uint8_t x406 = 1U;
	static int16_t x407 = 0;
	uint32_t x408 = 3U;
	volatile int32_t t95 = -779372227;

	t95 = (x405<(x406+(x407&x408)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x410 = 0;
	int64_t x411 = -1LL;
	int16_t x412 = INT16_MIN;
	volatile int32_t t96 = 28;

	t96 = (x409<(x410+(x411&x412)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x414 = UINT16_MAX;
	static int8_t x415 = -1;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t97 = 537064588;

	t97 = (x413<(x414+(x415&x416)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x417 = -1;
	static int16_t x418 = INT16_MIN;
	int8_t x419 = 28;
	int32_t x420 = 221443641;
	volatile int32_t t98 = -127;

	t98 = (x417<(x418+(x419&x420)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x421 = 5U;
	volatile int64_t x422 = INT64_MAX;
	volatile uint64_t x423 = UINT64_MAX;
	volatile int8_t x424 = INT8_MAX;

	t99 = (x421<(x422+(x423&x424)));

	if (t99 != 1) { NG(); } else { ; }
	
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

