#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = -1LL;
static uint64_t t0 = 66LLU;
int64_t x15 = -962589LL;
uint8_t x23 = UINT8_MAX;
volatile int64_t t2 = -62125641780027LL;
int64_t x27 = -1LL;
int16_t x35 = INT16_MIN;
static uint8_t x46 = 39U;
static volatile uint8_t x88 = 1U;
static uint64_t x89 = 467121184804161LLU;
uint8_t x92 = 54U;
int16_t x93 = 1344;
int16_t x105 = INT16_MIN;
int8_t x109 = INT8_MIN;
uint32_t x112 = UINT32_MAX;
uint64_t x116 = 104LLU;
volatile int64_t t23 = -79661689861917LL;
int16_t x139 = -1;
int32_t x140 = 187;
static int16_t x147 = INT16_MIN;
static uint8_t x157 = 120U;
static int64_t x159 = INT64_MIN;
int64_t t30 = 1LL;
uint16_t x162 = 33U;
volatile uint32_t t32 = 92U;
volatile int8_t x171 = -2;
uint8_t x179 = 3U;
uint64_t x186 = UINT64_MAX;
static int32_t x188 = 432503;
static uint32_t x189 = 23617767U;
volatile uint64_t t37 = 17LLU;
static volatile uint64_t t39 = 274046855753807010LLU;
static volatile int32_t t42 = 487779;
volatile uint64_t t45 = 6218041985LLU;
static volatile uint64_t t46 = 214719LLU;
static uint16_t x238 = 0U;
int16_t x240 = -1;
uint8_t x253 = UINT8_MAX;
static int16_t x270 = INT16_MAX;
static uint64_t x276 = UINT64_MAX;
int64_t x310 = INT64_MIN;
volatile int8_t x313 = INT8_MIN;
int8_t x321 = 6;
static uint16_t x328 = 7053U;
static uint16_t x334 = 5U;
static uint8_t x340 = UINT8_MAX;
volatile int64_t t65 = 14265343881888LL;
uint32_t x357 = UINT32_MAX;
static volatile uint64_t t67 = 197409LLU;
volatile int64_t x366 = INT64_MIN;
static volatile uint64_t t68 = 73328600867LLU;
static volatile uint16_t x369 = 75U;
uint8_t x376 = 80U;
static volatile int16_t x379 = INT16_MIN;
volatile int32_t x383 = -754785;
int16_t x384 = 14933;
int8_t x387 = 1;
static int8_t x389 = INT8_MAX;
int16_t x390 = 61;
int64_t x395 = INT64_MIN;
int8_t x400 = INT8_MIN;
static volatile uint32_t x403 = 398U;
volatile int8_t x405 = -1;
static int8_t x406 = INT8_MIN;
uint64_t t79 = 7681LLU;
uint32_t x414 = 312298U;
static uint8_t x419 = 7U;
static uint8_t x422 = UINT8_MAX;
volatile int64_t t83 = -6679549037LL;
static int16_t x437 = INT16_MIN;
volatile int16_t x439 = -684;
uint8_t x442 = 0U;
static volatile uint64_t x450 = 3046294563LLU;
volatile uint64_t t88 = 13739959152LLU;
uint32_t t89 = 271771U;
volatile int64_t x462 = INT64_MAX;
volatile int16_t x478 = INT16_MAX;
uint64_t x485 = 1696204LLU;
volatile uint64_t t97 = 953736LLU;
uint64_t t98 = 3318LLU;


