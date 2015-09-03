#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = 325U;
volatile uint16_t x2 = 4U;
int32_t x3 = INT32_MAX;
int32_t x6 = 16707;
int16_t x7 = INT16_MIN;
static volatile int32_t x8 = 12876;
static int16_t x14 = 3800;
volatile int16_t x17 = INT16_MAX;
int32_t x21 = INT32_MIN;
volatile uint64_t x26 = 1709051LLU;
static int16_t x28 = -1;
uint32_t x33 = UINT32_MAX;
int8_t x39 = INT8_MIN;
static uint64_t t10 = 3417761236197979483LLU;
uint64_t t11 = 998794925780408832LLU;
uint16_t x55 = 1834U;
int8_t x58 = -30;
int64_t x60 = INT64_MIN;
uint64_t t14 = 43900573LLU;
static volatile int16_t x70 = INT16_MIN;
int32_t x72 = 7;
volatile uint64_t x76 = UINT64_MAX;
uint64_t x83 = UINT64_MAX;
uint16_t x89 = 9U;
static int64_t x101 = -2064047293194094911LL;
static int32_t x105 = INT32_MIN;
static int16_t x110 = INT16_MAX;
static int32_t x112 = INT32_MIN;
uint32_t x115 = 3U;
uint8_t x120 = UINT8_MAX;
int16_t x124 = INT16_MIN;
volatile int16_t x125 = INT16_MIN;
uint8_t x127 = 12U;
int8_t x129 = INT8_MIN;
int16_t x135 = INT16_MIN;
uint64_t x139 = 43492LLU;
uint8_t x143 = 2U;
int64_t x145 = INT64_MIN;
static int16_t x147 = INT16_MIN;
volatile int64_t t34 = 26320238468LL;
int64_t t35 = -7328880LL;
uint8_t x165 = 5U;
uint64_t x166 = 33025625LLU;
volatile int32_t x167 = 22651;
uint64_t t38 = 6051LLU;
uint16_t x183 = UINT16_MAX;
volatile int32_t x186 = -1;
volatile uint64_t t41 = 256601084824707316LLU;
int16_t x196 = -1982;
uint16_t x204 = 3362U;
int32_t x207 = INT32_MAX;
uint32_t x208 = 133450U;
uint32_t t44 = 124219303U;
uint64_t x210 = 1980LLU;
volatile int64_t t47 = 110LL;
int16_t x221 = INT16_MIN;
static int8_t x222 = 3;
volatile int64_t t48 = 5067346230994173LL;
int32_t x228 = -1;
volatile int8_t x239 = 3;
volatile uint8_t x242 = 3U;
int32_t x244 = INT32_MIN;
static int32_t t53 = 0;
volatile uint32_t x257 = 166632949U;
int16_t x258 = INT16_MIN;
uint64_t x262 = UINT64_MAX;
volatile uint64_t t56 = 344341425LLU;
int64_t x267 = 328LL;
int64_t t57 = -2038LL;
int16_t x271 = 4680;
volatile int8_t x275 = -1;
int32_t x279 = INT32_MIN;
volatile int32_t x280 = -1;
int16_t x297 = INT16_MAX;
int16_t x298 = INT16_MAX;
volatile int16_t x302 = INT16_MAX;
static int64_t t65 = -192644656479231163LL;
static int16_t x318 = INT16_MIN;
uint8_t x320 = 37U;
int32_t x321 = -18455945;
volatile int64_t x322 = -1LL;
int32_t x327 = 1043655;
uint64_t x329 = UINT64_MAX;
uint32_t x349 = 631U;
int16_t x358 = INT16_MIN;
int8_t x362 = -1;
uint16_t x368 = 330U;
volatile int64_t t77 = 5738944045830759LL;
volatile uint32_t t79 = 627U;
volatile uint64_t x387 = 8038LLU;
int32_t x395 = INT32_MIN;
static volatile int64_t x402 = -1LL;
int64_t t82 = 0LL;
static int64_t x407 = -615992605312LL;
int8_t x408 = 6;
volatile int16_t x415 = INT16_MIN;
uint32_t x420 = UINT32_MAX;
static volatile uint32_t t85 = 654536U;
volatile int32_t t86 = -89882;
uint64_t x428 = UINT64_MAX;
static volatile int64_t x434 = 1100702300315979LL;
int64_t x438 = -1LL;
static int8_t x451 = INT8_MAX;
int64_t x452 = INT64_MAX;
int64_t x462 = -494712LL;
int64_t x464 = INT64_MAX;
int64_t t94 = -57417304529796LL;
uint16_t x466 = 448U;
uint64_t t95 = 117644612782940077LLU;
uint32_t x470 = UINT32_MAX;
int64_t t96 = 9573LL;
static int32_t x476 = INT32_MIN;
int16_t x482 = -1;


