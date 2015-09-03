#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
int64_t x6 = 11544564LL;
int16_t x12 = 386;
uint64_t t2 = 218100138123LLU;
static int64_t t3 = -1LL;
int16_t x25 = INT16_MIN;
int64_t x26 = 3264826794LL;
volatile int64_t t7 = -10909264LL;
volatile int8_t x50 = INT8_MIN;
uint16_t x56 = UINT16_MAX;
int16_t x63 = -34;
volatile int8_t x64 = INT8_MIN;
int64_t t13 = -1590810931776052LL;
int16_t x74 = 7;
int32_t x76 = INT32_MIN;
volatile uint8_t x80 = UINT8_MAX;
volatile uint64_t x83 = 8198792140702739LLU;
static int16_t x86 = INT16_MIN;
static uint32_t x91 = 123U;
int8_t x92 = -1;
volatile uint32_t t18 = UINT32_MAX;
int8_t x93 = 32;
int16_t x98 = -1;
uint64_t t21 = 232651064192145485LLU;
uint64_t x109 = 111937855953450599LLU;
int64_t x110 = INT64_MIN;
uint64_t t23 = 11350368919383LLU;
uint64_t t24 = 446578267863LLU;
volatile uint64_t t25 = UINT64_MAX;
int32_t x125 = -1;
static int16_t x129 = INT16_MIN;
static int16_t x131 = INT16_MAX;
uint16_t x135 = 12362U;
int8_t x138 = INT8_MAX;
int32_t x148 = INT32_MIN;
int64_t t32 = -27044065635LL;
volatile int16_t x157 = INT16_MIN;
static int8_t x162 = INT8_MAX;
static volatile int64_t t37 = -23986954609LL;
int32_t x172 = INT32_MAX;
volatile int64_t x173 = -1LL;
volatile int64_t t39 = -25962506LL;
int16_t x186 = INT16_MAX;
volatile int64_t t43 = -508997149LL;
int32_t x202 = -3350932;
uint32_t x203 = 5318U;
int32_t t45 = 15931;
int64_t t48 = 42036373147528LL;
volatile int64_t t53 = 1991174589644908LL;
int16_t x245 = INT16_MIN;
int32_t x247 = -23101576;
static uint64_t x250 = 4729053696509940351LLU;
uint64_t x251 = UINT64_MAX;
int32_t x253 = -3;
static uint16_t x256 = UINT16_MAX;
static uint8_t x261 = 5U;
volatile int64_t t58 = 7568803510LL;
uint16_t x269 = 142U;
uint32_t t60 = 7U;
int8_t x277 = 2;
volatile int16_t x280 = -1;
volatile int32_t t62 = -163;
uint64_t t63 = UINT64_MAX;
int8_t x300 = -2;
volatile uint64_t t67 = UINT64_MAX;
volatile uint32_t x304 = UINT32_MAX;
volatile uint32_t t68 = UINT32_MAX;
int32_t x315 = INT32_MAX;
uint32_t t71 = 53U;
volatile int32_t x319 = INT32_MAX;
uint64_t x321 = 10377321LLU;
volatile int64_t x340 = INT64_MAX;
volatile int64_t t75 = 120026LL;
int64_t t76 = -5417975239LL;
volatile int8_t x357 = INT8_MIN;
static int8_t x359 = INT8_MIN;
volatile int64_t t77 = 3322626394LL;
int32_t x363 = -206850810;
static int32_t x372 = INT32_MIN;
volatile uint64_t t81 = UINT64_MAX;
uint64_t x381 = 74315540366977084LLU;
int64_t x384 = INT64_MIN;
int64_t x417 = INT64_MIN;
int32_t x420 = 1;
static uint16_t x421 = 1U;
volatile int32_t t93 = 3;
volatile uint64_t t94 = UINT64_MAX;
int8_t x430 = 1;
uint8_t x438 = 2U;
volatile uint8_t x442 = 3U;
int64_t x444 = 1163343242993642LL;
int64_t x447 = -1LL;
int16_t x456 = INT16_MAX;