void f0(void) {
	uint32_t x10 = 6U;
	uint64_t x11 = UINT64_MAX;
	int16_t x12 = INT16_MIN;

	t0 = ((x9*(x10%x11))*x12);

	if (t0 != 196608LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -1;
	int64_t x14 = INT64_MIN;
	int32_t x16 = -52343517;
	volatile int64_t t1 = 263405406306LL;

	t1 = ((x13*(x14%x15))*x16);

	if (t1 != -17295292543623LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = -1LL;
	int16_t x22 = 2;
	volatile int8_t x24 = INT8_MIN;

	t2 = ((x21*(x22%x23))*x24);

	if (t2 != 256LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x25 = UINT8_MAX;
	int64_t x26 = -1LL;
	static int32_t x28 = INT32_MIN;
	int64_t t3 = 1LL;

	t3 = ((x25*(x26%x27))*x28);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x33 = 125U;
	int32_t x34 = -1;
	uint32_t x36 = UINT32_MAX;
	static uint32_t t4 = 198U;

	t4 = ((x33*(x34%x35))*x36);

	if (t4 != 125U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x42 = 7;
	int8_t x43 = 7;
	static uint64_t x44 = 31909521LLU;
	volatile uint64_t t5 = 507153130738064LLU;

	t5 = ((x41*(x42%x43))*x44);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = INT16_MIN;
	int16_t x47 = -1;
	uint64_t x48 = UINT64_MAX;
	static uint64_t t6 = 5777136220326388826LLU;

	t6 = ((x45*(x46%x47))*x48);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x49 = 16U;
	uint8_t x50 = 94U;
	static int32_t x51 = INT32_MIN;
	uint64_t x52 = UINT64_MAX;
	uint64_t t7 = 81936LLU;

	t7 = ((x49*(x50%x51))*x52);

	if (t7 != 18446744073709550112LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x57 = INT16_MAX;
	int32_t x58 = -2693;
	volatile uint8_t x59 = 1U;
	volatile uint16_t x60 = UINT16_MAX;
	volatile int32_t t8 = -1;

	t8 = ((x57*(x58%x59))*x60);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MIN;
	static uint16_t x62 = 1U;
	static int16_t x63 = INT16_MIN;
	static volatile int8_t x64 = -1;
	volatile int32_t t9 = 14;

	t9 = ((x61*(x62%x63))*x64);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = INT32_MIN;
	static int16_t x66 = INT16_MIN;
	int64_t x67 = 39124813025000117LL;
	uint32_t x68 = 3U;
	volatile int64_t t10 = -2036904700853LL;

	t10 = ((x65*(x66%x67))*x68);

	if (t10 != 211106232532992LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x73 = -1LL;
	int8_t x74 = INT8_MAX;
	volatile int16_t x75 = INT16_MAX;
	int8_t x76 = INT8_MAX;
	volatile int64_t t11 = -6LL;

	t11 = ((x73*(x74%x75))*x76);

	if (t11 != -16129LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x77 = 0U;
	int8_t x78 = INT8_MAX;
	static int8_t x79 = INT8_MIN;
	uint32_t x80 = 2212U;
	uint32_t t12 = 1739654639U;

	t12 = ((x77*(x78%x79))*x80);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x81 = INT16_MAX;
	static int16_t x82 = -3986;
	static volatile int8_t x83 = -1;
	int8_t x84 = 5;
	int32_t t13 = 2469;

	t13 = ((x81*(x82%x83))*x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x85 = 619399317U;
	int8_t x86 = 15;
	volatile int16_t x87 = INT16_MIN;
	static uint32_t t14 = 0U;

	t14 = ((x85*(x86%x87))*x88);

	if (t14 != 701055163U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x90 = -1;
	static volatile int32_t x91 = INT32_MIN;
	uint64_t t15 = 14939LLU;

	t15 = ((x89*(x90%x91))*x92);

	if (t15 != 18421519529730126922LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x94 = 70217LLU;
	static int16_t x95 = INT16_MIN;
	int8_t x96 = -1;
	static volatile uint64_t t16 = 27733217LLU;

	t16 = ((x93*(x94%x95))*x96);

	if (t16 != 18446744073615179968LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x97 = -346LL;
	static volatile uint32_t x98 = UINT32_MAX;
	static int8_t x99 = -17;
	int16_t x100 = 7718;
	volatile int64_t t17 = 5229994434LL;

	t17 = ((x97*(x98%x99))*x100);

	if (t17 != -42726848LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x101 = UINT32_MAX;
	volatile uint64_t x102 = 20698126804585736LLU;
	volatile uint16_t x103 = UINT16_MAX;
	int64_t x104 = INT64_MAX;
	uint64_t t18 = 32969623434LLU;

	t18 = ((x101*(x102%x103))*x104);

	if (t18 != 9223154492466316763LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x106 = UINT8_MAX;
	int32_t x107 = INT32_MIN;
	uint32_t x108 = 148U;
	uint32_t t19 = 318941U;

	t19 = ((x105*(x106%x107))*x108);

	if (t19 != 3058302976U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x110 = INT8_MAX;
	static int32_t x111 = INT32_MIN;
	uint32_t t20 = 2065557640U;

	t20 = ((x109*(x110%x111))*x112);

	if (t20 != 16256U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = -1LL;
	uint8_t x114 = 45U;
	int8_t x115 = -48;
	static volatile uint64_t t21 = 6254506040458772LLU;

	t21 = ((x113*(x114%x115))*x116);

	if (t21 != 18446744073709546936LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = UINT64_MAX;
	static volatile uint32_t x118 = 39U;
	int32_t x119 = INT32_MIN;
	int64_t x120 = 47935556618862904LL;
	volatile uint64_t t22 = 5809229219104425479LLU;

	t22 = ((x117*(x118%x119))*x120);

	if (t22 != 16577257365573898360LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x121 = -1;
	uint16_t x122 = UINT16_MAX;
	volatile int64_t x123 = -1LL;
	int64_t x124 = -1LL;

	t23 = ((x121*(x122%x123))*x124);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = INT8_MIN;
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = INT8_MIN;
	uint16_t x128 = 6108U;
	volatile uint64_t t24 = 7206LLU;

	t24 = ((x125*(x126%x127))*x128);

	if (t24 != 18446744073610259968LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = 1;
	int16_t x130 = -1900;
	uint32_t x131 = 28U;
	int32_t x132 = -8;
	uint32_t t25 = 1246U;

	t25 = ((x129*(x130%x131))*x132);

	if (t25 != 4294967232U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	int16_t x135 = -1;
	uint16_t x136 = 0U;
	int32_t t26 = 7156743;

	t26 = ((x133*(x134%x135))*x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x137 = INT64_MIN;
	static int64_t x138 = 4073296242LL;
	int64_t t27 = -111488376205773LL;

	t27 = ((x137*(x138%x139))*x140);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = -11;
	int8_t x146 = -1;
	uint32_t x148 = 1U;
	uint32_t t28 = 2140799848U;

	t28 = ((x145*(x146%x147))*x148);

	if (t28 != 11U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = -57898LL;
	int16_t x154 = INT16_MAX;
	static volatile int16_t x155 = INT16_MIN;
	uint8_t x156 = UINT8_MAX;
	int64_t t29 = 33259658LL;

	t29 = ((x153*(x154%x155))*x156);

	if (t29 != -483771660330LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x158 = INT64_MIN;
	int64_t x160 = INT64_MAX;

	t30 = ((x157*(x158%x159))*x160);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = INT16_MIN;
	volatile int64_t x163 = -7050LL;
	static int64_t x164 = -1LL;
	static int64_t t31 = 402456282235671LL;

	t31 = ((x161*(x162%x163))*x164);

	if (t31 != 1081344LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x165 = 12868U;
	int32_t x166 = 38195676;
	volatile uint16_t x167 = 1U;
	volatile int8_t x168 = INT8_MIN;

	t32 = ((x165*(x166%x167))*x168);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x169 = 0U;
	uint32_t x170 = 2646771U;
	int8_t x172 = 0;
	uint32_t t33 = 59U;

	t33 = ((x169*(x170%x171))*x172);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = 5;
	volatile int64_t x178 = INT64_MAX;
	static uint8_t x180 = 23U;
	int64_t t34 = 188329160LL;

	t34 = ((x177*(x178%x179))*x180);

	if (t34 != 115LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x181 = 1293U;
	volatile int8_t x182 = INT8_MIN;
	int8_t x183 = -1;
	int32_t x184 = -756186686;
	volatile int32_t t35 = 0;

	t35 = ((x181*(x182%x183))*x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int64_t x187 = -10LL;
	uint64_t t36 = 77LLU;

	t36 = ((x185*(x186%x187))*x188);

	if (t36 != 16718276159904465LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x190 = INT64_MAX;
	uint16_t x191 = 92U;
	uint64_t x192 = 161LLU;

	t37 = ((x189*(x190%x191))*x192);

	if (t37 != 269974694577LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x197 = UINT32_MAX;
	static int8_t x198 = INT8_MIN;
	uint32_t x199 = 1U;
	static int8_t x200 = INT8_MIN;
	uint32_t t38 = 118174812U;

	t38 = ((x197*(x198%x199))*x200);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x201 = UINT64_MAX;
	int16_t x202 = 0;
	int64_t x203 = 5483657435804LL;
	int16_t x204 = INT16_MIN;

	t39 = ((x201*(x202%x203))*x204);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x205 = INT16_MIN;
	static uint16_t x206 = 11930U;
	volatile uint8_t x207 = UINT8_MAX;
	static uint32_t x208 = 0U;
	uint32_t t40 = 815309470U;

	t40 = ((x205*(x206%x207))*x208);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x209 = 197282921923LLU;
	static int16_t x210 = INT16_MIN;
	static int32_t x211 = INT32_MIN;
	uint32_t x212 = UINT32_MAX;
	uint64_t t41 = 608937949LLU;

	t41 = ((x209*(x210%x211))*x212);

	if (t41 != 13922165202895339520LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x213 = 1U;
	static int8_t x214 = 7;
	uint8_t x215 = 3U;
	int8_t x216 = INT8_MIN;

	t42 = ((x213*(x214%x215))*x216);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x217 = 199512073112977413LLU;
	uint8_t x218 = 66U;
	int8_t x219 = INT8_MIN;
	volatile uint64_t x220 = UINT64_MAX;
	uint64_t t43 = 1838215749473165LLU;

	t43 = ((x217*(x218%x219))*x220);

	if (t43 != 5278947248253042358LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = INT32_MIN;
	volatile int64_t x226 = 8650634027429LL;
	uint32_t x227 = 556810U;
	static int64_t x228 = -1LL;
	static volatile int64_t t44 = 1932601308397502200LL;

	t44 = ((x225*(x226%x227))*x228);

	if (t44 != 985327774728192LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MAX;
	uint64_t x231 = 12LLU;
	static uint8_t x232 = 1U;

	t45 = ((x229*(x230%x231))*x232);

	if (t45 != 229369LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = 10;
	uint64_t x234 = 3884601744590876099LLU;
	int64_t x235 = 127024855264817LL;
	static volatile uint16_t x236 = 25U;

	t46 = ((x233*(x234%x235))*x236);

	if (t46 != 13661434376855500LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x237 = 0U;
	uint32_t x239 = UINT32_MAX;
	volatile uint32_t t47 = 87793U;

	t47 = ((x237*(x238%x239))*x240);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x245 = 490544273U;
	volatile int64_t x246 = -1LL;
	static uint32_t x247 = 1139689U;
	static volatile int8_t x248 = INT8_MAX;
	volatile int64_t t48 = -55933547275620LL;

	t48 = ((x245*(x246%x247))*x248);

	if (t48 != -62299122671LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x254 = 52;
	int16_t x255 = -1;
	uint16_t x256 = 585U;
	volatile int32_t t49 = 481;

	t49 = ((x253*(x254%x255))*x256);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = INT8_MIN;
	static int64_t x258 = -1LL;
	int32_t x259 = INT32_MIN;
	int64_t x260 = -1LL;
	volatile int64_t t50 = 124421LL;

	t50 = ((x257*(x258%x259))*x260);

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x261 = UINT32_MAX;
	int64_t x262 = 13006LL;
	int16_t x263 = INT16_MIN;
	volatile int8_t x264 = 1;
	volatile int64_t t51 = 33048254971837LL;

	t51 = ((x261*(x262%x263))*x264);

	if (t51 != 55860344638770LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = -1;
	int32_t x266 = -58;
	int32_t x267 = INT32_MAX;
	volatile int8_t x268 = INT8_MAX;
	int32_t t52 = 1;

	t52 = ((x265*(x266%x267))*x268);

	if (t52 != 7366) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x269 = -1;
	uint8_t x271 = 3U;
	static int16_t x272 = -2;
	static volatile int32_t t53 = 12258;

	t53 = ((x269*(x270%x271))*x272);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x273 = -7;
	int16_t x274 = 0;
	int32_t x275 = 9344;
	volatile uint64_t t54 = 2577479561269LLU;

	t54 = ((x273*(x274%x275))*x276);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = 0;
	int16_t x278 = -1;
	int8_t x279 = INT8_MAX;
	int8_t x280 = INT8_MIN;
	volatile int32_t t55 = 412;

	t55 = ((x277*(x278%x279))*x280);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x281 = 16LL;
	int16_t x282 = INT16_MAX;
	int16_t x283 = -1;
	static int8_t x284 = INT8_MIN;
	volatile int64_t t56 = 257927LL;

	t56 = ((x281*(x282%x283))*x284);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x285 = UINT32_MAX;
	volatile int8_t x286 = 0;
	volatile int32_t x287 = 2071;
	static int64_t x288 = 6627422189696711LL;
	static int64_t t57 = -2LL;

	t57 = ((x285*(x286%x287))*x288);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x298 = 65U;
	uint8_t x299 = UINT8_MAX;
	uint32_t x300 = 5U;
	uint32_t t58 = 6645U;

	t58 = ((x297*(x298%x299))*x300);

	if (t58 != 4294925696U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x309 = 0;
	volatile uint64_t x311 = 42145449LLU;
	static uint64_t x312 = 14692798816988609LLU;
	static volatile uint64_t t59 = 140LLU;

	t59 = ((x309*(x310%x311))*x312);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x314 = -1;
	int32_t x315 = 12091420;
	int16_t x316 = INT16_MIN;
	static int32_t t60 = 2661214;

	t60 = ((x313*(x314%x315))*x316);

	if (t60 != -4194304) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x322 = -1;
	uint8_t x323 = 8U;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t61 = 524567514;

	t61 = ((x321*(x322%x323))*x324);

	if (t61 != 196608) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x325 = 1U;
	static int64_t x326 = INT64_MAX;
	uint32_t x327 = 15522U;
	volatile int64_t t62 = -271LL;

	t62 = ((x325*(x326%x327))*x328);

	if (t62 != 49561431LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x329 = INT8_MIN;
	volatile uint32_t x330 = 983946422U;
	static volatile int8_t x331 = -1;
	int8_t x332 = INT8_MAX;
	volatile uint32_t t63 = 5U;

	t63 = ((x329*(x330%x331))*x332);

	if (t63 != 3720141568U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x333 = -1LL;
	uint8_t x335 = 41U;
	volatile int32_t x336 = 3093;
	volatile int64_t t64 = 61LL;

	t64 = ((x333*(x334%x335))*x336);

	if (t64 != -15465LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x337 = INT64_MIN;
	int32_t x338 = INT32_MIN;
	static int32_t x339 = -1;

	t65 = ((x337*(x338%x339))*x340);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x358 = 6824573U;
	int64_t x359 = -959478836577683LL;
	uint64_t x360 = 3922440699906854LLU;
	static volatile uint64_t t66 = 242322921046LLU;

	t66 = ((x357*(x358%x359))*x360);

	if (t66 != 16282424690642092658LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x361 = -1;
	uint64_t x362 = 12842550087407LLU;
	int32_t x363 = 692159964;
	volatile uint8_t x364 = UINT8_MAX;

	t67 = ((x361*(x362%x363))*x364);

	if (t67 != 18446744019110137111LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x365 = INT64_MIN;
	static uint64_t x367 = 129820142649081LLU;
	uint16_t x368 = UINT16_MAX;

	t68 = ((x365*(x366%x367))*x368);

	if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x370 = INT64_MIN;
	uint64_t x371 = 696673LLU;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t69 = 3929169511LLU;

	t69 = ((x369*(x370%x371))*x372);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x373 = INT8_MIN;
	uint16_t x374 = 1047U;
	uint64_t x375 = 4805416LLU;
	volatile uint64_t t70 = 950162464LLU;

	t70 = ((x373*(x374%x375))*x376);

	if (t70 != 18446744073698830336LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x377 = -1;
	uint32_t x378 = 3698U;
	int8_t x380 = INT8_MAX;
	uint32_t t71 = 289494736U;

	t71 = ((x377*(x378%x379))*x380);

	if (t71 != 4294497650U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x381 = 218LLU;
	uint16_t x382 = UINT16_MAX;
	volatile uint64_t t72 = 25151664470709813LLU;

	t72 = ((x381*(x382%x383))*x384);

	if (t72 != 213342245790LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x385 = INT32_MIN;
	uint32_t x386 = 32614299U;
	uint32_t x388 = 63533915U;
	uint32_t t73 = 1U;

	t73 = ((x385*(x386%x387))*x388);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x391 = 3U;
	volatile int32_t x392 = INT32_MIN;
	static volatile uint32_t t74 = 34398852U;

	t74 = ((x389*(x390%x391))*x392);

	if (t74 != 2147483648U) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x393 = 1364011;
	volatile uint16_t x394 = 37U;
	volatile int32_t x396 = -1;
	int64_t t75 = -59612117601621805LL;

	t75 = ((x393*(x394%x395))*x396);

	if (t75 != -50468407LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x397 = 54;
	uint64_t x398 = 0LLU;
	uint8_t x399 = 53U;
	uint64_t t76 = 163780443936466LLU;

	t76 = ((x397*(x398%x399))*x400);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x401 = INT16_MIN;
	static uint8_t x402 = 76U;
	uint16_t x404 = 218U;
	uint32_t t77 = 84U;

	t77 = ((x401*(x402%x403))*x404);

	if (t77 != 3752067072U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x407 = INT16_MAX;
	uint64_t x408 = 0LLU;
	uint64_t t78 = 974586161794LLU;

	t78 = ((x405*(x406%x407))*x408);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x409 = 30187576477211433LLU;
	volatile int64_t x410 = -1LL;
	static int16_t x411 = -1;
	volatile int16_t x412 = -1;

	t79 = ((x409*(x410%x411))*x412);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x413 = UINT64_MAX;
	int64_t x415 = INT64_MIN;
	int64_t x416 = INT64_MAX;
	volatile uint64_t t80 = 7495014449609LLU;

	t80 = ((x413*(x414%x415))*x416);

	if (t80 != 312298LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x417 = 7368612;
	static uint64_t x418 = 43442675138934LLU;
	uint32_t x420 = 32907959U;
	volatile uint64_t t81 = 21LLU;

	t81 = ((x417*(x418%x419))*x420);

	if (t81 != 242485981582908LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x421 = 46784LL;
	uint8_t x423 = 13U;
	uint64_t x424 = UINT64_MAX;
	uint64_t t82 = 9LLU;

	t82 = ((x421*(x422%x423))*x424);

	if (t82 != 18446744073709177344LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x425 = INT32_MIN;
	int8_t x426 = INT8_MIN;
	uint32_t x427 = UINT32_MAX;
	static int64_t x428 = -11867746852LL;

	t83 = ((x425*(x426%x427))*x428);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x429 = -1;
	volatile int64_t x430 = INT64_MIN;
	int32_t x431 = INT32_MAX;
	volatile int32_t x432 = 3213822;
	int64_t t84 = 62483731299226LL;

	t84 = ((x429*(x430%x431))*x432);

	if (t84 != 6427644LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x438 = 7598;
	int64_t x440 = 19408737LL;
	volatile int64_t t85 = -345063451LL;

	t85 = ((x437*(x438%x439))*x440);

	if (t85 != -47062926557184LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x441 = -2;
	static uint8_t x443 = UINT8_MAX;
	int32_t x444 = INT32_MIN;
	volatile int32_t t86 = 53961;

	t86 = ((x441*(x442%x443))*x444);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x445 = -1;
	static volatile int16_t x446 = -1;
	int32_t x447 = INT32_MAX;
	uint32_t x448 = UINT32_MAX;
	static volatile uint32_t t87 = UINT32_MAX;

	t87 = ((x445*(x446%x447))*x448);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x449 = UINT8_MAX;
	int32_t x451 = 17;
	volatile uint16_t x452 = 1191U;

	t88 = ((x449*(x450%x451))*x452);

	if (t88 != 4251870LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x453 = 15804529;
	volatile uint8_t x454 = UINT8_MAX;
	uint32_t x455 = UINT32_MAX;
	static uint16_t x456 = 17U;

	t89 = ((x453*(x454%x455))*x456);

	if (t89 != 4088123775U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x457 = 71U;
	volatile uint16_t x458 = 370U;
	uint32_t x459 = UINT32_MAX;
	uint64_t x460 = 35428470588733880LLU;
	static uint64_t t90 = 1644217266829LLU;

	t90 = ((x457*(x458%x459))*x460);

	if (t90 != 8368718680561446800LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x461 = -90;
	int16_t x463 = INT16_MIN;
	volatile uint64_t x464 = 1857374841201615596LLU;
	static volatile uint64_t t91 = 288814685LLU;

	t91 = ((x461*(x462%x463))*x464);

	if (t91 != 11376834071558473464LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x465 = -107;
	uint8_t x466 = UINT8_MAX;
	int8_t x467 = INT8_MIN;
	int16_t x468 = -1;
	static int32_t t92 = 70638811;

	t92 = ((x465*(x466%x467))*x468);

	if (t92 != 13589) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x469 = INT32_MIN;
	uint16_t x470 = 288U;
	int64_t x471 = INT64_MIN;
	int32_t x472 = -1;
	int64_t t93 = 44265717055879LL;

	t93 = ((x469*(x470%x471))*x472);

	if (t93 != 618475290624LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x473 = -14;
	static volatile int64_t x474 = INT64_MIN;
	static volatile int8_t x475 = -1;
	int32_t x476 = -7801;
	int64_t t94 = -34290539882841272LL;

	t94 = ((x473*(x474%x475))*x476);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x477 = -1;
	static volatile int8_t x479 = INT8_MAX;
	int16_t x480 = INT16_MIN;
	static volatile int32_t t95 = -4;

	t95 = ((x477*(x478%x479))*x480);

	if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x481 = INT16_MIN;
	static volatile uint64_t x482 = UINT64_MAX;
	static volatile int64_t x483 = -1167569670886825LL;
	int16_t x484 = -9545;
	volatile uint64_t t96 = 5971LLU;

	t96 = ((x481*(x482%x483))*x484);

	if (t96 != 9674119133355311104LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x486 = INT8_MAX;
	int64_t x487 = INT64_MAX;
	volatile int16_t x488 = -1;

	t97 = ((x485*(x486%x487))*x488);

	if (t97 != 18446744073494133708LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x489 = 1LLU;
	int8_t x490 = INT8_MIN;
	int64_t x491 = INT64_MIN;
	static uint8_t x492 = 13U;

	t98 = ((x489*(x490%x491))*x492);

	if (t98 != 18446744073709549952LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x493 = -1LL;
	int64_t x494 = INT64_MIN;
	int16_t x495 = INT16_MIN;
	static int64_t x496 = INT64_MIN;
	int64_t t99 = 7LL;

	t99 = ((x493*(x494%x495))*x496);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

