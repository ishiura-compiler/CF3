#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 22U;
int32_t x6 = -1;
volatile int32_t x10 = INT32_MAX;
volatile int32_t x16 = -1;
int16_t x19 = -3;
int32_t t4 = -3;
volatile uint16_t x23 = 1783U;
volatile uint64_t t7 = 29270766511LLU;
static int64_t x45 = INT64_MAX;
int64_t t10 = -17093866326262LL;
int32_t x51 = -1;
int64_t x52 = INT64_MAX;
volatile uint64_t t11 = 93099LLU;
int16_t x53 = INT16_MIN;
volatile int32_t x56 = INT32_MAX;
int16_t x57 = -1;
volatile uint16_t x62 = 59U;
static int8_t x68 = 25;
int64_t x73 = INT64_MIN;
int8_t x74 = -4;
int8_t x76 = INT8_MAX;
volatile int64_t t19 = 13533LL;
volatile int16_t x114 = INT16_MIN;
int32_t x115 = 32618658;
int32_t x118 = INT32_MAX;
int64_t x119 = -1LL;
uint64_t t26 = 12720LLU;
static volatile uint32_t x130 = 157865U;
uint64_t x132 = 985229182LLU;
int16_t x153 = -1;
static int32_t x154 = -1;
static volatile uint32_t t33 = 103U;
volatile uint64_t t34 = 5941135106LLU;
static int8_t x172 = INT8_MIN;
uint32_t x181 = UINT32_MAX;
uint16_t x189 = 12U;
volatile uint64_t t40 = 4LLU;
int64_t x197 = 1181718928042917308LL;
uint8_t x199 = UINT8_MAX;
static uint32_t x205 = UINT32_MAX;
volatile int64_t x207 = -1LL;
int16_t x216 = 18;
volatile int8_t x221 = -1;
int16_t x222 = INT16_MAX;
uint64_t x226 = 1916736024LLU;
static uint64_t t46 = 3300467LLU;
volatile int32_t x232 = -23882798;
int64_t x234 = -54511LL;
volatile uint64_t t49 = 38LLU;
uint16_t x242 = 276U;
int8_t x244 = INT8_MIN;
int16_t x249 = -1;
static uint8_t x255 = 1U;
uint16_t x258 = UINT16_MAX;
int8_t x259 = 0;
volatile int16_t x262 = 2531;
volatile uint8_t x265 = UINT8_MAX;
int16_t x268 = INT16_MIN;
int32_t t55 = 157;
int32_t x269 = INT32_MIN;
static int64_t x290 = 35152733421LL;
volatile int64_t t59 = 16612927772100139LL;
int16_t x305 = -1;
static volatile uint64_t x313 = UINT64_MAX;
int8_t x323 = 10;
volatile int32_t t65 = 575965875;
uint8_t x330 = 102U;
static uint16_t x334 = 3514U;
volatile int8_t x342 = -1;
volatile int32_t x349 = INT32_MAX;
volatile int64_t x354 = INT64_MIN;
int64_t t71 = 162502197410LL;
volatile int16_t x358 = 295;
uint64_t x360 = UINT64_MAX;
int32_t x367 = -1;
static volatile uint64_t t73 = 747416316365LLU;
uint8_t x370 = 22U;
static uint32_t x372 = 505028U;
int16_t x376 = INT16_MIN;
int8_t x379 = -1;
static uint32_t x399 = UINT32_MAX;
static int16_t x405 = 178;
volatile int16_t x411 = INT16_MAX;
int32_t x417 = -207191;
int32_t x429 = -768;
int64_t x434 = -76027665366373LL;
int8_t x442 = INT8_MAX;
static int8_t x449 = 1;
uint32_t x451 = 104615U;
int16_t x452 = INT16_MAX;
uint32_t t89 = 1683U;
uint16_t x472 = UINT16_MAX;
static int64_t x478 = INT64_MIN;
volatile int64_t t95 = -93LL;
static volatile uint8_t x486 = 51U;
int64_t x487 = -193378223563LL;
static uint8_t x488 = UINT8_MAX;
int32_t x491 = INT32_MAX;
static volatile uint32_t x494 = 914021U;
uint32_t x495 = UINT32_MAX;
static int64_t x499 = -1LL;