void f0(void) {
	int64_t x1 = 67098972178839LL;
	int16_t x2 = INT16_MAX;
	uint8_t x4 = 0U;
	static int64_t t0 = 16946719635LL;

	t0 = ((x1+x2)|(x3|x4));

	if (t0 != -106LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = INT64_MIN;
	static int64_t x7 = 32069LL;
	uint16_t x8 = 8034U;
	int64_t t1 = -3361LL;

	t1 = ((x5+x6)|(x7|x8));

	if (t1 != -9223372036843208713LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 2589LLU;
	volatile int64_t x10 = INT64_MAX;
	uint64_t x11 = 20307010LLU;

	t2 = ((x9+x10)|(x11|x12));

	if (t2 != 9223372036875083742LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = UINT32_MAX;
	int64_t x14 = 1LL;
	int8_t x15 = INT8_MIN;
	volatile uint32_t x16 = 9273U;

	t3 = ((x13+x14)|(x15|x16));

	if (t3 != 8589934521LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static int16_t x18 = -1;
	volatile uint8_t x19 = 125U;
	uint8_t x20 = 1U;
	static volatile int32_t t4 = 473706319;

	t4 = ((x17+x18)|(x19|x20));

	if (t4 != -129) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	static int8_t x22 = INT8_MAX;
	int8_t x23 = -1;
	static int16_t x24 = INT16_MAX;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = ((x21+x22)|(x23|x24));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = UINT8_MAX;
	int64_t t6 = -137LL;

	t6 = ((x25+x26)|(x27|x28));

	if (t6 != 4294967295LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1007588LL;
	static uint32_t x30 = 3510U;
	volatile int64_t x31 = -1LL;
	int16_t x32 = -1;

	t7 = ((x29+x30)|(x31|x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = INT64_MAX;
	int8_t x34 = INT8_MIN;
	uint16_t x35 = 0U;
	int64_t x36 = INT64_MIN;
	int64_t t8 = 3799LL;

	t8 = ((x33+x34)|(x35|x36));

	if (t8 != -129LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MAX;
	volatile int32_t t9 = -26;

	t9 = ((x49+x50)|(x51|x52));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = -1;
	uint8_t x55 = 2U;
	volatile int32_t t10 = -1;

	t10 = ((x53+x54)|(x55|x56));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = -1;
	static uint16_t x58 = 834U;
	static int32_t x59 = INT32_MAX;
	uint64_t x60 = 21780028LLU;
	volatile uint64_t t11 = 239LLU;

	t11 = ((x57+x58)|(x59|x60));

	if (t11 != 2147483647LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 15070753125LLU;
	int32_t x62 = INT32_MIN;
	static uint64_t t12 = UINT64_MAX;

	t12 = ((x61+x62)|(x63|x64));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x69 = INT16_MIN;
	int16_t x70 = INT16_MIN;
	static int32_t x71 = -1;
	volatile int64_t x72 = INT64_MIN;

	t13 = ((x69+x70)|(x71|x72));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = 3;
	static int32_t x75 = INT32_MAX;
	static int32_t t14 = 24;

	t14 = ((x73+x74)|(x75|x76));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = UINT32_MAX;
	int8_t x78 = -1;
	int32_t x79 = INT32_MAX;
	uint32_t t15 = UINT32_MAX;

	t15 = ((x77+x78)|(x79|x80));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 1011522612U;
	volatile int16_t x82 = -1;
	uint32_t x84 = UINT32_MAX;
	static volatile uint64_t t16 = 1LLU;

	t16 = ((x81+x82)|(x83|x84));

	if (t16 != 8198796215320575LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x85 = INT16_MIN;
	int8_t x87 = -3;
	static volatile int32_t x88 = -13;
	static volatile int32_t t17 = 3274;

	t17 = ((x85+x86)|(x87|x88));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = INT16_MIN;
	volatile uint32_t x90 = 350100842U;

	t18 = ((x89+x90)|(x91|x92));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = INT16_MAX;
	uint64_t x96 = 1441827LLU;
	volatile uint64_t t19 = 1538LLU;

	t19 = ((x93+x94)|(x95|x96));

	if (t19 != 1474559LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 249LL;
	int16_t x99 = INT16_MIN;
	static volatile uint8_t x100 = 1U;
	static int64_t t20 = 13416058200769LL;

	t20 = ((x97+x98)|(x99|x100));

	if (t20 != -32519LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MIN;
	uint64_t x102 = UINT64_MAX;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = INT16_MAX;

	t21 = ((x101+x102)|(x103|x104));

	if (t21 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = -1LL;
	static int64_t x106 = 930806085576276LL;
	static int8_t x107 = INT8_MAX;
	int8_t x108 = INT8_MIN;
	int64_t t22 = 1516LL;

	t22 = ((x105+x106)|(x107|x108));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x111 = 111U;
	static volatile int64_t x112 = 4226993558383040185LL;

	t23 = ((x109+x110)|(x111|x112));

	if (t23 != 13523728039062484735LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = -1;
	uint8_t x114 = 1U;
	int16_t x115 = INT16_MAX;
	uint64_t x116 = 398071533141617LLU;

	t24 = ((x113+x114)|(x115|x116));

	if (t24 != 398071533142015LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = -1;
	volatile int32_t x118 = INT32_MAX;
	uint16_t x119 = 2950U;
	uint64_t x120 = UINT64_MAX;

	t25 = ((x117+x118)|(x119|x120));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x121 = INT32_MIN;
	volatile int64_t x122 = INT64_MAX;
	int64_t x123 = -1LL;
	static volatile int32_t x124 = -2;
	static int64_t t26 = 5655130310845LL;

	t26 = ((x121+x122)|(x123|x124));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x126 = -53;
	volatile uint16_t x127 = UINT16_MAX;
	int32_t x128 = INT32_MIN;
	int32_t t27 = 5587;

	t27 = ((x125+x126)|(x127|x128));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x130 = 40203283LL;
	volatile int32_t x132 = 548191;
	int64_t t28 = -210875LL;

	t28 = ((x129+x130)|(x131|x132));

	if (t28 != 40697855LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = -1;
	uint8_t x134 = 17U;
	int8_t x136 = INT8_MAX;
	static int32_t t29 = -155;

	t29 = ((x133+x134)|(x135|x136));

	if (t29 != 12415) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = UINT8_MAX;
	uint16_t x139 = UINT16_MAX;
	uint8_t x140 = 8U;
	volatile int32_t t30 = -1;

	t30 = ((x137+x138)|(x139|x140));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = 31;
	uint32_t x142 = UINT32_MAX;
	volatile int32_t x143 = INT32_MAX;
	static int8_t x144 = -1;
	uint32_t t31 = UINT32_MAX;

	t31 = ((x141+x142)|(x143|x144));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x145 = -1;
	volatile int64_t x146 = INT64_MAX;
	int16_t x147 = -15117;

	t32 = ((x145+x146)|(x147|x148));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MAX;
	int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	int32_t t33 = 1039342;

	t33 = ((x149+x150)|(x151|x152));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = -1LL;
	static int32_t x154 = INT32_MIN;
	int32_t x155 = -187750209;
	int64_t x156 = INT64_MIN;
	int64_t t34 = 1434781474260641LL;

	t34 = ((x153+x154)|(x155|x156));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x158 = 14U;
	uint64_t x159 = 26641713359559LLU;
	uint32_t x160 = 31646073U;
	uint64_t t35 = 34868950266920521LLU;

	t35 = ((x157+x158)|(x159|x160));

	if (t35 != 18446744073709546495LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = 1;
	int32_t x163 = -149840;
	int16_t x164 = -30;
	static int32_t t36 = -740896624;

	t36 = ((x161+x162)|(x163|x164));

	if (t36 != -14) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x165 = -1LL;
	uint32_t x166 = 23796U;
	int8_t x167 = 2;
	static int8_t x168 = -2;

	t37 = ((x165+x166)|(x167|x168));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = -1;
	int16_t x170 = INT16_MIN;
	static int64_t x171 = INT64_MIN;
	static int64_t t38 = -43363LL;

	t38 = ((x169+x170)|(x171|x172));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x174 = 170915339641252LL;
	int16_t x175 = 7551;
	volatile uint32_t x176 = 406835U;

	t39 = ((x173+x174)|(x175|x176));

	if (t39 != 170915339910655LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	static uint64_t x178 = UINT64_MAX;
	int64_t x179 = -5796290LL;
	int32_t x180 = 2612580;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = ((x177+x178)|(x179|x180));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x185 = INT16_MIN;
	uint8_t x187 = 3U;
	volatile uint16_t x188 = UINT16_MAX;
	volatile int32_t t41 = -159;

	t41 = ((x185+x186)|(x187|x188));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = -1;
	int32_t x190 = -1;
	uint64_t x191 = 106711812526183LLU;
	uint64_t x192 = 794804263LLU;
	uint64_t t42 = UINT64_MAX;

	t42 = ((x189+x190)|(x191|x192));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = -1;
	int64_t x194 = 32940731871323LL;
	static volatile uint16_t x195 = UINT16_MAX;
	int32_t x196 = INT32_MIN;

	t43 = ((x193+x194)|(x195|x196));

	if (t43 != -1667235841LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = INT16_MIN;
	uint64_t x204 = 31762567LLU;
	uint64_t t44 = 0LLU;

	t44 = ((x201+x202)|(x203|x204));

	if (t44 != 18446744073708306159LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x205 = 0U;
	static volatile int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MAX;
	uint16_t x208 = 35U;

	t45 = ((x205+x206)|(x207|x208));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x209 = 1U;
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = 508294015762LL;
	volatile uint32_t x212 = 39174404U;
	volatile int64_t t46 = 63684890472LL;

	t46 = ((x209+x210)|(x211|x212));

	if (t46 != 508332862230LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x213 = 37LLU;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = -2LL;
	volatile int64_t x216 = INT64_MIN;
	uint64_t t47 = 4955815723594503884LLU;

	t47 = ((x213+x214)|(x215|x216));

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x217 = 5U;
	int64_t x218 = INT64_MIN;
	uint16_t x219 = UINT16_MAX;
	static uint32_t x220 = 355300075U;

	t48 = ((x217+x218)|(x219|x220));

	if (t48 != -9223372036499439617LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = INT32_MAX;
	static int32_t x222 = -1;
	volatile int16_t x223 = INT16_MIN;
	int16_t x224 = -1;
	volatile int32_t t49 = 8;

	t49 = ((x221+x222)|(x223|x224));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x225 = UINT16_MAX;
	uint32_t x226 = 2U;
	int64_t x227 = INT64_MAX;
	uint64_t x228 = 1195560648117LLU;
	static volatile uint64_t t50 = 775188599864168942LLU;

	t50 = ((x225+x226)|(x227|x228));

	if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x229 = 2841U;
	uint8_t x230 = UINT8_MAX;
	static uint32_t x231 = 10U;
	int16_t x232 = -1;
	uint32_t t51 = UINT32_MAX;

	t51 = ((x229+x230)|(x231|x232));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x233 = 3626147933LLU;
	static int8_t x234 = -3;
	int32_t x235 = 7359;
	int64_t x236 = INT64_MAX;
	volatile uint64_t t52 = 1LLU;

	t52 = ((x233+x234)|(x235|x236));

	if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = 129;
	volatile int64_t x242 = -1LL;
	int64_t x243 = -1LL;
	int8_t x244 = -1;

	t53 = ((x241+x242)|(x243|x244));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x246 = -1;
	int8_t x248 = INT8_MAX;
	volatile int32_t t54 = -20452;

	t54 = ((x245+x246)|(x247|x248));

	if (t54 != -32769) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x249 = INT32_MIN;
	int32_t x252 = -3;
	static uint64_t t55 = UINT64_MAX;

	t55 = ((x249+x250)|(x251|x252));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x254 = 869;
	static int16_t x255 = INT16_MIN;
	volatile int32_t t56 = -948;

	t56 = ((x253+x254)|(x255|x256));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x257 = INT16_MAX;
	uint64_t x258 = 51511534898LLU;
	int32_t x259 = -31478382;
	int16_t x260 = -1;
	uint64_t t57 = UINT64_MAX;

	t57 = ((x257+x258)|(x259|x260));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x262 = INT32_MIN;
	uint32_t x263 = 486127482U;
	int64_t x264 = INT64_MIN;

	t58 = ((x261+x262)|(x263|x264));

	if (t58 != -1661356161LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x265 = UINT8_MAX;
	uint8_t x266 = UINT8_MAX;
	int16_t x267 = INT16_MIN;
	volatile uint8_t x268 = UINT8_MAX;
	int32_t t59 = -2961748;

	t59 = ((x265+x266)|(x267|x268));

	if (t59 != -32257) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x270 = 63;
	static uint32_t x271 = 1U;
	volatile int32_t x272 = INT32_MIN;

	t60 = ((x269+x270)|(x271|x272));

	if (t60 != 2147483853U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x273 = INT8_MIN;
	uint32_t x274 = 121225627U;
	uint32_t x275 = 16195010U;
	int8_t x276 = 21;
	static volatile uint32_t t61 = 347138104U;

	t61 = ((x273+x274)|(x275|x276));

	if (t61 != 134208991U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x278 = INT32_MIN;
	int8_t x279 = -18;

	t62 = ((x277+x278)|(x279|x280));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x281 = 104U;
	int16_t x282 = INT16_MIN;
	volatile int16_t x283 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;

	t63 = ((x281+x282)|(x283|x284));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = INT32_MIN;
	static int32_t x286 = 20238721;
	int16_t x287 = -1;
	static uint16_t x288 = 17522U;
	volatile int32_t t64 = 93931219;

	t64 = ((x285+x286)|(x287|x288));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = INT16_MAX;
	int8_t x290 = 14;
	static int32_t x291 = INT32_MAX;
	uint64_t x292 = 48531366456472LLU;
	static uint64_t t65 = 274842676959234LLU;

	t65 = ((x289+x290)|(x291|x292));

	if (t65 != 48533130444799LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MAX;
	static uint64_t x294 = 1405144874441167360LLU;
	int64_t x295 = -1LL;
	static int64_t x296 = INT64_MIN;
	uint64_t t66 = UINT64_MAX;

	t66 = ((x293+x294)|(x295|x296));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = -1;
	int8_t x298 = 1;
	uint64_t x299 = UINT64_MAX;

	t67 = ((x297+x298)|(x299|x300));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = INT16_MAX;
	static int16_t x302 = -1;
	int8_t x303 = -54;

	t68 = ((x301+x302)|(x303|x304));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = -1;
	uint8_t x306 = UINT8_MAX;
	uint16_t x307 = UINT16_MAX;
	volatile int8_t x308 = -27;
	int32_t t69 = -18700;

	t69 = ((x305+x306)|(x307|x308));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x309 = 1;
	volatile int8_t x310 = INT8_MIN;
	static int8_t x311 = 1;
	volatile int8_t x312 = -1;
	volatile int32_t t70 = 13019;

	t70 = ((x309+x310)|(x311|x312));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = UINT16_MAX;
	uint32_t x314 = 1533231297U;
	static uint32_t x316 = 3377U;

	t71 = ((x313+x314)|(x315|x316));

	if (t71 != 2147483647U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = INT64_MIN;
	uint8_t x318 = UINT8_MAX;
	static uint64_t x320 = 78403191LLU;
	uint64_t t72 = 96196LLU;

	t72 = ((x317+x318)|(x319|x320));

	if (t72 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x322 = INT64_MIN;
	int64_t x323 = 2011311975482069519LL;
	int32_t x324 = INT32_MIN;
	volatile uint64_t t73 = 735393015LLU;

	t73 = ((x321+x322)|(x323|x324));

	if (t73 != 18446744073032129135LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x329 = 0U;
	int16_t x330 = -53;
	int32_t x331 = INT32_MIN;
	int32_t x332 = -120;
	volatile int32_t t74 = 12050632;

	t74 = ((x329+x330)|(x331|x332));

	if (t74 != -53) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = -68948;
	static int8_t x338 = INT8_MIN;
	int64_t x339 = 94908LL;

	t75 = ((x337+x338)|(x339|x340));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x349 = -1;
	int8_t x350 = -1;
	int64_t x351 = INT64_MIN;
	int16_t x352 = 13;

	t76 = ((x349+x350)|(x351|x352));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x358 = 9088999LL;
	int64_t x360 = 433600450054LL;

	t77 = ((x357+x358)|(x359|x360));

	if (t77 != -25LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x361 = 3U;
	int8_t x362 = INT8_MIN;
	uint64_t x364 = 36608LLU;
	uint64_t t78 = 99645936858335799LLU;

	t78 = ((x361+x362)|(x363|x364));

	if (t78 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MAX;
	int8_t x366 = 1;
	static int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MIN;
	int64_t t79 = 97548682331LL;

	t79 = ((x365+x366)|(x367|x368));

	if (t79 != -32640LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	static uint32_t x371 = 3U;
	uint32_t t80 = 47727U;

	t80 = ((x369+x370)|(x371|x372));

	if (t80 != 4294901763U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x373 = 0U;
	volatile uint8_t x374 = UINT8_MAX;
	uint64_t x375 = UINT64_MAX;
	uint32_t x376 = 1092123772U;

	t81 = ((x373+x374)|(x375|x376));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x377 = -1;
	volatile int16_t x378 = -1;
	uint16_t x379 = 889U;
	int64_t x380 = INT64_MIN;
	volatile int64_t t82 = 245543772LL;

	t82 = ((x377+x378)|(x379|x380));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x382 = INT16_MAX;
	int32_t x383 = INT32_MIN;
	uint64_t t83 = 66978250LLU;

	t83 = ((x381+x382)|(x383|x384));

	if (t83 != 18446744071979264059LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x385 = -1LL;
	volatile int64_t x386 = -1LL;
	int16_t x387 = INT16_MIN;
	uint16_t x388 = 194U;
	volatile int64_t t84 = -177580334451LL;

	t84 = ((x385+x386)|(x387|x388));

	if (t84 != -2LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = UINT32_MAX;
	volatile uint64_t x390 = UINT64_MAX;
	static int16_t x391 = -1;
	int64_t x392 = -73369423638036LL;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = ((x389+x390)|(x391|x392));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = -1LL;
	int16_t x394 = INT16_MIN;
	static int64_t x395 = INT64_MAX;
	int8_t x396 = 1;
	volatile int64_t t86 = 250185282639067458LL;

	t86 = ((x393+x394)|(x395|x396));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = -53;
	uint64_t x398 = 787LLU;
	int16_t x399 = -1;
	volatile int32_t x400 = 5;
	uint64_t t87 = UINT64_MAX;

	t87 = ((x397+x398)|(x399|x400));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = 29657U;
	int32_t x402 = 1825701;
	uint16_t x403 = 0U;
	volatile int32_t x404 = 515276384;
	volatile uint32_t t88 = 2114U;

	t88 = ((x401+x402)|(x403|x404));

	if (t88 != 515800958U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x405 = 90U;
	uint8_t x406 = UINT8_MAX;
	volatile uint64_t x407 = 1432081LLU;
	int8_t x408 = INT8_MIN;
	volatile uint64_t t89 = 0LLU;

	t89 = ((x405+x406)|(x407|x408));

	if (t89 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x409 = 7U;
	uint64_t x410 = 179441859348LLU;
	uint16_t x411 = 8075U;
	static int16_t x412 = -1;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = ((x409+x410)|(x411|x412));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x413 = 5U;
	uint8_t x414 = 1U;
	volatile int64_t x415 = INT64_MIN;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = ((x413+x414)|(x415|x416));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x418 = INT16_MAX;
	volatile int64_t x419 = -1LL;
	volatile int64_t t92 = -1LL;

	t92 = ((x417+x418)|(x419|x420));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x422 = 56;
	volatile int16_t x423 = INT16_MIN;
	int32_t x424 = -1;

	t93 = ((x421+x422)|(x423|x424));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x425 = UINT64_MAX;
	int16_t x426 = INT16_MIN;
	static int32_t x427 = 178865;
	uint64_t x428 = 45299250LLU;

	t94 = ((x425+x426)|(x427|x428));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x429 = 26;
	volatile uint8_t x431 = UINT8_MAX;
	int32_t x432 = -377220;
	int32_t t95 = 487;

	t95 = ((x429+x430)|(x431|x432));

	if (t95 != -377089) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x437 = -30;
	static int64_t x439 = 1846622058LL;
	int32_t x440 = INT32_MIN;
	static volatile int64_t t96 = 1LL;

	t96 = ((x437+x438)|(x439|x440));

	if (t96 != -18LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x441 = INT64_MIN;
	int64_t x443 = -1LL;
	static volatile int64_t t97 = -26903153084311LL;

	t97 = ((x441+x442)|(x443|x444));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x445 = INT16_MIN;
	uint16_t x446 = 21U;
	int16_t x448 = INT16_MIN;
	static volatile int64_t t98 = 30379LL;

	t98 = ((x445+x446)|(x447|x448));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x453 = INT32_MIN;
	static uint16_t x454 = 2U;
	uint16_t x455 = 2764U;
	volatile int32_t t99 = -410901;

	t99 = ((x453+x454)|(x455|x456));

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

