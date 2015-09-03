#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 418357613896376320LLU;
volatile uint8_t x13 = 1U;
uint16_t x19 = UINT16_MAX;
int16_t x21 = INT16_MIN;
int32_t x36 = INT32_MAX;
uint8_t x51 = UINT8_MAX;
int32_t t10 = 357510;
int32_t x65 = 6;
int8_t x70 = INT8_MAX;
uint64_t x71 = UINT64_MAX;
int16_t x76 = 2308;
uint64_t x78 = 100376608746213LLU;
int8_t x90 = -2;
int32_t x100 = -15715317;
static int8_t x101 = INT8_MIN;
volatile uint64_t x102 = 89145256739672LLU;
int16_t x105 = INT16_MIN;
static volatile int64_t x109 = -1LL;
int32_t x116 = INT32_MAX;
volatile uint16_t x124 = UINT16_MAX;
volatile int8_t x131 = -1;
int32_t x138 = INT32_MIN;
static uint16_t x142 = 2U;
uint16_t x143 = 227U;
int32_t x144 = INT32_MIN;
static int8_t x148 = INT8_MIN;
uint32_t t33 = 8U;
int16_t x166 = INT16_MIN;
uint64_t x167 = UINT64_MAX;
int64_t x173 = -1LL;
int64_t x176 = INT64_MAX;
volatile uint8_t x178 = 14U;
static volatile int64_t x179 = INT64_MAX;
uint32_t t40 = UINT32_MAX;
int8_t x193 = INT8_MAX;
uint64_t x202 = UINT64_MAX;
volatile int16_t x203 = 768;
volatile uint64_t t42 = 295228240LLU;
volatile uint8_t x208 = 1U;
uint16_t x211 = 4464U;
static uint32_t x214 = 202U;
volatile int32_t x219 = -1;
int8_t x220 = INT8_MIN;
volatile int64_t x221 = -188334LL;
int64_t x228 = 7259LL;
volatile int16_t x229 = INT16_MIN;
uint8_t x235 = 0U;
int8_t x236 = -1;
static volatile uint8_t x238 = 24U;
volatile uint64_t t52 = 516321780449LLU;
int16_t x247 = INT16_MIN;
static uint8_t x256 = UINT8_MAX;
volatile int32_t t55 = 758612;
static int32_t x262 = INT32_MIN;
volatile uint64_t x267 = UINT64_MAX;
volatile uint64_t t58 = 10572829454533LLU;
volatile int8_t x272 = INT8_MAX;
int64_t t59 = -3LL;
volatile uint64_t t64 = 1128231886303511LLU;
volatile uint64_t t65 = 272583195499LLU;
uint16_t x310 = UINT16_MAX;
static volatile uint16_t x313 = 9373U;
volatile uint8_t x316 = 9U;
static volatile int64_t t69 = 217LL;
int64_t x330 = -1LL;
static uint8_t x331 = 3U;
uint16_t x347 = UINT16_MAX;
static int64_t x354 = INT64_MAX;
int64_t x356 = 12078LL;
volatile int8_t x358 = INT8_MIN;
int32_t x359 = INT32_MIN;
static int16_t x364 = -1;
static volatile int8_t x366 = INT8_MIN;
int16_t x367 = INT16_MIN;
volatile int64_t x376 = INT64_MAX;
int8_t x379 = INT8_MIN;
volatile int16_t x380 = 2;
static uint32_t x384 = 1U;
volatile uint32_t t81 = 1961938459U;
uint32_t x395 = 1830093309U;
volatile int64_t t84 = 496LL;
volatile int16_t x406 = 27;
volatile int64_t t85 = -63245LL;
int32_t x417 = -27983542;
int16_t x425 = -1994;
static int8_t x428 = 63;
uint8_t x430 = UINT8_MAX;
uint16_t x432 = 1U;
volatile uint32_t t90 = 1925143U;
volatile uint32_t x447 = 9U;
volatile uint32_t t93 = 1865940818U;
int16_t x453 = INT16_MIN;
static int16_t x460 = INT16_MAX;
volatile uint32_t t96 = 6U;
int64_t x461 = INT64_MIN;
volatile uint64_t x465 = 93LLU;
volatile int32_t x471 = INT32_MIN;
static int8_t x472 = INT8_MIN;


