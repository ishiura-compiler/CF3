#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
static int32_t x3 = INT32_MIN;
int16_t x7 = -266;
uint8_t x10 = UINT8_MAX;
int32_t t2 = 162;
int16_t x15 = INT16_MAX;
int64_t t6 = 1935702933LL;
int64_t x30 = INT64_MIN;
int16_t x35 = -1;
volatile int64_t t8 = 22319532LL;
uint64_t x41 = 98348531602480452LLU;
volatile uint64_t x42 = UINT64_MAX;
static uint32_t x44 = UINT32_MAX;
uint32_t x49 = UINT32_MAX;
int8_t x52 = -1;
int32_t x53 = -228495;
int16_t x60 = -1;
static int32_t x66 = -125283260;
volatile int64_t x73 = 5798361886546LL;
int32_t x75 = -1;
static int64_t x78 = INT64_MIN;
static volatile int64_t x79 = -27428390921LL;
volatile int64_t x87 = 47434062916LL;
int64_t x93 = 4873393LL;
uint32_t x100 = UINT32_MAX;
int16_t x103 = -26;
volatile uint64_t t25 = 1852905286228461429LLU;
uint32_t x110 = 351948741U;
uint64_t x111 = 6370771673871151879LLU;
volatile int64_t x119 = -436883384LL;
static int32_t t31 = -2;
uint8_t x142 = UINT8_MAX;
volatile int8_t x144 = -1;
volatile uint8_t x147 = UINT8_MAX;
int32_t x149 = INT32_MIN;
int8_t x150 = -1;
int32_t x154 = INT32_MIN;
int32_t t39 = 26;
static uint32_t x168 = UINT32_MAX;
int64_t t40 = -19898840LL;
volatile int64_t t41 = -41359760021880390LL;
volatile int16_t x173 = INT16_MIN;
static int32_t x178 = -1;
int32_t x184 = 21;
static volatile int64_t t45 = -11034LL;
int16_t x190 = INT16_MIN;
uint16_t x191 = 102U;
uint64_t x193 = 425LLU;
static uint8_t x198 = UINT8_MAX;
volatile int32_t t49 = 1502536;
static int32_t x206 = -10;
static volatile uint8_t x207 = UINT8_MAX;
int8_t x211 = 12;
volatile int32_t t53 = INT32_MAX;
int8_t x226 = -1;
int8_t x228 = -1;
volatile int32_t t55 = -6418080;
volatile int8_t x231 = 0;
int64_t x237 = INT64_MIN;
volatile uint64_t t58 = 317026LLU;
int64_t t59 = 206447371LL;
volatile int8_t x249 = INT8_MIN;
uint16_t x251 = UINT16_MAX;
int32_t x256 = 127;
int32_t x258 = INT32_MIN;
int16_t x261 = -1;
int32_t t64 = 217146;
uint32_t x276 = UINT32_MAX;
volatile int64_t t67 = 0LL;
int64_t x279 = 72119421431LL;
int16_t x285 = INT16_MAX;
int32_t x287 = -1;
volatile int32_t t70 = -2;
int16_t x290 = INT16_MAX;
static uint16_t x304 = 5429U;
uint16_t x321 = 0U;
uint8_t x325 = 23U;
int32_t t81 = -74;
int32_t x334 = 852;
int8_t x336 = 0;
int64_t x338 = INT64_MAX;
uint8_t x342 = 14U;
int16_t x345 = -84;
static int16_t x352 = -1;
static int64_t t87 = 12431167574166571LL;
int32_t t88 = -26;
uint16_t x361 = 15369U;
static volatile int64_t x365 = -1LL;
int64_t t90 = -1136619471084420LL;
volatile int64_t x369 = INT64_MAX;
uint32_t x370 = 5049093U;
volatile int8_t x383 = -1;
int16_t x385 = -1;
volatile uint8_t x388 = 62U;
int64_t x394 = -1LL;
int32_t x403 = -1;
static int32_t t98 = INT32_MAX;
int32_t x405 = 0;
static int64_t x406 = INT64_MIN;
volatile uint64_t t99 = 1484003083701LLU;


