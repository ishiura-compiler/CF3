#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
int8_t x4 = -6;
volatile uint64_t t2 = 222136827063LLU;
int32_t x26 = INT32_MAX;
int32_t x31 = 0;
int8_t x32 = -1;
int32_t x34 = -1;
uint64_t x39 = UINT64_MAX;
static int64_t t12 = -7LL;
static volatile int16_t x55 = INT16_MIN;
static int64_t x58 = -245LL;
int8_t x61 = -15;
static volatile uint16_t x65 = UINT16_MAX;
uint16_t x70 = 0U;
int8_t x77 = INT8_MIN;
volatile uint64_t x79 = 103934886382188LLU;
volatile uint64_t t21 = 1223638LLU;
static int64_t x95 = -1LL;
uint32_t x96 = UINT32_MAX;
uint32_t x103 = UINT32_MAX;
int32_t x109 = INT32_MAX;
int64_t t27 = INT64_MIN;
int8_t x115 = INT8_MIN;
int32_t x117 = INT32_MIN;
uint32_t x122 = 916282663U;
volatile int32_t t30 = INT32_MAX;
int8_t x125 = INT8_MIN;
volatile int32_t t31 = 6347;
static int16_t x136 = INT16_MIN;
uint32_t t33 = 1429708U;
uint64_t x140 = 746LLU;
int64_t x142 = -12LL;
uint8_t x143 = UINT8_MAX;
int16_t x145 = INT16_MAX;
int8_t x147 = INT8_MIN;
int32_t x155 = INT32_MIN;
int8_t x174 = INT8_MIN;
int32_t x176 = INT32_MAX;
uint8_t x178 = 1U;
int64_t x182 = INT64_MIN;
uint8_t x184 = 1U;
uint64_t t46 = 7946LLU;
uint32_t x193 = 2U;
volatile int64_t t48 = -184009127LL;
static int8_t x201 = INT8_MIN;
volatile int32_t x208 = INT32_MIN;
int64_t x211 = INT64_MIN;
uint32_t x212 = 498439U;
int16_t x214 = -12635;
volatile int64_t x216 = INT64_MIN;
int32_t x217 = INT32_MIN;
static int8_t x219 = -1;
uint64_t t55 = 491641424LLU;
int16_t x228 = INT16_MAX;
volatile uint32_t t56 = 1800025404U;
int64_t t57 = 44309LL;
int16_t x236 = INT16_MIN;
uint16_t x245 = 0U;
uint64_t x247 = 3501686436329370LLU;
volatile int32_t t61 = 12;
int32_t x250 = -73837;
static int32_t t62 = 2082420;
volatile int64_t x259 = INT64_MAX;
int16_t x260 = INT16_MIN;
static int32_t x263 = INT32_MAX;
volatile int32_t t66 = 268892511;
int64_t x270 = 135745279LL;
int64_t x275 = INT64_MAX;
int32_t x278 = INT32_MAX;
int16_t x279 = 0;
int8_t x280 = 8;
int32_t x282 = 1097;
int16_t x285 = -1;
uint8_t x294 = UINT8_MAX;
int32_t t73 = 10089;
volatile int8_t x301 = -1;
static int64_t x303 = -9789787664LL;
volatile int8_t x306 = -1;
int8_t x308 = 0;
static volatile int64_t x310 = -1LL;
uint64_t x316 = 361746643LLU;
int32_t x321 = -9846;
uint8_t x323 = 1U;
int32_t x325 = 6050981;
static uint8_t x331 = 1U;
int64_t x338 = -893097003LL;
int64_t x339 = -1LL;
uint16_t x340 = UINT16_MAX;
int16_t x342 = INT16_MIN;
uint16_t x349 = 277U;
volatile uint8_t x360 = 11U;
static volatile int64_t t90 = 2848002022531188353LL;
volatile uint16_t x369 = 387U;
int64_t t93 = -8715LL;
uint64_t x381 = UINT64_MAX;
static int32_t x383 = -1;
uint32_t x386 = 10308U;
int8_t x388 = -1;
int8_t x389 = INT8_MIN;
int64_t x394 = -1LL;
volatile int8_t x396 = 3;
volatile uint64_t t98 = 64178822LLU;
static volatile int32_t t99 = -2;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int8_t x3 = 2;
	volatile int64_t t0 = 123898196626172LL;

	t0 = ((x1&(x2<=x3))*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint16_t x6 = 7125U;
	uint8_t x7 = UINT8_MAX;
	static volatile int32_t x8 = -20727323;
	volatile int64_t t1 = -2032684938347LL;

	t1 = ((x5&(x6<=x7))*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int64_t x10 = -13LL;
	static int64_t x11 = INT64_MIN;
	int32_t x12 = -5;

	t2 = ((x9&(x10<=x11))*x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MIN;
	volatile uint8_t x15 = 0U;
	int32_t x16 = -1;
	volatile int32_t t3 = 269439;

	t3 = ((x13&(x14<=x15))*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	uint8_t x18 = 0U;
	uint32_t x19 = 1597350333U;
	static volatile int64_t x20 = INT64_MAX;
	uint64_t t4 = 60LLU;

	t4 = ((x17&(x18<=x19))*x20);

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 2LLU;
	uint64_t x22 = 80141LLU;
	int64_t x23 = INT64_MIN;
	volatile int8_t x24 = INT8_MAX;
	static uint64_t t5 = 0LLU;

	t5 = ((x21&(x22<=x23))*x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int32_t x27 = -1;
	volatile uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 12330542704LLU;

	t6 = ((x25&(x26<=x27))*x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 6233105197LLU;
	static volatile uint8_t x30 = 0U;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x29&(x30<=x31))*x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int8_t x35 = 0;
	volatile uint8_t x36 = 0U;
	int32_t t8 = -125303;

	t8 = ((x33&(x34<=x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -43377615498309795LL;
	volatile int64_t x38 = -55073LL;
	static volatile uint32_t x40 = UINT32_MAX;
	volatile int64_t t9 = 393535257167040LL;

	t9 = ((x37&(x38<=x39))*x40);

	if (t9 != 4294967295LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	uint16_t x42 = UINT16_MAX;
	volatile int32_t x43 = INT32_MIN;
	volatile int64_t x44 = INT64_MAX;
	int64_t t10 = -66084840LL;

	t10 = ((x41&(x42<=x43))*x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -86;
	int16_t x46 = 3472;
	volatile uint64_t x47 = 228LLU;
	static volatile uint64_t x48 = 959999219051LLU;
	uint64_t t11 = 67LLU;

	t11 = ((x45&(x46<=x47))*x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	uint8_t x50 = 3U;
	int8_t x51 = 3;
	int16_t x52 = INT16_MAX;

	t12 = ((x49&(x50<=x51))*x52);

	if (t12 != 32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 3U;
	uint32_t x54 = 51U;
	uint16_t x56 = UINT16_MAX;
	int32_t t13 = 452218180;

	t13 = ((x53&(x54<=x55))*x56);

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	int32_t x59 = 0;
	volatile int64_t x60 = INT64_MIN;
	int64_t t14 = INT64_MIN;

	t14 = ((x57&(x58<=x59))*x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x62 = 4U;
	int16_t x63 = INT16_MIN;
	int64_t x64 = -1LL;
	volatile int64_t t15 = -4506016148LL;

	t15 = ((x61&(x62<=x63))*x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x66 = -1810;
	int32_t x67 = -1;
	uint8_t x68 = 6U;
	int32_t t16 = 1946226;

	t16 = ((x65&(x66<=x67))*x68);

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 45U;
	int8_t x71 = -1;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 1429;

	t17 = ((x69&(x70<=x71))*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MIN;
	int64_t x74 = 1274316521864898LL;
	uint16_t x75 = 99U;
	static int64_t x76 = 11408270847LL;
	volatile int64_t t18 = -13479143054LL;

	t18 = ((x73&(x74<=x75))*x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x78 = UINT32_MAX;
	uint64_t x80 = 2053521LLU;
	static volatile uint64_t t19 = 0LLU;

	t19 = ((x77&(x78<=x79))*x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int16_t x82 = -1;
	static int16_t x83 = 6;
	int64_t x84 = INT64_MAX;
	int64_t t20 = INT64_MAX;

	t20 = ((x81&(x82<=x83))*x84);

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 8587451261659601LLU;
	int32_t x86 = -8585655;
	volatile uint16_t x87 = UINT16_MAX;
	int64_t x88 = INT64_MIN;

	t21 = ((x85&(x86<=x87))*x88);

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 11026985LL;
	volatile uint64_t x90 = 99625801123LLU;
	int64_t x91 = INT64_MIN;
	static volatile int16_t x92 = -1599;
	int64_t t22 = -11894940179074LL;

	t22 = ((x89&(x90<=x91))*x92);

	if (t22 != -1599LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 69U;
	volatile int8_t x94 = INT8_MAX;
	volatile uint32_t t23 = 593206536U;

	t23 = ((x93&(x94<=x95))*x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	static int16_t x99 = INT16_MIN;
	int32_t x100 = -1;
	volatile int32_t t24 = 220533179;

	t24 = ((x97&(x98<=x99))*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -13;
	int64_t x102 = -441719LL;
	volatile int64_t x104 = -1LL;
	int64_t t25 = -31826289936194LL;

	t25 = ((x101&(x102<=x103))*x104);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MIN;
	volatile uint64_t x106 = 45780586644669718LLU;
	static int8_t x107 = INT8_MIN;
	static uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = 1;

	t26 = ((x105&(x106<=x107))*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x110 = INT32_MIN;
	uint16_t x111 = UINT16_MAX;
	int64_t x112 = INT64_MIN;

	t27 = ((x109&(x110<=x111))*x112);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 498821603121LLU;
	int16_t x114 = 217;
	int8_t x116 = -42;
	volatile uint64_t t28 = 600365LLU;

	t28 = ((x113&(x114<=x115))*x116);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x118 = 117U;
	int64_t x119 = -157590LL;
	uint64_t x120 = 6486346255325082028LLU;
	volatile uint64_t t29 = 3402492347LLU;

	t29 = ((x117&(x118<=x119))*x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	uint64_t x123 = 4337150471984LLU;
	int32_t x124 = INT32_MAX;

	t30 = ((x121&(x122<=x123))*x124);

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = -280237807LL;
	static int8_t x127 = 1;
	int32_t x128 = 52;

	t31 = ((x125&(x126<=x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -759;
	int8_t x130 = INT8_MAX;
	int64_t x131 = -1LL;
	volatile int32_t x132 = 43;
	int32_t t32 = -1;

	t32 = ((x129&(x130<=x131))*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = 111U;
	static int16_t x134 = 31;
	uint64_t x135 = 34086465274LLU;

	t33 = ((x133&(x134<=x135))*x136);

	if (t33 != 4294934528U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = UINT8_MAX;
	int64_t x138 = -1LL;
	static uint16_t x139 = UINT16_MAX;
	volatile uint64_t t34 = 9672LLU;

	t34 = ((x137&(x138<=x139))*x140);

	if (t34 != 746LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	volatile uint32_t x144 = 2U;
	int64_t t35 = 495131490540087650LL;

	t35 = ((x141&(x142<=x143))*x144);

	if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = ((x145&(x146<=x147))*x148);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MIN;
	static int64_t x151 = 11950781LL;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 2257;

	t37 = ((x149&(x150<=x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = 4867189;
	int8_t x156 = 3;
	int32_t t38 = 119;

	t38 = ((x153&(x154<=x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 1;
	int8_t x158 = -7;
	uint32_t x159 = UINT32_MAX;
	volatile int8_t x160 = -31;
	int32_t t39 = 81504;

	t39 = ((x157&(x158<=x159))*x160);

	if (t39 != -31) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = 4;
	int8_t x162 = INT8_MAX;
	uint8_t x163 = UINT8_MAX;
	static uint32_t x164 = 3917331U;
	uint32_t t40 = 12956U;

	t40 = ((x161&(x162<=x163))*x164);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int16_t x166 = 405;
	uint32_t x167 = 26632U;
	int64_t x168 = INT64_MIN;
	volatile int64_t t41 = 108053709221942LL;

	t41 = ((x165&(x166<=x167))*x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = -1;
	volatile int16_t x171 = INT16_MIN;
	int16_t x172 = 7902;
	static volatile int32_t t42 = -221402695;

	t42 = ((x169&(x170<=x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = -1;
	int8_t x175 = INT8_MIN;
	int32_t t43 = INT32_MAX;

	t43 = ((x173&(x174<=x175))*x176);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -244;
	static volatile uint64_t x179 = 356868642863363459LLU;
	int8_t x180 = -1;
	static volatile int32_t t44 = 247;

	t44 = ((x177&(x178<=x179))*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -9;
	int8_t x183 = INT8_MIN;
	volatile int32_t t45 = -3991315;

	t45 = ((x181&(x182<=x183))*x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MAX;
	volatile int32_t x186 = INT32_MAX;
	int8_t x187 = -1;
	volatile uint64_t x188 = UINT64_MAX;

	t46 = ((x185&(x186<=x187))*x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	int16_t x190 = -1;
	int8_t x191 = INT8_MIN;
	int32_t x192 = INT32_MIN;
	int32_t t47 = -97;

	t47 = ((x189&(x190<=x191))*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = 0;
	static volatile int32_t x195 = -79;
	volatile int64_t x196 = -15LL;

	t48 = ((x193&(x194<=x195))*x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 0U;
	volatile int16_t x198 = INT16_MIN;
	uint16_t x199 = UINT16_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -1;

	t49 = ((x197&(x198<=x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x202 = 0U;
	int16_t x203 = 0;
	int32_t x204 = INT32_MIN;
	int32_t t50 = -1;

	t50 = ((x201&(x202<=x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 506749484U;
	int64_t x206 = INT64_MIN;
	volatile int16_t x207 = 4;
	static uint32_t t51 = 21U;

	t51 = ((x205&(x206<=x207))*x208);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	int64_t x210 = -1LL;
	uint32_t t52 = 123884521U;

	t52 = ((x209&(x210<=x211))*x212);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 4065438;
	int32_t x215 = -20426;
	static volatile int64_t t53 = 676064006916LL;

	t53 = ((x213&(x214<=x215))*x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = 7229481LL;
	static int16_t x220 = 0;
	volatile int32_t t54 = 113898882;

	t54 = ((x217&(x218<=x219))*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 1025930039754122260LLU;
	volatile int32_t x222 = INT32_MAX;
	int16_t x223 = INT16_MIN;
	uint64_t x224 = 208299LLU;

	t55 = ((x221&(x222<=x223))*x224);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x225 = 22716U;
	int64_t x226 = -7983427004947LL;
	uint16_t x227 = 8183U;

	t56 = ((x225&(x226<=x227))*x228);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -113638385LL;
	uint16_t x230 = 3U;
	int8_t x231 = INT8_MIN;
	uint32_t x232 = 2834U;

	t57 = ((x229&(x230<=x231))*x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	int64_t x234 = -1498LL;
	volatile int32_t x235 = -45495093;
	static int32_t t58 = -945;

	t58 = ((x233&(x234<=x235))*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MAX;
	int32_t x238 = -1;
	int16_t x239 = INT16_MIN;
	volatile int64_t x240 = INT64_MAX;
	volatile int64_t t59 = 619224641521968816LL;

	t59 = ((x237&(x238<=x239))*x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	uint16_t x243 = 0U;
	static int32_t x244 = INT32_MIN;
	int32_t t60 = -15235;

	t60 = ((x241&(x242<=x243))*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = INT32_MIN;
	uint16_t x248 = 9073U;

	t61 = ((x245&(x246<=x247))*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MAX;
	int32_t x251 = INT32_MAX;
	static int16_t x252 = INT16_MAX;

	t62 = ((x249&(x250<=x251))*x252);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -3630570006093607LL;
	uint64_t x254 = 35737579LLU;
	uint32_t x255 = UINT32_MAX;
	volatile int32_t x256 = INT32_MAX;
	int64_t t63 = 19071LL;

	t63 = ((x253&(x254<=x255))*x256);

	if (t63 != 2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int32_t x258 = -1;
	volatile int32_t t64 = -205734;

	t64 = ((x257&(x258<=x259))*x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -116;
	int32_t x262 = INT32_MIN;
	volatile int16_t x264 = -920;
	int32_t t65 = -32392;

	t65 = ((x261&(x262<=x263))*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	uint64_t x266 = UINT64_MAX;
	int32_t x267 = INT32_MIN;
	static int16_t x268 = 292;

	t66 = ((x265&(x266<=x267))*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	volatile int16_t x271 = INT16_MIN;
	int32_t x272 = INT32_MAX;
	int64_t t67 = 1028138858217680LL;

	t67 = ((x269&(x270<=x271))*x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	uint16_t x274 = UINT16_MAX;
	uint64_t x276 = UINT64_MAX;
	uint64_t t68 = UINT64_MAX;

	t68 = ((x273&(x274<=x275))*x276);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 3687U;
	volatile uint32_t t69 = 723900U;

	t69 = ((x277&(x278<=x279))*x280);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x281 = 479595819297589LL;
	static uint32_t x283 = 202U;
	int8_t x284 = INT8_MAX;
	volatile int64_t t70 = -5LL;

	t70 = ((x281&(x282<=x283))*x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = INT32_MIN;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = -13;
	int32_t t71 = -11;

	t71 = ((x285&(x286<=x287))*x288);

	if (t71 != -13) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MAX;
	static uint8_t x290 = 76U;
	static int8_t x291 = INT8_MAX;
	volatile int8_t x292 = INT8_MAX;
	int32_t t72 = -306488;

	t72 = ((x289&(x290<=x291))*x292);

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	int32_t x295 = 57850907;
	static volatile int8_t x296 = 1;

	t73 = ((x293&(x294<=x295))*x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	volatile uint64_t x298 = UINT64_MAX;
	volatile uint64_t x299 = 784LLU;
	int16_t x300 = -1;
	volatile int64_t t74 = -102085360LL;

	t74 = ((x297&(x298<=x299))*x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = INT8_MIN;
	uint8_t x304 = UINT8_MAX;
	int32_t t75 = -26163;

	t75 = ((x301&(x302<=x303))*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 6616771268447LLU;
	static int32_t x307 = -1;
	uint64_t t76 = 850LLU;

	t76 = ((x305&(x306<=x307))*x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -413609926;
	int16_t x311 = 0;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = 399206179;

	t77 = ((x309&(x310<=x311))*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 4491087674477992LLU;
	int64_t x314 = -1LL;
	volatile int16_t x315 = 205;
	uint64_t t78 = 2LLU;

	t78 = ((x313&(x314<=x315))*x316);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -1LL;
	int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MAX;
	volatile uint32_t x320 = UINT32_MAX;
	volatile int64_t t79 = -1509025107339276305LL;

	t79 = ((x317&(x318<=x319))*x320);

	if (t79 != 4294967295LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = INT8_MIN;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t80 = 984U;

	t80 = ((x321&(x322<=x323))*x324);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MAX;
	static int16_t x327 = 62;
	volatile int32_t x328 = INT32_MIN;
	int32_t t81 = 461339197;

	t81 = ((x325&(x326<=x327))*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x329 = 1U;
	static uint8_t x330 = 3U;
	static int32_t x332 = -1;
	volatile int32_t t82 = -42431;

	t82 = ((x329&(x330<=x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MIN;
	uint64_t x335 = UINT64_MAX;
	uint64_t x336 = 5876239379523545250LLU;
	uint64_t t83 = 538LLU;

	t83 = ((x333&(x334<=x335))*x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 3;
	volatile int32_t t84 = 696937610;

	t84 = ((x337&(x338<=x339))*x340);

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 468;
	uint64_t x343 = UINT64_MAX;
	int32_t x344 = -1;
	int32_t t85 = -308;

	t85 = ((x341&(x342<=x343))*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 548577013708172369LLU;
	int16_t x346 = INT16_MIN;
	int64_t x347 = -5544LL;
	int16_t x348 = 7641;
	static uint64_t t86 = 998374786888409LLU;

	t86 = ((x345&(x346<=x347))*x348);

	if (t86 != 7641LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MIN;
	volatile int16_t x352 = -20;
	int32_t t87 = 82139549;

	t87 = ((x349&(x350<=x351))*x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 3499LL;
	int8_t x354 = -1;
	int16_t x355 = INT16_MAX;
	int8_t x356 = INT8_MAX;
	volatile int64_t t88 = 6120476239738361LL;

	t88 = ((x353&(x354<=x355))*x356);

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = INT8_MIN;
	static int8_t x358 = 52;
	volatile int64_t x359 = -1LL;
	int32_t t89 = -2;

	t89 = ((x357&(x358<=x359))*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	uint8_t x362 = UINT8_MAX;
	volatile uint8_t x363 = 16U;
	int64_t x364 = -19765LL;

	t90 = ((x361&(x362<=x363))*x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	int64_t x366 = -1LL;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = INT32_MAX;
	int32_t t91 = INT32_MAX;

	t91 = ((x365&(x366<=x367))*x368);

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = -1;
	uint16_t x371 = 475U;
	int64_t x372 = 449662648LL;
	int64_t t92 = -1067995LL;

	t92 = ((x369&(x370<=x371))*x372);

	if (t92 != 449662648LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	volatile int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MAX;

	t93 = ((x373&(x374<=x375))*x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MAX;
	int32_t x378 = INT32_MIN;
	int32_t x379 = -1;
	int64_t x380 = INT64_MIN;
	static int64_t t94 = INT64_MIN;

	t94 = ((x377&(x378<=x379))*x380);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x382 = INT16_MAX;
	static volatile uint16_t x384 = 1917U;
	uint64_t t95 = 2866313106LLU;

	t95 = ((x381&(x382<=x383))*x384);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 32LLU;
	volatile int16_t x387 = INT16_MIN;
	uint64_t t96 = 23575379LLU;

	t96 = ((x385&(x386<=x387))*x388);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x390 = 71631345653LLU;
	int32_t x391 = INT32_MIN;
	int16_t x392 = -4966;
	volatile int32_t t97 = 7720;

	t97 = ((x389&(x390<=x391))*x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	static int16_t x395 = INT16_MIN;

	t98 = ((x393&(x394<=x395))*x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	int16_t x398 = INT16_MAX;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = 7U;

	t99 = ((x397&(x398<=x399))*x400);

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

