#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = 1U;
volatile uint8_t x3 = 0U;
int16_t x4 = -1;
volatile int32_t x15 = -1;
uint64_t t3 = 1987926425725490870LLU;
int32_t x18 = -1;
int64_t x21 = INT64_MIN;
int8_t x32 = -1;
volatile uint16_t x37 = UINT16_MAX;
int8_t x47 = 2;
static volatile int16_t x51 = INT16_MAX;
uint64_t t13 = 3634LLU;
int64_t x63 = INT64_MIN;
uint32_t x65 = 4U;
volatile uint8_t x70 = 3U;
int16_t x71 = INT16_MIN;
volatile int64_t t17 = -7969786368171417LL;
int64_t x74 = INT64_MIN;
int8_t x82 = -1;
int64_t t20 = 764LL;
int16_t x88 = 4129;
volatile int8_t x92 = INT8_MIN;
uint32_t x93 = 574234U;
static volatile int16_t x94 = INT16_MIN;
volatile uint8_t x100 = UINT8_MAX;
uint16_t x105 = 7U;
volatile int64_t x106 = INT64_MIN;
static volatile int64_t t26 = 140295233LL;
static int16_t x113 = INT16_MIN;
volatile int64_t t28 = 3352522989LL;
volatile int32_t x118 = -171505;
uint64_t x120 = UINT64_MAX;
volatile uint64_t t29 = 444971345LLU;
static int16_t x121 = 5;
static int32_t t30 = -159360823;
uint32_t x127 = UINT32_MAX;
int16_t x134 = 0;
volatile uint64_t t36 = 269659384038109034LLU;
volatile int32_t t37 = 752810148;
volatile int16_t x155 = 205;
volatile uint64_t t39 = 184836LLU;
int64_t x166 = INT64_MIN;
int16_t x167 = -1;
volatile int64_t t41 = 1LL;
int8_t x174 = -7;
int64_t t43 = 10927762442LL;
static volatile uint64_t x179 = 1120037930699LLU;
static int16_t x180 = INT16_MIN;
int8_t x183 = -1;
static int64_t x184 = -1LL;
volatile uint32_t x186 = 342U;
int64_t t46 = 200LL;
static volatile int64_t x189 = 169297821LL;
int16_t x210 = INT16_MAX;
volatile uint64_t x212 = 61695LLU;
int8_t x217 = INT8_MIN;
uint64_t x218 = 102480631993062094LLU;
uint64_t t54 = 63287LLU;
int64_t x224 = INT64_MIN;
static int32_t x225 = -26;
uint32_t x228 = UINT32_MAX;
int16_t x233 = -1;
int32_t t58 = -556308;
int16_t x237 = 452;
int16_t x238 = INT16_MAX;
int32_t t62 = 1;
int16_t x255 = 84;
volatile int32_t x259 = INT32_MAX;
static volatile int16_t x260 = -3142;
static uint32_t t65 = 1112U;
volatile int32_t t66 = 22497;
static int64_t x273 = -23807109LL;
uint16_t x274 = 831U;
volatile uint64_t t68 = 8381631948LLU;
uint16_t x283 = 0U;
int16_t x284 = INT16_MIN;
int32_t x291 = -3289;
volatile uint8_t x294 = 86U;
volatile int64_t t73 = -1124432956399201116LL;
uint16_t x301 = 214U;
static volatile uint8_t x304 = 7U;
int64_t t75 = 125146087LL;
int32_t x311 = INT32_MIN;
int8_t x318 = -1;
uint64_t t79 = 141LLU;
uint64_t x321 = 191949179LLU;
volatile int64_t x325 = INT64_MIN;
volatile uint8_t x332 = UINT8_MAX;
volatile int64_t t85 = -1210LL;
uint8_t x348 = UINT8_MAX;
int32_t x352 = -1;
int64_t x354 = INT64_MIN;
uint16_t x356 = 31182U;
volatile int64_t x361 = INT64_MIN;
static int64_t x362 = INT64_MAX;
static int8_t x366 = 5;
uint16_t x367 = 3U;
int64_t x368 = -2127LL;
int64_t t91 = 16178329601762LL;
int32_t x380 = INT32_MAX;
volatile uint32_t t94 = 344189345U;
uint64_t t95 = 2LLU;
volatile int32_t x386 = -1;
volatile uint64_t x389 = 1LLU;
int64_t x394 = INT64_MIN;
int64_t x395 = 121LL;
int64_t t98 = -36415396LL;


