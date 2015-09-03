#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 49U;
int8_t x11 = INT8_MAX;
int8_t x13 = INT8_MIN;
int32_t x17 = INT32_MIN;
int8_t x21 = INT8_MAX;
int32_t x23 = 833;
int32_t t5 = -432244;
static uint16_t x31 = 49U;
int16_t x32 = 21;
uint64_t x34 = UINT64_MAX;
int8_t x35 = -4;
volatile uint64_t x37 = 148671LLU;
int32_t x38 = 180;
volatile int32_t t9 = 25;
volatile int32_t t11 = 232366;
int32_t x49 = INT32_MIN;
int64_t x50 = INT64_MIN;
volatile int32_t x63 = INT32_MAX;
int16_t x64 = INT16_MIN;
uint64_t x71 = UINT64_MAX;
int8_t x76 = -1;
int8_t x85 = 1;
uint64_t x86 = 97494LLU;
static volatile int32_t t25 = 52976;
int16_t x113 = -5235;
static int32_t x121 = -1;
uint32_t x124 = 1U;
volatile int32_t t30 = -3;
volatile int32_t t34 = 435;
static volatile int32_t x143 = INT32_MIN;
uint64_t x147 = UINT64_MAX;
uint32_t x150 = 90064309U;
uint32_t x153 = 444U;
volatile int32_t t40 = -4;
volatile int8_t x168 = -5;
static uint16_t x170 = 557U;
int8_t x174 = -1;
int32_t x178 = INT32_MIN;
volatile int64_t x183 = INT64_MIN;
uint16_t x190 = 1209U;
static int64_t x195 = -1LL;
int64_t x197 = INT64_MAX;
int64_t x200 = INT64_MIN;
uint64_t x204 = 54379503407065490LLU;
volatile int64_t x205 = INT64_MIN;
int64_t x209 = INT64_MAX;
int32_t t53 = 55037;
int16_t x217 = INT16_MAX;
static volatile int32_t t56 = 211;
uint64_t x229 = 17579450240078LLU;
uint8_t x232 = 1U;
int32_t x234 = INT32_MIN;
volatile int8_t x237 = -1;
uint8_t x241 = 3U;
uint8_t x255 = 5U;
volatile int64_t x257 = INT64_MIN;
int64_t x258 = 181LL;
volatile int8_t x259 = 21;
static int32_t x263 = INT32_MAX;
uint16_t x266 = 3U;
static int64_t x267 = 513095354891381LL;
uint64_t x273 = 2983725882107LLU;
int32_t x275 = INT32_MIN;
int16_t x276 = -1;
int8_t x277 = INT8_MIN;
int64_t x286 = 1911645000768LL;
uint16_t x288 = 6491U;
int8_t x289 = INT8_MIN;
int32_t t73 = -1;
static volatile uint16_t x299 = 0U;
uint32_t x310 = 496502U;
int16_t x314 = 1866;
static int16_t x316 = -1;
volatile int32_t t78 = 4;
int32_t x317 = -8;
static uint8_t x321 = 3U;
int64_t x322 = INT64_MIN;
static volatile int32_t x323 = -4060;
int16_t x326 = -1;
uint16_t x329 = UINT16_MAX;
int16_t x332 = -1;
static uint64_t x335 = UINT64_MAX;
volatile int32_t t83 = -6902;
uint16_t x339 = UINT16_MAX;
volatile int64_t x343 = INT64_MIN;
int8_t x349 = INT8_MIN;
int32_t t89 = -887270;
uint64_t x367 = UINT64_MAX;
static volatile int32_t t93 = 6448;
uint64_t x388 = UINT64_MAX;
static int8_t x390 = INT8_MAX;
int8_t x397 = -22;


