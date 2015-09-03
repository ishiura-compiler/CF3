#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 94U;
int16_t x3 = 25;
static int64_t t1 = -2825377324213743043LL;
uint16_t x11 = UINT16_MAX;
uint16_t x18 = UINT16_MAX;
int32_t x20 = 337649922;
int64_t x22 = INT64_MIN;
int16_t x30 = -1;
volatile int8_t x39 = -1;
int8_t x41 = -1;
int32_t t12 = -157;
uint8_t x53 = UINT8_MAX;
int32_t x55 = -1;
int8_t x58 = INT8_MIN;
volatile int32_t t15 = -2;
int32_t x70 = INT32_MAX;
int64_t t17 = 911LL;
volatile int64_t t18 = -29545LL;
uint16_t x81 = 3U;
volatile uint16_t x87 = 726U;
int32_t x88 = INT32_MIN;
uint8_t x98 = 2U;
volatile uint32_t x99 = 867U;
int32_t x104 = -1;
static int64_t t25 = -8431064102470LL;
uint64_t x107 = 32551LLU;
static int8_t x109 = INT8_MIN;
int64_t t27 = 1037084541911LL;
int32_t x114 = INT32_MIN;
int8_t x115 = INT8_MIN;
int8_t x117 = INT8_MIN;
int64_t x119 = INT64_MIN;
int64_t t29 = 25571171238785530LL;
int64_t x129 = 14171656775777LL;
static int32_t x132 = INT32_MIN;
uint32_t x134 = 8U;
int32_t x141 = INT32_MIN;
int16_t x146 = INT16_MIN;
int8_t x147 = -2;
uint32_t t36 = 13051U;
static int16_t x160 = -1;
int16_t x164 = INT16_MIN;
static volatile uint64_t x168 = 27925095344LLU;
volatile int64_t x169 = -1614920754221917755LL;
static volatile uint16_t x171 = UINT16_MAX;
int16_t x173 = -1;
uint16_t x175 = 18233U;
volatile int32_t t43 = -98503140;
int8_t x187 = -46;
int32_t t46 = 1;
uint32_t x189 = UINT32_MAX;
volatile int32_t x200 = 0;
uint64_t t49 = 4048576LLU;
uint32_t x208 = 6U;
int32_t x232 = INT32_MAX;
int16_t x241 = INT16_MIN;
uint16_t x243 = UINT16_MAX;
int64_t x244 = 137751605984584481LL;
static uint32_t t60 = UINT32_MAX;
static int32_t x249 = INT32_MAX;
uint32_t x250 = 1358U;
int32_t x251 = 52006449;
uint32_t x252 = 379U;
uint64_t t62 = 337206638503LLU;
uint64_t t63 = UINT64_MAX;
int16_t x265 = INT16_MAX;
static uint32_t x269 = 47211801U;
int64_t t66 = -2446808332296LL;
volatile int64_t t68 = 43701726155LL;
volatile int8_t x291 = INT8_MAX;
uint64_t t71 = UINT64_MAX;
static volatile uint64_t t72 = 111479451332316601LLU;
static int64_t x297 = INT64_MAX;
volatile int64_t x300 = 44LL;
volatile int64_t t73 = INT64_MAX;
int64_t x303 = INT64_MIN;
static volatile int16_t x304 = -219;
int64_t x306 = -1338119885LL;
volatile int64_t t77 = 220840520229667LL;
uint64_t x317 = UINT64_MAX;
volatile uint32_t x319 = UINT32_MAX;
uint32_t x320 = 168U;
int8_t x328 = INT8_MIN;
volatile int64_t t80 = -1LL;
static int32_t x329 = -1;
int64_t x332 = 2415995349531802LL;
volatile uint64_t t83 = 1762017LLU;
int64_t t84 = 52LL;
int8_t x349 = -13;
static volatile uint16_t x357 = UINT16_MAX;
int8_t x358 = INT8_MIN;
int32_t x363 = 152773;
volatile int16_t x376 = INT16_MIN;
volatile int64_t x379 = 32441LL;
static int8_t x385 = INT8_MAX;
int16_t x395 = -1;
static volatile int64_t t98 = -3752279810368LL;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static int32_t x4 = -47852;
	int32_t t0 = -24;

	t0 = (x1|((x2/x3)|x4));

	if (t0 != -32769) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -1LL;
	volatile uint16_t x6 = 5029U;
	int8_t x7 = INT8_MIN;
	static uint16_t x8 = 582U;

	t1 = (x5|((x6/x7)|x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	int16_t x10 = INT16_MAX;
	uint32_t x12 = UINT32_MAX;
	uint32_t t2 = UINT32_MAX;

	t2 = (x9|((x10/x11)|x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x14 = 188297482684844889LLU;
	int16_t x15 = -14025;
	static int32_t x16 = INT32_MIN;
	uint64_t t3 = 95324064LLU;

	t3 = (x13|((x14/x15)|x16));

	if (t3 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 67U;
	uint16_t x19 = UINT16_MAX;
	int32_t t4 = -24;

	t4 = (x17|((x18/x19)|x20));

	if (t4 != 337649987) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	static volatile int64_t x23 = INT64_MIN;
	int64_t x24 = -1LL;
	static volatile int64_t t5 = -848069LL;

	t5 = (x21|((x22/x23)|x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	int16_t x26 = 2739;
	uint64_t x27 = UINT64_MAX;
	uint8_t x28 = 0U;
	uint64_t t6 = 1102701230853825LLU;

	t6 = (x25|((x26/x27)|x28));

	if (t6 != 2147483647LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 0U;
	uint16_t x31 = UINT16_MAX;
	volatile int16_t x32 = -1735;
	static int32_t t7 = -65540253;

	t7 = (x29|((x30/x31)|x32));

	if (t7 != -1735) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MIN;
	int64_t x35 = INT64_MIN;
	uint32_t x36 = UINT32_MAX;
	static int64_t t8 = 986651699133517105LL;

	t8 = (x33|((x34/x35)|x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 1535022LLU;
	static int32_t x38 = -3435;
	int32_t x40 = -1;
	uint64_t t9 = UINT64_MAX;

	t9 = (x37|((x38/x39)|x40));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = 12U;
	static volatile int8_t x43 = -1;
	volatile int32_t x44 = 293;
	int32_t t10 = 0;

	t10 = (x41|((x42/x43)|x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	int32_t x46 = INT32_MIN;
	static uint16_t x47 = UINT16_MAX;
	int16_t x48 = -1337;
	int32_t t11 = 45575;

	t11 = (x45|((x46/x47)|x48));

	if (t11 != -1337) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 11U;
	uint8_t x50 = 2U;
	static volatile int32_t x51 = 1816615;
	int8_t x52 = -1;

	t12 = (x49|((x50/x51)|x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -142593023;
	volatile uint32_t x56 = 7U;
	volatile uint32_t t13 = 1945910880U;

	t13 = (x53|((x54/x55)|x56));

	if (t13 != 142593023U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -10226552LL;
	volatile uint16_t x59 = 7U;
	volatile uint64_t x60 = 1795641167739LLU;
	uint64_t t14 = UINT64_MAX;

	t14 = (x57|((x58/x59)|x60));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 3;
	uint16_t x62 = UINT16_MAX;
	int16_t x63 = -1;
	static int8_t x64 = INT8_MAX;

	t15 = (x61|((x62/x63)|x64));

	if (t15 != -65409) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	uint64_t x66 = UINT64_MAX;
	volatile uint8_t x67 = 2U;
	uint32_t x68 = 44U;
	uint64_t t16 = 7192LLU;

	t16 = (x65|((x66/x67)|x68));

	if (t16 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -2959549712327104274LL;
	volatile uint32_t x71 = UINT32_MAX;
	static int8_t x72 = -5;

	t17 = (x69|((x70/x71)|x72));

	if (t17 != -2959549710408351745LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 60U;
	volatile int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MAX;
	static volatile int32_t x76 = INT32_MIN;

	t18 = (x73|((x74/x75)|x76));

	if (t18 != -2147483588LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = 647237;
	volatile uint8_t x78 = 16U;
	volatile int16_t x79 = INT16_MIN;
	volatile int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = 5541372;

	t19 = (x77|((x78/x79)|x80));

	if (t19 != -2146836411) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = UINT16_MAX;
	uint8_t x83 = 1U;
	int32_t x84 = INT32_MAX;
	int32_t t20 = INT32_MAX;

	t20 = (x81|((x82/x83)|x84));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MAX;
	static int16_t x86 = INT16_MAX;
	int32_t t21 = -29704;

	t21 = (x85|((x86/x87)|x88));

	if (t21 != -2147483521) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	static int8_t x90 = -8;
	uint8_t x91 = 6U;
	volatile int64_t x92 = INT64_MIN;
	static int64_t t22 = 2215232735352778855LL;

	t22 = (x89|((x90/x91)|x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = 667;
	static int8_t x94 = -3;
	volatile int32_t x95 = INT32_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t23 = 7460;

	t23 = (x93|((x94/x95)|x96));

	if (t23 != -101) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	int32_t x100 = -1;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x97|((x98/x99)|x100));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	int64_t x102 = INT64_MIN;
	int32_t x103 = INT32_MIN;

	t25 = (x101|((x102/x103)|x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -5;
	uint64_t x106 = 12504977013690620LLU;
	int64_t x108 = INT64_MIN;
	uint64_t t26 = UINT64_MAX;

	t26 = (x105|((x106/x107)|x108));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -153660LL;
	volatile int32_t x111 = INT32_MAX;
	uint16_t x112 = 2598U;

	t27 = (x109|((x110/x111)|x112));

	if (t27 != -90LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 26U;
	static uint16_t x116 = UINT16_MAX;
	volatile uint32_t t28 = 637U;

	t28 = (x113|((x114/x115)|x116));

	if (t28 != 16842751U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x118 = INT16_MIN;
	int8_t x120 = -1;

	t29 = (x117|((x118/x119)|x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1689659;
	volatile int8_t x122 = -3;
	int64_t x123 = INT64_MIN;
	volatile int64_t x124 = INT64_MAX;
	static volatile int64_t t30 = -261630463070LL;

	t30 = (x121|((x122/x123)|x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -4432LL;
	int32_t x126 = INT32_MAX;
	int32_t x127 = INT32_MIN;
	static volatile int8_t x128 = -1;
	volatile int64_t t31 = 133550720548303LL;

	t31 = (x125|((x126/x127)|x128));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = 1;
	static int16_t x131 = INT16_MIN;
	static int64_t t32 = -3407LL;

	t32 = (x129|((x130/x131)|x132));

	if (t32 != -1735301023LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = 12;
	static int32_t x135 = 1;
	volatile int32_t x136 = INT32_MIN;
	uint32_t t33 = 2218U;

	t33 = (x133|((x134/x135)|x136));

	if (t33 != 2147483660U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -10796941552350330LL;
	static int8_t x138 = 50;
	static volatile int64_t x139 = 61265LL;
	int16_t x140 = INT16_MIN;
	volatile int64_t t34 = -395754370608484LL;

	t34 = (x137|((x138/x139)|x140));

	if (t34 != -29818LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MAX;
	int8_t x143 = -4;
	static int64_t x144 = INT64_MIN;
	int64_t t35 = 113168623871330LL;

	t35 = (x141|((x142/x143)|x144));

	if (t35 != -8191LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	uint32_t x148 = 2033U;

	t36 = (x145|((x146/x147)|x148));

	if (t36 != 32767U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 10;
	static uint16_t x150 = UINT16_MAX;
	volatile int16_t x151 = INT16_MAX;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -1;

	t37 = (x149|((x150/x151)|x152));

	if (t37 != -32758) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 3;
	int16_t x154 = INT16_MAX;
	int32_t x155 = -1;
	uint8_t x156 = 31U;
	volatile int32_t t38 = -8;

	t38 = (x153|((x154/x155)|x156));

	if (t38 != -32737) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 1913;
	int32_t x158 = INT32_MAX;
	static uint32_t x159 = UINT32_MAX;
	static uint32_t t39 = UINT32_MAX;

	t39 = (x157|((x158/x159)|x160));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MAX;
	int64_t x163 = INT64_MIN;
	int64_t t40 = -5LL;

	t40 = (x161|((x162/x163)|x164));

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 25U;
	static int8_t x166 = 3;
	int32_t x167 = INT32_MAX;
	volatile uint64_t t41 = 7579LLU;

	t41 = (x165|((x166/x167)|x168));

	if (t41 != 27925095353LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = UINT8_MAX;
	volatile uint8_t x172 = 55U;
	int64_t t42 = -10LL;

	t42 = (x169|((x170/x171)|x172));

	if (t42 != -1614920754221917705LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x174 = 3;
	int8_t x176 = -1;

	t43 = (x173|((x174/x175)|x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 74;
	volatile int16_t x178 = INT16_MIN;
	uint32_t x179 = 82169U;
	int32_t x180 = 362;
	static volatile uint32_t t44 = 211U;

	t44 = (x177|((x178/x179)|x180));

	if (t44 != 52591U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 15244U;
	uint64_t x182 = 37LLU;
	int8_t x183 = 18;
	volatile uint8_t x184 = 0U;
	static uint64_t t45 = 4120881333LLU;

	t45 = (x181|((x182/x183)|x184));

	if (t45 != 15246LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	static volatile int16_t x186 = 0;
	int16_t x188 = 8902;

	t46 = (x185|((x186/x187)|x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x190 = 1808U;
	static volatile int16_t x191 = -1;
	volatile int32_t x192 = INT32_MAX;
	uint32_t t47 = UINT32_MAX;

	t47 = (x189|((x190/x191)|x192));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 49;
	uint32_t x194 = 23U;
	volatile int32_t x195 = -1;
	uint8_t x196 = 18U;
	uint32_t t48 = 816577U;

	t48 = (x193|((x194/x195)|x196));

	if (t48 != 51U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 3;
	volatile int8_t x198 = 6;
	uint64_t x199 = 1092488125373290LLU;

	t49 = (x197|((x198/x199)|x200));

	if (t49 != 3LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = INT8_MIN;
	int16_t x202 = -447;
	int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -30315;

	t50 = (x201|((x202/x203)|x204));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = -6LL;
	uint32_t x207 = UINT32_MAX;
	int64_t t51 = 0LL;

	t51 = (x205|((x206/x207)|x208));

	if (t51 != -2147483642LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	int64_t x210 = -1098804786322762LL;
	static int16_t x211 = -971;
	static int8_t x212 = INT8_MIN;
	int64_t t52 = -3422940778LL;

	t52 = (x209|((x210/x211)|x212));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	int16_t x214 = -956;
	static int8_t x215 = -1;
	int64_t x216 = INT64_MAX;
	int64_t t53 = -3157413787045123755LL;

	t53 = (x213|((x214/x215)|x216));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 540U;
	uint64_t x218 = 191783966636187LLU;
	uint64_t x219 = 12287073914765LLU;
	int8_t x220 = INT8_MIN;
	volatile uint64_t t54 = 1127253474191LLU;

	t54 = (x217|((x218/x219)|x220));

	if (t54 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 30U;
	volatile int8_t x222 = INT8_MAX;
	int32_t x223 = -1;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t55 = 920LL;

	t55 = (x221|((x222/x223)|x224));

	if (t55 != -97LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 121797402;
	uint32_t x226 = UINT32_MAX;
	volatile int32_t x227 = -1;
	static uint64_t x228 = UINT64_MAX;
	uint64_t t56 = UINT64_MAX;

	t56 = (x225|((x226/x227)|x228));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = -1;
	uint64_t x230 = UINT64_MAX;
	volatile int16_t x231 = -1;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x229|((x230/x231)|x232));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	volatile int32_t x234 = 1581338;
	static uint16_t x235 = UINT16_MAX;
	uint8_t x236 = UINT8_MAX;
	static volatile int32_t t58 = 3;

	t58 = (x233|((x234/x235)|x236));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x242 = INT8_MIN;
	volatile int64_t t59 = 2038LL;

	t59 = (x241|((x242/x243)|x244));

	if (t59 != -7391LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x245 = INT8_MAX;
	uint8_t x246 = 0U;
	uint8_t x247 = UINT8_MAX;
	static uint32_t x248 = UINT32_MAX;

	t60 = (x245|((x246/x247)|x248));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t t61 = 3U;

	t61 = (x249|((x250/x251)|x252));

	if (t61 != 2147483647U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = INT32_MIN;
	static int32_t x254 = 434460241;
	uint32_t x255 = 11438U;
	static volatile uint64_t x256 = 455093998099LLU;

	t62 = (x253|((x254/x255)|x256));

	if (t62 != 18446744073537050207LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -1;
	static uint64_t x258 = 2097LLU;
	uint16_t x259 = 7556U;
	volatile int64_t x260 = -3684843LL;

	t63 = (x257|((x258/x259)|x260));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x261 = UINT16_MAX;
	volatile int64_t x262 = 4511998079143211214LL;
	uint16_t x263 = 8U;
	int64_t x264 = INT64_MIN;
	volatile int64_t t64 = 563614893981141397LL;

	t64 = (x261|((x262/x263)|x264));

	if (t64 != -8659372276961837057LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x266 = INT32_MAX;
	int64_t x267 = 15LL;
	int8_t x268 = INT8_MAX;
	static int64_t t65 = 413580716059485903LL;

	t65 = (x265|((x266/x267)|x268));

	if (t65 != 143196159LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x270 = -1;
	static int64_t x271 = INT64_MIN;
	int32_t x272 = -1;

	t66 = (x269|((x270/x271)|x272));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = INT64_MIN;
	int32_t x274 = 406163931;
	static uint64_t x275 = UINT64_MAX;
	int8_t x276 = INT8_MIN;
	uint64_t t67 = 1769598032139541LLU;

	t67 = (x273|((x274/x275)|x276));

	if (t67 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = -252594996333828LL;
	int16_t x278 = -1;
	static int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MIN;

	t68 = (x277|((x278/x279)|x280));

	if (t68 != -252594996333828LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = -335961965LL;
	int32_t x282 = INT32_MIN;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = INT64_MAX;
	volatile int64_t t69 = -73609922575900673LL;

	t69 = (x281|((x282/x283)|x284));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = -235;
	uint16_t x286 = 3U;
	volatile uint32_t x287 = 59829U;
	volatile uint16_t x288 = 7247U;
	volatile uint32_t t70 = 0U;

	t70 = (x285|((x286/x287)|x288));

	if (t70 != 4294967135U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x289 = INT64_MIN;
	static int8_t x290 = INT8_MIN;
	uint64_t x292 = UINT64_MAX;

	t71 = (x289|((x290/x291)|x292));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = 61535693598LLU;
	uint8_t x294 = UINT8_MAX;
	uint16_t x295 = 7817U;
	int32_t x296 = INT32_MAX;

	t72 = (x293|((x294/x295)|x296));

	if (t72 != 62277025791LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x298 = 0LL;
	int16_t x299 = -25;

	t73 = (x297|((x298/x299)|x300));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int64_t t74 = 28LL;

	t74 = (x301|((x302/x303)|x304));

	if (t74 != -219LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = 6324756;
	static volatile int64_t x307 = INT64_MIN;
	uint64_t x308 = 1LLU;
	volatile uint64_t t75 = 24LLU;

	t75 = (x305|((x306/x307)|x308));

	if (t75 != 6324757LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = 0;
	static int32_t x310 = INT32_MAX;
	int32_t x311 = 446881;
	int8_t x312 = 0;
	static volatile int32_t t76 = -15867529;

	t76 = (x309|((x310/x311)|x312));

	if (t76 != 4805) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = 5517;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MIN;
	int8_t x316 = INT8_MIN;

	t77 = (x313|((x314/x315)|x316));

	if (t77 != -115LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x318 = UINT64_MAX;
	uint64_t t78 = UINT64_MAX;

	t78 = (x317|((x318/x319)|x320));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = 1156645LL;
	int64_t x322 = -105475LL;
	int8_t x323 = INT8_MAX;
	uint8_t x324 = 5U;
	int64_t t79 = 428139635LL;

	t79 = (x321|((x322/x323)|x324));

	if (t79 != -281LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = INT64_MIN;
	int64_t x327 = INT64_MAX;

	t80 = (x325|((x326/x327)|x328));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x330 = INT64_MIN;
	volatile int8_t x331 = -60;
	volatile int64_t t81 = 3457LL;

	t81 = (x329|((x330/x331)|x332));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x333 = 5U;
	int64_t x334 = INT64_MAX;
	uint8_t x335 = 10U;
	uint64_t x336 = 32910243937LLU;
	volatile uint64_t t82 = 382742532488009LLU;

	t82 = (x333|((x334/x335)|x336));

	if (t82 != 922337217125219565LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = -693;
	uint64_t x338 = 111123140340213LLU;
	int64_t x339 = -1LL;
	static uint16_t x340 = 6390U;

	t83 = (x337|((x338/x339)|x340));

	if (t83 != 18446744073709551103LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = -1LL;
	volatile int32_t x343 = INT32_MAX;
	static volatile uint16_t x344 = 616U;

	t84 = (x341|((x342/x343)|x344));

	if (t84 != -24LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = -1;
	int64_t x346 = 492LL;
	volatile uint32_t x347 = 95U;
	int16_t x348 = INT16_MIN;
	int64_t t85 = 40LL;

	t85 = (x345|((x346/x347)|x348));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x350 = INT32_MIN;
	int64_t x351 = 10057602LL;
	uint8_t x352 = UINT8_MAX;
	int64_t t86 = -89866LL;

	t86 = (x349|((x350/x351)|x352));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x359 = UINT16_MAX;
	static int64_t x360 = -1LL;
	volatile int64_t t87 = -53523790911LL;

	t87 = (x357|((x358/x359)|x360));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = INT32_MAX;
	volatile uint64_t x362 = UINT64_MAX;
	int8_t x364 = INT8_MIN;
	uint64_t t88 = UINT64_MAX;

	t88 = (x361|((x362/x363)|x364));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = INT32_MIN;
	uint8_t x367 = 7U;
	int8_t x368 = INT8_MAX;
	volatile int32_t t89 = 331423534;

	t89 = (x365|((x366/x367)|x368));

	if (t89 != -306783233) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x369 = INT16_MIN;
	volatile int64_t x370 = INT64_MAX;
	static volatile uint16_t x371 = 206U;
	int8_t x372 = INT8_MIN;
	volatile int64_t t90 = 10708992513271334LL;

	t90 = (x369|((x370/x371)|x372));

	if (t90 != -109LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x373 = -1;
	static volatile uint16_t x374 = 41U;
	static uint32_t x375 = 3345U;
	uint32_t t91 = UINT32_MAX;

	t91 = (x373|((x374/x375)|x376));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x377 = 8948U;
	int32_t x378 = 10;
	static int64_t x380 = INT64_MIN;
	volatile int64_t t92 = -45922586LL;

	t92 = (x377|((x378/x379)|x380));

	if (t92 != -9223372036854766860LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x381 = INT64_MIN;
	static int32_t x382 = 13954;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	int64_t t93 = 1LL;

	t93 = (x381|((x382/x383)|x384));

	if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x386 = 0;
	static int32_t x387 = 663;
	volatile int16_t x388 = -4021;
	volatile int32_t t94 = -92706;

	t94 = (x385|((x386/x387)|x388));

	if (t94 != -3969) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x389 = 11;
	uint32_t x390 = UINT32_MAX;
	uint16_t x391 = 3296U;
	int64_t x392 = INT64_MIN;
	volatile int64_t t95 = 417748174888097076LL;

	t95 = (x389|((x390/x391)|x392));

	if (t95 != -9223372036853472721LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x393 = 22;
	int16_t x394 = INT16_MIN;
	int64_t x396 = -1LL;
	volatile int64_t t96 = -62136LL;

	t96 = (x393|((x394/x395)|x396));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x397 = 16;
	int16_t x398 = 6216;
	static int16_t x399 = -1;
	static int32_t x400 = -236715;
	int32_t t97 = -284;

	t97 = (x397|((x398/x399)|x400));

	if (t97 != -6147) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x401 = -17LL;
	volatile int64_t x402 = -100642259LL;
	int8_t x403 = INT8_MIN;
	int64_t x404 = -1LL;

	t98 = (x401|((x402/x403)|x404));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = INT16_MIN;
	int8_t x406 = -1;
	int8_t x407 = -4;
	int8_t x408 = -28;
	static volatile int32_t t99 = -316367;

	t99 = (x405|((x406/x407)|x408));

	if (t99 != -28) { NG(); } else { ; }
	
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

