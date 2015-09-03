#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = -262;
uint32_t x13 = 1U;
volatile int32_t t4 = 2;
volatile int32_t t5 = 3;
int32_t t6 = 16047;
int64_t x39 = INT64_MIN;
volatile int8_t x45 = -1;
uint64_t x57 = 19666735LLU;
uint32_t x64 = 14U;
static volatile int32_t x67 = INT32_MIN;
int32_t t15 = 259427843;
int32_t x73 = 0;
volatile int32_t x75 = 585232778;
int32_t t17 = -35940;
int16_t x81 = -1;
static uint16_t x83 = 57U;
int32_t t22 = 2056665;
int64_t x103 = INT64_MAX;
volatile uint64_t x105 = UINT64_MAX;
static volatile int16_t x106 = INT16_MIN;
int64_t x111 = 37879733490LL;
static int32_t t29 = -6;
int32_t t30 = 122191;
int16_t x130 = INT16_MIN;
int32_t t31 = 13739;
uint64_t x143 = UINT64_MAX;
volatile int32_t t35 = -22323867;
int64_t x152 = -20258869421LL;
uint8_t x160 = UINT8_MAX;
volatile int64_t x163 = -1LL;
int32_t x171 = INT32_MIN;
uint64_t x174 = 2082344904429LLU;
uint64_t x176 = 13268404806LLU;
volatile int32_t t42 = 56456231;
int32_t t43 = 1;
uint32_t x182 = 13937U;
uint8_t x185 = 83U;
int16_t x187 = INT16_MAX;
static uint16_t x188 = UINT16_MAX;
uint32_t x196 = 75296591U;
int8_t x199 = 2;
int32_t x208 = INT32_MIN;
static volatile int32_t t50 = 1256;
int32_t x217 = INT32_MAX;
volatile int32_t t54 = 179;
int64_t x227 = 21857732280LL;
volatile uint64_t x228 = UINT64_MAX;
volatile int32_t t55 = -247087336;
volatile int8_t x232 = INT8_MIN;
volatile int32_t t56 = -2921;
static int8_t x236 = -1;
uint16_t x243 = UINT16_MAX;
static uint32_t x250 = 361054737U;
volatile int32_t x256 = INT32_MAX;
int32_t t62 = 6046453;
int8_t x258 = -3;
volatile uint32_t x261 = 68U;
static uint8_t x267 = 0U;
volatile int32_t t65 = -2409;
volatile int64_t x274 = 5LL;
uint32_t x281 = UINT32_MAX;
uint32_t x282 = UINT32_MAX;
uint16_t x283 = UINT16_MAX;
uint32_t x287 = UINT32_MAX;
uint32_t x300 = UINT32_MAX;
volatile int32_t t73 = 80318;
int64_t x302 = 1758LL;
int64_t x303 = INT64_MIN;
int32_t t76 = -444;
int32_t x313 = 22584929;
int64_t x314 = -4350200507760LL;
int32_t x322 = INT32_MIN;
volatile int64_t x323 = INT64_MIN;
uint64_t x325 = UINT64_MAX;
int32_t t80 = 113;
int64_t x332 = -4160937LL;
volatile uint16_t x336 = UINT16_MAX;
int32_t x338 = INT32_MAX;
volatile int32_t t84 = 5;
static int16_t x346 = -1;
int8_t x349 = INT8_MIN;
int32_t t86 = -14;
int32_t t87 = -6385957;
uint64_t x371 = UINT64_MAX;
volatile int32_t t93 = -592442927;
uint16_t x381 = 2072U;
volatile uint8_t x386 = 69U;
volatile uint32_t x390 = UINT32_MAX;
int8_t x393 = INT8_MIN;
uint64_t x401 = 12314579680LLU;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile int64_t x2 = -92126800LL;
	int16_t x3 = INT16_MAX;
	uint64_t x4 = 3287455624LLU;
	volatile int32_t t0 = 59121;

	t0 = (x1==((x2&x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = -23;
	static int16_t x7 = INT16_MAX;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -9;

	t1 = (x5==((x6&x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint32_t x10 = UINT32_MAX;
	int16_t x12 = -1;
	volatile int32_t t2 = 13;

	t2 = (x9==((x10&x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x14 = 980161U;
	static int64_t x15 = 15994LL;
	static int64_t x16 = INT64_MIN;
	int32_t t3 = 13;

	t3 = (x13==((x14&x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -19;
	int16_t x18 = 10;
	int64_t x19 = INT64_MIN;
	static int32_t x20 = INT32_MIN;

	t4 = (x17==((x18&x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 584U;
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MAX;
	uint32_t x28 = 6544U;

	t5 = (x25==((x26&x27)%x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 1U;
	static uint16_t x30 = UINT16_MAX;
	int16_t x31 = INT16_MAX;
	int64_t x32 = 56LL;

	t6 = (x29==((x30&x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 13U;
	uint32_t x34 = 1288970U;
	int8_t x35 = 24;
	int16_t x36 = INT16_MAX;
	volatile int32_t t7 = 8348344;

	t7 = (x33==((x34&x35)%x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MIN;
	int16_t x38 = -1;
	volatile int16_t x40 = -1;
	static volatile int32_t t8 = -1;

	t8 = (x37==((x38&x39)%x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	volatile uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	static uint32_t x44 = UINT32_MAX;
	static int32_t t9 = 3;

	t9 = (x41==((x42&x43)%x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = INT16_MAX;
	uint16_t x47 = UINT16_MAX;
	int8_t x48 = INT8_MAX;
	static volatile int32_t t10 = -16773612;

	t10 = (x45==((x46&x47)%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 1375474;
	int32_t x50 = -1;
	int8_t x51 = INT8_MIN;
	uint16_t x52 = 2U;
	int32_t t11 = -1;

	t11 = (x49==((x50&x51)%x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	int8_t x54 = 1;
	int8_t x55 = -1;
	static uint32_t x56 = 8972U;
	int32_t t12 = -160946694;

	t12 = (x53==((x54&x55)%x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x58 = -2247323757524627LL;
	volatile int16_t x59 = -13;
	int64_t x60 = INT64_MIN;
	volatile int32_t t13 = -857;

	t13 = (x57==((x58&x59)%x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	volatile uint32_t x62 = 7U;
	int8_t x63 = INT8_MIN;
	int32_t t14 = 1;

	t14 = (x61==((x62&x63)%x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 3365005;
	int8_t x66 = INT8_MIN;
	int8_t x68 = -6;

	t15 = (x65==((x66&x67)%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	static uint32_t x70 = UINT32_MAX;
	uint16_t x71 = 104U;
	uint64_t x72 = 23778557LLU;
	volatile int32_t t16 = 36286;

	t16 = (x69==((x70&x71)%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = INT32_MAX;
	static int8_t x76 = -1;

	t17 = (x73==((x74&x75)%x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MAX;
	int8_t x78 = INT8_MAX;
	static int64_t x79 = 53575784LL;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t18 = 4874;

	t18 = (x77==((x78&x79)%x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x82 = 1LLU;
	int64_t x84 = -1LL;
	volatile int32_t t19 = 4;

	t19 = (x81==((x82&x83)%x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	volatile uint8_t x86 = 32U;
	int32_t x87 = INT32_MAX;
	int8_t x88 = -1;
	static volatile int32_t t20 = -115364110;

	t20 = (x85==((x86&x87)%x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MAX;
	int32_t x90 = INT32_MAX;
	int64_t x91 = INT64_MAX;
	volatile int16_t x92 = -1;
	int32_t t21 = 120;

	t21 = (x89==((x90&x91)%x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	static int8_t x94 = INT8_MAX;
	int16_t x95 = -1;
	int64_t x96 = -45716302231581LL;

	t22 = (x93==((x94&x95)%x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 4;
	int16_t x98 = 4;
	uint16_t x99 = 15U;
	int8_t x100 = INT8_MAX;
	volatile int32_t t23 = 1029344443;

	t23 = (x97==((x98&x99)%x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 10662LLU;
	volatile uint32_t x102 = UINT32_MAX;
	int8_t x104 = 8;
	volatile int32_t t24 = 72402155;

	t24 = (x101==((x102&x103)%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x107 = UINT16_MAX;
	volatile uint16_t x108 = 356U;
	volatile int32_t t25 = -264;

	t25 = (x105==((x106&x107)%x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1LL;
	static int8_t x110 = INT8_MIN;
	int8_t x112 = -1;
	volatile int32_t t26 = -157737;

	t26 = (x109==((x110&x111)%x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1LL;
	uint32_t x114 = UINT32_MAX;
	static int16_t x115 = -1;
	int32_t x116 = 6;
	volatile int32_t t27 = -10034256;

	t27 = (x113==((x114&x115)%x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MIN;
	int8_t x119 = -1;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t28 = 9;

	t28 = (x117==((x118&x119)%x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	static int16_t x122 = INT16_MAX;
	int8_t x123 = 2;
	int16_t x124 = -1;

	t29 = (x121==((x122&x123)%x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x125 = 64692;
	static int32_t x126 = INT32_MAX;
	volatile int8_t x127 = INT8_MIN;
	int64_t x128 = -1LL;

	t30 = (x125==((x126&x127)%x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = 0;
	static int32_t x131 = 253;
	static uint64_t x132 = UINT64_MAX;

	t31 = (x129==((x130&x131)%x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = 847976908;
	int32_t x134 = -2;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MAX;
	static volatile int32_t t32 = -96401748;

	t32 = (x133==((x134&x135)%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	static int32_t x138 = INT32_MIN;
	uint64_t x139 = UINT64_MAX;
	uint16_t x140 = 29608U;
	volatile int32_t t33 = 0;

	t33 = (x137==((x138&x139)%x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -1;
	int16_t x142 = -1;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = -3098;

	t34 = (x141==((x142&x143)%x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 82U;
	int64_t x146 = INT64_MIN;
	int16_t x147 = -1;
	int32_t x148 = -1;

	t35 = (x145==((x146&x147)%x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MAX;
	volatile int32_t x150 = INT32_MAX;
	static int8_t x151 = INT8_MIN;
	volatile int32_t t36 = 655642;

	t36 = (x149==((x150&x151)%x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MAX;
	static int32_t x154 = INT32_MIN;
	volatile int8_t x155 = INT8_MAX;
	uint16_t x156 = 1U;
	static int32_t t37 = 154;

	t37 = (x153==((x154&x155)%x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MAX;
	volatile uint8_t x158 = UINT8_MAX;
	static volatile int64_t x159 = INT64_MIN;
	static volatile int32_t t38 = -94;

	t38 = (x157==((x158&x159)%x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 589670056U;
	int16_t x162 = INT16_MIN;
	int64_t x164 = INT64_MAX;
	static int32_t t39 = 246286;

	t39 = (x161==((x162&x163)%x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = 1;
	volatile int32_t x166 = -390760209;
	volatile uint32_t x167 = UINT32_MAX;
	static volatile int64_t x168 = 60957398LL;
	static volatile int32_t t40 = -399;

	t40 = (x165==((x166&x167)%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = 118482918;
	uint8_t x170 = UINT8_MAX;
	int16_t x172 = -1;
	int32_t t41 = 648183;

	t41 = (x169==((x170&x171)%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x173 = -1;
	volatile uint64_t x175 = UINT64_MAX;

	t42 = (x173==((x174&x175)%x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x177 = INT16_MAX;
	static volatile uint64_t x178 = UINT64_MAX;
	uint8_t x179 = UINT8_MAX;
	static int8_t x180 = INT8_MAX;

	t43 = (x177==((x178&x179)%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t44 = -944;

	t44 = (x181==((x182&x183)%x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x186 = INT64_MIN;
	int32_t t45 = 1;

	t45 = (x185==((x186&x187)%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = -324249125512961LL;
	static uint32_t x190 = 244122749U;
	uint64_t x191 = 2293359030754LLU;
	int16_t x192 = 17;
	volatile int32_t t46 = 1;

	t46 = (x189==((x190&x191)%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = UINT64_MAX;
	int32_t x194 = -1;
	int64_t x195 = -538474818218229827LL;
	volatile int32_t t47 = 796;

	t47 = (x193==((x194&x195)%x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t48 = 705099;

	t48 = (x197==((x198&x199)%x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x201 = -1;
	uint8_t x202 = 28U;
	volatile int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t49 = 0;

	t49 = (x201==((x202&x203)%x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MAX;

	t50 = (x205==((x206&x207)%x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x209 = 19U;
	static int16_t x210 = INT16_MAX;
	int8_t x211 = INT8_MIN;
	int8_t x212 = -6;
	volatile int32_t t51 = -2733021;

	t51 = (x209==((x210&x211)%x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -1LL;
	int8_t x214 = 1;
	uint8_t x215 = 102U;
	int16_t x216 = INT16_MIN;
	int32_t t52 = 17322239;

	t52 = (x213==((x214&x215)%x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x218 = 136657U;
	int16_t x219 = -13547;
	int16_t x220 = INT16_MIN;
	volatile int32_t t53 = -121;

	t53 = (x217==((x218&x219)%x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = UINT8_MAX;
	int32_t x222 = -1;
	uint8_t x223 = 0U;
	int32_t x224 = INT32_MIN;

	t54 = (x221==((x222&x223)%x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -1;
	uint8_t x226 = UINT8_MAX;

	t55 = (x225==((x226&x227)%x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x229 = 56U;
	int64_t x230 = 259LL;
	uint8_t x231 = 110U;

	t56 = (x229==((x230&x231)%x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x233 = INT32_MAX;
	static int8_t x234 = 18;
	uint32_t x235 = UINT32_MAX;
	volatile int32_t t57 = 219487600;

	t57 = (x233==((x234&x235)%x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x237 = 10327;
	static int16_t x238 = INT16_MIN;
	int32_t x239 = 15;
	uint16_t x240 = 2661U;
	static int32_t t58 = 2890;

	t58 = (x237==((x238&x239)%x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MIN;
	volatile uint32_t x242 = 107678814U;
	uint16_t x244 = 1U;
	volatile int32_t t59 = -6205;

	t59 = (x241==((x242&x243)%x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MAX;
	static volatile int64_t x247 = INT64_MIN;
	int64_t x248 = 77627546732117LL;
	int32_t t60 = -5200417;

	t60 = (x245==((x246&x247)%x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x249 = 1;
	volatile int32_t x251 = INT32_MAX;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t61 = -157043436;

	t61 = (x249==((x250&x251)%x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x253 = 958058U;
	volatile int32_t x254 = INT32_MAX;
	volatile int64_t x255 = -1LL;

	t62 = (x253==((x254&x255)%x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x257 = 777757U;
	int16_t x259 = -1;
	int8_t x260 = -1;
	volatile int32_t t63 = -352;

	t63 = (x257==((x258&x259)%x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MIN;
	static uint8_t x264 = 21U;
	static volatile int32_t t64 = 38023815;

	t64 = (x261==((x262&x263)%x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = -1LL;
	static volatile int16_t x266 = INT16_MAX;
	uint8_t x268 = UINT8_MAX;

	t65 = (x265==((x266&x267)%x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x269 = INT64_MIN;
	int64_t x270 = -3688988956040467LL;
	volatile int8_t x271 = INT8_MIN;
	uint32_t x272 = 552U;
	int32_t t66 = 26;

	t66 = (x269==((x270&x271)%x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = -1;
	static volatile int32_t x275 = -135877;
	int64_t x276 = INT64_MIN;
	int32_t t67 = 15843;

	t67 = (x273==((x274&x275)%x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x277 = INT32_MIN;
	int64_t x278 = 8593576LL;
	static uint32_t x279 = 0U;
	int16_t x280 = INT16_MIN;
	volatile int32_t t68 = -1;

	t68 = (x277==((x278&x279)%x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x284 = INT32_MIN;
	volatile int32_t t69 = -15402;

	t69 = (x281==((x282&x283)%x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x285 = UINT8_MAX;
	uint64_t x286 = 230153387421325958LLU;
	int32_t x288 = INT32_MIN;
	static volatile int32_t t70 = 263400957;

	t70 = (x285==((x286&x287)%x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x289 = 2293;
	static int32_t x290 = INT32_MIN;
	uint16_t x291 = 1245U;
	volatile int32_t x292 = -1;
	int32_t t71 = 376999;

	t71 = (x289==((x290&x291)%x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MAX;
	int16_t x294 = -1;
	int32_t x295 = -1;
	int8_t x296 = -1;
	int32_t t72 = 3180446;

	t72 = (x293==((x294&x295)%x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x297 = 114LLU;
	int8_t x298 = -11;
	uint64_t x299 = UINT64_MAX;

	t73 = (x297==((x298&x299)%x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = INT8_MIN;
	int32_t x304 = -102361429;
	volatile int32_t t74 = -25419950;

	t74 = (x301==((x302&x303)%x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x305 = INT32_MAX;
	volatile int8_t x306 = -2;
	int64_t x307 = -12752764855231282LL;
	static volatile int32_t x308 = 13910;
	volatile int32_t t75 = -3389;

	t75 = (x305==((x306&x307)%x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = -1;
	static int8_t x310 = INT8_MAX;
	int8_t x311 = INT8_MIN;
	int32_t x312 = 1;

	t76 = (x309==((x310&x311)%x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x315 = INT8_MAX;
	int32_t x316 = INT32_MAX;
	int32_t t77 = -1853;

	t77 = (x313==((x314&x315)%x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = 0;
	volatile int32_t x319 = INT32_MIN;
	int8_t x320 = -1;
	int32_t t78 = -476188;

	t78 = (x317==((x318&x319)%x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int64_t x324 = -1600893LL;
	volatile int32_t t79 = 55058824;

	t79 = (x321==((x322&x323)%x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x326 = INT32_MIN;
	volatile int32_t x327 = -1;
	int16_t x328 = INT16_MAX;

	t80 = (x325==((x326&x327)%x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x329 = UINT16_MAX;
	volatile int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MAX;
	int32_t t81 = 13284;

	t81 = (x329==((x330&x331)%x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x333 = INT8_MIN;
	static int16_t x334 = -1;
	int64_t x335 = 1012376265683585865LL;
	volatile int32_t t82 = -15277;

	t82 = (x333==((x334&x335)%x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x337 = 1424U;
	int16_t x339 = 810;
	int32_t x340 = INT32_MAX;
	volatile int32_t t83 = -9533;

	t83 = (x337==((x338&x339)%x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	uint32_t x342 = 212241U;
	volatile int32_t x343 = 5;
	uint16_t x344 = UINT16_MAX;

	t84 = (x341==((x342&x343)%x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = -1;
	int32_t x347 = INT32_MAX;
	static int8_t x348 = 15;
	int32_t t85 = 14;

	t85 = (x345==((x346&x347)%x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x350 = 0;
	int32_t x351 = -1;
	int16_t x352 = -1;

	t86 = (x349==((x350&x351)%x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x353 = UINT16_MAX;
	static volatile int8_t x354 = 1;
	volatile int64_t x355 = INT64_MIN;
	volatile int16_t x356 = -15;

	t87 = (x353==((x354&x355)%x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x357 = INT64_MIN;
	volatile int32_t x358 = INT32_MIN;
	static int8_t x359 = INT8_MAX;
	int16_t x360 = -1;
	int32_t t88 = 7258;

	t88 = (x357==((x358&x359)%x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = 10;
	static uint8_t x362 = 16U;
	uint32_t x363 = 19940U;
	int64_t x364 = INT64_MAX;
	int32_t t89 = 533750416;

	t89 = (x361==((x362&x363)%x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x365 = UINT32_MAX;
	static uint16_t x366 = 8U;
	int64_t x367 = INT64_MAX;
	int8_t x368 = INT8_MIN;
	volatile int32_t t90 = 15273;

	t90 = (x365==((x366&x367)%x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x369 = 1U;
	int64_t x370 = -1867008LL;
	uint64_t x372 = 1899903136361LLU;
	volatile int32_t t91 = -12;

	t91 = (x369==((x370&x371)%x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = -1;
	int32_t x374 = INT32_MIN;
	uint8_t x375 = 28U;
	int8_t x376 = INT8_MIN;
	int32_t t92 = -1;

	t92 = (x373==((x374&x375)%x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x377 = INT32_MIN;
	static volatile int16_t x378 = -1;
	static volatile uint16_t x379 = 1U;
	int8_t x380 = INT8_MIN;

	t93 = (x377==((x378&x379)%x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x382 = 862U;
	int32_t x383 = -30389;
	uint8_t x384 = 2U;
	static volatile int32_t t94 = -80;

	t94 = (x381==((x382&x383)%x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x385 = INT8_MAX;
	int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MAX;
	volatile int32_t t95 = 352090074;

	t95 = (x385==((x386&x387)%x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x389 = INT32_MIN;
	volatile int32_t x391 = -1;
	volatile int32_t x392 = INT32_MIN;
	volatile int32_t t96 = -13556202;

	t96 = (x389==((x390&x391)%x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x394 = 25U;
	volatile uint8_t x395 = 28U;
	volatile uint16_t x396 = 147U;
	int32_t t97 = 124106;

	t97 = (x393==((x394&x395)%x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x397 = INT16_MAX;
	volatile uint64_t x398 = 605022LLU;
	volatile int32_t x399 = -1;
	static int32_t x400 = INT32_MIN;
	int32_t t98 = -1192;

	t98 = (x397==((x398&x399)%x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x402 = -62;
	static volatile int16_t x403 = -1;
	volatile uint64_t x404 = 21049336567LLU;
	int32_t t99 = -17143;

	t99 = (x401==((x402&x403)%x404));

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

