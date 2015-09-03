#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x17 = 57318208LLU;
uint8_t x18 = UINT8_MAX;
volatile int64_t x20 = -1LL;
volatile uint64_t t3 = 5722563294934LLU;
volatile uint64_t t4 = 69LLU;
static volatile int64_t x27 = -9731LL;
static int8_t x28 = -1;
volatile int64_t x37 = -7999973LL;
int16_t x44 = 23;
int64_t t8 = -123590LL;
static int8_t x55 = -1;
static int16_t x56 = -1;
uint64_t x58 = UINT64_MAX;
volatile uint64_t t10 = 7012LLU;
uint8_t x74 = UINT8_MAX;
int64_t x81 = INT64_MIN;
int32_t x93 = -1;
static int64_t x101 = -1LL;
static int16_t x114 = -119;
uint32_t x119 = 8628709U;
static volatile uint32_t x121 = UINT32_MAX;
volatile uint16_t x124 = 28U;
int32_t x127 = INT32_MIN;
int8_t x130 = 0;
static int16_t x131 = 3;
uint64_t x138 = UINT64_MAX;
volatile int16_t x140 = 51;
static int8_t x149 = INT8_MAX;
int16_t x154 = INT16_MIN;
volatile uint64_t t28 = 21LLU;
volatile int64_t x166 = -46564512LL;
volatile int8_t x168 = INT8_MIN;
static int16_t x169 = INT16_MIN;
uint32_t x172 = 65919U;
int8_t x177 = -1;
volatile uint64_t t31 = 4184704LLU;
uint8_t x193 = UINT8_MAX;
volatile uint32_t t34 = 109566034U;
int64_t x217 = -1LL;
volatile uint16_t x218 = 12177U;
volatile uint32_t x221 = UINT32_MAX;
int8_t x230 = INT8_MAX;
int64_t x243 = -1LL;
int16_t x249 = INT16_MAX;
volatile uint32_t t43 = 29849U;
int64_t t46 = -19129332593216990LL;
volatile int32_t x285 = INT32_MAX;
volatile uint64_t t47 = 15704LLU;
uint16_t x293 = 3U;
int32_t t48 = 3016022;
int32_t t49 = -6;
uint16_t x304 = UINT16_MAX;
static uint32_t x309 = 54U;
uint64_t x312 = 6864974LLU;
int16_t x313 = INT16_MIN;
volatile uint64_t t53 = 57775952903485LLU;
volatile int8_t x330 = -1;
int8_t x332 = -21;
static int16_t x337 = -1;
static int16_t x346 = -1;
int32_t x349 = INT32_MIN;
int8_t x351 = -1;
int16_t x352 = -1;
uint32_t x363 = 8U;
static volatile uint32_t t60 = 10782670U;
int8_t x369 = INT8_MAX;
int8_t x370 = INT8_MIN;
uint32_t x387 = 2523298U;
volatile uint64_t x388 = 69406626LLU;
uint64_t t63 = 875546380916946817LLU;
static int32_t x417 = 540955367;
static volatile int64_t x419 = -1LL;
uint8_t x428 = 27U;
int32_t x431 = INT32_MAX;
static int64_t x432 = -1LL;
int8_t x433 = -1;
int64_t x434 = -5765351LL;
static volatile int64_t t68 = -960769199942045038LL;
static int32_t x455 = -1;
volatile int64_t x520 = 94LL;
static uint16_t x521 = 5303U;
uint8_t x522 = 1U;
static uint8_t x525 = 4U;
volatile uint64_t t78 = 21307111208070LLU;
int8_t x530 = -3;
volatile uint64_t t80 = 76628367967LLU;
volatile uint64_t x560 = 383833258237530LLU;
uint64_t t81 = 104395259902504LLU;
int16_t x562 = -115;
uint64_t t82 = 159523143LLU;
static uint8_t x582 = UINT8_MAX;
static uint64_t x583 = 30495458260131476LLU;
volatile uint64_t x585 = 12133392788325168LLU;
static int32_t x590 = -1;
volatile int64_t x598 = INT64_MIN;
static uint16_t x607 = 6470U;
uint32_t x611 = UINT32_MAX;
uint32_t x617 = 654U;
int32_t x618 = -1;
uint64_t x620 = 66472973654337LLU;
int8_t x623 = -18;
int16_t x625 = INT16_MIN;
uint32_t x627 = 61841U;
uint32_t t93 = 609U;
volatile uint16_t x649 = 0U;
int16_t x661 = 1;
uint16_t x669 = UINT16_MAX;
int16_t x670 = -26;
int8_t x671 = INT8_MIN;


