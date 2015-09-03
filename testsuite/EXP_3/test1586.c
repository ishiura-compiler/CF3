#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1497;
int64_t x9 = INT64_MIN;
static volatile int8_t x11 = 12;
volatile uint32_t x23 = UINT32_MAX;
int32_t x24 = -1;
int8_t x27 = 0;
int16_t x28 = INT16_MIN;
static int32_t t6 = 2064;
uint32_t x30 = 192182U;
volatile uint64_t x33 = UINT64_MAX;
uint32_t t10 = 6303094U;
uint64_t t11 = 833531392267493LLU;
volatile uint8_t x55 = 8U;
int16_t x56 = INT16_MIN;
int16_t x64 = INT16_MAX;
int64_t x69 = INT64_MIN;
int64_t x72 = INT64_MIN;
volatile int64_t t17 = -2LL;
volatile int32_t t18 = -4577682;
int8_t x79 = INT8_MIN;
static uint8_t x85 = 3U;
uint16_t x87 = 18074U;
int32_t t21 = 3;
static int16_t x93 = INT16_MAX;
uint64_t x96 = 1158706LLU;
uint8_t x99 = 66U;
uint8_t x102 = 34U;
uint32_t x106 = 51794969U;
static int32_t x107 = INT32_MIN;
volatile uint32_t t26 = 14948999U;
uint32_t x119 = UINT32_MAX;
volatile int64_t t29 = 1088LL;
volatile uint32_t x125 = 1701U;
volatile int16_t x131 = -1;
int32_t x132 = INT32_MIN;
uint64_t t32 = 12311LLU;
volatile uint16_t x134 = 9U;
static int64_t x138 = -237205226679LL;
volatile int64_t t34 = 239057164104LL;
int32_t x143 = INT32_MIN;
int8_t x150 = -1;
uint16_t x153 = 227U;
int32_t x158 = INT32_MAX;
volatile int32_t t39 = 39;
int32_t x161 = -3;
uint32_t x171 = 1382U;
static uint64_t x176 = UINT64_MAX;
volatile int32_t x177 = -1;
uint64_t x188 = UINT64_MAX;
uint32_t t47 = 49990U;
uint32_t x193 = 13704U;
int64_t x206 = -1LL;
int32_t x209 = INT32_MIN;
uint16_t x211 = 454U;
uint32_t x223 = UINT32_MAX;
uint8_t x224 = 14U;
volatile int64_t t55 = 188667859339LL;
int16_t x233 = -558;
int8_t x243 = INT8_MIN;
static int32_t t60 = 62379383;
int32_t x245 = -30;
static int32_t x256 = 978;
volatile uint64_t t63 = 52374LLU;
int16_t x257 = -1;
uint64_t x263 = 1182LLU;
static int32_t x267 = INT32_MIN;
volatile int8_t x268 = INT8_MAX;
uint32_t t66 = 3U;
static int32_t x276 = -847199127;
volatile uint8_t x277 = UINT8_MAX;
volatile int8_t x279 = INT8_MAX;
static int32_t x283 = INT32_MAX;
uint8_t x290 = 1U;
int32_t t71 = 162654;
uint64_t x295 = 111764603452LLU;
int32_t t72 = -5676;
int32_t x304 = -1;
volatile int32_t t74 = 258247;
static int32_t x307 = -1;
int32_t x309 = -1;
static volatile int64_t x313 = INT64_MIN;
int16_t x323 = -1;
int32_t x324 = INT32_MIN;
int16_t x328 = -1;
static volatile uint32_t t81 = 63U;
int8_t x339 = INT8_MIN;
uint8_t x347 = 1U;
volatile uint32_t x350 = 1472845U;
uint8_t x353 = 0U;
volatile uint8_t x357 = 55U;
volatile uint64_t t88 = 45678863600195346LLU;
uint16_t x362 = 4U;
static int8_t x370 = INT8_MAX;
uint32_t x382 = 15054U;
uint8_t x391 = 0U;
volatile int32_t x398 = -48264127;


