#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x3 = 9U;
volatile uint64_t t0 = 10077871223LLU;
volatile uint32_t x7 = UINT32_MAX;
int64_t t2 = -494461210810LL;
int64_t x15 = INT64_MIN;
uint8_t x24 = 1U;
uint64_t t5 = 5208412LLU;
int64_t x28 = 4LL;
int32_t x31 = -1;
int32_t t7 = 3;
int8_t x34 = -9;
uint64_t x38 = 421729861036882LLU;
int64_t x42 = 779328317227LL;
int64_t x44 = -1LL;
volatile uint32_t t11 = 1117025393U;
uint16_t x51 = 6852U;
static int32_t x52 = INT32_MAX;
int8_t x54 = INT8_MIN;
volatile int64_t x55 = -1LL;
volatile int64_t t13 = -26704557423514691LL;
static volatile uint16_t x62 = UINT16_MAX;
int8_t x65 = -1;
uint16_t x68 = UINT16_MAX;
int16_t x72 = -7639;
static uint8_t x79 = UINT8_MAX;
volatile uint8_t x82 = UINT8_MAX;
uint64_t x84 = 681708407LLU;
int16_t x94 = INT16_MAX;
int64_t t23 = 11637974498629LL;
int64_t t24 = -529172765735358914LL;
uint32_t x101 = 4830787U;
int16_t x104 = -12990;
static volatile uint32_t t25 = 26602943U;
int32_t x107 = INT32_MIN;
int32_t t26 = -21;
uint32_t x109 = UINT32_MAX;
int32_t x120 = 516139;
static volatile uint32_t t29 = 42U;
uint16_t x121 = 5242U;
uint64_t t30 = 120987LLU;
uint16_t x126 = UINT16_MAX;
volatile int8_t x127 = 0;
volatile int64_t x130 = INT64_MIN;
uint32_t x133 = UINT32_MAX;
int8_t x138 = INT8_MAX;
int64_t x142 = -1LL;
int32_t x157 = INT32_MAX;
static uint64_t x158 = 5308352157LLU;
static uint64_t x162 = UINT64_MAX;
volatile int64_t x163 = INT64_MAX;
int16_t x166 = INT16_MAX;
static int64_t x175 = INT64_MIN;
int16_t x177 = INT16_MIN;
volatile int16_t x180 = INT16_MIN;
uint32_t x181 = 3U;
static volatile uint32_t t45 = 18U;
int64_t x191 = -1LL;
int8_t x192 = -1;
volatile int64_t t48 = 428720LL;
int16_t x199 = INT16_MIN;
uint16_t x204 = 56U;
int32_t x209 = INT32_MIN;
int16_t x212 = INT16_MIN;
static volatile int32_t t52 = INT32_MAX;
volatile int32_t x223 = -51578;
volatile int16_t x225 = 137;
int8_t x239 = -1;
uint32_t x241 = UINT32_MAX;
volatile uint32_t t60 = 5760296U;
static int64_t x245 = -213104723LL;
volatile uint16_t x251 = 16237U;
int8_t x256 = -21;
int16_t x258 = INT16_MAX;
int64_t x260 = -1LL;
static volatile int64_t t64 = 5606075536LL;
volatile uint8_t x266 = UINT8_MAX;
static int64_t x267 = -6LL;
volatile int64_t t66 = 227861LL;
int16_t x275 = INT16_MAX;
int16_t x277 = 3515;
int32_t x280 = -37;
int16_t x285 = INT16_MAX;
int32_t x298 = INT32_MAX;
volatile int16_t x302 = INT16_MIN;
static int64_t x303 = INT64_MAX;
int64_t t76 = 3164813LL;
int16_t x311 = -1;
static int8_t x313 = INT8_MIN;
uint64_t x314 = UINT64_MAX;
volatile uint64_t x318 = UINT64_MAX;
volatile uint8_t x321 = 40U;
static volatile uint8_t x325 = 10U;
uint32_t x337 = 73U;
uint32_t t84 = 4897U;
int16_t x342 = INT16_MIN;
int64_t x347 = -1LL;
static int8_t x351 = INT8_MAX;
int8_t x356 = INT8_MIN;
int16_t x363 = -1;
volatile uint64_t t90 = 115LLU;
int32_t x371 = INT32_MIN;
uint32_t x373 = UINT32_MAX;
int16_t x378 = INT16_MIN;
uint32_t x382 = UINT32_MAX;
static int8_t x383 = 45;
static volatile uint64_t t95 = 12021607469323LLU;
int32_t x393 = INT32_MIN;
volatile uint32_t x397 = UINT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint64_t x2 = 5774525399766495262LLU;
	int64_t x4 = INT64_MIN;

	t0 = (x1^((x2&x3)|x4));

	if (t0 != 9223372036854775688LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	int8_t x6 = -1;
	volatile uint8_t x8 = 3U;
	volatile uint32_t t1 = 15U;

	t1 = (x5^((x6&x7)|x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -485005974LL;
	int8_t x10 = 0;
	volatile int64_t x11 = INT64_MIN;
	uint32_t x12 = 904400U;

	t2 = (x9^((x10&x11)|x12));

	if (t2 != -484791878LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 226393845LLU;
	int16_t x14 = 4152;
	uint32_t x16 = 169U;
	uint64_t t3 = 7LLU;

	t3 = (x13^((x14&x15)|x16));

	if (t3 != 226393692LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 1;
	int64_t x18 = -6057780145393LL;
	volatile uint16_t x19 = 27U;
	volatile int8_t x20 = INT8_MIN;
	volatile int64_t t4 = -12618421172LL;

	t4 = (x17^((x18&x19)|x20));

	if (t4 != -118LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static int16_t x22 = -182;
	uint64_t x23 = UINT64_MAX;

	t5 = (x21^((x22&x23)|x24));

	if (t5 != 32587LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t x26 = INT32_MIN;
	static volatile int32_t x27 = 4;
	static uint64_t t6 = 148293LLU;

	t6 = (x25^((x26&x27)|x28));

	if (t6 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -3;
	volatile uint16_t x30 = UINT16_MAX;
	int16_t x32 = -1;

	t7 = (x29^((x30&x31)|x32));

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int16_t x35 = INT16_MAX;
	int64_t x36 = INT64_MIN;
	int64_t t8 = 421360056LL;

	t8 = (x33^((x34&x35)|x36));

	if (t8 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -9;
	volatile int8_t x39 = -1;
	static uint8_t x40 = 2U;
	volatile uint64_t t9 = 217311960853551374LLU;

	t9 = (x37^((x38&x39)|x40));

	if (t9 != 18446322343848514725LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	static int8_t x43 = INT8_MAX;
	int64_t t10 = 1773579337417LL;

	t10 = (x41^((x42&x43)|x44));

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = -54;
	int16_t x48 = INT16_MIN;

	t11 = (x45^((x46&x47)|x48));

	if (t11 != 4294967221U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	int64_t x50 = INT64_MIN;
	static int64_t t12 = -528020985LL;

	t12 = (x49^((x50&x51)|x52));

	if (t12 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	static int8_t x56 = -1;

	t13 = (x53^((x54&x55)|x56));

	if (t13 != -256LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	int32_t x58 = -1;
	int16_t x59 = INT16_MAX;
	static int16_t x60 = INT16_MIN;
	volatile uint64_t t14 = 108516680950572024LLU;

	t14 = (x57^((x58&x59)|x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 37623U;
	static uint8_t x63 = 28U;
	volatile uint8_t x64 = UINT8_MAX;
	volatile uint32_t t15 = 167742791U;

	t15 = (x61^((x62&x63)|x64));

	if (t15 != 37384U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = 2;
	static int64_t x67 = INT64_MIN;
	volatile int64_t t16 = 15488LL;

	t16 = (x65^((x66&x67)|x68));

	if (t16 != -65536LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile uint64_t x70 = 19267089089881920LLU;
	int8_t x71 = INT8_MIN;
	volatile uint64_t t17 = 14570362028757LLU;

	t17 = (x69^((x70&x71)|x72));

	if (t17 != 6313LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 30669122941LLU;
	int16_t x74 = INT16_MIN;
	int32_t x75 = 9;
	volatile uint16_t x76 = UINT16_MAX;
	volatile uint64_t t18 = 492639238391471LLU;

	t18 = (x73^((x74&x75)|x76));

	if (t18 != 30669099650LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x77 = UINT32_MAX;
	static uint16_t x78 = UINT16_MAX;
	uint8_t x80 = 1U;
	uint32_t t19 = 150857U;

	t19 = (x77^((x78&x79)|x80));

	if (t19 != 4294967040U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 9U;
	static uint32_t x83 = 2U;
	volatile uint64_t t20 = 5909403889988595146LLU;

	t20 = (x81^((x82&x83)|x84));

	if (t20 != 681708414LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 73U;
	int16_t x86 = INT16_MAX;
	int32_t x87 = -1;
	volatile uint16_t x88 = 3U;
	int32_t t21 = 939364683;

	t21 = (x85^((x86&x87)|x88));

	if (t21 != 32694) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = 1989286877043964828LL;
	uint64_t x90 = 830LLU;
	uint16_t x91 = 0U;
	int64_t x92 = INT64_MAX;
	volatile uint64_t t22 = 178057351696150LLU;

	t22 = (x89^((x90&x91)|x92));

	if (t22 != 7234085159810810979LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = 24;
	static volatile int32_t x95 = 6;
	static int64_t x96 = -1LL;

	t23 = (x93^((x94&x95)|x96));

	if (t23 != -25LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = 511;
	int64_t x98 = INT64_MAX;
	volatile uint32_t x99 = UINT32_MAX;
	volatile uint32_t x100 = UINT32_MAX;

	t24 = (x97^((x98&x99)|x100));

	if (t24 != 4294966784LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = 0U;
	volatile int8_t x103 = INT8_MAX;

	t25 = (x101^((x102&x103)|x104));

	if (t25 != 4290149121U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	int8_t x106 = -1;
	int32_t x108 = INT32_MIN;

	t26 = (x105^((x106&x107)|x108));

	if (t26 != -2147450881) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x110 = -1LL;
	int16_t x111 = INT16_MIN;
	static int8_t x112 = INT8_MIN;
	int64_t t27 = 55LL;

	t27 = (x109^((x110&x111)|x112));

	if (t27 != -4294967169LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MIN;
	int16_t x114 = -157;
	int32_t x115 = 6495;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = -625834;

	t28 = (x113^((x114&x115)|x116));

	if (t28 != 6467) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MAX;
	uint32_t x118 = UINT32_MAX;
	volatile int32_t x119 = INT32_MAX;

	t29 = (x117^((x118&x119)|x120));

	if (t29 != 2147450880U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x122 = 19U;
	int64_t x123 = INT64_MIN;
	uint64_t x124 = 2075114471570073281LLU;

	t30 = (x121^((x122&x123)|x124));

	if (t30 != 2075114471570076347LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int16_t x128 = 2228;
	volatile int32_t t31 = 874537586;

	t31 = (x125^((x126&x127)|x128));

	if (t31 != -30540) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	volatile int8_t x131 = INT8_MAX;
	static int32_t x132 = 0;
	int64_t t32 = INT64_MIN;

	t32 = (x129^((x130&x131)|x132));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = 104571;
	volatile int32_t x135 = 1005885392;
	int16_t x136 = -6;
	static uint32_t t33 = 2076210U;

	t33 = (x133^((x134&x135)|x136));

	if (t33 != 5U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	static int32_t x139 = INT32_MIN;
	uint64_t x140 = 2272282226318148LLU;
	uint64_t t34 = 6329631LLU;

	t34 = (x137^((x138&x139)|x140));

	if (t34 != 18444471791483233467LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -29;
	int16_t x143 = INT16_MIN;
	int8_t x144 = -4;
	volatile int64_t t35 = 2419891LL;

	t35 = (x141^((x142&x143)|x144));

	if (t35 != 31LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 1U;
	int64_t x146 = -3634041048LL;
	volatile int8_t x147 = 7;
	int32_t x148 = -11979520;
	int64_t t36 = 8LL;

	t36 = (x145^((x146&x147)|x148));

	if (t36 != -11979519LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 6U;
	int64_t x150 = INT64_MAX;
	static int32_t x151 = INT32_MAX;
	int8_t x152 = -29;
	int64_t t37 = 30872054843LL;

	t37 = (x149^((x150&x151)|x152));

	if (t37 != -7LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 15;
	volatile uint16_t x154 = UINT16_MAX;
	uint64_t x155 = 7LLU;
	volatile int64_t x156 = INT64_MIN;
	static uint64_t t38 = 706187676950LLU;

	t38 = (x153^((x154&x155)|x156));

	if (t38 != 9223372036854775816LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x159 = 30814U;
	volatile int16_t x160 = INT16_MIN;
	volatile uint64_t t39 = 5LLU;

	t39 = (x157^((x158&x159)|x160));

	if (t39 != 18446744071562100707LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 9U;
	int64_t x164 = -1743319989183574427LL;
	volatile uint64_t t40 = 1985LLU;

	t40 = (x161^((x162&x163)|x164));

	if (t40 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 103391342292LLU;
	volatile int64_t x167 = -1LL;
	static volatile uint16_t x168 = 11U;
	volatile uint64_t t41 = 455201167485LLU;

	t41 = (x165^((x166&x167)|x168));

	if (t41 != 103391351083LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	static int64_t x170 = -1368836293223981LL;
	int64_t x171 = INT64_MAX;
	int32_t x172 = INT32_MIN;
	int64_t t42 = 1594LL;

	t42 = (x169^((x170&x171)|x172));

	if (t42 != -151198164LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 105399826;
	static uint16_t x174 = 22102U;
	int64_t x176 = 2007LL;
	volatile int64_t t43 = -531586569LL;

	t43 = (x173^((x174&x175)|x176));

	if (t43 != 105398725LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -29806;
	int32_t x179 = 2;
	int32_t t44 = 18;

	t44 = (x177^((x178&x179)|x180));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	static int16_t x183 = -1;
	volatile uint16_t x184 = 1105U;

	t45 = (x181^((x182&x183)|x184));

	if (t45 != 4294935634U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = INT8_MIN;
	volatile int64_t x186 = INT64_MIN;
	volatile int16_t x187 = -1;
	static int16_t x188 = 1;
	volatile int64_t t46 = -52692099718LL;

	t46 = (x185^((x186&x187)|x188));

	if (t46 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	uint32_t x190 = 10593830U;
	int64_t t47 = -463178745394976LL;

	t47 = (x189^((x190&x191)|x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 1795U;
	uint16_t x194 = UINT16_MAX;
	static int64_t x195 = 521755837241791606LL;
	int8_t x196 = -1;

	t48 = (x193^((x194&x195)|x196));

	if (t48 != -1796LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = 224690585LL;
	volatile int8_t x198 = INT8_MIN;
	int32_t x200 = -1;
	static int64_t t49 = 112964580824LL;

	t49 = (x197^((x198&x199)|x200));

	if (t49 != -224690586LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	uint32_t x202 = 1U;
	static uint16_t x203 = UINT16_MAX;
	static volatile uint32_t t50 = 422268157U;

	t50 = (x201^((x202&x203)|x204));

	if (t50 != 4294967238U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	uint16_t x206 = 2898U;
	volatile int16_t x207 = INT16_MIN;
	static uint64_t x208 = 4305007318701097102LLU;
	volatile uint64_t t51 = 4167079835187687592LLU;

	t51 = (x205^((x206&x207)|x208));

	if (t51 != 4305007318701097073LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x210 = -1;
	int16_t x211 = INT16_MAX;

	t52 = (x209^((x210&x211)|x212));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	volatile int8_t x214 = 0;
	int64_t x215 = -23525799LL;
	static int32_t x216 = -13818064;
	static volatile int64_t t53 = 53LL;

	t53 = (x213^((x214&x215)|x216));

	if (t53 != 13805360LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MAX;
	volatile int8_t x219 = -1;
	int64_t x220 = 6131871414168LL;
	volatile int64_t t54 = -547483632495576627LL;

	t54 = (x217^((x218&x219)|x220));

	if (t54 != -6133213265921LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 76U;
	int32_t x222 = INT32_MIN;
	int8_t x224 = -1;
	volatile int32_t t55 = -27425;

	t55 = (x221^((x222&x223)|x224));

	if (t55 != -77) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MIN;
	static int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -484629144;

	t56 = (x225^((x226&x227)|x228));

	if (t56 != -247) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = 0U;
	static int16_t x230 = INT16_MIN;
	uint8_t x231 = 26U;
	volatile int32_t x232 = -1;
	int32_t t57 = -33;

	t57 = (x229^((x230&x231)|x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -2046393400582598LL;
	int32_t x234 = INT32_MIN;
	uint32_t x235 = 486U;
	int8_t x236 = INT8_MAX;
	volatile int64_t t58 = 9224271LL;

	t58 = (x233^((x234&x235)|x236));

	if (t58 != -2046393400582587LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = INT32_MAX;
	int32_t x238 = 59;
	int32_t x240 = INT32_MIN;
	int32_t t59 = 1647598;

	t59 = (x237^((x238&x239)|x240));

	if (t59 != -60) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = 5;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = UINT32_MAX;

	t60 = (x241^((x242&x243)|x244));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = INT16_MIN;
	uint32_t x247 = UINT32_MAX;
	volatile uint32_t x248 = 1242414669U;
	int64_t t61 = -58694708683577450LL;

	t61 = (x245^((x246&x247)|x248));

	if (t61 != -4081845792LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static volatile int64_t x250 = INT64_MIN;
	int8_t x252 = 0;
	int64_t t62 = -57998LL;

	t62 = (x249^((x250&x251)|x252));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	static int32_t x254 = 133246701;
	uint64_t x255 = 20879157243673LLU;
	volatile uint64_t t63 = 911356633296LLU;

	t63 = (x253^((x254&x255)|x256));

	if (t63 != 18446744073709518868LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	uint16_t x259 = UINT16_MAX;

	t64 = (x257^((x258&x259)|x260));

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = -1459;
	int16_t x262 = 2;
	int64_t x263 = INT64_MAX;
	uint16_t x264 = 6U;
	volatile int64_t t65 = -192598448797702220LL;

	t65 = (x261^((x262&x263)|x264));

	if (t65 != -1461LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	static int64_t x268 = -1LL;

	t66 = (x265^((x266&x267)|x268));

	if (t66 != -65536LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	int8_t x270 = 1;
	uint32_t x271 = UINT32_MAX;
	int8_t x272 = INT8_MAX;
	uint32_t t67 = 1433987U;

	t67 = (x269^((x270&x271)|x272));

	if (t67 != 2147483520U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 0;
	uint64_t x274 = 23530180561LLU;
	static int64_t x276 = -1LL;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x273^((x274&x275)|x276));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x278 = -1LL;
	int16_t x279 = 0;
	int64_t t69 = -9683362416LL;

	t69 = (x277^((x278&x279)|x280));

	if (t69 != -3488LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = UINT16_MAX;
	int32_t x282 = INT32_MAX;
	uint16_t x283 = 297U;
	static volatile int64_t x284 = INT64_MAX;
	int64_t t70 = -468937099442097LL;

	t70 = (x281^((x282&x283)|x284));

	if (t70 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x286 = 88U;
	static int64_t x287 = INT64_MIN;
	volatile uint64_t x288 = 1112908206715014755LLU;
	volatile uint64_t t71 = 1617801801LLU;

	t71 = (x285^((x286&x287)|x288));

	if (t71 != 1112908206715040156LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	int32_t x290 = -1;
	static volatile int16_t x291 = -15539;
	static int64_t x292 = -1LL;
	volatile int64_t t72 = -2255102654295LL;

	t72 = (x289^((x290&x291)|x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MIN;
	uint32_t x294 = UINT32_MAX;
	uint16_t x295 = 11114U;
	int32_t x296 = INT32_MIN;
	volatile int64_t t73 = 204042590280LL;

	t73 = (x293^((x294&x295)|x296));

	if (t73 != -9223372034707281046LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	volatile int16_t x299 = INT16_MIN;
	uint8_t x300 = UINT8_MAX;
	static volatile int32_t t74 = -160;

	t74 = (x297^((x298&x299)|x300));

	if (t74 != -2147483393) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = -1;
	int64_t x304 = -1LL;
	volatile int64_t t75 = 1853661810491LL;

	t75 = (x301^((x302&x303)|x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = INT8_MIN;
	uint16_t x306 = 178U;
	volatile int64_t x307 = INT64_MIN;
	int64_t x308 = 192627873LL;

	t76 = (x305^((x306&x307)|x308));

	if (t76 != -192627935LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	static volatile int16_t x310 = -1;
	int64_t x312 = INT64_MAX;
	static volatile int64_t t77 = -590205092634LL;

	t77 = (x309^((x310&x311)|x312));

	if (t77 != 127LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x315 = -1;
	volatile int64_t x316 = INT64_MIN;
	uint64_t t78 = 16621326241LLU;

	t78 = (x313^((x314&x315)|x316));

	if (t78 != 127LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	static int64_t x319 = INT64_MAX;
	int8_t x320 = INT8_MIN;
	volatile uint64_t t79 = 496782118201LLU;

	t79 = (x317^((x318&x319)|x320));

	if (t79 != 2147483647LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = 1;
	uint32_t x323 = 72441603U;
	int32_t x324 = INT32_MIN;
	uint32_t t80 = 163171U;

	t80 = (x321^((x322&x323)|x324));

	if (t80 != 2147483689U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x326 = INT16_MIN;
	uint32_t x327 = 13U;
	uint64_t x328 = 40156231353708614LLU;
	volatile uint64_t t81 = 6938LLU;

	t81 = (x325^((x326&x327)|x328));

	if (t81 != 40156231353708620LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x330 = INT64_MIN;
	int64_t x331 = 173784874304214759LL;
	static int8_t x332 = INT8_MAX;
	static int64_t t82 = 27LL;

	t82 = (x329^((x330&x331)|x332));

	if (t82 != 128LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -23;
	uint64_t x334 = 1394424931564967LLU;
	uint64_t x335 = UINT64_MAX;
	int16_t x336 = -28;
	uint64_t t83 = 534969LLU;

	t83 = (x333^((x334&x335)|x336));

	if (t83 != 14LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x338 = 11;
	static int8_t x339 = 12;
	int16_t x340 = INT16_MAX;

	t84 = (x337^((x338&x339)|x340));

	if (t84 != 32694U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -1;
	int16_t x343 = -1;
	uint8_t x344 = 1U;
	int32_t t85 = -186351424;

	t85 = (x341^((x342&x343)|x344));

	if (t85 != 32766) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 495051;
	static uint8_t x346 = UINT8_MAX;
	static uint32_t x348 = 1239919U;
	int64_t t86 = 1726769216015568LL;

	t86 = (x345^((x346&x347)|x348));

	if (t86 != 1402420LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 3U;
	int8_t x350 = 0;
	uint8_t x352 = 5U;
	volatile int32_t t87 = -130375;

	t87 = (x349^((x350&x351)|x352));

	if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	int16_t x354 = INT16_MIN;
	int8_t x355 = -1;
	int32_t t88 = 663;

	t88 = (x353^((x354&x355)|x356));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	int32_t x358 = 58724;
	int64_t x359 = -1LL;
	int8_t x360 = 1;
	int64_t t89 = 16LL;

	t89 = (x357^((x358&x359)|x360));

	if (t89 != -58726LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	int64_t x362 = INT64_MIN;
	uint64_t x364 = 2743002LLU;

	t90 = (x361^((x362&x363)|x364));

	if (t90 != 9223372036857518757LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	static int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MIN;
	int64_t x368 = -1LL;
	static int64_t t91 = -3110420789LL;

	t91 = (x365^((x366&x367)|x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	static int64_t x370 = INT64_MAX;
	int16_t x372 = INT16_MAX;
	int64_t t92 = 58302LL;

	t92 = (x369^((x370&x371)|x372));

	if (t92 != -9223372034707324801LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = -22;
	static int8_t x375 = INT8_MIN;
	uint16_t x376 = 1U;
	uint32_t t93 = 466371583U;

	t93 = (x373^((x374&x375)|x376));

	if (t93 != 126U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MIN;
	volatile int64_t x379 = INT64_MAX;
	int16_t x380 = INT16_MIN;
	static volatile int64_t t94 = 272LL;

	t94 = (x377^((x378&x379)|x380));

	if (t94 != 32640LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 18946058372643869LLU;
	static int16_t x384 = INT16_MIN;

	t95 = (x381^((x382&x383)|x384));

	if (t95 != 18946054373145648LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int32_t x386 = -1;
	int8_t x387 = -1;
	int32_t x388 = INT32_MAX;
	static volatile int64_t t96 = INT64_MIN;

	t96 = (x385^((x386&x387)|x388));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	uint32_t x390 = 632706132U;
	int16_t x391 = INT16_MIN;
	int8_t x392 = -1;
	static volatile uint32_t t97 = 32220157U;

	t97 = (x389^((x390&x391)|x392));

	if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = UINT64_MAX;
	static int32_t x395 = -2235;
	int32_t x396 = INT32_MAX;
	uint64_t t98 = 126879LLU;

	t98 = (x393^((x394&x395)|x396));

	if (t98 != 2147483647LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x398 = -1;
	volatile int8_t x399 = INT8_MAX;
	uint32_t x400 = UINT32_MAX;
	static uint32_t t99 = 399229134U;

	t99 = (x397^((x398&x399)|x400));

	if (t99 != 0U) { NG(); } else { ; }
	
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