void f0(void) {
	int16_t x2 = -1;
	static uint64_t x4 = 84083LLU;
	volatile uint64_t t0 = 11290612218715LLU;

	t0 = ((x1<=x2)+(x3^x4));

	if (t0 != 18446744071562152052LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 1381782191409612981LL;
	uint32_t x6 = 419029112U;
	volatile uint16_t x8 = 5U;
	static volatile int32_t t1 = 69;

	t1 = ((x5<=x6)+(x7^x8));

	if (t1 != -269) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static volatile int8_t x11 = 1;
	volatile uint8_t x12 = 0U;

	t2 = ((x9<=x10)+(x11^x12));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	uint16_t x14 = UINT16_MAX;
	int16_t x16 = -19;
	int32_t t3 = -1392;

	t3 = ((x13<=x14)+(x15^x16));

	if (t3 != -32749) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 6;
	static int16_t x18 = INT16_MIN;
	volatile int64_t x19 = INT64_MAX;
	int8_t x20 = INT8_MIN;
	static int64_t t4 = -117LL;

	t4 = ((x17<=x18)+(x19^x20));

	if (t4 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	static int64_t x22 = INT64_MAX;
	static int16_t x23 = 3821;
	int32_t x24 = -47620782;
	static int32_t t5 = 183;

	t5 = ((x21<=x22)+(x23^x24));

	if (t5 != -47623232) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MAX;
	int8_t x28 = -1;

	t6 = ((x25<=x26)+(x27^x28));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 119160LLU;
	volatile int8_t x31 = -1;
	uint16_t x32 = 2U;
	volatile int32_t t7 = 49;

	t7 = ((x29<=x30)+(x31^x32));

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MAX;
	volatile int16_t x34 = INT16_MIN;
	int64_t x36 = -1LL;

	t8 = ((x33<=x34)+(x35^x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 2U;
	int32_t x38 = INT32_MIN;
	static volatile int64_t x39 = -143728LL;
	int8_t x40 = -1;
	static int64_t t9 = -883698LL;

	t9 = ((x37<=x38)+(x39^x40));

	if (t9 != 143727LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x43 = 1U;
	static volatile uint32_t t10 = UINT32_MAX;

	t10 = ((x41<=x42)+(x43^x44));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static int8_t x46 = INT8_MIN;
	static int16_t x47 = INT16_MIN;
	int8_t x48 = -18;
	volatile int32_t t11 = 3307;

	t11 = ((x45<=x46)+(x47^x48));

	if (t11 != 32751) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	int16_t x51 = -232;
	int32_t t12 = -107169;

	t12 = ((x49<=x50)+(x51^x52));

	if (t12 != 231) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x54 = 1232224007U;
	int8_t x55 = -1;
	int32_t x56 = -1;
	volatile int32_t t13 = 2;

	t13 = ((x53<=x54)+(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = INT8_MIN;
	uint8_t x58 = UINT8_MAX;
	int32_t x59 = -23;
	int32_t t14 = 415913925;

	t14 = ((x57<=x58)+(x59^x60));

	if (t14 != 23) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	uint8_t x62 = 78U;
	int16_t x63 = 497;
	int32_t x64 = -68;
	volatile int32_t t15 = -12001;

	t15 = ((x61<=x62)+(x63^x64));

	if (t15 != -434) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 11069529632LLU;
	int32_t x67 = INT32_MAX;
	static int8_t x68 = INT8_MIN;
	int32_t t16 = -4356;

	t16 = ((x65<=x66)+(x67^x68));

	if (t16 != -2147483520) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x69 = 3424;
	int16_t x70 = 0;
	int16_t x71 = 3513;
	uint16_t x72 = 5003U;
	int32_t t17 = -1145;

	t17 = ((x69<=x70)+(x71^x72));

	if (t17 != 7730) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x74 = UINT8_MAX;
	volatile int32_t x76 = -1;
	volatile int32_t t18 = -975;

	t18 = ((x73<=x74)+(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	uint32_t x80 = 548440U;
	volatile int64_t t19 = -48679LL;

	t19 = ((x77<=x78)+(x79^x80));

	if (t19 != -27427886672LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int32_t x82 = INT32_MIN;
	volatile uint8_t x83 = 2U;
	uint64_t x84 = 0LLU;
	uint64_t t20 = 155008LLU;

	t20 = ((x81<=x82)+(x83^x84));

	if (t20 != 2LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MAX;
	volatile int64_t x86 = -1LL;
	uint16_t x88 = UINT16_MAX;
	static volatile int64_t t21 = -65594090750LL;

	t21 = ((x85<=x86)+(x87^x88));

	if (t21 != 47434081211LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = 8822;
	uint32_t x90 = UINT32_MAX;
	uint16_t x91 = 188U;
	static int32_t x92 = INT32_MIN;
	static int32_t t22 = 1;

	t22 = ((x89<=x90)+(x91^x92));

	if (t22 != -2147483459) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MAX;
	volatile uint64_t x95 = 13868650671767160LLU;
	uint32_t x96 = 20U;
	volatile uint64_t t23 = 72LLU;

	t23 = ((x93<=x94)+(x95^x96));

	if (t23 != 13868650671767149LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 0U;
	int8_t x98 = INT8_MAX;
	int32_t x99 = 0;
	volatile uint32_t t24 = 17774U;

	t24 = ((x97<=x98)+(x99^x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MIN;
	uint64_t x104 = 15295854088LLU;

	t25 = ((x101<=x102)+(x103^x104));

	if (t25 != 18446744058413697518LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MIN;
	volatile uint16_t x106 = UINT16_MAX;
	int32_t x107 = INT32_MAX;
	int16_t x108 = INT16_MIN;
	int32_t t26 = 87;

	t26 = ((x105<=x106)+(x107^x108));

	if (t26 != -2147450880) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 3229U;
	int16_t x112 = INT16_MIN;
	static volatile uint64_t t27 = 11405146291133238LLU;

	t27 = ((x109<=x110)+(x111^x112));

	if (t27 != 12075972399838425864LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	uint16_t x114 = 780U;
	uint32_t x115 = 198U;
	int64_t x116 = INT64_MIN;
	int64_t t28 = 6532559709LL;

	t28 = ((x113<=x114)+(x115^x116));

	if (t28 != -9223372036854775609LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x118 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	static int64_t t29 = 980440613511LL;

	t29 = ((x117<=x118)+(x119^x120));

	if (t29 != 436883400LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	volatile int64_t x122 = -1LL;
	int16_t x123 = INT16_MIN;
	int32_t x124 = INT32_MAX;
	int32_t t30 = 261438;

	t30 = ((x121<=x122)+(x123^x124));

	if (t30 != -2147450881) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = UINT32_MAX;
	static uint64_t x126 = UINT64_MAX;
	uint8_t x127 = UINT8_MAX;
	int8_t x128 = -1;

	t31 = ((x125<=x126)+(x127^x128));

	if (t31 != -255) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 672U;
	int32_t x130 = INT32_MAX;
	uint32_t x131 = UINT32_MAX;
	static volatile uint64_t x132 = UINT64_MAX;
	uint64_t t32 = 256197047LLU;

	t32 = ((x129<=x130)+(x131^x132));

	if (t32 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static uint8_t x134 = 0U;
	volatile int64_t x135 = -8392LL;
	static int8_t x136 = INT8_MIN;
	static int64_t t33 = 1893866419LL;

	t33 = ((x133<=x134)+(x135^x136));

	if (t33 != 8377LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = UINT16_MAX;
	uint8_t x138 = 125U;
	uint64_t x139 = 12877LLU;
	static volatile uint64_t x140 = 3060LLU;
	uint64_t t34 = 2058443603LLU;

	t34 = ((x137<=x138)+(x139^x140));

	if (t34 != 14777LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	static uint64_t x143 = 48221921740565933LLU;
	volatile uint64_t t35 = 4413471181559415LLU;

	t35 = ((x141<=x142)+(x143^x144));

	if (t35 != 18398522151968985682LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	volatile uint8_t x146 = UINT8_MAX;
	uint16_t x148 = 17892U;
	int32_t t36 = -5039;

	t36 = ((x145<=x146)+(x147^x148));

	if (t36 != 17692) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x151 = 14;
	int8_t x152 = INT8_MAX;
	int32_t t37 = -800;

	t37 = ((x149<=x150)+(x151^x152));

	if (t37 != 114) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = -282;
	volatile int16_t x155 = -3904;
	int8_t x156 = INT8_MAX;
	int32_t t38 = -214248;

	t38 = ((x153<=x154)+(x155^x156));

	if (t38 != -3905) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 250U;
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	volatile int32_t x164 = -32489446;

	t39 = ((x161<=x162)+(x163^x164));

	if (t39 != 32489370) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = 0;
	static volatile int64_t x166 = INT64_MAX;
	volatile int64_t x167 = INT64_MAX;

	t40 = ((x165<=x166)+(x167^x168));

	if (t40 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x169 = INT8_MIN;
	volatile int64_t x170 = INT64_MIN;
	static int64_t x171 = 4369894414633LL;
	volatile int64_t x172 = INT64_MIN;

	t41 = ((x169<=x170)+(x171^x172));

	if (t41 != -9223367666960361175LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x174 = 3U;
	int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MIN;
	volatile int32_t t42 = 5839;

	t42 = ((x173<=x174)+(x175^x176));

	if (t42 != 32641) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -1;
	static int16_t x179 = INT16_MIN;
	static int32_t x180 = 10438;
	volatile int32_t t43 = 22988946;

	t43 = ((x177<=x178)+(x179^x180));

	if (t43 != -22329) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x181 = -1;
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	int32_t t44 = 1514;

	t44 = ((x181<=x182)+(x183^x184));

	if (t44 != -107) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = 1947;
	volatile uint32_t x186 = 154600700U;
	int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MIN;

	t45 = ((x185<=x186)+(x187^x188));

	if (t45 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MIN;
	uint16_t x192 = 63U;
	int32_t t46 = 1;

	t46 = ((x189<=x190)+(x191^x192));

	if (t46 != 90) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x194 = INT32_MIN;
	static int32_t x195 = INT32_MIN;
	uint64_t x196 = 70659504158578LLU;
	static volatile uint64_t t47 = 245752853960766197LLU;

	t47 = ((x193<=x194)+(x195^x196));

	if (t47 != 18446673413757286259LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	static int16_t x199 = INT16_MIN;
	uint8_t x200 = 0U;
	static volatile int32_t t48 = -385;

	t48 = ((x197<=x198)+(x199^x200));

	if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x201 = UINT32_MAX;
	uint64_t x202 = UINT64_MAX;
	uint16_t x203 = 978U;
	int16_t x204 = INT16_MIN;

	t49 = ((x201<=x202)+(x203^x204));

	if (t49 != -31789) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = 286576LLU;
	uint32_t x208 = UINT32_MAX;
	volatile uint32_t t50 = 6U;

	t50 = ((x205<=x206)+(x207^x208));

	if (t50 != 4294967041U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 4U;
	static int32_t x210 = -38085642;
	int64_t x212 = INT64_MIN;
	int64_t t51 = -66975267228281LL;

	t51 = ((x209<=x210)+(x211^x212));

	if (t51 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x213 = -1012579435469274LL;
	uint64_t x214 = 204430LLU;
	static int32_t x215 = -1;
	static uint8_t x216 = UINT8_MAX;
	static int32_t t52 = -1041805342;

	t52 = ((x213<=x214)+(x215^x216));

	if (t52 != -256) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MAX;
	int64_t x218 = 241963636576481804LL;
	volatile int8_t x219 = -1;
	volatile int32_t x220 = INT32_MIN;

	t53 = ((x217<=x218)+(x219^x220));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = 1;
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = INT8_MAX;
	uint64_t x224 = UINT64_MAX;
	uint64_t t54 = 2488LLU;

	t54 = ((x221<=x222)+(x223^x224));

	if (t54 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x225 = INT8_MAX;
	volatile uint8_t x227 = 11U;

	t55 = ((x225<=x226)+(x227^x228));

	if (t55 != -12) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x229 = INT8_MIN;
	volatile int16_t x230 = INT16_MIN;
	int8_t x232 = INT8_MIN;
	volatile int32_t t56 = 1801699;

	t56 = ((x229<=x230)+(x231^x232));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = -27;
	volatile uint32_t x234 = 20U;
	volatile int16_t x235 = INT16_MIN;
	int64_t x236 = INT64_MIN;
	static int64_t t57 = 4195278691373720670LL;

	t57 = ((x233<=x234)+(x235^x236));

	if (t57 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x238 = INT8_MAX;
	uint64_t x239 = UINT64_MAX;
	int8_t x240 = 2;

	t58 = ((x237<=x238)+(x239^x240));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -33817LL;
	int16_t x242 = INT16_MAX;
	int64_t x243 = INT64_MAX;
	int16_t x244 = -365;

	t59 = ((x241<=x242)+(x243^x244));

	if (t59 != -9223372036854775443LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x245 = INT32_MAX;
	volatile uint32_t x246 = 7836U;
	static volatile int64_t x247 = 998221880562407506LL;
	uint32_t x248 = 29U;
	int64_t t60 = -15497LL;

	t60 = ((x245<=x246)+(x247^x248));

	if (t60 != 998221880562407503LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x250 = 1;
	uint32_t x252 = UINT32_MAX;
	static volatile uint32_t t61 = 1798422U;

	t61 = ((x249<=x250)+(x251^x252));

	if (t61 != 4294901761U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x253 = 12U;
	int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MAX;
	volatile int32_t t62 = 52808;

	t62 = ((x253<=x254)+(x255^x256));

	if (t62 != 2147483521) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = 7742453554922777LL;
	static volatile int64_t x259 = -55840585480601541LL;
	uint32_t x260 = 384U;
	int64_t t63 = -16654310614103LL;

	t63 = ((x257<=x258)+(x259^x260));

	if (t63 != -55840585480601157LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x262 = 24610672LL;
	int16_t x263 = INT16_MAX;
	volatile int32_t x264 = INT32_MAX;

	t64 = ((x261<=x262)+(x263^x264));

	if (t64 != 2147450881) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = -220;
	volatile int8_t x266 = INT8_MIN;
	volatile int16_t x267 = -8109;
	int8_t x268 = INT8_MIN;
	volatile int32_t t65 = 50178412;

	t65 = ((x265<=x266)+(x267^x268));

	if (t65 != 8148) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = -1;
	int8_t x270 = INT8_MIN;
	static volatile int16_t x271 = INT16_MAX;
	static uint64_t x272 = UINT64_MAX;
	uint64_t t66 = 236674LLU;

	t66 = ((x269<=x270)+(x271^x272));

	if (t66 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = 6;
	int64_t x274 = INT64_MIN;
	int64_t x275 = INT64_MIN;

	t67 = ((x273<=x274)+(x275^x276));

	if (t67 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x277 = -1LL;
	int8_t x278 = INT8_MAX;
	volatile int32_t x280 = 506574295;
	int64_t t68 = -61046064233LL;

	t68 = ((x277<=x278)+(x279^x280));

	if (t68 != 72286125089LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = 17683;
	int16_t x282 = -1;
	int16_t x283 = INT16_MIN;
	volatile uint32_t x284 = 14750U;
	static uint32_t t69 = 6604446U;

	t69 = ((x281<=x282)+(x283^x284));

	if (t69 != 4294949278U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x286 = 0LLU;
	int8_t x288 = 15;

	t70 = ((x285<=x286)+(x287^x288));

	if (t70 != -16) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x291 = -360557;
	int16_t x292 = -198;
	static int32_t t71 = 309961217;

	t71 = ((x289<=x290)+(x291^x292));

	if (t71 != 360617) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x293 = 1488479U;
	volatile int16_t x294 = 0;
	int8_t x295 = -1;
	int64_t x296 = -144433587283314743LL;
	int64_t t72 = -88LL;

	t72 = ((x293<=x294)+(x295^x296));

	if (t72 != 144433587283314742LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = 2444;
	uint16_t x298 = 29U;
	int32_t x299 = -1;
	int8_t x300 = -1;
	int32_t t73 = 664;

	t73 = ((x297<=x298)+(x299^x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x301 = UINT8_MAX;
	static int64_t x302 = -1LL;
	int64_t x303 = -1LL;
	int64_t t74 = 13386LL;

	t74 = ((x301<=x302)+(x303^x304));

	if (t74 != -5430LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x305 = 2392516028607LL;
	uint32_t x306 = 340206U;
	static uint64_t x307 = 1239469248554373LLU;
	volatile uint64_t x308 = 67LLU;
	volatile uint64_t t75 = 58012365LLU;

	t75 = ((x305<=x306)+(x307^x308));

	if (t75 != 1239469248554438LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x309 = 230877420U;
	static int8_t x310 = -1;
	int32_t x311 = 30;
	int16_t x312 = -1;
	int32_t t76 = -14289309;

	t76 = ((x309<=x310)+(x311^x312));

	if (t76 != -30) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x313 = -1203;
	int64_t x314 = INT64_MIN;
	static int32_t x315 = INT32_MAX;
	uint16_t x316 = 1U;
	int32_t t77 = -51;

	t77 = ((x313<=x314)+(x315^x316));

	if (t77 != 2147483646) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x317 = 1374491944690202LL;
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = -1;
	static volatile uint8_t x320 = 41U;
	static int32_t t78 = -327;

	t78 = ((x317<=x318)+(x319^x320));

	if (t78 != -42) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x322 = 0;
	int64_t x323 = INT64_MIN;
	uint16_t x324 = UINT16_MAX;
	volatile int64_t t79 = 646198LL;

	t79 = ((x321<=x322)+(x323^x324));

	if (t79 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x326 = 492713303LLU;
	static int32_t x327 = -7;
	static uint64_t x328 = 60883777465LLU;
	static volatile uint64_t t80 = 1812026010LLU;

	t80 = ((x325<=x326)+(x327^x328));

	if (t80 != 18446744012825774145LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x329 = UINT16_MAX;
	int64_t x330 = -1105167216447231836LL;
	volatile int8_t x331 = 0;
	volatile int8_t x332 = -11;

	t81 = ((x329<=x330)+(x331^x332));

	if (t81 != -11) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = 8995216;
	int64_t x335 = INT64_MIN;
	int64_t t82 = INT64_MIN;

	t82 = ((x333<=x334)+(x335^x336));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x337 = INT32_MAX;
	static uint64_t x339 = UINT64_MAX;
	int16_t x340 = INT16_MIN;
	uint64_t t83 = 353423506517423757LLU;

	t83 = ((x337<=x338)+(x339^x340));

	if (t83 != 32768LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x341 = INT16_MIN;
	uint8_t x343 = 6U;
	int16_t x344 = 66;
	volatile int32_t t84 = -3693;

	t84 = ((x341<=x342)+(x343^x344));

	if (t84 != 69) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x346 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	uint8_t x348 = 120U;
	int32_t t85 = -6201502;

	t85 = ((x345<=x346)+(x347^x348));

	if (t85 != -8) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = 17540;
	uint16_t x350 = 390U;
	int64_t x351 = 1LL;
	int64_t t86 = 11932LL;

	t86 = ((x349<=x350)+(x351^x352));

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MAX;
	uint16_t x355 = UINT16_MAX;
	int64_t x356 = -1LL;

	t87 = ((x353<=x354)+(x355^x356));

	if (t87 != -65535LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x357 = 72018017405LLU;
	static volatile uint32_t x358 = 757460U;
	volatile int16_t x359 = INT16_MIN;
	int32_t x360 = INT32_MIN;

	t88 = ((x357<=x358)+(x359^x360));

	if (t88 != 2147450880) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x362 = INT16_MAX;
	int32_t x363 = -135798834;
	int32_t x364 = -1;
	int32_t t89 = -560520;

	t89 = ((x361<=x362)+(x363^x364));

	if (t89 != 135798834) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x366 = INT16_MIN;
	volatile int64_t x367 = INT64_MIN;
	static int32_t x368 = INT32_MAX;

	t90 = ((x365<=x366)+(x367^x368));

	if (t90 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x371 = INT64_MAX;
	uint8_t x372 = 6U;
	static volatile int64_t t91 = -2846355LL;

	t91 = ((x369<=x370)+(x371^x372));

	if (t91 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = 9;
	uint8_t x378 = 60U;
	volatile uint64_t x379 = 84028990145998LLU;
	int64_t x380 = INT64_MAX;
	uint64_t t92 = 232LLU;

	t92 = ((x377<=x378)+(x379^x380));

	if (t92 != 9223288007864629810LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x381 = INT16_MAX;
	int64_t x382 = 244500262420684LL;
	int32_t x384 = INT32_MAX;
	static int32_t t93 = -728161;

	t93 = ((x381<=x382)+(x383^x384));

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x386 = 0;
	static int64_t x387 = -1LL;
	volatile int64_t t94 = -157912567349LL;

	t94 = ((x385<=x386)+(x387^x388));

	if (t94 != -62LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = -1;
	int64_t x390 = -7LL;
	int64_t x391 = 7878509387LL;
	uint8_t x392 = 18U;
	int64_t t95 = -11LL;

	t95 = ((x389<=x390)+(x391^x392));

	if (t95 != 7878509401LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x393 = 9244U;
	uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MAX;
	int64_t t96 = -121365LL;

	t96 = ((x393<=x394)+(x395^x396));

	if (t96 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = -1;
	volatile int32_t x398 = -76;
	volatile uint32_t x399 = 64694U;
	int16_t x400 = INT16_MIN;
	uint32_t t97 = 29U;

	t97 = ((x397<=x398)+(x399^x400));

	if (t97 != 4294933686U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = 3751617743LL;
	static int8_t x402 = -2;
	int32_t x404 = INT32_MIN;

	t98 = ((x401<=x402)+(x403^x404));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x407 = UINT64_MAX;
	int32_t x408 = INT32_MIN;

	t99 = ((x405<=x406)+(x407^x408));

	if (t99 != 2147483647LLU) { NG(); } else { ; }
	
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

