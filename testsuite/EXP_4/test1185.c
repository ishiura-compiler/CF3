#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
volatile uint32_t t0 = UINT32_MAX;
uint64_t t1 = 274404017576758LLU;
int16_t x9 = 4;
int32_t x27 = 0;
uint32_t x29 = 63962U;
int16_t x32 = INT16_MAX;
static int64_t x34 = -1LL;
volatile int32_t x35 = 860099902;
int64_t x36 = -277568489028146LL;
int32_t x37 = -3;
int8_t x38 = -38;
static int64_t x40 = INT64_MAX;
int32_t x41 = INT32_MAX;
static uint32_t x42 = UINT32_MAX;
uint32_t t8 = 16U;
static volatile uint64_t x48 = 42049944LLU;
static int16_t x51 = INT16_MIN;
uint8_t x53 = 54U;
int16_t x55 = 239;
volatile int32_t t11 = -146696;
uint16_t x59 = UINT16_MAX;
volatile int64_t t13 = 32947706946235145LL;
volatile int16_t x65 = INT16_MIN;
uint64_t x71 = 501LLU;
volatile int16_t x74 = INT16_MAX;
static uint32_t x75 = 1377771167U;
uint64_t x86 = 1734296LLU;
volatile uint32_t x90 = UINT32_MAX;
static int32_t t21 = 12;
int32_t x97 = -1;
volatile int64_t t23 = -2844797850296LL;
static int64_t x105 = INT64_MIN;
int64_t x108 = -1LL;
int16_t x109 = INT16_MIN;
int8_t x112 = INT8_MIN;
int32_t t26 = -9557;
int64_t x122 = -1LL;
static uint16_t x124 = 1U;
int8_t x129 = 3;
static volatile int64_t t30 = 17971899426LL;
static int32_t t31 = -315087857;
volatile int16_t x145 = INT16_MAX;
volatile int32_t t34 = 1667030;
uint64_t t37 = 2LLU;
int8_t x188 = INT8_MAX;
static volatile int64_t x190 = -114217020335LL;
int8_t x195 = INT8_MIN;
int8_t x205 = -1;
int8_t x218 = INT8_MIN;
uint64_t x231 = 1200388353LLU;
uint64_t x233 = 61748672399280890LLU;
static volatile int16_t x237 = -1;
int32_t t52 = -1015688;
int16_t x243 = INT16_MIN;
int32_t x244 = INT32_MIN;
volatile int64_t t53 = 5562841864156LL;
int32_t x252 = -103195761;
int32_t t55 = -61;
volatile int8_t x257 = INT8_MIN;
uint16_t x258 = 11790U;
volatile int64_t x260 = INT64_MIN;
uint64_t t57 = 368573201766723LLU;
int32_t x268 = INT32_MIN;
volatile int64_t t58 = 13789LL;
volatile int64_t x273 = INT64_MIN;
static uint64_t t60 = 3035680771LLU;
int32_t x277 = -1;
static int64_t x281 = INT64_MIN;
int16_t x298 = INT16_MIN;
volatile int16_t x306 = -1;
volatile int64_t t66 = 287LL;
int64_t x314 = INT64_MAX;
volatile int64_t t68 = 280170057024LL;
int16_t x321 = -1;
int32_t x324 = 2974;
int16_t x325 = 3;
static int32_t x327 = 26892;
int32_t x328 = INT32_MIN;
volatile uint32_t x329 = UINT32_MAX;
int32_t x337 = INT32_MIN;
uint64_t t74 = 1938LLU;
int64_t x364 = -907309306567674267LL;
volatile int16_t x368 = INT16_MIN;
uint64_t x371 = UINT64_MAX;
int32_t x372 = -1;
static int8_t x373 = -1;
static volatile uint16_t x382 = 0U;
static uint64_t x386 = 187070LLU;
uint32_t x387 = 17U;
static int32_t x388 = -1;
uint32_t x390 = 95795U;
uint16_t x394 = UINT16_MAX;
uint32_t x395 = 131086372U;
int8_t x396 = 0;
volatile uint32_t t87 = 78U;
int16_t x409 = -1;
uint16_t x410 = 15888U;
int8_t x414 = INT8_MIN;
int16_t x416 = INT16_MAX;
int32_t t89 = 15;
static uint8_t x417 = UINT8_MAX;
int8_t x422 = INT8_MIN;
uint64_t x424 = UINT64_MAX;
int16_t x426 = -3;
int32_t t94 = -188428;
static int16_t x439 = INT16_MAX;
int64_t t95 = -14124326762LL;
static int8_t x460 = INT8_MIN;
static int64_t x463 = INT64_MAX;


