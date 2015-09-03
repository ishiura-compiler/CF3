#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 1939256399510771005LLU;
int64_t x12 = -1LL;
int16_t x28 = 123;
uint32_t x37 = 0U;
int64_t x38 = 28700369637LL;
uint64_t x53 = 1842915208LLU;
int16_t x55 = 0;
int16_t x58 = INT16_MAX;
volatile int32_t t11 = 7017636;
int64_t x70 = INT64_MIN;
volatile uint64_t x71 = 56LLU;
int64_t x89 = INT64_MAX;
volatile uint64_t t17 = 2592718201915541455LLU;
int64_t x96 = -1LL;
int32_t x100 = INT32_MIN;
int8_t x105 = INT8_MIN;
int16_t x107 = INT16_MIN;
int8_t x108 = INT8_MIN;
int64_t x110 = INT64_MAX;
static volatile int32_t x111 = INT32_MIN;
uint16_t x112 = 3904U;
uint32_t x113 = 7U;
volatile uint64_t t22 = 68583935381LLU;
static uint8_t x117 = UINT8_MAX;
static int32_t x123 = 2;
int8_t x124 = INT8_MIN;
static int16_t x129 = INT16_MAX;
int32_t t26 = -161532;
uint64_t x135 = 2939193371140038LLU;
int16_t x140 = -1;
volatile uint8_t x142 = 2U;
int64_t t29 = 1104LL;
volatile int8_t x147 = INT8_MAX;
uint8_t x148 = 12U;
volatile int64_t x150 = INT64_MIN;
uint64_t t31 = 5744693395LLU;
uint16_t x156 = 24U;
static volatile int64_t x175 = INT64_MIN;
uint8_t x177 = 1U;
static uint16_t x192 = 35U;
uint32_t x197 = 2226U;
uint8_t x198 = 15U;
int32_t x204 = -1;
volatile int32_t t40 = 35248;
static int64_t x210 = INT64_MIN;
uint16_t x215 = 938U;
static uint8_t x219 = 56U;
static volatile int8_t x220 = INT8_MIN;
uint64_t x221 = UINT64_MAX;
static uint64_t t44 = 1516166LLU;
int64_t x225 = INT64_MIN;
uint8_t x230 = UINT8_MAX;
uint32_t x233 = 19607U;
uint8_t x235 = 3U;
static int64_t t48 = -429251722653764159LL;
int16_t x242 = 50;
static int8_t x244 = INT8_MIN;
int64_t t50 = -3453847LL;
volatile int64_t x250 = INT64_MIN;
uint8_t x262 = 93U;
int16_t x266 = INT16_MIN;
int64_t t57 = -1LL;
int32_t x279 = 9;
int32_t x292 = INT32_MIN;
int32_t x298 = -1;
int32_t x304 = INT32_MAX;
static uint32_t x307 = 69093U;
int16_t x309 = 0;
volatile uint32_t x320 = 818083U;
uint64_t t68 = 62LLU;
int32_t x326 = -30641;
volatile int64_t t70 = -71295981869578LL;
volatile int16_t x331 = -1;
static int8_t x342 = 7;
uint16_t x343 = UINT16_MAX;
int16_t x356 = -1749;
int32_t t75 = -2458584;
int8_t x358 = INT8_MIN;
uint8_t x360 = UINT8_MAX;
static int64_t x362 = INT64_MIN;
uint16_t x363 = 3855U;
int16_t x365 = -1014;
int32_t x371 = INT32_MIN;
int16_t x375 = -1;
volatile int16_t x388 = -1;
static int8_t x390 = INT8_MIN;
static uint32_t x397 = 0U;
uint32_t t84 = 34440U;
int32_t t85 = 1;
uint16_t x411 = 2782U;
int8_t x412 = INT8_MIN;
int32_t x415 = 8454;
volatile uint64_t t89 = 7LLU;
volatile int64_t t90 = -417LL;
int64_t x427 = 3LL;
static int32_t x433 = INT32_MIN;
volatile int16_t x436 = -4005;
static volatile uint64_t t97 = 1LLU;
static volatile int32_t x461 = 258036;
volatile uint32_t t99 = 1850265363U;


