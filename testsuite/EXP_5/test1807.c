#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
int32_t x12 = -5976;
int16_t x13 = 9784;
int16_t x18 = -5;
volatile int8_t x19 = INT8_MIN;
int16_t x26 = -99;
int16_t x31 = -1;
int32_t t7 = 98817;
volatile int64_t x33 = INT64_MAX;
int64_t t8 = -3956248LL;
volatile uint64_t x39 = 439LLU;
volatile int16_t x44 = -234;
volatile int32_t x53 = INT32_MIN;
uint16_t x61 = 5U;
uint32_t x64 = 573423073U;
uint16_t x65 = 13266U;
int32_t x66 = -1541808;
int32_t x78 = 22554;
static volatile int16_t x82 = -1;
int64_t x83 = -1LL;
int64_t x101 = 417LL;
static uint8_t x103 = 2U;
volatile int8_t x105 = 2;
uint32_t x106 = UINT32_MAX;
int32_t x118 = -1;
volatile int8_t x119 = INT8_MIN;
static volatile int32_t t29 = 0;
int32_t x121 = INT32_MIN;
uint64_t x124 = 1829LLU;
int8_t x129 = 0;
int32_t x134 = INT32_MIN;
volatile int16_t x137 = INT16_MIN;
int8_t x151 = INT8_MIN;
uint8_t x153 = 15U;
volatile int8_t x155 = -3;
volatile int32_t t38 = 2960434;
static int16_t x160 = -11168;
static int32_t x166 = INT32_MIN;
static volatile int16_t x172 = INT16_MIN;
static volatile int32_t t44 = 635135;
uint32_t x184 = 940U;
int32_t t46 = INT32_MAX;
static int64_t x192 = INT64_MIN;
static int32_t t47 = 76;
int64_t t48 = 1LL;
static int16_t x197 = INT16_MAX;
int64_t x198 = INT64_MAX;
uint64_t x200 = 1649553LLU;
int64_t x205 = 30LL;
int8_t x213 = INT8_MIN;
volatile uint64_t x215 = UINT64_MAX;
int64_t x217 = INT64_MIN;
int8_t x218 = INT8_MIN;
int16_t x220 = INT16_MIN;
volatile int64_t x221 = -1LL;
int32_t x228 = INT32_MIN;
uint16_t x230 = 1U;
static int32_t x231 = 74;
uint64_t x232 = 18797984789LLU;
static int8_t x242 = INT8_MIN;
int8_t x252 = INT8_MIN;
int16_t x254 = 0;
static volatile int8_t x256 = 1;
int32_t t64 = -129;
int64_t x265 = -69642860107334345LL;
uint64_t x277 = 1449819692LLU;
int64_t x282 = 289104477360629402LL;
int32_t x283 = INT32_MIN;
static int32_t t70 = -56;
volatile int64_t t71 = INT64_MIN;
static int32_t x293 = INT32_MAX;
int32_t t73 = INT32_MAX;
volatile int8_t x301 = INT8_MIN;
int32_t x312 = INT32_MIN;
int8_t x314 = -14;
volatile int8_t x316 = INT8_MIN;
volatile int64_t x317 = INT64_MAX;
static int64_t x323 = -2871658696033LL;
volatile uint64_t t80 = 5276560306174099LLU;
int16_t x335 = INT16_MIN;
uint64_t x336 = 2571245LLU;
int16_t x341 = -2790;
int64_t x352 = -1LL;
int64_t x358 = INT64_MAX;
uint16_t x360 = 1300U;
uint64_t x363 = 1237533428439LLU;
uint8_t x364 = 12U;
static int16_t x366 = 3643;
int64_t x376 = INT64_MAX;
int32_t t94 = -1;
uint8_t x382 = 54U;
static int64_t t95 = 5599941972103LL;
volatile int32_t x387 = -1;
int32_t t96 = 0;
int16_t x395 = INT16_MAX;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	uint64_t x3 = UINT64_MAX;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = -4328;

	t0 = (x1^((x2&x3)<x4));

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int32_t x6 = -1;
	int16_t x7 = 311;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = INT32_MAX;

	t1 = (x5^((x6&x7)<x8));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 1U;
	static volatile int8_t x10 = 6;
	static volatile int32_t x11 = INT32_MIN;
	int32_t t2 = -4074;

	t2 = (x9^((x10&x11)<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	uint16_t x15 = 154U;
	static int32_t x16 = INT32_MAX;
	int32_t t3 = 388;

	t3 = (x13^((x14&x15)<x16));

	if (t3 != 9785) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = 359;

	t4 = (x17^((x18&x19)<x20));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 0;
	uint64_t x22 = UINT64_MAX;
	volatile int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MIN;
	static int32_t t5 = 691;

	t5 = (x21^((x22&x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	int16_t x27 = -118;
	uint16_t x28 = 23U;
	volatile int64_t t6 = -162630188LL;

	t6 = (x25^((x26&x27)<x28));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -11099;
	int64_t x30 = -467127169315300LL;
	int16_t x32 = -1;

	t7 = (x29^((x30&x31)<x32));

	if (t7 != -11100) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = -1;
	int64_t x35 = -1LL;
	uint8_t x36 = UINT8_MAX;

	t8 = (x33^((x34&x35)<x36));

	if (t8 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	int16_t x38 = -1;
	static int32_t x40 = -1;
	int32_t t9 = 4;

	t9 = (x37^((x38&x39)<x40));

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 4;
	int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	static int32_t t10 = -3250;

	t10 = (x41^((x42&x43)<x44));

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	static int64_t x46 = INT64_MIN;
	uint64_t x47 = UINT64_MAX;
	volatile uint64_t x48 = UINT64_MAX;
	int64_t t11 = 15368992555LL;

	t11 = (x45^((x46&x47)<x48));

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint16_t x50 = 7835U;
	uint64_t x51 = 72702924LLU;
	int32_t x52 = -1160;
	volatile int32_t t12 = 2615;

	t12 = (x49^((x50&x51)<x52));

	if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = 5855U;
	uint64_t x55 = 112029739LLU;
	int64_t x56 = -2531057328899040385LL;
	volatile int32_t t13 = -26790333;

	t13 = (x53^((x54&x55)<x56));

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	uint64_t x58 = 39863700LLU;
	int16_t x59 = INT16_MAX;
	int64_t x60 = 87271759079211308LL;
	int64_t t14 = 8652LL;

	t14 = (x57^((x58&x59)<x60));

	if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = 2;
	volatile int32_t x63 = INT32_MAX;
	volatile int32_t t15 = 5922756;

	t15 = (x61^((x62&x63)<x64));

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x67 = UINT8_MAX;
	uint64_t x68 = 2LLU;
	volatile int32_t t16 = -5;

	t16 = (x65^((x66&x67)<x68));

	if (t16 != 13266) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -334LL;
	volatile uint16_t x70 = UINT16_MAX;
	static int64_t x71 = INT64_MAX;
	int32_t x72 = INT32_MAX;
	volatile int64_t t17 = 1627LL;

	t17 = (x69^((x70&x71)<x72));

	if (t17 != -333LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 3458LLU;
	int16_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MIN;
	static uint64_t t18 = 622LLU;

	t18 = (x73^((x74&x75)<x76));

	if (t18 != 3458LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 34071U;
	static int16_t x79 = INT16_MAX;
	static int8_t x80 = INT8_MIN;
	uint32_t t19 = 1461047U;

	t19 = (x77^((x78&x79)<x80));

	if (t19 != 34071U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -255202LL;
	uint32_t x84 = 38300692U;
	static int64_t t20 = -958132LL;

	t20 = (x81^((x82&x83)<x84));

	if (t20 != -255201LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = 697;
	uint16_t x86 = 235U;
	volatile uint32_t x87 = UINT32_MAX;
	int32_t x88 = -1;
	volatile int32_t t21 = 4770;

	t21 = (x85^((x86&x87)<x88));

	if (t21 != 696) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 11U;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = UINT64_MAX;
	static volatile uint16_t x92 = 0U;
	volatile int32_t t22 = -40;

	t22 = (x89^((x90&x91)<x92));

	if (t22 != 11) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MAX;
	uint8_t x94 = UINT8_MAX;
	int64_t x95 = INT64_MIN;
	int16_t x96 = -1;
	static int32_t t23 = 1646;

	t23 = (x93^((x94&x95)<x96));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = 855009U;
	static uint16_t x98 = 1917U;
	uint32_t x99 = 4764284U;
	volatile uint8_t x100 = UINT8_MAX;
	volatile uint32_t t24 = 62427U;

	t24 = (x97^((x98&x99)<x100));

	if (t24 != 855009U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x102 = -56LL;
	uint32_t x104 = 14866U;
	int64_t t25 = -47218653466280297LL;

	t25 = (x101^((x102&x103)<x104));

	if (t25 != 416LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x107 = -55;
	uint16_t x108 = 264U;
	int32_t t26 = 375171797;

	t26 = (x105^((x106&x107)<x108));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = -1;
	int32_t x111 = INT32_MIN;
	int64_t x112 = 530429641084600LL;
	int32_t t27 = 1;

	t27 = (x109^((x110&x111)<x112));

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1;
	uint16_t x114 = 78U;
	static int8_t x115 = 0;
	int16_t x116 = -1;
	static int32_t t28 = -1006;

	t28 = (x113^((x114&x115)<x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 3025;
	int16_t x120 = -1;

	t29 = (x117^((x118&x119)<x120));

	if (t29 != 3024) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MAX;
	volatile int8_t x123 = INT8_MIN;
	volatile int32_t t30 = 5;

	t30 = (x121^((x122&x123)<x124));

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	int32_t x126 = 4951825;
	int8_t x127 = INT8_MIN;
	uint64_t x128 = UINT64_MAX;
	static volatile int32_t t31 = -127679596;

	t31 = (x125^((x126&x127)<x128));

	if (t31 != 126) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x130 = 4769;
	uint8_t x131 = UINT8_MAX;
	static uint32_t x132 = UINT32_MAX;
	int32_t t32 = 2876;

	t32 = (x129^((x130&x131)<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = -53;
	int32_t x135 = -230;
	static uint64_t x136 = 518378062LLU;
	static int32_t t33 = -82;

	t33 = (x133^((x134&x135)<x136));

	if (t33 != -53) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = INT32_MIN;
	uint64_t x139 = 191562683LLU;
	uint32_t x140 = 0U;
	volatile int32_t t34 = 382;

	t34 = (x137^((x138&x139)<x140));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = UINT8_MAX;
	uint64_t x142 = 8208032891750824LLU;
	int16_t x143 = 5418;
	uint64_t x144 = UINT64_MAX;
	static volatile int32_t t35 = 82217;

	t35 = (x141^((x142&x143)<x144));

	if (t35 != 254) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	uint16_t x146 = 11047U;
	uint32_t x147 = 3573498U;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = 557524752;

	t36 = (x145^((x146&x147)<x148));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 1951;
	uint16_t x150 = 11U;
	static int64_t x152 = 264150798LL;
	int32_t t37 = 2715;

	t37 = (x149^((x150&x151)<x152));

	if (t37 != 1950) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x154 = INT8_MIN;
	uint64_t x156 = 214799244133LLU;

	t38 = (x153^((x154&x155)<x156));

	if (t38 != 15) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -1;
	uint16_t x158 = 1U;
	int16_t x159 = INT16_MAX;
	int32_t t39 = 4669270;

	t39 = (x157^((x158&x159)<x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = 2;
	int64_t x162 = -1LL;
	static volatile uint32_t x163 = UINT32_MAX;
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = 50908911;

	t40 = (x161^((x162&x163)<x164));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 7U;
	int64_t x167 = INT64_MIN;
	volatile uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = -100801;

	t41 = (x165^((x166&x167)<x168));

	if (t41 != 6) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -1997837419LL;
	int8_t x170 = -3;
	int8_t x171 = -19;
	volatile int64_t t42 = -834LL;

	t42 = (x169^((x170&x171)<x172));

	if (t42 != -1997837419LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -91;
	int8_t x174 = INT8_MIN;
	volatile int32_t x175 = INT32_MAX;
	uint32_t x176 = 1886233569U;
	volatile int32_t t43 = 6492081;

	t43 = (x173^((x174&x175)<x176));

	if (t43 != -91) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MAX;
	int8_t x178 = INT8_MAX;
	uint16_t x179 = 10U;
	int16_t x180 = 99;

	t44 = (x177^((x178&x179)<x180));

	if (t44 != 2147483646) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x181 = -1LL;
	int64_t x182 = 42290039389561185LL;
	volatile int16_t x183 = -1;
	int64_t t45 = 123934675125629677LL;

	t45 = (x181^((x182&x183)<x184));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = -1;
	uint32_t x187 = 204U;
	static uint8_t x188 = 0U;

	t46 = (x185^((x186&x187)<x188));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 45U;
	volatile uint16_t x190 = UINT16_MAX;
	int64_t x191 = INT64_MIN;

	t47 = (x189^((x190&x191)<x192));

	if (t47 != 45) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x193 = -483LL;
	static volatile int64_t x194 = -1LL;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = 1121379958081874LLU;

	t48 = (x193^((x194&x195)<x196));

	if (t48 != -483LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x199 = -313462;
	static int32_t t49 = 231;

	t49 = (x197^((x198&x199)<x200));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 0U;
	volatile int32_t x202 = 54648;
	static int32_t x203 = INT32_MIN;
	int8_t x204 = -1;
	uint32_t t50 = 1U;

	t50 = (x201^((x202&x203)<x204));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MAX;
	int8_t x207 = INT8_MIN;
	volatile int16_t x208 = INT16_MAX;
	static int64_t t51 = 1930LL;

	t51 = (x205^((x206&x207)<x208));

	if (t51 != 30LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	int8_t x210 = -1;
	int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x209^((x210&x211)<x212));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x214 = -912;
	int64_t x216 = 1514443089480805572LL;
	volatile int32_t t53 = -3035;

	t53 = (x213^((x214&x215)<x216));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x219 = -1;
	int64_t t54 = INT64_MIN;

	t54 = (x217^((x218&x219)<x220));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x222 = INT32_MIN;
	uint8_t x223 = UINT8_MAX;
	int64_t x224 = -185600LL;
	int64_t t55 = -264584328884975LL;

	t55 = (x221^((x222&x223)<x224));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x226 = 4U;
	int8_t x227 = INT8_MIN;
	volatile int32_t t56 = -2936651;

	t56 = (x225^((x226&x227)<x228));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MIN;
	int32_t t57 = -6472002;

	t57 = (x229^((x230&x231)<x232));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 302;
	uint32_t x234 = 16177158U;
	static uint32_t x235 = 100U;
	int64_t x236 = -1LL;
	volatile int32_t t58 = -116853494;

	t58 = (x233^((x234&x235)<x236));

	if (t58 != 302) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 1;
	int8_t x238 = -12;
	int16_t x239 = -33;
	int16_t x240 = -8;
	int32_t t59 = -335;

	t59 = (x237^((x238&x239)<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	int16_t x243 = -1;
	volatile int16_t x244 = INT16_MIN;
	volatile int64_t t60 = INT64_MIN;

	t60 = (x241^((x242&x243)<x244));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int64_t x246 = INT64_MIN;
	static int32_t x247 = -1;
	int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 80;

	t61 = (x245^((x246&x247)<x248));

	if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	int32_t x250 = INT32_MAX;
	int32_t x251 = 3413;
	int64_t t62 = -13430665357119333LL;

	t62 = (x249^((x250&x251)<x252));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int8_t x255 = -1;
	int32_t t63 = -2297691;

	t63 = (x253^((x254&x255)<x256));

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	int32_t x258 = INT32_MIN;
	volatile int32_t x259 = -1162521;
	int8_t x260 = -1;

	t64 = (x257^((x258&x259)<x260));

	if (t64 != 254) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 117;
	uint64_t x262 = 2191371564664LLU;
	int16_t x263 = 1;
	int16_t x264 = -34;
	int32_t t65 = 1931;

	t65 = (x261^((x262&x263)<x264));

	if (t65 != 116) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x266 = 0;
	uint64_t x267 = UINT64_MAX;
	int16_t x268 = -1;
	int64_t t66 = 3422467059882173682LL;

	t66 = (x265^((x266&x267)<x268));

	if (t66 != -69642860107334346LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = 1U;
	int8_t x270 = 0;
	uint16_t x271 = 0U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 99;

	t67 = (x269^((x270&x271)<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 19807U;
	uint32_t x274 = UINT32_MAX;
	int16_t x275 = 3;
	static int64_t x276 = -1LL;
	uint32_t t68 = 508940190U;

	t68 = (x273^((x274&x275)<x276));

	if (t68 != 19807U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x278 = INT32_MIN;
	volatile int8_t x279 = INT8_MAX;
	int32_t x280 = -1;
	volatile uint64_t t69 = 88648147519007016LLU;

	t69 = (x277^((x278&x279)<x280));

	if (t69 != 1449819692LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 23119U;
	static volatile int16_t x284 = INT16_MIN;

	t70 = (x281^((x282&x283)<x284));

	if (t70 != 23119) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	uint8_t x286 = 3U;
	int64_t x287 = INT64_MIN;
	int64_t x288 = -1LL;

	t71 = (x285^((x286&x287)<x288));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MIN;
	int8_t x291 = -2;
	static int32_t x292 = -1;
	int32_t t72 = -431;

	t72 = (x289^((x290&x291)<x292));

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x294 = 30;
	int8_t x295 = 0;
	int64_t x296 = INT64_MIN;

	t73 = (x293^((x294&x295)<x296));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = UINT64_MAX;
	uint8_t x298 = UINT8_MAX;
	int32_t x299 = INT32_MAX;
	int16_t x300 = 3;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x297^((x298&x299)<x300));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x302 = 317U;
	volatile int64_t x303 = -29621LL;
	int64_t x304 = 207905LL;
	static volatile int32_t t75 = 16439;

	t75 = (x301^((x302&x303)<x304));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MAX;
	int32_t x306 = INT32_MIN;
	int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 0;

	t76 = (x305^((x306&x307)<x308));

	if (t76 != 2147483646) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = 92;
	static uint8_t x310 = 11U;
	uint32_t x311 = 4439937U;
	static volatile int32_t t77 = -137002895;

	t77 = (x309^((x310&x311)<x312));

	if (t77 != 93) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x313 = 118U;
	int64_t x315 = INT64_MIN;
	int32_t t78 = -100;

	t78 = (x313^((x314&x315)<x316));

	if (t78 != 119) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = 11478;
	uint16_t x319 = 10U;
	int32_t x320 = -1;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x317^((x318&x319)<x320));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	uint16_t x322 = 3U;
	int64_t x324 = INT64_MAX;

	t80 = (x321^((x322&x323)<x324));

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x326 = 2004;
	static int16_t x327 = INT16_MIN;
	uint64_t x328 = UINT64_MAX;
	int32_t t81 = 6;

	t81 = (x325^((x326&x327)<x328));

	if (t81 != 254) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 548512205LLU;
	int32_t x330 = INT32_MAX;
	int64_t x331 = 92280628964LL;
	uint16_t x332 = 915U;
	volatile uint64_t t82 = 7206105639614LLU;

	t82 = (x329^((x330&x331)<x332));

	if (t82 != 548512205LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 1LLU;
	uint16_t x334 = 1980U;
	volatile uint64_t t83 = 5103449936516821LLU;

	t83 = (x333^((x334&x335)<x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	uint32_t x338 = UINT32_MAX;
	uint32_t x339 = 3U;
	uint64_t x340 = 98287529LLU;
	int32_t t84 = -836501;

	t84 = (x337^((x338&x339)<x340));

	if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x342 = UINT16_MAX;
	int8_t x343 = INT8_MIN;
	int8_t x344 = 1;
	int32_t t85 = 766364;

	t85 = (x341^((x342&x343)<x344));

	if (t85 != -2790) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 345LLU;
	static int32_t x346 = INT32_MIN;
	int8_t x347 = INT8_MAX;
	static int32_t x348 = INT32_MAX;
	static uint64_t t86 = 320741LLU;

	t86 = (x345^((x346&x347)<x348));

	if (t86 != 344LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 2420432606134LLU;
	int8_t x350 = INT8_MAX;
	int16_t x351 = INT16_MIN;
	uint64_t t87 = 0LLU;

	t87 = (x349^((x350&x351)<x352));

	if (t87 != 2420432606134LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -2607;
	int32_t x354 = 117652988;
	int16_t x355 = -1;
	int64_t x356 = INT64_MAX;
	static int32_t t88 = 1866;

	t88 = (x353^((x354&x355)<x356));

	if (t88 != -2608) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -140348517353048659LL;
	volatile int8_t x359 = INT8_MIN;
	int64_t t89 = 13862166379LL;

	t89 = (x357^((x358&x359)<x360));

	if (t89 != -140348517353048659LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MIN;
	volatile int64_t x362 = INT64_MIN;
	volatile int32_t t90 = -6;

	t90 = (x361^((x362&x363)<x364));

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int64_t x367 = 569320491LL;
	static int32_t x368 = -142543;
	int32_t t91 = 211557389;

	t91 = (x365^((x366&x367)<x368));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = 26732LLU;
	int64_t x370 = INT64_MAX;
	int32_t x371 = INT32_MIN;
	static volatile int64_t x372 = -1LL;
	static uint64_t t92 = 41156627298LLU;

	t92 = (x369^((x370&x371)<x372));

	if (t92 != 26732LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x373 = 85U;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = INT32_MIN;
	volatile int32_t t93 = 843723;

	t93 = (x373^((x374&x375)<x376));

	if (t93 != 84) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -46010446;
	int8_t x378 = INT8_MAX;
	uint16_t x379 = 1U;
	static uint16_t x380 = 8689U;

	t94 = (x377^((x378&x379)<x380));

	if (t94 != -46010445) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 69LL;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = INT64_MIN;

	t95 = (x381^((x382&x383)<x384));

	if (t95 != 68LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	volatile int32_t x386 = 56548971;
	int16_t x388 = 2;

	t96 = (x385^((x386&x387)<x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = UINT16_MAX;
	static int64_t x390 = -1LL;
	static uint64_t x391 = 3LLU;
	int8_t x392 = -32;
	int32_t t97 = -17;

	t97 = (x389^((x390&x391)<x392));

	if (t97 != 65534) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	uint8_t x394 = UINT8_MAX;
	uint32_t x396 = 4289141U;
	int32_t t98 = 248941011;

	t98 = (x393^((x394&x395)<x396));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = -1LL;
	int8_t x398 = -2;
	int8_t x399 = INT8_MIN;
	volatile uint16_t x400 = UINT16_MAX;
	int64_t t99 = -5388719486870301LL;

	t99 = (x397^((x398&x399)<x400));

	if (t99 != -2LL) { NG(); } else { ; }
	
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

