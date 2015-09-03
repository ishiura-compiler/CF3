#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x19 = 1;
int32_t t2 = 1;
uint64_t x24 = 65065990984LLU;
static volatile uint8_t x27 = UINT8_MAX;
static int32_t x30 = -1;
static volatile uint64_t x33 = UINT64_MAX;
uint64_t x34 = UINT64_MAX;
int64_t x35 = INT64_MAX;
volatile uint64_t t6 = 170512133281LLU;
int8_t x37 = INT8_MAX;
int32_t x43 = INT32_MIN;
int16_t x61 = 1410;
static volatile uint64_t x65 = 28LLU;
int32_t x67 = INT32_MIN;
volatile uint64_t t14 = 0LLU;
uint64_t x74 = 21321653291LLU;
static int64_t x80 = 40771769253LL;
uint32_t x84 = 432588U;
static int64_t x87 = -1LL;
static int64_t x92 = INT64_MAX;
uint32_t x93 = 720369U;
int8_t x94 = -1;
int32_t x100 = INT32_MAX;
int64_t x103 = -908015LL;
static uint8_t x107 = UINT8_MAX;
volatile uint64_t t24 = 4135922238900LLU;
int16_t x111 = INT16_MIN;
int64_t x119 = -1LL;
int64_t t27 = -64LL;
int64_t t28 = -2405421012LL;
volatile int32_t t30 = -113617;
int64_t t32 = 4123LL;
static int16_t x150 = -1;
uint16_t x152 = 2U;
int16_t x154 = INT16_MIN;
volatile int8_t x157 = -55;
uint8_t x159 = UINT8_MAX;
static volatile uint64_t t35 = 40LLU;
int32_t x162 = INT32_MIN;
int32_t x163 = INT32_MAX;
uint16_t x164 = UINT16_MAX;
int64_t x165 = -156731963939087612LL;
int32_t x170 = INT32_MAX;
uint16_t x173 = UINT16_MAX;
uint16_t x184 = 1976U;
int64_t t43 = 40242820LL;
static volatile int64_t t47 = -29398298083181LL;
uint32_t x222 = UINT32_MAX;
int64_t x238 = 14950200887945LL;
static volatile int16_t x241 = INT16_MIN;
int16_t x243 = 62;
volatile int32_t t52 = -3927358;
volatile uint64_t t53 = 7104LLU;
int32_t x251 = -1;
volatile uint64_t t54 = 445434711334LLU;
uint64_t t56 = 8980499354LLU;
int64_t x277 = INT64_MIN;
static uint32_t x282 = 26U;
uint32_t t59 = 165596U;
static uint16_t x292 = 0U;
uint16_t x294 = UINT16_MAX;
volatile int32_t t63 = -5512237;
static volatile int64_t x305 = INT64_MIN;
uint8_t x322 = 2U;
int16_t x326 = 1;
static uint32_t x328 = 2951U;
volatile int64_t t70 = 20LL;
int16_t x333 = INT16_MIN;
int16_t x339 = INT16_MAX;
int16_t x350 = INT16_MIN;
static int16_t x356 = INT16_MIN;
volatile uint8_t x360 = UINT8_MAX;
static volatile int32_t t77 = 9895880;
volatile int32_t t78 = 1;
static uint32_t x372 = 802728U;
static int16_t x374 = 3749;
static uint32_t t81 = 64954116U;
volatile int8_t x377 = -1;
volatile int32_t x391 = INT32_MIN;
static volatile int8_t x396 = INT8_MIN;
volatile int64_t x407 = 4240604686825298LL;
uint8_t x412 = UINT8_MAX;
volatile int32_t x426 = 707609;
int64_t x432 = INT64_MIN;
uint8_t x436 = 2U;
int16_t x442 = 21;
volatile int8_t x443 = INT8_MAX;
uint8_t x445 = 80U;
int8_t x448 = INT8_MIN;
int64_t t96 = -4129087LL;
int8_t x449 = INT8_MAX;
static volatile int64_t t97 = 172047724198574LL;
static uint64_t t98 = 1783LLU;


