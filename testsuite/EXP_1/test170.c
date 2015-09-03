#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MAX;
int16_t x11 = INT16_MIN;
uint64_t t3 = 4LLU;
static int64_t t5 = 14431LL;
int64_t x25 = 416243033329LL;
int8_t x26 = -1;
int64_t x33 = 88776363115LL;
int32_t x37 = -108219193;
volatile uint64_t t9 = 1012LLU;
volatile uint64_t t11 = 252698619910942878LLU;
uint32_t x62 = 12U;
static int64_t x65 = -1LL;
uint32_t x72 = 156231312U;
uint64_t x83 = 68LLU;
uint64_t x84 = 4516LLU;
volatile uint64_t t16 = 83020046527LLU;
static uint32_t t17 = 155056U;
int32_t x89 = -6188;
int16_t x96 = 511;
int16_t x106 = -1;
int32_t x108 = INT32_MIN;
int8_t x115 = INT8_MIN;
uint8_t x129 = UINT8_MAX;
uint32_t x134 = UINT32_MAX;
volatile uint32_t t29 = 1613198698U;
uint8_t x155 = UINT8_MAX;
static int32_t x156 = -124;
volatile uint64_t t31 = 283200561457LLU;
int64_t x162 = INT64_MIN;
volatile int32_t x168 = -1;
volatile int16_t x169 = INT16_MIN;
int32_t x170 = INT32_MIN;
static uint32_t t35 = 1219169U;
volatile uint16_t x188 = UINT16_MAX;
static uint32_t x189 = 95753U;
volatile int8_t x190 = INT8_MIN;
int64_t x191 = INT64_MIN;
volatile int64_t t37 = -1226980784LL;
uint16_t x193 = 2U;
int16_t x200 = INT16_MIN;
volatile int16_t x215 = -1;
int8_t x218 = INT8_MIN;
int16_t x220 = -1;
volatile int64_t x228 = 158231624LL;
static int16_t x231 = -52;
uint64_t x233 = UINT64_MAX;
int16_t x234 = INT16_MIN;
int8_t x239 = INT8_MIN;
uint32_t x244 = UINT32_MAX;
volatile uint16_t x253 = 2U;
uint16_t x254 = 0U;
int64_t t54 = -1147701386497830183LL;
uint16_t x270 = 1U;
int64_t x298 = -1LL;
int64_t x300 = INT64_MIN;
uint8_t x301 = 0U;
int64_t x304 = INT64_MIN;
int8_t x313 = INT8_MAX;
uint16_t x316 = 31U;
static int16_t x317 = 21;
volatile uint64_t x318 = UINT64_MAX;
int32_t x331 = INT32_MAX;
static uint16_t x335 = 296U;
int64_t x339 = INT64_MIN;
volatile int8_t x349 = -3;
volatile uint64_t t72 = 26231841716LLU;
volatile int16_t x357 = INT16_MIN;
static int16_t x358 = INT16_MAX;
int64_t x359 = 25858647630826LL;
static int16_t x360 = 393;
volatile int8_t x367 = 4;
int64_t x376 = INT64_MIN;
volatile int16_t x386 = INT16_MAX;
int64_t x389 = -3534342489597331LL;
static int16_t x401 = 0;
uint32_t x405 = 595716357U;
static volatile uint32_t x407 = 52U;
volatile int32_t x408 = INT32_MIN;
static uint32_t x409 = UINT32_MAX;
uint64_t x426 = UINT64_MAX;
int8_t x427 = -1;
int64_t x468 = INT64_MIN;
int16_t x470 = INT16_MIN;
uint64_t t96 = 17965298201LLU;
uint32_t x477 = 40U;
static uint32_t t98 = 93430U;
int32_t x487 = -1533435;
uint64_t x488 = UINT64_MAX;
static volatile uint64_t t99 = 1055906434LLU;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	volatile uint32_t x3 = 3789040U;
	uint16_t x4 = 243U;
	uint32_t t0 = 9U;

	t0 = (((x1-x2)+x3)+x4);

	if (t0 != 2151272931U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	int16_t x6 = 280;
	int32_t x7 = -157212126;
	static uint8_t x8 = UINT8_MAX;
	static volatile int32_t t1 = -717980;

	t1 = (((x5-x6)+x7)+x8);

	if (t1 != -157212152) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 3U;
	volatile int8_t x10 = -1;
	uint8_t x12 = 0U;
	int32_t t2 = -5032584;

	t2 = (((x9-x10)+x11)+x12);

	if (t2 != -32764) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int32_t x14 = -1;
	static volatile uint64_t x15 = UINT64_MAX;
	int64_t x16 = -62508LL;

	t3 = (((x13-x14)+x15)+x16);

	if (t3 != 18446744073709521875LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 22U;
	uint64_t x18 = 904646771991LLU;
	int8_t x19 = -2;
	int64_t x20 = -1LL;
	volatile uint64_t t4 = 35952LLU;

	t4 = (((x17-x18)+x19)+x20);

	if (t4 != 18446743169062779644LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	int64_t x22 = INT64_MAX;
	uint16_t x23 = 6185U;
	volatile uint8_t x24 = UINT8_MAX;

	t5 = (((x21-x22)+x23)+x24);

	if (t5 != 6440LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x27 = UINT16_MAX;
	static volatile int32_t x28 = INT32_MIN;
	volatile int64_t t6 = 16689661LL;

	t6 = (((x25-x26)+x27)+x28);

	if (t6 != 414095615217LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile int64_t x30 = -7017759581182LL;
	int16_t x31 = -104;
	int32_t x32 = 3;
	volatile int64_t t7 = -1433399683LL;

	t7 = (((x29-x30)+x31)+x32);

	if (t7 != 7017759581080LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -9399862LL;
	uint32_t x35 = 58795U;
	int8_t x36 = -5;
	volatile int64_t t8 = -87819451680077LL;

	t8 = (((x33-x34)+x35)+x36);

	if (t8 != 88785821767LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -61;
	static uint64_t x39 = 3135744314LLU;
	int8_t x40 = INT8_MIN;

	t9 = (((x37-x38)+x39)+x40);

	if (t9 != 3027525054LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = UINT64_MAX;
	uint8_t x42 = 2U;
	int64_t x43 = -1LL;
	int64_t x44 = INT64_MIN;
	volatile uint64_t t10 = 408LLU;

	t10 = (((x41-x42)+x43)+x44);

	if (t10 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 0U;
	int8_t x46 = -5;
	int8_t x47 = INT8_MAX;
	static uint64_t x48 = 139199501974LLU;

	t11 = (((x45-x46)+x47)+x48);

	if (t11 != 139199502106LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MAX;
	volatile int32_t x58 = 12268;
	int64_t x59 = 94807025762983LL;
	volatile uint8_t x60 = UINT8_MAX;
	int64_t t12 = -14977276291LL;

	t12 = (((x57-x58)+x59)+x60);

	if (t12 != 94809173234617LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 53924787U;
	int64_t x63 = -1LL;
	uint16_t x64 = 154U;
	volatile int64_t t13 = -88007LL;

	t13 = (((x61-x62)+x63)+x64);

	if (t13 != 53924928LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x66 = 3U;
	uint16_t x67 = 3174U;
	int32_t x68 = INT32_MAX;
	int64_t t14 = 315395LL;

	t14 = (((x65-x66)+x67)+x68);

	if (t14 != 2147486817LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = UINT64_MAX;
	volatile int32_t x70 = 11;
	static int16_t x71 = 197;
	volatile uint64_t t15 = 30619LLU;

	t15 = (((x69-x70)+x71)+x72);

	if (t15 != 156231497LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MIN;

	t16 = (((x81-x82)+x83)+x84);

	if (t16 != 9223372036854813160LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MIN;
	uint32_t x87 = 0U;
	static int16_t x88 = INT16_MIN;

	t17 = (((x85-x86)+x87)+x88);

	if (t17 != 4294934528U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x90 = INT32_MIN;
	static volatile int8_t x91 = INT8_MIN;
	uint8_t x92 = 6U;
	static volatile int32_t t18 = 1954930;

	t18 = (((x89-x90)+x91)+x92);

	if (t18 != 2147477338) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x93 = -5610;
	static int8_t x94 = INT8_MIN;
	int16_t x95 = -1;
	int32_t t19 = -4266561;

	t19 = (((x93-x94)+x95)+x96);

	if (t19 != -4972) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x97 = -952;
	int8_t x98 = INT8_MAX;
	volatile int8_t x99 = -1;
	volatile int16_t x100 = -1;
	static volatile int32_t t20 = -14696;

	t20 = (((x97-x98)+x99)+x100);

	if (t20 != -1081) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x101 = INT64_MIN;
	static uint64_t x102 = UINT64_MAX;
	static int8_t x103 = INT8_MIN;
	volatile int8_t x104 = INT8_MAX;
	static uint64_t t21 = 17396880355179LLU;

	t21 = (((x101-x102)+x103)+x104);

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MAX;
	uint32_t x107 = 16094322U;
	volatile uint32_t t22 = 373U;

	t22 = (((x105-x106)+x107)+x108);

	if (t22 != 2163610738U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x113 = -1;
	static int8_t x114 = INT8_MIN;
	uint64_t x116 = 12878015LLU;
	volatile uint64_t t23 = 1459LLU;

	t23 = (((x113-x114)+x115)+x116);

	if (t23 != 12878014LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x121 = 21259U;
	volatile int64_t x122 = -483553329931052LL;
	static uint16_t x123 = UINT16_MAX;
	volatile uint32_t x124 = 57006U;
	static int64_t t24 = -302LL;

	t24 = (((x121-x122)+x123)+x124);

	if (t24 != 483553330074852LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x125 = 19U;
	int8_t x126 = 49;
	volatile int16_t x127 = INT16_MAX;
	volatile int32_t x128 = 763;
	int32_t t25 = 69;

	t25 = (((x125-x126)+x127)+x128);

	if (t25 != 33500) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x130 = 0U;
	int32_t x131 = -1;
	int8_t x132 = -1;
	int32_t t26 = -3057;

	t26 = (((x129-x130)+x131)+x132);

	if (t26 != 253) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x133 = -1LL;
	uint16_t x135 = UINT16_MAX;
	int32_t x136 = -28847;
	volatile int64_t t27 = -525277869LL;

	t27 = (((x133-x134)+x135)+x136);

	if (t27 != -4294930608LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x137 = 4U;
	int8_t x138 = -1;
	int64_t x139 = INT64_MIN;
	uint32_t x140 = 133342U;
	volatile int64_t t28 = 1LL;

	t28 = (((x137-x138)+x139)+x140);

	if (t28 != -9223372036854642461LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x145 = INT32_MIN;
	volatile uint32_t x146 = UINT32_MAX;
	volatile uint32_t x147 = 175776U;
	uint8_t x148 = 28U;

	t29 = (((x145-x146)+x147)+x148);

	if (t29 != 2147659453U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = 1;
	static int32_t x154 = 3270;
	volatile int32_t t30 = 282;

	t30 = (((x153-x154)+x155)+x156);

	if (t30 != -3138) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x157 = 4LLU;
	uint32_t x158 = 5503U;
	uint64_t x159 = 11064246LLU;
	int8_t x160 = 7;

	t31 = (((x157-x158)+x159)+x160);

	if (t31 != 11058754LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MAX;
	int64_t t32 = 408608980868293093LL;

	t32 = (((x161-x162)+x163)+x164);

	if (t32 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x165 = INT64_MIN;
	int64_t x166 = 0LL;
	volatile int16_t x167 = INT16_MAX;
	volatile int64_t t33 = -54969955716759864LL;

	t33 = (((x165-x166)+x167)+x168);

	if (t33 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x171 = INT32_MIN;
	int16_t x172 = INT16_MAX;
	static int32_t t34 = 88;

	t34 = (((x169-x170)+x171)+x172);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x177 = 24104235;
	static int8_t x178 = INT8_MIN;
	uint32_t x179 = UINT32_MAX;
	uint32_t x180 = 18U;

	t35 = (((x177-x178)+x179)+x180);

	if (t35 != 24104380U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = INT16_MAX;
	uint8_t x186 = 6U;
	static int8_t x187 = INT8_MIN;
	int32_t t36 = 2152520;

	t36 = (((x185-x186)+x187)+x188);

	if (t36 != 98168) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x192 = UINT8_MAX;

	t37 = (((x189-x190)+x191)+x192);

	if (t37 != -9223372036854679672LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x194 = 865;
	volatile int64_t x195 = -1LL;
	int8_t x196 = -1;
	int64_t t38 = -3996LL;

	t38 = (((x193-x194)+x195)+x196);

	if (t38 != -865LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x197 = -1;
	int8_t x198 = 15;
	volatile uint8_t x199 = UINT8_MAX;
	static int32_t t39 = -14866;

	t39 = (((x197-x198)+x199)+x200);

	if (t39 != -32529) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = INT8_MIN;
	uint64_t x203 = 2640304173735205LLU;
	volatile uint64_t x204 = UINT64_MAX;
	volatile uint64_t t40 = 1LLU;

	t40 = (((x201-x202)+x203)+x204);

	if (t40 != 2640304173735204LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x213 = UINT32_MAX;
	int16_t x214 = INT16_MAX;
	uint8_t x216 = 4U;
	volatile uint32_t t41 = 29059U;

	t41 = (((x213-x214)+x215)+x216);

	if (t41 != 4294934531U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x217 = -1LL;
	static volatile int32_t x219 = -1;
	int64_t t42 = 81091769218913738LL;

	t42 = (((x217-x218)+x219)+x220);

	if (t42 != 125LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = INT16_MIN;
	int32_t x222 = -216;
	uint64_t x223 = 233548766LLU;
	int32_t x224 = -1;
	volatile uint64_t t43 = 9191121741936226014LLU;

	t43 = (((x221-x222)+x223)+x224);

	if (t43 != 233516213LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x225 = 45;
	static int64_t x226 = INT64_MAX;
	uint64_t x227 = UINT64_MAX;
	volatile uint64_t t44 = 40774905LLU;

	t44 = (((x225-x226)+x227)+x228);

	if (t44 != 9223372037013007477LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = -1;
	static int16_t x230 = INT16_MIN;
	uint32_t x232 = 4562969U;
	uint32_t t45 = 0U;

	t45 = (((x229-x230)+x231)+x232);

	if (t45 != 4595684U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x235 = UINT16_MAX;
	int64_t x236 = INT64_MAX;
	volatile uint64_t t46 = 111329413LLU;

	t46 = (((x233-x234)+x235)+x236);

	if (t46 != 9223372036854874109LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x237 = 31884;
	uint32_t x238 = 2148U;
	uint8_t x240 = 6U;
	static uint32_t t47 = 312628420U;

	t47 = (((x237-x238)+x239)+x240);

	if (t47 != 29614U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x241 = 118226726631061828LLU;
	int64_t x242 = -1LL;
	int8_t x243 = INT8_MAX;
	volatile uint64_t t48 = 6616543LLU;

	t48 = (((x241-x242)+x243)+x244);

	if (t48 != 118226730926029251LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x245 = UINT64_MAX;
	static int8_t x246 = -1;
	int8_t x247 = -1;
	uint8_t x248 = 60U;
	uint64_t t49 = 16728727LLU;

	t49 = (((x245-x246)+x247)+x248);

	if (t49 != 59LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x249 = 16419696610614LLU;
	volatile uint64_t x250 = 49590524LLU;
	uint64_t x251 = 592121735636LLU;
	static uint64_t x252 = UINT64_MAX;
	uint64_t t50 = 103637864547551LLU;

	t50 = (((x249-x250)+x251)+x252);

	if (t50 != 17011768755725LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x255 = 19U;
	static uint32_t x256 = 502055874U;
	volatile uint32_t t51 = 1U;

	t51 = (((x253-x254)+x255)+x256);

	if (t51 != 502055895U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x257 = UINT64_MAX;
	static uint8_t x258 = 3U;
	int8_t x259 = -8;
	static int32_t x260 = INT32_MIN;
	uint64_t t52 = 3939981LLU;

	t52 = (((x257-x258)+x259)+x260);

	if (t52 != 18446744071562067956LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x261 = 84U;
	static int8_t x262 = 1;
	int32_t x263 = INT32_MIN;
	volatile int32_t x264 = -1;
	int32_t t53 = 5673;

	t53 = (((x261-x262)+x263)+x264);

	if (t53 != -2147483566) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = -22;
	int32_t x266 = INT32_MIN;
	int64_t x267 = INT64_MIN;
	int8_t x268 = INT8_MIN;

	t54 = (((x265-x266)+x267)+x268);

	if (t54 != -9223372034707292310LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = 5;
	volatile int8_t x271 = -1;
	uint64_t x272 = UINT64_MAX;
	uint64_t t55 = 2477457870LLU;

	t55 = (((x269-x270)+x271)+x272);

	if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = 57;
	int64_t x274 = 416472348802162LL;
	static volatile int8_t x275 = -1;
	volatile int8_t x276 = INT8_MIN;
	int64_t t56 = 0LL;

	t56 = (((x273-x274)+x275)+x276);

	if (t56 != -416472348802234LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = 386LL;
	volatile int8_t x278 = INT8_MIN;
	static int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MAX;
	int64_t t57 = 26175907461LL;

	t57 = (((x277-x278)+x279)+x280);

	if (t57 != 33153LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MIN;
	volatile uint64_t x284 = 3121282819247314160LLU;
	uint64_t t58 = 253LLU;

	t58 = (((x281-x282)+x283)+x284);

	if (t58 != 12344654851807122672LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x285 = -1;
	uint64_t x286 = 16710266166441LLU;
	int32_t x287 = INT32_MAX;
	int16_t x288 = INT16_MIN;
	uint64_t t59 = 532880718450LLU;

	t59 = (((x285-x286)+x287)+x288);

	if (t59 != 18446727365590836053LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = -3;
	uint8_t x290 = 117U;
	int16_t x291 = INT16_MAX;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t60 = 2042LLU;

	t60 = (((x289-x290)+x291)+x292);

	if (t60 != 32646LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = INT64_MIN;
	int32_t x295 = -58654;
	int8_t x296 = -1;
	int64_t t61 = 1LL;

	t61 = (((x293-x294)+x295)+x296);

	if (t61 != 9223372036854684385LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x297 = INT16_MIN;
	static int32_t x299 = INT32_MAX;
	volatile int64_t t62 = 15517LL;

	t62 = (((x297-x298)+x299)+x300);

	if (t62 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x302 = 58;
	uint8_t x303 = UINT8_MAX;
	int64_t t63 = -205849LL;

	t63 = (((x301-x302)+x303)+x304);

	if (t63 != -9223372036854775611LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x309 = -271575785595LL;
	static uint32_t x310 = 1729U;
	int8_t x311 = INT8_MIN;
	static int32_t x312 = INT32_MIN;
	volatile int64_t t64 = -211180384LL;

	t64 = (((x309-x310)+x311)+x312);

	if (t64 != -273723271100LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x314 = 6U;
	uint8_t x315 = 1U;
	int32_t t65 = -270900175;

	t65 = (((x313-x314)+x315)+x316);

	if (t65 != 153) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x319 = 0;
	uint16_t x320 = 6U;
	volatile uint64_t t66 = 266492222282991798LLU;

	t66 = (((x317-x318)+x319)+x320);

	if (t66 != 28LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x329 = 9578848U;
	static uint16_t x330 = 26722U;
	uint16_t x332 = UINT16_MAX;
	volatile uint32_t t67 = 3792U;

	t67 = (((x329-x330)+x331)+x332);

	if (t67 != 2157101308U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x333 = INT64_MIN;
	volatile uint64_t x334 = 971242824137590670LLU;
	int32_t x336 = INT32_MAX;
	uint64_t t68 = 264LLU;

	t68 = (((x333-x334)+x335)+x336);

	if (t68 != 8252129214864669081LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x337 = UINT16_MAX;
	int8_t x338 = INT8_MAX;
	uint32_t x340 = UINT32_MAX;
	static volatile int64_t t69 = -8367061610LL;

	t69 = (((x337-x338)+x339)+x340);

	if (t69 != -9223372032559743105LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x341 = 289402LLU;
	volatile int16_t x342 = -1;
	static volatile int16_t x343 = -1;
	int32_t x344 = INT32_MIN;
	uint64_t t70 = 450LLU;

	t70 = (((x341-x342)+x343)+x344);

	if (t70 != 18446744071562357370LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x345 = INT8_MAX;
	int32_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = INT8_MAX;
	static volatile uint64_t t71 = 1981206LLU;

	t71 = (((x345-x346)+x347)+x348);

	if (t71 != 254LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x350 = 4U;
	uint64_t x351 = 654LLU;
	uint64_t x352 = 9LLU;

	t72 = (((x349-x350)+x351)+x352);

	if (t72 != 656LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = INT16_MIN;
	int32_t x355 = 376;
	uint32_t x356 = 5209U;
	static volatile int64_t t73 = -374593LL;

	t73 = (((x353-x354)+x355)+x356);

	if (t73 != -9223372036854737455LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t t74 = -13LL;

	t74 = (((x357-x358)+x359)+x360);

	if (t74 != 25858647565684LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x365 = 9648U;
	uint64_t x366 = 49351247LLU;
	int64_t x368 = INT64_MAX;
	uint64_t t75 = 59430338079LLU;

	t75 = (((x365-x366)+x367)+x368);

	if (t75 != 9223372036805434212LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x373 = 3874U;
	int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	volatile int64_t t76 = -186788473580LL;

	t76 = (((x373-x374)+x375)+x376);

	if (t76 != -9223372036854739294LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x381 = -1;
	static int8_t x382 = INT8_MAX;
	volatile uint32_t x383 = 804328U;
	static int64_t x384 = -1LL;
	int64_t t77 = -496LL;

	t77 = (((x381-x382)+x383)+x384);

	if (t77 != 804199LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x385 = -1;
	volatile uint8_t x387 = 62U;
	int64_t x388 = INT64_MAX;
	volatile int64_t t78 = -55LL;

	t78 = (((x385-x386)+x387)+x388);

	if (t78 != 9223372036854743101LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x390 = INT16_MIN;
	int8_t x391 = -7;
	int16_t x392 = INT16_MIN;
	int64_t t79 = -160217LL;

	t79 = (((x389-x390)+x391)+x392);

	if (t79 != -3534342489597338LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x397 = 0U;
	int16_t x398 = 3939;
	uint64_t x399 = 4841106013333212LLU;
	int8_t x400 = -1;
	static volatile uint64_t t80 = 2320LLU;

	t80 = (((x397-x398)+x399)+x400);

	if (t80 != 4841106013329272LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x402 = -1;
	static int16_t x403 = INT16_MIN;
	uint32_t x404 = 136566853U;
	static uint32_t t81 = 1U;

	t81 = (((x401-x402)+x403)+x404);

	if (t81 != 136534086U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x406 = -400;
	uint32_t t82 = 109246U;

	t82 = (((x405-x406)+x407)+x408);

	if (t82 != 2743200457U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x410 = INT8_MIN;
	uint8_t x411 = 14U;
	int8_t x412 = INT8_MAX;
	volatile uint32_t t83 = 1052U;

	t83 = (((x409-x410)+x411)+x412);

	if (t83 != 268U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x413 = 941557598U;
	uint8_t x414 = 0U;
	static int8_t x415 = -9;
	uint16_t x416 = 13591U;
	uint32_t t84 = 494U;

	t84 = (((x413-x414)+x415)+x416);

	if (t84 != 941571180U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x417 = 70638584678304125LLU;
	int32_t x418 = -48;
	static int8_t x419 = -1;
	volatile int8_t x420 = 1;
	uint64_t t85 = 2082039LLU;

	t85 = (((x417-x418)+x419)+x420);

	if (t85 != 70638584678304173LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x421 = 7U;
	uint16_t x422 = 224U;
	volatile int16_t x423 = -1584;
	static uint8_t x424 = 0U;
	volatile int32_t t86 = -1970;

	t86 = (((x421-x422)+x423)+x424);

	if (t86 != -1801) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x425 = 1044290571252791245LLU;
	static int32_t x428 = INT32_MAX;
	uint64_t t87 = 15640LLU;

	t87 = (((x425-x426)+x427)+x428);

	if (t87 != 1044290573400274892LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x429 = INT8_MAX;
	volatile int16_t x430 = INT16_MIN;
	int8_t x431 = -11;
	int32_t x432 = 5;
	static volatile int32_t t88 = -12;

	t88 = (((x429-x430)+x431)+x432);

	if (t88 != 32889) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x437 = -1;
	int16_t x438 = INT16_MAX;
	static int8_t x439 = 0;
	volatile int16_t x440 = INT16_MAX;
	int32_t t89 = -2;

	t89 = (((x437-x438)+x439)+x440);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x445 = -223;
	volatile int16_t x446 = -1;
	uint32_t x447 = UINT32_MAX;
	volatile int8_t x448 = INT8_MAX;
	static uint32_t t90 = 1118538U;

	t90 = (((x445-x446)+x447)+x448);

	if (t90 != 4294967200U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x449 = -1LL;
	static volatile uint32_t x450 = 4U;
	int8_t x451 = -6;
	int32_t x452 = INT32_MIN;
	int64_t t91 = -254027946265LL;

	t91 = (((x449-x450)+x451)+x452);

	if (t91 != -2147483659LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x453 = -38;
	int8_t x454 = 1;
	int16_t x455 = INT16_MIN;
	int32_t x456 = 1886;
	volatile int32_t t92 = 240428;

	t92 = (((x453-x454)+x455)+x456);

	if (t92 != -30921) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x457 = UINT32_MAX;
	int8_t x458 = -1;
	volatile uint64_t x459 = 791827LLU;
	uint16_t x460 = UINT16_MAX;
	uint64_t t93 = 5793262178942868045LLU;

	t93 = (((x457-x458)+x459)+x460);

	if (t93 != 857362LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x461 = INT16_MIN;
	volatile uint8_t x462 = 4U;
	int8_t x463 = -1;
	uint64_t x464 = 46125571241599137LLU;
	static volatile uint64_t t94 = 2049864LLU;

	t94 = (((x461-x462)+x463)+x464);

	if (t94 != 46125571241566364LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x465 = UINT16_MAX;
	int16_t x466 = 487;
	int16_t x467 = -1;
	volatile int64_t t95 = -3LL;

	t95 = (((x465-x466)+x467)+x468);

	if (t95 != -9223372036854710761LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x469 = INT64_MIN;
	int64_t x471 = -1LL;
	uint64_t x472 = 3416280025691LLU;

	t96 = (((x469-x470)+x471)+x472);

	if (t96 != 9223375453134834266LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x478 = 73U;
	int32_t x479 = INT32_MIN;
	int16_t x480 = -1;
	uint32_t t97 = 1041924U;

	t97 = (((x477-x478)+x479)+x480);

	if (t97 != 2147483614U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x481 = UINT32_MAX;
	int32_t x482 = 12562;
	int16_t x483 = INT16_MIN;
	volatile uint16_t x484 = 13U;

	t98 = (((x481-x482)+x483)+x484);

	if (t98 != 4294921978U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x485 = -16527750;
	volatile int32_t x486 = 747;

	t99 = (((x485-x486)+x487)+x488);

	if (t99 != 18446744073691489683LLU) { NG(); } else { ; }
	
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

