#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = INT8_MIN;
int64_t x7 = INT64_MIN;
static int64_t x8 = INT64_MAX;
int16_t x14 = 431;
uint8_t x16 = 11U;
int8_t x20 = INT8_MIN;
int64_t t5 = -24287562881147860LL;
int16_t x26 = INT16_MAX;
volatile int32_t x27 = INT32_MIN;
volatile int8_t x30 = -6;
volatile int64_t t7 = -91862LL;
uint16_t x39 = UINT16_MAX;
int32_t x44 = -1;
static volatile int32_t t10 = -5918853;
volatile int64_t x54 = 36928135259734LL;
uint64_t t16 = 1325802LLU;
int32_t x75 = -85294124;
volatile uint64_t x77 = UINT64_MAX;
static int8_t x78 = INT8_MAX;
uint64_t t18 = UINT64_MAX;
int8_t x82 = INT8_MIN;
int32_t x95 = 16391;
volatile int64_t t26 = -28367511LL;
static int16_t x117 = INT16_MIN;
uint64_t x123 = UINT64_MAX;
int8_t x131 = INT8_MIN;
int64_t x132 = INT64_MAX;
int8_t x138 = -1;
uint16_t x151 = UINT16_MAX;
uint8_t x160 = 7U;
uint64_t t36 = 205LLU;
int32_t x167 = INT32_MAX;
static int8_t x178 = -1;
uint8_t x182 = 49U;
uint8_t x186 = 1U;
int64_t x203 = INT64_MIN;
int8_t x204 = -1;
static uint64_t x206 = 87LLU;
uint64_t t50 = 54236522283518461LLU;
uint16_t x221 = 5353U;
static int16_t x226 = INT16_MAX;
volatile int32_t t54 = 212299;
static uint16_t x233 = 0U;
uint64_t x234 = 40LLU;
int16_t x236 = INT16_MIN;
int64_t x238 = INT64_MIN;
int64_t t56 = 303221985043763LL;
uint8_t x242 = 31U;
static int32_t t57 = -1;
int32_t t58 = 1;
volatile int64_t t60 = 14854004903LL;
uint64_t x257 = 2166127568718360LLU;
int64_t x258 = -20966339LL;
volatile uint64_t t63 = 12238LLU;
static volatile int64_t t64 = -66651LL;
volatile uint64_t t65 = 261503711084063909LLU;
uint64_t x277 = 68221520354140LLU;
volatile int32_t x282 = INT32_MIN;
int8_t x283 = INT8_MIN;
int8_t x287 = -39;
uint16_t x288 = 183U;
int64_t x290 = -1LL;
uint32_t x291 = UINT32_MAX;
static int16_t x294 = -1;
static int64_t x302 = INT64_MIN;
int64_t x303 = 883548115LL;
static int8_t x305 = INT8_MAX;
int32_t x312 = 9274;
volatile int64_t t77 = -471LL;
uint16_t x339 = UINT16_MAX;
volatile int32_t x343 = 26714;
static int64_t x347 = INT64_MIN;
volatile int64_t t87 = 1118178037739613245LL;
int64_t x374 = INT64_MIN;
uint64_t x380 = 329021LLU;
int64_t x381 = INT64_MIN;
volatile int64_t t91 = -55417801156LL;
volatile int32_t x385 = INT32_MIN;
int16_t x395 = -1;
int32_t t95 = 0;
static int32_t t96 = 89503687;
uint16_t x408 = UINT16_MAX;
uint64_t t97 = 75LLU;
static uint32_t x413 = UINT32_MAX;


