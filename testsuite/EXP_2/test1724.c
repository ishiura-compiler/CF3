#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = 1392786517402083072LL;
static int32_t t4 = -48;
uint32_t x33 = UINT32_MAX;
int16_t x50 = INT16_MIN;
volatile int32_t x56 = -1272737;
int8_t x61 = -1;
int32_t t14 = -15373132;
uint16_t x78 = 4827U;
int64_t x83 = -1LL;
static int32_t t17 = -2215;
static int16_t x93 = -1;
uint64_t x96 = 52880LLU;
static volatile uint32_t x109 = UINT32_MAX;
uint64_t x110 = UINT64_MAX;
volatile int32_t t23 = -629458719;
volatile int16_t x125 = -1;
volatile uint64_t x141 = 7718360999756094705LLU;
uint64_t x147 = 3659416355693687441LLU;
int8_t x149 = 0;
int8_t x151 = INT8_MIN;
volatile int32_t t29 = -42;
static volatile int32_t t30 = 1844629;
static int64_t x166 = -20548179LL;
volatile uint64_t x170 = 585344124422933730LLU;
uint64_t x176 = UINT64_MAX;
volatile int32_t t35 = 1074760;
int32_t t37 = -12;
uint8_t x203 = 9U;
static int16_t x204 = -24;
int8_t x207 = 0;
int64_t x209 = -22892LL;
volatile uint8_t x212 = 16U;
static int32_t t44 = -236209;
uint32_t x241 = 4538060U;
int32_t x243 = INT32_MIN;
int16_t x244 = 1;
int16_t x251 = 2758;
int8_t x257 = 49;
static volatile int32_t t53 = -93317;
uint8_t x276 = UINT8_MAX;
static volatile int32_t t55 = -568;
int16_t x277 = INT16_MIN;
volatile int16_t x283 = INT16_MIN;
int16_t x289 = INT16_MIN;
volatile int64_t x290 = INT64_MIN;
static volatile int16_t x294 = 0;
uint8_t x295 = UINT8_MAX;
uint8_t x299 = UINT8_MAX;
int64_t x309 = 3379080LL;
uint64_t x311 = 1253256346802LLU;
volatile uint32_t x315 = 71U;
static int32_t x327 = 1642;
int32_t t67 = -55920576;
static int8_t x332 = -1;
int8_t x337 = INT8_MIN;
uint16_t x342 = 10U;
volatile int8_t x352 = 1;
static int8_t x353 = INT8_MIN;
int16_t x355 = 184;
int8_t x365 = 0;
volatile int32_t t79 = -357131;
int32_t x385 = INT32_MIN;
uint32_t x392 = 131462832U;
static int8_t x401 = INT8_MAX;
uint16_t x402 = UINT16_MAX;
int32_t x405 = -1;
int8_t x407 = INT8_MIN;
static uint16_t x408 = 459U;
int32_t x410 = -4;
static int32_t t86 = 593038;
volatile int8_t x421 = 10;
static int32_t t88 = -100629;
uint32_t x431 = UINT32_MAX;
uint32_t x437 = 10U;
int32_t x451 = INT32_MIN;
uint32_t x462 = 17536850U;
volatile int16_t x464 = 196;
int32_t t96 = 416;
volatile int32_t x471 = -1;
static volatile int8_t x473 = -1;
int16_t x476 = -3471;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MIN;
	uint64_t x3 = 0LLU;
	static volatile int32_t t0 = 1;

	t0 = ((x1*(x2&x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -136;
	uint8_t x6 = UINT8_MAX;
	uint16_t x7 = 28382U;
	volatile int64_t x8 = 15292LL;
	volatile int32_t t1 = 1;

	t1 = ((x5*(x6&x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	int8_t x10 = INT8_MAX;
	int8_t x11 = 1;
	int16_t x12 = INT16_MAX;
	int32_t t2 = 5826534;

	t2 = ((x9*(x10&x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int64_t x14 = 215845614508897LL;
	volatile int64_t x15 = INT64_MAX;
	static uint64_t x16 = 23407777226877LLU;
	volatile int32_t t3 = -316;

	t3 = ((x13*(x14&x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 68U;
	uint8_t x18 = UINT8_MAX;
	int64_t x19 = INT64_MAX;
	uint8_t x20 = 1U;

	t4 = ((x17*(x18&x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = 7;
	int64_t x26 = -502813497LL;
	volatile uint8_t x27 = 12U;
	int32_t x28 = 499;
	static int32_t t5 = -57;

	t5 = ((x25*(x26&x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 86U;
	int64_t x30 = -100245154841LL;
	uint16_t x31 = 1257U;
	uint16_t x32 = 0U;
	volatile int32_t t6 = 2068169;

	t6 = ((x29*(x30&x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = INT16_MAX;
	volatile int64_t x35 = INT64_MIN;
	int16_t x36 = 245;
	volatile int32_t t7 = 7662076;

	t7 = ((x33*(x34&x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	static int16_t x38 = INT16_MAX;
	uint8_t x39 = 0U;
	int64_t x40 = -1LL;
	volatile int32_t t8 = 10;

	t8 = ((x37*(x38&x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 1;
	int16_t x42 = INT16_MIN;
	volatile uint8_t x43 = UINT8_MAX;
	volatile int16_t x44 = INT16_MIN;
	int32_t t9 = 13;

	t9 = ((x41*(x42&x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	int64_t x51 = -17029655910562LL;
	static int64_t x52 = INT64_MAX;
	static volatile int32_t t10 = 7;

	t10 = ((x49*(x50&x51))==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x53 = 0U;
	volatile uint16_t x54 = UINT16_MAX;
	uint64_t x55 = 7533869195344708LLU;
	static int32_t t11 = -10135;

	t11 = ((x53*(x54&x55))==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x57 = 5784U;
	int16_t x58 = -1;
	int8_t x59 = -1;
	volatile int8_t x60 = INT8_MIN;
	int32_t t12 = 79671;

	t12 = ((x57*(x58&x59))==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x62 = 8U;
	volatile int8_t x63 = INT8_MIN;
	int64_t x64 = INT64_MIN;
	volatile int32_t t13 = 2643290;

	t13 = ((x61*(x62&x63))==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = INT16_MAX;
	uint16_t x74 = 155U;
	static volatile int8_t x75 = INT8_MIN;
	uint16_t x76 = UINT16_MAX;

	t14 = ((x73*(x74&x75))==x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MIN;
	static uint16_t x79 = 1U;
	static volatile uint16_t x80 = UINT16_MAX;
	int32_t t15 = 4903;

	t15 = ((x77*(x78&x79))==x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x81 = 40741075U;
	int8_t x82 = 7;
	static int8_t x84 = 0;
	static volatile int32_t t16 = 90331;

	t16 = ((x81*(x82&x83))==x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x89 = UINT32_MAX;
	int32_t x90 = -1;
	int32_t x91 = INT32_MAX;
	uint8_t x92 = UINT8_MAX;

	t17 = ((x89*(x90&x91))==x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x94 = -1;
	uint32_t x95 = 1U;
	int32_t t18 = 62632;

	t18 = ((x93*(x94&x95))==x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int64_t x98 = INT64_MIN;
	uint32_t x99 = UINT32_MAX;
	volatile uint8_t x100 = 1U;
	volatile int32_t t19 = 11290;

	t19 = ((x97*(x98&x99))==x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x101 = -1;
	int16_t x102 = -1;
	static uint8_t x103 = 84U;
	volatile uint16_t x104 = 617U;
	static int32_t t20 = -219;

	t20 = ((x101*(x102&x103))==x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x111 = -1LL;
	int16_t x112 = -1;
	int32_t t21 = -30496379;

	t21 = ((x109*(x110&x111))==x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = -1;
	volatile uint8_t x114 = UINT8_MAX;
	static int16_t x115 = 0;
	int32_t x116 = -1869;
	int32_t t22 = 1112714;

	t22 = ((x113*(x114&x115))==x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x121 = -1623904081LL;
	int16_t x122 = INT16_MIN;
	int32_t x123 = -123461807;
	int8_t x124 = -1;

	t23 = ((x121*(x122&x123))==x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x126 = 2195228647097LLU;
	uint16_t x127 = 499U;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t24 = 821;

	t24 = ((x125*(x126&x127))==x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x133 = 23;
	uint8_t x134 = 3U;
	int64_t x135 = -1LL;
	uint32_t x136 = 84778U;
	int32_t t25 = -217;

	t25 = ((x133*(x134&x135))==x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x142 = INT8_MIN;
	static int8_t x143 = INT8_MAX;
	int8_t x144 = 0;
	volatile int32_t t26 = 254;

	t26 = ((x141*(x142&x143))==x144);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x145 = UINT16_MAX;
	uint16_t x146 = 5U;
	volatile uint64_t x148 = UINT64_MAX;
	int32_t t27 = 19350455;

	t27 = ((x145*(x146&x147))==x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x150 = UINT64_MAX;
	int32_t x152 = -1110;
	volatile int32_t t28 = 20860;

	t28 = ((x149*(x150&x151))==x152);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x153 = 0;
	int32_t x154 = INT32_MAX;
	volatile int32_t x155 = -1;
	static uint16_t x156 = UINT16_MAX;

	t29 = ((x153*(x154&x155))==x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x157 = UINT16_MAX;
	static volatile int16_t x158 = INT16_MIN;
	static volatile int32_t x159 = 119;
	uint64_t x160 = UINT64_MAX;

	t30 = ((x157*(x158&x159))==x160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x165 = INT8_MIN;
	volatile uint8_t x167 = 5U;
	static int16_t x168 = INT16_MIN;
	static int32_t t31 = 0;

	t31 = ((x165*(x166&x167))==x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = INT8_MIN;
	int16_t x171 = 9;
	static uint32_t x172 = 14335U;
	volatile int32_t t32 = -273;

	t32 = ((x169*(x170&x171))==x172);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = INT64_MAX;
	volatile int64_t x174 = INT64_MIN;
	uint32_t x175 = UINT32_MAX;
	static int32_t t33 = -30;

	t33 = ((x173*(x174&x175))==x176);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = INT16_MIN;
	volatile int32_t x178 = -27397;
	int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MAX;
	volatile int32_t t34 = -31998;

	t34 = ((x177*(x178&x179))==x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x181 = 3506996U;
	static int32_t x182 = 22542;
	int64_t x183 = INT64_MIN;
	static volatile uint64_t x184 = 370LLU;

	t35 = ((x181*(x182&x183))==x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x185 = UINT8_MAX;
	uint32_t x186 = UINT32_MAX;
	uint32_t x187 = 8961U;
	int8_t x188 = INT8_MAX;
	int32_t t36 = -6322784;

	t36 = ((x185*(x186&x187))==x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = 5;
	int32_t x190 = -1;
	volatile uint64_t x191 = 2LLU;
	static int8_t x192 = 1;

	t37 = ((x189*(x190&x191))==x192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = -19;
	int64_t x198 = INT64_MIN;
	static volatile uint32_t x199 = 5209861U;
	int64_t x200 = INT64_MAX;
	volatile int32_t t38 = 269860716;

	t38 = ((x197*(x198&x199))==x200);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x201 = -1;
	int16_t x202 = INT16_MAX;
	int32_t t39 = -36690298;

	t39 = ((x201*(x202&x203))==x204);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x205 = INT32_MAX;
	static int32_t x206 = INT32_MIN;
	static int64_t x208 = INT64_MIN;
	volatile int32_t t40 = 28006368;

	t40 = ((x205*(x206&x207))==x208);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x210 = 171134885U;
	int8_t x211 = 2;
	volatile int32_t t41 = 1;

	t41 = ((x209*(x210&x211))==x212);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x213 = INT16_MAX;
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MIN;
	int32_t x216 = INT32_MIN;
	int32_t t42 = 696;

	t42 = ((x213*(x214&x215))==x216);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x217 = 118238814LL;
	uint64_t x218 = 68LLU;
	int16_t x219 = -1;
	int16_t x220 = INT16_MIN;
	int32_t t43 = -7314151;

	t43 = ((x217*(x218&x219))==x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = 0;
	uint32_t x223 = 38080954U;
	int64_t x224 = INT64_MIN;

	t44 = ((x221*(x222&x223))==x224);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x226 = UINT32_MAX;
	int32_t x227 = INT32_MIN;
	uint64_t x228 = 4453267LLU;
	int32_t t45 = 20025750;

	t45 = ((x225*(x226&x227))==x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = INT8_MIN;
	volatile int32_t x230 = 467;
	volatile uint16_t x231 = UINT16_MAX;
	uint32_t x232 = 5190U;
	static int32_t t46 = -850230;

	t46 = ((x229*(x230&x231))==x232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x237 = 10U;
	uint32_t x238 = 42524273U;
	volatile uint16_t x239 = 1210U;
	int32_t x240 = INT32_MAX;
	static volatile int32_t t47 = 0;

	t47 = ((x237*(x238&x239))==x240);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x242 = 79LLU;
	int32_t t48 = -27;

	t48 = ((x241*(x242&x243))==x244);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x245 = 21970U;
	static int8_t x246 = -1;
	uint16_t x247 = UINT16_MAX;
	static int32_t x248 = -2;
	volatile int32_t t49 = -5;

	t49 = ((x245*(x246&x247))==x248);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x249 = -1;
	static uint32_t x250 = 11715510U;
	static uint16_t x252 = UINT16_MAX;
	volatile int32_t t50 = -31;

	t50 = ((x249*(x250&x251))==x252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x253 = -1;
	uint16_t x254 = 3U;
	uint8_t x255 = UINT8_MAX;
	uint16_t x256 = UINT16_MAX;
	static volatile int32_t t51 = -584;

	t51 = ((x253*(x254&x255))==x256);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x258 = 380168U;
	int32_t x259 = -2489955;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t52 = 13842239;

	t52 = ((x257*(x258&x259))==x260);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x261 = -1;
	static int16_t x262 = INT16_MAX;
	static int64_t x263 = INT64_MIN;
	uint64_t x264 = 4106266571LLU;

	t53 = ((x261*(x262&x263))==x264);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x269 = 502493U;
	volatile uint16_t x270 = 14172U;
	int32_t x271 = 2121;
	int16_t x272 = -7;
	volatile int32_t t54 = -15691;

	t54 = ((x269*(x270&x271))==x272);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x273 = 6U;
	int32_t x274 = -1;
	uint64_t x275 = UINT64_MAX;

	t55 = ((x273*(x274&x275))==x276);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x278 = -1;
	static int32_t x279 = 2;
	uint32_t x280 = 3869U;
	int32_t t56 = 3876979;

	t56 = ((x277*(x278&x279))==x280);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x281 = 238LLU;
	int64_t x282 = INT64_MAX;
	volatile uint8_t x284 = 48U;
	volatile int32_t t57 = 685234210;

	t57 = ((x281*(x282&x283))==x284);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x291 = INT8_MAX;
	int32_t x292 = INT32_MIN;
	static int32_t t58 = 136782;

	t58 = ((x289*(x290&x291))==x292);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x293 = 1206U;
	volatile uint64_t x296 = UINT64_MAX;
	int32_t t59 = 1;

	t59 = ((x293*(x294&x295))==x296);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = 2LL;
	int32_t x298 = INT32_MIN;
	uint8_t x300 = 0U;
	static int32_t t60 = 436;

	t60 = ((x297*(x298&x299))==x300);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x301 = 1;
	uint16_t x302 = UINT16_MAX;
	static volatile int8_t x303 = 3;
	static int32_t x304 = 246;
	int32_t t61 = -106073960;

	t61 = ((x301*(x302&x303))==x304);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x305 = 0U;
	int8_t x306 = -1;
	static uint64_t x307 = 759503139713166552LLU;
	static volatile int8_t x308 = 58;
	volatile int32_t t62 = 795035939;

	t62 = ((x305*(x306&x307))==x308);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x310 = 14261057U;
	uint64_t x312 = 84827LLU;
	volatile int32_t t63 = -38;

	t63 = ((x309*(x310&x311))==x312);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x313 = INT16_MIN;
	uint8_t x314 = 3U;
	int64_t x316 = -1LL;
	volatile int32_t t64 = 149580;

	t64 = ((x313*(x314&x315))==x316);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MIN;
	uint32_t x319 = UINT32_MAX;
	int32_t x320 = 32916682;
	volatile int32_t t65 = -19424951;

	t65 = ((x317*(x318&x319))==x320);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x321 = UINT8_MAX;
	int64_t x322 = -66419016LL;
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t66 = 34;

	t66 = ((x321*(x322&x323))==x324);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x325 = -1;
	int8_t x326 = 16;
	uint64_t x328 = 16264665837920355LLU;

	t67 = ((x325*(x326&x327))==x328);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x329 = -15;
	int64_t x330 = -5692762LL;
	int16_t x331 = 2;
	int32_t t68 = -8485;

	t68 = ((x329*(x330&x331))==x332);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x338 = INT8_MAX;
	uint16_t x339 = 17930U;
	static int32_t x340 = 49;
	volatile int32_t t69 = -41560566;

	t69 = ((x337*(x338&x339))==x340);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x341 = 1U;
	int8_t x343 = 1;
	static int8_t x344 = INT8_MAX;
	int32_t t70 = -136060888;

	t70 = ((x341*(x342&x343))==x344);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x345 = 45940U;
	int8_t x346 = 60;
	uint32_t x347 = UINT32_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t71 = 11089692;

	t71 = ((x345*(x346&x347))==x348);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x349 = -29695452;
	uint8_t x350 = 8U;
	int64_t x351 = -1080779028870LL;
	volatile int32_t t72 = 202;

	t72 = ((x349*(x350&x351))==x352);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x354 = 15;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t73 = 1678623;

	t73 = ((x353*(x354&x355))==x356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x357 = INT8_MIN;
	static int64_t x358 = -1LL;
	int32_t x359 = INT32_MIN;
	volatile uint64_t x360 = 24227469LLU;
	int32_t t74 = -3057;

	t74 = ((x357*(x358&x359))==x360);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x361 = -1;
	volatile int8_t x362 = 31;
	int8_t x363 = INT8_MAX;
	int32_t x364 = INT32_MIN;
	volatile int32_t t75 = 9656711;

	t75 = ((x361*(x362&x363))==x364);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x366 = -1;
	uint8_t x367 = UINT8_MAX;
	volatile uint64_t x368 = 278868LLU;
	int32_t t76 = 2828650;

	t76 = ((x365*(x366&x367))==x368);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x373 = UINT64_MAX;
	uint64_t x374 = 3739307849658LLU;
	int32_t x375 = INT32_MAX;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t77 = 401763124;

	t77 = ((x373*(x374&x375))==x376);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x377 = 1192;
	int32_t x378 = -4;
	int64_t x379 = -893247872630841LL;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t78 = -25;

	t78 = ((x377*(x378&x379))==x380);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x382 = 115U;
	uint8_t x383 = UINT8_MAX;
	volatile uint8_t x384 = UINT8_MAX;

	t79 = ((x381*(x382&x383))==x384);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x386 = INT16_MIN;
	uint32_t x387 = 231U;
	static uint32_t x388 = UINT32_MAX;
	volatile int32_t t80 = 15365349;

	t80 = ((x385*(x386&x387))==x388);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x389 = -9;
	volatile int8_t x390 = INT8_MIN;
	static uint32_t x391 = UINT32_MAX;
	int32_t t81 = -179877;

	t81 = ((x389*(x390&x391))==x392);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x393 = 24811939LLU;
	int8_t x394 = INT8_MIN;
	volatile uint16_t x395 = 2996U;
	volatile uint64_t x396 = 4602279998613381738LLU;
	volatile int32_t t82 = 62;

	t82 = ((x393*(x394&x395))==x396);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x403 = INT64_MIN;
	int32_t x404 = -36173027;
	volatile int32_t t83 = -13677309;

	t83 = ((x401*(x402&x403))==x404);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x406 = 41200302;
	volatile int32_t t84 = 245240;

	t84 = ((x405*(x406&x407))==x408);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x409 = 703;
	uint8_t x411 = 79U;
	int64_t x412 = -1LL;
	volatile int32_t t85 = -5127903;

	t85 = ((x409*(x410&x411))==x412);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x413 = 5;
	static uint16_t x414 = UINT16_MAX;
	int16_t x415 = -1;
	uint32_t x416 = UINT32_MAX;

	t86 = ((x413*(x414&x415))==x416);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x422 = INT16_MIN;
	uint16_t x423 = 3201U;
	int8_t x424 = -1;
	int32_t t87 = 0;

	t87 = ((x421*(x422&x423))==x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x425 = 0;
	volatile uint32_t x426 = 45939312U;
	int8_t x427 = -1;
	int16_t x428 = -1;

	t88 = ((x425*(x426&x427))==x428);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x429 = UINT8_MAX;
	static uint64_t x430 = 9466649205999LLU;
	volatile int32_t x432 = -1;
	int32_t t89 = 2756588;

	t89 = ((x429*(x430&x431))==x432);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x433 = INT16_MAX;
	volatile int32_t x434 = INT32_MIN;
	static int32_t x435 = INT32_MAX;
	static int64_t x436 = INT64_MIN;
	int32_t t90 = 171058181;

	t90 = ((x433*(x434&x435))==x436);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x438 = INT64_MIN;
	static uint32_t x439 = 1348U;
	uint32_t x440 = 1374134742U;
	int32_t t91 = 1;

	t91 = ((x437*(x438&x439))==x440);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x441 = 3U;
	volatile int8_t x442 = 1;
	int16_t x443 = 2;
	int8_t x444 = INT8_MIN;
	volatile int32_t t92 = -315293763;

	t92 = ((x441*(x442&x443))==x444);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x445 = 225882LLU;
	int8_t x446 = 10;
	int8_t x447 = INT8_MIN;
	volatile uint16_t x448 = 1U;
	int32_t t93 = -2815;

	t93 = ((x445*(x446&x447))==x448);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x449 = UINT64_MAX;
	volatile int64_t x450 = INT64_MIN;
	int16_t x452 = INT16_MIN;
	volatile int32_t t94 = 688780353;

	t94 = ((x449*(x450&x451))==x452);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x453 = INT16_MAX;
	uint32_t x454 = 14342126U;
	static int32_t x455 = INT32_MAX;
	int8_t x456 = INT8_MIN;
	int32_t t95 = -27452729;

	t95 = ((x453*(x454&x455))==x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x461 = 5U;
	static volatile int16_t x463 = -1;

	t96 = ((x461*(x462&x463))==x464);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x465 = -1;
	int32_t x466 = -1;
	int16_t x467 = INT16_MAX;
	int32_t x468 = INT32_MIN;
	int32_t t97 = 14732;

	t97 = ((x465*(x466&x467))==x468);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x469 = INT16_MIN;
	int16_t x470 = 2;
	int64_t x472 = INT64_MAX;
	volatile int32_t t98 = -4439301;

	t98 = ((x469*(x470&x471))==x472);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x474 = -1LL;
	static int8_t x475 = INT8_MAX;
	volatile int32_t t99 = -197;

	t99 = ((x473*(x474&x475))==x476);

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