void f0(void) {
	static uint8_t x2 = 0U;
	volatile uint32_t t0 = 2052619U;

	t0 = (x1%((x2&x3)|x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int32_t x6 = -1;
	int16_t x7 = 4072;
	int64_t x8 = 6990062064LL;
	volatile int64_t t1 = 79919453672LL;

	t1 = (x5%((x6&x7)|x8));

	if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 96;
	int32_t x10 = INT32_MIN;
	static int16_t x11 = -2011;
	static int16_t x12 = -1;
	static volatile int32_t t2 = 3074939;

	t2 = (x9%((x10&x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static volatile int32_t x14 = INT32_MIN;
	uint64_t x16 = 138317LLU;

	t3 = (x13%((x14&x15)|x16));

	if (t3 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint32_t x19 = 134U;
	uint32_t x20 = 26861167U;
	uint32_t t4 = 4532484U;

	t4 = (x17%((x18&x19)|x20));

	if (t4 != 25441343U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x22 = INT16_MAX;
	int16_t x23 = INT16_MIN;
	volatile int32_t x24 = -35796;
	volatile int64_t t5 = -2229853972583029LL;

	t5 = (x21%((x22&x23)|x24));

	if (t5 != -3932LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 35303972U;
	static int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = 29481U;
	volatile uint32_t t6 = 85U;

	t6 = (x25%((x26&x27)|x28));

	if (t6 != 35303972U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 29;
	int16_t x30 = -1;
	int8_t x31 = INT8_MIN;
	volatile int32_t t7 = -8;

	t7 = (x29%((x30&x31)|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 249109LLU;
	uint16_t x34 = 1984U;
	uint8_t x35 = 11U;
	int64_t x36 = INT64_MIN;
	static uint64_t t8 = 139326799249963806LLU;

	t8 = (x33%((x34&x35)|x36));

	if (t8 != 249109LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x38 = -1LL;
	uint16_t x39 = UINT16_MAX;
	volatile int16_t x40 = -98;
	int64_t t9 = -7221LL;

	t9 = (x37%((x38&x39)|x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static uint32_t x42 = 1U;
	static int16_t x43 = 1;
	int16_t x44 = INT16_MAX;
	int64_t t10 = -43143LL;

	t10 = (x41%((x42&x43)|x44));

	if (t10 != 7LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = 6;
	static uint32_t x48 = 3U;
	static volatile uint32_t t11 = 253464U;

	t11 = (x45%((x46&x47)|x48));

	if (t11 != 2U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	static volatile int64_t x50 = -1LL;
	int16_t x52 = -1;
	volatile int64_t t12 = 308450687952478378LL;

	t12 = (x49%((x50&x51)|x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 3U;
	volatile int32_t x54 = INT32_MIN;
	uint64_t x55 = 125LLU;
	int32_t x56 = INT32_MIN;

	t13 = (x53%((x54&x55)|x56));

	if (t13 != 3LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int32_t x58 = 7371095;
	volatile int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MAX;
	int32_t t14 = 878554;

	t14 = (x57%((x58&x59)|x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x61 = INT32_MAX;
	uint32_t x62 = 6696U;
	volatile int16_t x64 = 388;
	int64_t t15 = 3205797664LL;

	t15 = (x61%((x62&x63)|x64));

	if (t15 != 259LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = 36202950310340608LL;
	static volatile int8_t x67 = INT8_MIN;
	int32_t x68 = -36126394;
	static int64_t t16 = 7801454168LL;

	t16 = (x65%((x66&x67)|x68));

	if (t16 != 4LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	volatile uint16_t x72 = 73U;

	t17 = (x69%((x70&x71)|x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 7026604U;
	int64_t x75 = INT64_MIN;
	uint8_t x76 = 5U;
	volatile int64_t t18 = 618662LL;

	t18 = (x73%((x74&x75)|x76));

	if (t18 != 7026604LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	uint32_t x78 = 28989U;
	static int32_t x79 = INT32_MIN;
	volatile int16_t x80 = -177;
	volatile uint32_t t19 = 1453811522U;

	t19 = (x77%((x78&x79)|x80));

	if (t19 != 65535U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int8_t x83 = INT8_MAX;
	volatile int64_t x84 = 19008088673LL;

	t20 = (x81%((x82&x83)|x84));

	if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 24U;
	int16_t x86 = 2;
	static int16_t x87 = INT16_MIN;
	volatile int32_t t21 = -674888744;

	t21 = (x85%((x86&x87)|x88));

	if (t21 != 24) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -558751281601187589LL;
	int8_t x90 = INT8_MAX;
	int64_t x91 = INT64_MAX;
	int64_t t22 = -227452948673LL;

	t22 = (x89%((x90&x91)|x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x95 = 2455LL;
	int16_t x96 = 1058;
	static volatile int64_t t23 = 5LL;

	t23 = (x93%((x94&x95)|x96));

	if (t23 != 798LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = 2841;
	int64_t x98 = INT64_MIN;
	uint64_t x99 = 406664299021LLU;
	uint64_t t24 = 478444658283LLU;

	t24 = (x97%((x98&x99)|x100));

	if (t24 != 36LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x101 = -1;
	static volatile int64_t x102 = INT64_MIN;
	int64_t x103 = -1LL;
	int16_t x104 = -797;
	static int64_t t25 = -60LL;

	t25 = (x101%((x102&x103)|x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x107 = 5U;
	int64_t x108 = 119LL;

	t26 = (x105%((x106&x107)|x108));

	if (t26 != 7LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 3280U;
	static uint16_t x110 = UINT16_MAX;
	uint8_t x111 = UINT8_MAX;
	volatile int32_t x112 = INT32_MAX;
	volatile int32_t t27 = 243536157;

	t27 = (x109%((x110&x111)|x112));

	if (t27 != 3280) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MIN;
	uint8_t x115 = UINT8_MAX;
	int16_t x116 = -1;

	t28 = (x113%((x114&x115)|x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = 0U;
	static uint8_t x119 = UINT8_MAX;

	t29 = (x117%((x118&x119)|x120));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x122 = INT16_MIN;
	uint16_t x123 = 0U;
	int32_t x124 = INT32_MAX;

	t30 = (x121%((x122&x123)|x124));

	if (t30 != 5) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	volatile int32_t x126 = -1;
	static uint64_t x128 = 306765LLU;
	volatile uint64_t t31 = 87036342LLU;

	t31 = (x125%((x126&x127)|x128));

	if (t31 != 255LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	int8_t x130 = INT8_MIN;
	int8_t x131 = INT8_MIN;
	volatile int16_t x132 = -1;
	int32_t t32 = -396936;

	t32 = (x129%((x130&x131)|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	static uint16_t x135 = UINT16_MAX;
	int16_t x136 = 15;
	int32_t t33 = -1374331;

	t33 = (x133%((x134&x135)|x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 48U;
	uint32_t x138 = 4U;
	uint64_t x139 = 82715134286279LLU;
	int64_t x140 = 0LL;
	uint64_t t34 = 1640285242LLU;

	t34 = (x137%((x138&x139)|x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	uint8_t x142 = 8U;
	static int8_t x143 = 1;
	int32_t x144 = -1;
	volatile int32_t t35 = -13;

	t35 = (x141%((x142&x143)|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = UINT8_MAX;
	uint64_t x146 = UINT64_MAX;
	static uint32_t x147 = 6165502U;
	int16_t x148 = 12694;

	t36 = (x145%((x146&x147)|x148));

	if (t36 != 255LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 1U;
	int8_t x150 = INT8_MIN;
	volatile int8_t x151 = INT8_MIN;
	uint8_t x152 = 3U;

	t37 = (x149%((x150&x151)|x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MIN;
	static int64_t x154 = -1LL;
	volatile int32_t x156 = -1;
	volatile int64_t t38 = -248206251459LL;

	t38 = (x153%((x154&x155)|x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 94358LL;
	uint8_t x158 = 3U;
	volatile uint64_t x159 = UINT64_MAX;
	uint64_t x160 = UINT64_MAX;

	t39 = (x157%((x158&x159)|x160));

	if (t39 != 94358LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	uint8_t x162 = 113U;
	volatile uint32_t x163 = UINT32_MAX;
	int16_t x164 = 8794;
	volatile uint32_t t40 = 11873838U;

	t40 = (x161%((x162&x163)|x164));

	if (t40 != 7619U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	int64_t x168 = INT64_MAX;

	t41 = (x165%((x166&x167)|x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 17292912;
	uint16_t x170 = 20U;
	volatile int32_t x171 = INT32_MIN;
	uint8_t x172 = UINT8_MAX;
	int32_t t42 = -1;

	t42 = (x169%((x170&x171)|x172));

	if (t42 != 87) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 2771U;
	int32_t x175 = INT32_MIN;
	int64_t x176 = -1LL;

	t43 = (x173%((x174&x175)|x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MAX;
	uint64_t t44 = 3419151717907LLU;

	t44 = (x177%((x178&x179)|x180));

	if (t44 != 30901LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	int8_t x182 = 4;
	int64_t t45 = -13944319LL;

	t45 = (x181%((x182&x183)|x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -46LL;
	volatile int16_t x187 = 13403;
	static int32_t x188 = INT32_MIN;

	t46 = (x185%((x186&x187)|x188));

	if (t46 != -46LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MIN;
	int64_t x191 = INT64_MIN;
	int8_t x192 = INT8_MAX;
	volatile int64_t t47 = 12723618LL;

	t47 = (x189%((x190&x191)|x192));

	if (t47 != 169297821LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = 0;
	int8_t x194 = INT8_MIN;
	static volatile uint64_t x195 = 101003291183907LLU;
	static uint16_t x196 = UINT16_MAX;
	uint64_t t48 = 147LLU;

	t48 = (x193%((x194&x195)|x196));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MAX;
	uint32_t x198 = 6547757U;
	int8_t x199 = 37;
	uint16_t x200 = 0U;
	static volatile uint32_t t49 = 6935U;

	t49 = (x197%((x198&x199)|x200));

	if (t49 != 21U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MAX;
	int32_t x202 = 73500;
	volatile int64_t x203 = -1LL;
	int32_t x204 = 1466;
	int64_t t50 = 34010772366LL;

	t50 = (x201%((x202&x203)|x204));

	if (t50 != 15361LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -3513;
	int16_t x206 = INT16_MAX;
	static int64_t x207 = 884LL;
	static int8_t x208 = 61;
	int64_t t51 = 964682058006011LL;

	t51 = (x205%((x206&x207)|x208));

	if (t51 != -834LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	uint64_t x211 = 15382684939219541LLU;
	uint64_t t52 = 15LLU;

	t52 = (x209%((x210&x211)|x212));

	if (t52 != 59353LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = 985928LLU;
	int64_t x214 = -1LL;
	static volatile uint16_t x215 = 1963U;
	uint32_t x216 = 20187U;
	static volatile uint64_t t53 = 3102LLU;

	t53 = (x213%((x214&x215)|x216));

	if (t53 != 3128LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x219 = 1005270445591708836LLU;
	int32_t x220 = INT32_MAX;

	t54 = (x217%((x218&x219)|x220));

	if (t54 != 14738257585635386LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = -1;
	static int8_t x223 = INT8_MAX;
	static int64_t t55 = 1029001800661294846LL;

	t55 = (x221%((x222&x223)|x224));

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x226 = UINT64_MAX;
	uint16_t x227 = UINT16_MAX;
	uint64_t t56 = 212990510611713LLU;

	t56 = (x225%((x226&x227)|x228));

	if (t56 != 4294967270LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	int16_t x230 = 1955;
	uint32_t x231 = UINT32_MAX;
	static volatile uint16_t x232 = 27U;
	static uint32_t t57 = 35U;

	t57 = (x229%((x230&x231)|x232));

	if (t57 != 127U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = INT32_MIN;
	volatile uint16_t x235 = UINT16_MAX;
	volatile int8_t x236 = -4;

	t58 = (x233%((x234&x235)|x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x239 = INT8_MAX;
	static uint32_t x240 = UINT32_MAX;
	uint32_t t59 = 17U;

	t59 = (x237%((x238&x239)|x240));

	if (t59 != 452U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 7029;
	int64_t x242 = -968456182631LL;
	int8_t x243 = INT8_MIN;
	static int32_t x244 = -1;
	int64_t t60 = 115606568LL;

	t60 = (x241%((x242&x243)|x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 22194U;
	volatile uint16_t x246 = 230U;
	int16_t x247 = -1;
	int32_t x248 = -1;
	volatile int32_t t61 = -31826;

	t61 = (x245%((x246&x247)|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = INT16_MIN;
	volatile uint16_t x250 = 1789U;
	int8_t x251 = INT8_MAX;
	static int8_t x252 = 3;

	t62 = (x249%((x250&x251)|x252));

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	static int64_t x254 = INT64_MIN;
	int16_t x256 = INT16_MIN;
	volatile int64_t t63 = 1825907672869776LL;

	t63 = (x253%((x254&x255)|x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 114085U;
	uint16_t x258 = 320U;
	uint32_t t64 = 5U;

	t64 = (x257%((x258&x259)|x260));

	if (t64 != 114085U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 0U;
	static volatile uint32_t x262 = UINT32_MAX;
	int32_t x263 = -1;
	volatile int16_t x264 = -2627;

	t65 = (x261%((x262&x263)|x264));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	static int32_t x266 = INT32_MAX;
	int32_t x267 = -32435;
	uint16_t x268 = UINT16_MAX;

	t66 = (x265%((x266&x267)|x268));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = -1;
	int64_t x271 = INT64_MAX;
	static int16_t x272 = 277;
	int64_t t67 = -8LL;

	t67 = (x269%((x270&x271)|x272));

	if (t67 != -32768LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x275 = 566457244320748114LLU;
	uint8_t x276 = 11U;

	t68 = (x273%((x274&x275)|x276));

	if (t68 != 229LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = 375940U;
	int8_t x278 = 13;
	static uint8_t x279 = UINT8_MAX;
	volatile int32_t x280 = INT32_MIN;
	uint32_t t69 = 64235057U;

	t69 = (x277%((x278&x279)|x280));

	if (t69 != 375940U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -29;
	static int8_t x282 = -1;
	static volatile int32_t t70 = 1;

	t70 = (x281%((x282&x283)|x284));

	if (t70 != -29) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = 14;
	volatile uint32_t x287 = 379U;
	int8_t x288 = 7;
	volatile uint32_t t71 = 64426280U;

	t71 = (x285%((x286&x287)|x288));

	if (t71 != 8U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	uint16_t x290 = 0U;
	static volatile int16_t x292 = INT16_MIN;
	int64_t t72 = 258143LL;

	t72 = (x289%((x290&x291)|x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = 0U;
	int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MIN;

	t73 = (x293%((x294&x295)|x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 7275U;
	volatile int8_t x298 = INT8_MIN;
	int32_t x299 = 26;
	uint8_t x300 = 63U;
	volatile uint32_t t74 = 3485U;

	t74 = (x297%((x298&x299)|x300));

	if (t74 != 30U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = -1LL;
	int8_t x303 = INT8_MIN;

	t75 = (x301%((x302&x303)|x304));

	if (t75 != 93LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MIN;
	volatile int16_t x306 = INT16_MIN;
	int64_t x307 = -44201074879LL;
	volatile int64_t x308 = INT64_MAX;
	static int64_t t76 = 24541LL;

	t76 = (x305%((x306&x307)|x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	static int8_t x310 = INT8_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -1896984;

	t77 = (x309%((x310&x311)|x312));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 7872366277455865684LLU;
	int32_t x314 = 440960;
	uint64_t x315 = UINT64_MAX;
	uint8_t x316 = 83U;
	uint64_t t78 = 215412209626495867LLU;

	t78 = (x313%((x314&x315)|x316));

	if (t78 != 275507LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 166818169LLU;
	volatile uint32_t x319 = UINT32_MAX;
	int16_t x320 = INT16_MIN;

	t79 = (x317%((x318&x319)|x320));

	if (t79 != 166818169LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x322 = -6933;
	uint8_t x323 = 1U;
	volatile int16_t x324 = INT16_MIN;
	volatile uint64_t t80 = 414LLU;

	t80 = (x321%((x322&x323)|x324));

	if (t80 != 191949179LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x326 = INT32_MIN;
	int32_t x327 = 22770939;
	volatile int32_t x328 = -353198642;
	int64_t t81 = -59LL;

	t81 = (x325%((x326&x327)|x328));

	if (t81 != -142063394LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	volatile int8_t x330 = INT8_MAX;
	int8_t x331 = -1;
	int32_t t82 = -116737860;

	t82 = (x329%((x330&x331)|x332));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 382U;
	uint8_t x334 = 1U;
	static uint32_t x335 = UINT32_MAX;
	static int8_t x336 = 27;
	static volatile uint32_t t83 = 2775U;

	t83 = (x333%((x334&x335)|x336));

	if (t83 != 4U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	uint64_t x338 = UINT64_MAX;
	int64_t x339 = INT64_MIN;
	static volatile int64_t x340 = -21900910052LL;
	uint64_t t84 = 136053955427LLU;

	t84 = (x337%((x338&x339)|x340));

	if (t84 != 21900910051LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -62901;
	volatile int16_t x342 = INT16_MIN;
	int64_t x343 = -46345217LL;
	volatile int8_t x344 = -1;

	t85 = (x341%((x342&x343)|x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 161;
	int64_t x346 = INT64_MIN;
	uint16_t x347 = 1459U;
	volatile int64_t t86 = -1LL;

	t86 = (x345%((x346&x347)|x348));

	if (t86 != 161LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -3;
	int64_t x350 = INT64_MIN;
	uint64_t x351 = UINT64_MAX;
	uint64_t t87 = 369281391LLU;

	t87 = (x349%((x350&x351)|x352));

	if (t87 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = UINT32_MAX;
	uint64_t x355 = UINT64_MAX;
	uint64_t t88 = 80147566280324497LLU;

	t88 = (x353%((x354&x355)|x356));

	if (t88 != 4294967295LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 4U;
	uint8_t x358 = 65U;
	static int8_t x359 = 36;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -727109;

	t89 = (x357%((x358&x359)|x360));

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x363 = UINT64_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = 142769550LLU;

	t90 = (x361%((x362&x363)|x364));

	if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;

	t91 = (x365%((x366&x367)|x368));

	if (t91 != 1573LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -3348322;
	int8_t x370 = INT8_MIN;
	volatile uint32_t x371 = UINT32_MAX;
	uint8_t x372 = UINT8_MAX;
	uint32_t t92 = 12022U;

	t92 = (x369%((x370&x371)|x372));

	if (t92 != 4291618974U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -1LL;
	int16_t x374 = INT16_MIN;
	int32_t x375 = -412583209;
	int16_t x376 = INT16_MAX;
	int64_t t93 = -2LL;

	t93 = (x373%((x374&x375)|x376));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 123663U;
	uint8_t x378 = 29U;
	static int16_t x379 = -958;

	t94 = (x377%((x378&x379)|x380));

	if (t94 != 123663U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 602U;
	uint64_t x382 = 1147628018LLU;
	static int16_t x383 = INT16_MAX;
	static uint8_t x384 = UINT8_MAX;

	t95 = (x381%((x382&x383)|x384));

	if (t95 != 602LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	int8_t x387 = -1;
	int8_t x388 = -1;
	volatile int64_t t96 = -23695161574490LL;

	t96 = (x385%((x386&x387)|x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = -1591819850619LL;
	int16_t x391 = 12;
	static int8_t x392 = 4;
	volatile uint64_t t97 = 52LLU;

	t97 = (x389%((x390&x391)|x392));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = -63;
	static uint8_t x396 = 1U;

	t98 = (x393%((x394&x395)|x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 1412814;
	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MAX;
	int8_t x400 = -15;
	int32_t t99 = -6219;

	t99 = (x397%((x398&x399)|x400));

	if (t99 != 9) { NG(); } else { ; }
	
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