void f0(void) {
	volatile int16_t x5 = 1;
	int16_t x6 = -364;
	static uint8_t x7 = 0U;
	static volatile int32_t x8 = 1;
	int32_t t0 = 7;

	t0 = (x5*(x6|(x7&x8)));

	if (t0 != -364) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -3881;
	int64_t x10 = INT64_MIN;
	uint64_t x11 = 948637558509619340LLU;
	int8_t x12 = 4;

	t1 = (x9*(x10|(x11&x12)));

	if (t1 != 9223372036854760284LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x14 = 5476U;
	uint32_t x15 = 8902U;
	int8_t x16 = -23;
	uint32_t t2 = 13628U;

	t2 = (x13*(x14|(x15&x16)));

	if (t2 != 14308U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	int8_t x18 = INT8_MIN;
	static volatile int64_t x20 = INT64_MIN;
	volatile int64_t t3 = -2922420356462151677LL;

	t3 = (x17*(x18|(x19&x20)));

	if (t3 != -549755813760LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = -1LL;
	int32_t x23 = INT32_MIN;
	int8_t x24 = -1;
	volatile int64_t t4 = 1699125171784LL;

	t4 = (x21*(x22|(x23&x24)));

	if (t4 != 32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x25 = INT8_MIN;
	static uint8_t x26 = 25U;
	uint8_t x27 = 1U;
	static uint32_t x28 = 844U;
	volatile uint32_t t5 = 1040395U;

	t5 = (x25*(x26|(x27&x28)));

	if (t5 != 4294964096U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 1792;
	uint64_t x30 = UINT64_MAX;
	int32_t x31 = -5490;
	uint16_t x32 = UINT16_MAX;
	uint64_t t6 = 62LLU;

	t6 = (x29*(x30|(x31&x32)));

	if (t6 != 18446744073709549824LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 4U;
	uint16_t x34 = 5012U;
	int64_t x35 = -8334582LL;
	int64_t t7 = -3855569LL;

	t7 = (x33*(x34|(x35&x36)));

	if (t7 != 8556596856LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	int32_t x38 = INT32_MIN;
	uint16_t x39 = 0U;
	volatile int64_t x40 = INT64_MIN;
	int64_t t8 = -400521463LL;

	t8 = (x37*(x38|(x39&x40)));

	if (t8 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	int8_t x46 = -3;
	int64_t x47 = 78369146LL;
	int8_t x48 = -1;
	int64_t t9 = 1908624222024566928LL;

	t9 = (x45*(x46|(x47&x48)));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	static int8_t x50 = INT8_MAX;
	uint16_t x52 = UINT16_MAX;

	t10 = (x49*(x50|(x51&x52)));

	if (t10 != 16711425) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -48818;
	static int8_t x54 = -1;
	int8_t x55 = INT8_MAX;
	int16_t x56 = 90;
	int32_t t11 = 2366903;

	t11 = (x53*(x54|(x55&x56)));

	if (t11 != 48818) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 57U;
	static uint64_t x62 = UINT64_MAX;
	int8_t x63 = INT8_MAX;
	static uint16_t x64 = 25579U;
	uint64_t t12 = 10LLU;

	t12 = (x61*(x62|(x63&x64)));

	if (t12 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x66 = 489U;
	int16_t x67 = 474;
	uint16_t x68 = 34U;
	uint32_t t13 = 266961000U;

	t13 = (x65*(x66|(x67&x68)));

	if (t13 != 2946U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x69 = INT32_MIN;
	static volatile uint8_t x72 = 3U;
	volatile uint64_t t14 = 195996622579LLU;

	t14 = (x69*(x70|(x71&x72)));

	if (t14 != 18446743800979128320LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x73 = 790LL;
	volatile int64_t x74 = 6LL;
	int64_t x75 = INT64_MIN;
	int64_t t15 = -22112LL;

	t15 = (x73*(x74|(x75&x76)));

	if (t15 != 4740LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = 1;
	int8_t x79 = INT8_MAX;
	volatile uint8_t x80 = 1U;
	volatile uint64_t t16 = 265049391809959LLU;

	t16 = (x77*(x78|(x79&x80)));

	if (t16 != 100376608746213LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 90U;
	uint8_t x82 = UINT8_MAX;
	uint32_t x83 = 8796096U;
	static int16_t x84 = 20;
	uint32_t t17 = 58507579U;

	t17 = (x81*(x82|(x83&x84)));

	if (t17 != 22950U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = 1;
	int32_t x86 = INT32_MAX;
	uint64_t x87 = 10907233727LLU;
	int16_t x88 = INT16_MIN;
	static volatile uint64_t t18 = 513887116652481LLU;

	t18 = (x85*(x86|(x87&x88)));

	if (t18 != 12884901887LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	int32_t x91 = 88;
	uint16_t x92 = UINT16_MAX;
	int32_t t19 = 1284;

	t19 = (x89*(x90|(x91&x92)));

	if (t19 != 256) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MIN;
	int64_t x99 = INT64_MIN;
	volatile int64_t t20 = -2267551LL;

	t20 = (x97*(x98|(x99&x100)));

	if (t20 != -2147450880LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x103 = -52;
	volatile uint16_t x104 = UINT16_MAX;
	uint64_t t21 = 1278016606552LLU;

	t21 = (x101*(x102|(x103&x104)));

	if (t21 != 18435333480842793472LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x106 = INT64_MIN;
	int64_t x107 = -1LL;
	volatile int64_t x108 = -1LL;
	int64_t t22 = -11007771LL;

	t22 = (x105*(x106|(x107&x108)));

	if (t22 != 32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x110 = 7;
	int32_t x111 = INT32_MAX;
	int8_t x112 = 10;
	int64_t t23 = 10475LL;

	t23 = (x109*(x110|(x111&x112)));

	if (t23 != -15LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = 82913245777501531LL;
	static volatile int32_t x114 = -1;
	int64_t x115 = INT64_MAX;
	int64_t t24 = 4573772508663407LL;

	t24 = (x113*(x114|(x115&x116)));

	if (t24 != -82913245777501531LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = -1;
	int64_t x122 = -177230081764198LL;
	uint16_t x123 = 10873U;
	volatile int64_t t25 = 144LL;

	t25 = (x121*(x122|(x123&x124)));

	if (t25 != 177230081753349LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = 1;
	int32_t x126 = INT32_MIN;
	int16_t x127 = 17;
	int16_t x128 = -1;
	int32_t t26 = 796752881;

	t26 = (x125*(x126|(x127&x128)));

	if (t26 != -2147483631) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MIN;
	volatile int16_t x132 = INT16_MAX;
	volatile int32_t t27 = 1399333;

	t27 = (x129*(x130|(x131&x132)));

	if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = -625144123;
	int64_t x134 = INT64_MAX;
	int8_t x135 = INT8_MAX;
	uint64_t x136 = UINT64_MAX;
	static uint64_t t28 = 16948LLU;

	t28 = (x133*(x134|(x135&x136)));

	if (t28 != 9223372037479919931LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = UINT64_MAX;
	static uint32_t x139 = 291461U;
	static uint64_t x140 = 8LLU;
	static uint64_t t29 = 25LLU;

	t29 = (x137*(x138|(x139&x140)));

	if (t29 != 2147483648LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x141 = 0;
	int32_t t30 = -94146825;

	t30 = (x141*(x142|(x143&x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MAX;
	volatile uint64_t x146 = 7651214534LLU;
	int64_t x147 = INT64_MIN;
	volatile uint64_t t31 = 9533345904LLU;

	t31 = (x145*(x146|(x147&x148)));

	if (t31 != 9223373008559021626LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = UINT32_MAX;
	static uint32_t x150 = UINT32_MAX;
	volatile int16_t x151 = INT16_MAX;
	volatile int32_t x152 = INT32_MIN;
	uint32_t t32 = 25730184U;

	t32 = (x149*(x150|(x151&x152)));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x153 = INT16_MIN;
	uint32_t x154 = 0U;
	int32_t x155 = -235565;
	static uint32_t x156 = UINT32_MAX;

	t33 = (x153*(x154|(x155&x156)));

	if (t33 != 3424026624U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x165 = INT32_MAX;
	int16_t x168 = -11129;
	static volatile uint64_t t34 = 112785126738704LLU;

	t34 = (x165*(x166|(x167&x168)));

	if (t34 != 18446720174364044153LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = 1;
	static int32_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = INT64_MAX;
	volatile int64_t t35 = 0LL;

	t35 = (x169*(x170|(x171&x172)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x174 = -3;
	int32_t x175 = -1;
	int64_t t36 = -2664175496787LL;

	t36 = (x173*(x174|(x175&x176)));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = -1;
	static uint16_t x180 = UINT16_MAX;
	int64_t t37 = 639382LL;

	t37 = (x177*(x178|(x179&x180)));

	if (t37 != -65535LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = -2120765676056711LL;
	int8_t x182 = -26;
	int32_t x183 = INT32_MIN;
	static int16_t x184 = -40;
	volatile int64_t t38 = -52875824296019065LL;

	t38 = (x181*(x182|(x183&x184)));

	if (t38 != 55139907577474486LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x185 = -1;
	volatile int8_t x186 = -1;
	static uint64_t x187 = UINT64_MAX;
	int32_t x188 = -41114989;
	static volatile uint64_t t39 = 29009780894250LLU;

	t39 = (x185*(x186|(x187&x188)));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x189 = 1U;
	static volatile int8_t x190 = -1;
	uint8_t x191 = 2U;
	static uint16_t x192 = UINT16_MAX;

	t40 = (x189*(x190|(x191&x192)));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MIN;
	int16_t x196 = INT16_MIN;
	volatile int64_t t41 = -2165146840089361466LL;

	t41 = (x193*(x194|(x195&x196)));

	if (t41 != -4161536LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = 2953703080041795247LLU;
	volatile int32_t x204 = -1;

	t42 = (x201*(x202|(x203&x204)));

	if (t42 != 15493040993667756369LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x205 = 61;
	volatile uint64_t x206 = 2711334148700LLU;
	int32_t x207 = 630;
	uint64_t t43 = 73350998569898924LLU;

	t43 = (x205*(x206|(x207&x208)));

	if (t43 != 165391383070700LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = -1;
	int64_t x210 = 39669351LL;
	static uint16_t x212 = 4699U;
	int64_t t44 = 15957950555LL;

	t44 = (x209*(x210|(x211&x212)));

	if (t44 != -39673463LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x213 = INT8_MAX;
	volatile int16_t x215 = 4;
	uint32_t x216 = UINT32_MAX;
	uint32_t t45 = 1239017924U;

	t45 = (x213*(x214|(x215&x216)));

	if (t45 != 26162U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x217 = -190300;
	int8_t x218 = INT8_MAX;
	volatile int32_t t46 = 71518641;

	t46 = (x217*(x218|(x219&x220)));

	if (t46 != 190300) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x222 = INT16_MIN;
	static uint8_t x223 = UINT8_MAX;
	uint16_t x224 = UINT16_MAX;
	static int64_t t47 = -2767835932LL;

	t47 = (x221*(x222|(x223&x224)));

	if (t47 != 6123303342LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x225 = INT32_MAX;
	uint32_t x226 = 395U;
	uint32_t x227 = 945671U;
	int64_t t48 = -453282LL;

	t48 = (x225*(x226|(x227&x228)));

	if (t48 != 7445325804149LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x230 = INT16_MAX;
	uint64_t x231 = 55628LLU;
	volatile int8_t x232 = INT8_MIN;
	volatile uint64_t t49 = 1085741945649LLU;

	t49 = (x229*(x230|(x231&x232)));

	if (t49 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MIN;
	volatile int32_t t50 = 45219400;

	t50 = (x233*(x234|(x235&x236)));

	if (t50 != 4194304) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = -1;
	int8_t x239 = INT8_MAX;
	volatile int16_t x240 = INT16_MIN;
	int32_t t51 = 108;

	t51 = (x237*(x238|(x239&x240)));

	if (t51 != -24) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = INT8_MAX;
	int64_t x242 = 3290825LL;
	uint64_t x243 = UINT64_MAX;
	static int16_t x244 = -1;

	t52 = (x241*(x242|(x243&x244)));

	if (t52 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MAX;
	uint8_t x246 = UINT8_MAX;
	uint64_t x248 = 1311801572208LLU;
	volatile uint64_t t53 = 232422627072LLU;

	t53 = (x245*(x246|(x247&x248)));

	if (t53 != 42983801089457921LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = INT8_MIN;
	static uint8_t x250 = 54U;
	int32_t x251 = INT32_MAX;
	static int64_t x252 = INT64_MAX;
	static volatile int64_t t54 = 14080LL;

	t54 = (x249*(x250|(x251&x252)));

	if (t54 != -274877906816LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = 1016;
	volatile uint8_t x254 = UINT8_MAX;
	static uint8_t x255 = UINT8_MAX;

	t55 = (x253*(x254|(x255&x256)));

	if (t55 != 259080) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x257 = INT16_MIN;
	volatile int8_t x258 = INT8_MIN;
	uint8_t x259 = UINT8_MAX;
	int8_t x260 = INT8_MAX;
	volatile int32_t t56 = 58114;

	t56 = (x257*(x258|(x259&x260)));

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = -1;
	static int16_t x263 = -922;
	int16_t x264 = INT16_MAX;
	volatile int32_t t57 = 528921262;

	t57 = (x261*(x262|(x263&x264)));

	if (t57 != 2147451802) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = INT64_MIN;
	static int16_t x266 = INT16_MAX;
	int8_t x268 = INT8_MIN;

	t58 = (x265*(x266|(x267&x268)));

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x269 = INT16_MIN;
	int8_t x270 = 5;
	int64_t x271 = -1LL;

	t59 = (x269*(x270|(x271&x272)));

	if (t59 != -4161536LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x273 = INT32_MIN;
	int8_t x274 = 2;
	int64_t x275 = INT64_MIN;
	uint8_t x276 = 102U;
	static int64_t t60 = 637377LL;

	t60 = (x273*(x274|(x275&x276)));

	if (t60 != -4294967296LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x277 = INT16_MIN;
	int8_t x278 = -21;
	int64_t x279 = -240937214941LL;
	uint16_t x280 = UINT16_MAX;
	int64_t t61 = 107637LL;

	t61 = (x277*(x278|(x279&x280)));

	if (t61 != 688128LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x281 = 4U;
	int16_t x282 = 861;
	static uint32_t x283 = 126753U;
	static volatile int8_t x284 = INT8_MAX;
	volatile uint32_t t62 = 2447U;

	t62 = (x281*(x282|(x283&x284)));

	if (t62 != 3572U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x285 = -52;
	int32_t x286 = -685;
	static int32_t x287 = INT32_MIN;
	volatile int16_t x288 = INT16_MAX;
	volatile int32_t t63 = 249925315;

	t63 = (x285*(x286|(x287&x288)));

	if (t63 != 35620) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = INT16_MAX;
	uint64_t x290 = 296813LLU;
	uint8_t x291 = 5U;
	uint16_t x292 = 28U;

	t64 = (x289*(x290|(x291&x292)));

	if (t64 != 9725671571LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x293 = UINT8_MAX;
	uint64_t x294 = UINT64_MAX;
	uint32_t x295 = 3837U;
	static int16_t x296 = 346;

	t65 = (x293*(x294|(x295&x296)));

	if (t65 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = INT32_MIN;
	uint32_t x302 = UINT32_MAX;
	int64_t x303 = INT64_MIN;
	volatile uint16_t x304 = 2263U;
	int64_t t66 = -54LL;

	t66 = (x301*(x302|(x303&x304)));

	if (t66 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x305 = -1;
	int64_t x306 = INT64_MAX;
	volatile int8_t x307 = INT8_MIN;
	uint8_t x308 = 0U;
	int64_t t67 = 297940386771472025LL;

	t67 = (x305*(x306|(x307&x308)));

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x309 = INT16_MIN;
	volatile int8_t x311 = INT8_MAX;
	static int8_t x312 = -1;
	static int32_t t68 = -15;

	t68 = (x309*(x310|(x311&x312)));

	if (t68 != -2147450880) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x314 = 4U;
	int64_t x315 = INT64_MIN;

	t69 = (x313*(x314|(x315&x316)));

	if (t69 != 37492LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x317 = 1;
	static volatile uint16_t x318 = 1U;
	int8_t x319 = INT8_MIN;
	static volatile uint64_t x320 = 78503559990LLU;
	static volatile uint64_t t70 = 1209875LLU;

	t70 = (x317*(x318|(x319&x320)));

	if (t70 != 78503559937LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = INT32_MAX;
	static int16_t x332 = -1;
	volatile int64_t t71 = -166874LL;

	t71 = (x329*(x330|(x331&x332)));

	if (t71 != -2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x337 = -25;
	static uint64_t x338 = 231126058178458263LLU;
	static volatile int8_t x339 = -13;
	static uint16_t x340 = 0U;
	static volatile uint64_t t72 = 252463091863LLU;

	t72 = (x337*(x338|(x339&x340)));

	if (t72 != 12668592619248095041LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x345 = INT8_MIN;
	int32_t x346 = -1;
	uint16_t x348 = 3524U;
	volatile int32_t t73 = 801167;

	t73 = (x345*(x346|(x347&x348)));

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x349 = 0;
	uint64_t x350 = 5634062808080034798LLU;
	int8_t x351 = INT8_MAX;
	int16_t x352 = INT16_MIN;
	static uint64_t t74 = 50517081LLU;

	t74 = (x349*(x350|(x351&x352)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x353 = INT16_MIN;
	volatile uint64_t x355 = 39974645921LLU;
	uint64_t t75 = 79906268194889LLU;

	t75 = (x353*(x354|(x355&x356)));

	if (t75 != 32768LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x357 = 26U;
	static uint16_t x360 = UINT16_MAX;
	int32_t t76 = -232869;

	t76 = (x357*(x358|(x359&x360)));

	if (t76 != -3328) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x361 = UINT32_MAX;
	int8_t x362 = INT8_MIN;
	int16_t x363 = -1;
	static volatile uint32_t t77 = 549480U;

	t77 = (x361*(x362|(x363&x364)));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x365 = INT8_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t78 = 156;

	t78 = (x365*(x366|(x367&x368)));

	if (t78 != -16256) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = 1747;
	int16_t x374 = -1;
	volatile uint32_t x375 = UINT32_MAX;
	volatile int64_t t79 = -1647163975438463544LL;

	t79 = (x373*(x374|(x375&x376)));

	if (t79 != -1747LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x377 = -29;
	static int32_t x378 = 1026058;
	volatile int32_t t80 = 414118142;

	t80 = (x377*(x378|(x379&x380)));

	if (t80 != -29755682) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x381 = INT8_MAX;
	static int8_t x382 = INT8_MIN;
	int32_t x383 = INT32_MIN;

	t81 = (x381*(x382|(x383&x384)));

	if (t81 != 4294951040U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x393 = -1;
	uint16_t x394 = 77U;
	int64_t x396 = INT64_MIN;
	volatile int64_t t82 = 22124LL;

	t82 = (x393*(x394|(x395&x396)));

	if (t82 != -77LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x397 = 134U;
	uint8_t x398 = UINT8_MAX;
	int8_t x399 = INT8_MIN;
	volatile uint64_t x400 = 105LLU;
	volatile uint64_t t83 = 393184642283LLU;

	t83 = (x397*(x398|(x399&x400)));

	if (t83 != 34170LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x401 = INT32_MAX;
	volatile int8_t x402 = -11;
	int32_t x403 = INT32_MIN;
	int64_t x404 = INT64_MIN;

	t84 = (x401*(x402|(x403&x404)));

	if (t84 != -23622320117LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x405 = -1LL;
	uint32_t x407 = 2U;
	int64_t x408 = INT64_MAX;

	t85 = (x405*(x406|(x407&x408)));

	if (t85 != -27LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x418 = -1;
	int32_t x419 = -21718;
	static volatile int8_t x420 = INT8_MAX;
	static volatile int32_t t86 = -1374;

	t86 = (x417*(x418|(x419&x420)));

	if (t86 != 27983542) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x421 = -1;
	uint8_t x422 = UINT8_MAX;
	static volatile uint8_t x423 = 6U;
	static int16_t x424 = INT16_MAX;
	volatile int32_t t87 = -90;

	t87 = (x421*(x422|(x423&x424)));

	if (t87 != -255) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x426 = -69545205LL;
	int8_t x427 = -15;
	volatile int64_t t88 = -77235523LL;

	t88 = (x425*(x426|(x427&x428)));

	if (t88 != 138673043058LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x429 = UINT32_MAX;
	volatile int32_t x431 = 0;
	uint32_t t89 = 48065263U;

	t89 = (x429*(x430|(x431&x432)));

	if (t89 != 4294967041U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x433 = -99;
	static int16_t x434 = 0;
	int32_t x435 = INT32_MIN;
	uint32_t x436 = UINT32_MAX;

	t90 = (x433*(x434|(x435&x436)));

	if (t90 != 2147483648U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x437 = UINT32_MAX;
	uint64_t x438 = 14357686328030LLU;
	int8_t x439 = INT8_MIN;
	int16_t x440 = INT16_MIN;
	volatile uint64_t t91 = 2543640LLU;

	t91 = (x437*(x438|(x439&x440)));

	if (t91 != 18446632877006284066LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x441 = 6U;
	uint16_t x442 = 2565U;
	uint16_t x443 = 256U;
	int16_t x444 = -1;
	int32_t t92 = -108;

	t92 = (x441*(x442|(x443&x444)));

	if (t92 != 16926) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x445 = 963U;
	volatile int8_t x446 = INT8_MAX;
	uint32_t x448 = UINT32_MAX;

	t93 = (x445*(x446|(x447&x448)));

	if (t93 != 122301U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x449 = INT32_MIN;
	static uint32_t x450 = 5U;
	int8_t x451 = -1;
	uint16_t x452 = UINT16_MAX;
	volatile uint32_t t94 = 11044520U;

	t94 = (x449*(x450|(x451&x452)));

	if (t94 != 2147483648U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x454 = UINT64_MAX;
	static uint32_t x455 = 2859622U;
	int64_t x456 = INT64_MIN;
	uint64_t t95 = 1739864515450161946LLU;

	t95 = (x453*(x454|(x455&x456)));

	if (t95 != 32768LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x457 = INT8_MAX;
	int32_t x458 = 270;
	uint32_t x459 = 2U;

	t96 = (x457*(x458|(x459&x460)));

	if (t96 != 34290U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x462 = 242030434LLU;
	volatile int64_t x463 = 12LL;
	int16_t x464 = INT16_MIN;
	volatile uint64_t t97 = 180267820LLU;

	t97 = (x461*(x462|(x463&x464)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x466 = -180;
	int16_t x467 = INT16_MIN;
	uint32_t x468 = UINT32_MAX;
	volatile uint64_t t98 = 6865LLU;

	t98 = (x465*(x466|(x467&x468)));

	if (t98 != 399431941788LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x469 = INT8_MAX;
	int16_t x470 = INT16_MIN;
	static int32_t t99 = 1;

	t99 = (x469*(x470|(x471&x472)));

	if (t99 != -4161536) { NG(); } else { ; }
	
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

