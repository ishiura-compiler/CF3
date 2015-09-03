#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 150U;
volatile uint64_t x6 = 101LLU;
uint8_t x8 = 1U;
int64_t t4 = 76289845492LL;
static int32_t x43 = INT32_MAX;
int32_t x44 = INT32_MAX;
static int8_t x46 = INT8_MIN;
int64_t x49 = INT64_MAX;
uint64_t x50 = 2496346070873572LLU;
uint64_t x68 = 25LLU;
uint64_t t12 = 17057543217871055LLU;
volatile int64_t x74 = -128180513666491LL;
volatile uint32_t x77 = 2U;
uint8_t x80 = UINT8_MAX;
static uint64_t x99 = 11597987426620LLU;
int8_t x103 = INT8_MIN;
volatile int32_t t18 = 16444270;
uint64_t x110 = 107350LLU;
volatile uint32_t t21 = 119253U;
uint16_t x124 = 0U;
uint64_t t24 = 1916LLU;
int64_t x132 = INT64_MIN;
int64_t t25 = 81797279692410445LL;
static int8_t x146 = -1;
int16_t x149 = -1;
volatile int64_t x158 = INT64_MAX;
volatile uint64_t x162 = 1904LLU;
uint32_t x164 = 7214U;
int64_t x176 = -1LL;
int64_t t36 = 244387LL;
int16_t x178 = INT16_MIN;
uint16_t x179 = 10233U;
uint32_t x187 = 0U;
int64_t t39 = -251LL;
uint64_t t40 = 6LLU;
int32_t x197 = INT32_MIN;
static int64_t x203 = INT64_MAX;
static int16_t x204 = -11935;
volatile int8_t x208 = 5;
uint64_t x217 = UINT64_MAX;
int32_t x220 = INT32_MIN;
uint64_t t46 = 1802608884801970LLU;
int16_t x235 = -1;
int16_t x246 = -1;
static int16_t x249 = INT16_MIN;
static int32_t x259 = -1;
static int32_t t55 = -1394789;
static uint32_t x262 = 1813933090U;
uint32_t x266 = 195514U;
static int16_t x280 = -4089;
int16_t x284 = INT16_MAX;
int64_t x288 = INT64_MIN;
uint16_t x289 = 3U;
uint32_t t63 = 55961U;
uint32_t x297 = 64471U;
static volatile int64_t t64 = 31884948714006436LL;
int16_t x301 = INT16_MAX;
volatile int32_t x307 = INT32_MIN;
volatile int32_t t66 = 96669636;
volatile int16_t x311 = INT16_MAX;
uint32_t x327 = 69281U;
uint32_t x330 = UINT32_MAX;
volatile int64_t x331 = 1466000918LL;
volatile int32_t x336 = INT32_MIN;
int32_t x343 = INT32_MIN;
int32_t x357 = INT32_MIN;
int8_t x364 = INT8_MIN;
static uint16_t x366 = 180U;
static int8_t x367 = INT8_MIN;
volatile int32_t x371 = INT32_MIN;
static int64_t x375 = -8493LL;
int32_t x377 = INT32_MIN;
uint32_t x378 = 20U;
uint16_t x390 = UINT16_MAX;
uint64_t x391 = 44512362148970674LLU;
static int16_t x402 = INT16_MAX;
volatile int16_t x409 = -1;
static int8_t x411 = 6;
static uint8_t x417 = UINT8_MAX;
volatile uint32_t t90 = 223U;
int16_t x421 = INT16_MAX;
volatile int64_t t91 = 0LL;
int32_t x434 = INT32_MAX;
static volatile int64_t t96 = -107LL;
int8_t x449 = INT8_MIN;


