#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 58851;
volatile int64_t t0 = 971035LL;
int32_t x5 = 47;
int64_t x6 = -1LL;
static int32_t x7 = -1;
uint64_t x15 = UINT64_MAX;
int32_t x19 = INT32_MAX;
static uint8_t x20 = UINT8_MAX;
static uint8_t x22 = UINT8_MAX;
static int64_t x25 = -1LL;
uint64_t x38 = UINT64_MAX;
uint8_t x42 = 8U;
volatile int64_t t9 = -56327LL;
static int8_t x45 = -21;
int16_t x53 = 359;
int64_t t14 = 105244256526558897LL;
int16_t x70 = 5;
int16_t x73 = -1;
int32_t x78 = -1;
uint64_t x84 = UINT64_MAX;
uint64_t x85 = UINT64_MAX;
static int8_t x90 = -1;
int32_t x99 = INT32_MIN;
int32_t x108 = -1;
uint8_t x109 = UINT8_MAX;
static int8_t x112 = -1;
static int32_t t26 = 28;
volatile int16_t x115 = INT16_MIN;
volatile int32_t t27 = 27706;
static volatile int16_t x118 = 6;
volatile int8_t x125 = INT8_MIN;
int8_t x129 = INT8_MIN;
int8_t x134 = INT8_MIN;
static int8_t x135 = -1;
volatile int8_t x140 = INT8_MIN;
volatile int32_t t34 = -1476996;
volatile uint64_t t35 = 165689LLU;
volatile uint8_t x151 = UINT8_MAX;
int32_t x157 = -124735565;
volatile int16_t x162 = -17;
int16_t x167 = 5057;
int32_t t40 = 254286894;
int16_t x171 = 6;
int8_t x173 = 2;
int32_t x178 = -1;
static int32_t x181 = -104772757;
uint32_t x186 = 7614823U;
int8_t x188 = -1;
int8_t x192 = INT8_MAX;
int8_t x194 = 1;
volatile uint8_t x201 = 10U;
uint32_t x202 = 29U;
static int64_t x203 = INT64_MIN;
int64_t t49 = 6LL;
int8_t x210 = 37;
int16_t x211 = -1;
uint8_t x216 = 2U;
volatile int16_t x217 = 151;
uint16_t x220 = 179U;
int16_t x228 = INT16_MIN;
volatile int32_t t55 = -69685683;
static volatile int32_t t61 = -22285;
volatile int64_t x253 = -4LL;
int8_t x256 = INT8_MIN;
int16_t x258 = INT16_MIN;
static volatile int32_t t63 = 0;
volatile int8_t x263 = -12;
static int16_t x264 = INT16_MAX;
int64_t t65 = -244682160136654LL;
int8_t x273 = INT8_MIN;
int8_t x283 = INT8_MAX;
volatile uint64_t x290 = 20625981621183LLU;
volatile int64_t x291 = 15LL;
uint16_t x301 = 10448U;
volatile int16_t x303 = 1017;
int8_t x304 = -2;
static uint64_t x305 = 786046506179507643LLU;
static int16_t x310 = INT16_MAX;
uint64_t t77 = 2082221757431935LLU;
uint8_t x324 = UINT8_MAX;
int64_t x331 = -6LL;
volatile int64_t x332 = INT64_MIN;
static volatile uint32_t x339 = 103748630U;
static int32_t x344 = INT32_MIN;
static int32_t t83 = -271571;
int8_t x345 = INT8_MAX;
uint32_t x347 = 1619758598U;
static int32_t x352 = INT32_MIN;
volatile int32_t x353 = INT32_MIN;
uint8_t x355 = 19U;
int8_t x358 = INT8_MIN;
int16_t x367 = INT16_MIN;
uint64_t x372 = 20480100264228LLU;
volatile uint64_t t90 = 11721060LLU;
int8_t x379 = -1;
static int64_t x384 = INT64_MIN;
volatile int64_t x385 = INT64_MIN;
static int64_t t94 = 1LL;
volatile uint8_t x389 = 54U;
int32_t t96 = -926045701;
uint32_t x404 = 206U;
static int64_t t98 = -246LL;
volatile uint16_t x405 = 753U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint32_t x2 = UINT32_MAX;
	uint32_t x4 = UINT32_MAX;

	t0 = ((x1%x2)|(x3%x4));

	if (t0 != -2147424797LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x8 = 26LLU;
	static volatile uint64_t t1 = 96245933961072LLU;

	t1 = ((x5%x6)|(x7%x8));

	if (t1 != 15LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 26769U;
	int8_t x14 = -1;
	int8_t x16 = INT8_MAX;
	volatile uint64_t t2 = 3969815963130517872LLU;

	t2 = ((x13%x14)|(x15%x16));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 28007;
	volatile uint64_t x18 = 80232415LLU;
	static volatile uint64_t t3 = 2054499LLU;

	t3 = ((x17%x18)|(x19%x20));

	if (t3 != 28031LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = INT16_MIN;
	uint32_t x23 = 4100062U;
	int16_t x24 = -7305;
	volatile uint32_t t4 = 382103U;

	t4 = ((x21%x22)|(x23%x24));

	if (t4 != 4294967262U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x26 = 126644U;
	uint32_t x27 = 745U;
	static volatile int64_t x28 = INT64_MAX;
	volatile int64_t t5 = 264846941LL;

	t5 = ((x25%x26)|(x27%x28));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x29 = 7U;
	int64_t x30 = 5218025612LL;
	static uint8_t x31 = 6U;
	int32_t x32 = INT32_MAX;
	int64_t t6 = 1LL;

	t6 = ((x29%x30)|(x31%x32));

	if (t6 != 7LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 4000;
	uint64_t x34 = UINT64_MAX;
	int32_t x35 = INT32_MIN;
	int64_t x36 = INT64_MAX;
	uint64_t t7 = 229611244LLU;

	t7 = ((x33%x34)|(x35%x36));

	if (t7 != 18446744071562071968LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 0U;
	volatile int64_t x39 = INT64_MIN;
	int8_t x40 = -30;
	volatile uint64_t t8 = 148LLU;

	t8 = ((x37%x38)|(x39%x40));

	if (t8 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	volatile int64_t x43 = 4441933196101LL;
	int8_t x44 = 4;

	t9 = ((x41%x42)|(x43%x44));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = INT16_MIN;
	volatile int32_t x47 = 44435;
	volatile uint64_t x48 = 11993102LLU;
	volatile uint64_t t10 = 25904LLU;

	t10 = ((x45%x46)|(x47%x48));

	if (t10 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 7U;
	static uint8_t x50 = UINT8_MAX;
	static uint16_t x51 = 3181U;
	static uint64_t x52 = 158639LLU;
	volatile uint64_t t11 = 637482049760666LLU;

	t11 = ((x49%x50)|(x51%x52));

	if (t11 != 3183LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = INT64_MAX;
	int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MIN;
	volatile int64_t t12 = -1224758508282552333LL;

	t12 = ((x53%x54)|(x55%x56));

	if (t12 != -25LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	int64_t x58 = INT64_MIN;
	int32_t x59 = 61030;
	static volatile int32_t x60 = 14014;
	volatile int64_t t13 = 37056837883LL;

	t13 = ((x57%x58)|(x59%x60));

	if (t13 != 4294967295LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = -1LL;
	volatile uint32_t x62 = UINT32_MAX;
	int8_t x63 = -1;
	static uint16_t x64 = 13832U;

	t14 = ((x61%x62)|(x63%x64));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	int16_t x66 = -1;
	volatile int64_t x67 = INT64_MAX;
	volatile int64_t x68 = INT64_MIN;
	volatile int64_t t15 = INT64_MAX;

	t15 = ((x65%x66)|(x67%x68));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x69 = 5904U;
	int16_t x71 = INT16_MAX;
	static int8_t x72 = INT8_MAX;
	int32_t t16 = -4554028;

	t16 = ((x69%x70)|(x71%x72));

	if (t16 != 5) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x74 = -47;
	int32_t x75 = INT32_MAX;
	int64_t x76 = -8699984712308913LL;
	int64_t t17 = 869894639706LL;

	t17 = ((x73%x74)|(x75%x76));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 30962195U;
	int8_t x79 = -27;
	int8_t x80 = 28;
	uint32_t t18 = 2843973U;

	t18 = ((x77%x78)|(x79%x80));

	if (t18 != 4294967287U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1929;
	int8_t x82 = INT8_MAX;
	int32_t x83 = -1;
	volatile uint64_t t19 = 14073LLU;

	t19 = ((x81%x82)|(x83%x84));

	if (t19 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x86 = 16U;
	int64_t x87 = 40462LL;
	uint8_t x88 = 26U;
	volatile uint64_t t20 = 12392360LLU;

	t20 = ((x85%x86)|(x87%x88));

	if (t20 != 15LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x89 = 3752LLU;
	volatile uint32_t x91 = UINT32_MAX;
	volatile int32_t x92 = 69616575;
	volatile uint64_t t21 = 3LLU;

	t21 = ((x89%x90)|(x91%x92));

	if (t21 != 48357372LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = UINT16_MAX;
	uint32_t x94 = UINT32_MAX;
	static uint16_t x95 = UINT16_MAX;
	int32_t x96 = -43265452;
	static volatile uint32_t t22 = 62278U;

	t22 = ((x93%x94)|(x95%x96));

	if (t22 != 65535U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = -12827846;
	int16_t x98 = INT16_MIN;
	int16_t x100 = INT16_MIN;
	int32_t t23 = 1;

	t23 = ((x97%x98)|(x99%x100));

	if (t23 != -15558) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = INT64_MIN;
	int64_t x102 = -35466428852415096LL;
	int8_t x103 = -1;
	volatile uint32_t x104 = 847U;
	volatile int64_t t24 = -11978891585258LL;

	t24 = ((x101%x102)|(x103%x104));

	if (t24 != -2100535226850306LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = INT16_MIN;
	int16_t x106 = INT16_MIN;
	int32_t x107 = INT32_MIN;
	volatile int32_t t25 = -144;

	t25 = ((x105%x106)|(x107%x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MIN;

	t26 = ((x109%x110)|(x111%x112));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x113 = 0U;
	int16_t x114 = -6862;
	static int32_t x116 = -25311735;

	t27 = ((x113%x114)|(x115%x116));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x117 = INT64_MAX;
	static volatile int8_t x119 = INT8_MAX;
	int32_t x120 = -1;
	int64_t t28 = -118526092483509069LL;

	t28 = ((x117%x118)|(x119%x120));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	volatile uint16_t x122 = 1918U;
	static volatile int64_t x123 = INT64_MAX;
	int32_t x124 = INT32_MIN;
	volatile int64_t t29 = 11287109750538551LL;

	t29 = ((x121%x122)|(x123%x124));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x126 = INT32_MIN;
	static int8_t x127 = -1;
	int64_t x128 = -1LL;
	volatile int64_t t30 = 325174359016LL;

	t30 = ((x125%x126)|(x127%x128));

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x130 = 1403738;
	int32_t x131 = -1;
	int32_t x132 = 328;
	volatile int32_t t31 = -7451859;

	t31 = ((x129%x130)|(x131%x132));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = 2452;
	static uint8_t x136 = UINT8_MAX;
	static int32_t t32 = -1105;

	t32 = ((x133%x134)|(x135%x136));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = -1;
	int64_t x139 = -12250163LL;
	int64_t t33 = 23737036LL;

	t33 = ((x137%x138)|(x139%x140));

	if (t33 != -51LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MAX;
	int32_t x142 = 4682340;
	uint16_t x143 = 26004U;
	int8_t x144 = -12;

	t34 = ((x141%x142)|(x143%x144));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x145 = 120U;
	volatile int8_t x146 = INT8_MIN;
	int64_t x147 = -569622838533LL;
	volatile uint64_t x148 = 144904826LLU;

	t35 = ((x145%x146)|(x147%x148));

	if (t35 != 140421243LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -2151286269634205250LL;
	volatile int32_t x150 = 164469;
	static int64_t x152 = -1LL;
	int64_t t36 = -2705071030557304LL;

	t36 = ((x149%x150)|(x151%x152));

	if (t36 != -138213LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = 29;
	int16_t x154 = -1;
	static volatile uint16_t x155 = 863U;
	uint32_t x156 = UINT32_MAX;
	volatile uint32_t t37 = 688U;

	t37 = ((x153%x154)|(x155%x156));

	if (t37 != 863U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MAX;
	uint64_t x160 = UINT64_MAX;
	uint64_t t38 = UINT64_MAX;

	t38 = ((x157%x158)|(x159%x160));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x161 = 5;
	volatile int32_t x163 = INT32_MAX;
	int64_t x164 = INT64_MIN;
	int64_t t39 = -5323588LL;

	t39 = ((x161%x162)|(x163%x164));

	if (t39 != 2147483647LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 212U;
	int16_t x166 = -2691;
	int32_t x168 = -229;

	t40 = ((x165%x166)|(x167%x168));

	if (t40 != 215) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 488U;
	int16_t x170 = -1;
	static int16_t x172 = INT16_MIN;
	volatile uint32_t t41 = 618008771U;

	t41 = ((x169%x170)|(x171%x172));

	if (t41 != 494U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x174 = -1;
	int64_t x175 = -1LL;
	static volatile int16_t x176 = INT16_MAX;
	int64_t t42 = 412294352002LL;

	t42 = ((x173%x174)|(x175%x176));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x177 = 54U;
	static int32_t x179 = -1;
	int64_t x180 = INT64_MIN;
	volatile int64_t t43 = 3865153047717421359LL;

	t43 = ((x177%x178)|(x179%x180));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x182 = 1284U;
	static uint8_t x183 = 28U;
	int64_t x184 = INT64_MAX;
	volatile int64_t t44 = 17LL;

	t44 = ((x181%x182)|(x183%x184));

	if (t44 != -897LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -12927168LL;
	static int8_t x187 = INT8_MIN;
	static volatile int64_t t45 = 16LL;

	t45 = ((x185%x186)|(x187%x188));

	if (t45 != -5312345LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = INT64_MIN;
	static volatile int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MAX;
	int64_t t46 = 4099941523660LL;

	t46 = ((x189%x190)|(x191%x192));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	int16_t x195 = -3669;
	volatile int8_t x196 = INT8_MIN;
	volatile int32_t t47 = 457706;

	t47 = ((x193%x194)|(x195%x196));

	if (t47 != -85) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = -1;
	int16_t x198 = INT16_MAX;
	uint32_t x199 = 54U;
	int8_t x200 = 33;
	volatile uint32_t t48 = UINT32_MAX;

	t48 = ((x197%x198)|(x199%x200));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x204 = INT16_MAX;

	t49 = ((x201%x202)|(x203%x204));

	if (t49 != -6LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = 205384645257824707LL;
	volatile uint32_t x207 = 39140U;
	uint32_t x208 = 2088881U;
	volatile int64_t t50 = -23165830686LL;

	t50 = ((x205%x206)|(x207%x208));

	if (t50 != -2147444508LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MAX;
	static int64_t x212 = 396LL;
	int64_t t51 = 172LL;

	t51 = ((x209%x210)|(x211%x212));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	uint32_t x214 = 27237218U;
	volatile int64_t x215 = INT64_MAX;
	int64_t t52 = -1004LL;

	t52 = ((x213%x214)|(x215%x216));

	if (t52 != 18691303LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x218 = 14190930U;
	int32_t x219 = 152853;
	uint32_t t53 = 4U;

	t53 = ((x217%x218)|(x219%x220));

	if (t53 != 183U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	uint32_t x222 = 22478U;
	int16_t x223 = -5;
	static volatile uint16_t x224 = UINT16_MAX;
	static volatile uint32_t t54 = 17932298U;

	t54 = ((x221%x222)|(x223%x224));

	if (t54 != 4294967291U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = -2;
	int16_t x226 = INT16_MIN;
	volatile int8_t x227 = -31;

	t55 = ((x225%x226)|(x227%x228));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = -3306;
	volatile uint64_t x230 = 238192274427749LLU;
	int16_t x231 = INT16_MAX;
	uint16_t x232 = 19379U;
	uint64_t t56 = 4434LLU;

	t56 = ((x229%x230)|(x231%x232));

	if (t56 != 181572926963022LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x233 = 0U;
	int32_t x234 = 20435015;
	int64_t x235 = INT64_MAX;
	int16_t x236 = INT16_MAX;
	volatile int64_t t57 = 71808509161LL;

	t57 = ((x233%x234)|(x235%x236));

	if (t57 != 7LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = 10465878873532LL;
	uint8_t x238 = 14U;
	int32_t x239 = INT32_MIN;
	volatile uint64_t x240 = UINT64_MAX;
	static uint64_t t58 = 4LLU;

	t58 = ((x237%x238)|(x239%x240));

	if (t58 != 18446744071562067980LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = -2;
	int64_t x242 = INT64_MAX;
	static volatile int32_t x243 = INT32_MAX;
	uint8_t x244 = UINT8_MAX;
	volatile int64_t t59 = -33750973242590219LL;

	t59 = ((x241%x242)|(x243%x244));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = INT16_MAX;
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = INT16_MAX;
	static int16_t x248 = INT16_MIN;
	volatile int32_t t60 = -92;

	t60 = ((x245%x246)|(x247%x248));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x249 = 26U;
	int32_t x250 = -1;
	static volatile int32_t x251 = -951;
	volatile int8_t x252 = -13;

	t61 = ((x249%x250)|(x251%x252));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x254 = INT64_MIN;
	int8_t x255 = -1;
	static volatile int64_t t62 = -15944884282209576LL;

	t62 = ((x253%x254)|(x255%x256));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = -1;
	uint8_t x259 = UINT8_MAX;
	int8_t x260 = 1;

	t63 = ((x257%x258)|(x259%x260));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = INT32_MAX;
	static volatile int32_t t64 = 123579109;

	t64 = ((x261%x262)|(x263%x264));

	if (t64 != -12) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x265 = -1;
	int8_t x266 = -1;
	int64_t x267 = 58LL;
	int16_t x268 = INT16_MAX;

	t65 = ((x265%x266)|(x267%x268));

	if (t65 != 58LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x269 = -1LL;
	uint16_t x270 = 380U;
	uint8_t x271 = 29U;
	static int64_t x272 = 1667LL;
	volatile int64_t t66 = 1315061418906LL;

	t66 = ((x269%x270)|(x271%x272));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x274 = 21339098422349887LL;
	static int16_t x275 = INT16_MAX;
	static uint8_t x276 = UINT8_MAX;
	volatile int64_t t67 = 11545539799LL;

	t67 = ((x273%x274)|(x275%x276));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x281 = INT16_MIN;
	uint8_t x282 = UINT8_MAX;
	int16_t x284 = -456;
	int32_t t68 = -4108877;

	t68 = ((x281%x282)|(x283%x284));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = -361;
	static int8_t x286 = 4;
	static int64_t x287 = 16794198833LL;
	volatile uint8_t x288 = UINT8_MAX;
	int64_t t69 = 10551797584LL;

	t69 = ((x285%x286)|(x287%x288));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x289 = UINT16_MAX;
	static int8_t x292 = -1;
	volatile uint64_t t70 = 467136889746739280LLU;

	t70 = ((x289%x290)|(x291%x292));

	if (t70 != 65535LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 2U;
	uint64_t x294 = 521532835615942719LLU;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = 2841068U;
	volatile uint64_t t71 = 3417926340009LLU;

	t71 = ((x293%x294)|(x295%x296));

	if (t71 != 2477310LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = 22489U;
	uint32_t x298 = 58947U;
	int64_t x299 = -1LL;
	static int8_t x300 = INT8_MIN;
	volatile int64_t t72 = 2LL;

	t72 = ((x297%x298)|(x299%x300));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x302 = 392889847922LLU;
	uint64_t t73 = 2LLU;

	t73 = ((x301%x302)|(x303%x304));

	if (t73 != 10449LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x306 = 1786720051357480566LLU;
	int32_t x307 = -1;
	uint64_t x308 = 496561LLU;
	volatile uint64_t t74 = 224LLU;

	t74 = ((x305%x306)|(x307%x308));

	if (t74 != 786046506179573247LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MIN;
	volatile int16_t x311 = INT16_MIN;
	int32_t x312 = -1728;
	volatile int32_t t75 = 469425180;

	t75 = ((x309%x310)|(x311%x312));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = 6158U;
	int64_t x314 = INT64_MAX;
	static uint64_t x315 = 1674486486LLU;
	static int64_t x316 = -1LL;
	uint64_t t76 = 227094LLU;

	t76 = ((x313%x314)|(x315%x316));

	if (t76 != 1674492638LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = 2073472968889908129LLU;
	volatile int16_t x318 = INT16_MAX;
	int8_t x319 = INT8_MIN;
	uint8_t x320 = UINT8_MAX;

	t77 = ((x317%x318)|(x319%x320));

	if (t77 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x321 = UINT32_MAX;
	volatile uint8_t x322 = 4U;
	int8_t x323 = 53;
	uint32_t t78 = 515642461U;

	t78 = ((x321%x322)|(x323%x324));

	if (t78 != 55U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MAX;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t79 = 22407593LL;

	t79 = ((x325%x326)|(x327%x328));

	if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x329 = 3358U;
	static uint8_t x330 = UINT8_MAX;
	volatile int64_t t80 = 490491796616LL;

	t80 = ((x329%x330)|(x331%x332));

	if (t80 != -5LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MAX;
	int8_t x335 = -1;
	volatile uint32_t x336 = UINT32_MAX;
	volatile uint32_t t81 = 7219503U;

	t81 = ((x333%x334)|(x335%x336));

	if (t81 != 4294967168U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = UINT32_MAX;
	int16_t x338 = -1;
	int8_t x340 = -12;
	volatile uint32_t t82 = 487193U;

	t82 = ((x337%x338)|(x339%x340));

	if (t82 != 103748630U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x341 = -31;
	int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MAX;

	t83 = ((x341%x342)|(x343%x344));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x346 = UINT32_MAX;
	int32_t x348 = -662832052;
	uint32_t t84 = 31565U;

	t84 = ((x345%x346)|(x347%x348));

	if (t84 != 1619758719U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = -15934LL;
	volatile int16_t x350 = 25;
	static uint32_t x351 = 1187328563U;
	int64_t t85 = 140475LL;

	t85 = ((x349%x350)|(x351%x352));

	if (t85 != -9LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x354 = INT64_MIN;
	uint16_t x356 = 6594U;
	int64_t t86 = -97LL;

	t86 = ((x353%x354)|(x355%x356));

	if (t86 != -2147483629LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x357 = INT64_MAX;
	int16_t x359 = -1;
	int32_t x360 = INT32_MIN;
	static volatile int64_t t87 = -42725241626210757LL;

	t87 = ((x357%x358)|(x359%x360));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = INT32_MIN;
	int8_t x362 = INT8_MAX;
	int16_t x363 = 0;
	int16_t x364 = 23;
	volatile int32_t t88 = 54928161;

	t88 = ((x361%x362)|(x363%x364));

	if (t88 != -8) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x365 = INT16_MIN;
	static int16_t x366 = 268;
	static int64_t x368 = -106281LL;
	static volatile int64_t t89 = 45LL;

	t89 = ((x365%x366)|(x367%x368));

	if (t89 != -72LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x369 = 1730U;
	uint64_t x370 = 8000338LLU;
	uint8_t x371 = 2U;

	t90 = ((x369%x370)|(x371%x372));

	if (t90 != 1730LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = INT16_MAX;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = -220;
	static int8_t x376 = 17;
	static uint32_t t91 = UINT32_MAX;

	t91 = ((x373%x374)|(x375%x376));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x377 = -1;
	uint64_t x378 = 390833LLU;
	volatile int16_t x380 = INT16_MAX;
	static volatile uint64_t t92 = UINT64_MAX;

	t92 = ((x377%x378)|(x379%x380));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x381 = 6U;
	static int32_t x382 = 13644;
	int32_t x383 = INT32_MAX;
	int64_t t93 = -1LL;

	t93 = ((x381%x382)|(x383%x384));

	if (t93 != 2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x386 = -1LL;
	volatile int64_t x387 = INT64_MIN;
	uint32_t x388 = 13666668U;

	t94 = ((x385%x386)|(x387%x388));

	if (t94 != -6022604LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x390 = 186145645LL;
	uint64_t x391 = 478063426851LLU;
	static int16_t x392 = INT16_MIN;
	uint64_t t95 = 1LLU;

	t95 = ((x389%x390)|(x391%x392));

	if (t95 != 478063426871LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = 10425832;
	int32_t x394 = INT32_MIN;
	int8_t x395 = 4;
	int16_t x396 = -156;

	t96 = ((x393%x394)|(x395%x396));

	if (t96 != 10425836) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x397 = INT8_MIN;
	int32_t x398 = -487;
	int32_t x399 = -811193632;
	uint32_t x400 = UINT32_MAX;
	uint32_t t97 = 39U;

	t97 = ((x397%x398)|(x399%x400));

	if (t97 != 4294967264U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = INT64_MIN;
	volatile uint32_t x402 = 48U;
	int8_t x403 = INT8_MIN;

	t98 = ((x401%x402)|(x403%x404));

	if (t98 != -26LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x406 = INT32_MAX;
	int64_t x407 = INT64_MIN;
	static int8_t x408 = -1;
	int64_t t99 = 95265LL;

	t99 = ((x405%x406)|(x407%x408));

	if (t99 != 753LL) { NG(); } else { ; }
	
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

