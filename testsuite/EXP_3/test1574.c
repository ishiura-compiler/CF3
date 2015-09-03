#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 1U;
volatile int32_t t0 = -111809921;
uint16_t x5 = UINT16_MAX;
volatile int64_t x8 = INT64_MAX;
int32_t x9 = INT32_MIN;
int8_t x14 = INT8_MIN;
int64_t x20 = -1LL;
static int8_t x24 = -5;
volatile int8_t x31 = INT8_MAX;
volatile uint8_t x40 = 13U;
uint32_t x46 = UINT32_MAX;
int32_t x54 = INT32_MAX;
int8_t x55 = -1;
static uint8_t x57 = 1U;
volatile uint32_t x66 = 295U;
int8_t x68 = INT8_MIN;
static volatile int16_t x79 = INT16_MAX;
volatile int64_t t19 = -56206674LL;
int32_t x87 = -5751;
int8_t x89 = INT8_MAX;
volatile uint64_t t22 = 611LLU;
int8_t x94 = -1;
int64_t x95 = INT64_MIN;
static int8_t x97 = -36;
int16_t x101 = INT16_MIN;
uint32_t t25 = 2077U;
uint16_t x105 = UINT16_MAX;
uint64_t x107 = 3228305903LLU;
uint8_t x112 = 7U;
uint64_t x121 = 374LLU;
int32_t x124 = INT32_MIN;
int8_t x126 = INT8_MIN;
volatile int64_t x127 = 69388483121829740LL;
static int8_t x130 = INT8_MIN;
volatile uint32_t x132 = UINT32_MAX;
int16_t x137 = 3;
int16_t x138 = -282;
int16_t x147 = INT16_MIN;
int16_t x159 = -7385;
static uint64_t t39 = 1LLU;
int32_t x162 = -35707999;
int8_t x166 = 21;
int32_t x172 = INT32_MIN;
volatile int32_t t43 = -63460829;
int64_t x179 = -555546932606LL;
volatile int32_t t47 = -813;
uint64_t t48 = 785934LLU;
volatile uint16_t x197 = 3056U;
int64_t x200 = INT64_MAX;
uint8_t x201 = UINT8_MAX;
volatile uint16_t x206 = UINT16_MAX;
static int32_t x218 = -1580;
uint8_t x222 = 1U;
int8_t x229 = INT8_MAX;
volatile int64_t x231 = -1LL;
int64_t x233 = 58074528LL;
uint16_t x235 = 4016U;
uint16_t x236 = UINT16_MAX;
int64_t x242 = INT64_MIN;
int16_t x243 = INT16_MIN;
int32_t x251 = -1;
int32_t t63 = 1;
volatile int8_t x257 = INT8_MIN;
static int32_t x258 = -1136;
static uint32_t x259 = 2479U;
uint16_t x266 = UINT16_MAX;
uint32_t x281 = 102U;
int16_t x283 = -1;
static volatile uint32_t t70 = 36706382U;
uint64_t x286 = UINT64_MAX;
int32_t x290 = -1;
int8_t x291 = 1;
int8_t x295 = -6;
static volatile uint32_t x296 = UINT32_MAX;
int32_t t73 = -64025;
volatile int8_t x302 = -1;
uint16_t x316 = 90U;
volatile int32_t t76 = -275749868;
static int64_t x319 = INT64_MIN;
volatile uint64_t x322 = 1869LLU;
static volatile int32_t x333 = INT32_MAX;
volatile int8_t x338 = INT8_MIN;
volatile uint16_t x340 = 5U;
volatile int32_t t82 = 2977735;
static uint32_t x341 = 49U;
uint64_t x344 = 9400LLU;
int32_t t84 = 1;
uint32_t x350 = UINT32_MAX;
volatile int8_t x357 = INT8_MAX;
volatile uint64_t t87 = 94404920LLU;
int32_t x362 = -11;
volatile int64_t t88 = 6841LL;
int16_t x378 = -26;
static uint32_t x379 = 102U;
int64_t x406 = 508009570132LL;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint64_t x3 = UINT64_MAX;
	static uint16_t x4 = UINT16_MAX;

	t0 = ((x1%x2)+(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	int16_t x7 = INT16_MIN;
	static volatile int32_t t1 = 3;

	t1 = ((x5%x6)+(x7<=x8));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	volatile uint64_t x11 = 7925960717109189LLU;
	uint16_t x12 = 1U;
	volatile int32_t t2 = -204;

	t2 = ((x9%x10)+(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	volatile int16_t x15 = 205;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -252664;

	t3 = ((x13%x14)+(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 940523U;
	static volatile uint64_t x18 = UINT64_MAX;
	uint64_t x19 = 656832121401128512LLU;
	uint64_t t4 = 75344246312978509LLU;

	t4 = ((x17%x18)+(x19<=x20));

	if (t4 != 940524LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 3427169170015624LL;
	int32_t x22 = INT32_MAX;
	static int64_t x23 = INT64_MAX;
	int64_t t5 = -33236174LL;

	t5 = ((x21%x22)+(x23<=x24));

	if (t5 != 17768324LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 1863300130U;
	volatile int8_t x26 = INT8_MIN;
	int8_t x27 = 53;
	volatile uint8_t x28 = UINT8_MAX;
	volatile uint32_t t6 = 248609U;

	t6 = ((x25%x26)+(x27<=x28));

	if (t6 != 1863300131U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MIN;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -363168;

	t7 = ((x29%x30)+(x31<=x32));

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 306329168U;
	int64_t x34 = -3563035LL;
	uint64_t x35 = 41335285202317398LLU;
	int64_t x36 = -1LL;
	static volatile int64_t t8 = 15LL;

	t8 = ((x33%x34)+(x35<=x36));

	if (t8 != 3471194LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 32U;
	static int64_t x38 = -36938277570687LL;
	uint16_t x39 = UINT16_MAX;
	volatile int64_t t9 = -4638LL;

	t9 = ((x37%x38)+(x39<=x40));

	if (t9 != 32LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	static int8_t x42 = INT8_MAX;
	int8_t x43 = INT8_MAX;
	static uint16_t x44 = 6254U;
	uint32_t t10 = 876925323U;

	t10 = ((x41%x42)+(x43<=x44));

	if (t10 != 16U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 1;
	static int16_t x47 = -1;
	int16_t x48 = INT16_MIN;
	static volatile uint32_t t11 = 1160362U;

	t11 = ((x45%x46)+(x47<=x48));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 592086798LLU;
	volatile int64_t x50 = -101849302102456371LL;
	int64_t x51 = 491LL;
	uint32_t x52 = 39899U;
	static uint64_t t12 = 6282949046897LLU;

	t12 = ((x49%x50)+(x51<=x52));

	if (t12 != 592086799LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = 125LL;
	int8_t x56 = -1;
	int64_t t13 = -1LL;

	t13 = ((x53%x54)+(x55<=x56));

	if (t13 != 126LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	int64_t x59 = -1LL;
	uint8_t x60 = 81U;
	int32_t t14 = 73086;

	t14 = ((x57%x58)+(x59<=x60));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 0U;
	uint8_t x62 = 1U;
	int16_t x63 = -1;
	static int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 267;

	t15 = ((x61%x62)+(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	static int8_t x67 = INT8_MIN;
	volatile uint32_t t16 = 4U;

	t16 = ((x65%x66)+(x67<=x68));

	if (t16 != 128U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MAX;
	uint16_t x71 = 1U;
	static uint8_t x72 = UINT8_MAX;
	volatile int64_t t17 = -39134722779720423LL;

	t17 = ((x69%x70)+(x71<=x72));

	if (t17 != -127LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int32_t x74 = INT32_MIN;
	static uint64_t x75 = UINT64_MAX;
	uint32_t x76 = 2225767U;
	static int32_t t18 = 1;

	t18 = ((x73%x74)+(x75<=x76));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = 9U;
	static volatile int64_t x78 = -1LL;
	uint64_t x80 = UINT64_MAX;

	t19 = ((x77%x78)+(x79<=x80));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MIN;
	volatile int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MAX;
	int16_t x84 = -1;
	int64_t t20 = -526132830184LL;

	t20 = ((x81%x82)+(x83<=x84));

	if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 1152;
	uint64_t x86 = 4691LLU;
	static uint16_t x88 = 348U;
	uint64_t t21 = 31750LLU;

	t21 = ((x85%x86)+(x87<=x88));

	if (t21 != 1153LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 65721617LLU;
	volatile int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MAX;

	t22 = ((x89%x90)+(x91<=x92));

	if (t22 != 127LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -922903;
	volatile uint32_t x96 = UINT32_MAX;
	static volatile int32_t t23 = 366299781;

	t23 = ((x93%x94)+(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MIN;
	int8_t x99 = 0;
	static int32_t x100 = 1;
	int32_t t24 = 0;

	t24 = ((x97%x98)+(x99<=x100));

	if (t24 != -35) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = 75463U;
	int64_t x103 = -1LL;
	int32_t x104 = -1;

	t25 = ((x101%x102)+(x103<=x104));

	if (t25 != 33347U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = -1;
	int8_t x108 = -1;
	volatile int32_t t26 = -86559447;

	t26 = ((x105%x106)+(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	static uint64_t x110 = 28947761403LLU;
	static uint32_t x111 = 1882488U;
	volatile uint64_t t27 = 20858545418LLU;

	t27 = ((x109%x110)+(x111<=x112));

	if (t27 != 25223994294LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	volatile int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MIN;
	int32_t x116 = -1;
	int64_t t28 = 264391668445063434LL;

	t28 = ((x113%x114)+(x115<=x116));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 20611210780604508LLU;
	int64_t x118 = 281327LL;
	int16_t x119 = 0;
	uint64_t x120 = 6725188979LLU;
	volatile uint64_t t29 = 12LLU;

	t29 = ((x117%x118)+(x119<=x120));

	if (t29 != 1384LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x122 = -1;
	static uint16_t x123 = 7965U;
	volatile uint64_t t30 = 114265LLU;

	t30 = ((x121%x122)+(x123<=x124));

	if (t30 != 374LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	int32_t x128 = INT32_MIN;
	static int32_t t31 = -55954;

	t31 = ((x125%x126)+(x127<=x128));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 1567U;
	static int32_t x131 = -1;
	int32_t t32 = 0;

	t32 = ((x129%x130)+(x131<=x132));

	if (t32 != 32) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = UINT64_MAX;
	static uint16_t x134 = UINT16_MAX;
	uint64_t x135 = 8684363362387025869LLU;
	int32_t x136 = INT32_MIN;
	volatile uint64_t t33 = 3793998846629500LLU;

	t33 = ((x133%x134)+(x135<=x136));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x139 = 1761098214U;
	static int8_t x140 = INT8_MAX;
	static volatile int32_t t34 = 265312179;

	t34 = ((x137%x138)+(x139<=x140));

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MAX;
	int32_t x142 = -1;
	volatile int32_t x143 = INT32_MAX;
	volatile uint8_t x144 = 2U;
	int64_t t35 = -376208LL;

	t35 = ((x141%x142)+(x143<=x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	volatile int16_t x146 = -1;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t36 = -1049366;

	t36 = ((x145%x146)+(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int32_t x150 = INT32_MAX;
	static int32_t x151 = INT32_MAX;
	int32_t x152 = 114;
	static int32_t t37 = -19;

	t37 = ((x149%x150)+(x151<=x152));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 5989U;
	volatile int8_t x154 = INT8_MIN;
	static int32_t x155 = -1;
	static volatile int64_t x156 = INT64_MIN;
	static uint32_t t38 = 896694U;

	t38 = ((x153%x154)+(x155<=x156));

	if (t38 != 5989U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	uint64_t x158 = 829405LLU;
	int32_t x160 = INT32_MIN;

	t39 = ((x157%x158)+(x159<=x160));

	if (t39 != 127LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = 1014859LLU;
	static int64_t x163 = INT64_MIN;
	uint8_t x164 = 0U;
	volatile uint64_t t40 = 130931058118LLU;

	t40 = ((x161%x162)+(x163<=x164));

	if (t40 != 1014860LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	uint32_t x167 = 3U;
	static int64_t x168 = INT64_MIN;
	volatile int32_t t41 = -13254384;

	t41 = ((x165%x166)+(x167<=x168));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	int8_t x170 = INT8_MIN;
	int32_t x171 = -723;
	int32_t t42 = 203;

	t42 = ((x169%x170)+(x171<=x172));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	static uint8_t x174 = UINT8_MAX;
	uint8_t x175 = UINT8_MAX;
	static int32_t x176 = 1984019;

	t43 = ((x173%x174)+(x175<=x176));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = -35;
	int64_t x178 = 4755LL;
	uint16_t x180 = 3U;
	int64_t t44 = 106093154LL;

	t44 = ((x177%x178)+(x179<=x180));

	if (t44 != -34LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MIN;
	static volatile uint32_t x183 = 14664U;
	static uint64_t x184 = 1297LLU;
	int32_t t45 = 69;

	t45 = ((x181%x182)+(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 15830U;
	static int64_t x186 = -1LL;
	int16_t x187 = INT16_MAX;
	volatile int16_t x188 = INT16_MIN;
	static volatile int64_t t46 = 22359337LL;

	t46 = ((x185%x186)+(x187<=x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 0;
	int8_t x190 = INT8_MIN;
	int32_t x191 = 13759;
	volatile int8_t x192 = INT8_MIN;

	t47 = ((x189%x190)+(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -421;
	uint64_t x194 = 676LLU;
	uint16_t x195 = 24U;
	volatile uint8_t x196 = 0U;

	t48 = ((x193%x194)+(x195<=x196));

	if (t48 != 11LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = -1;
	int8_t x199 = 0;
	static volatile int32_t t49 = 6089;

	t49 = ((x197%x198)+(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x202 = INT32_MAX;
	int64_t x203 = INT64_MIN;
	static uint16_t x204 = UINT16_MAX;
	int32_t t50 = -5;

	t50 = ((x201%x202)+(x203<=x204));

	if (t50 != 256) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 1728566880651712411LLU;
	int32_t x207 = -1;
	static int16_t x208 = INT16_MIN;
	uint64_t t51 = 4110163LLU;

	t51 = ((x205%x206)+(x207<=x208));

	if (t51 != 46531LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x209 = -1LL;
	int64_t x210 = -120175321364849LL;
	static int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MAX;
	volatile int64_t t52 = -15630497LL;

	t52 = ((x209%x210)+(x211<=x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 0U;
	static uint8_t x214 = 3U;
	int32_t x215 = -1;
	volatile int32_t x216 = -16920;
	static int32_t t53 = -1;

	t53 = ((x213%x214)+(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 1LLU;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = -1LL;
	static volatile uint64_t t54 = 261542071035941705LLU;

	t54 = ((x217%x218)+(x219<=x220));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int8_t x223 = INT8_MAX;
	int8_t x224 = 8;
	volatile int32_t t55 = -904906;

	t55 = ((x221%x222)+(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = -1434;
	int8_t x227 = -1;
	static uint8_t x228 = 4U;
	int64_t t56 = -5896109012728664LL;

	t56 = ((x225%x226)+(x227<=x228));

	if (t56 != -313LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MIN;
	uint32_t x232 = 977941U;
	int32_t t57 = -14351621;

	t57 = ((x229%x230)+(x231<=x232));

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MIN;
	volatile int64_t t58 = -62353222501LL;

	t58 = ((x233%x234)+(x235<=x236));

	if (t58 != 33LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	static volatile uint8_t x238 = UINT8_MAX;
	int64_t x239 = -15082252908809663LL;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = 0;

	t59 = ((x237%x238)+(x239<=x240));

	if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = -1;
	uint32_t x244 = 25U;
	int64_t t60 = 18745LL;

	t60 = ((x241%x242)+(x243<=x244));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MIN;
	int16_t x248 = -1;
	volatile int32_t t61 = -4322435;

	t61 = ((x245%x246)+(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	static int32_t x250 = INT32_MAX;
	uint64_t x252 = UINT64_MAX;
	static volatile int32_t t62 = -2;

	t62 = ((x249%x250)+(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = -56;
	uint8_t x254 = 2U;
	volatile int64_t x255 = -1LL;
	uint8_t x256 = 17U;

	t63 = ((x253%x254)+(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x260 = 30403;
	int32_t t64 = -5800;

	t64 = ((x257%x258)+(x259<=x260));

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	static int16_t x262 = -1;
	volatile int32_t x263 = INT32_MAX;
	int32_t x264 = INT32_MIN;
	static int32_t t65 = 4057445;

	t65 = ((x261%x262)+(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	uint32_t x267 = 6405U;
	uint32_t x268 = 851388U;
	int32_t t66 = -3;

	t66 = ((x265%x266)+(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 61U;
	static int32_t x270 = 157343786;
	int8_t x271 = 0;
	uint16_t x272 = UINT16_MAX;
	int32_t t67 = -1102663;

	t67 = ((x269%x270)+(x271<=x272));

	if (t67 != 62) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -10;
	uint64_t x274 = 1082661741234LLU;
	uint64_t x275 = 462149676219136LLU;
	uint32_t x276 = 6605U;
	static volatile uint64_t t68 = 5128981LLU;

	t68 = ((x273%x274)+(x275<=x276));

	if (t68 != 378837017322LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	int16_t x280 = -15714;
	int32_t t69 = -184564;

	t69 = ((x277%x278)+(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x282 = INT16_MAX;
	int8_t x284 = INT8_MAX;

	t70 = ((x281%x282)+(x283<=x284));

	if (t70 != 103U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = 2222U;
	static int8_t x287 = 15;
	static int8_t x288 = INT8_MIN;
	uint64_t t71 = 1LLU;

	t71 = ((x285%x286)+(x287<=x288));

	if (t71 != 2222LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 72LLU;
	uint32_t x292 = 1U;
	uint64_t t72 = 4125LLU;

	t72 = ((x289%x290)+(x291<=x292));

	if (t72 != 73LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 20042;
	int32_t x294 = -1;

	t73 = ((x293%x294)+(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x301 = 13U;
	int16_t x303 = INT16_MIN;
	static int64_t x304 = INT64_MIN;
	volatile int32_t t74 = -511832494;

	t74 = ((x301%x302)+(x303<=x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x305 = UINT8_MAX;
	static int64_t x306 = 797081247LL;
	int32_t x307 = -191;
	int16_t x308 = INT16_MIN;
	volatile int64_t t75 = -8010LL;

	t75 = ((x305%x306)+(x307<=x308));

	if (t75 != 255LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = INT8_MIN;
	volatile int16_t x314 = INT16_MAX;
	static uint8_t x315 = UINT8_MAX;

	t76 = ((x313%x314)+(x315<=x316));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MAX;
	int16_t x318 = INT16_MIN;
	volatile int16_t x320 = INT16_MIN;
	static volatile int32_t t77 = 2171013;

	t77 = ((x317%x318)+(x319<=x320));

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = -1LL;
	volatile int32_t x323 = 11978;
	int16_t x324 = -1;
	volatile uint64_t t78 = 58719205519663LLU;

	t78 = ((x321%x322)+(x323<=x324));

	if (t78 != 1401LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = -1;
	volatile int8_t x326 = -1;
	static int64_t x327 = -1LL;
	int8_t x328 = INT8_MIN;
	volatile int32_t t79 = -1847144;

	t79 = ((x325%x326)+(x327<=x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -5;
	int64_t x330 = -1LL;
	volatile uint64_t x331 = 12503LLU;
	volatile int8_t x332 = -1;
	volatile int64_t t80 = -643LL;

	t80 = ((x329%x330)+(x331<=x332));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x334 = 371;
	int16_t x335 = INT16_MIN;
	int64_t x336 = INT64_MIN;
	static int32_t t81 = 1;

	t81 = ((x333%x334)+(x335<=x336));

	if (t81 != 232) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = 1198;
	static uint64_t x339 = 14878290LLU;

	t82 = ((x337%x338)+(x339<=x340));

	if (t82 != 46) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x342 = UINT16_MAX;
	static int16_t x343 = INT16_MIN;
	volatile uint32_t t83 = 59098U;

	t83 = ((x341%x342)+(x343<=x344));

	if (t83 != 49U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = 1;
	int32_t x346 = INT32_MIN;
	uint16_t x347 = 1U;
	volatile int16_t x348 = 50;

	t84 = ((x345%x346)+(x347<=x348));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = -1;
	int16_t x351 = 17;
	uint8_t x352 = 43U;
	uint32_t t85 = 3918U;

	t85 = ((x349%x350)+(x351<=x352));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MAX;
	static int8_t x355 = INT8_MAX;
	static volatile uint64_t x356 = UINT64_MAX;
	volatile int32_t t86 = -26;

	t86 = ((x353%x354)+(x355<=x356));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x358 = 1247486652032LLU;
	static int64_t x359 = INT64_MAX;
	int32_t x360 = -1;

	t87 = ((x357%x358)+(x359<=x360));

	if (t87 != 127LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x361 = INT64_MAX;
	uint64_t x363 = 2978295933LLU;
	static volatile int8_t x364 = 5;

	t88 = ((x361%x362)+(x363<=x364));

	if (t88 != 7LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = -1;
	static uint64_t x366 = 8452199LLU;
	int64_t x367 = -1127901972100225736LL;
	uint32_t x368 = 233498511U;
	volatile uint64_t t89 = 114913287LLU;

	t89 = ((x365%x366)+(x367<=x368));

	if (t89 != 4045939LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x369 = UINT32_MAX;
	volatile int32_t x370 = INT32_MAX;
	int8_t x371 = -1;
	int16_t x372 = INT16_MAX;
	uint32_t t90 = 2334136U;

	t90 = ((x369%x370)+(x371<=x372));

	if (t90 != 2U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = -1;
	int32_t x374 = 120;
	volatile uint16_t x375 = UINT16_MAX;
	volatile int32_t x376 = 28;
	volatile int32_t t91 = 8327189;

	t91 = ((x373%x374)+(x375<=x376));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = INT8_MIN;
	int16_t x380 = INT16_MAX;
	volatile int32_t t92 = -2;

	t92 = ((x377%x378)+(x379<=x380));

	if (t92 != -23) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x381 = INT64_MIN;
	static int32_t x382 = INT32_MAX;
	static int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MIN;
	static int64_t t93 = -985019573783616879LL;

	t93 = ((x381%x382)+(x383<=x384));

	if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x385 = -1;
	int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = UINT32_MAX;
	static volatile int32_t t94 = -85467146;

	t94 = ((x385%x386)+(x387<=x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = -1;
	volatile uint32_t x390 = UINT32_MAX;
	int64_t x391 = INT64_MAX;
	static volatile uint32_t x392 = 8610905U;
	static volatile uint32_t t95 = 15U;

	t95 = ((x389%x390)+(x391<=x392));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x397 = -84289LL;
	int16_t x398 = -1;
	int32_t x399 = -8140;
	int32_t x400 = 948;
	volatile int64_t t96 = -649142809289LL;

	t96 = ((x397%x398)+(x399<=x400));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = -1LL;
	int8_t x402 = INT8_MIN;
	static int64_t x403 = -1LL;
	volatile int16_t x404 = -3558;
	static volatile int64_t t97 = 88468153510209LL;

	t97 = ((x401%x402)+(x403<=x404));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x405 = 80U;
	int8_t x407 = 55;
	uint16_t x408 = 10795U;
	volatile int64_t t98 = -24687246917658869LL;

	t98 = ((x405%x406)+(x407<=x408));

	if (t98 != 81LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 380559030LLU;
	int16_t x410 = -4;
	static uint8_t x411 = 1U;
	int16_t x412 = INT16_MIN;
	uint64_t t99 = 6LLU;

	t99 = ((x409%x410)+(x411<=x412));

	if (t99 != 380559030LLU) { NG(); } else { ; }
	
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

