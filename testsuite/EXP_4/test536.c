#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MIN;
uint64_t x6 = 5LLU;
static volatile int64_t x7 = -1LL;
volatile int64_t t4 = 4148598577480897LL;
int16_t x28 = 1;
volatile uint64_t t5 = 2905398772634LLU;
int64_t x30 = 6886888LL;
int64_t x46 = 1942957761312953114LL;
static volatile int16_t x53 = INT16_MIN;
uint8_t x67 = 0U;
volatile int64_t x74 = INT64_MIN;
int64_t x87 = 54LL;
int64_t t15 = -225297LL;
static uint64_t t16 = 10LLU;
int32_t x94 = -1;
static int16_t x97 = -1;
int16_t x106 = INT16_MIN;
static uint64_t x107 = UINT64_MAX;
uint8_t x117 = 35U;
int16_t x119 = INT16_MAX;
volatile int64_t x133 = 2955LL;
int16_t x136 = -3198;
uint8_t x140 = UINT8_MAX;
int8_t x147 = INT8_MIN;
volatile uint64_t t27 = 100785268498LLU;
uint64_t t28 = 1754853LLU;
static int32_t x159 = INT32_MAX;
static int32_t x165 = INT32_MIN;
volatile int8_t x172 = 1;
uint32_t t31 = 1013889U;
volatile int32_t x173 = 446776;
volatile uint8_t x179 = 0U;
static volatile uint8_t x181 = 18U;
int16_t x182 = INT16_MAX;
static volatile uint8_t x185 = 41U;
volatile uint32_t x186 = UINT32_MAX;
int64_t x192 = -685605656LL;
int64_t x202 = INT64_MAX;
volatile uint16_t x207 = UINT16_MAX;
volatile int64_t x216 = 51LL;
int64_t t42 = 1274740LL;
uint16_t x223 = 7U;
volatile int32_t t44 = -1;
uint64_t x229 = 550833410986083LLU;
int64_t x230 = INT64_MIN;
static volatile uint64_t t46 = 3684367944014LLU;
volatile int8_t x243 = INT8_MAX;
int32_t t49 = 216409;
volatile uint64_t t51 = 171100514890LLU;
int32_t x255 = -1;
uint64_t t52 = 7759LLU;
int16_t x262 = 7;
uint16_t x264 = UINT16_MAX;
int64_t t56 = 66086LL;
int64_t x279 = INT64_MIN;
int32_t x282 = INT32_MIN;
static volatile uint16_t x284 = UINT16_MAX;
int16_t x291 = INT16_MIN;
static uint64_t t60 = 29771386241181LLU;
int64_t x299 = 1074381295239316LL;
uint32_t x302 = UINT32_MAX;
int32_t x303 = 346256071;
uint64_t x305 = 39593838898485LLU;
static volatile int8_t x322 = INT8_MIN;
int32_t x323 = 9209443;
int16_t x324 = INT16_MIN;
volatile int32_t t67 = -64;
uint32_t x331 = 76444081U;
static volatile uint32_t t72 = 628591327U;
int16_t x353 = -1;
int16_t x363 = -92;
volatile int32_t t74 = 49372;
int8_t x370 = 0;
static int8_t x371 = INT8_MIN;
int8_t x374 = INT8_MIN;
uint32_t x384 = 7005977U;
volatile uint64_t x385 = UINT64_MAX;
int8_t x393 = INT8_MIN;
static volatile uint8_t x401 = 10U;
static int16_t x402 = INT16_MIN;
volatile int8_t x403 = INT8_MIN;
uint32_t x405 = UINT32_MAX;
volatile uint32_t t83 = 105668767U;
int32_t x422 = -1;
uint16_t x424 = UINT16_MAX;
volatile int16_t x425 = INT16_MAX;
uint64_t x428 = UINT64_MAX;
uint8_t x434 = UINT8_MAX;
volatile int32_t x443 = INT32_MIN;
int16_t x446 = INT16_MIN;
int8_t x450 = INT8_MIN;
static uint32_t x455 = 211U;
static uint32_t x456 = 97853984U;
uint64_t x458 = UINT64_MAX;
int64_t x462 = -1LL;
volatile int32_t x465 = INT32_MAX;
int16_t x467 = 231;
uint32_t x475 = 27924919U;
int16_t x482 = INT16_MIN;
int64_t x483 = 1350495875746LL;


