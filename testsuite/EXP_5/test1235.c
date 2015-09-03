#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -2;
static uint32_t x6 = UINT32_MAX;
int8_t x19 = -1;
int64_t t4 = 22195004LL;
static int32_t x23 = 994;
int32_t t5 = 50;
int8_t x25 = -1;
uint64_t x28 = 79295020LLU;
int32_t x29 = INT32_MIN;
volatile uint64_t x33 = UINT64_MAX;
static uint8_t x35 = UINT8_MAX;
int64_t x37 = 11060603168841883LL;
int32_t t13 = 5;
int64_t x66 = INT64_MAX;
volatile int16_t x71 = 34;
int16_t x73 = -1;
int16_t x75 = INT16_MIN;
int16_t x76 = INT16_MIN;
uint16_t x79 = 1U;
int32_t t20 = 209300;
int64_t x89 = 26522971834264157LL;
int16_t x100 = INT16_MAX;
uint64_t t23 = 28962748LLU;
static uint64_t x105 = 4264142844030LLU;
static int8_t x106 = INT8_MIN;
uint64_t x108 = 199LLU;
uint64_t t25 = 165134519388556LLU;
int32_t t27 = -930622;
volatile int32_t t28 = -171943;
int8_t x122 = -3;
int16_t x132 = INT16_MIN;
int16_t x135 = 9;
volatile int32_t t32 = -230;
int8_t x139 = 6;
volatile int16_t x140 = INT16_MIN;
int8_t x144 = INT8_MIN;
int16_t x146 = -422;
static uint64_t t35 = 5LLU;
uint16_t x155 = 872U;
uint32_t t40 = UINT32_MAX;
uint32_t x173 = 444U;
uint16_t x175 = 5U;
int32_t x176 = INT32_MAX;
int32_t x184 = INT32_MIN;
volatile int32_t t44 = INT32_MIN;
static int8_t x187 = INT8_MAX;
int16_t x192 = INT16_MAX;
uint32_t x193 = 514942323U;
volatile uint32_t t47 = 417U;
int16_t x198 = INT16_MIN;
int64_t x200 = 1LL;
int64_t t48 = 61236671LL;
volatile int64_t x202 = INT64_MIN;
uint64_t x206 = 409264478395263LLU;
int64_t t52 = INT64_MIN;
int64_t x224 = -1LL;
volatile int64_t t54 = -62904346274374510LL;
int64_t x226 = -142959912LL;
static uint8_t x227 = UINT8_MAX;
uint64_t x229 = 1LLU;
uint64_t t56 = 125933868392LLU;
volatile int32_t x237 = INT32_MIN;
static volatile int32_t t59 = INT32_MIN;
static int16_t x250 = -1;
uint16_t x251 = UINT16_MAX;
int16_t x265 = 762;
int8_t x271 = 21;
static int16_t x272 = INT16_MIN;
uint32_t x274 = 91814U;
volatile int32_t t67 = 623681;
uint16_t x279 = UINT16_MAX;
uint64_t x286 = UINT64_MAX;
volatile int8_t x289 = INT8_MIN;
static int16_t x291 = INT16_MIN;
int32_t x294 = INT32_MAX;
static volatile int32_t t72 = -10043268;
uint16_t x311 = 16362U;
static int8_t x316 = -1;
uint64_t x320 = 181705441086LLU;
uint64_t x332 = 21272103LLU;
static int8_t x334 = INT8_MIN;
uint32_t t82 = 107873092U;
uint32_t x337 = UINT32_MAX;
int8_t x342 = -10;
int8_t x346 = INT8_MIN;
volatile uint64_t x351 = 59957352504LLU;
int16_t x365 = -12;
int64_t x373 = INT64_MIN;
volatile int32_t x387 = INT32_MIN;
volatile int16_t x390 = 1;
volatile int32_t x396 = -1;
static int64_t t97 = -1529491256946LL;
static uint64_t x401 = UINT64_MAX;