void f0(void) {
	uint8_t x1 = 87U;
	static uint32_t x2 = UINT32_MAX;
	static int8_t x3 = INT8_MIN;
	uint32_t x4 = 340U;

	t0 = ((x1/x2)-(x3&x4));

	if (t0 != 4294967040U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint32_t x7 = UINT32_MAX;
	static volatile uint64_t t1 = 59178164672603LLU;

	t1 = ((x5/x6)-(x7&x8));

	if (t1 != 182641030411505622LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MAX;
	uint64_t x14 = UINT64_MAX;
	volatile int64_t x15 = INT64_MIN;
	uint64_t x16 = UINT64_MAX;
	uint64_t t2 = 222844982044LLU;

	t2 = ((x13/x14)-(x15&x16));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 10U;
	int64_t x22 = 297LL;
	int64_t x23 = -1LL;
	static int64_t x24 = -1LL;
	static volatile int64_t t3 = 650946974LL;

	t3 = ((x21/x22)-(x23&x24));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = -1;
	int64_t x26 = -1LL;
	volatile int64_t x27 = -14090LL;
	int64_t x28 = -1LL;

	t4 = ((x25/x26)-(x27&x28));

	if (t4 != 14091LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = 1;
	int16_t x30 = INT16_MIN;
	int32_t x31 = -1843;
	uint64_t x32 = 21457417780LLU;
	uint64_t t5 = 218770186799310355LLU;

	t5 = ((x29/x30)-(x31&x32));

	if (t5 != 18446744052252135420LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x37 = INT16_MIN;
	int32_t x38 = INT32_MIN;
	static int32_t x39 = -1;
	int8_t x40 = -1;
	int32_t t6 = 23890732;

	t6 = ((x37/x38)-(x39&x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 18U;
	int8_t x42 = INT8_MIN;
	volatile int32_t t7 = -44082807;

	t7 = ((x41/x42)-(x43&x44));

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	volatile int8_t x47 = -1;
	static int32_t x48 = -1;
	int32_t t8 = -10330116;

	t8 = ((x45/x46)-(x47&x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x51 = INT32_MIN;
	int16_t x52 = -2012;
	volatile uint64_t t9 = 577564625LLU;

	t9 = ((x49/x50)-(x51&x52));

	if (t9 != 2147487342LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x53 = -1;
	uint16_t x54 = 2U;
	uint16_t x55 = UINT16_MAX;
	volatile int8_t x56 = -30;
	static volatile int32_t t10 = 1;

	t10 = ((x53/x54)-(x55&x56));

	if (t10 != -65506) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x61 = INT16_MIN;
	volatile uint32_t x62 = 15U;
	static int8_t x63 = -1;
	static uint32_t x64 = 3U;
	static uint32_t t11 = 27086637U;

	t11 = ((x61/x62)-(x63&x64));

	if (t11 != 286328965U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x65 = INT32_MIN;
	int64_t x66 = INT64_MIN;
	volatile int64_t x67 = -8LL;

	t12 = ((x65/x66)-(x67&x68));

	if (t12 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x73 = 4122U;
	volatile int8_t x75 = INT8_MAX;
	int8_t x76 = INT8_MAX;
	volatile int64_t t13 = 942LL;

	t13 = ((x73/x74)-(x75&x76));

	if (t13 != -127LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x78 = -29;
	int64_t x79 = INT64_MIN;
	int64_t t14 = 194339LL;

	t14 = ((x77/x78)-(x79&x80));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x89 = 9856U;
	static uint64_t x90 = UINT64_MAX;
	static int16_t x91 = 6643;
	int32_t x92 = -1;
	static volatile uint64_t t15 = 76790235528541593LLU;

	t15 = ((x89/x90)-(x91&x92));

	if (t15 != 18446744073709544973LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x93 = 180U;
	int8_t x94 = INT8_MIN;
	volatile int64_t x95 = INT64_MIN;
	int64_t x96 = -1LL;
	int64_t t16 = INT64_MAX;

	t16 = ((x93/x94)-(x95&x96));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x97 = INT32_MIN;
	volatile int32_t x98 = INT32_MIN;
	volatile uint32_t x100 = UINT32_MAX;
	static volatile uint64_t t17 = 46822LLU;

	t17 = ((x97/x98)-(x99&x100));

	if (t17 != 18446744072133824197LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x101 = -1;
	int8_t x102 = 4;
	uint16_t x104 = 49U;

	t18 = ((x101/x102)-(x103&x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x105 = INT16_MAX;
	int32_t x106 = -1;
	static int16_t x107 = INT16_MAX;
	int8_t x108 = INT8_MIN;
	int32_t t19 = 681196;

	t19 = ((x105/x106)-(x107&x108));

	if (t19 != -65407) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x109 = 77U;
	int32_t x111 = -1;
	int16_t x112 = -1;
	volatile uint64_t t20 = 885211LLU;

	t20 = ((x109/x110)-(x111&x112));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x113 = 134793U;
	int16_t x114 = -1;
	int32_t x115 = 110075128;
	static int16_t x116 = -65;

	t21 = ((x113/x114)-(x115&x116));

	if (t21 != 4184892232U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = 151U;
	int16_t x118 = -1;
	static int64_t x119 = -184690674753LL;
	int32_t x120 = INT32_MAX;
	volatile int64_t t22 = -470920LL;

	t22 = ((x117/x118)-(x119&x120));

	if (t22 != -2140402774LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x121 = 3266LLU;
	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MAX;
	uint64_t t23 = 17238247730232LLU;

	t23 = ((x121/x122)-(x123&x124));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x125 = INT32_MIN;
	uint8_t x126 = UINT8_MAX;
	int64_t x127 = -1LL;
	uint64_t x128 = 94LLU;

	t24 = ((x125/x126)-(x127&x128));

	if (t24 != 18446744073701130018LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x129 = UINT32_MAX;
	volatile uint8_t x130 = UINT8_MAX;
	uint8_t x131 = 2U;

	t25 = ((x129/x130)-(x131&x132));

	if (t25 != 16843009LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MAX;
	int8_t x135 = INT8_MAX;
	static volatile int32_t x136 = INT32_MIN;
	volatile int32_t t26 = -371;

	t26 = ((x133/x134)-(x135&x136));

	if (t26 != -65538) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x137 = -15;
	static int8_t x138 = INT8_MIN;
	volatile int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MIN;
	volatile int32_t t27 = 63888053;

	t27 = ((x137/x138)-(x139&x140));

	if (t27 != 32768) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = -1LL;
	uint32_t x142 = 4028534U;
	int32_t x143 = -1;
	static volatile int8_t x144 = -1;
	volatile int64_t t28 = -11196136464LL;

	t28 = ((x141/x142)-(x143&x144));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = UINT16_MAX;
	uint8_t x147 = UINT8_MAX;
	int64_t x148 = INT64_MIN;
	volatile int64_t t29 = -131023956240393793LL;

	t29 = ((x145/x146)-(x147&x148));

	if (t29 != -65535LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x150 = 16U;
	int64_t x151 = INT64_MAX;
	int64_t x152 = INT64_MAX;
	int64_t t30 = 51LL;

	t30 = ((x149/x150)-(x151&x152));

	if (t30 != -9223372036586340352LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x153 = INT8_MAX;
	static uint32_t x154 = 21419430U;
	int16_t x155 = INT16_MAX;
	volatile int8_t x156 = -26;
	volatile uint32_t t31 = 3250U;

	t31 = ((x153/x154)-(x155&x156));

	if (t31 != 4294934554U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x157 = INT64_MIN;
	uint16_t x159 = 22U;
	static uint32_t x160 = 477879U;
	int64_t t32 = 24755984066LL;

	t32 = ((x157/x158)-(x159&x160));

	if (t32 != -23LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x161 = 189779369127623LL;
	volatile uint16_t x163 = 1U;
	volatile uint64_t t33 = 113LLU;

	t33 = ((x161/x162)-(x163&x164));

	if (t33 != 99674038407LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = 6620U;
	int64_t x166 = -8408968LL;
	int16_t x167 = -1;
	uint16_t x168 = 1328U;
	static int64_t t34 = 99541873LL;

	t34 = ((x165/x166)-(x167&x168));

	if (t34 != -1328LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x169 = INT8_MAX;
	uint64_t x170 = 1870266966LLU;
	int64_t x171 = INT64_MAX;
	uint8_t x172 = 28U;
	volatile uint64_t t35 = 3723101788804877LLU;

	t35 = ((x169/x170)-(x171&x172));

	if (t35 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x173 = INT64_MAX;
	int16_t x174 = 5;
	static uint8_t x175 = UINT8_MAX;

	t36 = ((x173/x174)-(x175&x176));

	if (t36 != 1844674407370954906LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = -19581459066LL;
	static int16_t x180 = INT16_MIN;
	int64_t t37 = 12LL;

	t37 = ((x177/x178)-(x179&x180));

	if (t37 != 597578LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x181 = 1U;
	volatile int32_t x182 = INT32_MAX;
	static int32_t x183 = INT32_MAX;
	int8_t x184 = INT8_MIN;
	volatile int32_t t38 = 99304;

	t38 = ((x181/x182)-(x183&x184));

	if (t38 != -2147483520) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = 1LL;
	int8_t x188 = 1;

	t39 = ((x185/x186)-(x187&x188));

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x189 = -1LL;
	uint64_t x190 = 2111929570LLU;
	uint64_t x191 = UINT64_MAX;
	int64_t x192 = INT64_MAX;

	t40 = ((x189/x190)-(x191&x192));

	if (t40 != 9223372045589320907LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = INT16_MAX;
	int16_t x194 = INT16_MAX;
	int8_t x195 = 45;
	int32_t x196 = -812897657;
	volatile int32_t t41 = -8;

	t41 = ((x193/x194)-(x195&x196));

	if (t41 != -4) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x198 = INT8_MAX;
	int64_t x199 = INT64_MIN;
	int8_t x200 = 1;
	int64_t t42 = -7500LL;

	t42 = ((x197/x198)-(x199&x200));

	if (t42 != -16909320LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = 1;
	int32_t x202 = INT32_MIN;
	int64_t t43 = 16631724631016LL;

	t43 = ((x201/x202)-(x203&x204));

	if (t43 != -9223372036854763873LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x205 = INT16_MIN;
	int64_t x206 = -457612970329494942LL;
	int16_t x207 = 20;
	volatile int64_t t44 = 10596LL;

	t44 = ((x205/x206)-(x207&x208));

	if (t44 != -4LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = -1LL;
	uint16_t x210 = 521U;
	uint32_t x211 = 15657U;
	int8_t x212 = INT8_MAX;
	int64_t t45 = 27510LL;

	t45 = ((x209/x210)-(x211&x212));

	if (t45 != -41LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x218 = INT16_MIN;
	int64_t x219 = INT64_MIN;

	t46 = ((x217/x218)-(x219&x220));

	if (t46 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x221 = INT64_MIN;
	int32_t x222 = INT32_MIN;
	int16_t x223 = 492;
	int8_t x224 = 62;
	static int64_t t47 = 22998LL;

	t47 = ((x221/x222)-(x223&x224));

	if (t47 != 4294967252LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MAX;
	static int8_t x226 = INT8_MAX;
	int64_t x227 = -138064721119592482LL;
	uint8_t x228 = 3U;
	volatile int64_t t48 = 8950LL;

	t48 = ((x225/x226)-(x227&x228));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = 23196U;
	uint64_t x230 = 23141LLU;
	volatile uint8_t x231 = 7U;
	int64_t x232 = INT64_MAX;
	volatile uint64_t t49 = 3784LLU;

	t49 = ((x229/x230)-(x231&x232));

	if (t49 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = -1;
	int8_t x234 = -1;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t50 = -603260511;

	t50 = ((x233/x234)-(x235&x236));

	if (t50 != 32769) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x237 = 129431U;
	uint64_t x238 = 1LLU;
	int32_t x239 = -1;
	static uint32_t x240 = UINT32_MAX;
	static volatile uint64_t t51 = 139LLU;

	t51 = ((x237/x238)-(x239&x240));

	if (t51 != 18446744069414713752LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = -39248256826062692LL;
	static int64_t x242 = INT64_MAX;
	volatile int8_t x243 = -1;
	int8_t x244 = INT8_MIN;
	volatile int64_t t52 = -632LL;

	t52 = ((x241/x242)-(x243&x244));

	if (t52 != 128LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x245 = INT8_MAX;
	static int32_t x247 = INT32_MIN;
	uint8_t x248 = 1U;
	volatile int32_t t53 = -1223;

	t53 = ((x245/x246)-(x247&x248));

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x250 = 2;
	uint16_t x251 = UINT16_MAX;
	uint64_t x252 = 4308504234779657LLU;
	uint64_t t54 = 1786958813394726039LLU;

	t54 = ((x249/x250)-(x251&x252));

	if (t54 != 18446744073709509623LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MAX;
	int8_t x260 = INT8_MAX;

	t55 = ((x257/x258)-(x259&x260));

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = INT8_MAX;
	volatile uint16_t x263 = 1354U;
	volatile uint8_t x264 = 35U;
	uint32_t t56 = 11971U;

	t56 = ((x261/x262)-(x263&x264));

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = -1;
	int16_t x267 = INT16_MIN;
	int32_t x268 = -1680762;
	uint32_t t57 = 2284156U;

	t57 = ((x265/x266)-(x267&x268));

	if (t57 != 1725903U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = INT64_MIN;
	static uint32_t x270 = 334650U;
	volatile int8_t x271 = INT8_MIN;
	int16_t x272 = -79;
	volatile int64_t t58 = -10LL;

	t58 = ((x269/x270)-(x271&x272));

	if (t58 != -27561249176189LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x274 = 17;
	static volatile int32_t x275 = INT32_MAX;
	uint32_t x276 = 4460348U;
	uint32_t t59 = 116U;

	t59 = ((x273/x274)-(x275&x276));

	if (t59 != 4290506963U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x277 = -1;
	int16_t x278 = INT16_MAX;
	int16_t x279 = -2;
	int32_t t60 = -1069;

	t60 = ((x277/x278)-(x279&x280));

	if (t60 != 4090) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = INT8_MIN;
	static volatile int32_t x282 = INT32_MIN;
	static int64_t x283 = INT64_MAX;
	volatile int64_t t61 = -8LL;

	t61 = ((x281/x282)-(x283&x284));

	if (t61 != -32767LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x285 = 23U;
	int8_t x286 = INT8_MIN;
	static uint8_t x287 = 7U;
	volatile int64_t t62 = 317699134425369007LL;

	t62 = ((x285/x286)-(x287&x288));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x290 = 248744334U;
	static uint32_t x291 = UINT32_MAX;
	uint32_t x292 = UINT32_MAX;

	t63 = ((x289/x290)-(x291&x292));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x298 = UINT32_MAX;
	volatile uint8_t x299 = UINT8_MAX;
	int64_t x300 = 66200792073LL;

	t64 = ((x297/x298)-(x299&x300));

	if (t64 != -9LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x302 = 765833U;
	static uint32_t x303 = UINT32_MAX;
	int64_t x304 = INT64_MAX;
	static volatile int64_t t65 = 484LL;

	t65 = ((x301/x302)-(x303&x304));

	if (t65 != -4294967295LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x305 = 125U;
	uint8_t x306 = 109U;
	uint8_t x308 = 121U;

	t66 = ((x305/x306)-(x307&x308));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = INT8_MIN;
	static int8_t x310 = INT8_MIN;
	static int8_t x312 = 29;
	static volatile int32_t t67 = -113330;

	t67 = ((x309/x310)-(x311&x312));

	if (t67 != -28) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 129892U;
	static volatile int8_t x314 = 1;
	int16_t x315 = INT16_MAX;
	uint8_t x316 = 1U;
	volatile uint32_t t68 = 9U;

	t68 = ((x313/x314)-(x315&x316));

	if (t68 != 129891U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x317 = 177U;
	static int8_t x318 = 57;
	static int16_t x319 = INT16_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t69 = 25741;

	t69 = ((x317/x318)-(x319&x320));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = -3842;
	static volatile int32_t x326 = 62;
	int64_t x328 = -1LL;
	int64_t t70 = -4311538784LL;

	t70 = ((x325/x326)-(x327&x328));

	if (t70 != -69342LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x329 = UINT8_MAX;
	uint8_t x332 = UINT8_MAX;
	int64_t t71 = -329517065948391035LL;

	t71 = ((x329/x330)-(x331&x332));

	if (t71 != -22LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x334 = -1;
	volatile uint32_t x335 = 188U;
	static uint32_t t72 = 20U;

	t72 = ((x333/x334)-(x335&x336));

	if (t72 != 4294967041U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = 3691;
	volatile uint64_t x338 = 47LLU;
	uint64_t x339 = 371LLU;
	int16_t x340 = INT16_MAX;
	uint64_t t73 = 1542622609LLU;

	t73 = ((x337/x338)-(x339&x340));

	if (t73 != 18446744073709551323LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = -1;
	int8_t x342 = -4;
	static int16_t x344 = INT16_MAX;
	volatile int32_t t74 = -58300;

	t74 = ((x341/x342)-(x343&x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x349 = UINT32_MAX;
	uint8_t x350 = 88U;
	static int32_t x351 = INT32_MIN;
	uint32_t x352 = 35500U;
	uint32_t t75 = 192765U;

	t75 = ((x349/x350)-(x351&x352));

	if (t75 != 48806446U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x353 = -126154305;
	static uint64_t x354 = 13458215299511462LLU;
	volatile int32_t x355 = 90093031;
	int16_t x356 = INT16_MIN;
	static uint64_t t76 = 490LLU;

	t76 = ((x353/x354)-(x355&x356));

	if (t76 != 18446744073619473754LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x358 = INT64_MAX;
	int32_t x359 = INT32_MIN;
	volatile int8_t x360 = INT8_MAX;
	int64_t t77 = 451793426175052746LL;

	t77 = ((x357/x358)-(x359&x360));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x361 = 5U;
	volatile int64_t x362 = -1LL;
	int16_t x363 = -1;
	volatile int64_t t78 = 14368LL;

	t78 = ((x361/x362)-(x363&x364));

	if (t78 != 123LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x365 = 23U;
	int16_t x368 = INT16_MIN;
	int32_t t79 = -3659881;

	t79 = ((x365/x366)-(x367&x368));

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x369 = UINT64_MAX;
	static int32_t x370 = 40707564;
	uint64_t x372 = 5LLU;
	static volatile uint64_t t80 = 30090893812065LLU;

	t80 = ((x369/x370)-(x371&x372));

	if (t80 != 453152737749LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = -5;
	int16_t x374 = 206;
	int8_t x376 = INT8_MAX;
	volatile int64_t t81 = 172LL;

	t81 = ((x373/x374)-(x375&x376));

	if (t81 != -83LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x379 = -1LL;
	volatile int8_t x380 = 1;
	volatile int64_t t82 = -11LL;

	t82 = ((x377/x378)-(x379&x380));

	if (t82 != 107374181LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = 2380;
	static int32_t x386 = INT32_MAX;
	int16_t x387 = INT16_MAX;
	volatile uint16_t x388 = 0U;
	volatile int32_t t83 = 9556;

	t83 = ((x385/x386)-(x387&x388));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x389 = -527;
	int8_t x392 = -1;
	uint64_t t84 = 7LLU;

	t84 = ((x389/x390)-(x391&x392));

	if (t84 != 18402231711560580942LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x393 = UINT32_MAX;
	volatile uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MIN;
	int64_t x396 = -1LL;
	volatile int64_t t85 = 650696065LL;

	t85 = ((x393/x394)-(x395&x396));

	if (t85 != 129LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x401 = -1;
	uint32_t x403 = UINT32_MAX;
	int8_t x404 = INT8_MAX;
	static uint32_t t86 = 233298U;

	t86 = ((x401/x402)-(x403&x404));

	if (t86 != 4294967169U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x405 = 30U;
	static volatile uint64_t x406 = UINT64_MAX;
	static int16_t x407 = INT16_MIN;
	volatile uint8_t x408 = UINT8_MAX;
	volatile uint64_t t87 = 7271324900464LLU;

	t87 = ((x405/x406)-(x407&x408));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x410 = INT16_MIN;
	int8_t x412 = INT8_MAX;
	int32_t t88 = -7;

	t88 = ((x409/x410)-(x411&x412));

	if (t88 != -6) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = INT32_MAX;
	int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	volatile int64_t x416 = -366LL;
	volatile int64_t t89 = 6903119LL;

	t89 = ((x413/x414)-(x415&x416));

	if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x418 = UINT32_MAX;
	volatile uint32_t x419 = 788095U;
	int32_t x420 = -1;

	t90 = ((x417/x418)-(x419&x420));

	if (t90 != 4294179201U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x422 = 3311646211204LL;
	int64_t x423 = -1LL;
	int32_t x424 = INT32_MIN;

	t91 = ((x421/x422)-(x423&x424));

	if (t91 != 2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x425 = -100;
	volatile uint8_t x426 = 3U;
	int8_t x427 = INT8_MIN;
	static int64_t x428 = INT64_MAX;
	int64_t t92 = -807629619681214LL;

	t92 = ((x425/x426)-(x427&x428));

	if (t92 != -9223372036854775713LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x429 = 1;
	volatile uint32_t x430 = 2872268U;
	uint8_t x431 = 29U;
	int32_t x432 = -1;
	uint32_t t93 = 31U;

	t93 = ((x429/x430)-(x431&x432));

	if (t93 != 4294967267U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x433 = INT64_MIN;
	volatile int32_t x435 = -1;
	int8_t x436 = 1;
	volatile int64_t t94 = 948642833LL;

	t94 = ((x433/x434)-(x435&x436));

	if (t94 != -4294967299LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x437 = -1LL;
	static uint8_t x438 = 7U;
	int32_t x439 = INT32_MAX;
	volatile int64_t x440 = -325690836773389226LL;
	int64_t t95 = -313LL;

	t95 = ((x437/x438)-(x439&x440));

	if (t95 != -1468382294LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x441 = -1;
	int16_t x442 = -1;
	int64_t x443 = -1LL;
	volatile uint16_t x444 = UINT16_MAX;

	t96 = ((x441/x442)-(x443&x444));

	if (t96 != -65534LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = 60;
	static uint8_t x446 = 45U;
	volatile uint32_t x447 = 57U;
	static int8_t x448 = INT8_MIN;
	volatile uint32_t t97 = 86499889U;

	t97 = ((x445/x446)-(x447&x448));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x450 = -8;
	int32_t x451 = INT32_MAX;
	uint64_t x452 = 5LLU;
	uint64_t t98 = 5LLU;

	t98 = ((x449/x450)-(x451&x452));

	if (t98 != 11LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x453 = 2;
	int16_t x454 = INT16_MIN;
	int16_t x455 = INT16_MIN;
	int64_t x456 = -1392789674815179204LL;
	volatile int64_t t99 = 101425657LL;

	t99 = ((x453/x454)-(x455&x456));

	if (t99 != 1392789674815193088LL) { NG(); } else { ; }
	
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