void f0(void) {
	int32_t x2 = INT32_MIN;
	int16_t x3 = INT16_MIN;
	static uint64_t x4 = UINT64_MAX;
	static uint64_t t0 = 4000314372127493342LLU;

	t0 = (x1*(x2*(x3/x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	static uint64_t x8 = 3493883762318495870LLU;
	volatile uint64_t t1 = 5LLU;

	t1 = (x5*(x6*(x7/x8)));

	if (t1 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 204U;
	int16_t x10 = -1;
	int32_t x11 = INT32_MAX;
	int32_t x12 = -586;
	int32_t t2 = -3;

	t2 = (x9*(x10*(x11/x12)));

	if (t2 != 747587988) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = 119361309U;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = UINT8_MAX;
	uint32_t x16 = UINT32_MAX;
	uint32_t t3 = 891992163U;

	t3 = (x13*(x14*(x15/x16)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 21196389U;
	volatile uint8_t x22 = 0U;
	int16_t x23 = -7462;
	int64_t x24 = -12LL;

	t4 = (x21*(x22*(x23/x24)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = UINT8_MAX;
	uint8_t x26 = UINT8_MAX;
	static volatile uint64_t x27 = UINT64_MAX;

	t5 = (x25*(x26*(x27/x28)));

	if (t5 != 18446744073709486591LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	uint16_t x31 = 14U;
	uint32_t x32 = UINT32_MAX;
	static int64_t t6 = 0LL;

	t6 = (x29*(x30*(x31/x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 179U;
	static int32_t x42 = -1;
	int8_t x43 = INT8_MIN;
	volatile int64_t x44 = 918333LL;
	int64_t t7 = 314289647538718LL;

	t7 = (x41*(x42*(x43/x44)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 22392006U;
	int16_t x47 = 7784;
	volatile int32_t x48 = INT32_MAX;
	volatile int64_t t8 = 30LL;

	t8 = (x45*(x46*(x47/x48)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x54 = 912957U;
	volatile int32_t x55 = INT32_MIN;
	static volatile uint32_t x56 = 66U;
	volatile uint32_t t9 = 62500U;

	t9 = (x53*(x54*(x55/x56)));

	if (t9 != 1296990208U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MIN;
	uint8_t x63 = UINT8_MAX;
	int8_t x64 = INT8_MIN;
	static int32_t t10 = -7551;

	t10 = (x61*(x62*(x63/x64)));

	if (t10 != -4194304) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = 6U;
	uint32_t x68 = UINT32_MAX;
	volatile uint32_t t11 = 9288072U;

	t11 = (x65*(x66*(x67/x68)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x69 = 233U;
	volatile int32_t x70 = 570;
	int8_t x71 = 0;
	uint32_t x72 = 481380U;
	volatile uint32_t t12 = 2255963U;

	t12 = (x69*(x70*(x71/x72)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = INT16_MAX;
	uint16_t x75 = 1U;
	static int8_t x76 = INT8_MIN;
	volatile int64_t t13 = 3213422160LL;

	t13 = (x73*(x74*(x75/x76)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x81 = 113571LLU;
	static uint8_t x82 = 3U;
	int32_t x83 = 2092405;
	uint16_t x84 = 9769U;
	uint64_t t14 = 5794146LLU;

	t14 = (x81*(x82*(x83/x84)));

	if (t14 != 72912582LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = -1;
	int16_t x88 = INT16_MIN;

	t15 = (x85*(x86*(x87/x88)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = -1;
	static int32_t x90 = 56440811;
	uint64_t x91 = 49LLU;
	int16_t x92 = -9;

	t16 = (x89*(x90*(x91/x92)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MIN;
	int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MIN;
	int32_t t17 = 14078;

	t17 = (x93*(x94*(x95/x96)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x98 = 670372545U;
	int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MAX;
	volatile uint32_t t18 = 1448U;

	t18 = (x97*(x98*(x99/x100)));

	if (t18 != 670372545U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = 236150542955LLU;
	int8_t x108 = 23;
	volatile uint64_t t19 = 5035489LLU;

	t19 = (x105*(x106*(x107/x108)));

	if (t19 != 11230471570342739968LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x109 = -404;
	uint16_t x110 = 0U;
	int64_t x111 = -1LL;
	volatile int16_t x112 = -144;
	int64_t t20 = -310289212LL;

	t20 = (x109*(x110*(x111/x112)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = -1;
	int16_t x114 = -1;
	uint64_t x115 = UINT64_MAX;
	uint64_t x116 = UINT64_MAX;
	uint64_t t21 = 137832775555LLU;

	t21 = (x113*(x114*(x115/x116)));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x118 = -7585LL;
	volatile int32_t x120 = INT32_MIN;
	static volatile int64_t t22 = 306LL;

	t22 = (x117*(x118*(x119/x120)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x121 = INT8_MIN;
	uint16_t x122 = 110U;
	uint64_t x123 = UINT64_MAX;
	static int32_t x124 = INT32_MAX;
	volatile uint64_t t23 = 21937280653LLU;

	t23 = (x121*(x122*(x123/x124)));

	if (t23 != 18446623127430439936LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = INT8_MIN;
	int64_t x130 = 7601329LL;
	static uint16_t x131 = 9U;
	uint16_t x132 = 77U;
	volatile int64_t t24 = -327338737LL;

	t24 = (x129*(x130*(x131/x132)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x134 = -1LL;
	uint32_t x135 = 262215847U;
	int64_t t25 = 551002413540782353LL;

	t25 = (x133*(x134*(x135/x136)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x138 = 91681117LL;
	volatile int32_t x139 = 434;
	static volatile int64_t t26 = 50220LL;

	t26 = (x137*(x138*(x139/x140)));

	if (t26 != 393767399084068515LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x145 = 961041485501811343LLU;
	int16_t x146 = INT16_MIN;
	static uint8_t x148 = 10U;

	t27 = (x145*(x146*(x147/x148)));

	if (t27 != 15336413140084195328LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x149 = 53956541931340LLU;
	int32_t x150 = 574;
	volatile int32_t x151 = -1;
	static uint32_t x152 = 21U;

	t28 = (x149*(x150*(x151/x152)));

	if (t28 != 10670997582182042848LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x157 = INT16_MIN;
	int64_t x158 = 0LL;
	uint64_t x160 = 644110423000083742LLU;
	volatile uint64_t t29 = 3950298312772LLU;

	t29 = (x157*(x158*(x159/x160)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x166 = UINT32_MAX;
	static volatile uint64_t x167 = UINT64_MAX;
	volatile int8_t x168 = -1;
	uint64_t t30 = 1LLU;

	t30 = (x165*(x166*(x167/x168)));

	if (t30 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = INT16_MIN;
	static uint32_t x170 = UINT32_MAX;
	static int32_t x171 = -280;

	t31 = (x169*(x170*(x171/x172)));

	if (t31 != 4285792256U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	uint64_t x176 = 50048720314LLU;
	uint64_t t32 = 2951266463LLU;

	t32 = (x173*(x174*(x175/x176)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x177 = 36U;
	uint8_t x178 = UINT8_MAX;
	static uint16_t x180 = UINT16_MAX;
	uint32_t t33 = 272U;

	t33 = (x177*(x178*(x179/x180)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x183 = 3779U;
	int16_t x184 = INT16_MIN;
	volatile int32_t t34 = 969622220;

	t34 = (x181*(x182*(x183/x184)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x187 = 2033181U;
	int32_t x188 = 1725108;
	volatile uint32_t t35 = 19492273U;

	t35 = (x185*(x186*(x187/x188)));

	if (t35 != 4294967255U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = -16884LL;
	int8_t x190 = INT8_MAX;
	uint64_t x191 = 744323956LLU;
	uint64_t t36 = 0LLU;

	t36 = (x189*(x190*(x191/x192)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x193 = INT32_MIN;
	static uint32_t x194 = UINT32_MAX;
	uint32_t x195 = 1424698227U;
	uint8_t x196 = UINT8_MAX;
	uint32_t t37 = 30574U;

	t37 = (x193*(x194*(x195/x196)));

	if (t37 != 2147483648U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x197 = INT8_MIN;
	static uint16_t x198 = 6120U;
	volatile uint8_t x199 = 7U;
	static volatile int8_t x200 = INT8_MIN;
	int32_t t38 = -974930;

	t38 = (x197*(x198*(x199/x200)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x201 = 265981368027939LLU;
	static int32_t x203 = 1338;
	int32_t x204 = -16716017;
	uint64_t t39 = 1523400865396LLU;

	t39 = (x201*(x202*(x203/x204)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = 103436238;
	uint64_t x208 = 715084LLU;
	uint64_t t40 = 1164176762443962682LLU;

	t40 = (x205*(x206*(x207/x208)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x209 = 132621LLU;
	static uint16_t x210 = 990U;
	static uint32_t x211 = 43835U;
	int32_t x212 = INT32_MAX;
	volatile uint64_t t41 = 1LLU;

	t41 = (x209*(x210*(x211/x212)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x213 = 29420;
	uint32_t x214 = 35U;
	int16_t x215 = INT16_MIN;

	t42 = (x213*(x214*(x215/x216)));

	if (t42 != -661067400LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x217 = 0LLU;
	volatile int8_t x218 = -1;
	int64_t x219 = INT64_MIN;
	static int64_t x220 = 1947431007018201804LL;
	volatile uint64_t t43 = 3262LLU;

	t43 = (x217*(x218*(x219/x220)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x221 = -1;
	static uint16_t x222 = UINT16_MAX;
	static volatile int16_t x224 = INT16_MAX;

	t44 = (x221*(x222*(x223/x224)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MAX;
	int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MIN;
	int64_t t45 = -2LL;

	t45 = (x225*(x226*(x227/x228)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x231 = 4U;
	uint64_t x232 = 900843224750LLU;

	t46 = (x229*(x230*(x231/x232)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x233 = -40164003075LL;
	uint32_t x234 = 2016U;
	int64_t x235 = 116LL;
	volatile int64_t x236 = 1147LL;
	volatile int64_t t47 = -5310929LL;

	t47 = (x233*(x234*(x235/x236)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = -6;
	int64_t x238 = -1LL;
	int16_t x239 = INT16_MIN;
	static volatile int8_t x240 = INT8_MAX;
	volatile int64_t t48 = -613925459808744530LL;

	t48 = (x237*(x238*(x239/x240)));

	if (t48 != -1548LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x241 = 1075U;
	int32_t x242 = INT32_MAX;
	int16_t x244 = INT16_MIN;

	t49 = (x241*(x242*(x243/x244)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x245 = INT32_MIN;
	uint64_t x246 = 124516939LLU;
	volatile uint8_t x247 = 81U;
	int32_t x248 = 473112;
	volatile uint64_t t50 = 13085LLU;

	t50 = (x245*(x246*(x247/x248)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MIN;
	volatile uint64_t x250 = UINT64_MAX;
	int32_t x251 = -1;
	int32_t x252 = INT32_MAX;

	t51 = (x249*(x250*(x251/x252)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = 13277869LL;
	int16_t x254 = 1658;
	static uint64_t x256 = 304562LLU;

	t52 = (x253*(x254*(x255/x256)));

	if (t52 != 3134762983652660922LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	static int8_t x259 = 5;
	uint16_t x260 = UINT16_MAX;
	int32_t t53 = 57719920;

	t53 = (x257*(x258*(x259/x260)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x261 = UINT8_MAX;
	static int64_t x263 = INT64_MIN;
	int64_t t54 = -8666780442LL;

	t54 = (x261*(x262*(x263/x264)));

	if (t54 != -251220250031063040LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = -1;
	static uint64_t x270 = 5746527LLU;
	static volatile uint32_t x271 = UINT32_MAX;
	int32_t x272 = -5204;
	volatile uint64_t t55 = 2685526228LLU;

	t55 = (x269*(x270*(x271/x272)));

	if (t55 != 18446744073703805089LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = 0;
	uint8_t x274 = UINT8_MAX;
	int16_t x275 = INT16_MAX;
	int64_t x276 = INT64_MAX;

	t56 = (x273*(x274*(x275/x276)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x277 = -1;
	static int32_t x278 = 2;
	int16_t x280 = -21;
	static int64_t t57 = 88LL;

	t57 = (x277*(x278*(x279/x280)));

	if (t57 != -878416384462359600LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x281 = 6509;
	uint16_t x283 = 1990U;
	int32_t t58 = 2572;

	t58 = (x281*(x282*(x283/x284)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x285 = UINT16_MAX;
	volatile int32_t x286 = INT32_MIN;
	int8_t x287 = 0;
	static int16_t x288 = -1;
	volatile int32_t t59 = -39;

	t59 = (x285*(x286*(x287/x288)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x289 = 1;
	uint64_t x290 = 582209669428663LLU;
	int16_t x292 = INT16_MAX;

	t60 = (x289*(x290*(x291/x292)));

	if (t60 != 18446161864040122953LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x293 = INT8_MIN;
	int32_t x294 = 0;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = UINT16_MAX;
	static int64_t t61 = -780LL;

	t61 = (x293*(x294*(x295/x296)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x297 = 3916042561LLU;
	uint8_t x298 = UINT8_MAX;
	int16_t x300 = INT16_MIN;
	static volatile uint64_t t62 = 14LLU;

	t62 = (x297*(x298*(x299/x300)));

	if (t62 != 1658044590079398185LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = 243U;
	int32_t x304 = -1015479;
	uint32_t t63 = 7979U;

	t63 = (x301*(x302*(x303/x304)));

	if (t63 != 82620U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x306 = -1;
	int64_t x307 = -1LL;
	volatile uint32_t x308 = 5298U;
	static volatile uint64_t t64 = 51554644051LLU;

	t64 = (x305*(x306*(x307/x308)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = -1;
	int8_t x314 = -1;
	volatile int32_t x315 = 1;
	uint32_t x316 = 3U;
	static volatile uint32_t t65 = 3978U;

	t65 = (x313*(x314*(x315/x316)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x317 = -240;
	int16_t x318 = INT16_MAX;
	static int32_t x319 = INT32_MIN;
	static uint32_t x320 = 1056263643U;
	uint32_t t66 = 1234796U;

	t66 = (x317*(x318*(x319/x320)));

	if (t66 != 4279239136U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x321 = 1U;

	t67 = (x321*(x322*(x323/x324)));

	if (t67 != 35968) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = -14;
	volatile int32_t x326 = -116;
	static int16_t x327 = INT16_MIN;
	uint32_t x328 = 5730U;
	volatile uint32_t t68 = 102342174U;

	t68 = (x325*(x326*(x327/x328)));

	if (t68 != 1217272448U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	int32_t x332 = -1;
	uint32_t t69 = 1507850073U;

	t69 = (x329*(x330*(x331/x332)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x333 = 32U;
	int16_t x334 = INT16_MIN;
	int64_t x335 = -47755273736LL;
	int8_t x336 = INT8_MIN;
	volatile int64_t t70 = -2440757322198LL;

	t70 = (x333*(x334*(x335/x336)));

	if (t70 != -391211202379776LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x337 = 57U;
	static volatile int32_t x338 = -1;
	uint32_t x339 = 1950U;
	int8_t x340 = INT8_MIN;
	volatile uint32_t t71 = 7703U;

	t71 = (x337*(x338*(x339/x340)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x349 = INT32_MIN;
	static int8_t x350 = -7;
	static int8_t x351 = INT8_MIN;
	static uint32_t x352 = UINT32_MAX;

	t72 = (x349*(x350*(x351/x352)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x354 = -1LL;
	volatile int16_t x355 = INT16_MIN;
	volatile int32_t x356 = INT32_MIN;
	int64_t t73 = -1263005682011485LL;

	t73 = (x353*(x354*(x355/x356)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x361 = INT8_MIN;
	static volatile int8_t x362 = 37;
	volatile int32_t x364 = INT32_MIN;

	t74 = (x361*(x362*(x363/x364)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x369 = 2126;
	uint8_t x372 = 78U;
	volatile int32_t t75 = -2949403;

	t75 = (x369*(x370*(x371/x372)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x373 = INT32_MIN;
	int8_t x375 = -1;
	int64_t x376 = -1LL;
	volatile int64_t t76 = -17400605737341832LL;

	t76 = (x373*(x374*(x375/x376)));

	if (t76 != 274877906944LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x377 = UINT64_MAX;
	static int8_t x378 = INT8_MIN;
	static uint64_t x379 = 228191810271218LLU;
	int16_t x380 = -1;
	uint64_t t77 = 365548537200LLU;

	t77 = (x377*(x378*(x379/x380)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x381 = 102534037;
	int32_t x382 = -1;
	int8_t x383 = 0;
	volatile uint32_t t78 = 3209960U;

	t78 = (x381*(x382*(x383/x384)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x386 = 14520576579LL;
	static int32_t x387 = 116909;
	int8_t x388 = INT8_MIN;
	volatile uint64_t t79 = 1358152408LLU;

	t79 = (x385*(x386*(x387/x388)));

	if (t79 != 13257286416627LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;
	volatile int64_t t80 = 55LL;

	t80 = (x389*(x390*(x391/x392)));

	if (t80 != -2305772640469516288LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x394 = 3875LLU;
	volatile int64_t x395 = -1LL;
	int64_t x396 = -1LL;
	uint64_t t81 = 241702593838069686LLU;

	t81 = (x393*(x394*(x395/x396)));

	if (t81 != 18446744073709055616LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x404 = -971099LL;
	volatile int64_t t82 = -30292230LL;

	t82 = (x401*(x402*(x403/x404)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x406 = -1;
	static uint8_t x407 = 85U;
	int8_t x408 = INT8_MAX;

	t83 = (x405*(x406*(x407/x408)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x409 = INT64_MIN;
	int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MAX;
	static int64_t t84 = -401283282529LL;

	t84 = (x409*(x410*(x411/x412)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x417 = INT8_MAX;
	int32_t x418 = 687217;
	static uint8_t x419 = 59U;
	int32_t x420 = INT32_MIN;
	volatile int32_t t85 = 213937;

	t85 = (x417*(x418*(x419/x420)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x421 = 26912U;
	volatile uint8_t x423 = 10U;
	volatile int32_t t86 = 0;

	t86 = (x421*(x422*(x423/x424)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x426 = UINT32_MAX;
	int8_t x427 = 0;
	static uint64_t t87 = 183630LLU;

	t87 = (x425*(x426*(x427/x428)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x429 = 26;
	uint64_t x430 = 32LLU;
	int64_t x431 = 3601004LL;
	uint32_t x432 = UINT32_MAX;
	volatile uint64_t t88 = 34LLU;

	t88 = (x429*(x430*(x431/x432)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x433 = INT8_MIN;
	int32_t x435 = INT32_MIN;
	static int64_t x436 = -1LL;
	static volatile int64_t t89 = -124094977393LL;

	t89 = (x433*(x434*(x435/x436)));

	if (t89 != -70093866270720LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x437 = UINT8_MAX;
	int16_t x438 = -1;
	int64_t x439 = -1018521318137LL;
	volatile int16_t x440 = INT16_MAX;
	int64_t t90 = 23031177448639LL;

	t90 = (x437*(x438*(x439/x440)));

	if (t90 != 7926356760LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x441 = INT8_MIN;
	static uint64_t x442 = 66774861653146019LLU;
	static int32_t x444 = -4;
	uint64_t t91 = 364727087408LLU;

	t91 = (x441*(x442*(x443/x444)));

	if (t91 != 12956968071972519936LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x445 = 53725314123489LLU;
	volatile int8_t x447 = INT8_MAX;
	int8_t x448 = INT8_MIN;
	uint64_t t92 = 1LLU;

	t92 = (x445*(x446*(x447/x448)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x449 = -113;
	uint32_t x451 = UINT32_MAX;
	static volatile uint64_t x452 = UINT64_MAX;
	volatile uint64_t t93 = 6LLU;

	t93 = (x449*(x450*(x451/x452)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x453 = INT32_MIN;
	int8_t x454 = -1;
	static volatile uint32_t t94 = 2U;

	t94 = (x453*(x454*(x455/x456)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x457 = -753;
	int32_t x459 = INT32_MIN;
	volatile int16_t x460 = INT16_MAX;
	uint64_t t95 = 155668589699645756LLU;

	t95 = (x457*(x458*(x459/x460)));

	if (t95 != 18446744073660201502LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x461 = INT16_MIN;
	volatile int32_t x463 = -1;
	static uint64_t x464 = 606LLU;
	static uint64_t t96 = 45LLU;

	t96 = (x461*(x462*(x463/x464)));

	if (t96 != 1339367556506943488LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x466 = INT32_MIN;
	static volatile int32_t x468 = INT32_MAX;
	static volatile int32_t t97 = -189002058;

	t97 = (x465*(x466*(x467/x468)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x473 = INT32_MAX;
	uint16_t x474 = 15624U;
	int32_t x476 = INT32_MAX;
	volatile uint32_t t98 = 1547U;

	t98 = (x473*(x474*(x475/x476)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x481 = INT16_MAX;
	volatile uint64_t x484 = 146468211825868491LLU;
	uint64_t t99 = 806810042682386LLU;

	t99 = (x481*(x482*(x483/x484)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