void f0(void) {
	static volatile uint16_t x1 = UINT16_MAX;
	volatile int32_t x2 = -3;
	int32_t x3 = INT32_MAX;
	volatile int16_t x4 = INT16_MAX;
	static volatile int32_t t0 = -181273884;

	t0 = (x1^((x2==x3)/x4));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = INT8_MAX;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -11;

	t1 = (x5^((x6==x7)/x8));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = INT64_MAX;
	static int32_t x11 = -16824;
	uint64_t x12 = 519516LLU;
	uint64_t t2 = 1750483LLU;

	t2 = (x9^((x10==x11)/x12));

	if (t2 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int16_t x14 = INT16_MAX;
	int32_t x15 = 214;
	int16_t x16 = INT16_MIN;
	int32_t t3 = INT32_MAX;

	t3 = (x13^((x14==x15)/x16));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	int32_t x18 = -1;
	int64_t x20 = INT64_MIN;

	t4 = (x17^((x18==x19)/x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = UINT8_MAX;
	int8_t x22 = INT8_MIN;
	uint16_t x24 = 1U;

	t5 = (x21^((x22==x23)/x24));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	int32_t x27 = -1;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x25^((x26==x27)/x28));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	static uint16_t x31 = 125U;
	static uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 296701803LLU;

	t7 = (x29^((x30==x31)/x32));

	if (t7 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = INT8_MIN;
	int64_t x36 = INT64_MAX;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x33^((x34==x35)/x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = INT32_MIN;
	int64_t x39 = -1LL;
	volatile uint16_t x40 = 21U;
	int64_t t9 = 2562267286942LL;

	t9 = (x37^((x38==x39)/x40));

	if (t9 != 11060603168841883LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 0;
	int8_t x46 = INT8_MIN;
	volatile int8_t x47 = -1;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t10 = 453795082317625488LLU;

	t10 = (x45^((x46==x47)/x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -1LL;
	int32_t x50 = -10;
	uint8_t x51 = UINT8_MAX;
	static int8_t x52 = INT8_MAX;
	volatile int64_t t11 = -1772501427LL;

	t11 = (x49^((x50==x51)/x52));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MAX;
	int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	static int16_t x56 = -1;
	int64_t t12 = INT64_MIN;

	t12 = (x53^((x54==x55)/x56));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	static int64_t x58 = INT64_MAX;
	volatile int64_t x59 = INT64_MIN;
	uint8_t x60 = 7U;

	t13 = (x57^((x58==x59)/x60));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int16_t x62 = -11;
	static int16_t x63 = -1;
	int8_t x64 = -1;
	int64_t t14 = INT64_MIN;

	t14 = (x61^((x62==x63)/x64));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 17U;
	static int16_t x67 = -1;
	int32_t x68 = -1;
	uint32_t t15 = 3958390U;

	t15 = (x65^((x66==x67)/x68));

	if (t15 != 17U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x69 = 6U;
	static int64_t x70 = INT64_MAX;
	volatile int8_t x72 = INT8_MIN;
	static volatile int32_t t16 = 1587;

	t16 = (x69^((x70==x71)/x72));

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x74 = INT32_MIN;
	volatile int32_t t17 = 1;

	t17 = (x73^((x74==x75)/x76));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x77 = -268;
	int16_t x78 = INT16_MIN;
	volatile uint64_t x80 = UINT64_MAX;
	volatile uint64_t t18 = 15939LLU;

	t18 = (x77^((x78==x79)/x80));

	if (t18 != 18446744073709551348LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -9793735;
	int8_t x82 = INT8_MIN;
	int16_t x83 = -1;
	static volatile uint8_t x84 = UINT8_MAX;
	static volatile int32_t t19 = -124096;

	t19 = (x81^((x82==x83)/x84));

	if (t19 != -9793735) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = -1;
	int64_t x86 = INT64_MAX;
	int64_t x87 = 4155281579LL;
	int16_t x88 = -1;

	t20 = (x85^((x86==x87)/x88));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x90 = 120129163827LLU;
	volatile uint8_t x91 = 16U;
	volatile uint8_t x92 = 93U;
	static volatile int64_t t21 = 0LL;

	t21 = (x89^((x90==x91)/x92));

	if (t21 != 26522971834264157LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 32U;
	uint64_t x94 = 155096349574967LLU;
	static uint32_t x95 = 28410U;
	int64_t x96 = -1LL;
	static volatile int64_t t22 = -438712955580LL;

	t22 = (x93^((x94==x95)/x96));

	if (t22 != 32LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 21207992466729LLU;
	uint32_t x98 = 2301609U;
	static int64_t x99 = INT64_MAX;

	t23 = (x97^((x98==x99)/x100));

	if (t23 != 21207992466729LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	uint8_t x102 = 1U;
	int8_t x103 = INT8_MIN;
	static uint16_t x104 = 1177U;
	int32_t t24 = -202;

	t24 = (x101^((x102==x103)/x104));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x107 = 26226121;

	t25 = (x105^((x106==x107)/x108));

	if (t25 != 4264142844030LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	static int64_t x110 = INT64_MIN;
	int32_t x111 = INT32_MIN;
	volatile uint32_t x112 = 15U;
	static volatile uint32_t t26 = 76U;

	t26 = (x109^((x110==x111)/x112));

	if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 5U;
	int32_t x114 = -1;
	int64_t x115 = INT64_MIN;
	volatile int32_t x116 = 194168;

	t27 = (x113^((x114==x115)/x116));

	if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = INT16_MAX;
	int32_t x118 = INT32_MIN;
	int64_t x119 = -1LL;
	volatile int32_t x120 = INT32_MIN;

	t28 = (x117^((x118==x119)/x120));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = 10489U;
	uint64_t x123 = 470LLU;
	int16_t x124 = -1;
	int32_t t29 = 6250;

	t29 = (x121^((x122==x123)/x124));

	if (t29 != 10489) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 37611808U;
	volatile uint32_t x126 = 4519050U;
	uint64_t x127 = UINT64_MAX;
	uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t30 = 1U;

	t30 = (x125^((x126==x127)/x128));

	if (t30 != 37611808U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = 1;
	int64_t x131 = INT64_MAX;
	volatile int32_t t31 = -1;

	t31 = (x129^((x130==x131)/x132));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = 0;
	int64_t x134 = -1LL;
	volatile int32_t x136 = -1;

	t32 = (x133^((x134==x135)/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 11U;
	static int64_t x138 = INT64_MAX;
	volatile int32_t t33 = 56831903;

	t33 = (x137^((x138==x139)/x140));

	if (t33 != 11) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x141 = INT8_MAX;
	int32_t x142 = INT32_MIN;
	int32_t x143 = INT32_MIN;
	volatile int32_t t34 = -1;

	t34 = (x141^((x142==x143)/x144));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 493152LLU;
	int8_t x147 = 3;
	int16_t x148 = INT16_MIN;

	t35 = (x145^((x146==x147)/x148));

	if (t35 != 493152LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 2;
	uint32_t x150 = UINT32_MAX;
	int16_t x151 = INT16_MIN;
	int64_t x152 = 2LL;
	int64_t t36 = -58761842005LL;

	t36 = (x149^((x150==x151)/x152));

	if (t36 != 2LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = 372U;
	static int8_t x154 = INT8_MIN;
	uint32_t x156 = 3586509U;
	uint32_t t37 = 8103U;

	t37 = (x153^((x154==x155)/x156));

	if (t37 != 372U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = 104;
	int16_t x158 = INT16_MIN;
	static uint32_t x159 = UINT32_MAX;
	int8_t x160 = 32;
	volatile int32_t t38 = 18;

	t38 = (x157^((x158==x159)/x160));

	if (t38 != 104) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x161 = UINT16_MAX;
	int16_t x162 = -1;
	volatile uint64_t x163 = 0LLU;
	int64_t x164 = INT64_MAX;
	static int64_t t39 = 4591LL;

	t39 = (x161^((x162==x163)/x164));

	if (t39 != 65535LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x165 = -1;
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = INT8_MIN;
	static uint32_t x168 = 1066183025U;

	t40 = (x165^((x166==x167)/x168));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = 1;
	int16_t x170 = 1311;
	int32_t x171 = INT32_MIN;
	volatile uint64_t x172 = UINT64_MAX;
	uint64_t t41 = 36LLU;

	t41 = (x169^((x170==x171)/x172));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x174 = -1;
	uint32_t t42 = 4073246U;

	t42 = (x173^((x174==x175)/x176));

	if (t42 != 444U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 963284705021282LLU;
	static int8_t x178 = INT8_MAX;
	uint8_t x179 = UINT8_MAX;
	static volatile int16_t x180 = INT16_MIN;
	volatile uint64_t t43 = 53939362235LLU;

	t43 = (x177^((x178==x179)/x180));

	if (t43 != 963284705021282LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	uint64_t x182 = 94379559LLU;
	int8_t x183 = INT8_MIN;

	t44 = (x181^((x182==x183)/x184));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	volatile int64_t x186 = INT64_MAX;
	static uint32_t x188 = 22309815U;
	int64_t t45 = INT64_MIN;

	t45 = (x185^((x186==x187)/x188));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MAX;
	volatile int16_t x190 = 0;
	int8_t x191 = -1;
	volatile int32_t t46 = 79;

	t46 = (x189^((x190==x191)/x192));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x194 = 1380;
	static uint32_t x195 = 1176U;
	static int8_t x196 = -1;

	t47 = (x193^((x194==x195)/x196));

	if (t47 != 514942323U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x197 = 0;
	uint32_t x199 = 3U;

	t48 = (x197^((x198==x199)/x200));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = 2;
	int64_t x203 = INT64_MAX;
	volatile int16_t x204 = INT16_MIN;
	int32_t t49 = -1;

	t49 = (x201^((x202==x203)/x204));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x205 = 0U;
	static uint16_t x207 = UINT16_MAX;
	static volatile uint8_t x208 = UINT8_MAX;
	static int32_t t50 = 61384072;

	t50 = (x205^((x206==x207)/x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MAX;
	int32_t x210 = -1;
	int8_t x211 = -43;
	int8_t x212 = -1;
	int32_t t51 = 5704117;

	t51 = (x209^((x210==x211)/x212));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x213 = INT64_MIN;
	static uint16_t x214 = 306U;
	volatile int8_t x215 = 2;
	int16_t x216 = INT16_MAX;

	t52 = (x213^((x214==x215)/x216));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MAX;
	static int64_t x218 = INT64_MIN;
	uint64_t x219 = 26618200843LLU;
	int16_t x220 = INT16_MAX;
	volatile int32_t t53 = 399;

	t53 = (x217^((x218==x219)/x220));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = -6;
	int8_t x222 = -1;
	int16_t x223 = INT16_MAX;

	t54 = (x221^((x222==x223)/x224));

	if (t54 != -6LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x225 = 49;
	uint16_t x228 = 45U;
	volatile int32_t t55 = 68;

	t55 = (x225^((x226==x227)/x228));

	if (t55 != 49) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x230 = UINT32_MAX;
	volatile int8_t x231 = 49;
	uint32_t x232 = UINT32_MAX;

	t56 = (x229^((x230==x231)/x232));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -7147;
	uint16_t x234 = UINT16_MAX;
	uint64_t x235 = 239289211407156206LLU;
	volatile uint64_t x236 = UINT64_MAX;
	volatile uint64_t t57 = 155879542LLU;

	t57 = (x233^((x234==x235)/x236));

	if (t57 != 18446744073709544469LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x238 = -1;
	int8_t x239 = -1;
	uint32_t x240 = UINT32_MAX;
	uint32_t t58 = 48037U;

	t58 = (x237^((x238==x239)/x240));

	if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = 4;
	int8_t x243 = INT8_MIN;
	int32_t x244 = INT32_MIN;

	t59 = (x241^((x242==x243)/x244));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x245 = 1143U;
	uint32_t x246 = UINT32_MAX;
	static int64_t x247 = INT64_MIN;
	static int16_t x248 = INT16_MIN;
	int32_t t60 = 368552;

	t60 = (x245^((x246==x247)/x248));

	if (t60 != 1143) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x249 = 0U;
	int8_t x252 = -57;
	volatile int32_t t61 = -1939;

	t61 = (x249^((x250==x251)/x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = 2965018266848431LL;
	volatile uint32_t x254 = 1U;
	volatile int16_t x255 = INT16_MAX;
	int32_t x256 = INT32_MIN;
	volatile int64_t t62 = -49966209LL;

	t62 = (x253^((x254==x255)/x256));

	if (t62 != 2965018266848431LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = 14LLU;
	static int32_t x258 = INT32_MAX;
	int64_t x259 = 30180500067147LL;
	static uint64_t x260 = 71001LLU;
	uint64_t t63 = 3545333LLU;

	t63 = (x257^((x258==x259)/x260));

	if (t63 != 14LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = 10;
	static volatile uint8_t x262 = 0U;
	volatile int8_t x263 = -12;
	uint16_t x264 = UINT16_MAX;
	static int32_t t64 = 31422123;

	t64 = (x261^((x262==x263)/x264));

	if (t64 != 10) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x266 = UINT64_MAX;
	volatile uint8_t x267 = UINT8_MAX;
	int8_t x268 = -1;
	volatile int32_t t65 = 8696429;

	t65 = (x265^((x266==x267)/x268));

	if (t65 != 762) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = 695;
	volatile int32_t t66 = 510534;

	t66 = (x269^((x270==x271)/x272));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -1;
	static uint32_t x275 = 43637276U;
	static volatile int16_t x276 = 834;

	t67 = (x273^((x274==x275)/x276));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = -1;
	int8_t x278 = INT8_MAX;
	volatile int16_t x280 = INT16_MIN;
	int32_t t68 = -35346;

	t68 = (x277^((x278==x279)/x280));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = 548LLU;
	uint64_t x282 = 922166266235LLU;
	uint32_t x283 = 522044U;
	uint32_t x284 = UINT32_MAX;
	uint64_t t69 = 4LLU;

	t69 = (x281^((x282==x283)/x284));

	if (t69 != 548LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x285 = UINT16_MAX;
	static uint16_t x287 = 12U;
	int32_t x288 = 388056476;
	volatile int32_t t70 = -102490;

	t70 = (x285^((x286==x287)/x288));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x290 = 398919884;
	uint16_t x292 = UINT16_MAX;
	static volatile int32_t t71 = 24128044;

	t71 = (x289^((x290==x291)/x292));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x293 = 2U;
	uint32_t x295 = 12199U;
	static uint8_t x296 = 124U;

	t72 = (x293^((x294==x295)/x296));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MIN;
	volatile int64_t x298 = INT64_MIN;
	volatile uint8_t x299 = 0U;
	volatile int64_t x300 = INT64_MAX;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x297^((x298==x299)/x300));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = -1;
	static int32_t x303 = INT32_MAX;
	int64_t x304 = -1LL;
	int64_t t74 = 0LL;

	t74 = (x301^((x302==x303)/x304));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x305 = INT32_MIN;
	uint64_t x306 = UINT64_MAX;
	uint16_t x307 = UINT16_MAX;
	static volatile int16_t x308 = INT16_MAX;
	int32_t t75 = INT32_MIN;

	t75 = (x305^((x306==x307)/x308));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = -1;
	static volatile uint64_t x310 = UINT64_MAX;
	uint32_t x312 = 95482851U;
	uint32_t t76 = UINT32_MAX;

	t76 = (x309^((x310==x311)/x312));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = -24;
	int32_t x314 = INT32_MIN;
	static volatile uint8_t x315 = UINT8_MAX;
	static volatile int32_t t77 = 47;

	t77 = (x313^((x314==x315)/x316));

	if (t77 != -24) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = 0U;
	uint16_t x318 = 9015U;
	int8_t x319 = -8;
	volatile uint64_t t78 = 34685998889484678LLU;

	t78 = (x317^((x318==x319)/x320));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = UINT32_MAX;
	uint16_t x322 = 361U;
	int8_t x323 = -1;
	int64_t x324 = INT64_MAX;
	volatile int64_t t79 = 1LL;

	t79 = (x321^((x322==x323)/x324));

	if (t79 != 4294967295LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x325 = -1;
	static int32_t x326 = -1;
	uint64_t x327 = 331910189LLU;
	static volatile uint64_t x328 = 1051LLU;
	uint64_t t80 = UINT64_MAX;

	t80 = (x325^((x326==x327)/x328));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x329 = 1U;
	uint16_t x330 = UINT16_MAX;
	uint32_t x331 = UINT32_MAX;
	volatile uint64_t t81 = 496842843744534762LLU;

	t81 = (x329^((x330==x331)/x332));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = -207;
	volatile int16_t x335 = -13;
	volatile uint32_t x336 = 9U;

	t82 = (x333^((x334==x335)/x336));

	if (t82 != 4294967089U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x338 = 31;
	int8_t x339 = -2;
	uint8_t x340 = UINT8_MAX;
	static uint32_t t83 = UINT32_MAX;

	t83 = (x337^((x338==x339)/x340));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = -1LL;
	static volatile int16_t x343 = INT16_MIN;
	static int64_t x344 = INT64_MAX;
	volatile int64_t t84 = -50LL;

	t84 = (x341^((x342==x343)/x344));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = INT16_MAX;
	int8_t x347 = INT8_MAX;
	static volatile int8_t x348 = 2;
	static volatile int32_t t85 = -128458;

	t85 = (x345^((x346==x347)/x348));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x349 = UINT64_MAX;
	volatile int8_t x350 = INT8_MIN;
	uint32_t x352 = 105683U;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x349^((x350==x351)/x352));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = -36;
	static int8_t x354 = INT8_MAX;
	uint64_t x355 = 13945422927LLU;
	uint8_t x356 = 21U;
	int32_t t87 = -818967;

	t87 = (x353^((x354==x355)/x356));

	if (t87 != -36) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = 1;
	int64_t x358 = INT64_MIN;
	int8_t x359 = -1;
	int8_t x360 = INT8_MIN;
	volatile int32_t t88 = 47;

	t88 = (x357^((x358==x359)/x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = -1;
	volatile int32_t x362 = INT32_MIN;
	static int8_t x363 = 0;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = (x361^((x362==x363)/x364));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x366 = INT64_MIN;
	int16_t x367 = 730;
	int16_t x368 = INT16_MAX;
	static volatile int32_t t90 = -1145;

	t90 = (x365^((x366==x367)/x368));

	if (t90 != -12) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x369 = 4884U;
	static uint16_t x370 = UINT16_MAX;
	uint16_t x371 = UINT16_MAX;
	uint32_t x372 = 121826U;
	static volatile uint32_t t91 = 43042U;

	t91 = (x369^((x370==x371)/x372));

	if (t91 != 4884U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x374 = INT8_MIN;
	static volatile int16_t x375 = INT16_MAX;
	int8_t x376 = INT8_MIN;
	volatile int64_t t92 = INT64_MIN;

	t92 = (x373^((x374==x375)/x376));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = 1105813LL;
	static uint64_t x378 = 1979LLU;
	volatile uint16_t x379 = UINT16_MAX;
	uint32_t x380 = 11140U;
	static int64_t t93 = -384061270654447LL;

	t93 = (x377^((x378==x379)/x380));

	if (t93 != 1105813LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x381 = INT64_MIN;
	static uint32_t x382 = UINT32_MAX;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	volatile int64_t t94 = INT64_MIN;

	t94 = (x381^((x382==x383)/x384));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x385 = -1;
	volatile int64_t x386 = INT64_MAX;
	static int64_t x388 = INT64_MIN;
	volatile int64_t t95 = -5431LL;

	t95 = (x385^((x386==x387)/x388));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = -191057;
	int32_t x391 = 209831;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t96 = -245;

	t96 = (x389^((x390==x391)/x392));

	if (t96 != -191057) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = -7259721233939929LL;
	uint16_t x394 = 449U;
	int16_t x395 = -1493;

	t97 = (x393^((x394==x395)/x396));

	if (t97 != -7259721233939929LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x397 = UINT16_MAX;
	volatile int8_t x398 = -1;
	static uint16_t x399 = 5065U;
	static int8_t x400 = INT8_MAX;
	int32_t t98 = 96035;

	t98 = (x397^((x398==x399)/x400));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x402 = UINT8_MAX;
	int8_t x403 = -6;
	int16_t x404 = 411;
	uint64_t t99 = UINT64_MAX;

	t99 = (x401^((x402==x403)/x404));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

