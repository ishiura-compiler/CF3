#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 3U;
static uint64_t x3 = UINT64_MAX;
volatile int32_t t2 = -50504499;
uint32_t x13 = 8191U;
uint32_t x18 = UINT32_MAX;
volatile uint32_t t4 = 5845425U;
int32_t t7 = 1977146;
static uint32_t x35 = 50073U;
volatile uint32_t t8 = 31606484U;
int32_t t9 = -711718546;
int32_t x41 = 227970182;
uint64_t x42 = 2958825149LLU;
int64_t x45 = -3150963669770LL;
static uint64_t x48 = 55879914928LLU;
uint64_t x52 = 126LLU;
volatile uint64_t x55 = 16041582831628LLU;
int32_t t14 = 193209;
int64_t x63 = INT64_MIN;
int64_t t15 = 1256LL;
int32_t x70 = INT32_MAX;
static uint16_t x73 = UINT16_MAX;
volatile int16_t x75 = INT16_MAX;
int32_t x81 = INT32_MAX;
static int8_t x85 = 45;
uint8_t x88 = 7U;
int32_t x97 = INT32_MIN;
int16_t x100 = -19;
static volatile int64_t t26 = -15517010974366LL;
static uint64_t x116 = 22969883592801812LLU;
int64_t x119 = INT64_MAX;
static int32_t x128 = -1;
int32_t x134 = 1525;
volatile int64_t t33 = -1LL;
static int32_t x139 = -1;
volatile uint32_t t34 = 109056U;
volatile int32_t x143 = -467148;
uint32_t x151 = 20325U;
uint16_t x153 = 1696U;
static int32_t x155 = INT32_MIN;
volatile uint8_t x158 = UINT8_MAX;
int16_t x159 = INT16_MIN;
volatile int32_t t39 = 2628;
static uint32_t x161 = 1703U;
volatile uint64_t t42 = 390412LLU;
int32_t t43 = 2;
uint32_t x178 = UINT32_MAX;
int16_t x179 = INT16_MIN;
int32_t x180 = -1;
int8_t x181 = -24;
uint16_t x182 = 61U;
int16_t x184 = -1;
static int8_t x186 = -1;
int16_t x187 = INT16_MIN;
int64_t x189 = 610363891005LL;
volatile int32_t x194 = INT32_MIN;
int64_t x195 = INT64_MAX;
int16_t x200 = -1;
volatile int32_t x204 = -63;
static int32_t x206 = INT32_MIN;
uint64_t t51 = 16613573LLU;
static volatile int8_t x216 = 24;
volatile int32_t t53 = 134710;
volatile uint32_t t54 = 3536U;
uint16_t x231 = 5U;
static volatile int8_t x239 = INT8_MIN;
static int32_t x245 = INT32_MIN;
int16_t x246 = INT16_MIN;
static int32_t x249 = INT32_MIN;
int8_t x251 = -1;
int32_t x252 = -1;
static uint8_t x257 = UINT8_MAX;
static int16_t x258 = -31;
volatile int8_t x259 = INT8_MIN;
int32_t x263 = INT32_MIN;
static volatile int32_t t65 = 98771;
int32_t t67 = -81663115;
int16_t x276 = -3;
int32_t t68 = -934762;
uint32_t x278 = UINT32_MAX;
static volatile uint32_t t70 = 1U;
volatile int64_t t71 = INT64_MAX;
uint8_t x289 = 21U;
static int32_t x292 = INT32_MIN;
static int64_t x296 = -216820996427LL;
volatile int64_t t73 = -168078668898LL;
int32_t x297 = INT32_MIN;
int64_t x299 = INT64_MIN;
volatile int64_t t74 = -133557567003670LL;
uint16_t x306 = 1U;
int8_t x307 = -46;
int32_t t77 = -24;
volatile int64_t x313 = -1LL;
static int32_t t78 = -29500134;
static volatile int8_t x319 = INT8_MAX;
static uint8_t x320 = 27U;
static int32_t x327 = INT32_MIN;
uint32_t x328 = 119395247U;
int8_t x331 = -1;
int32_t x332 = -1;
static uint32_t x338 = UINT32_MAX;
int32_t t85 = -7115811;
uint16_t x345 = 1U;
uint8_t x346 = 1U;
int16_t x355 = INT16_MIN;
volatile uint8_t x356 = UINT8_MAX;
int16_t x358 = INT16_MAX;
static uint64_t x360 = 304618LLU;
uint64_t t89 = 3059419033LLU;
volatile int32_t x362 = -222367258;
int64_t x367 = 4421538735087LL;
int64_t t91 = -853LL;
static int64_t t92 = 4295LL;
static volatile int64_t x377 = INT64_MIN;
uint64_t x380 = UINT64_MAX;
static volatile uint64_t t94 = 2187LLU;
int32_t x392 = 67290;
volatile int64_t x397 = -247372078504503233LL;