void f0(void) {
	int64_t x4 = -14263941LL;
	volatile int64_t t0 = -153LL;

	t0 = ((x1%(x2-x3))%x4);

	if (t0 != 325LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int64_t t1 = 197648275LL;

	t1 = ((x5%(x6-x7))%x8);

	if (t1 != -9131LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x10 = INT64_MAX;
	uint32_t x11 = 7484215U;
	int32_t x12 = -1;
	volatile int64_t t2 = -12589175549857LL;

	t2 = ((x9%(x10-x11))%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x15 = -2202301;
	int32_t x16 = INT32_MIN;
	static int32_t t3 = -157723643;

	t3 = ((x13%(x14-x15))%x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	uint32_t x19 = 39U;
	static uint16_t x20 = 1U;
	uint32_t t4 = 10U;

	t4 = ((x17%(x18-x19))%x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = 3621LL;
	int16_t x23 = 36;
	int32_t x24 = INT32_MIN;
	int64_t t5 = 15LL;

	t5 = ((x21%(x22-x23))%x24);

	if (t5 != -533LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -3;
	uint64_t x27 = UINT64_MAX;
	volatile uint64_t t6 = 130564542377795LLU;

	t6 = ((x25%(x26-x27))%x28);

	if (t6 != 761053LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 448LLU;
	int32_t x30 = -6582;
	uint32_t x31 = 579451U;
	static volatile int64_t x32 = -281210846803LL;
	uint64_t t7 = 1LLU;

	t7 = ((x29%(x30-x31))%x32);

	if (t7 != 448LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = 3371;
	uint8_t x35 = 1U;
	static uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t8 = 1994LLU;

	t8 = ((x33%(x34-x35))%x36);

	if (t8 != 25LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -892;
	uint16_t x38 = 2U;
	uint16_t x40 = 158U;
	int32_t t9 = 75837;

	t9 = ((x37%(x38-x39))%x40);

	if (t9 != -112) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MAX;
	int64_t x42 = INT64_MIN;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = INT16_MIN;

	t10 = ((x41%(x42-x43))%x44);

	if (t10 != 2147483647LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	volatile uint32_t x50 = UINT32_MAX;
	uint64_t x51 = 4885821736543LLU;
	uint32_t x52 = 185706781U;

	t11 = ((x49%(x50-x51))%x52);

	if (t11 != 38291114LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 1305;
	uint64_t x54 = UINT64_MAX;
	uint16_t x56 = 7565U;
	volatile uint64_t t12 = 22540114361LLU;

	t12 = ((x53%(x54-x55))%x56);

	if (t12 != 1305LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x57 = UINT8_MAX;
	static uint64_t x59 = UINT64_MAX;
	volatile uint64_t t13 = 28872898093LLU;

	t13 = ((x57%(x58-x59))%x60);

	if (t13 != 255LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	uint16_t x62 = UINT16_MAX;
	uint8_t x63 = 20U;
	uint64_t x64 = 16191962729664LLU;

	t14 = ((x61%(x62-x63))%x64);

	if (t14 != 20LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = UINT64_MAX;
	uint32_t x66 = UINT32_MAX;
	uint8_t x67 = 61U;
	int64_t x68 = 2712939793485LL;
	volatile uint64_t t15 = 2971283785811515707LLU;

	t15 = ((x65%(x66-x67))%x68);

	if (t15 != 3843LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 20U;
	int16_t x71 = 6;
	int32_t t16 = 723049554;

	t16 = ((x69%(x70-x71))%x72);

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MIN;
	int64_t x75 = INT64_MIN;
	uint64_t t17 = 24199901495LLU;

	t17 = ((x73%(x74-x75))%x76);

	if (t17 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 3U;
	uint32_t x78 = 924U;
	volatile int32_t x79 = -1;
	uint32_t x80 = UINT32_MAX;
	uint32_t t18 = 33227089U;

	t18 = ((x77%(x78-x79))%x80);

	if (t18 != 3U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MAX;
	volatile int8_t x82 = INT8_MAX;
	uint16_t x84 = UINT16_MAX;
	volatile uint64_t t19 = 3767078793479LLU;

	t19 = ((x81%(x82-x83))%x84);

	if (t19 != 127LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = 1;
	uint8_t x86 = 104U;
	uint8_t x87 = 0U;
	int32_t x88 = 413069751;
	volatile int32_t t20 = -791567;

	t20 = ((x85%(x86-x87))%x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x90 = 0;
	volatile int32_t x91 = 1;
	static uint64_t x92 = UINT64_MAX;
	volatile uint64_t t21 = 3189797514879LLU;

	t21 = ((x89%(x90-x91))%x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	int64_t x94 = -1LL;
	static int16_t x95 = INT16_MAX;
	int16_t x96 = INT16_MAX;
	volatile int64_t t22 = -350229607327233LL;

	t22 = ((x93%(x94-x95))%x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x102 = -11LL;
	int64_t x103 = -1LL;
	int32_t x104 = -433636;
	volatile int64_t t23 = -2390695257LL;

	t23 = ((x101%(x102-x103))%x104);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x106 = 2U;
	int32_t x107 = 0;
	volatile int8_t x108 = 5;
	static volatile int32_t t24 = -60;

	t24 = ((x105%(x106-x107))%x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	uint32_t x111 = UINT32_MAX;
	static volatile uint32_t t25 = 1U;

	t25 = ((x109%(x110-x111))%x112);

	if (t25 != 32640U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = INT8_MAX;
	static int8_t x114 = INT8_MIN;
	int64_t x116 = INT64_MIN;
	int64_t t26 = 79843608392273361LL;

	t26 = ((x113%(x114-x115))%x116);

	if (t26 != 127LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	static uint32_t x118 = 10044161U;
	uint32_t x119 = UINT32_MAX;
	volatile uint32_t t27 = 594867343U;

	t27 = ((x117%(x118-x119))%x120);

	if (t27 != 194U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = 868U;
	static int32_t x122 = INT32_MAX;
	static uint32_t x123 = 294732U;
	volatile uint32_t t28 = 1330U;

	t28 = ((x121%(x122-x123))%x124);

	if (t28 != 868U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x126 = 31895LLU;
	uint32_t x128 = 63746589U;
	volatile uint64_t t29 = 1703LLU;

	t29 = ((x125%(x126-x127))%x128);

	if (t29 != 5886LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = -11;
	int16_t x132 = INT16_MIN;
	uint32_t t30 = 29794324U;

	t30 = ((x129%(x130-x131))%x132);

	if (t30 != 8U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 37946937488LLU;
	int8_t x134 = INT8_MIN;
	int8_t x136 = -1;
	uint64_t t31 = 8506245552195060148LLU;

	t31 = ((x133%(x134-x135))%x136);

	if (t31 != 32528LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = INT32_MAX;
	int8_t x138 = INT8_MIN;
	int16_t x140 = INT16_MAX;
	static volatile uint64_t t32 = 2LLU;

	t32 = ((x137%(x138-x139))%x140);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = 34U;
	int16_t x142 = INT16_MIN;
	volatile uint8_t x144 = 24U;
	volatile int32_t t33 = 14268;

	t33 = ((x141%(x142-x143))%x144);

	if (t33 != 10) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x146 = 12761140U;
	int64_t x148 = 846LL;

	t34 = ((x145%(x146-x147))%x148);

	if (t34 != -584LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x153 = -1LL;
	volatile int16_t x154 = 99;
	volatile int8_t x155 = INT8_MAX;
	int16_t x156 = INT16_MAX;

	t35 = ((x153%(x154-x155))%x156);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = UINT32_MAX;
	int64_t x158 = -20763LL;
	static volatile int64_t x159 = INT64_MIN;
	int8_t x160 = -5;
	static volatile int64_t t36 = -263764898406451LL;

	t36 = ((x157%(x158-x159))%x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	volatile int16_t x162 = INT16_MAX;
	static volatile uint8_t x163 = UINT8_MAX;
	static int32_t x164 = 844;
	volatile int32_t t37 = 1710972;

	t37 = ((x161%(x162-x163))%x164);

	if (t37 != -180) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x168 = INT16_MIN;

	t38 = ((x165%(x166-x167))%x168);

	if (t38 != 5LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = INT64_MIN;
	uint32_t x182 = UINT32_MAX;
	uint8_t x184 = 3U;
	int64_t t39 = -137077116592375193LL;

	t39 = ((x181%(x182-x183))%x184);

	if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x185 = 61;
	int32_t x187 = -14;
	volatile uint16_t x188 = 26U;
	volatile int32_t t40 = 754;

	t40 = ((x185%(x186-x187))%x188);

	if (t40 != 9) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = INT32_MIN;
	uint64_t x190 = 2383655LLU;
	int64_t x191 = INT64_MIN;
	uint32_t x192 = 42U;

	t41 = ((x189%(x190-x191))%x192);

	if (t41 != 19LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x193 = -11;
	static uint8_t x194 = UINT8_MAX;
	volatile int16_t x195 = -1;
	volatile int32_t t42 = 36;

	t42 = ((x193%(x194-x195))%x196);

	if (t42 != -11) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = 1;
	int64_t x202 = 27660278LL;
	int8_t x203 = 6;
	static int64_t t43 = -2638LL;

	t43 = ((x201%(x202-x203))%x204);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x205 = 2U;
	int8_t x206 = 1;

	t44 = ((x205%(x206-x207))%x208);

	if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x209 = INT64_MIN;
	uint16_t x211 = 33U;
	uint8_t x212 = UINT8_MAX;
	uint64_t t45 = 22113235471LLU;

	t45 = ((x209%(x210-x211))%x212);

	if (t45 != 95LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = -94;
	static volatile int64_t x214 = INT64_MIN;
	uint64_t x215 = UINT64_MAX;
	volatile uint16_t x216 = UINT16_MAX;
	volatile uint64_t t46 = 1460LLU;

	t46 = ((x213%(x214-x215))%x216);

	if (t46 != 32673LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = 1;
	int32_t x218 = INT32_MIN;
	int64_t x219 = -1LL;
	static uint16_t x220 = UINT16_MAX;

	t47 = ((x217%(x218-x219))%x220);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x223 = 271662U;
	int64_t x224 = INT64_MAX;

	t48 = ((x221%(x222-x223))%x224);

	if (t48 != 238891LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = 2417;
	volatile int8_t x226 = INT8_MIN;
	int64_t x227 = -3424993529852LL;
	int64_t t49 = -2105811LL;

	t49 = ((x225%(x226-x227))%x228);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = -1;
	int16_t x230 = -6;
	int32_t x231 = INT32_MIN;
	static int16_t x232 = 9417;
	int32_t t50 = -143059;

	t50 = ((x229%(x230-x231))%x232);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = 7579;
	int8_t x238 = INT8_MIN;
	static uint32_t x240 = 2853U;
	volatile uint32_t t51 = 22U;

	t51 = ((x237%(x238-x239))%x240);

	if (t51 != 112U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x241 = INT8_MIN;
	int32_t x243 = INT32_MAX;
	volatile int32_t t52 = 1;

	t52 = ((x241%(x242-x243))%x244);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x245 = UINT8_MAX;
	uint8_t x246 = 26U;
	int8_t x247 = -8;
	uint16_t x248 = 1U;

	t53 = ((x245%(x246-x247))%x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = INT32_MIN;
	int16_t x250 = INT16_MIN;
	int64_t x251 = -1LL;
	int8_t x252 = INT8_MIN;
	static volatile int64_t t54 = -3204560426LL;

	t54 = ((x249%(x250-x251))%x252);

	if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x259 = UINT8_MAX;
	static uint32_t x260 = UINT32_MAX;
	static volatile uint32_t t55 = 198U;

	t55 = ((x257%(x258-x259))%x260);

	if (t55 != 166632949U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x261 = 3U;
	int8_t x263 = 1;
	volatile int8_t x264 = INT8_MIN;

	t56 = ((x261%(x262-x263))%x264);

	if (t56 != 3LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = INT64_MIN;
	int64_t x266 = -388989493552640LL;
	int32_t x268 = -1;

	t57 = ((x265%(x266-x267))%x268);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x269 = 6795702U;
	uint64_t x270 = 67659286298LLU;
	int32_t x272 = INT32_MIN;
	uint64_t t58 = 97145189808025LLU;

	t58 = ((x269%(x270-x271))%x272);

	if (t58 != 6795702LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x273 = 12LLU;
	uint8_t x274 = UINT8_MAX;
	int16_t x276 = -1647;
	uint64_t t59 = 104011LLU;

	t59 = ((x273%(x274-x275))%x276);

	if (t59 != 12LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = 0;
	volatile int64_t x278 = 165120115LL;
	static int64_t t60 = 1LL;

	t60 = ((x277%(x278-x279))%x280);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = -1;
	int8_t x286 = -1;
	int8_t x287 = -57;
	static int64_t x288 = INT64_MIN;
	int64_t t61 = 47968317944LL;

	t61 = ((x285%(x286-x287))%x288);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x299 = 3;
	int8_t x300 = INT8_MIN;
	int32_t t62 = 12053;

	t62 = ((x297%(x298-x299))%x300);

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x301 = INT32_MIN;
	int32_t x303 = 9995290;
	volatile int8_t x304 = INT8_MIN;
	int32_t t63 = -2677410;

	t63 = ((x301%(x302-x303))%x304);

	if (t63 != -83) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x305 = -5536584LL;
	volatile int64_t x306 = INT64_MIN;
	int32_t x307 = INT32_MIN;
	static volatile int64_t x308 = INT64_MAX;
	volatile int64_t t64 = 27748035302LL;

	t64 = ((x305%(x306-x307))%x308);

	if (t64 != -5536584LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x309 = -1;
	int64_t x310 = INT64_MIN;
	int32_t x311 = -71040;
	int16_t x312 = 3275;

	t65 = ((x309%(x310-x311))%x312);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = -40;
	uint8_t x314 = 8U;
	uint8_t x315 = 1U;
	uint32_t x316 = 354636U;
	static volatile uint32_t t66 = 59U;

	t66 = ((x313%(x314-x315))%x316);

	if (t66 != 325331U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x317 = UINT16_MAX;
	static int32_t x319 = -351211;
	int32_t t67 = -79991918;

	t67 = ((x317%(x318-x319))%x320);

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x323 = -133095553697LL;
	uint16_t x324 = UINT16_MAX;
	int64_t t68 = 795714136LL;

	t68 = ((x321%(x322-x323))%x324);

	if (t68 != -40610LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x325 = 3387U;
	uint32_t x326 = UINT32_MAX;
	int8_t x328 = INT8_MAX;
	volatile uint32_t t69 = 454U;

	t69 = ((x325%(x326-x327))%x328);

	if (t69 != 85U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x330 = 255448708LLU;
	static int32_t x331 = 11075536;
	uint16_t x332 = 3U;
	uint64_t t70 = 135783LLU;

	t70 = ((x329%(x330-x331))%x332);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x337 = -116417;
	int16_t x338 = -14321;
	int64_t x339 = -1LL;
	uint8_t x340 = 11U;
	volatile int64_t t71 = 1098020532790210LL;

	t71 = ((x337%(x338-x339))%x340);

	if (t71 != -9LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x341 = 49751LLU;
	uint64_t x342 = UINT64_MAX;
	static int16_t x343 = INT16_MIN;
	int16_t x344 = -1;
	volatile uint64_t t72 = 50005LLU;

	t72 = ((x341%(x342-x343))%x344);

	if (t72 != 16984LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x345 = INT32_MIN;
	volatile uint32_t x346 = UINT32_MAX;
	uint64_t x347 = 222765881LLU;
	volatile int16_t x348 = INT16_MIN;
	volatile uint64_t t73 = 35414LLU;

	t73 = ((x345%(x346-x347))%x348);

	if (t73 != 3669877374LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x350 = INT8_MIN;
	uint8_t x351 = 30U;
	uint32_t x352 = 48302538U;
	static volatile uint32_t t74 = 0U;

	t74 = ((x349%(x350-x351))%x352);

	if (t74 != 631U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x357 = 342LL;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = 1680U;
	volatile int64_t t75 = -148969LL;

	t75 = ((x357%(x358-x359))%x360);

	if (t75 != 342LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x361 = INT8_MAX;
	static int32_t x363 = INT32_MAX;
	int16_t x364 = -44;
	volatile int32_t t76 = -29104;

	t76 = ((x361%(x362-x363))%x364);

	if (t76 != 39) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x365 = INT8_MIN;
	int64_t x366 = INT64_MAX;
	int16_t x367 = 1;

	t77 = ((x365%(x366-x367))%x368);

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x369 = UINT8_MAX;
	int8_t x370 = -1;
	static int8_t x371 = -2;
	volatile uint8_t x372 = UINT8_MAX;
	volatile int32_t t78 = 10227087;

	t78 = ((x369%(x370-x371))%x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x373 = 23U;
	static uint32_t x374 = 1179U;
	volatile int16_t x375 = -645;
	uint32_t x376 = UINT32_MAX;

	t79 = ((x373%(x374-x375))%x376);

	if (t79 != 23U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x385 = UINT16_MAX;
	uint32_t x386 = 389U;
	int64_t x388 = -1LL;
	static volatile uint64_t t80 = 41582LLU;

	t80 = ((x385%(x386-x387))%x388);

	if (t80 != 65535LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x393 = INT64_MIN;
	int16_t x394 = INT16_MIN;
	int32_t x396 = INT32_MIN;
	volatile int64_t t81 = 420LL;

	t81 = ((x393%(x394-x395))%x396);

	if (t81 != -32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x401 = -37;
	uint32_t x403 = UINT32_MAX;
	int32_t x404 = 2711;

	t82 = ((x401%(x402-x403))%x404);

	if (t82 != -37LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x405 = INT8_MIN;
	int64_t x406 = -1LL;
	static volatile int64_t t83 = 3814204LL;

	t83 = ((x405%(x406-x407))%x408);

	if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x413 = UINT32_MAX;
	int64_t x414 = INT64_MIN;
	uint64_t x416 = 28336068448203LLU;
	uint64_t t84 = 10LLU;

	t84 = ((x413%(x414-x415))%x416);

	if (t84 != 4294967295LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x417 = -2;
	volatile int32_t x418 = -9146849;
	static volatile uint16_t x419 = UINT16_MAX;

	t85 = ((x417%(x418-x419))%x420);

	if (t85 != 4294967294U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x421 = 404;
	int8_t x422 = INT8_MIN;
	uint16_t x423 = 59U;
	static int8_t x424 = INT8_MIN;

	t86 = ((x421%(x422-x423))%x424);

	if (t86 != 30) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x425 = -146;
	int16_t x426 = -2;
	uint8_t x427 = 18U;
	uint64_t t87 = 186LLU;

	t87 = ((x425%(x426-x427))%x428);

	if (t87 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x429 = INT8_MIN;
	uint16_t x430 = 47U;
	int8_t x431 = INT8_MAX;
	uint8_t x432 = 13U;
	int32_t t88 = -3195;

	t88 = ((x429%(x430-x431))%x432);

	if (t88 != -9) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = -12;
	uint32_t x435 = 33U;
	int32_t x436 = -1;
	int64_t t89 = 31079284285041234LL;

	t89 = ((x433%(x434-x435))%x436);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x437 = INT16_MIN;
	int64_t x439 = 723473041LL;
	uint32_t x440 = 30079897U;
	volatile int64_t t90 = 44275876LL;

	t90 = ((x437%(x438-x439))%x440);

	if (t90 != -32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x449 = INT64_MIN;
	int32_t x450 = 9;
	static int64_t t91 = 2647421LL;

	t91 = ((x449%(x450-x451))%x452);

	if (t91 != -32LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x453 = 1453U;
	int8_t x454 = INT8_MAX;
	volatile int32_t x455 = 1805;
	int64_t x456 = -1LL;
	int64_t t92 = 30175690874LL;

	t92 = ((x453%(x454-x455))%x456);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x457 = 1;
	uint16_t x458 = UINT16_MAX;
	static int16_t x459 = INT16_MIN;
	static volatile int16_t x460 = INT16_MAX;
	int32_t t93 = -7718965;

	t93 = ((x457%(x458-x459))%x460);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x461 = -1;
	int8_t x463 = -1;

	t94 = ((x461%(x462-x463))%x464);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x465 = INT64_MAX;
	uint64_t x467 = UINT64_MAX;
	volatile uint32_t x468 = UINT32_MAX;

	t95 = ((x465%(x466-x467))%x468);

	if (t95 != 403LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x469 = 31875372103502185LL;
	uint32_t x471 = 130U;
	int32_t x472 = 1521;

	t96 = ((x469%(x470-x471))%x472);

	if (t96 != 431LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x473 = 1918543;
	int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MAX;
	volatile int32_t t97 = -28796;

	t97 = ((x473%(x474-x475))%x476);

	if (t97 != 18028) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x481 = 5326U;
	uint64_t x483 = 762LLU;
	volatile uint8_t x484 = 2U;
	volatile uint64_t t98 = 94LLU;

	t98 = ((x481%(x482-x483))%x484);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x485 = 5U;
	static int8_t x486 = INT8_MIN;
	static uint8_t x487 = 7U;
	int16_t x488 = 1;
	int32_t t99 = 887;

	t99 = ((x485%(x486-x487))%x488);

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

