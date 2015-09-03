#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = 12951576;
uint8_t x19 = UINT8_MAX;
uint8_t x20 = 2U;
static int16_t x28 = INT16_MIN;
volatile int32_t t6 = -159;
int16_t x32 = INT16_MIN;
static volatile int32_t x40 = 117;
volatile int32_t t8 = 113158;
uint32_t x42 = UINT32_MAX;
uint64_t x44 = 8442058173LLU;
int64_t x46 = INT64_MIN;
uint16_t x47 = 92U;
static volatile uint32_t t11 = 62555U;
int16_t x55 = INT16_MIN;
static volatile int16_t x60 = -4;
uint16_t x66 = 1U;
int64_t x72 = -1LL;
volatile uint32_t x76 = 82736U;
uint8_t x77 = 6U;
int8_t x78 = 23;
uint64_t x80 = UINT64_MAX;
int8_t x87 = 47;
int32_t x93 = -1;
int32_t x96 = INT32_MIN;
int32_t t22 = INT32_MAX;
uint16_t x98 = 6722U;
volatile uint64_t t23 = 34323681580193LLU;
volatile int64_t x101 = 266840293448505LL;
uint64_t x104 = 722LLU;
int64_t x109 = -1LL;
uint32_t x112 = 474781378U;
static int16_t x114 = -1;
uint64_t x115 = UINT64_MAX;
int16_t x118 = -11330;
volatile uint32_t t28 = 1962904635U;
uint8_t x121 = UINT8_MAX;
int16_t x123 = INT16_MIN;
volatile int32_t t29 = -483316627;
int8_t x147 = -1;
int64_t x151 = 143737346LL;
static int32_t t35 = -893;
volatile uint16_t x167 = 653U;
int16_t x174 = INT16_MAX;
static int32_t t42 = 0;
static uint64_t t43 = 1342275LLU;
int8_t x197 = -1;
static int64_t x200 = 2524546LL;
static int64_t t44 = 37427885367194LL;
uint8_t x205 = UINT8_MAX;
int32_t x206 = -2015713;
uint8_t x209 = UINT8_MAX;
static int16_t x210 = INT16_MAX;
volatile int32_t t47 = 8770347;
int16_t x215 = 23;
uint64_t x224 = UINT64_MAX;
uint64_t t50 = 198335LLU;
uint64_t x231 = 132568811030800LLU;
volatile uint8_t x232 = UINT8_MAX;
uint64_t x233 = 10820065LLU;
int32_t x239 = INT32_MIN;
int64_t x243 = INT64_MIN;
volatile int64_t t54 = -1LL;
uint16_t x249 = 3U;
static int16_t x252 = INT16_MAX;
uint16_t x253 = 7U;
int32_t x259 = INT32_MAX;
uint32_t x260 = 804U;
int64_t x267 = -1LL;
static volatile int32_t t59 = -188948;
int16_t x277 = 48;
volatile int32_t t61 = 5;
int32_t t63 = 140000905;
static int64_t x294 = 720235683472793582LL;
int32_t x296 = INT32_MIN;
uint32_t x298 = 50224U;
int16_t x301 = INT16_MAX;
int16_t x306 = INT16_MIN;
int32_t x310 = -1;
int16_t x318 = INT16_MAX;
volatile int64_t t71 = -3688263LL;
volatile uint64_t t73 = 1597696413812LLU;
static int8_t x337 = -1;
int32_t x340 = INT32_MIN;
int64_t x345 = 139958557761331LL;
int8_t x366 = INT8_MIN;
static volatile uint32_t t84 = 716355971U;
int8_t x382 = INT8_MIN;
int64_t x384 = INT64_MIN;
volatile int64_t t85 = 861458397507822LL;
volatile uint16_t x387 = 1U;
int32_t t86 = 27751581;
volatile uint64_t x389 = UINT64_MAX;
uint32_t x395 = 243U;
volatile uint64_t t88 = 1658906203LLU;
uint64_t x399 = 19314902LLU;
uint8_t x412 = 0U;
static volatile uint16_t x416 = UINT16_MAX;
static int32_t t93 = 2450214;
volatile uint16_t x425 = UINT16_MAX;
static int32_t x426 = -1;
volatile int64_t t95 = -57523957LL;
int8_t x435 = 0;
int8_t x445 = INT8_MAX;