void f0(void) {
	uint16_t x2 = 2U;
	uint8_t x4 = UINT8_MAX;
	uint64_t t0 = 624135008LLU;

	t0 = ((x1==x2)^(x3^x4));

	if (t0 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = -1;
	int64_t x7 = INT64_MIN;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 4879924750LLU;

	t1 = ((x5==x6)^(x7^x8));

	if (t1 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 28U;
	int8_t x10 = INT8_MIN;
	int16_t x11 = -1;
	int32_t x12 = -12;

	t2 = ((x9==x10)^(x11^x12));

	if (t2 != 11) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = 207;
	int16_t x15 = INT16_MAX;
	int8_t x16 = 1;
	int32_t t3 = -80042027;

	t3 = ((x13==x14)^(x15^x16));

	if (t3 != 32766) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 11U;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = 135452797U;

	t4 = ((x17==x18)^(x19^x20));

	if (t4 != 4159514621U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	volatile int32_t x22 = 449655012;
	static volatile int8_t x23 = 0;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = 13987;

	t5 = ((x21==x22)^(x23^x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 1468433U;
	int32_t x26 = -3016;
	uint8_t x27 = UINT8_MAX;
	int16_t x28 = -1;
	int32_t t6 = 12137505;

	t6 = ((x25==x26)^(x27^x28));

	if (t6 != -256) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	int32_t x30 = INT32_MIN;
	volatile int8_t x31 = 8;
	volatile int32_t x32 = INT32_MIN;

	t7 = ((x29==x30)^(x31^x32));

	if (t7 != -2147483640) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint8_t x34 = 2U;
	uint16_t x36 = UINT16_MAX;

	t8 = ((x33==x34)^(x35^x36));

	if (t8 != 15462U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = 0;
	static int8_t x39 = INT8_MAX;
	int32_t x40 = INT32_MAX;

	t9 = ((x37==x38)^(x39^x40));

	if (t9 != 2147483520) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x43 = 118U;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = 7365LL;

	t10 = ((x41==x42)^(x43^x44));

	if (t10 != -9223372036854775690LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 2169U;
	int16_t x47 = 5;
	uint64_t t11 = 1171015924666275LLU;

	t11 = ((x45==x46)^(x47^x48));

	if (t11 != 55879914933LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 7030U;
	uint16_t x50 = 4U;
	static int16_t x51 = INT16_MIN;
	uint64_t t12 = 121086LLU;

	t12 = ((x49==x50)^(x51^x52));

	if (t12 != 18446744073709518974LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	uint16_t x54 = 7321U;
	int64_t x56 = INT64_MIN;
	uint64_t t13 = 19LLU;

	t13 = ((x53==x54)^(x55^x56));

	if (t13 != 9223388078437607436LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 5U;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	static int32_t x60 = -17314;

	t14 = ((x57==x58)^(x59^x60));

	if (t14 != 15454) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MAX;
	volatile int8_t x64 = INT8_MIN;

	t15 = ((x61==x62)^(x63^x64));

	if (t15 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	static volatile int64_t x66 = 96583666977100LL;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = -1;
	volatile uint64_t t16 = 18186880LLU;

	t16 = ((x65==x66)^(x67^x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 57678823461457590LLU;
	volatile int8_t x71 = 0;
	static uint16_t x72 = 611U;
	int32_t t17 = 64114;

	t17 = ((x69==x70)^(x71^x72));

	if (t17 != 611) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x74 = 0U;
	uint32_t x76 = UINT32_MAX;
	static volatile uint32_t t18 = 63139U;

	t18 = ((x73==x74)^(x75^x76));

	if (t18 != 4294934528U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x77 = INT64_MIN;
	int64_t x78 = INT64_MAX;
	volatile int16_t x79 = INT16_MIN;
	static int64_t x80 = -104092LL;
	int64_t t19 = -153LL;

	t19 = ((x77==x78)^(x79^x80));

	if (t19 != 125284LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MIN;
	volatile int32_t x83 = INT32_MIN;
	int16_t x84 = -2;
	static int32_t t20 = 23777;

	t20 = ((x81==x82)^(x83^x84));

	if (t20 != 2147483646) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x86 = INT8_MIN;
	int8_t x87 = 1;
	int32_t t21 = -200002;

	t21 = ((x85==x86)^(x87^x88));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1;
	uint64_t x90 = UINT64_MAX;
	static int64_t x91 = INT64_MIN;
	static int32_t x92 = INT32_MIN;
	int64_t t22 = -3423813996049280775LL;

	t22 = ((x89==x90)^(x91^x92));

	if (t22 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 3U;
	volatile int16_t x94 = INT16_MIN;
	uint8_t x95 = 105U;
	static uint16_t x96 = 357U;
	volatile int32_t t23 = 13782330;

	t23 = ((x93==x94)^(x95^x96));

	if (t23 != 268) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -1;
	int16_t x99 = 6175;
	volatile int32_t t24 = -76137155;

	t24 = ((x97==x98)^(x99^x100));

	if (t24 != -6158) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MIN;
	int8_t x103 = INT8_MAX;
	volatile int16_t x104 = 0;
	int32_t t25 = -256;

	t25 = ((x101==x102)^(x103^x104));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	static uint64_t x106 = UINT64_MAX;
	int32_t x107 = INT32_MAX;
	int64_t x108 = INT64_MIN;

	t26 = ((x105==x106)^(x107^x108));

	if (t26 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 166U;
	volatile int64_t x110 = INT64_MIN;
	static int16_t x111 = 1195;
	int32_t x112 = -4100506;
	static volatile int32_t t27 = 15227;

	t27 = ((x109==x110)^(x111^x112));

	if (t27 != -4101427) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	static uint32_t x114 = 773112950U;
	int64_t x115 = -1LL;
	uint64_t t28 = 49317690796970178LLU;

	t28 = ((x113==x114)^(x115^x116));

	if (t28 != 18423774190116749803LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	volatile int64_t x118 = -2791624LL;
	static int8_t x120 = INT8_MAX;
	int64_t t29 = 490007LL;

	t29 = ((x117==x118)^(x119^x120));

	if (t29 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	volatile uint64_t x122 = 326562354LLU;
	static int32_t x123 = 200866728;
	int32_t x124 = 69522738;
	volatile int32_t t30 = 2711774;

	t30 = ((x121==x122)^(x123^x124));

	if (t30 != 266088090) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x125 = INT16_MIN;
	volatile int64_t x126 = 157159056LL;
	static int16_t x127 = 53;
	volatile int32_t t31 = -17081;

	t31 = ((x125==x126)^(x127^x128));

	if (t31 != -54) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MIN;
	int64_t x130 = INT64_MIN;
	int16_t x131 = -1;
	static int64_t x132 = 10104212939721493LL;
	static int64_t t32 = 505467413007LL;

	t32 = ((x129==x130)^(x131^x132));

	if (t32 != -10104212939721494LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int64_t x135 = 104077LL;
	int16_t x136 = INT16_MIN;

	t33 = ((x133==x134)^(x135^x136));

	if (t33 != -125299LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 18LLU;
	volatile int32_t x138 = -513;
	uint32_t x140 = UINT32_MAX;

	t34 = ((x137==x138)^(x139^x140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -1;
	volatile int16_t x142 = -1;
	volatile int64_t x144 = 1LL;
	int64_t t35 = -955019763962764029LL;

	t35 = ((x141==x142)^(x143^x144));

	if (t35 != -467148LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MIN;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t36 = 1LLU;

	t36 = ((x145==x146)^(x147^x148));

	if (t36 != 127LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = 2U;
	volatile uint8_t x150 = UINT8_MAX;
	static uint64_t x152 = 40381153010LLU;
	volatile uint64_t t37 = 83205009LLU;

	t37 = ((x149==x150)^(x151^x152));

	if (t37 != 40381133207LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MIN;
	int64_t x156 = INT64_MIN;
	volatile int64_t t38 = 84LL;

	t38 = ((x153==x154)^(x155^x156));

	if (t38 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -33;
	static int32_t x160 = INT32_MIN;

	t39 = ((x157==x158)^(x159^x160));

	if (t39 != 2147450880) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x162 = INT16_MIN;
	int64_t x163 = INT64_MAX;
	uint32_t x164 = 232260668U;
	volatile int64_t t40 = 4074498188LL;

	t40 = ((x161==x162)^(x163^x164));

	if (t40 != 9223372036622515139LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 2692;
	uint32_t x166 = UINT32_MAX;
	uint64_t x167 = 23243017630260398LLU;
	int64_t x168 = INT64_MIN;
	volatile uint64_t t41 = 4936292517LLU;

	t41 = ((x165==x166)^(x167^x168));

	if (t41 != 9246615054485036206LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x169 = INT8_MIN;
	volatile uint8_t x170 = UINT8_MAX;
	static uint16_t x171 = 3823U;
	uint64_t x172 = 29944245LLU;

	t42 = ((x169==x170)^(x171^x172));

	if (t42 != 29943642LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 26401819359LLU;
	int8_t x174 = INT8_MIN;
	volatile int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;

	t43 = ((x173==x174)^(x175^x176));

	if (t43 != 2147450880) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 1U;
	int32_t t44 = 101;

	t44 = ((x177==x178)^(x179^x180));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x183 = UINT32_MAX;
	static uint32_t t45 = 30782632U;

	t45 = ((x181==x182)^(x183^x184));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t46 = 9631;

	t46 = ((x185==x186)^(x187^x188));

	if (t46 != -32514) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x190 = INT8_MIN;
	int64_t x191 = INT64_MIN;
	int8_t x192 = INT8_MAX;
	int64_t t47 = 151926LL;

	t47 = ((x189==x190)^(x191^x192));

	if (t47 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = 11LL;
	int32_t x196 = -1;
	static volatile int64_t t48 = INT64_MIN;

	t48 = ((x193==x194)^(x195^x196));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = 3515LLU;
	uint64_t x198 = UINT64_MAX;
	int16_t x199 = INT16_MIN;
	static volatile int32_t t49 = 11772650;

	t49 = ((x197==x198)^(x199^x200));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 1U;
	int16_t x202 = -121;
	static uint16_t x203 = 0U;
	volatile int32_t t50 = -4;

	t50 = ((x201==x202)^(x203^x204));

	if (t50 != -63) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -1;
	volatile uint64_t x207 = UINT64_MAX;
	int16_t x208 = INT16_MIN;

	t51 = ((x205==x206)^(x207^x208));

	if (t51 != 32767LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 57;
	volatile int8_t x210 = INT8_MIN;
	int8_t x211 = -1;
	uint16_t x212 = 65U;
	volatile int32_t t52 = 19879141;

	t52 = ((x209==x210)^(x211^x212));

	if (t52 != -66) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	static uint64_t x214 = 0LLU;
	static int8_t x215 = 0;

	t53 = ((x213==x214)^(x215^x216));

	if (t53 != 24) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint16_t x218 = 1U;
	uint32_t x219 = 938242U;
	static int8_t x220 = 0;

	t54 = ((x217==x218)^(x219^x220));

	if (t54 != 938242U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	static int32_t x222 = -1;
	uint64_t x223 = UINT64_MAX;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t55 = 54308LLU;

	t55 = ((x221==x222)^(x223^x224));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -836;
	volatile int16_t x226 = INT16_MAX;
	int64_t x227 = -1LL;
	int8_t x228 = INT8_MAX;
	volatile int64_t t56 = 324626LL;

	t56 = ((x225==x226)^(x227^x228));

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MAX;
	int8_t x230 = -1;
	int8_t x232 = INT8_MIN;
	int32_t t57 = 2;

	t57 = ((x229==x230)^(x231^x232));

	if (t57 != -123) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x233 = INT64_MIN;
	volatile uint32_t x234 = 36540U;
	uint32_t x235 = 34555U;
	uint32_t x236 = 8422U;
	volatile uint32_t t58 = 11889U;

	t58 = ((x233==x234)^(x235^x236));

	if (t58 != 42525U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	volatile uint32_t x238 = UINT32_MAX;
	static int64_t x240 = INT64_MIN;
	int64_t t59 = -1LL;

	t59 = ((x237==x238)^(x239^x240));

	if (t59 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	uint32_t x242 = 6U;
	int8_t x243 = INT8_MAX;
	int64_t x244 = -1LL;
	int64_t t60 = -628163LL;

	t60 = ((x241==x242)^(x243^x244));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x247 = 4U;
	int8_t x248 = INT8_MIN;
	static int32_t t61 = 77167;

	t61 = ((x245==x246)^(x247^x248));

	if (t61 != -124) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = -1;
	static int32_t t62 = 26868;

	t62 = ((x249==x250)^(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 3U;
	int16_t x254 = INT16_MAX;
	int32_t x255 = -1;
	int64_t x256 = 101LL;
	volatile int64_t t63 = 451593428LL;

	t63 = ((x253==x254)^(x255^x256));

	if (t63 != -102LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -124473239;

	t64 = ((x257==x258)^(x259^x260));

	if (t64 != 2147483520) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = 98;
	int32_t x262 = -1;
	int16_t x264 = INT16_MIN;

	t65 = ((x261==x262)^(x263^x264));

	if (t65 != 2147450880) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x265 = INT64_MAX;
	int8_t x266 = 1;
	static int64_t x267 = INT64_MIN;
	uint64_t x268 = 1844LLU;
	uint64_t t66 = 5859209289083851882LLU;

	t66 = ((x265==x266)^(x267^x268));

	if (t66 != 9223372036854777652LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	int64_t x270 = 0LL;
	static int16_t x271 = INT16_MIN;
	uint16_t x272 = UINT16_MAX;

	t67 = ((x269==x270)^(x271^x272));

	if (t67 != -32769) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	int32_t x274 = INT32_MIN;
	static int8_t x275 = -1;

	t68 = ((x273==x274)^(x275^x276));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	int8_t x279 = 1;
	uint8_t x280 = 0U;
	volatile int32_t t69 = 51656;

	t69 = ((x277==x278)^(x279^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x281 = 1U;
	uint16_t x282 = UINT16_MAX;
	int16_t x283 = INT16_MAX;
	uint32_t x284 = 220U;

	t70 = ((x281==x282)^(x283^x284));

	if (t70 != 32547U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -8618;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = -1;
	int64_t x288 = INT64_MIN;

	t71 = ((x285==x286)^(x287^x288));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x290 = 1LL;
	int32_t x291 = INT32_MIN;
	volatile int32_t t72 = 209238449;

	t72 = ((x289==x290)^(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -1;
	int32_t x294 = INT32_MIN;
	volatile int16_t x295 = INT16_MIN;

	t73 = ((x293==x294)^(x295^x296));

	if (t73 != 216820983477LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x298 = -12;
	int8_t x300 = INT8_MAX;

	t74 = ((x297==x298)^(x299^x300));

	if (t74 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	volatile uint8_t x302 = UINT8_MAX;
	int16_t x303 = INT16_MIN;
	int8_t x304 = -2;
	int32_t t75 = -9;

	t75 = ((x301==x302)^(x303^x304));

	if (t75 != 32766) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -3LL;
	int32_t x308 = INT32_MIN;
	int32_t t76 = 10879;

	t76 = ((x305==x306)^(x307^x308));

	if (t76 != 2147483602) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 105U;
	volatile uint64_t x310 = UINT64_MAX;
	int32_t x311 = -196;
	int16_t x312 = INT16_MIN;

	t77 = ((x309==x310)^(x311^x312));

	if (t77 != 32572) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x314 = 0U;
	int16_t x315 = -5450;
	static uint16_t x316 = 13344U;

	t78 = ((x313==x314)^(x315^x316));

	if (t78 != -8554) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -245;
	uint32_t x318 = UINT32_MAX;
	int32_t t79 = -234112;

	t79 = ((x317==x318)^(x319^x320));

	if (t79 != 100) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x322 = 181366U;
	static int8_t x323 = -1;
	int64_t x324 = INT64_MIN;
	volatile int64_t t80 = INT64_MAX;

	t80 = ((x321==x322)^(x323^x324));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = 347482416LLU;
	static uint64_t x326 = UINT64_MAX;
	uint32_t t81 = 1219581U;

	t81 = ((x325==x326)^(x327^x328));

	if (t81 != 2266878895U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x329 = 59353U;
	uint32_t x330 = UINT32_MAX;
	int32_t t82 = 56;

	t82 = ((x329==x330)^(x331^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MIN;
	uint8_t x335 = 3U;
	uint16_t x336 = 0U;
	static int32_t t83 = 396;

	t83 = ((x333==x334)^(x335^x336));

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MIN;
	uint64_t x339 = UINT64_MAX;
	volatile int16_t x340 = -13321;
	static uint64_t t84 = 218LLU;

	t84 = ((x337==x338)^(x339^x340));

	if (t84 != 13320LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	int16_t x342 = INT16_MIN;
	static int16_t x343 = 653;
	static int8_t x344 = -1;

	t85 = ((x341==x342)^(x343^x344));

	if (t85 != -654) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x347 = -44007097;
	int8_t x348 = INT8_MIN;
	int32_t t86 = 1496431;

	t86 = ((x345==x346)^(x347^x348));

	if (t86 != 44007110) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	static int16_t x350 = -294;
	volatile int8_t x351 = -1;
	static int64_t x352 = -3628726402122518LL;
	int64_t t87 = 28430297787987LL;

	t87 = ((x349==x350)^(x351^x352));

	if (t87 != 3628726402122517LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x353 = INT64_MIN;
	uint8_t x354 = 44U;
	volatile int32_t t88 = -364476306;

	t88 = ((x353==x354)^(x355^x356));

	if (t88 != -32513) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 1;
	uint8_t x359 = 76U;

	t89 = ((x357==x358)^(x359^x360));

	if (t89 != 304550LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x361 = 2052709715261652148LLU;
	int64_t x363 = -419083796163LL;
	int32_t x364 = INT32_MAX;
	int64_t t90 = -452149823LL;

	t90 = ((x361==x362)^(x363^x364));

	if (t90 != -420582310206LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	static int8_t x366 = -1;
	int32_t x368 = INT32_MIN;

	t91 = ((x365==x366)^(x367^x368));

	if (t91 != -4419651443730LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	uint16_t x370 = 320U;
	int32_t x371 = INT32_MIN;
	int64_t x372 = 949735274572LL;

	t92 = ((x369==x370)^(x371^x372));

	if (t92 != -950787753908LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	uint32_t x374 = 21427U;
	volatile int16_t x375 = INT16_MIN;
	static int16_t x376 = INT16_MAX;
	volatile int32_t t93 = 0;

	t93 = ((x373==x374)^(x375^x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x378 = UINT8_MAX;
	int16_t x379 = INT16_MIN;

	t94 = ((x377==x378)^(x379^x380));

	if (t94 != 32767LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = UINT16_MAX;
	volatile int32_t x382 = 214;
	uint32_t x383 = 108112U;
	static volatile int16_t x384 = INT16_MIN;
	uint32_t t95 = 294U;

	t95 = ((x381==x382)^(x383^x384));

	if (t95 != 4294846032U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x385 = INT8_MIN;
	int32_t x386 = -1;
	uint8_t x387 = 24U;
	volatile uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = 20324816;

	t96 = ((x385==x386)^(x387^x388));

	if (t96 != 231) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 1U;
	uint32_t x390 = UINT32_MAX;
	static uint8_t x391 = 45U;
	volatile int32_t t97 = 1800651;

	t97 = ((x389==x390)^(x391^x392));

	if (t97 != 67319) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	volatile int16_t x394 = INT16_MAX;
	volatile int32_t x395 = -23250;
	int64_t x396 = 115211749331LL;
	volatile int64_t t98 = 14684849761LL;

	t98 = ((x393==x394)^(x395^x396));

	if (t98 != -115211738371LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;
	static volatile int64_t t99 = -73LL;

	t99 = ((x397==x398)^(x399^x400));

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