void f0(void) {
	static uint16_t x1 = 12670U;
	static int64_t x3 = 4300963575LL;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 5967;

	t0 = ((x1%x2)^(x3<=x4));

	if (t0 != 694) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MIN;
	uint32_t x7 = UINT32_MAX;
	int32_t x8 = INT32_MIN;
	volatile int64_t t1 = -36LL;

	t1 = ((x5%x6)^(x7<=x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	static volatile int32_t x12 = INT32_MIN;
	int64_t t2 = 7351647LL;

	t2 = ((x9%x10)^(x11<=x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	volatile int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MIN;
	int64_t x16 = INT64_MIN;
	static volatile int32_t t3 = -1;

	t3 = ((x13%x14)^(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = 2;
	volatile int32_t x19 = -1;
	static uint16_t x20 = 2U;
	volatile int32_t t4 = 8;

	t4 = ((x17%x18)^(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 27U;
	volatile uint64_t x22 = UINT64_MAX;
	volatile uint64_t t5 = 725477085632971446LLU;

	t5 = ((x21%x22)^(x23<=x24));

	if (t5 != 26LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -3;
	static uint16_t x26 = 18U;

	t6 = ((x25%x26)^(x27<=x28));

	if (t6 != -3) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	int16_t x31 = INT16_MIN;
	static uint16_t x32 = 1U;
	uint32_t t7 = 272U;

	t7 = ((x29%x30)^(x31<=x32));

	if (t7 != 83833U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x34 = -24;
	uint32_t x35 = 1819544U;
	uint32_t x36 = UINT32_MAX;
	uint64_t t8 = 2566362269016LLU;

	t8 = ((x33%x34)^(x35<=x36));

	if (t8 != 22LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 200679;
	uint16_t x38 = 11043U;
	uint64_t x39 = 40LLU;
	uint64_t x40 = 158398280345116LLU;
	int32_t t9 = 1;

	t9 = ((x37%x38)^(x39<=x40));

	if (t9 != 1904) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 0U;
	static int32_t x42 = -262709358;
	uint16_t x43 = 31U;
	int64_t x44 = INT64_MIN;

	t10 = ((x41%x42)^(x43<=x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 1258449965300LLU;
	int8_t x46 = 33;
	int32_t x47 = -100;
	int16_t x48 = -1;

	t11 = ((x45%x46)^(x47<=x48));

	if (t11 != 10LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 1929252585323614LLU;
	volatile int32_t x50 = 30724014;
	static int64_t x51 = INT64_MIN;
	uint16_t x52 = UINT16_MAX;
	static volatile uint64_t t12 = 1838762560LLU;

	t12 = ((x49%x50)^(x51<=x52));

	if (t12 != 4357811LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -10;
	int16_t x54 = INT16_MAX;
	static volatile int32_t t13 = -1435386;

	t13 = ((x53%x54)^(x55<=x56));

	if (t13 != -10) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 1204061U;
	int64_t x58 = -9310483655426298LL;
	uint16_t x59 = 3579U;
	volatile uint16_t x60 = 49U;
	static volatile int64_t t14 = 475LL;

	t14 = ((x57%x58)^(x59<=x60));

	if (t14 != 1204061LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = INT8_MIN;
	static volatile int32_t t15 = -7165281;

	t15 = ((x61%x62)^(x63<=x64));

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	static int32_t x66 = 910022495;
	int8_t x67 = -2;
	uint64_t x68 = 4558105596590264209LLU;
	uint64_t t16 = 13169LLU;

	t16 = ((x65%x66)^(x67<=x68));

	if (t16 != 752225350LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = 18;
	uint32_t x71 = 49568641U;

	t17 = ((x69%x70)^(x71<=x72));

	if (t17 != -8LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	uint8_t x74 = 16U;
	int64_t x75 = INT64_MIN;
	uint64_t x76 = 50575776929348LLU;

	t18 = ((x73%x74)^(x75<=x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	uint32_t x78 = UINT32_MAX;
	static int16_t x80 = 18;
	volatile int64_t t19 = 1514281658684506070LL;

	t19 = ((x77%x78)^(x79<=x80));

	if (t19 != 2147483646LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = -1;
	volatile int8_t x83 = INT8_MIN;
	static int8_t x84 = 1;
	int32_t t20 = 2649073;

	t20 = ((x81%x82)^(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	uint8_t x88 = UINT8_MAX;

	t21 = ((x85%x86)^(x87<=x88));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = -1;
	static int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MIN;
	static int32_t t22 = -17;

	t22 = ((x89%x90)^(x91<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = -1;
	static int64_t x95 = 565948766LL;
	int32_t t23 = 57042578;

	t23 = ((x93%x94)^(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 2U;
	int32_t x98 = -1;
	int16_t x100 = 54;
	volatile int32_t t24 = -21416;

	t24 = ((x97%x98)^(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -2705LL;
	int16_t x103 = -278;
	static int32_t x104 = -1;
	volatile int64_t t25 = -1LL;

	t25 = ((x101%x102)^(x103<=x104));

	if (t25 != -20LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int64_t x108 = -2017069746LL;

	t26 = ((x105%x106)^(x107<=x108));

	if (t26 != 23889918U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MAX;
	static int8_t x110 = INT8_MIN;
	int64_t x111 = -2275495599LL;
	int16_t x112 = 10;
	int32_t t27 = -20;

	t27 = ((x109%x110)^(x111<=x112));

	if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 375954751491437994LLU;
	volatile uint32_t x114 = UINT32_MAX;
	volatile uint32_t x115 = 6225U;
	int64_t x116 = INT64_MIN;
	uint64_t t28 = 4292539365510055310LLU;

	t28 = ((x113%x114)^(x115<=x116));

	if (t28 != 3413909124LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint16_t x118 = UINT16_MAX;
	static int16_t x120 = -1;

	t29 = ((x117%x118)^(x119<=x120));

	if (t29 != -32767LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = UINT64_MAX;
	uint32_t x122 = 2U;
	int8_t x123 = -1;
	static int64_t x124 = -1LL;
	volatile uint64_t t30 = 548395967935LLU;

	t30 = ((x121%x122)^(x123<=x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = INT8_MIN;
	uint32_t t31 = 40809U;

	t31 = ((x125%x126)^(x127<=x128));

	if (t31 != 1701U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 45506253660LLU;
	int32_t x130 = -1;

	t32 = ((x129%x130)^(x131<=x132));

	if (t32 != 45506253660LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t33 = -11131954;

	t33 = ((x133%x134)^(x135<=x136));

	if (t33 != -7) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 16573156064353408LL;
	uint32_t x139 = 98U;
	volatile int8_t x140 = -9;

	t34 = ((x137%x138)^(x139<=x140));

	if (t34 != 101286745037LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -8951;
	int8_t x142 = INT8_MAX;
	static int8_t x144 = 0;
	int32_t t35 = 0;

	t35 = ((x141%x142)^(x143<=x144));

	if (t35 != -62) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 985099U;
	int16_t x146 = -1;
	int32_t x147 = -2;
	uint64_t x148 = 12LLU;
	volatile uint32_t t36 = 41U;

	t36 = ((x145%x146)^(x147<=x148));

	if (t36 != 985099U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int32_t x151 = INT32_MIN;
	int8_t x152 = INT8_MIN;
	static int32_t t37 = -19893574;

	t37 = ((x149%x150)^(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = UINT32_MAX;
	int64_t x155 = 1005803LL;
	static int64_t x156 = 340561LL;
	uint32_t t38 = 701673352U;

	t38 = ((x153%x154)^(x155<=x156));

	if (t38 != 227U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = 557;
	static int16_t x159 = INT16_MIN;
	volatile uint64_t x160 = UINT64_MAX;

	t39 = ((x157%x158)^(x159<=x160));

	if (t39 != 556) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MAX;
	int32_t x163 = -1;
	int32_t x164 = 3;
	int32_t t40 = -1;

	t40 = ((x161%x162)^(x163<=x164));

	if (t40 != -4) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 1U;
	int8_t x166 = -1;
	int8_t x167 = INT8_MAX;
	static int64_t x168 = 461892056704599790LL;
	uint32_t t41 = 85151462U;

	t41 = ((x165%x166)^(x167<=x168));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x169 = INT8_MAX;
	int16_t x170 = INT16_MIN;
	static int32_t x172 = -3;
	volatile int32_t t42 = 1;

	t42 = ((x169%x170)^(x171<=x172));

	if (t42 != 126) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	uint8_t x174 = 24U;
	volatile int64_t x175 = INT64_MIN;
	volatile int32_t t43 = -14198613;

	t43 = ((x173%x174)^(x175<=x176));

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MAX;
	int32_t x179 = -4078;
	uint64_t x180 = 4151999174242291LLU;
	static volatile int32_t t44 = -9253807;

	t44 = ((x177%x178)^(x179<=x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -1;
	int32_t x182 = 56908440;
	static int64_t x183 = INT64_MIN;
	volatile int64_t x184 = INT64_MAX;
	volatile int32_t t45 = -18861535;

	t45 = ((x181%x182)^(x183<=x184));

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = 14U;
	uint8_t x186 = UINT8_MAX;
	static int8_t x187 = INT8_MIN;
	volatile int32_t t46 = 18165065;

	t46 = ((x185%x186)^(x187<=x188));

	if (t46 != 15) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	volatile uint32_t x190 = 159397354U;
	static uint16_t x191 = 3515U;
	int32_t x192 = -1;

	t47 = ((x189%x190)^(x191<=x192));

	if (t47 != 75318046U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x194 = 192604LLU;
	uint64_t x195 = 0LLU;
	int16_t x196 = -63;
	uint64_t t48 = 219651097784883LLU;

	t48 = ((x193%x194)^(x195<=x196));

	if (t48 != 13705LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 41U;
	int16_t x198 = INT16_MIN;
	static int32_t x199 = INT32_MAX;
	uint16_t x200 = UINT16_MAX;
	static int32_t t49 = 19320;

	t49 = ((x197%x198)^(x199<=x200));

	if (t49 != 41) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	static int8_t x202 = -1;
	volatile int32_t x203 = INT32_MIN;
	uint32_t x204 = UINT32_MAX;
	int32_t t50 = -51;

	t50 = ((x201%x202)^(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -9023;
	int64_t x207 = -2544285104307LL;
	int64_t x208 = 8019885LL;
	volatile int64_t t51 = 114LL;

	t51 = ((x205%x206)^(x207<=x208));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x210 = 12;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -818880;

	t52 = ((x209%x210)^(x211<=x212));

	if (t52 != -8) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	volatile int8_t x214 = -24;
	int8_t x215 = 1;
	int16_t x216 = 433;
	int32_t t53 = -759367707;

	t53 = ((x213%x214)^(x215<=x216));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int32_t x218 = -1;
	int64_t x219 = INT64_MIN;
	int32_t x220 = -7726989;
	static volatile int32_t t54 = -2052;

	t54 = ((x217%x218)^(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 2066920554231783LL;
	int32_t x222 = INT32_MIN;

	t55 = ((x221%x222)^(x223<=x224));

	if (t55 != 1902770151LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = -6021342240LL;
	uint64_t x226 = 142149171514934LLU;
	uint8_t x227 = 14U;
	volatile int8_t x228 = INT8_MIN;
	uint64_t t56 = 24683059182783LLU;

	t56 = ((x225%x226)^(x227<=x228));

	if (t56 != 46080195224196LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 1037U;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	int16_t x232 = -1;
	int32_t t57 = -491052115;

	t57 = ((x229%x230)^(x231<=x232));

	if (t57 != 1036) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = -81;
	volatile uint64_t x235 = 10552265377319LLU;
	volatile int32_t x236 = INT32_MIN;
	int32_t t58 = 209316;

	t58 = ((x233%x234)^(x235<=x236));

	if (t58 != -71) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 1962U;
	uint32_t x238 = 20002U;
	static volatile int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MIN;
	volatile uint32_t t59 = 192752069U;

	t59 = ((x237%x238)^(x239<=x240));

	if (t59 != 1963U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int16_t x242 = INT16_MIN;
	static uint8_t x244 = UINT8_MAX;

	t60 = ((x241%x242)^(x243<=x244));

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x246 = INT8_MIN;
	static volatile int64_t x247 = -22916315701625355LL;
	static volatile uint64_t x248 = 249109268224LLU;
	volatile int32_t t61 = -791365;

	t61 = ((x245%x246)^(x247<=x248));

	if (t61 != -30) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = -1;
	uint64_t x250 = 625410909LLU;
	static int8_t x251 = -1;
	int8_t x252 = INT8_MIN;
	volatile uint64_t t62 = 11943151LLU;

	t62 = ((x249%x250)^(x251<=x252));

	if (t62 != 200609673LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 31481367LLU;
	int64_t x254 = INT64_MAX;
	uint32_t x255 = 90616U;

	t63 = ((x253%x254)^(x255<=x256));

	if (t63 != 31481367LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MIN;
	int64_t x259 = INT64_MIN;
	int64_t x260 = -254502977LL;
	static volatile int32_t t64 = -452;

	t64 = ((x257%x258)^(x259<=x260));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = 26056;
	static volatile uint32_t x262 = UINT32_MAX;
	uint16_t x264 = 10U;
	uint32_t t65 = 26300U;

	t65 = ((x261%x262)^(x263<=x264));

	if (t65 != 26056U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = 303401037U;
	volatile int8_t x266 = -33;

	t66 = ((x265%x266)^(x267<=x268));

	if (t66 != 303401036U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x273 = INT64_MAX;
	int32_t x274 = 112;
	uint64_t x275 = UINT64_MAX;
	int64_t t67 = -3103LL;

	t67 = ((x273%x274)^(x275<=x276));

	if (t67 != 63LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x278 = 21U;
	uint64_t x280 = 2545728496LLU;
	uint32_t t68 = 5U;

	t68 = ((x277%x278)^(x279<=x280));

	if (t68 != 2U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	volatile uint8_t x282 = 1U;
	static volatile int32_t x284 = -4144472;
	int32_t t69 = 31;

	t69 = ((x281%x282)^(x283<=x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = 4;
	int64_t x286 = INT64_MIN;
	static uint32_t x287 = UINT32_MAX;
	static int16_t x288 = -1;
	int64_t t70 = 27825177460495590LL;

	t70 = ((x285%x286)^(x287<=x288));

	if (t70 != 5LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = -1;
	uint8_t x291 = UINT8_MAX;
	int64_t x292 = INT64_MIN;

	t71 = ((x289%x290)^(x291<=x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x293 = 44U;
	int8_t x294 = INT8_MIN;
	uint32_t x296 = 33703U;

	t72 = ((x293%x294)^(x295<=x296));

	if (t72 != 44) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x297 = UINT64_MAX;
	volatile uint32_t x298 = UINT32_MAX;
	static uint64_t x299 = 46993LLU;
	volatile uint32_t x300 = UINT32_MAX;
	uint64_t t73 = 14487645LLU;

	t73 = ((x297%x298)^(x299<=x300));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = -1;
	int32_t x302 = INT32_MAX;
	uint32_t x303 = 5160U;

	t74 = ((x301%x302)^(x303<=x304));

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MAX;
	uint64_t x306 = 53387977822644LLU;
	static uint64_t x308 = 2226195LLU;
	static volatile uint64_t t75 = 6138334875LLU;

	t75 = ((x305%x306)^(x307<=x308));

	if (t75 != 127LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x310 = -1;
	int8_t x311 = -1;
	volatile uint64_t x312 = 2299088LLU;
	int32_t t76 = -14102;

	t76 = ((x309%x310)^(x311<=x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x314 = -1;
	int32_t x315 = INT32_MIN;
	int64_t x316 = -721660164887718277LL;
	volatile int64_t t77 = -87805990366375928LL;

	t77 = ((x313%x314)^(x315<=x316));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x317 = INT32_MIN;
	int64_t x318 = -1LL;
	volatile int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MIN;
	static int64_t t78 = -6684345LL;

	t78 = ((x317%x318)^(x319<=x320));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = 4;
	int8_t x322 = -1;
	static volatile int32_t t79 = -3764461;

	t79 = ((x321%x322)^(x323<=x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 117U;
	int64_t x326 = 73794510466859LL;
	uint16_t x327 = UINT16_MAX;
	volatile int64_t t80 = 30559LL;

	t80 = ((x325%x326)^(x327<=x328));

	if (t80 != 117LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MAX;
	uint32_t x330 = 9U;
	uint8_t x331 = UINT8_MAX;
	volatile int64_t x332 = INT64_MIN;

	t81 = ((x329%x330)^(x331<=x332));

	if (t81 != 7U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x333 = 1142U;
	int32_t x334 = 49482404;
	volatile uint32_t x335 = 324304U;
	int8_t x336 = INT8_MAX;
	int32_t t82 = 30;

	t82 = ((x333%x334)^(x335<=x336));

	if (t82 != 1142) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x337 = INT64_MAX;
	static int16_t x338 = -1;
	int32_t x340 = -1;
	volatile int64_t t83 = -8115LL;

	t83 = ((x337%x338)^(x339<=x340));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = 4;
	int16_t x342 = INT16_MAX;
	volatile int32_t x343 = INT32_MAX;
	int64_t x344 = -1LL;
	volatile int32_t t84 = -375817;

	t84 = ((x341%x342)^(x343<=x344));

	if (t84 != 4) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = INT64_MIN;
	volatile uint32_t x346 = UINT32_MAX;
	int64_t x348 = INT64_MAX;
	static volatile int64_t t85 = -14039979566803205LL;

	t85 = ((x345%x346)^(x347<=x348));

	if (t85 != -2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x349 = 0U;
	int8_t x351 = INT8_MIN;
	volatile int8_t x352 = INT8_MIN;
	volatile uint32_t t86 = 785466U;

	t86 = ((x349%x350)^(x351<=x352));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x354 = -1LL;
	int8_t x355 = INT8_MAX;
	volatile uint32_t x356 = 2U;
	volatile int64_t t87 = 755489LL;

	t87 = ((x353%x354)^(x355<=x356));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x358 = UINT64_MAX;
	uint64_t x359 = 25160921LLU;
	int16_t x360 = -14;

	t88 = ((x357%x358)^(x359<=x360));

	if (t88 != 54LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x361 = 574U;
	uint64_t x363 = 296935070LLU;
	static int8_t x364 = 4;
	int32_t t89 = 0;

	t89 = ((x361%x362)^(x363<=x364));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x365 = 285507223505LLU;
	int8_t x366 = -1;
	int16_t x367 = 3491;
	static volatile int8_t x368 = INT8_MIN;
	volatile uint64_t t90 = 1137052397577LLU;

	t90 = ((x365%x366)^(x367<=x368));

	if (t90 != 285507223505LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x369 = UINT64_MAX;
	int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MAX;
	static volatile uint64_t t91 = 110633LLU;

	t91 = ((x369%x370)^(x371<=x372));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x373 = 28091255U;
	int32_t x374 = 2799443;
	int64_t x375 = INT64_MIN;
	volatile int8_t x376 = INT8_MAX;
	uint32_t t92 = 2U;

	t92 = ((x373%x374)^(x375<=x376));

	if (t92 != 96824U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x377 = 26U;
	volatile int32_t x378 = INT32_MAX;
	static volatile int16_t x379 = 1;
	int8_t x380 = -1;
	volatile int32_t t93 = 8968;

	t93 = ((x377%x378)^(x379<=x380));

	if (t93 != 26) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x381 = 545293226548LLU;
	volatile int8_t x383 = INT8_MIN;
	uint32_t x384 = 10U;
	uint64_t t94 = 48610830LLU;

	t94 = ((x381%x382)^(x383<=x384));

	if (t94 != 12628LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x389 = UINT32_MAX;
	int8_t x390 = -1;
	int16_t x392 = INT16_MIN;
	uint32_t t95 = 107U;

	t95 = ((x389%x390)^(x391<=x392));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x393 = 1;
	volatile int16_t x394 = INT16_MIN;
	int64_t x395 = -1148LL;
	int16_t x396 = INT16_MAX;
	volatile int32_t t96 = 568999;

	t96 = ((x393%x394)^(x395<=x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = UINT32_MAX;
	static int16_t x399 = 43;
	uint64_t x400 = 6721761817LLU;
	volatile uint32_t t97 = 130243783U;

	t97 = ((x397%x398)^(x399<=x400));

	if (t97 != 48264127U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = -1;
	volatile int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MIN;
	int16_t x404 = -1;
	int64_t t98 = -194176695248014667LL;

	t98 = ((x401%x402)^(x403<=x404));

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = 11554;
	uint8_t x406 = 3U;
	static int32_t x407 = -1;
	int8_t x408 = 0;
	int32_t t99 = 269186;

	t99 = ((x405%x406)^(x407<=x408));

	if (t99 != 0) { NG(); } else { ; }
	
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