void f0(void) {
	static uint32_t x5 = 71002U;
	int8_t x6 = -1;
	static int64_t x7 = INT64_MIN;
	static uint64_t x8 = 14287LLU;

	t0 = (((x5%x6)&x7)*x8);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	volatile int8_t x10 = -1;
	static int32_t x11 = INT32_MIN;
	static volatile int64_t t1 = -102LL;

	t1 = (((x9%x10)&x11)*x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x21 = 0U;
	static uint8_t x22 = 7U;
	int64_t x23 = INT64_MAX;
	static uint8_t x24 = 0U;
	static int64_t t2 = -609222LL;

	t2 = (((x21%x22)&x23)*x24);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x25 = -1;
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = -10;
	int32_t t3 = -299860;

	t3 = (((x25%x26)&x27)*x28);

	if (t3 != -1230) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x29 = 3545U;
	int64_t x30 = INT64_MAX;
	static int64_t x31 = -1592469876377505987LL;
	static volatile int16_t x32 = -2133;
	volatile int64_t t4 = 3LL;

	t4 = (((x29%x30)&x31)*x32);

	if (t4 != -7151949LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x39 = 7618;
	uint8_t x40 = UINT8_MAX;
	static volatile int64_t t5 = 8435886599114905LL;

	t5 = (((x37%x38)&x39)*x40);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = INT64_MIN;
	uint8_t x42 = UINT8_MAX;
	uint64_t x43 = 149049995528373LLU;
	uint8_t x44 = UINT8_MAX;
	uint64_t t6 = 9349036LLU;

	t6 = (((x41%x42)&x43)*x44);

	if (t6 != 38007748859721600LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x45 = INT64_MIN;
	int64_t x46 = -38177LL;
	uint8_t x47 = 97U;
	static uint32_t x48 = UINT32_MAX;
	int64_t t7 = 54641LL;

	t7 = (((x45%x46)&x47)*x48);

	if (t7 != 274877906880LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	uint64_t x50 = 381361275889LLU;
	int64_t x51 = 9073107594846LL;
	static int8_t x52 = INT8_MIN;
	volatile uint64_t t8 = 132890LLU;

	t8 = (((x49%x50)&x51)*x52);

	if (t8 != 18446743809429602304LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x54 = -1;
	volatile int8_t x56 = INT8_MIN;
	static volatile uint64_t t9 = 682551080954LLU;

	t9 = (((x53%x54)&x55)*x56);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -1;
	static volatile int32_t x59 = 1175;
	int16_t x60 = -1;
	volatile int32_t t10 = 761;

	t10 = (((x57%x58)&x59)*x60);

	if (t10 != -1175) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x61 = UINT16_MAX;
	volatile int32_t x62 = INT32_MAX;
	int8_t x63 = -1;
	static int8_t x64 = 9;

	t11 = (((x61%x62)&x63)*x64);

	if (t11 != 589815) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 3U;
	uint16_t x66 = 421U;
	int16_t x67 = INT16_MIN;
	int16_t x68 = 2048;
	static volatile int32_t t12 = 0;

	t12 = (((x65%x66)&x67)*x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = 15839072391LLU;
	static uint32_t x72 = UINT32_MAX;
	volatile uint64_t t13 = 5528LLU;

	t13 = (((x69%x70)&x71)*x72);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = 6708U;
	static uint32_t x74 = 201722U;
	int8_t x75 = -1;
	volatile uint8_t x76 = 34U;
	uint32_t t14 = 2015302U;

	t14 = (((x73%x74)&x75)*x76);

	if (t14 != 228072U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 1626U;
	int32_t x82 = 15893849;
	static int32_t x83 = -750457;
	int8_t x84 = INT8_MAX;
	static volatile uint32_t t15 = 1480U;

	t15 = (((x81%x82)&x83)*x84);

	if (t15 != 130302U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MIN;
	int32_t x86 = -1;
	static int16_t x87 = -15;
	int64_t x88 = INT64_MIN;
	volatile int64_t t16 = 1604944761LL;

	t16 = (((x85%x86)&x87)*x88);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x90 = INT8_MAX;
	volatile int32_t x91 = INT32_MAX;
	static uint64_t x92 = 10LLU;

	t17 = (((x89%x90)&x91)*x92);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	static int16_t x94 = -1;
	int16_t x95 = INT16_MIN;
	int64_t t18 = -2628311902631814973LL;

	t18 = (((x93%x94)&x95)*x96);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MIN;
	static int32_t x98 = INT32_MAX;
	static uint32_t x99 = 247280U;
	volatile uint32_t t19 = 87U;

	t19 = (((x97%x98)&x99)*x100);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x106 = -399637347911801LL;
	static int64_t t20 = -566432876940060LL;

	t20 = (((x105%x106)&x107)*x108);

	if (t20 != 4194304LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x109 = -33;
	volatile int64_t t21 = 33141028LL;

	t21 = (((x109%x110)&x111)*x112);

	if (t21 != -8383776161792LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x114 = -26;
	uint64_t x115 = 370977749628194LLU;
	int64_t x116 = INT64_MIN;

	t22 = (((x113%x114)&x115)*x116);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x118 = 78U;
	volatile uint64_t x119 = UINT64_MAX;
	uint32_t x120 = 463U;
	volatile uint64_t t23 = 34249845538902587LLU;

	t23 = (((x117%x118)&x119)*x120);

	if (t23 != 9723LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = 26000699;
	uint64_t x122 = UINT64_MAX;
	uint64_t t24 = 1764984170LLU;

	t24 = (((x121%x122)&x123)*x124);

	if (t24 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x125 = INT64_MAX;
	int32_t x126 = -1;
	static volatile int64_t x127 = INT64_MIN;
	static uint16_t x128 = 15U;
	int64_t t25 = 10675652436643LL;

	t25 = (((x125%x126)&x127)*x128);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x130 = -1;
	int32_t x131 = -1;
	static int32_t x132 = INT32_MIN;

	t26 = (((x129%x130)&x131)*x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x133 = 8251802U;
	static volatile uint32_t x134 = 1146378956U;
	uint8_t x136 = UINT8_MAX;
	uint64_t t27 = 815061465LLU;

	t27 = (((x133%x134)&x135)*x136);

	if (t27 != 1337555070LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = 963583502LLU;
	int16_t x138 = INT16_MIN;
	static volatile int8_t x139 = INT8_MIN;
	volatile uint64_t t28 = 806002829057LLU;

	t28 = (((x137%x138)&x139)*x140);

	if (t28 != 18446744072745968128LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x141 = 16;
	int64_t x143 = -1LL;
	uint8_t x144 = 1U;

	t29 = (((x141%x142)&x143)*x144);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x145 = INT16_MAX;
	int32_t x146 = 41;
	volatile int32_t t30 = 107935493;

	t30 = (((x145%x146)&x147)*x148);

	if (t30 != 96) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -1LL;
	uint64_t x151 = 149LLU;
	static uint64_t x152 = UINT64_MAX;

	t31 = (((x149%x150)&x151)*x152);

	if (t31 != 18446744073709551467LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x153 = -1LL;
	int8_t x154 = INT8_MIN;
	uint32_t x155 = UINT32_MAX;
	int64_t t32 = -41LL;

	t32 = (((x153%x154)&x155)*x156);

	if (t32 != 103079215080LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x165 = INT16_MIN;
	int32_t x166 = -1;
	int32_t x167 = 10642088;
	int16_t x168 = 98;
	volatile int32_t t33 = -130;

	t33 = (((x165%x166)&x167)*x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x173 = INT8_MAX;
	static volatile uint8_t x174 = UINT8_MAX;
	static int32_t x176 = INT32_MAX;
	int64_t t34 = 176247077883780LL;

	t34 = (((x173%x174)&x175)*x176);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x178 = INT16_MIN;
	static int16_t x179 = 697;
	static int8_t x180 = 1;
	static volatile int32_t t35 = 763;

	t35 = (((x177%x178)&x179)*x180);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = INT16_MAX;
	int8_t x182 = -1;
	int32_t x183 = INT32_MIN;
	uint16_t x184 = 1671U;
	int32_t t36 = 68;

	t36 = (((x181%x182)&x183)*x184);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x189 = -1;
	static volatile int32_t x190 = -1;
	static uint8_t x191 = UINT8_MAX;
	static int32_t t37 = 0;

	t37 = (((x189%x190)&x191)*x192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x199 = INT8_MAX;
	static uint32_t x200 = UINT32_MAX;
	uint32_t t38 = 241743U;

	t38 = (((x197%x198)&x199)*x200);

	if (t38 != 4294967290U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x201 = -4LL;
	int16_t x202 = 1;
	static volatile uint8_t x203 = 3U;
	volatile int64_t t39 = 149017443LL;

	t39 = (((x201%x202)&x203)*x204);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x205 = 0U;
	int16_t x206 = INT16_MIN;
	uint16_t x207 = 1266U;
	int8_t x208 = -13;

	t40 = (((x205%x206)&x207)*x208);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = -1;
	int8_t x211 = -1;
	int64_t x212 = 0LL;
	volatile int64_t t41 = -1491749235438689364LL;

	t41 = (((x209%x210)&x211)*x212);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x213 = INT64_MAX;
	static uint8_t x214 = UINT8_MAX;
	uint8_t x216 = 13U;
	int64_t t42 = 910935215096188LL;

	t42 = (((x213%x214)&x215)*x216);

	if (t42 != 546LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x217 = -1413LL;
	uint32_t x218 = UINT32_MAX;
	int64_t t43 = 45833390995947201LL;

	t43 = (((x217%x218)&x219)*x220);

	if (t43 != -7168LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x222 = 1;
	uint64_t x223 = 673276955938260109LLU;
	volatile int32_t x224 = -7750962;

	t44 = (((x221%x222)&x223)*x224);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x226 = INT64_MIN;
	volatile int8_t x227 = 6;
	int32_t x228 = -1;
	volatile int64_t t45 = 13304770LL;

	t45 = (((x225%x226)&x227)*x228);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x229 = UINT32_MAX;
	volatile uint64_t x231 = 126658LLU;
	int16_t x232 = INT16_MAX;
	static uint64_t t46 = 36LLU;

	t46 = (((x229%x230)&x231)*x232);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x234 = INT64_MIN;
	static int32_t x236 = 12;
	static int64_t t47 = 967384LL;

	t47 = (((x233%x234)&x235)*x236);

	if (t47 != 36LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x237 = INT64_MAX;
	uint32_t x238 = 1480237794U;
	static int64_t x239 = -119406612973LL;
	int8_t x240 = INT8_MIN;

	t48 = (((x237%x238)&x239)*x240);

	if (t48 != -55640192LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x241 = 996753632U;
	uint8_t x243 = UINT8_MAX;
	volatile uint32_t t49 = 2944112U;

	t49 = (((x241%x242)&x243)*x244);

	if (t49 != 4294963200U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = 13459620256LL;
	static int16_t x246 = INT16_MIN;
	uint8_t x247 = UINT8_MAX;
	uint32_t x248 = 8188U;

	t50 = (((x245%x246)&x247)*x248);

	if (t50 != 1310080LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x249 = 69;
	int8_t x251 = INT8_MIN;
	int64_t x252 = -17162038LL;
	volatile int64_t t51 = 104LL;

	t51 = (((x249%x250)&x251)*x252);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x253 = 2220U;
	uint8_t x254 = 5U;
	volatile int64_t x255 = INT64_MIN;
	int16_t x256 = INT16_MIN;
	volatile int64_t t52 = 11LL;

	t52 = (((x253%x254)&x255)*x256);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x257 = INT64_MIN;
	static volatile int16_t x258 = -1;
	volatile int16_t x259 = -899;
	static int32_t x260 = INT32_MIN;
	int64_t t53 = -49460LL;

	t53 = (((x257%x258)&x259)*x260);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x261 = UINT8_MAX;
	static uint32_t x263 = 17818U;
	static int64_t x264 = INT64_MIN;
	volatile int64_t t54 = 194212LL;

	t54 = (((x261%x262)&x263)*x264);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x265 = UINT8_MAX;
	static volatile uint32_t x267 = UINT32_MAX;
	static int64_t x268 = -1791LL;
	volatile int64_t t55 = 14107LL;

	t55 = (((x265%x266)&x267)*x268);

	if (t55 != -456705LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x269 = -1LL;
	static volatile int64_t x270 = -1LL;
	int32_t x271 = INT32_MAX;
	int64_t x272 = INT64_MIN;
	volatile int64_t t56 = 3248634727661754863LL;

	t56 = (((x269%x270)&x271)*x272);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = INT8_MAX;
	int16_t x274 = -1;
	volatile int64_t x275 = 1139693473LL;
	int16_t x276 = INT16_MIN;

	t57 = (((x273%x274)&x275)*x276);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = INT8_MAX;
	int16_t x280 = -1;
	volatile int32_t t58 = 60091592;

	t58 = (((x277%x278)&x279)*x280);

	if (t58 != -9) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x281 = INT64_MIN;
	int16_t x282 = -1;
	int8_t x283 = INT8_MIN;
	volatile int8_t x284 = -1;
	volatile int64_t t59 = -104LL;

	t59 = (((x281%x282)&x283)*x284);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x285 = 3U;
	int32_t x286 = -1;
	int8_t x287 = 60;
	int8_t x288 = -1;
	static volatile int32_t t60 = 1041925;

	t60 = (((x285%x286)&x287)*x288);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x289 = -3;
	volatile uint8_t x290 = UINT8_MAX;
	uint8_t x291 = 1U;
	volatile int32_t t61 = INT32_MIN;

	t61 = (((x289%x290)&x291)*x292);

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x293 = 27557LL;
	static int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MIN;
	static uint32_t x296 = UINT32_MAX;
	int64_t t62 = -299LL;

	t62 = (((x293%x294)&x295)*x296);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x297 = INT32_MIN;
	volatile int16_t x299 = INT16_MIN;
	volatile int16_t x300 = INT16_MIN;
	int32_t t63 = 38932398;

	t63 = (((x297%x298)&x299)*x300);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x301 = INT8_MAX;
	static volatile int32_t x302 = -1;
	int8_t x303 = -1;
	volatile int32_t t64 = 8655;

	t64 = (((x301%x302)&x303)*x304);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x305 = INT64_MIN;
	static int32_t x306 = INT32_MIN;
	int16_t x308 = -14;
	static volatile int64_t t65 = 3449218242525843366LL;

	t65 = (((x305%x306)&x307)*x308);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x310 = INT16_MIN;
	int16_t x311 = -42;
	int64_t x312 = -1LL;
	volatile int64_t t66 = -246941189LL;

	t66 = (((x309%x310)&x311)*x312);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x313 = INT16_MIN;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = -1;
	int16_t x316 = 1;
	static uint64_t t67 = 552275347980407LLU;

	t67 = (((x313%x314)&x315)*x316);

	if (t67 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x317 = 0;
	uint32_t x318 = UINT32_MAX;
	uint64_t x319 = 2364LLU;

	t68 = (((x317%x318)&x319)*x320);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = 1;
	int8_t x322 = -2;
	volatile int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	int32_t t69 = -9;

	t69 = (((x321%x322)&x323)*x324);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = INT16_MIN;
	volatile uint8_t x327 = UINT8_MAX;
	static volatile int64_t x328 = 27LL;

	t70 = (((x325%x326)&x327)*x328);

	if (t70 != 4779LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x329 = INT64_MIN;
	static volatile int16_t x330 = INT16_MIN;
	uint32_t x332 = 421U;
	volatile int64_t t71 = 29LL;

	t71 = (((x329%x330)&x331)*x332);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x333 = 57341900379426234LL;
	static int8_t x334 = INT8_MIN;
	static volatile uint8_t x335 = 6U;
	static int64_t x336 = -1LL;
	int64_t t72 = -380LL;

	t72 = (((x333%x334)&x335)*x336);

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x341 = UINT32_MAX;
	volatile int64_t x344 = -1LL;
	volatile int64_t t73 = -260756165372085LL;

	t73 = (((x341%x342)&x343)*x344);

	if (t73 != -3LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x345 = INT64_MIN;
	int64_t x346 = 10LL;
	int64_t x347 = -1LL;
	uint64_t x348 = 9076062135913102804LLU;
	uint64_t t74 = 2LLU;

	t74 = (((x345%x346)&x347)*x348);

	if (t74 != 1178479207533384032LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x353 = -29;
	uint8_t x354 = 47U;
	static int16_t x355 = -3;

	t75 = (((x353%x354)&x355)*x356);

	if (t75 != 54219) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x357 = 9U;
	uint64_t x359 = UINT64_MAX;
	uint64_t t76 = 235LLU;

	t76 = (((x357%x358)&x359)*x360);

	if (t76 != 2295LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x361 = 136046651LL;
	uint8_t x364 = 17U;
	int64_t t77 = -7606581937493095LL;

	t77 = (((x361%x362)&x363)*x364);

	if (t77 != 35003LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x366 = INT64_MIN;
	int32_t x367 = -529250763;
	volatile int16_t x368 = -6864;
	volatile int64_t t78 = 725LL;

	t78 = (((x365%x366)&x367)*x368);

	if (t78 != 3632781115392LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x369 = -1;
	static uint8_t x370 = 24U;
	static uint16_t x372 = 1U;
	int32_t t79 = INT32_MIN;

	t79 = (((x369%x370)&x371)*x372);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x373 = -157946;
	int64_t x374 = INT64_MAX;
	int16_t x376 = INT16_MAX;
	volatile int64_t t80 = -34LL;

	t80 = (((x373%x374)&x375)*x376);

	if (t80 != -5175416582LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x385 = 53U;
	volatile int16_t x386 = -130;
	int8_t x387 = 2;
	int32_t t81 = 32181;

	t81 = (((x385%x386)&x387)*x388);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x389 = 12595851LLU;
	static volatile uint16_t x391 = 5304U;
	uint8_t x392 = 101U;
	uint64_t t82 = 17237856812691LLU;

	t82 = (((x389%x390)&x391)*x392);

	if (t82 != 427432LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MIN;
	volatile int32_t x395 = -1;
	int8_t x396 = -9;
	static volatile int32_t t83 = -349;

	t83 = (((x393%x394)&x395)*x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x398 = INT8_MIN;
	int32_t x399 = -1;
	int32_t x400 = INT32_MIN;

	t84 = (((x397%x398)&x399)*x400);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x401 = 29064U;
	static int8_t x402 = INT8_MIN;
	int8_t x403 = INT8_MIN;
	static uint16_t x404 = 0U;

	t85 = (((x401%x402)&x403)*x404);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = INT32_MIN;
	volatile int8_t x406 = -12;
	uint64_t x407 = 2LLU;
	int16_t x408 = INT16_MAX;
	uint64_t t86 = 111383328012LLU;

	t86 = (((x405%x406)&x407)*x408);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x409 = 2059443001U;
	int8_t x410 = -59;
	volatile uint32_t t87 = 200U;

	t87 = (((x409%x410)&x411)*x412);

	if (t87 != 4294636544U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x413 = 96U;
	int64_t x414 = 53100021860388902LL;
	int8_t x416 = INT8_MIN;
	int64_t t88 = -1778403LL;

	t88 = (((x413%x414)&x415)*x416);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = INT32_MIN;
	int32_t x418 = -1;
	static volatile int32_t x419 = -27843364;
	uint64_t x420 = 1923625912LLU;

	t89 = (((x417%x418)&x419)*x420);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x421 = 1U;
	static uint32_t x422 = 589U;
	uint16_t x423 = UINT16_MAX;
	static int64_t x424 = -28355096745890700LL;

	t90 = (((x421%x422)&x423)*x424);

	if (t90 != -28355096745890700LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = -5;
	uint8_t x426 = 17U;
	int64_t x428 = -250LL;
	volatile int64_t t91 = 85LL;

	t91 = (((x425%x426)&x427)*x428);

	if (t91 != -750LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x429 = 555469169269853LL;
	int64_t x430 = INT64_MIN;
	uint16_t x431 = 15U;
	volatile int16_t x432 = INT16_MAX;
	volatile int64_t t92 = -3LL;

	t92 = (((x429%x430)&x431)*x432);

	if (t92 != 425971LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x434 = INT8_MIN;
	int16_t x435 = -1;
	volatile int32_t t93 = -2;

	t93 = (((x433%x434)&x435)*x436);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x437 = 6751LLU;
	int32_t x438 = -1;
	int32_t x439 = INT32_MAX;
	volatile int8_t x440 = 0;
	uint64_t t94 = 1290229983LLU;

	t94 = (((x437%x438)&x439)*x440);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = -1;
	int64_t x442 = INT64_MIN;
	static int8_t x443 = -1;
	uint16_t x444 = UINT16_MAX;
	int64_t t95 = -62948LL;

	t95 = (((x441%x442)&x443)*x444);

	if (t95 != -65535LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x445 = -1;
	int32_t x446 = INT32_MIN;
	int64_t x447 = -1754721856798237LL;
	volatile uint8_t x448 = 0U;
	int64_t t96 = -10609138007LL;

	t96 = (((x445%x446)&x447)*x448);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x449 = 103013844325263LL;
	static int8_t x450 = INT8_MAX;
	uint16_t x451 = 1170U;
	uint64_t x452 = UINT64_MAX;

	t97 = (((x449%x450)&x451)*x452);

	if (t97 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x453 = INT64_MIN;
	int32_t x454 = INT32_MAX;
	static volatile int16_t x455 = INT16_MIN;
	int16_t x456 = -4;
	int64_t t98 = 0LL;

	t98 = (((x453%x454)&x455)*x456);

	if (t98 != 131072LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x462 = INT32_MIN;
	static int32_t x463 = INT32_MIN;
	uint32_t x464 = UINT32_MAX;

	t99 = (((x461%x462)&x463)*x464);

	if (t99 != 0U) { NG(); } else { ; }
	
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