void f0(void) {
	volatile int16_t x1 = 0;
	uint32_t x2 = UINT32_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 186287;

	t0 = (x1<=((x2<=x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 8652;
	int32_t x6 = -1;
	static volatile int32_t x7 = 62;
	uint32_t x8 = 364U;
	volatile int32_t t1 = -548839;

	t1 = (x5<=((x6<=x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 120;
	int16_t x10 = 1;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 16583;

	t2 = (x9<=((x10<=x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	static uint32_t x15 = UINT32_MAX;
	int16_t x16 = -324;
	static int32_t t3 = 39017;

	t3 = (x13<=((x14<=x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x18 = -1;
	int64_t x19 = INT64_MIN;
	int8_t x20 = 1;
	volatile int32_t t4 = 1;

	t4 = (x17<=((x18<=x19)<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = UINT64_MAX;
	int16_t x24 = -139;

	t5 = (x21<=((x22<=x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	int64_t x26 = INT64_MAX;
	int16_t x27 = -1;
	volatile uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = 0;

	t6 = (x25<=((x26<=x27)<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = -1;
	volatile int32_t t7 = -13852242;

	t7 = (x29<=((x30<=x31)<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 4U;
	static volatile int64_t x36 = INT64_MAX;
	int32_t t8 = -811;

	t8 = (x33<=((x34<=x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x39 = 22U;
	static uint8_t x40 = UINT8_MAX;

	t9 = (x37<=((x38<=x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = -2055810811208290498LL;
	int16_t x42 = INT16_MAX;
	int16_t x43 = -3;
	int8_t x44 = -30;
	volatile int32_t t10 = -1331;

	t10 = (x41<=((x42<=x43)<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -2774;
	uint64_t x46 = UINT64_MAX;
	int8_t x47 = 11;
	static int64_t x48 = -49538LL;

	t11 = (x45<=((x46<=x47)<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x51 = -1;
	int8_t x52 = INT8_MIN;
	int32_t t12 = -678574;

	t12 = (x49<=((x50<=x51)<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static uint8_t x54 = UINT8_MAX;
	uint16_t x55 = 1U;
	static int32_t x56 = INT32_MIN;
	int32_t t13 = -507832;

	t13 = (x53<=((x54<=x55)<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = -483984641LL;
	int64_t x58 = INT64_MAX;
	uint8_t x59 = UINT8_MAX;
	int32_t x60 = -1;
	volatile int32_t t14 = 59195;

	t14 = (x57<=((x58<=x59)<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	volatile int32_t x62 = INT32_MAX;
	int32_t t15 = -81319;

	t15 = (x61<=((x62<=x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	uint64_t x66 = 0LLU;
	uint32_t x67 = 28U;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 64508;

	t16 = (x65<=((x66<=x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	uint16_t x70 = UINT16_MAX;
	int16_t x72 = 10;
	volatile int32_t t17 = -91;

	t17 = (x69<=((x70<=x71)<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int8_t x74 = INT8_MIN;
	volatile int16_t x75 = INT16_MIN;
	int32_t t18 = -194488176;

	t18 = (x73<=((x74<=x75)<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 45167U;
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = -28;
	int8_t x80 = 41;
	static volatile int32_t t19 = -75;

	t19 = (x77<=((x78<=x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = 295U;
	int32_t x82 = 490;
	uint32_t x83 = 12335U;
	uint8_t x84 = UINT8_MAX;
	int32_t t20 = 7;

	t20 = (x81<=((x82<=x83)<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x87 = -1;
	volatile uint16_t x88 = 3U;
	int32_t t21 = -59636906;

	t21 = (x85<=((x86<=x87)<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 114873625U;
	static int16_t x90 = 117;
	int16_t x91 = INT16_MIN;
	int64_t x92 = -106339888LL;
	int32_t t22 = 93240;

	t22 = (x89<=((x90<=x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -1;
	static int64_t x94 = -1LL;
	int32_t x95 = -217;
	int32_t x96 = 1;
	int32_t t23 = -174;

	t23 = (x93<=((x94<=x95)<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 5111U;
	static int32_t x98 = INT32_MIN;
	volatile int64_t x99 = -1LL;
	static int16_t x100 = INT16_MIN;
	volatile int32_t t24 = -224;

	t24 = (x97<=((x98<=x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	int8_t x102 = INT8_MAX;
	volatile int64_t x103 = -1LL;
	int32_t x104 = -1;

	t25 = (x101<=((x102<=x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -1;
	uint64_t x106 = 6368LLU;
	volatile int32_t x107 = INT32_MIN;
	static int32_t x108 = 2;
	int32_t t26 = 119042130;

	t26 = (x105<=((x106<=x107)<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	volatile int64_t x110 = -30910LL;
	int32_t x111 = -358;
	uint16_t x112 = 6U;
	static volatile int32_t t27 = 512476;

	t27 = (x109<=((x110<=x111)<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = -1;
	static int16_t x115 = INT16_MIN;
	static int64_t x116 = INT64_MIN;
	int32_t t28 = 3444893;

	t28 = (x113<=((x114<=x115)<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x118 = INT8_MIN;
	int8_t x119 = -1;
	volatile int8_t x120 = INT8_MAX;
	volatile int32_t t29 = 166714402;

	t29 = (x117<=((x118<=x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = 2U;
	uint16_t x123 = 3674U;

	t30 = (x121<=((x122<=x123)<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	uint8_t x126 = UINT8_MAX;
	int16_t x127 = INT16_MAX;
	int64_t x128 = -15434372LL;
	volatile int32_t t31 = -3989;

	t31 = (x125<=((x126<=x127)<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = 6980301112LL;
	static int32_t x131 = INT32_MIN;
	uint16_t x132 = 95U;
	volatile int32_t t32 = 40;

	t32 = (x129<=((x130<=x131)<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	static volatile int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MAX;
	static volatile int64_t x136 = -1LL;
	static volatile int32_t t33 = 1;

	t33 = (x133<=((x134<=x135)<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = -1;
	int32_t x138 = INT32_MAX;
	static int64_t x139 = -6185936573099872LL;
	int8_t x140 = INT8_MIN;

	t34 = (x137<=((x138<=x139)<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MAX;
	volatile uint16_t x142 = 31U;
	int8_t x144 = 5;
	static int32_t t35 = -1714;

	t35 = (x141<=((x142<=x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	static uint8_t x146 = UINT8_MAX;
	int32_t x148 = -607;
	int32_t t36 = 82490;

	t36 = (x145<=((x146<=x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 46U;
	uint16_t x151 = UINT16_MAX;
	uint64_t x152 = 32092034821143LLU;
	volatile int32_t t37 = -630566091;

	t37 = (x149<=((x150<=x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = UINT64_MAX;
	volatile uint64_t x155 = UINT64_MAX;
	static int64_t x156 = 134123717693614LL;
	volatile int32_t t38 = -290543838;

	t38 = (x153<=((x154<=x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -3;
	static volatile int16_t x158 = -8;
	volatile int8_t x159 = 0;
	volatile int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 253;

	t39 = (x157<=((x158<=x159)<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MIN;
	int8_t x162 = 0;
	uint8_t x163 = 21U;
	int8_t x164 = 26;

	t40 = (x161<=((x162<=x163)<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 4884U;
	uint8_t x166 = 1U;
	int32_t x167 = -1;
	static int32_t t41 = 1803;

	t41 = (x165<=((x166<=x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile uint8_t x171 = 1U;
	int64_t x172 = 3LL;
	volatile int32_t t42 = 67;

	t42 = (x169<=((x170<=x171)<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	uint16_t x175 = 1041U;
	int32_t x176 = 7875;
	static int32_t t43 = -463051;

	t43 = (x173<=((x174<=x175)<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 6072030416LL;
	uint64_t x179 = 1115181423023512LLU;
	int32_t x180 = INT32_MIN;
	static volatile int32_t t44 = -741815;

	t44 = (x177<=((x178<=x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	volatile int64_t x182 = -1LL;
	int8_t x184 = 2;
	int32_t t45 = -11387471;

	t45 = (x181<=((x182<=x183)<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	static int64_t x186 = -1LL;
	int64_t x187 = INT64_MAX;
	int64_t x188 = 0LL;
	int32_t t46 = 834045153;

	t46 = (x185<=((x186<=x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = INT8_MAX;
	int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MAX;
	int32_t t47 = 38957365;

	t47 = (x189<=((x190<=x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 24U;
	int16_t x194 = INT16_MAX;
	uint64_t x196 = 3988LLU;
	int32_t t48 = 3;

	t48 = (x193<=((x194<=x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = INT8_MIN;
	static int16_t x199 = INT16_MIN;
	volatile int32_t t49 = -61755;

	t49 = (x197<=((x198<=x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MAX;
	int16_t x202 = INT16_MIN;
	int16_t x203 = 2303;
	static volatile int32_t t50 = -242640;

	t50 = (x201<=((x202<=x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x206 = 18444;
	volatile int16_t x207 = -1;
	int64_t x208 = INT64_MIN;
	int32_t t51 = 3;

	t51 = (x205<=((x206<=x207)<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x210 = 1938LLU;
	uint64_t x211 = 1999LLU;
	static volatile int16_t x212 = INT16_MIN;
	int32_t t52 = 8074;

	t52 = (x209<=((x210<=x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MIN;
	uint32_t x214 = 15882U;
	uint8_t x215 = UINT8_MAX;
	int32_t x216 = 30;

	t53 = (x213<=((x214<=x215)<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = -27;
	int16_t x219 = 12659;
	volatile int32_t x220 = INT32_MAX;
	volatile int32_t t54 = 27718944;

	t54 = (x217<=((x218<=x219)<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 1U;
	uint64_t x222 = 9896564719LLU;
	int64_t x223 = INT64_MIN;
	int32_t x224 = -8737773;
	volatile int32_t t55 = -56350;

	t55 = (x221<=((x222<=x223)<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	int64_t x226 = -1LL;
	int8_t x227 = -1;
	static int8_t x228 = INT8_MIN;

	t56 = (x225<=((x226<=x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MIN;
	static uint64_t x231 = UINT64_MAX;
	volatile int32_t t57 = 3257400;

	t57 = (x229<=((x230<=x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	uint64_t x235 = 4403172314LLU;
	int64_t x236 = -1LL;
	volatile int32_t t58 = -294126;

	t58 = (x233<=((x234<=x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = 478284;
	uint16_t x239 = UINT16_MAX;
	int64_t x240 = INT64_MIN;
	static int32_t t59 = 2510059;

	t59 = (x237<=((x238<=x239)<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x242 = UINT32_MAX;
	uint64_t x243 = UINT64_MAX;
	static volatile int16_t x244 = INT16_MAX;
	volatile int32_t t60 = 221933422;

	t60 = (x241<=((x242<=x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	int16_t x246 = INT16_MIN;
	int8_t x247 = -1;
	int16_t x248 = INT16_MIN;
	int32_t t61 = 17927;

	t61 = (x245<=((x246<=x247)<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -31;
	volatile int64_t x250 = INT64_MIN;
	uint16_t x251 = UINT16_MAX;
	int16_t x252 = -1;
	int32_t t62 = 4677538;

	t62 = (x249<=((x250<=x251)<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x253 = 0;
	int16_t x254 = -1791;
	static int64_t x256 = 207007167979LL;
	static int32_t t63 = 10;

	t63 = (x253<=((x254<=x255)<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x260 = 173U;
	volatile int32_t t64 = -6710746;

	t64 = (x257<=((x258<=x259)<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MAX;
	int64_t x262 = INT64_MIN;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -10412027;

	t65 = (x261<=((x262<=x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -395;
	int64_t x268 = -1LL;
	int32_t t66 = 113;

	t66 = (x265<=((x266<=x267)<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	uint8_t x270 = UINT8_MAX;
	volatile uint16_t x271 = UINT16_MAX;
	int16_t x272 = 8;
	int32_t t67 = -111036367;

	t67 = (x269<=((x270<=x271)<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x274 = 494;
	int32_t t68 = 3701549;

	t68 = (x273<=((x274<=x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = 20496309978244LLU;
	static int16_t x279 = -1;
	uint64_t x280 = UINT64_MAX;
	static int32_t t69 = 12313488;

	t69 = (x277<=((x278<=x279)<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static int32_t x282 = INT32_MAX;
	int64_t x283 = -933143641398LL;
	int8_t x284 = 27;
	volatile int32_t t70 = -313233;

	t70 = (x281<=((x282<=x283)<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 7;
	int16_t x287 = INT16_MAX;
	volatile int32_t t71 = -123;

	t71 = (x285<=((x286<=x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MIN;
	uint64_t x291 = UINT64_MAX;
	uint16_t x292 = 18U;
	static volatile int32_t t72 = 59116;

	t72 = (x289<=((x290<=x291)<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 369788LLU;
	uint16_t x294 = 89U;
	int8_t x295 = 3;
	int64_t x296 = -1LL;

	t73 = (x293<=((x294<=x295)<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = UINT8_MAX;
	uint16_t x298 = UINT16_MAX;
	static int16_t x300 = INT16_MIN;
	volatile int32_t t74 = -197141;

	t74 = (x297<=((x298<=x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = -26;
	uint32_t x302 = 450U;
	int32_t x303 = 6;
	static int64_t x304 = -1LL;
	int32_t t75 = -161;

	t75 = (x301<=((x302<=x303)<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x305 = UINT32_MAX;
	volatile int16_t x306 = INT16_MIN;
	int8_t x307 = 60;
	int16_t x308 = -2079;
	static volatile int32_t t76 = -3426;

	t76 = (x305<=((x306<=x307)<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	uint32_t x311 = UINT32_MAX;
	int64_t x312 = INT64_MAX;
	int32_t t77 = -32307967;

	t77 = (x309<=((x310<=x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1433105LL;
	uint16_t x315 = 25U;

	t78 = (x313<=((x314<=x315)<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = 1;
	uint16_t x319 = 1U;
	volatile int32_t x320 = INT32_MAX;
	volatile int32_t t79 = -650382;

	t79 = (x317<=((x318<=x319)<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x324 = UINT8_MAX;
	int32_t t80 = 20476;

	t80 = (x321<=((x322<=x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MAX;
	uint8_t x327 = 3U;
	int64_t x328 = -1LL;
	volatile int32_t t81 = -15919855;

	t81 = (x325<=((x326<=x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x330 = 2U;
	int16_t x331 = 11245;
	volatile int32_t t82 = 19;

	t82 = (x329<=((x330<=x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	static int32_t x334 = INT32_MIN;
	static int64_t x336 = INT64_MIN;

	t83 = (x333<=((x334<=x335)<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	uint16_t x338 = 27U;
	int8_t x340 = INT8_MAX;
	volatile int32_t t84 = 430689;

	t84 = (x337<=((x338<=x339)<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	uint8_t x342 = 0U;
	uint16_t x344 = UINT16_MAX;
	static int32_t t85 = 28966;

	t85 = (x341<=((x342<=x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 35U;
	int8_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	volatile int32_t x348 = 0;
	int32_t t86 = 454;

	t86 = (x345<=((x346<=x347)<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = INT64_MIN;
	int16_t x351 = -1;
	uint16_t x352 = 5U;
	volatile int32_t t87 = -1597691;

	t87 = (x349<=((x350<=x351)<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 0U;
	static volatile uint8_t x354 = 3U;
	static uint64_t x355 = UINT64_MAX;
	static volatile int8_t x356 = 48;
	volatile int32_t t88 = 1;

	t88 = (x353<=((x354<=x355)<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	int32_t x358 = 217;
	int16_t x359 = INT16_MIN;
	uint64_t x360 = UINT64_MAX;

	t89 = (x357<=((x358<=x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	uint16_t x362 = 0U;
	uint8_t x363 = 94U;
	int16_t x364 = INT16_MIN;
	int32_t t90 = 9;

	t90 = (x361<=((x362<=x363)<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 1;
	uint32_t x366 = UINT32_MAX;
	uint16_t x368 = UINT16_MAX;
	int32_t t91 = -3;

	t91 = (x365<=((x366<=x367)<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = -17643054945833LL;
	uint64_t x370 = 67822487060453LLU;
	uint8_t x371 = 0U;
	int8_t x372 = 62;
	int32_t t92 = 723940;

	t92 = (x369<=((x370<=x371)<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 356574;
	int32_t x374 = 26092;
	static int32_t x375 = INT32_MIN;
	static int16_t x376 = INT16_MAX;

	t93 = (x373<=((x374<=x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 107U;
	static uint32_t x378 = UINT32_MAX;
	static uint32_t x379 = UINT32_MAX;
	volatile int8_t x380 = INT8_MAX;
	int32_t t94 = 462;

	t94 = (x377<=((x378<=x379)<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = 12LLU;
	uint32_t x382 = 3333U;
	int16_t x383 = INT16_MAX;
	uint32_t x384 = 2002325U;
	int32_t t95 = -2877;

	t95 = (x381<=((x382<=x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 1992362334LLU;
	static uint64_t x386 = UINT64_MAX;
	uint8_t x387 = 18U;
	int32_t t96 = -604616;

	t96 = (x385<=((x386<=x387)<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = UINT16_MAX;
	uint8_t x391 = 79U;
	int32_t x392 = INT32_MIN;
	int32_t t97 = -1970;

	t97 = (x389<=((x390<=x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x393 = UINT32_MAX;
	static int32_t x394 = INT32_MAX;
	volatile uint64_t x395 = UINT64_MAX;
	int64_t x396 = -1LL;
	volatile int32_t t98 = -3323800;

	t98 = (x393<=((x394<=x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MAX;
	int16_t x399 = INT16_MIN;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t99 = 6;

	t99 = (x397<=((x398<=x399)<=x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