void f0(void) {
	uint32_t x5 = 24417U;
	int8_t x6 = INT8_MIN;
	int64_t x7 = INT64_MAX;
	uint16_t x8 = 1336U;
	int64_t t0 = 3266643986787007LL;

	t0 = (x5+((x6%x7)|x8));

	if (t0 != 24345LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1849;
	volatile int8_t x10 = INT8_MAX;
	int16_t x11 = INT16_MAX;
	uint64_t x12 = 15537313LLU;
	volatile uint64_t t1 = 175554945312474LLU;

	t1 = (x9+((x10%x11)|x12));

	if (t1 != 15535558LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = UINT8_MAX;
	volatile int8_t x18 = 10;
	int16_t x20 = INT16_MAX;

	t2 = (x17+((x18%x19)|x20));

	if (t2 != 33022) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = UINT8_MAX;
	int64_t x22 = INT64_MIN;
	volatile uint16_t x23 = UINT16_MAX;
	uint64_t t3 = 13751LLU;

	t3 = (x21+((x22%x23)|x24));

	if (t3 != 18446744073709534279LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	uint16_t x26 = 7U;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t4 = 65879960397879410LLU;

	t4 = (x25+((x26%x27)|x28));

	if (t4 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 29752216415885536LLU;
	static int64_t x31 = INT64_MIN;
	int64_t x32 = INT64_MIN;
	static volatile uint64_t t5 = 320901LLU;

	t5 = (x29+((x30%x31)|x32));

	if (t5 != 29752216415885535LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x36 = UINT8_MAX;

	t6 = (x33+((x34%x35)|x36));

	if (t6 != 254LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x38 = 7928U;
	volatile int64_t x39 = INT64_MIN;
	static int64_t x40 = INT64_MIN;
	volatile int64_t t7 = -294984846766491LL;

	t7 = (x37+((x38%x39)|x40));

	if (t7 != -9223372036854767753LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 23U;
	static int16_t x42 = 6;
	uint64_t x44 = 8LLU;
	uint64_t t8 = 206984965LLU;

	t8 = (x41+((x42%x43)|x44));

	if (t8 != 37LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 4961U;
	volatile int16_t x46 = -27;
	int16_t x47 = INT16_MIN;
	uint16_t x48 = 651U;
	static int32_t t9 = 5;

	t9 = (x45+((x46%x47)|x48));

	if (t9 != 4944) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = INT16_MIN;
	static int64_t x50 = INT64_MAX;
	uint16_t x51 = UINT16_MAX;
	static int8_t x52 = -1;
	volatile int64_t t10 = -2809850379941089677LL;

	t10 = (x49+((x50%x51)|x52));

	if (t10 != -32769LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = 22015;
	volatile uint32_t x54 = 7922716U;
	int64_t x55 = -38311229LL;
	int32_t x56 = -1;
	int64_t t11 = 91834LL;

	t11 = (x53+((x54%x55)|x56));

	if (t11 != 22014LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x57 = INT8_MIN;
	uint16_t x58 = 7387U;
	int64_t x59 = INT64_MIN;
	static volatile uint64_t x60 = UINT64_MAX;
	uint64_t t12 = 13109510387042LLU;

	t12 = (x57+((x58%x59)|x60));

	if (t12 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = INT8_MAX;
	int32_t x63 = INT32_MIN;
	int64_t x64 = INT64_MIN;
	static int64_t t13 = -35498142015369LL;

	t13 = (x61+((x62%x63)|x64));

	if (t13 != -9223372036854774271LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x66 = INT32_MAX;
	int16_t x68 = -1;

	t14 = (x65+((x66%x67)|x68));

	if (t14 != 27LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MIN;
	uint16_t x70 = 5412U;
	int64_t x71 = 721486938999804LL;
	int8_t x72 = INT8_MIN;
	int64_t t15 = 1557062LL;

	t15 = (x69+((x70%x71)|x72));

	if (t15 != -32860LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -1;
	volatile uint16_t x75 = UINT16_MAX;
	volatile int16_t x76 = -67;
	volatile uint64_t t16 = 62005118225LLU;

	t16 = (x73+((x74%x75)|x76));

	if (t16 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	uint16_t x78 = 3U;
	int32_t x79 = -1;
	volatile int64_t t17 = -573877366191122LL;

	t17 = (x77+((x78%x79)|x80));

	if (t17 != 40771769252LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x81 = 879799LLU;
	static volatile uint8_t x82 = 1U;
	static int16_t x83 = INT16_MIN;
	static volatile uint64_t t18 = 4246214887123614179LLU;

	t18 = (x81+((x82%x83)|x84));

	if (t18 != 1312388LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = INT16_MAX;
	volatile uint32_t x86 = 106450U;
	uint16_t x88 = 56U;
	int64_t t19 = 671519LL;

	t19 = (x85+((x86%x87)|x88));

	if (t19 != 32823LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x89 = 84U;
	int8_t x90 = -1;
	int16_t x91 = INT16_MIN;
	volatile int64_t t20 = 10129995843724288LL;

	t20 = (x89+((x90%x91)|x92));

	if (t20 != 83LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x95 = INT16_MAX;
	uint8_t x96 = 1U;
	volatile uint32_t t21 = 3U;

	t21 = (x93+((x94%x95)|x96));

	if (t21 != 720368U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -1LL;
	static uint64_t x98 = UINT64_MAX;
	int16_t x99 = 3795;
	uint64_t t22 = 7696096707198690LLU;

	t22 = (x97+((x98%x99)|x100));

	if (t22 != 2147483646LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x101 = -1;
	int8_t x102 = -6;
	int8_t x104 = INT8_MAX;
	static int64_t t23 = -478061LL;

	t23 = (x101+((x102%x103)|x104));

	if (t23 != -2LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x105 = 4LLU;
	static int8_t x106 = -1;
	int16_t x108 = -463;

	t24 = (x105+((x106%x107)|x108));

	if (t24 != 3LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 20130U;
	uint32_t x110 = 74387512U;
	int64_t x112 = INT64_MIN;
	volatile int64_t t25 = -30468979010405LL;

	t25 = (x109+((x110%x111)|x112));

	if (t25 != -9223372036780368166LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x113 = UINT32_MAX;
	volatile int32_t x114 = INT32_MIN;
	volatile uint8_t x115 = UINT8_MAX;
	int16_t x116 = -1506;
	volatile uint32_t t26 = 7U;

	t26 = (x113+((x114%x115)|x116));

	if (t26 != 4294967197U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x117 = INT16_MIN;
	volatile int64_t x118 = 1932124150LL;
	int8_t x120 = -3;

	t27 = (x117+((x118%x119)|x120));

	if (t27 != -32771LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x129 = UINT32_MAX;
	volatile uint16_t x130 = 0U;
	int64_t x131 = INT64_MIN;
	static int64_t x132 = 1748871930714LL;

	t28 = (x129+((x130%x131)|x132));

	if (t28 != 1753166898009LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = 120815LLU;
	volatile int8_t x134 = INT8_MAX;
	int32_t x135 = -1;
	uint8_t x136 = 23U;
	uint64_t t29 = 569468LLU;

	t29 = (x133+((x134%x135)|x136));

	if (t29 != 120838LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x137 = 321U;
	uint8_t x138 = 0U;
	int8_t x139 = -1;
	static uint16_t x140 = 356U;

	t30 = (x137+((x138%x139)|x140));

	if (t30 != 677) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = INT16_MIN;
	uint16_t x142 = 97U;
	int8_t x143 = -1;
	uint8_t x144 = 22U;
	int32_t t31 = 13196314;

	t31 = (x141+((x142%x143)|x144));

	if (t31 != -32746) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = UINT32_MAX;
	uint8_t x146 = 86U;
	int64_t x147 = -1LL;
	uint32_t x148 = 231U;

	t32 = (x145+((x146%x147)|x148));

	if (t32 != 4294967526LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x149 = -174487578;
	uint16_t x151 = 155U;
	int32_t t33 = -6497257;

	t33 = (x149+((x150%x151)|x152));

	if (t33 != -174487579) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = -1LL;
	int8_t x155 = -1;
	int8_t x156 = 0;
	volatile int64_t t34 = 11365721442104731LL;

	t34 = (x153+((x154%x155)|x156));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x158 = 2544LLU;
	int8_t x160 = INT8_MIN;

	t35 = (x157+((x158%x159)|x160));

	if (t35 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x161 = INT64_MAX;
	int64_t t36 = -2172LL;

	t36 = (x161+((x162%x163)|x164));

	if (t36 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x166 = -1;
	static volatile uint8_t x167 = UINT8_MAX;
	uint64_t x168 = 0LLU;
	volatile uint64_t t37 = 48LLU;

	t37 = (x165+((x166%x167)|x168));

	if (t37 != 18290012109770464003LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x169 = 1014250;
	int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MIN;
	static int32_t t38 = -23955;

	t38 = (x169+((x170%x171)|x172));

	if (t38 != 1014249) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x174 = INT32_MIN;
	int8_t x175 = -7;
	int64_t x176 = INT64_MAX;
	volatile int64_t t39 = 133121515305570LL;

	t39 = (x173+((x174%x175)|x176));

	if (t39 != 65534LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x181 = INT16_MIN;
	uint16_t x182 = 6843U;
	static uint64_t x183 = 88209229296041443LLU;
	volatile uint64_t t40 = 1001130LLU;

	t40 = (x181+((x182%x183)|x184));

	if (t40 != 18446744073709526971LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = 15U;
	volatile uint64_t x186 = 21089481203873004LLU;
	int16_t x187 = 6086;
	int64_t x188 = -352824719LL;
	static volatile uint64_t t41 = 263380774640LLU;

	t41 = (x185+((x186%x187)|x188));

	if (t41 != 18446744073356728068LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x189 = 201;
	uint32_t x190 = UINT32_MAX;
	static volatile uint8_t x191 = UINT8_MAX;
	uint16_t x192 = 3955U;
	volatile uint32_t t42 = 5484U;

	t42 = (x189+((x190%x191)|x192));

	if (t42 != 4156U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = -1LL;
	int32_t x194 = -15427;
	static int16_t x195 = INT16_MAX;
	volatile int8_t x196 = -1;

	t43 = (x193+((x194%x195)|x196));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x201 = 5U;
	volatile int32_t x202 = -12;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	int64_t t44 = 453307203LL;

	t44 = (x201+((x202%x203)|x204));

	if (t44 != -7LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x205 = UINT32_MAX;
	int8_t x206 = INT8_MAX;
	int8_t x207 = INT8_MIN;
	int8_t x208 = 14;
	uint32_t t45 = 161U;

	t45 = (x205+((x206%x207)|x208));

	if (t45 != 126U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MIN;
	uint64_t x210 = 346530LLU;
	static uint8_t x211 = UINT8_MAX;
	uint64_t x212 = 123242LLU;
	volatile uint64_t t46 = 2057869115933529326LLU;

	t46 = (x209+((x210%x211)|x212));

	if (t46 != 18446744071562191354LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = 309205725467316709LL;
	volatile int32_t x218 = 19078;
	int64_t x219 = -1LL;
	static int16_t x220 = -1;

	t47 = (x217+((x218%x219)|x220));

	if (t47 != 309205725467316708LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MAX;
	uint8_t x223 = 12U;
	int16_t x224 = INT16_MIN;
	uint32_t t48 = 173873610U;

	t48 = (x221+((x222%x223)|x224));

	if (t48 != 4294934658U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x229 = 3676LLU;
	int8_t x230 = INT8_MIN;
	int16_t x231 = -1;
	static volatile int64_t x232 = INT64_MIN;
	uint64_t t49 = 59240008067LLU;

	t49 = (x229+((x230%x231)|x232));

	if (t49 != 9223372036854779484LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x233 = UINT32_MAX;
	uint64_t x234 = 8573976LLU;
	uint32_t x235 = 24443904U;
	static int64_t x236 = INT64_MAX;
	volatile uint64_t t50 = 1708718213968LLU;

	t50 = (x233+((x234%x235)|x236));

	if (t50 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = 18294717896903LLU;
	int32_t x239 = INT32_MAX;
	static uint16_t x240 = 14681U;
	static volatile uint64_t t51 = 5532963924LLU;

	t51 = (x237+((x238%x239)|x240));

	if (t51 != 18296285124290LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x242 = INT32_MIN;
	static int16_t x244 = -1;

	t52 = (x241+((x242%x243)|x244));

	if (t52 != -32769) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x245 = UINT64_MAX;
	uint16_t x246 = UINT16_MAX;
	volatile uint64_t x247 = 6932471797109LLU;
	int32_t x248 = 13;

	t53 = (x245+((x246%x247)|x248));

	if (t53 != 65534LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x249 = INT32_MAX;
	uint64_t x250 = UINT64_MAX;
	int16_t x252 = 3;

	t54 = (x249+((x250%x251)|x252));

	if (t54 != 2147483650LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MIN;
	uint16_t x264 = 3U;
	volatile int32_t t55 = -1;

	t55 = (x261+((x262%x263)|x264));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = -1;
	volatile int8_t x266 = 1;
	uint64_t x267 = 29624047320758540LLU;
	int16_t x268 = 7277;

	t56 = (x265+((x266%x267)|x268));

	if (t56 != 7276LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x269 = -1;
	int16_t x270 = -1;
	volatile uint16_t x271 = 4U;
	int64_t x272 = 1628299093033LL;
	int64_t t57 = 2470LL;

	t57 = (x269+((x270%x271)|x272));

	if (t57 != -2LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x278 = -1;
	int64_t x279 = 979LL;
	static uint64_t x280 = 101190LLU;
	volatile uint64_t t58 = 4802578438149LLU;

	t58 = (x277+((x278%x279)|x280));

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = INT8_MIN;
	uint32_t x283 = 8628U;
	int8_t x284 = -20;

	t59 = (x281+((x282%x283)|x284));

	if (t59 != 4294967166U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x285 = UINT32_MAX;
	int64_t x286 = -1854LL;
	volatile uint32_t x287 = 3U;
	uint32_t x288 = UINT32_MAX;
	volatile int64_t t60 = -157200358LL;

	t60 = (x285+((x286%x287)|x288));

	if (t60 != 8589934590LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x289 = INT8_MIN;
	static int16_t x290 = INT16_MAX;
	int16_t x291 = 20;
	int32_t t61 = -840984;

	t61 = (x289+((x290%x291)|x292));

	if (t61 != -121) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = INT8_MIN;
	static uint64_t x295 = 1529198150051LLU;
	static int64_t x296 = INT64_MIN;
	static volatile uint64_t t62 = 1707407248LLU;

	t62 = (x293+((x294%x295)|x296));

	if (t62 != 9223372036854841215LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x297 = INT16_MIN;
	int32_t x298 = -1;
	volatile int16_t x299 = 22;
	volatile int32_t x300 = INT32_MIN;

	t63 = (x297+((x298%x299)|x300));

	if (t63 != -32769) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x301 = 72U;
	volatile int8_t x302 = 0;
	uint64_t x303 = 15971202410LLU;
	static uint64_t x304 = 819706736881547LLU;
	uint64_t t64 = 1117480593918LLU;

	t64 = (x301+((x302%x303)|x304));

	if (t64 != 819706736881619LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x306 = 3452U;
	int64_t x307 = INT64_MAX;
	volatile int8_t x308 = INT8_MAX;
	static volatile int64_t t65 = 43767208899409026LL;

	t65 = (x305+((x306%x307)|x308));

	if (t65 != -9223372036854772353LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = INT8_MAX;
	volatile int8_t x310 = -1;
	static uint64_t x311 = 1965407202308324819LLU;
	int64_t x312 = INT64_MAX;
	volatile uint64_t t66 = 35681392LLU;

	t66 = (x309+((x310%x311)|x312));

	if (t66 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x313 = 6438438571681LLU;
	int64_t x314 = -1LL;
	int32_t x315 = -1;
	volatile int8_t x316 = INT8_MIN;
	uint64_t t67 = 5883908LLU;

	t67 = (x313+((x314%x315)|x316));

	if (t67 != 6438438571553LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x317 = UINT16_MAX;
	int64_t x318 = 9LL;
	uint8_t x319 = 120U;
	int32_t x320 = -55744388;
	volatile int64_t t68 = -139967LL;

	t68 = (x317+((x318%x319)|x320));

	if (t68 != -55678852LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x321 = -3;
	uint64_t x323 = 69168201LLU;
	uint8_t x324 = UINT8_MAX;
	uint64_t t69 = 57786658081LLU;

	t69 = (x321+((x322%x323)|x324));

	if (t69 != 252LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x325 = 0U;
	static int64_t x327 = INT64_MAX;

	t70 = (x325+((x326%x327)|x328));

	if (t70 != 2951LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x329 = 1U;
	uint64_t x330 = UINT64_MAX;
	uint64_t x331 = 3848443541418680817LLU;
	int16_t x332 = -1;
	volatile uint64_t t71 = 5861687132LLU;

	t71 = (x329+((x330%x331)|x332));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x334 = 6U;
	volatile int64_t x335 = -298803608150LL;
	volatile int64_t x336 = -8909214669257412LL;
	int64_t t72 = -589429252963LL;

	t72 = (x333+((x334%x335)|x336));

	if (t72 != -8909214669290178LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x337 = INT64_MAX;
	int8_t x338 = -28;
	int64_t x340 = INT64_MIN;
	volatile int64_t t73 = 29093737LL;

	t73 = (x337+((x338%x339)|x340));

	if (t73 != 9223372036854775779LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = 10667;
	int8_t x342 = 6;
	uint64_t x343 = 521400742304786011LLU;
	int64_t x344 = -369LL;
	uint64_t t74 = 2316LLU;

	t74 = (x341+((x342%x343)|x344));

	if (t74 != 10298LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = -1;
	static uint32_t x351 = 326U;
	int64_t x352 = -1LL;
	volatile int64_t t75 = -24714075796LL;

	t75 = (x349+((x350%x351)|x352));

	if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x353 = INT32_MIN;
	volatile uint32_t x354 = 14U;
	int8_t x355 = -1;
	uint32_t t76 = 945U;

	t76 = (x353+((x354%x355)|x356));

	if (t76 != 2147450894U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = -27;
	int16_t x358 = INT16_MIN;
	int16_t x359 = -1;

	t77 = (x357+((x358%x359)|x360));

	if (t77 != 228) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MIN;
	uint8_t x362 = 68U;
	int32_t x363 = INT32_MIN;
	static uint16_t x364 = 7U;

	t78 = (x361+((x362%x363)|x364));

	if (t78 != -2147483577) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x365 = INT64_MAX;
	int64_t x366 = -1LL;
	int64_t x367 = INT64_MIN;
	volatile int16_t x368 = 672;
	static int64_t t79 = -14328LL;

	t79 = (x365+((x366%x367)|x368));

	if (t79 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = -1;
	volatile uint64_t x370 = 10937052985129053LLU;
	int8_t x371 = -53;
	volatile uint64_t t80 = 928LLU;

	t80 = (x369+((x370%x371)|x372));

	if (t80 != 10937052985917436LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x373 = 5492U;
	static uint16_t x375 = 924U;
	int8_t x376 = INT8_MIN;

	t81 = (x373+((x374%x375)|x376));

	if (t81 != 5417U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x378 = 2U;
	int64_t x379 = -35264650LL;
	int64_t x380 = -16112744200LL;
	static int64_t t82 = 323304939LL;

	t82 = (x377+((x378%x379)|x380));

	if (t82 != -16112744199LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x381 = INT16_MIN;
	volatile int8_t x382 = INT8_MIN;
	uint8_t x383 = 3U;
	int64_t x384 = INT64_MIN;
	volatile int64_t t83 = 8174046LL;

	t83 = (x381+((x382%x383)|x384));

	if (t83 != -32770LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x385 = INT64_MIN;
	int32_t x386 = -15602953;
	volatile uint64_t x387 = UINT64_MAX;
	static volatile int64_t x388 = INT64_MIN;
	static volatile uint64_t t84 = 0LLU;

	t84 = (x385+((x386%x387)|x388));

	if (t84 != 9223372036839172855LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = 27;
	int32_t x390 = INT32_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t85 = 1909918063LLU;

	t85 = (x389+((x390%x391)|x392));

	if (t85 != 26LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x393 = 438362958836370883LL;
	int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	static volatile int64_t t86 = -3LL;

	t86 = (x393+((x394%x395)|x396));

	if (t86 != 438362958836370882LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = 2;
	uint16_t x398 = 6U;
	int8_t x399 = INT8_MAX;
	int16_t x400 = INT16_MAX;
	volatile int32_t t87 = 8104177;

	t87 = (x397+((x398%x399)|x400));

	if (t87 != 32769) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = INT32_MIN;
	uint16_t x406 = 0U;
	static int64_t x408 = INT64_MAX;
	volatile int64_t t88 = -59LL;

	t88 = (x405+((x406%x407)|x408));

	if (t88 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = -88;
	int8_t x410 = 24;
	int64_t x411 = INT64_MIN;
	int64_t t89 = -20019465LL;

	t89 = (x409+((x410%x411)|x412));

	if (t89 != 167LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x413 = 7426U;
	uint64_t x414 = 31LLU;
	int32_t x415 = -23350;
	int16_t x416 = INT16_MIN;
	volatile uint64_t t90 = 30727669815551715LLU;

	t90 = (x413+((x414%x415)|x416));

	if (t90 != 18446744073709526305LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = INT8_MIN;
	volatile int16_t x418 = -1;
	uint32_t x419 = UINT32_MAX;
	int16_t x420 = 1163;
	uint32_t t91 = 514269412U;

	t91 = (x417+((x418%x419)|x420));

	if (t91 != 1035U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x425 = INT16_MIN;
	int32_t x427 = -1;
	static uint32_t x428 = 2857982U;
	volatile uint32_t t92 = 2046652583U;

	t92 = (x425+((x426%x427)|x428));

	if (t92 != 2825214U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = INT16_MIN;
	uint8_t x430 = UINT8_MAX;
	uint64_t x431 = 18860LLU;
	static uint64_t t93 = 48LLU;

	t93 = (x429+((x430%x431)|x432));

	if (t93 != 9223372036854743295LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x433 = INT64_MIN;
	int16_t x434 = 690;
	int32_t x435 = INT32_MAX;
	volatile int64_t t94 = -2058LL;

	t94 = (x433+((x434%x435)|x436));

	if (t94 != -9223372036854775118LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x441 = 208U;
	int32_t x444 = INT32_MIN;
	uint32_t t95 = 15U;

	t95 = (x441+((x442%x443)|x444));

	if (t95 != 2147483877U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x446 = -5;
	int64_t x447 = INT64_MAX;

	t96 = (x445+((x446%x447)|x448));

	if (t96 != 75LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x450 = 9;
	int16_t x451 = INT16_MIN;
	static int64_t x452 = -996LL;

	t97 = (x449+((x450%x451)|x452));

	if (t97 != -868LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x453 = -1LL;
	uint64_t x454 = 1392087045815476729LLU;
	uint16_t x455 = 16U;
	int64_t x456 = INT64_MAX;

	t98 = (x453+((x454%x455)|x456));

	if (t98 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x457 = 2U;
	static int16_t x458 = INT16_MIN;
	volatile uint32_t x459 = UINT32_MAX;
	int64_t x460 = INT64_MIN;
	int64_t t99 = 4294064617LL;

	t99 = (x457+((x458%x459)|x460));

	if (t99 != -9223372032559841278LL) { NG(); } else { ; }
	
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