void f0(void) {
	static volatile uint32_t x1 = UINT32_MAX;
	static uint8_t x2 = 0U;
	uint32_t x4 = UINT32_MAX;

	t0 = (x1-(x2+(x3==x4)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	volatile uint64_t x6 = UINT64_MAX;
	volatile uint32_t x7 = 10159092U;
	uint8_t x8 = UINT8_MAX;

	t1 = (x5-(x6+(x7==x8)));

	if (t1 != 256LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = -1;

	t2 = (x9-(x10+(x11==x12)));

	if (t2 != 32772) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	int64_t x18 = -27575LL;
	static volatile int8_t x19 = INT8_MAX;
	static volatile uint8_t x20 = UINT8_MAX;
	volatile int64_t t3 = -107846032844LL;

	t3 = (x17-(x18+(x19==x20)));

	if (t3 != 27574LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 2093232261LLU;
	volatile int16_t x26 = INT16_MIN;
	volatile uint64_t x28 = 426235413296696LLU;
	uint64_t t4 = 3271010674959206396LLU;

	t4 = (x25-(x26+(x27==x28)));

	if (t4 != 2093265029LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x30 = INT8_MIN;
	static int32_t x31 = -293286;
	uint32_t t5 = 26U;

	t5 = (x29-(x30+(x31==x32)));

	if (t5 != 64090U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	volatile int64_t t6 = 26002495445150LL;

	t6 = (x33-(x34+(x35==x36)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x39 = -28;
	int32_t t7 = -1994;

	t7 = (x37-(x38+(x39==x40)));

	if (t7 != 35) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x43 = INT32_MIN;
	uint16_t x44 = 2390U;

	t8 = (x41-(x42+(x43==x44)));

	if (t8 != 2147483648U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MAX;
	static uint64_t x46 = 193632LLU;
	volatile int64_t x47 = INT64_MIN;
	static uint64_t t9 = 2761736101704615LLU;

	t9 = (x45-(x46+(x47==x48)));

	if (t9 != 9223372036854582175LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x49 = INT32_MIN;
	int8_t x50 = -1;
	int16_t x52 = INT16_MIN;
	volatile int32_t t10 = INT32_MIN;

	t10 = (x49-(x50+(x51==x52)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x54 = UINT8_MAX;
	int32_t x56 = -5;

	t11 = (x53-(x54+(x55==x56)));

	if (t11 != -201) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = INT32_MIN;
	static int16_t x58 = -1;
	int8_t x60 = INT8_MAX;
	static int32_t t12 = -105;

	t12 = (x57-(x58+(x59==x60)));

	if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = 12102609843316462LL;
	int32_t x62 = INT32_MAX;
	volatile int32_t x63 = INT32_MAX;
	int8_t x64 = INT8_MIN;

	t13 = (x61-(x62+(x63==x64)));

	if (t13 != 12102607695832815LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x66 = -126338488;
	uint32_t x67 = 1U;
	uint32_t x68 = 246U;
	volatile int32_t t14 = 2912930;

	t14 = (x65-(x66+(x67==x68)));

	if (t14 != 126305720) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	uint16_t x70 = 309U;
	int64_t x72 = -1LL;
	volatile int32_t t15 = -693236537;

	t15 = (x69-(x70+(x71==x72)));

	if (t15 != -437) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 0U;
	int64_t x76 = INT64_MIN;
	static volatile int32_t t16 = -1676;

	t16 = (x73-(x74+(x75==x76)));

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 14U;
	int16_t x78 = -1;
	int16_t x79 = -9910;
	volatile int64_t x80 = INT64_MIN;
	static int32_t t17 = -25730794;

	t17 = (x77-(x78+(x79==x80)));

	if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	static int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	int64_t x84 = 593320224853LL;
	volatile int32_t t18 = -6788528;

	t18 = (x81-(x82+(x83==x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x85 = 1776LLU;
	static int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MIN;
	static uint64_t t19 = 824982250804437LLU;

	t19 = (x85-(x86+(x87==x88)));

	if (t19 != 18446744073707819096LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x89 = UINT8_MAX;
	int64_t x91 = -1LL;
	uint32_t x92 = 7U;
	uint32_t t20 = 89042064U;

	t20 = (x89-(x90+(x91==x92)));

	if (t20 != 256U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = -1;
	int16_t x94 = 0;
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MAX;

	t21 = (x93-(x94+(x95==x96)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MAX;
	static int16_t x100 = INT16_MIN;
	int32_t t22 = 38931;

	t22 = (x97-(x98+(x99==x100)));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MAX;
	int32_t x102 = 34;
	int64_t x103 = INT64_MIN;
	volatile uint32_t x104 = 3763U;

	t23 = (x101-(x102+(x103==x104)));

	if (t23 != 9223372036854775773LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x106 = UINT64_MAX;
	uint64_t x107 = UINT64_MAX;
	volatile uint64_t t24 = 412LLU;

	t24 = (x105-(x106+(x107==x108)));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x110 = INT8_MIN;
	uint16_t x111 = 0U;
	static volatile int32_t t25 = 244629629;

	t25 = (x109-(x110+(x111==x112)));

	if (t25 != -32640) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = INT16_MAX;
	int8_t x118 = -1;
	static uint8_t x119 = UINT8_MAX;
	int64_t x120 = -1LL;

	t26 = (x117-(x118+(x119==x120)));

	if (t26 != 32768) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -217253018;
	static int64_t x123 = -1LL;
	volatile int64_t t27 = -3630737647957532696LL;

	t27 = (x121-(x122+(x123==x124)));

	if (t27 != -217253017LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x125 = UINT16_MAX;
	volatile int64_t x126 = -355268673941137LL;
	uint32_t x127 = 136223U;
	int64_t x128 = INT64_MIN;
	int64_t t28 = -507242499LL;

	t28 = (x125-(x126+(x127==x128)));

	if (t28 != 355268674006672LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x130 = 263109;
	int16_t x131 = -1;
	int32_t x132 = -8051;
	volatile int32_t t29 = -6;

	t29 = (x129-(x130+(x131==x132)));

	if (t29 != -263106) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x137 = INT32_MIN;
	int64_t x138 = -3595LL;
	static volatile uint16_t x139 = 18224U;
	uint16_t x140 = UINT16_MAX;

	t30 = (x137-(x138+(x139==x140)));

	if (t30 != -2147480053LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x141 = 1U;
	volatile int16_t x142 = -5;
	int8_t x143 = INT8_MIN;
	int16_t x144 = -29;

	t31 = (x141-(x142+(x143==x144)));

	if (t31 != 6) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x146 = -1;
	int8_t x147 = -1;
	int8_t x148 = INT8_MIN;
	int32_t t32 = -1821;

	t32 = (x145-(x146+(x147==x148)));

	if (t32 != 32768) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int64_t x150 = 1728653LL;
	static uint32_t x151 = 236962U;
	int64_t x152 = -23038LL;
	volatile int64_t t33 = -26261LL;

	t33 = (x149-(x150+(x151==x152)));

	if (t33 != -1728781LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x153 = -6;
	static int8_t x154 = 8;
	static uint32_t x155 = 4679723U;
	int8_t x156 = 2;

	t34 = (x153-(x154+(x155==x156)));

	if (t34 != -14) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x157 = 339U;
	volatile uint16_t x158 = 62U;
	int32_t x159 = INT32_MIN;
	int64_t x160 = -762454628697LL;
	static volatile int32_t t35 = -1254259;

	t35 = (x157-(x158+(x159==x160)));

	if (t35 != 277) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MIN;
	volatile int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MAX;
	int8_t x168 = INT8_MIN;
	int32_t t36 = -29440;

	t36 = (x165-(x166+(x167==x168)));

	if (t36 != -2147450880) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = UINT64_MAX;
	volatile uint64_t x170 = 4662378942039LLU;
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = INT16_MIN;

	t37 = (x169-(x170+(x171==x172)));

	if (t37 != 18446739411330609576LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x173 = -3;
	static uint8_t x174 = 30U;
	int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MIN;
	volatile int32_t t38 = 87;

	t38 = (x173-(x174+(x175==x176)));

	if (t38 != -33) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x177 = 24LLU;
	static int8_t x178 = 1;
	int8_t x179 = INT8_MIN;
	int8_t x180 = 62;
	uint64_t t39 = 112LLU;

	t39 = (x177-(x178+(x179==x180)));

	if (t39 != 23LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x181 = 2430LL;
	int8_t x182 = 0;
	static volatile int16_t x183 = -510;
	uint64_t x184 = UINT64_MAX;
	int64_t t40 = -16846759LL;

	t40 = (x181-(x182+(x183==x184)));

	if (t40 != 2430LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	int16_t x187 = INT16_MIN;
	static int32_t t41 = -520411994;

	t41 = (x185-(x186+(x187==x188)));

	if (t41 != -2147450880) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x189 = UINT8_MAX;
	int16_t x191 = INT16_MIN;
	static uint64_t x192 = 2520966588333LLU;
	volatile int64_t t42 = -259437970499008932LL;

	t42 = (x189-(x190+(x191==x192)));

	if (t42 != 114217020590LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = 2;
	volatile int16_t x194 = -1;
	uint8_t x196 = 8U;
	volatile int32_t t43 = -3;

	t43 = (x193-(x194+(x195==x196)));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x197 = 6U;
	uint64_t x198 = UINT64_MAX;
	volatile int8_t x199 = INT8_MIN;
	int8_t x200 = -1;
	uint64_t t44 = 68856481675007314LLU;

	t44 = (x197-(x198+(x199==x200)));

	if (t44 != 7LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = -1;
	uint32_t x202 = UINT32_MAX;
	volatile uint32_t x203 = UINT32_MAX;
	uint32_t x204 = 93U;
	volatile uint32_t t45 = 1462451588U;

	t45 = (x201-(x202+(x203==x204)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x206 = UINT16_MAX;
	int16_t x207 = -1;
	int64_t x208 = INT64_MAX;
	volatile int32_t t46 = -1626;

	t46 = (x205-(x206+(x207==x208)));

	if (t46 != -65536) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x213 = INT8_MIN;
	int64_t x214 = -1LL;
	volatile int8_t x215 = INT8_MIN;
	static uint16_t x216 = 32U;
	volatile int64_t t47 = 2394090861LL;

	t47 = (x213-(x214+(x215==x216)));

	if (t47 != -127LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x217 = -1;
	volatile int16_t x219 = -6;
	int64_t x220 = INT64_MAX;
	volatile int32_t t48 = 5340510;

	t48 = (x217-(x218+(x219==x220)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x221 = -475;
	uint8_t x222 = UINT8_MAX;
	int32_t x223 = 37818;
	int64_t x224 = INT64_MIN;
	int32_t t49 = -88;

	t49 = (x221-(x222+(x223==x224)));

	if (t49 != -730) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = -1;
	int64_t x230 = INT64_MIN;
	int32_t x232 = INT32_MIN;
	int64_t t50 = INT64_MAX;

	t50 = (x229-(x230+(x231==x232)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x234 = 1811LLU;
	int8_t x235 = INT8_MAX;
	static int32_t x236 = 607;
	volatile uint64_t t51 = 15772814435947869LLU;

	t51 = (x233-(x234+(x235==x236)));

	if (t51 != 61748672399279079LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x238 = UINT8_MAX;
	int8_t x239 = -3;
	int16_t x240 = INT16_MIN;

	t52 = (x237-(x238+(x239==x240)));

	if (t52 != -256) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = -23;
	volatile int64_t x242 = INT64_MIN;

	t53 = (x241-(x242+(x243==x244)));

	if (t53 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = INT8_MIN;
	int32_t x250 = -2291458;
	volatile int64_t x251 = INT64_MIN;
	static int32_t t54 = 615;

	t54 = (x249-(x250+(x251==x252)));

	if (t54 != 2291330) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x253 = INT8_MIN;
	static int16_t x254 = -1;
	int8_t x255 = INT8_MIN;
	static int8_t x256 = INT8_MIN;

	t55 = (x253-(x254+(x255==x256)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x259 = INT8_MIN;
	volatile int32_t t56 = -1;

	t56 = (x257-(x258+(x259==x260)));

	if (t56 != -11918) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x261 = 22908140251LLU;
	uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MIN;

	t57 = (x261-(x262+(x263==x264)));

	if (t57 != 22908140252LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = -1;
	int64_t x266 = -1LL;
	uint8_t x267 = 14U;

	t58 = (x265-(x266+(x267==x268)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = -1;
	int32_t x270 = -1;
	uint32_t x271 = 4743760U;
	int16_t x272 = INT16_MIN;
	int32_t t59 = 26;

	t59 = (x269-(x270+(x271==x272)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x274 = UINT64_MAX;
	static int16_t x275 = INT16_MIN;
	int64_t x276 = -1LL;

	t60 = (x273-(x274+(x275==x276)));

	if (t60 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x278 = INT8_MAX;
	int32_t x279 = -1;
	int32_t x280 = INT32_MIN;
	int32_t t61 = -121;

	t61 = (x277-(x278+(x279==x280)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x282 = INT8_MIN;
	volatile uint8_t x283 = 7U;
	int64_t x284 = -74364529243326LL;
	int64_t t62 = -8516930355LL;

	t62 = (x281-(x282+(x283==x284)));

	if (t62 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = INT16_MIN;
	volatile uint16_t x290 = 2U;
	uint16_t x291 = 593U;
	int32_t x292 = 60;
	static int32_t t63 = 9218;

	t63 = (x289-(x290+(x291==x292)));

	if (t63 != -32770) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x293 = 67926824349173LLU;
	uint64_t x294 = 149LLU;
	volatile int64_t x295 = INT64_MIN;
	volatile int64_t x296 = INT64_MIN;
	volatile uint64_t t64 = 581826612LLU;

	t64 = (x293-(x294+(x295==x296)));

	if (t64 != 67926824349023LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x297 = 7LLU;
	volatile int64_t x299 = INT64_MIN;
	int64_t x300 = 124114365637136606LL;
	uint64_t t65 = 30385307509LLU;

	t65 = (x297-(x298+(x299==x300)));

	if (t65 != 32775LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = -1LL;
	volatile uint8_t x307 = 4U;
	volatile int8_t x308 = -40;

	t66 = (x305-(x306+(x307==x308)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x313 = 8U;
	static int8_t x315 = 0;
	int8_t x316 = -1;
	volatile int64_t t67 = -2619638LL;

	t67 = (x313-(x314+(x315==x316)));

	if (t67 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = -1LL;
	uint32_t x319 = 0U;
	int32_t x320 = -1;

	t68 = (x317-(x318+(x319==x320)));

	if (t68 != -2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x322 = INT16_MIN;
	int16_t x323 = -1;
	static int32_t t69 = 47882;

	t69 = (x321-(x322+(x323==x324)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x326 = UINT16_MAX;
	static volatile int32_t t70 = -1435;

	t70 = (x325-(x326+(x327==x328)));

	if (t70 != -65532) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x330 = UINT8_MAX;
	static volatile int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	uint32_t t71 = 164429317U;

	t71 = (x329-(x330+(x331==x332)));

	if (t71 != 4294967040U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x333 = 3U;
	static uint32_t x334 = UINT32_MAX;
	int16_t x335 = -1;
	int16_t x336 = INT16_MIN;
	uint32_t t72 = 6U;

	t72 = (x333-(x334+(x335==x336)));

	if (t72 != 4U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x338 = UINT64_MAX;
	int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MIN;
	static uint64_t t73 = 12906619826728105LLU;

	t73 = (x337-(x338+(x339==x340)));

	if (t73 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x341 = 1278608LLU;
	volatile int32_t x342 = INT32_MIN;
	int8_t x343 = -1;
	int16_t x344 = INT16_MIN;

	t74 = (x341-(x342+(x343==x344)));

	if (t74 != 2148762256LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = 606848005713305724LL;
	int32_t x346 = -1;
	int32_t x347 = -1;
	static uint8_t x348 = 97U;
	volatile int64_t t75 = 10LL;

	t75 = (x345-(x346+(x347==x348)));

	if (t75 != 606848005713305725LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x353 = 5U;
	uint16_t x354 = 1865U;
	uint64_t x355 = 195LLU;
	uint64_t x356 = 13335LLU;
	int32_t t76 = 839178;

	t76 = (x353-(x354+(x355==x356)));

	if (t76 != -1860) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = -598334LL;
	volatile int16_t x362 = 196;
	int8_t x363 = 0;
	static volatile int64_t t77 = -21059484389361358LL;

	t77 = (x361-(x362+(x363==x364)));

	if (t77 != -598530LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 10U;
	int32_t t78 = 656247347;

	t78 = (x365-(x366+(x367==x368)));

	if (t78 != -2147450880) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MIN;
	int32_t t79 = -6836;

	t79 = (x369-(x370+(x371==x372)));

	if (t79 != 32639) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x374 = 0U;
	int8_t x375 = -29;
	uint32_t x376 = 54943U;
	volatile int32_t t80 = 35609637;

	t80 = (x373-(x374+(x375==x376)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x377 = 3U;
	volatile uint64_t x378 = 20808997317LLU;
	static int64_t x379 = INT64_MIN;
	int8_t x380 = 29;
	uint64_t t81 = 1597949471355507LLU;

	t81 = (x377-(x378+(x379==x380)));

	if (t81 != 18446744052900554302LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x381 = INT32_MIN;
	int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MIN;
	volatile int32_t t82 = INT32_MIN;

	t82 = (x381-(x382+(x383==x384)));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x385 = -1;
	uint64_t t83 = 1LLU;

	t83 = (x385-(x386+(x387==x388)));

	if (t83 != 18446744073709364545LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x389 = 1793LLU;
	uint16_t x391 = UINT16_MAX;
	static int32_t x392 = INT32_MAX;
	static uint64_t t84 = 1030259908320731945LLU;

	t84 = (x389-(x390+(x391==x392)));

	if (t84 != 18446744073709457614LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x393 = 209623052398637LL;
	volatile int64_t t85 = 1731763LL;

	t85 = (x393-(x394+(x395==x396)));

	if (t85 != 209623052333102LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = -1LL;
	static uint8_t x398 = UINT8_MAX;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	int64_t t86 = 2881046229957308LL;

	t86 = (x397-(x398+(x399==x400)));

	if (t86 != -256LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x401 = -1;
	uint32_t x402 = 78479753U;
	uint16_t x403 = 71U;
	int32_t x404 = INT32_MIN;

	t87 = (x401-(x402+(x403==x404)));

	if (t87 != 4216487542U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x411 = INT8_MAX;
	int64_t x412 = -382266282963306LL;
	static volatile int32_t t88 = -184882453;

	t88 = (x409-(x410+(x411==x412)));

	if (t88 != -15889) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x413 = INT16_MAX;
	static uint8_t x415 = 3U;

	t89 = (x413-(x414+(x415==x416)));

	if (t89 != 32895) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x418 = -1;
	int64_t x419 = 4922LL;
	int8_t x420 = -14;
	static int32_t t90 = -32897902;

	t90 = (x417-(x418+(x419==x420)));

	if (t90 != 256) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x421 = -12636;
	int32_t x423 = INT32_MAX;
	volatile int32_t t91 = 173882;

	t91 = (x421-(x422+(x423==x424)));

	if (t91 != -12508) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = -10120LL;
	volatile int32_t x427 = -1;
	volatile uint8_t x428 = UINT8_MAX;
	volatile int64_t t92 = 4147710164717665LL;

	t92 = (x425-(x426+(x427==x428)));

	if (t92 != -10117LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x429 = 52644898277LLU;
	uint32_t x430 = 12U;
	int32_t x431 = -1;
	uint32_t x432 = UINT32_MAX;
	volatile uint64_t t93 = 1782323646643LLU;

	t93 = (x429-(x430+(x431==x432)));

	if (t93 != 52644898264LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = -49;
	static int32_t x434 = 204;
	uint8_t x435 = 90U;
	uint16_t x436 = 0U;

	t94 = (x433-(x434+(x435==x436)));

	if (t94 != -253) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x437 = INT32_MIN;
	volatile int64_t x438 = INT64_MIN;
	uint32_t x440 = 7U;

	t95 = (x437-(x438+(x439==x440)));

	if (t95 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x449 = UINT16_MAX;
	uint8_t x450 = 15U;
	static volatile uint32_t x451 = UINT32_MAX;
	static int32_t x452 = INT32_MIN;
	volatile int32_t t96 = 427;

	t96 = (x449-(x450+(x451==x452)));

	if (t96 != 65520) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x453 = INT16_MIN;
	static volatile uint64_t x454 = 1LLU;
	volatile int8_t x455 = 0;
	volatile uint8_t x456 = 101U;
	volatile uint64_t t97 = 627996233163313LLU;

	t97 = (x453-(x454+(x455==x456)));

	if (t97 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x457 = -1LL;
	uint8_t x458 = 13U;
	int16_t x459 = -1;
	volatile int64_t t98 = -695598620907137LL;

	t98 = (x457-(x458+(x459==x460)));

	if (t98 != -14LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = UINT64_MAX;
	int32_t x462 = -1;
	uint64_t x464 = 9500LLU;
	volatile uint64_t t99 = 95753840444376LLU;

	t99 = (x461-(x462+(x463==x464)));

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