void f0(void) {
	int64_t x1 = -1LL;
	int8_t x2 = -1;
	static uint16_t x3 = 24568U;
	volatile uint8_t x4 = 0U;
	int64_t t0 = -5436605736313LL;

	t0 = (x1-((x2+x3)+x4));

	if (t0 != -24568LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 113U;
	int64_t x8 = -401824712670754LL;
	volatile int64_t t1 = -427087596065459LL;

	t1 = (x5-((x6+x7)+x8));

	if (t1 != 401824712670664LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	static int16_t x11 = INT16_MIN;
	static uint32_t x12 = 1481280427U;
	static uint32_t t2 = 1089683U;

	t2 = (x9-((x10+x11)+x12));

	if (t2 != 666235989U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 0U;
	int32_t x14 = INT32_MIN;
	uint8_t x15 = UINT8_MAX;
	int32_t t3 = 7186;

	t3 = (x13-((x14+x15)+x16));

	if (t3 != 2147483394) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	int32_t x18 = -36901;
	uint8_t x20 = 0U;

	t4 = (x17-((x18+x19)+x20));

	if (t4 != 36904) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	uint32_t x22 = UINT32_MAX;
	int64_t x24 = INT64_MIN;
	int64_t t5 = -104722510LL;

	t5 = (x21-((x22+x23)+x24));

	if (t5 != 9223372036854774153LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = UINT64_MAX;
	static int16_t x30 = 776;
	static int16_t x31 = INT16_MIN;
	int64_t x32 = -1LL;
	volatile uint64_t t6 = 43618780219787795LLU;

	t6 = (x29-((x30+x31)+x32));

	if (t6 != 31992LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = UINT64_MAX;
	volatile uint8_t x34 = 1U;
	uint8_t x35 = UINT8_MAX;
	static volatile uint32_t x36 = 7U;

	t7 = (x33-((x34+x35)+x36));

	if (t7 != 18446744073709551352LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x37 = INT64_MIN;
	int64_t x38 = -2479297622LL;
	uint32_t x39 = 366U;
	volatile int8_t x40 = INT8_MIN;
	volatile int64_t t8 = -278934400LL;

	t8 = (x37-((x38+x39)+x40));

	if (t8 != -9223372034375478424LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	volatile int8_t x42 = INT8_MAX;
	uint8_t x43 = UINT8_MAX;
	int8_t x44 = INT8_MIN;
	static int32_t t9 = -323716655;

	t9 = (x41-((x42+x43)+x44));

	if (t9 != -33022) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x46 = INT16_MIN;
	int16_t x47 = 214;
	uint16_t x48 = UINT16_MAX;

	t10 = (x45-((x46+x47)+x48));

	if (t10 != 9223372036854742826LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 133;
	uint64_t x50 = UINT64_MAX;

	t11 = (x49-((x50+x51)+x52));

	if (t11 != 9223372036854775944LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = -1;
	uint64_t t12 = 2LLU;

	t12 = (x53-((x54+x55)+x56));

	if (t12 != 18446744071562035203LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x58 = 6693078U;
	int16_t x59 = -21;
	int16_t x60 = 1;
	uint32_t t13 = 3041813U;

	t13 = (x57-((x58+x59)+x60));

	if (t13 != 4288274237U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = UINT64_MAX;
	volatile int8_t x63 = INT8_MIN;
	int32_t x64 = 2214936;
	volatile uint64_t t14 = 209535LLU;

	t14 = (x61-((x62+x63)+x64));

	if (t14 != 18446744073707336748LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = INT8_MAX;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = INT32_MIN;
	volatile uint64_t t15 = 47933357LLU;

	t15 = (x65-((x66+x67)+x68));

	if (t15 != 2147483751LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = INT32_MAX;
	static int16_t x70 = INT16_MIN;
	int16_t x71 = -10;
	uint32_t x72 = 12U;
	uint32_t t16 = 58527714U;

	t16 = (x69-((x70+x71)+x72));

	if (t16 != 2147516413U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x75 = UINT64_MAX;
	uint64_t t17 = 251LLU;

	t17 = (x73-((x74+x75)+x76));

	if (t17 != 9223372036854775686LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x77 = 7221U;
	volatile int32_t x78 = 2034059;
	uint16_t x79 = 195U;
	uint64_t x80 = 62808770125258493LLU;
	volatile uint64_t t18 = 340320474609116816LLU;

	t18 = (x77-((x78+x79)+x80));

	if (t18 != 18383935303582266090LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -13991071LL;
	int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MIN;
	int64_t x84 = -206267LL;

	t19 = (x81-((x82+x83)+x84));

	if (t19 != -13751908LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = UINT8_MAX;
	int32_t x94 = -45;
	int64_t x95 = INT64_MAX;
	int64_t x96 = -174741116807860LL;
	int64_t t20 = -1870192791952914028LL;

	t20 = (x93-((x94+x95)+x96));

	if (t20 != -9223197295737967647LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x101 = INT32_MIN;
	uint64_t x102 = 5439615972074215LLU;
	static int16_t x103 = INT16_MIN;
	int8_t x104 = INT8_MIN;
	uint64_t t21 = 1408270LLU;

	t21 = (x101-((x102+x103)+x104));

	if (t21 != 18441304455590026649LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x109 = INT16_MIN;
	int64_t x110 = INT64_MIN;
	static int64_t x111 = 33061894654LL;
	int64_t x112 = INT64_MAX;
	volatile int64_t t22 = 3734474LL;

	t22 = (x109-((x110+x111)+x112));

	if (t22 != -33061927421LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x113 = 251;
	static volatile int32_t x116 = INT32_MIN;
	volatile int32_t t23 = -7;

	t23 = (x113-((x114+x115)+x116));

	if (t23 != 2114898009) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -1;
	int8_t x120 = -12;
	static volatile int64_t t24 = 117092955753LL;

	t24 = (x117-((x118+x119)+x120));

	if (t24 != -2147483635LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MIN;
	static volatile uint64_t x123 = 30LLU;
	int32_t x124 = INT32_MIN;
	volatile uint64_t t25 = 12810670796LLU;

	t25 = (x121-((x122+x123)+x124));

	if (t25 != 2147483618LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = -4464833034881866LL;
	static uint8_t x126 = UINT8_MAX;
	uint16_t x127 = 15U;
	uint64_t x128 = UINT64_MAX;

	t26 = (x125-((x126+x127)+x128));

	if (t26 != 18442279240674669481LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = 505253406U;
	uint32_t x131 = 7366U;
	volatile uint64_t t27 = 41327928539767905LLU;

	t27 = (x129-((x130+x131)+x132));

	if (t27 != 18446744073229410609LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = -1;
	static int16_t x134 = INT16_MIN;
	static int16_t x135 = INT16_MAX;
	static int32_t x136 = -1;
	int32_t t28 = -237;

	t28 = (x133-((x134+x135)+x136));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x137 = -1;
	volatile int32_t x138 = INT32_MIN;
	volatile uint16_t x139 = UINT16_MAX;
	int8_t x140 = -1;
	int32_t t29 = -659915735;

	t29 = (x137-((x138+x139)+x140));

	if (t29 != 2147418113) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x145 = INT64_MAX;
	int8_t x146 = -7;
	uint64_t x147 = UINT64_MAX;
	int32_t x148 = INT32_MIN;
	volatile uint64_t t30 = 202LLU;

	t30 = (x145-((x146+x147)+x148));

	if (t30 != 9223372039002259463LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = INT32_MAX;
	static int32_t x150 = 13631680;
	uint64_t x151 = 436159102111551LLU;
	int32_t x152 = -1;
	uint64_t t31 = 1864LLU;

	t31 = (x149-((x150+x151)+x152));

	if (t31 != 18446307916741292033LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x155 = UINT8_MAX;
	uint16_t x156 = UINT16_MAX;
	static volatile int32_t t32 = 12;

	t32 = (x153-((x154+x155)+x156));

	if (t32 != -65790) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = -1;
	uint8_t x158 = 14U;
	static uint32_t x159 = 127532U;
	uint32_t x160 = 217464U;

	t33 = (x157-((x158+x159)+x160));

	if (t33 != 4294622285U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = -999LL;
	int32_t x162 = INT32_MIN;
	int16_t x163 = INT16_MAX;
	uint64_t x164 = 24190LLU;

	t34 = (x161-((x162+x163)+x164));

	if (t34 != 2147425692LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x169 = 197U;
	int8_t x170 = INT8_MAX;
	int64_t x171 = 9056490593519LL;
	int64_t t35 = 58791LL;

	t35 = (x169-((x170+x171)+x172));

	if (t35 != -9056490593321LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x173 = -124;
	static int16_t x174 = INT16_MIN;
	volatile int16_t x175 = -1;
	volatile int64_t x176 = -1LL;
	int64_t t36 = 17LL;

	t36 = (x173-((x174+x175)+x176));

	if (t36 != 32646LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = UINT8_MAX;
	uint32_t x178 = 1804039530U;
	int16_t x179 = INT16_MAX;
	static volatile uint64_t x180 = UINT64_MAX;
	static volatile uint64_t t37 = 27LLU;

	t37 = (x177-((x178+x179)+x180));

	if (t37 != 18446744071905479575LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x182 = -1LL;
	int32_t x183 = -1;
	int32_t x184 = -1;
	int64_t t38 = -190222LL;

	t38 = (x181-((x182+x183)+x184));

	if (t38 != 4294967298LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MAX;
	int16_t x187 = -1;
	static volatile int32_t x188 = 864;
	int32_t t39 = 6;

	t39 = (x185-((x186+x187)+x188));

	if (t39 != -66398) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x190 = UINT64_MAX;
	volatile int16_t x191 = 1;
	int16_t x192 = INT16_MAX;

	t40 = (x189-((x190+x191)+x192));

	if (t40 != 18446744073709518861LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x198 = -19;
	uint32_t x200 = UINT32_MAX;
	int64_t t41 = 1427LL;

	t41 = (x197-((x198+x199)+x200));

	if (t41 != 1181718928042917073LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x201 = 8028U;
	int8_t x202 = -12;
	static int8_t x203 = INT8_MAX;
	int16_t x204 = INT16_MIN;
	volatile int32_t t42 = 3;

	t42 = (x201-((x202+x203)+x204));

	if (t42 != 40681) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x206 = 7U;
	static int16_t x208 = INT16_MIN;
	static int64_t t43 = -2251779254749284741LL;

	t43 = (x205-((x206+x207)+x208));

	if (t43 != 4295000057LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x213 = -27;
	int64_t x214 = 60758998LL;
	static volatile int64_t x215 = INT64_MIN;
	int64_t t44 = -50394123LL;

	t44 = (x213-((x214+x215)+x216));

	if (t44 != 9223372036794016765LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x223 = INT16_MIN;
	volatile int8_t x224 = 9;
	int32_t t45 = 7442753;

	t45 = (x221-((x222+x223)+x224));

	if (t45 != -9) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x225 = -1LL;
	uint32_t x227 = 27553U;
	int16_t x228 = INT16_MIN;

	t46 = (x225-((x226+x227)+x228));

	if (t46 != 18446744071792820806LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x229 = 2U;
	static volatile int8_t x230 = INT8_MIN;
	uint32_t x231 = 7975905U;
	volatile uint32_t t47 = 635463U;

	t47 = (x229-((x230+x231)+x232));

	if (t47 != 15907023U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x233 = UINT32_MAX;
	uint64_t x235 = UINT64_MAX;
	uint16_t x236 = UINT16_MAX;
	volatile uint64_t t48 = 20733LLU;

	t48 = (x233-((x234+x235)+x236));

	if (t48 != 4294956272LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x237 = -1LL;
	int16_t x238 = -2036;
	uint64_t x239 = UINT64_MAX;
	volatile int16_t x240 = INT16_MIN;

	t49 = (x237-((x238+x239)+x240));

	if (t49 != 34804LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x241 = INT32_MAX;
	int32_t x243 = 5577712;
	int32_t t50 = -13307;

	t50 = (x241-((x242+x243)+x244));

	if (t50 != 2141905787) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x250 = -56006660;
	volatile int32_t x251 = -1;
	uint32_t x252 = 65254U;
	static uint32_t t51 = 3U;

	t51 = (x249-((x250+x251)+x252));

	if (t51 != 55941406U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MIN;
	volatile int8_t x256 = -1;
	volatile int64_t t52 = 32218LL;

	t52 = (x253-((x254+x255)+x256));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x257 = 827;
	int64_t x260 = -1LL;
	volatile int64_t t53 = -19941408LL;

	t53 = (x257-((x258+x259)+x260));

	if (t53 != -64707LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x261 = 99970776661LLU;
	int64_t x263 = 3881196150LL;
	int8_t x264 = INT8_MIN;
	volatile uint64_t t54 = 31192101852463298LLU;

	t54 = (x261-((x262+x263)+x264));

	if (t54 != 96089578108LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x266 = UINT16_MAX;
	volatile int8_t x267 = INT8_MAX;

	t55 = (x265-((x266+x267)+x268));

	if (t55 != -32639) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x270 = 599172U;
	uint64_t x271 = UINT64_MAX;
	static int64_t x272 = INT64_MIN;
	uint64_t t56 = 17LLU;

	t56 = (x269-((x270+x271)+x272));

	if (t56 != 9223372034706692989LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = -1LL;
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MIN;
	uint8_t x276 = UINT8_MAX;
	int64_t t57 = -123222681358LL;

	t57 = (x273-((x274+x275)+x276));

	if (t57 != -2147483903LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = -1;
	int32_t x278 = INT32_MIN;
	int64_t x279 = 58084867114612288LL;
	volatile uint64_t x280 = 3596331172238332255LLU;
	uint64_t t58 = 103948387365386LLU;

	t58 = (x277-((x278+x279)+x280));

	if (t58 != 14792328036504090720LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x289 = INT32_MAX;
	volatile int64_t x291 = INT64_MIN;
	static volatile uint8_t x292 = UINT8_MAX;

	t59 = (x289-((x290+x291)+x292));

	if (t59 != 9223372003849525779LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = INT64_MIN;
	uint32_t x298 = 356765545U;
	volatile uint64_t x299 = 1760LLU;
	int64_t x300 = -204LL;
	volatile uint64_t t60 = 2066867115235356LLU;

	t60 = (x297-((x298+x299)+x300));

	if (t60 != 9223372036498008707LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x301 = -1;
	int16_t x302 = -1515;
	static volatile int32_t x303 = -843966;
	volatile uint32_t x304 = 102U;
	uint32_t t61 = 1246409285U;

	t61 = (x301-((x302+x303)+x304));

	if (t61 != 845378U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x306 = INT8_MIN;
	uint8_t x307 = UINT8_MAX;
	volatile int32_t x308 = INT32_MIN;
	int32_t t62 = -1;

	t62 = (x305-((x306+x307)+x308));

	if (t62 != 2147483520) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x309 = -1LL;
	volatile int8_t x310 = -1;
	volatile uint8_t x311 = 22U;
	static int64_t x312 = -2866259LL;
	volatile int64_t t63 = -429924689LL;

	t63 = (x309-((x310+x311)+x312));

	if (t63 != 2866237LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x314 = INT8_MIN;
	uint64_t x315 = UINT64_MAX;
	static volatile int16_t x316 = INT16_MIN;
	static uint64_t t64 = 1LLU;

	t64 = (x313-((x314+x315)+x316));

	if (t64 != 32896LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = 14;
	static int16_t x324 = -229;

	t65 = (x321-((x322+x323)+x324));

	if (t65 != -32563) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int16_t x331 = -101;
	uint32_t x332 = 216215946U;
	uint32_t t66 = 8U;

	t66 = (x329-((x330+x331)+x332));

	if (t66 != 4078751604U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x333 = 36;
	int8_t x335 = -7;
	int16_t x336 = INT16_MAX;
	int32_t t67 = -985209;

	t67 = (x333-((x334+x335)+x336));

	if (t67 != -36238) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x341 = UINT8_MAX;
	uint32_t x343 = 1449U;
	uint16_t x344 = 5277U;
	uint32_t t68 = 6051U;

	t68 = (x341-((x342+x343)+x344));

	if (t68 != 4294960826U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x345 = UINT32_MAX;
	uint64_t x346 = UINT64_MAX;
	static int8_t x347 = 21;
	static int32_t x348 = INT32_MIN;
	uint64_t t69 = 1LLU;

	t69 = (x345-((x346+x347)+x348));

	if (t69 != 6442450923LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x350 = 142511;
	int8_t x351 = -1;
	int8_t x352 = INT8_MAX;
	int32_t t70 = -941246947;

	t70 = (x349-((x350+x351)+x352));

	if (t70 != 2147341010) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x353 = -1;
	uint16_t x355 = UINT16_MAX;
	uint16_t x356 = 170U;

	t71 = (x353-((x354+x355)+x356));

	if (t71 != 9223372036854710102LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x357 = INT16_MAX;
	uint64_t x359 = UINT64_MAX;
	volatile uint64_t t72 = 574172189LLU;

	t72 = (x357-((x358+x359)+x360));

	if (t72 != 32474LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x365 = 3792448244227214LLU;
	static int32_t x366 = 1;
	uint8_t x368 = 26U;

	t73 = (x365-((x366+x367)+x368));

	if (t73 != 3792448244227188LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x369 = INT8_MAX;
	volatile int8_t x371 = INT8_MIN;
	volatile uint32_t t74 = 2139U;

	t74 = (x369-((x370+x371)+x372));

	if (t74 != 4294462501U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x373 = INT64_MIN;
	uint8_t x374 = 0U;
	uint8_t x375 = 0U;
	int64_t t75 = 194LL;

	t75 = (x373-((x374+x375)+x376));

	if (t75 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x377 = UINT8_MAX;
	volatile int32_t x378 = INT32_MAX;
	int32_t x380 = INT32_MIN;
	int32_t t76 = 716996045;

	t76 = (x377-((x378+x379)+x380));

	if (t76 != 257) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x381 = INT8_MIN;
	volatile uint16_t x382 = 1U;
	int8_t x383 = 10;
	int8_t x384 = 58;
	volatile int32_t t77 = 1;

	t77 = (x381-((x382+x383)+x384));

	if (t77 != -197) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x385 = INT8_MAX;
	uint16_t x386 = UINT16_MAX;
	static uint8_t x387 = UINT8_MAX;
	int32_t x388 = 198736012;
	int32_t t78 = 2436;

	t78 = (x385-((x386+x387)+x388));

	if (t78 != -198801675) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x393 = -22;
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MAX;
	uint64_t x396 = UINT64_MAX;
	static uint64_t t79 = 64377086416LLU;

	t79 = (x393-((x394+x395)+x396));

	if (t79 != 18446744073709518701LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x397 = UINT16_MAX;
	static uint64_t x398 = 15LLU;
	int16_t x400 = INT16_MIN;
	volatile uint64_t t80 = 12LLU;

	t80 = (x397-((x398+x399)+x400));

	if (t80 != 18446744069414682609LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x406 = INT16_MIN;
	uint64_t x407 = UINT64_MAX;
	int8_t x408 = 3;
	volatile uint64_t t81 = 884450262006063271LLU;

	t81 = (x405-((x406+x407)+x408));

	if (t81 != 32944LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x409 = INT8_MIN;
	uint32_t x410 = 742247396U;
	int32_t x412 = INT32_MAX;
	static volatile uint32_t t82 = 35836791U;

	t82 = (x409-((x410+x411)+x412));

	if (t82 != 1405203358U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x418 = UINT8_MAX;
	int64_t x419 = INT64_MIN;
	int32_t x420 = 1833;
	volatile int64_t t83 = 133010182LL;

	t83 = (x417-((x418+x419)+x420));

	if (t83 != 9223372036854566529LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x421 = 739U;
	uint32_t x422 = 911484859U;
	int8_t x423 = -1;
	static uint64_t x424 = 3029219638390LLU;
	uint64_t t84 = 3LLU;

	t84 = (x421-((x422+x423)+x424));

	if (t84 != 18446741043578429107LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x425 = UINT64_MAX;
	volatile int16_t x426 = INT16_MIN;
	int8_t x427 = INT8_MIN;
	static uint8_t x428 = 1U;
	volatile uint64_t t85 = 13276287LLU;

	t85 = (x425-((x426+x427)+x428));

	if (t85 != 32894LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x430 = INT8_MAX;
	static int64_t x431 = INT64_MIN;
	int64_t x432 = 2LL;
	int64_t t86 = -15409206555546405LL;

	t86 = (x429-((x430+x431)+x432));

	if (t86 != 9223372036854774911LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x433 = INT16_MIN;
	volatile uint16_t x435 = 8319U;
	uint16_t x436 = 14357U;
	int64_t t87 = 27LL;

	t87 = (x433-((x434+x435)+x436));

	if (t87 != 76027665310929LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x441 = INT64_MIN;
	volatile uint64_t x443 = 1122LLU;
	volatile uint8_t x444 = 88U;
	volatile uint64_t t88 = 16LLU;

	t88 = (x441-((x442+x443)+x444));

	if (t88 != 9223372036854774471LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x450 = UINT16_MAX;

	t89 = (x449-((x450+x451)+x452));

	if (t89 != 4294764380U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x453 = -75346;
	int16_t x454 = 22;
	uint16_t x455 = 36U;
	int8_t x456 = -1;
	int32_t t90 = -16104;

	t90 = (x453-((x454+x455)+x456));

	if (t90 != -75403) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x457 = 47;
	volatile uint8_t x458 = UINT8_MAX;
	volatile int64_t x459 = -1373437786640676309LL;
	uint32_t x460 = 312048U;
	volatile int64_t t91 = -10640LL;

	t91 = (x457-((x458+x459)+x460));

	if (t91 != 1373437786640364053LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x465 = 7;
	int32_t x466 = -1;
	int64_t x467 = INT64_MAX;
	int64_t x468 = INT64_MIN;
	int64_t t92 = 95830084752060700LL;

	t92 = (x465-((x466+x467)+x468));

	if (t92 != 9LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x469 = 0U;
	int64_t x470 = -1LL;
	int8_t x471 = INT8_MIN;
	volatile int64_t t93 = 3121820363809252LL;

	t93 = (x469-((x470+x471)+x472));

	if (t93 != -65406LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x477 = 13;
	int32_t x479 = INT32_MAX;
	static volatile uint16_t x480 = UINT16_MAX;
	int64_t t94 = -669160934947LL;

	t94 = (x477-((x478+x479)+x480));

	if (t94 != 9223372034707226639LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x481 = 8U;
	uint8_t x482 = UINT8_MAX;
	int64_t x483 = INT64_MIN;
	static int8_t x484 = 2;

	t95 = (x481-((x482+x483)+x484));

	if (t95 != 9223372036854775559LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x485 = UINT8_MAX;
	static volatile int64_t t96 = 8873924349409240LL;

	t96 = (x485-((x486+x487)+x488));

	if (t96 != 193378223512LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x489 = 26LLU;
	static int64_t x490 = INT64_MIN;
	uint32_t x492 = 1U;
	volatile uint64_t t97 = 1020168LLU;

	t97 = (x489-((x490+x491)+x492));

	if (t97 != 9223372034707292186LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x493 = 75983520LLU;
	uint16_t x496 = 476U;
	volatile uint64_t t98 = 188755LLU;

	t98 = (x493-((x494+x495)+x496));

	if (t98 != 75069024LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x497 = 207554054;
	uint8_t x498 = UINT8_MAX;
	uint16_t x500 = 154U;
	int64_t t99 = -58194128038357418LL;

	t99 = (x497-((x498+x499)+x500));

	if (t99 != 207553646LL) { NG(); } else { ; }
	
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