void f0(void) {
	volatile int64_t x1 = 5622207364518136LL;
	int8_t x2 = -12;
	int16_t x3 = INT16_MAX;
	int8_t x4 = -1;
	int64_t t0 = 683009LL;

	t0 = (x1^(x2*(x3*x4)));

	if (t0 != 5622207364804364LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	volatile uint16_t x6 = UINT16_MAX;
	int64_t x7 = 798LL;
	int16_t x8 = -1;
	int64_t t1 = -64680188987LL;

	t1 = (x5^(x6*(x7*x8)));

	if (t1 != -4242670367LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	volatile int64_t x10 = -1LL;
	static uint32_t x11 = UINT32_MAX;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 18706604LLU;

	t2 = (x9^(x10*(x11*x12)));

	if (t2 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x19 = 3057LLU;

	t3 = (x17^(x18*(x19*x20)));

	if (t3 != 18446744073652830641LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 0;
	volatile int64_t x22 = -1LL;
	int32_t x23 = -484883508;
	volatile uint64_t x24 = UINT64_MAX;

	t4 = (x21^(x22*(x23*x24)));

	if (t4 != 18446744073224668108LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 4U;
	uint16_t x26 = 22U;
	int64_t t5 = 105829492LL;

	t5 = (x25^(x26*(x27*x28)));

	if (t5 != 214086LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	int8_t x30 = INT8_MIN;
	uint64_t x31 = 25648LLU;
	int64_t x32 = 10448639LL;
	volatile uint64_t t6 = 24057335590996053LLU;

	t6 = (x29^(x30*(x31*x32)));

	if (t6 != 34302296713215LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x38 = 2U;
	int16_t x39 = INT16_MIN;
	static int16_t x40 = -1;
	int64_t t7 = -41101157LL;

	t7 = (x37^(x38*(x39*x40)));

	if (t7 != -8065509LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = INT64_MIN;
	volatile int32_t x42 = -1;
	int16_t x43 = -1;

	t8 = (x41^(x42*(x43*x44)));

	if (t8 != -9223372036854775785LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = -1;
	static uint32_t x54 = 1U;
	volatile uint32_t t9 = 580U;

	t9 = (x53^(x54*(x55*x56)));

	if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x57 = INT32_MAX;
	uint8_t x59 = UINT8_MAX;
	int16_t x60 = -3;

	t10 = (x57^(x58*(x59*x60)));

	if (t10 != 2147482882LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x65 = INT16_MIN;
	static int16_t x66 = 7;
	volatile uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MAX;
	volatile uint32_t t11 = 233076288U;

	t11 = (x65^(x66*(x67*x68)));

	if (t11 != 196615U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x73 = INT8_MAX;
	static int16_t x75 = -1;
	uint64_t x76 = 2194315497197LLU;
	uint64_t t12 = 6411320540119059LLU;

	t12 = (x73^(x74*(x75*x76)));

	if (t12 != 18446184523257766290LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = -6;
	volatile uint64_t x78 = 163LLU;
	static int64_t x79 = INT64_MAX;
	static int64_t x80 = -1LL;
	uint64_t t13 = 1012472LLU;

	t13 = (x77^(x78*(x79*x80)));

	if (t13 != 9223372036854775641LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x82 = UINT32_MAX;
	volatile int8_t x83 = 24;
	uint32_t x84 = 45513U;
	volatile int64_t t14 = 364LL;

	t14 = (x81^(x82*(x83*x84)));

	if (t14 != -9223372032560900824LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x89 = INT16_MIN;
	volatile uint64_t x90 = 4086343LLU;
	int32_t x91 = INT32_MIN;
	uint32_t x92 = 7U;
	volatile uint64_t t15 = 15214445LLU;

	t15 = (x89^(x90*(x91*x92)));

	if (t15 != 18437968718936899584LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x94 = INT8_MAX;
	uint32_t x95 = UINT32_MAX;
	int16_t x96 = INT16_MIN;
	volatile uint32_t t16 = 49027993U;

	t16 = (x93^(x94*(x95*x96)));

	if (t16 != 4290805759U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x97 = 54058LLU;
	uint64_t x98 = 13LLU;
	int32_t x99 = -1;
	int8_t x100 = INT8_MIN;
	volatile uint64_t t17 = 4306127104319718LLU;

	t17 = (x97^(x98*(x99*x100)));

	if (t17 != 54698LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x102 = INT16_MIN;
	volatile int64_t x103 = -1LL;
	static int16_t x104 = 683;
	int64_t t18 = -120626236081LL;

	t18 = (x101^(x102*(x103*x104)));

	if (t18 != -22380545LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x113 = 1952U;
	uint32_t x115 = 39205914U;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t19 = 469256879LLU;

	t19 = (x113^(x114*(x115*x116)));

	if (t19 != 4665505718LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = INT32_MAX;
	static volatile int8_t x118 = -1;
	volatile int8_t x120 = INT8_MIN;
	static uint32_t t20 = 26U;

	t20 = (x117^(x118*(x119*x120)));

	if (t20 != 1043008895U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x122 = INT8_MIN;
	int32_t x123 = -1;
	uint32_t t21 = 14U;

	t21 = (x121^(x122*(x123*x124)));

	if (t21 != 4294963711U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = UINT16_MAX;
	int16_t x126 = INT16_MIN;
	uint32_t x128 = UINT32_MAX;
	volatile uint32_t t22 = 17U;

	t22 = (x125^(x126*(x127*x128)));

	if (t22 != 65535U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = -1;
	int16_t x132 = INT16_MIN;
	volatile int32_t t23 = 46705289;

	t23 = (x129^(x130*(x131*x132)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x137 = 26U;
	static int8_t x139 = -1;
	uint64_t t24 = 72596874983LLU;

	t24 = (x137^(x138*(x139*x140)));

	if (t24 != 41LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x145 = 13792LL;
	int32_t x146 = 38;
	int8_t x147 = INT8_MAX;
	static int16_t x148 = INT16_MIN;
	volatile int64_t t25 = 688560674872LL;

	t25 = (x145^(x146*(x147*x148)));

	if (t25 != -158124576LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x150 = INT8_MIN;
	uint32_t x151 = 13U;
	int32_t x152 = INT32_MIN;
	volatile uint32_t t26 = 56U;

	t26 = (x149^(x150*(x151*x152)));

	if (t26 != 127U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x153 = 5753806LLU;
	volatile int32_t x155 = -1;
	int64_t x156 = -1LL;
	uint64_t t27 = 4812LLU;

	t27 = (x153^(x154*(x155*x156)));

	if (t27 != 18446744073703803854LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x157 = -1LL;
	uint32_t x158 = UINT32_MAX;
	uint64_t x159 = 30923777719849LLU;
	uint16_t x160 = 14223U;

	t28 = (x157^(x158*(x159*x160)));

	if (t28 != 6437348268052875238LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = -1874976;
	int64_t x167 = -1LL;
	volatile int64_t t29 = 763735565960797802LL;

	t29 = (x165^(x166*(x167*x168)));

	if (t29 != 5962126304LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x170 = INT8_MIN;
	volatile int16_t x171 = INT16_MAX;
	static volatile uint32_t t30 = 176079531U;

	t30 = (x169^(x170*(x171*x172)));

	if (t30 != 1597980544U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x178 = -4501033378176058558LL;
	int32_t x179 = -1;
	uint64_t x180 = UINT64_MAX;

	t31 = (x177^(x178*(x179*x180)));

	if (t31 != 4501033378176058557LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x181 = 250658U;
	static int16_t x182 = -1;
	static volatile int64_t x183 = -1LL;
	volatile int16_t x184 = -30;
	static volatile int64_t t32 = -172178687640651762LL;

	t32 = (x181^(x182*(x183*x184)));

	if (t32 != -250688LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x185 = 1779U;
	int8_t x186 = INT8_MAX;
	static int8_t x187 = -1;
	uint64_t x188 = UINT64_MAX;
	uint64_t t33 = 50LLU;

	t33 = (x185^(x186*(x187*x188)));

	if (t33 != 1676LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x194 = -1;
	volatile uint32_t x195 = UINT32_MAX;
	static int32_t x196 = INT32_MIN;

	t34 = (x193^(x194*(x195*x196)));

	if (t34 != 2147483903U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x197 = -15342802769LL;
	static uint16_t x198 = 32192U;
	int16_t x199 = INT16_MIN;
	volatile uint32_t x200 = 1846U;
	int64_t t35 = -12660982411LL;

	t35 = (x197^(x198*(x199*x200)));

	if (t35 != -13124015953LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x219 = UINT64_MAX;
	int32_t x220 = -679707;
	uint64_t t36 = 17673842872751LLU;

	t36 = (x217^(x218*(x219*x220)));

	if (t36 != 18446744065432759476LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x222 = 185491082U;
	static uint16_t x223 = 59U;
	int8_t x224 = INT8_MAX;
	volatile uint32_t t37 = 98U;

	t37 = (x221^(x222*(x223*x224)));

	if (t37 != 1684726477U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x229 = INT32_MIN;
	static int16_t x231 = 21;
	static int16_t x232 = -1;
	static int32_t t38 = 10091499;

	t38 = (x229^(x230*(x231*x232)));

	if (t38 != 2147480981) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x242 = 22;
	int64_t x244 = -1422079310LL;
	volatile int64_t t39 = -2444864800139439356LL;

	t39 = (x241^(x242*(x243*x244)));

	if (t39 != 33138764619LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x245 = 3990U;
	static uint8_t x246 = 18U;
	uint64_t x247 = 2LLU;
	uint32_t x248 = 49507U;
	uint64_t t40 = 5820315823832379LLU;

	t40 = (x245^(x246*(x247*x248)));

	if (t40 != 1785466LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x250 = INT32_MIN;
	static uint64_t x251 = UINT64_MAX;
	int16_t x252 = INT16_MAX;
	volatile uint64_t t41 = 55424327LLU;

	t41 = (x249^(x250*(x251*x252)));

	if (t41 != 70366596726783LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x253 = 1U;
	int64_t x254 = -94LL;
	volatile int16_t x255 = -1;
	uint16_t x256 = 509U;
	volatile int64_t t42 = 4964591421841125LL;

	t42 = (x253^(x254*(x255*x256)));

	if (t42 != 47847LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x257 = 63U;
	static uint32_t x258 = 524U;
	int16_t x259 = INT16_MIN;
	int8_t x260 = -1;

	t43 = (x257^(x258*(x259*x260)));

	if (t43 != 17170495U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x261 = 0U;
	int64_t x262 = 486LL;
	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MIN;
	int64_t t44 = 13641633663LL;

	t44 = (x261^(x262*(x263*x264)));

	if (t44 != 7962624LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x265 = UINT32_MAX;
	int16_t x266 = INT16_MAX;
	uint64_t x267 = 3536LLU;
	static int64_t x268 = INT64_MIN;
	volatile uint64_t t45 = 8141056149010LLU;

	t45 = (x265^(x266*(x267*x268)));

	if (t45 != 4294967295LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x273 = -611LL;
	int16_t x274 = INT16_MIN;
	static int8_t x275 = 0;
	volatile int16_t x276 = 82;

	t46 = (x273^(x274*(x275*x276)));

	if (t46 != -611LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x286 = INT64_MIN;
	static uint16_t x287 = 4236U;
	static uint64_t x288 = UINT64_MAX;

	t47 = (x285^(x286*(x287*x288)));

	if (t47 != 2147483647LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x294 = -1;
	int16_t x295 = INT16_MAX;
	int16_t x296 = INT16_MIN;

	t48 = (x293^(x294*(x295*x296)));

	if (t48 != 1073709059) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x297 = 25U;
	int32_t x298 = -1;
	volatile int16_t x299 = INT16_MAX;
	int16_t x300 = INT16_MIN;

	t49 = (x297^(x298*(x299*x300)));

	if (t49 != 1073709081) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x301 = 1;
	static int8_t x302 = INT8_MIN;
	uint8_t x303 = 0U;
	int32_t t50 = 3673853;

	t50 = (x301^(x302*(x303*x304)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x305 = -1;
	static int64_t x306 = 95292394157LL;
	int64_t x307 = -1LL;
	volatile int32_t x308 = -2;
	static int64_t t51 = 12732207LL;

	t51 = (x305^(x306*(x307*x308)));

	if (t51 != -190584788315LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	uint64_t t52 = 1570686703598317339LLU;

	t52 = (x309^(x310*(x311*x312)));

	if (t52 != 18446715280800360246LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x314 = INT64_MIN;
	uint16_t x315 = 14896U;
	uint64_t x316 = 97441301LLU;

	t53 = (x313^(x314*(x315*x316)));

	if (t53 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x329 = 0;
	volatile uint8_t x331 = 14U;
	static volatile int32_t t54 = 239116;

	t54 = (x329^(x330*(x331*x332)));

	if (t54 != 294) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x333 = 236813719U;
	static int16_t x334 = -1;
	volatile uint16_t x335 = 2855U;
	static int8_t x336 = INT8_MIN;
	uint32_t t55 = 5728962U;

	t55 = (x333^(x334*(x335*x336)));

	if (t55 != 236514839U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x338 = -1LL;
	int16_t x339 = INT16_MAX;
	int64_t x340 = 159243LL;
	volatile int64_t t56 = 187364799959985LL;

	t56 = (x337^(x338*(x339*x340)));

	if (t56 != 5217915380LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x345 = INT32_MAX;
	static uint64_t x347 = UINT64_MAX;
	static uint32_t x348 = 39504036U;
	uint64_t t57 = 3112LLU;

	t57 = (x345^(x346*(x347*x348)));

	if (t57 != 2107979611LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x350 = UINT8_MAX;
	int32_t t58 = -56;

	t58 = (x349^(x350*(x351*x352)));

	if (t58 != -2147483393) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x361 = 0;
	static int8_t x362 = INT8_MIN;
	int32_t x364 = INT32_MAX;
	uint32_t t59 = 1U;

	t59 = (x361^(x362*(x363*x364)));

	if (t59 != 1024U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x365 = -1;
	static uint32_t x366 = 2928528U;
	int16_t x367 = -2025;
	int32_t x368 = -1;

	t60 = (x365^(x366*(x367*x368)));

	if (t60 != 2659665391U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x371 = 3LLU;
	volatile int32_t x372 = -1;
	uint64_t t61 = 5955484LLU;

	t61 = (x369^(x370*(x371*x372)));

	if (t61 != 511LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x381 = 878577222U;
	int32_t x382 = 5;
	int64_t x383 = -56203821237097648LL;
	volatile int64_t x384 = -1LL;
	int64_t t62 = 111318LL;

	t62 = (x381^(x382*(x383*x384)));

	if (t62 != 281019106383536438LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x385 = UINT8_MAX;
	static int16_t x386 = -1;

	t63 = (x385^(x386*(x387*x388)));

	if (t63 != 18446568940108979075LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x405 = INT16_MIN;
	int8_t x406 = -3;
	uint64_t x407 = 2534581807366357157LLU;
	int16_t x408 = 2;
	static uint64_t t64 = 12006547324LLU;

	t64 = (x405^(x406*(x407*x408)));

	if (t64 != 15207490844198173730LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x418 = INT8_MAX;
	static int8_t x420 = 0;
	volatile int64_t t65 = 35999289569829LL;

	t65 = (x417^(x418*(x419*x420)));

	if (t65 != 540955367LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x425 = 18;
	uint32_t x426 = UINT32_MAX;
	int8_t x427 = -1;
	volatile uint32_t t66 = 2017U;

	t66 = (x425^(x426*(x427*x428)));

	if (t66 != 9U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x429 = -1;
	volatile uint8_t x430 = UINT8_MAX;
	volatile int64_t t67 = 2LL;

	t67 = (x429^(x430*(x431*x432)));

	if (t67 != 547608329984LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x435 = INT16_MIN;
	int16_t x436 = INT16_MAX;

	t68 = (x433^(x434*(x435*x436)));

	if (t68 != -6190309579718657LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x453 = 31U;
	static int8_t x454 = INT8_MIN;
	int16_t x456 = INT16_MIN;
	int32_t t69 = -24575;

	t69 = (x453^(x454*(x455*x456)));

	if (t69 != -4194273) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x465 = -1LL;
	uint64_t x466 = 3269707LLU;
	uint32_t x467 = UINT32_MAX;
	int32_t x468 = 304643;
	uint64_t t70 = 194287763LLU;

	t70 = (x465^(x466*(x467*x468)));

	if (t70 != 18432701785170398944LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x469 = 1;
	uint32_t x470 = 1U;
	int8_t x471 = 0;
	volatile uint16_t x472 = 84U;
	static uint32_t t71 = 149824U;

	t71 = (x469^(x470*(x471*x472)));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x473 = INT16_MAX;
	static int32_t x474 = INT32_MIN;
	uint16_t x475 = 62U;
	static uint32_t x476 = 8243350U;
	volatile uint32_t t72 = 105086236U;

	t72 = (x473^(x474*(x475*x476)));

	if (t72 != 32767U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x477 = INT16_MIN;
	volatile int8_t x478 = INT8_MIN;
	static uint16_t x479 = 892U;
	uint8_t x480 = UINT8_MAX;
	volatile int32_t t73 = 323590918;

	t73 = (x477^(x478*(x479*x480)));

	if (t73 != 29113856) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x501 = UINT8_MAX;
	uint8_t x502 = 9U;
	int8_t x503 = INT8_MIN;
	int8_t x504 = INT8_MIN;
	int32_t t74 = 26;

	t74 = (x501^(x502*(x503*x504)));

	if (t74 != 147711) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x505 = 4522870673584304LLU;
	volatile uint32_t x506 = UINT32_MAX;
	uint64_t x507 = 4486732033086LLU;
	int8_t x508 = INT8_MIN;
	static volatile uint64_t t75 = 4597LLU;

	t75 = (x505^(x506*(x507*x508)));

	if (t75 != 17815108547672485808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x517 = 52;
	volatile uint8_t x518 = 0U;
	int8_t x519 = INT8_MAX;
	int64_t t76 = -702656768LL;

	t76 = (x517^(x518*(x519*x520)));

	if (t76 != 52LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x523 = 1U;
	int32_t x524 = INT32_MIN;
	volatile uint32_t t77 = 5983706U;

	t77 = (x521^(x522*(x523*x524)));

	if (t77 != 2147488951U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x526 = 328U;
	static int8_t x527 = INT8_MIN;
	uint64_t x528 = 4LLU;

	t78 = (x525^(x526*(x527*x528)));

	if (t78 != 18446744073709383684LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x529 = INT8_MIN;
	int32_t x531 = INT32_MIN;
	uint8_t x532 = 0U;
	int32_t t79 = 39;

	t79 = (x529^(x530*(x531*x532)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x537 = INT64_MIN;
	uint64_t x538 = UINT64_MAX;
	int8_t x539 = -1;
	uint64_t x540 = UINT64_MAX;

	t80 = (x537^(x538*(x539*x540)));

	if (t80 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x557 = 21U;
	int32_t x558 = -12;
	static int8_t x559 = INT8_MAX;

	t81 = (x557^(x558*(x559*x560)));

	if (t81 != 17861782188155555885LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x561 = -4;
	volatile uint64_t x563 = 4989426756LLU;
	static int16_t x564 = 3;

	t82 = (x561^(x562*(x563*x564)));

	if (t82 != 1721352230816LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x569 = -1;
	static int16_t x570 = INT16_MAX;
	uint32_t x571 = 6322U;
	static volatile int16_t x572 = INT16_MIN;
	volatile uint32_t t83 = 1901681U;

	t83 = (x569^(x570*(x571*x572)));

	if (t83 != 1940324351U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x581 = INT8_MIN;
	uint8_t x584 = 2U;
	volatile uint64_t t84 = 64524439LLU;

	t84 = (x581^(x582*(x583*x584)));

	if (t84 != 2894060361042498904LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x586 = -1;
	volatile int16_t x587 = -2437;
	int16_t x588 = INT16_MIN;
	volatile uint64_t t85 = 102LLU;

	t85 = (x585^(x586*(x587*x588)));

	if (t85 != 18434610680975590192LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x589 = INT32_MIN;
	int8_t x591 = INT8_MAX;
	int16_t x592 = -1743;
	int32_t t86 = -573687;

	t86 = (x589^(x590*(x591*x592)));

	if (t86 != -2147262287) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x597 = INT64_MAX;
	int16_t x599 = -1;
	uint64_t x600 = UINT64_MAX;
	uint64_t t87 = UINT64_MAX;

	t87 = (x597^(x598*(x599*x600)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x605 = INT32_MIN;
	uint16_t x606 = 6857U;
	int16_t x608 = 5;
	int32_t t88 = -32087337;

	t88 = (x605^(x606*(x607*x608)));

	if (t88 != -1925659698) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x609 = 405U;
	int16_t x610 = INT16_MAX;
	uint64_t x612 = 541054214LLU;
	static uint64_t t89 = 1244572325LLU;

	t89 = (x609^(x610*(x611*x612)));

	if (t89 != 14574522343607817363LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x613 = INT32_MIN;
	int16_t x614 = INT16_MAX;
	int16_t x615 = INT16_MIN;
	static uint32_t x616 = 937327344U;
	uint32_t t90 = 4U;

	t90 = (x613^(x614*(x615*x616)));

	if (t90 != 3178758144U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x619 = INT8_MAX;
	static volatile uint64_t t91 = 14593278LLU;

	t91 = (x617^(x618*(x619*x620)));

	if (t91 != 18438302006055451215LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x621 = INT16_MIN;
	volatile uint64_t x622 = 7127680LLU;
	uint16_t x624 = 0U;
	volatile uint64_t t92 = 3689218247733926LLU;

	t92 = (x621^(x622*(x623*x624)));

	if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x626 = INT32_MIN;
	int32_t x628 = -935;

	t93 = (x625^(x626*(x627*x628)));

	if (t93 != 2147450880U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x633 = UINT64_MAX;
	static volatile uint32_t x634 = 1378163U;
	uint8_t x635 = 93U;
	uint8_t x636 = 15U;
	static uint64_t t94 = 824679221789LLU;

	t94 = (x633^(x634*(x635*x636)));

	if (t94 != 18446744071787014230LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x650 = INT16_MAX;
	static int32_t x651 = 49;
	volatile int64_t x652 = -1LL;
	volatile int64_t t95 = -5937LL;

	t95 = (x649^(x650*(x651*x652)));

	if (t95 != -1605583LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x653 = INT32_MIN;
	static int32_t x654 = -1690;
	int8_t x655 = INT8_MIN;
	uint32_t x656 = 25148U;
	static uint32_t t96 = 2U;

	t96 = (x653^(x654*(x655*x656)));

	if (t96 != 3292531712U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x662 = UINT64_MAX;
	static volatile int8_t x663 = INT8_MAX;
	uint64_t x664 = 10336LLU;
	volatile uint64_t t97 = 4562275974104LLU;

	t97 = (x661^(x662*(x663*x664)));

	if (t97 != 18446744073708238945LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x665 = 49U;
	uint64_t x666 = UINT64_MAX;
	int8_t x667 = 0;
	uint64_t x668 = 7357037701LLU;
	uint64_t t98 = 92350623553618LLU;

	t98 = (x665^(x666*(x667*x668)));

	if (t98 != 49LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x672 = -176134229894171LL;
	volatile int64_t t99 = 252345203608LL;

	t99 = (x669^(x670*(x671*x672)));

	if (t99 != -586174717087817985LL) { NG(); } else { ; }
	
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