void f0(void) {
	int64_t x1 = -106733435575LL;
	volatile uint64_t x2 = 3087342056LLU;
	int64_t x4 = -3338805240438706LL;
	uint64_t t0 = 4090291219167LLU;

	t0 = (x1-(x2&(x3&x4)));

	if (t0 != 18446743964560131401LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile uint64_t x6 = 967132077LLU;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5-(x6&(x7&x8)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint8_t x10 = 6U;
	volatile int8_t x11 = -1;
	volatile int64_t x12 = -241523954889337LL;
	volatile int64_t t2 = 4720LL;

	t2 = (x9-(x10&(x11&x12)));

	if (t2 != -2147483654LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	static int64_t x15 = -1LL;
	static int64_t t3 = 18536423577LL;

	t3 = (x13-(x14&(x15&x16)));

	if (t3 != -139LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MIN;
	int16_t x19 = -834;
	volatile int32_t t4 = 576022162;

	t4 = (x17-(x18&(x19&x20)));

	if (t4 != 768) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 2039460797U;
	int64_t x22 = -1LL;
	uint16_t x23 = 2U;
	volatile uint32_t x24 = UINT32_MAX;

	t5 = (x21-(x22&(x23&x24)));

	if (t5 != 2039460795LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int64_t x28 = INT64_MIN;
	int64_t t6 = 10633823695616LL;

	t6 = (x25-(x26&(x27&x28)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	int8_t x31 = INT8_MAX;
	int64_t x32 = -12221LL;

	t7 = (x29-(x30&(x31&x32)));

	if (t7 != -2147483714LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	uint8_t x34 = 1U;
	int64_t x35 = INT64_MAX;
	int64_t x36 = 2LL;
	volatile int64_t t8 = 3127832LL;

	t8 = (x33-(x34&(x35&x36)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 107;
	volatile int32_t x38 = INT32_MIN;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -63517699;

	t9 = (x37-(x38&(x39&x40)));

	if (t9 != 107) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -37;
	uint8_t x42 = 0U;
	int16_t x43 = INT16_MIN;

	t10 = (x41-(x42&(x43&x44)));

	if (t10 != -37) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	uint16_t x46 = 23U;
	volatile uint64_t x47 = 2642341723215LLU;
	int32_t x48 = INT32_MIN;
	uint64_t t11 = UINT64_MAX;

	t11 = (x45-(x46&(x47&x48)));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	static uint32_t x50 = 588U;
	uint32_t x51 = UINT32_MAX;
	int16_t x52 = -1;
	volatile int64_t t12 = -129577026198340306LL;

	t12 = (x49-(x50&(x51&x52)));

	if (t12 != 9223372036854775219LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int64_t x55 = -1727524637LL;
	static int16_t x56 = INT16_MIN;
	static int64_t t13 = 3604LL;

	t13 = (x53-(x54&(x55&x56)));

	if (t13 != -36930276294656LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MIN;
	static uint16_t x60 = UINT16_MAX;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x57-(x58&(x59&x60)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -27086841224510815LL;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = -493475;
	volatile int8_t x68 = INT8_MAX;
	static volatile uint64_t t15 = 304863851LLU;

	t15 = (x65-(x66&(x67&x68)));

	if (t15 != 18419657232485040708LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	int16_t x70 = -7333;
	static uint64_t x71 = 8071497696LLU;
	static volatile int16_t x72 = 82;

	t16 = (x69-(x70&(x71&x72)));

	if (t16 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x73 = 3931430250436954578LLU;
	volatile uint32_t x74 = 98U;
	uint8_t x76 = 1U;
	volatile uint64_t t17 = 14LLU;

	t17 = (x73-(x74&(x75&x76)));

	if (t17 != 3931430250436954578LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x79 = INT64_MIN;
	volatile int64_t x80 = INT64_MIN;

	t18 = (x77-(x78&(x79&x80)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	int32_t x83 = 93148295;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t19 = 1485815620667595072LLU;

	t19 = (x81-(x82&(x83&x84)));

	if (t19 != 18446744073616403200LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 8026LLU;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t20 = 123LLU;

	t20 = (x85-(x86&(x87&x88)));

	if (t20 != 2147491674LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1465;
	int32_t x90 = INT32_MAX;
	volatile int64_t x91 = INT64_MIN;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t21 = 6378698378700504LLU;

	t21 = (x89-(x90&(x91&x92)));

	if (t21 != 18446744073709550151LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MAX;
	static uint8_t x94 = 6U;
	static int16_t x96 = -1;
	int32_t t22 = -33449;

	t22 = (x93-(x94&(x95&x96)));

	if (t22 != 121) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x97 = 6714U;
	static int8_t x98 = INT8_MIN;
	volatile uint32_t x99 = 2U;
	int16_t x100 = 1886;
	uint32_t t23 = 112896U;

	t23 = (x97-(x98&(x99&x100)));

	if (t23 != 6714U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = UINT16_MAX;
	uint64_t x102 = UINT64_MAX;
	volatile int16_t x103 = INT16_MIN;
	static volatile int32_t x104 = INT32_MIN;
	uint64_t t24 = 3044LLU;

	t24 = (x101-(x102&(x103&x104)));

	if (t24 != 2147549183LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 108U;
	int8_t x106 = -1;
	int64_t x107 = -1LL;
	int16_t x108 = -1;
	volatile int64_t t25 = 19127LL;

	t25 = (x105-(x106&(x107&x108)));

	if (t25 != 109LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = 125129183;
	volatile int64_t x110 = INT64_MIN;
	uint8_t x111 = 16U;
	uint8_t x112 = 15U;

	t26 = (x109-(x110&(x111&x112)));

	if (t26 != 125129183LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x118 = INT16_MAX;
	int16_t x119 = INT16_MAX;
	static uint16_t x120 = UINT16_MAX;
	static int32_t t27 = -7;

	t27 = (x117-(x118&(x119&x120)));

	if (t27 != -65535) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MAX;
	volatile int64_t x122 = 9485614LL;
	int8_t x124 = -1;
	volatile uint64_t t28 = 2202467593190624656LLU;

	t28 = (x121-(x122&(x123&x124)));

	if (t28 != 2137998033LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 3U;
	int8_t x126 = 11;
	int16_t x127 = INT16_MAX;
	uint8_t x128 = 97U;
	int32_t t29 = 1;

	t29 = (x125-(x126&(x127&x128)));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -853;
	volatile int8_t x130 = INT8_MAX;
	static int64_t t30 = -3479596LL;

	t30 = (x129-(x130&(x131&x132)));

	if (t30 != -853LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x137 = -558052120775665121LL;
	int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	int64_t t31 = 8323622408LL;

	t31 = (x137-(x138&(x139&x140)));

	if (t31 != -558052118628181473LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x141 = -1;
	static uint64_t x142 = 1541660009660093786LLU;
	static uint32_t x143 = 250821942U;
	static int8_t x144 = INT8_MIN;
	volatile uint64_t t32 = 909064LLU;

	t32 = (x141-(x142&(x143&x144)));

	if (t32 != 18446744073571986175LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x145 = 0;
	int8_t x146 = 1;
	uint16_t x147 = 0U;
	int8_t x148 = INT8_MAX;
	static volatile int32_t t33 = -62;

	t33 = (x145-(x146&(x147&x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x149 = -178347;
	int8_t x150 = -1;
	volatile uint16_t x152 = 16950U;
	volatile int32_t t34 = 1522;

	t34 = (x149-(x150&(x151&x152)));

	if (t34 != -195297) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	volatile uint8_t x154 = 3U;
	uint16_t x155 = 12812U;
	volatile int64_t x156 = INT64_MIN;
	volatile int64_t t35 = 7305141459032LL;

	t35 = (x153-(x154&(x155&x156)));

	if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = UINT16_MAX;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = 39798LLU;

	t36 = (x157-(x158&(x159&x160)));

	if (t36 != 65535LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = INT64_MIN;
	uint64_t x162 = 696168542321829189LLU;
	static uint16_t x163 = UINT16_MAX;
	int64_t x164 = 7LL;
	uint64_t t37 = 11LLU;

	t37 = (x161-(x162&(x163&x164)));

	if (t37 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = INT16_MIN;
	static volatile uint32_t x166 = UINT32_MAX;
	int32_t x168 = -6923596;
	volatile uint32_t t38 = 124U;

	t38 = (x165-(x166&(x167&x168)));

	if (t38 != 2154374476U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = -1LL;
	int16_t x170 = -3204;
	int16_t x171 = INT16_MAX;
	volatile uint16_t x172 = 1U;
	volatile int64_t t39 = 24LL;

	t39 = (x169-(x170&(x171&x172)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = -15456;
	volatile int16_t x174 = -1;
	uint64_t x175 = 4191952961110402751LLU;
	uint32_t x176 = 96049U;
	volatile uint64_t t40 = 12486403913161136LLU;

	t40 = (x173-(x174&(x175&x176)));

	if (t40 != 18446744073709444463LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x177 = UINT32_MAX;
	volatile int64_t x179 = INT64_MIN;
	int8_t x180 = 1;
	int64_t t41 = -7032266162042LL;

	t41 = (x177-(x178&(x179&x180)));

	if (t41 != 4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = 14;
	static uint16_t x183 = UINT16_MAX;
	volatile uint16_t x184 = 27758U;
	static int32_t t42 = 203;

	t42 = (x181-(x182&(x183&x184)));

	if (t42 != -18) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -703;
	int8_t x187 = 1;
	static uint64_t x188 = 96LLU;
	uint64_t t43 = 1657179194876649719LLU;

	t43 = (x185-(x186&(x187&x188)));

	if (t43 != 18446744073709550913LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	uint32_t x190 = 23815409U;
	uint32_t x191 = UINT32_MAX;
	volatile int32_t x192 = -101;
	volatile uint32_t t44 = 70159U;

	t44 = (x189-(x190&(x191&x192)));

	if (t44 != 2123668335U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = 1LLU;
	int32_t x194 = -1;
	static uint32_t x195 = 0U;
	int64_t x196 = INT64_MIN;
	volatile uint64_t t45 = 11483505882LLU;

	t45 = (x193-(x194&(x195&x196)));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x197 = 0U;
	int16_t x198 = 12226;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t46 = 15332763;

	t46 = (x197-(x198&(x199&x200)));

	if (t46 != -12160) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x201 = INT32_MIN;
	int32_t x202 = -1;
	volatile int64_t t47 = -671152228064645LL;

	t47 = (x201-(x202&(x203&x204)));

	if (t47 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = 3;
	static volatile int16_t x207 = -60;
	uint16_t x208 = 6395U;
	static volatile uint64_t t48 = 45199LLU;

	t48 = (x205-(x206&(x207&x208)));

	if (t48 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MIN;
	int8_t x211 = -53;
	int64_t x212 = INT64_MAX;
	int64_t t49 = INT64_MIN;

	t49 = (x209-(x210&(x211&x212)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = UINT64_MAX;
	int32_t x214 = 5249;
	int64_t x215 = -1LL;
	uint32_t x216 = 1405422U;

	t50 = (x213-(x214&(x215&x216)));

	if (t50 != 18446744073709547391LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -20;
	uint64_t x218 = 2244164028616632LLU;
	volatile uint32_t x219 = 2967122U;
	uint64_t x220 = UINT64_MAX;
	uint64_t t51 = 2LLU;

	t51 = (x217-(x218&(x219&x220)));

	if (t51 != 18446744073706650076LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x222 = UINT8_MAX;
	int32_t x223 = -1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t52 = 888;

	t52 = (x221-(x222&(x223&x224)));

	if (t52 != 5353) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x225 = 53266LL;
	int32_t x227 = INT32_MIN;
	static int32_t x228 = INT32_MAX;
	volatile int64_t t53 = -1LL;

	t53 = (x225-(x226&(x227&x228)));

	if (t53 != 53266LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MIN;
	uint16_t x230 = 11498U;
	int8_t x231 = -1;
	int8_t x232 = 1;

	t54 = (x229-(x230&(x231&x232)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x235 = 13U;
	uint64_t t55 = 521004LLU;

	t55 = (x233-(x234&(x235&x236)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x237 = UINT8_MAX;
	uint16_t x239 = UINT16_MAX;
	int32_t x240 = 0;

	t56 = (x237-(x238&(x239&x240)));

	if (t56 != 255LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = UINT16_MAX;
	int16_t x243 = -1;
	volatile int16_t x244 = INT16_MIN;

	t57 = (x241-(x242&(x243&x244)));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x245 = -2;
	int16_t x246 = INT16_MIN;
	int8_t x247 = -1;
	static volatile int16_t x248 = 7200;

	t58 = (x245-(x246&(x247&x248)));

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x249 = -3092;
	int32_t x250 = -1;
	int8_t x251 = -1;
	volatile int32_t x252 = 1078;
	volatile int32_t t59 = -6391356;

	t59 = (x249-(x250&(x251&x252)));

	if (t59 != -4170) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MAX;
	volatile int32_t x254 = INT32_MAX;
	uint8_t x255 = 23U;
	static int16_t x256 = -1;

	t60 = (x253-(x254&(x255&x256)));

	if (t60 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x259 = UINT64_MAX;
	static int32_t x260 = -1;
	static volatile uint64_t t61 = 836460LLU;

	t61 = (x257-(x258&(x259&x260)));

	if (t61 != 2166127589684699LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = INT8_MIN;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = INT8_MAX;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t62 = -102;

	t62 = (x261-(x262&(x263&x264)));

	if (t62 != -255) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	int16_t x267 = 4;
	uint64_t x268 = 120654077LLU;

	t63 = (x265-(x266&(x267&x268)));

	if (t63 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = INT16_MIN;
	int8_t x271 = -1;
	static int8_t x272 = -1;

	t64 = (x269-(x270&(x271&x272)));

	if (t64 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = 581021LLU;
	int16_t x274 = 1642;
	static volatile int32_t x275 = -1;
	uint8_t x276 = 0U;

	t65 = (x273-(x274&(x275&x276)));

	if (t65 != 581021LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x278 = 6840914704093383331LLU;
	uint16_t x279 = 1514U;
	int8_t x280 = -1;
	uint64_t t66 = 18950896933687LLU;

	t66 = (x277-(x278&(x279&x280)));

	if (t66 != 68221520353978LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = INT64_MAX;
	int32_t x284 = INT32_MAX;
	int64_t t67 = INT64_MAX;

	t67 = (x281-(x282&(x283&x284)));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x285 = INT16_MAX;
	uint32_t x286 = 259991587U;
	uint32_t t68 = 69201241U;

	t68 = (x285-(x286&(x287&x288)));

	if (t68 != 32766U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = -10;
	int32_t x292 = INT32_MIN;
	volatile int64_t t69 = -10506LL;

	t69 = (x289-(x290&(x291&x292)));

	if (t69 != -2147483658LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = -1;
	uint8_t x295 = 0U;
	int64_t x296 = INT64_MIN;
	static int64_t t70 = -1713802833028LL;

	t70 = (x293-(x294&(x295&x296)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = -1;
	uint8_t x298 = 6U;
	volatile int32_t x299 = -1;
	uint32_t x300 = 10U;
	volatile uint32_t t71 = 2988U;

	t71 = (x297-(x298&(x299&x300)));

	if (t71 != 4294967293U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x301 = INT64_MIN;
	int8_t x304 = INT8_MIN;
	int64_t t72 = INT64_MIN;

	t72 = (x301-(x302&(x303&x304)));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x306 = 14U;
	int32_t x307 = INT32_MAX;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t73 = 8;

	t73 = (x305-(x306&(x307&x308)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x309 = 120U;
	int32_t x310 = -1;
	volatile uint8_t x311 = 3U;
	int32_t t74 = -58;

	t74 = (x309-(x310&(x311&x312)));

	if (t74 != 118) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x313 = 6859650198750LL;
	int16_t x314 = INT16_MAX;
	volatile uint32_t x315 = 24979595U;
	int8_t x316 = -1;
	int64_t t75 = -2LL;

	t75 = (x313-(x314&(x315&x316)));

	if (t75 != 6859650188371LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MIN;
	volatile uint64_t x318 = 659971095LLU;
	uint64_t x319 = 1183380LLU;
	int64_t x320 = INT64_MAX;
	volatile uint64_t t76 = 6983040756245385LLU;

	t76 = (x317-(x318&(x319&x320)));

	if (t76 != 9223372036853593068LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = -1LL;
	static int8_t x322 = INT8_MIN;
	volatile int8_t x323 = INT8_MIN;
	volatile uint16_t x324 = UINT16_MAX;

	t77 = (x321-(x322&(x323&x324)));

	if (t77 != -65409LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = INT64_MAX;
	int8_t x327 = -1;
	int16_t x328 = 29;
	volatile int64_t t78 = -15LL;

	t78 = (x325-(x326&(x327&x328)));

	if (t78 != -157LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x329 = 2063U;
	static uint16_t x330 = UINT16_MAX;
	static uint8_t x331 = 82U;
	int8_t x332 = -1;
	volatile uint32_t t79 = 12570U;

	t79 = (x329-(x330&(x331&x332)));

	if (t79 != 1981U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = INT32_MAX;
	static int64_t x334 = INT64_MIN;
	static int64_t x335 = INT64_MIN;
	static uint8_t x336 = 7U;
	int64_t t80 = -57LL;

	t80 = (x333-(x334&(x335&x336)));

	if (t80 != 2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x337 = INT16_MAX;
	volatile uint64_t x338 = UINT64_MAX;
	volatile int8_t x340 = -1;
	uint64_t t81 = 5093369747324295LLU;

	t81 = (x337-(x338&(x339&x340)));

	if (t81 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x341 = 1380U;
	int64_t x342 = -29971LL;
	static volatile int32_t x344 = -1;
	volatile int64_t t82 = -1917LL;

	t82 = (x341-(x342&(x343&x344)));

	if (t82 != -740LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = UINT16_MAX;
	static volatile uint64_t x346 = UINT64_MAX;
	int16_t x348 = -1;
	volatile uint64_t t83 = 92LLU;

	t83 = (x345-(x346&(x347&x348)));

	if (t83 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = UINT32_MAX;
	int64_t x350 = -1LL;
	int8_t x351 = -1;
	static volatile int32_t x352 = -149892906;
	int64_t t84 = 8075915754LL;

	t84 = (x349-(x350&(x351&x352)));

	if (t84 != 4444860201LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	static int64_t x354 = -7551LL;
	int8_t x355 = -1;
	uint32_t x356 = UINT32_MAX;
	int64_t t85 = -3985LL;

	t85 = (x353-(x354&(x355&x356)));

	if (t85 != -4294959873LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = -490;
	static volatile int16_t x362 = 2814;
	int64_t x363 = -1LL;
	int8_t x364 = 10;
	volatile int64_t t86 = 4050969LL;

	t86 = (x361-(x362&(x363&x364)));

	if (t86 != -500LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = -5783LL;
	int8_t x366 = 50;
	static int16_t x367 = 5932;
	int32_t x368 = INT32_MIN;

	t87 = (x365-(x366&(x367&x368)));

	if (t87 != -5783LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = 1;
	int32_t x370 = INT32_MAX;
	int64_t x371 = -1793258LL;
	int16_t x372 = INT16_MAX;
	volatile int64_t t88 = 12013276147585LL;

	t88 = (x369-(x370&(x371&x372)));

	if (t88 != -8981LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = 0U;
	int16_t x375 = 30;
	int8_t x376 = -16;
	static int64_t t89 = 1649162154972279382LL;

	t89 = (x373-(x374&(x375&x376)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x377 = 10U;
	volatile int64_t x378 = 87207167LL;
	uint16_t x379 = UINT16_MAX;
	uint64_t t90 = 1736021366LLU;

	t90 = (x377-(x378&(x379&x380)));

	if (t90 != 18446744073709550541LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x382 = INT32_MIN;
	int8_t x383 = -1;
	int64_t x384 = INT64_MIN;

	t91 = (x381-(x382&(x383&x384)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x386 = INT64_MAX;
	int32_t x387 = INT32_MAX;
	int16_t x388 = -1;
	int64_t t92 = 527648147110970688LL;

	t92 = (x385-(x386&(x387&x388)));

	if (t92 != -4294967295LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x389 = -1;
	int16_t x390 = INT16_MAX;
	uint16_t x391 = UINT16_MAX;
	int8_t x392 = INT8_MAX;
	int32_t t93 = -11521130;

	t93 = (x389-(x390&(x391&x392)));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = UINT8_MAX;
	uint16_t x394 = 26U;
	static uint64_t x396 = UINT64_MAX;
	volatile uint64_t t94 = 1608610692LLU;

	t94 = (x393-(x394&(x395&x396)));

	if (t94 != 229LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = 1;
	volatile int8_t x398 = INT8_MIN;
	int32_t x399 = -27617712;
	int16_t x400 = INT16_MIN;

	t95 = (x397-(x398&(x399&x400)));

	if (t95 != 27623425) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x401 = -61;
	int32_t x402 = INT32_MIN;
	int32_t x403 = 16756907;
	static int16_t x404 = INT16_MAX;

	t96 = (x401-(x402&(x403&x404)));

	if (t96 != -61) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x405 = INT64_MIN;
	uint64_t x406 = 1143LLU;
	int16_t x407 = -1;

	t97 = (x405-(x406&(x407&x408)));

	if (t97 != 9223372036854774665LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x409 = INT8_MIN;
	uint32_t x410 = 13236209U;
	uint8_t x411 = UINT8_MAX;
	int8_t x412 = INT8_MIN;
	uint32_t t98 = 378775159U;

	t98 = (x409-(x410&(x411&x412)));

	if (t98 != 4294967040U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x414 = -1;
	volatile int16_t x415 = INT16_MIN;
	uint32_t x416 = 525915302U;
	volatile uint32_t t99 = 2U;

	t99 = (x413-(x414&(x415&x416)));

	if (t99 != 3769073663U) { NG(); } else { ; }
	
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