void f0(void) {
	int16_t x1 = 356;
	int32_t x2 = 885;
	volatile int16_t x3 = INT16_MIN;
	volatile int32_t x4 = -824;
	static int32_t t0 = -4655;

	t0 = (x1-((x2==x3)|x4));

	if (t0 != 1180) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	static uint16_t x6 = 168U;
	uint16_t x7 = UINT16_MAX;
	volatile int32_t x8 = INT32_MAX;
	static volatile int64_t t1 = -10001401206468854LL;

	t1 = (x5-((x6==x7)|x8));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int64_t x11 = -7966915244311066LL;
	volatile int64_t x12 = -23LL;
	volatile int64_t t2 = -47744704783726734LL;

	t2 = (x9-((x10==x11)|x12));

	if (t2 != 12951599LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = -1;
	uint8_t x15 = UINT8_MAX;
	int32_t x16 = -1;
	static volatile int32_t t3 = -358858289;

	t3 = (x13-((x14==x15)|x16));

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 22U;
	int8_t x18 = 3;
	int32_t t4 = -2126;

	t4 = (x17-((x18==x19)|x20));

	if (t4 != 20) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 459U;
	uint32_t x22 = UINT32_MAX;
	uint8_t x23 = 4U;
	volatile int32_t x24 = INT32_MAX;
	static int32_t t5 = 364;

	t5 = (x21-((x22==x23)|x24));

	if (t5 != -2147483188) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint16_t x26 = 0U;
	int16_t x27 = -1;

	t6 = (x25-((x26==x27)|x28));

	if (t6 != -2147450880) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 256415393U;
	uint8_t x30 = 18U;
	int64_t x31 = INT64_MIN;
	uint32_t t7 = 241850U;

	t7 = (x29-((x30==x31)|x32));

	if (t7 != 256448161U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 1865U;
	int32_t x38 = -1;
	int64_t x39 = -7616LL;

	t8 = (x37-((x38==x39)|x40));

	if (t8 != 1748) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	int64_t x43 = INT64_MIN;
	uint64_t t9 = 4137869017790LLU;

	t9 = (x41-((x42==x43)|x44));

	if (t9 != 18446744065267493442LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	uint8_t x48 = 98U;
	int32_t t10 = -3632;

	t10 = (x45-((x46==x47)|x48));

	if (t10 != 2147483549) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x49 = 28;
	int8_t x50 = -1;
	uint64_t x51 = 3848065LLU;
	uint32_t x52 = 28427U;

	t11 = (x49-((x50==x51)|x52));

	if (t11 != 4294938897U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MAX;
	volatile int64_t x54 = -1LL;
	uint64_t x56 = 3232LLU;
	uint64_t t12 = 236264103284702LLU;

	t12 = (x53-((x54==x55)|x56));

	if (t12 != 9223372036854772575LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	uint32_t x58 = 606U;
	uint64_t x59 = UINT64_MAX;
	static int32_t t13 = -118371205;

	t13 = (x57-((x58==x59)|x60));

	if (t13 != -32764) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MAX;
	int16_t x62 = 414;
	volatile int16_t x63 = -1;
	int64_t x64 = -1LL;
	static int64_t t14 = 3420090491LL;

	t14 = (x61-((x62==x63)|x64));

	if (t14 != 32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	uint8_t x67 = 1U;
	uint64_t x68 = 17LLU;
	uint64_t t15 = 447497968447LLU;

	t15 = (x65-((x66==x67)|x68));

	if (t15 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x69 = 2401U;
	uint8_t x70 = 1U;
	volatile int64_t x71 = INT64_MAX;
	int64_t t16 = 11222426933LL;

	t16 = (x69-((x70==x71)|x72));

	if (t16 != 2402LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 443U;
	static volatile int64_t x74 = INT64_MAX;
	uint16_t x75 = 17U;
	volatile uint32_t t17 = 292881500U;

	t17 = (x73-((x74==x75)|x76));

	if (t17 != 4294885003U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x79 = INT8_MIN;
	uint64_t t18 = 4374428313331361804LLU;

	t18 = (x77-((x78==x79)|x80));

	if (t18 != 7LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	static volatile int32_t x82 = INT32_MAX;
	int8_t x83 = INT8_MIN;
	volatile uint8_t x84 = UINT8_MAX;
	uint64_t t19 = 108114881954LLU;

	t19 = (x81-((x82==x83)|x84));

	if (t19 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 0;
	static volatile uint8_t x86 = 17U;
	int8_t x88 = -17;
	volatile int32_t t20 = -676144;

	t20 = (x85-((x86==x87)|x88));

	if (t20 != 17) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x89 = 739U;
	int64_t x90 = INT64_MAX;
	uint64_t x91 = 393492452LLU;
	static int16_t x92 = 1344;
	volatile int32_t t21 = 615202;

	t21 = (x89-((x90==x91)|x92));

	if (t21 != -605) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x94 = 11;
	int16_t x95 = -246;

	t22 = (x93-((x94==x95)|x96));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	int32_t x99 = INT32_MAX;
	static volatile uint64_t x100 = 1345849LLU;

	t23 = (x97-((x98==x99)|x100));

	if (t23 != 18446744073708271302LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x102 = UINT32_MAX;
	uint32_t x103 = UINT32_MAX;
	volatile uint64_t t24 = 2380696932660143957LLU;

	t24 = (x101-((x102==x103)|x104));

	if (t24 != 266840293447782LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = UINT8_MAX;
	int16_t x106 = -748;
	int16_t x107 = 1843;
	static int8_t x108 = 0;
	int32_t t25 = -9805;

	t25 = (x105-((x106==x107)|x108));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = INT32_MAX;
	volatile int8_t x111 = 42;
	volatile int64_t t26 = -31630LL;

	t26 = (x109-((x110==x111)|x112));

	if (t26 != -474781379LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = -1;
	int16_t x116 = INT16_MAX;
	static volatile int32_t t27 = 0;

	t27 = (x113-((x114==x115)|x116));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 17457U;
	volatile int16_t x119 = 1;
	volatile int8_t x120 = INT8_MIN;

	t28 = (x117-((x118==x119)|x120));

	if (t28 != 17585U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x122 = 276908341916982LL;
	int8_t x124 = INT8_MIN;

	t29 = (x121-((x122==x123)|x124));

	if (t29 != 383) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -222;
	int16_t x126 = INT16_MIN;
	static volatile uint32_t x127 = 8489861U;
	int8_t x128 = -1;
	static int32_t t30 = -36;

	t30 = (x125-((x126==x127)|x128));

	if (t30 != -221) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	volatile int32_t x130 = INT32_MAX;
	static int16_t x131 = 962;
	int8_t x132 = -1;
	int32_t t31 = 38;

	t31 = (x129-((x130==x131)|x132));

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 367U;
	uint32_t x134 = 108074368U;
	static int32_t x135 = INT32_MIN;
	uint32_t x136 = 157U;
	volatile uint32_t t32 = 104982U;

	t32 = (x133-((x134==x135)|x136));

	if (t32 != 210U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	static int64_t x138 = INT64_MAX;
	int16_t x139 = INT16_MIN;
	int8_t x140 = 1;
	int32_t t33 = 0;

	t33 = (x137-((x138==x139)|x140));

	if (t33 != -129) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x145 = -1;
	static volatile int64_t x146 = INT64_MAX;
	uint64_t x148 = 424180LLU;
	uint64_t t34 = 16320865482725LLU;

	t34 = (x145-((x146==x147)|x148));

	if (t34 != 18446744073709127435LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -5663;
	volatile uint8_t x150 = 21U;
	int32_t x152 = -1;

	t35 = (x149-((x150==x151)|x152));

	if (t35 != -5662) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = INT16_MAX;
	int8_t x158 = -1;
	int32_t x159 = INT32_MAX;
	uint64_t x160 = 484882333743LLU;
	volatile uint64_t t36 = 89817674LLU;

	t36 = (x157-((x158==x159)|x160));

	if (t36 != 18446743588827250640LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = 2U;
	uint8_t x166 = 39U;
	static uint16_t x168 = 1U;
	int32_t t37 = -2;

	t37 = (x165-((x166==x167)|x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MIN;
	static volatile uint8_t x170 = 0U;
	int32_t x171 = INT32_MAX;
	int16_t x172 = INT16_MIN;
	int64_t t38 = 2261745538630LL;

	t38 = (x169-((x170==x171)|x172));

	if (t38 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = 213;
	int16_t x175 = -6397;
	uint16_t x176 = 496U;
	int32_t t39 = -6076635;

	t39 = (x173-((x174==x175)|x176));

	if (t39 != -283) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = -1;
	uint32_t x178 = UINT32_MAX;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	int64_t t40 = INT64_MAX;

	t40 = (x177-((x178==x179)|x180));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = UINT64_MAX;
	static uint8_t x186 = UINT8_MAX;
	static volatile int16_t x187 = INT16_MAX;
	int16_t x188 = -8;
	volatile uint64_t t41 = 33741075797LLU;

	t41 = (x185-((x186==x187)|x188));

	if (t41 != 7LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = UINT16_MAX;
	int8_t x190 = INT8_MIN;
	static int32_t x191 = INT32_MIN;
	int16_t x192 = -105;

	t42 = (x189-((x190==x191)|x192));

	if (t42 != 65640) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x193 = -1;
	volatile int32_t x194 = INT32_MIN;
	int8_t x195 = INT8_MAX;
	uint64_t x196 = 1911185549574164LLU;

	t43 = (x193-((x194==x195)|x196));

	if (t43 != 18444832888159977451LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x198 = 13;
	uint8_t x199 = 2U;

	t44 = (x197-((x198==x199)|x200));

	if (t44 != -2524547LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = 26U;
	int16_t x202 = -1;
	int32_t x203 = INT32_MAX;
	int16_t x204 = -1;
	static volatile int32_t t45 = -43291451;

	t45 = (x201-((x202==x203)|x204));

	if (t45 != 27) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x207 = INT16_MIN;
	uint16_t x208 = 49U;
	volatile int32_t t46 = 1410;

	t46 = (x205-((x206==x207)|x208));

	if (t46 != 206) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x211 = 25;
	static int32_t x212 = -151189064;

	t47 = (x209-((x210==x211)|x212));

	if (t47 != 151189319) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = -131288725350469690LL;
	volatile uint64_t x214 = UINT64_MAX;
	static int8_t x216 = INT8_MIN;
	int64_t t48 = -195497096LL;

	t48 = (x213-((x214==x215)|x216));

	if (t48 != -131288725350469562LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x217 = UINT8_MAX;
	uint64_t x218 = UINT64_MAX;
	volatile int64_t x219 = -667LL;
	uint64_t x220 = 11559LLU;
	uint64_t t49 = 213747LLU;

	t49 = (x217-((x218==x219)|x220));

	if (t49 != 18446744073709540312LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 4U;
	static uint64_t x222 = 184LLU;
	int32_t x223 = INT32_MIN;

	t50 = (x221-((x222==x223)|x224));

	if (t50 != 5LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x229 = 3395U;
	int8_t x230 = INT8_MIN;
	static uint32_t t51 = 432U;

	t51 = (x229-((x230==x231)|x232));

	if (t51 != 3140U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x234 = INT16_MIN;
	uint32_t x235 = 3725U;
	volatile int16_t x236 = INT16_MIN;
	uint64_t t52 = 4192633170408687LLU;

	t52 = (x233-((x234==x235)|x236));

	if (t52 != 10852833LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x237 = UINT8_MAX;
	int16_t x238 = INT16_MIN;
	int64_t x240 = 45618LL;
	volatile int64_t t53 = 5188643676LL;

	t53 = (x237-((x238==x239)|x240));

	if (t53 != -45363LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = UINT16_MAX;
	int16_t x242 = -2242;
	int64_t x244 = INT64_MAX;

	t54 = (x241-((x242==x243)|x244));

	if (t54 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x250 = 0;
	static int64_t x251 = -1LL;
	volatile int32_t t55 = 3;

	t55 = (x249-((x250==x251)|x252));

	if (t55 != -32764) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x254 = 17;
	volatile int16_t x255 = INT16_MIN;
	static int16_t x256 = INT16_MAX;
	volatile int32_t t56 = 10;

	t56 = (x253-((x254==x255)|x256));

	if (t56 != -32760) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x258 = 743;
	volatile uint32_t t57 = 645754U;

	t57 = (x257-((x258==x259)|x260));

	if (t57 != 4294966491U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x261 = INT8_MAX;
	volatile uint16_t x262 = 7815U;
	uint32_t x263 = 67879635U;
	static int16_t x264 = -1303;
	int32_t t58 = -124035;

	t58 = (x261-((x262==x263)|x264));

	if (t58 != 1430) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = -6903;
	int8_t x266 = INT8_MAX;
	int32_t x268 = 88257396;

	t59 = (x265-((x266==x267)|x268));

	if (t59 != -88264299) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = INT16_MIN;
	volatile int16_t x271 = INT16_MAX;
	static int32_t x272 = INT32_MIN;
	int64_t t60 = -127248LL;

	t60 = (x269-((x270==x271)|x272));

	if (t60 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x278 = -1;
	volatile int32_t x279 = -1;
	static int32_t x280 = -1;

	t61 = (x277-((x278==x279)|x280));

	if (t61 != 49) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x281 = 484975349U;
	static uint16_t x282 = UINT16_MAX;
	int16_t x283 = INT16_MAX;
	volatile uint32_t x284 = 6953261U;
	volatile uint32_t t62 = 781U;

	t62 = (x281-((x282==x283)|x284));

	if (t62 != 478022088U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x285 = 1;
	int32_t x286 = -1;
	int16_t x287 = -817;
	uint8_t x288 = UINT8_MAX;

	t63 = (x285-((x286==x287)|x288));

	if (t63 != -254) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = -63;
	int8_t x290 = INT8_MIN;
	int16_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t64 = 44659682;

	t64 = (x289-((x290==x291)|x292));

	if (t64 != 32705) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x293 = UINT64_MAX;
	volatile int16_t x295 = INT16_MIN;
	static uint64_t t65 = 14097361719165LLU;

	t65 = (x293-((x294==x295)|x296));

	if (t65 != 2147483647LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = INT64_MIN;
	int32_t x299 = 4051;
	int32_t x300 = INT32_MIN;
	volatile int64_t t66 = -82516924506458903LL;

	t66 = (x297-((x298==x299)|x300));

	if (t66 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x302 = INT8_MIN;
	uint64_t x303 = UINT64_MAX;
	uint32_t x304 = 139604U;
	volatile uint32_t t67 = 7595U;

	t67 = (x301-((x302==x303)|x304));

	if (t67 != 4294860459U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x305 = INT64_MAX;
	static int64_t x307 = -1LL;
	static uint32_t x308 = 1791065004U;
	volatile int64_t t68 = -55575591180810LL;

	t68 = (x305-((x306==x307)|x308));

	if (t68 != 9223372035063710803LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x309 = 1U;
	int64_t x311 = INT64_MIN;
	static uint64_t x312 = 39209561541660LLU;
	volatile uint64_t t69 = 3909LLU;

	t69 = (x309-((x310==x311)|x312));

	if (t69 != 18446704864148009957LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = INT64_MIN;
	volatile uint32_t x314 = 17U;
	int8_t x315 = INT8_MAX;
	int8_t x316 = INT8_MIN;
	volatile int64_t t70 = 219674LL;

	t70 = (x313-((x314==x315)|x316));

	if (t70 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x317 = -1LL;
	int8_t x319 = -7;
	static uint16_t x320 = 372U;

	t71 = (x317-((x318==x319)|x320));

	if (t71 != -373LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MAX;
	volatile int8_t x322 = INT8_MAX;
	uint16_t x323 = 491U;
	int8_t x324 = -13;
	int32_t t72 = 1044609;

	t72 = (x321-((x322==x323)|x324));

	if (t72 != 32780) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x325 = UINT64_MAX;
	volatile int64_t x326 = -3816853LL;
	volatile uint16_t x327 = 11U;
	uint16_t x328 = UINT16_MAX;

	t73 = (x325-((x326==x327)|x328));

	if (t73 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x329 = UINT8_MAX;
	uint8_t x330 = 81U;
	uint64_t x331 = 0LLU;
	static uint16_t x332 = 6U;
	int32_t t74 = 119882;

	t74 = (x329-((x330==x331)|x332));

	if (t74 != 249) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = -452616;
	int16_t x334 = 60;
	int32_t x335 = -1;
	volatile int32_t x336 = -12;
	volatile int32_t t75 = 3843827;

	t75 = (x333-((x334==x335)|x336));

	if (t75 != -452604) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x338 = 41U;
	static int8_t x339 = -1;
	static volatile int32_t t76 = INT32_MAX;

	t76 = (x337-((x338==x339)|x340));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x346 = 0U;
	uint32_t x347 = 0U;
	uint32_t x348 = UINT32_MAX;
	volatile int64_t t77 = -3910613542176LL;

	t77 = (x345-((x346==x347)|x348));

	if (t77 != 139954262794036LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x349 = INT32_MAX;
	uint64_t x350 = UINT64_MAX;
	static volatile int16_t x351 = -5899;
	int64_t x352 = 1LL;
	static volatile int64_t t78 = 15LL;

	t78 = (x349-((x350==x351)|x352));

	if (t78 != 2147483646LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = INT32_MAX;
	volatile int32_t x358 = INT32_MIN;
	static int8_t x359 = -1;
	uint8_t x360 = UINT8_MAX;
	static int32_t t79 = 1;

	t79 = (x357-((x358==x359)|x360));

	if (t79 != 2147483392) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	volatile uint8_t x363 = 12U;
	int8_t x364 = INT8_MIN;
	int32_t t80 = 50265;

	t80 = (x361-((x362==x363)|x364));

	if (t80 != -32640) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = INT16_MIN;
	volatile int16_t x367 = 40;
	uint32_t x368 = 914813U;
	volatile uint32_t t81 = 0U;

	t81 = (x365-((x366==x367)|x368));

	if (t81 != 4294019715U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x369 = 1U;
	int64_t x370 = INT64_MIN;
	volatile int8_t x371 = -1;
	volatile int32_t x372 = -1;
	static volatile int32_t t82 = -426;

	t82 = (x369-((x370==x371)|x372));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = 527678809288066564LL;
	volatile uint64_t x374 = 1114998447LLU;
	int16_t x375 = INT16_MAX;
	uint32_t x376 = 10713477U;
	static volatile int64_t t83 = -1561454949536542LL;

	t83 = (x373-((x374==x375)|x376));

	if (t83 != 527678809277353087LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x377 = 245134U;
	int64_t x378 = INT64_MAX;
	int64_t x379 = -1LL;
	int16_t x380 = INT16_MIN;

	t84 = (x377-((x378==x379)|x380));

	if (t84 != 277902U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = INT32_MIN;
	int32_t x383 = INT32_MIN;

	t85 = (x381-((x382==x383)|x384));

	if (t85 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = 1;
	int8_t x386 = INT8_MAX;
	int16_t x388 = INT16_MIN;

	t86 = (x385-((x386==x387)|x388));

	if (t86 != 32769) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x390 = INT16_MIN;
	volatile uint8_t x391 = 20U;
	static uint32_t x392 = 43528U;
	uint64_t t87 = 56647903531LLU;

	t87 = (x389-((x390==x391)|x392));

	if (t87 != 18446744073709508087LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = INT16_MAX;
	int32_t x394 = -1;
	uint64_t x396 = 4227LLU;

	t88 = (x393-((x394==x395)|x396));

	if (t88 != 28540LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = INT8_MAX;
	static volatile uint32_t x398 = UINT32_MAX;
	int16_t x400 = -1;
	int32_t t89 = -3398;

	t89 = (x397-((x398==x399)|x400));

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x401 = 59281193732776733LLU;
	int32_t x402 = 897463506;
	uint16_t x403 = 489U;
	uint8_t x404 = 22U;
	volatile uint64_t t90 = 485542532093LLU;

	t90 = (x401-((x402==x403)|x404));

	if (t90 != 59281193732776711LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x409 = UINT8_MAX;
	int32_t x410 = -1;
	static int32_t x411 = INT32_MIN;
	int32_t t91 = 1;

	t91 = (x409-((x410==x411)|x412));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = 1;
	int32_t x414 = 1956601;
	uint64_t x415 = 12LLU;
	volatile int32_t t92 = 3;

	t92 = (x413-((x414==x415)|x416));

	if (t92 != -65534) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x417 = INT8_MAX;
	int8_t x418 = 43;
	int16_t x419 = -1;
	uint16_t x420 = 146U;

	t93 = (x417-((x418==x419)|x420));

	if (t93 != -19) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x421 = UINT16_MAX;
	int16_t x422 = -1;
	int16_t x423 = INT16_MAX;
	uint32_t x424 = 643U;
	uint32_t t94 = 7U;

	t94 = (x421-((x422==x423)|x424));

	if (t94 != 64892U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x427 = 60U;
	static int64_t x428 = -4257857544LL;

	t95 = (x425-((x426==x427)|x428));

	if (t95 != 4257923079LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x429 = INT8_MIN;
	int8_t x430 = INT8_MIN;
	int16_t x431 = INT16_MAX;
	int32_t x432 = -1;
	int32_t t96 = -5;

	t96 = (x429-((x430==x431)|x432));

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = INT8_MIN;
	volatile int64_t x434 = 959854905055692LL;
	uint8_t x436 = 117U;
	static volatile int32_t t97 = 749;

	t97 = (x433-((x434==x435)|x436));

	if (t97 != -245) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x441 = -32;
	int8_t x442 = 0;
	uint8_t x443 = UINT8_MAX;
	static int16_t x444 = -1;
	volatile int32_t t98 = -105729162;

	t98 = (x441-((x442==x443)|x444));

	if (t98 != -31) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x446 = -533;
	int32_t x447 = INT32_MAX;
	int16_t x448 = INT16_MIN;
	static volatile int32_t t99 = 0;

	t99 = (x445-((x446==x447)|x448));

	if (t99 != 32895) { NG(); } else { ; }
	
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

