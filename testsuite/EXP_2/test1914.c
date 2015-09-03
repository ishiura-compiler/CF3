#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = -91918404;
uint32_t x6 = 31719U;
uint64_t x8 = UINT64_MAX;
static volatile uint64_t t1 = 3470844746186LLU;
int32_t x10 = 4948000;
volatile int32_t t2 = 35024;
int16_t x15 = -10;
int32_t t4 = 1816037;
int64_t t5 = 7769397344LL;
int64_t x25 = INT64_MIN;
uint64_t t7 = 3440999601LLU;
uint64_t x33 = 15591LLU;
static int8_t x34 = INT8_MIN;
uint64_t x35 = 10433311LLU;
int64_t x38 = INT64_MIN;
static int64_t x43 = INT64_MIN;
uint64_t t10 = 2212476204163603058LLU;
int16_t x45 = 671;
static int64_t x47 = -236081854LL;
int8_t x48 = 0;
uint32_t x51 = UINT32_MAX;
uint8_t x60 = 2U;
static volatile int32_t t15 = 15645;
uint32_t x72 = 3081U;
int64_t x74 = INT64_MIN;
int8_t x81 = INT8_MIN;
int64_t x83 = -612121053LL;
static uint16_t x102 = 1467U;
uint32_t t23 = 241U;
volatile int32_t x107 = -5513120;
static volatile int64_t t25 = -2103601965285LL;
int16_t x115 = 13;
int8_t x127 = 1;
static uint64_t t29 = 26LLU;
int32_t x130 = INT32_MIN;
int16_t x132 = INT16_MAX;
volatile uint64_t x135 = 1803LLU;
int16_t x137 = INT16_MAX;
static int16_t x138 = 516;
int8_t x142 = INT8_MIN;
uint64_t x149 = 1644885312056471936LLU;
int32_t x163 = INT32_MAX;
static int32_t x165 = -1;
int32_t x172 = INT32_MIN;
uint16_t x174 = 1912U;
int64_t t42 = 1LL;
volatile int64_t x185 = -493798LL;
static int64_t t44 = -1053LL;
int32_t x193 = INT32_MIN;
int8_t x194 = -1;
uint8_t x198 = 3U;
volatile uint64_t x199 = 498081690365LLU;
static int8_t x211 = -1;
int16_t x226 = INT16_MIN;
volatile int32_t x247 = -1;
int64_t x249 = -124012LL;
static volatile int16_t x252 = -1;
static uint64_t x253 = UINT64_MAX;
int16_t x254 = -1;
int32_t x256 = 516696;
volatile uint16_t x257 = 2U;
uint64_t x261 = 16LLU;
int32_t x262 = INT32_MIN;
static uint8_t x264 = UINT8_MAX;
volatile uint64_t t61 = 341083065408502852LLU;
uint8_t x272 = UINT8_MAX;
volatile uint64_t x273 = 350951319LLU;
int8_t x274 = INT8_MIN;
static int64_t x278 = -1LL;
int64_t t66 = 47759071862LL;
int16_t x293 = INT16_MAX;
uint16_t x296 = UINT16_MAX;
int64_t x311 = INT64_MIN;
uint32_t x314 = 104U;
static int32_t x315 = 3;
volatile int32_t t75 = -27;
static int8_t x330 = 12;
uint32_t t78 = 118U;
int16_t x349 = INT16_MAX;
int8_t x351 = -2;
int32_t x355 = INT32_MIN;
int32_t x357 = INT32_MIN;
int64_t t85 = 4350077040LL;
uint16_t x363 = 7064U;
int16_t x369 = INT16_MIN;
int8_t x370 = INT8_MAX;
uint8_t x372 = 5U;
volatile int64_t x383 = 14254160LL;
uint64_t x390 = 2267261LLU;
uint16_t x391 = 444U;
static uint64_t t94 = 585087LLU;
int16_t x400 = INT16_MIN;
int8_t x406 = -1;
int16_t x407 = INT16_MIN;
static uint64_t x412 = 176308735983LLU;
volatile int64_t t98 = 127677337311LL;


void f0(void) {
	static volatile int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	uint16_t x3 = UINT16_MAX;
	int64_t t0 = -1LL;

	t0 = ((x1%(x2|x3))*x4);

	if (t0 != 6023872606140LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -3;
	int8_t x7 = INT8_MAX;

	t1 = ((x5%(x6|x7))*x8);

	if (t1 != 18446744073709539195LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int32_t x11 = -60437;
	int8_t x12 = -1;

	t2 = ((x9%(x10|x11))*x12);

	if (t2 != 5099) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint8_t x14 = UINT8_MAX;
	volatile int32_t x16 = INT32_MIN;
	static uint64_t t3 = 354861755LLU;

	t3 = ((x13%(x14|x15))*x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	volatile int8_t x18 = -1;
	static uint16_t x19 = 4U;
	int8_t x20 = -1;

	t4 = ((x17%(x18|x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	static int64_t x22 = -52255751LL;
	static uint32_t x23 = 2902185U;
	int8_t x24 = INT8_MIN;

	t5 = ((x21%(x22|x23))*x24);

	if (t5 != 128LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	volatile int32_t x27 = INT32_MAX;
	static uint32_t x28 = 13940151U;
	static int64_t t6 = -6313LL;

	t6 = ((x25%(x26|x27))*x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	static uint64_t x30 = 1085067221LLU;
	uint32_t x31 = 100U;
	volatile int8_t x32 = -29;

	t7 = ((x29%(x30|x31))*x32);

	if (t7 != 18446744065927442825LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x36 = -19292995LL;
	volatile uint64_t t8 = 187498137532008LLU;

	t8 = ((x33%(x34|x35))*x36);

	if (t8 != 18446743772912466571LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 1178357LL;
	int16_t x39 = -1;
	int8_t x40 = -1;
	volatile int64_t t9 = 69952325LL;

	t9 = ((x37%(x38|x39))*x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 772650LLU;
	static uint32_t x42 = 6082708U;
	int16_t x44 = INT16_MIN;

	t10 = ((x41%(x42|x43))*x44);

	if (t10 != 18446744048391356416LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x46 = INT8_MIN;
	static volatile int64_t t11 = -22LL;

	t11 = ((x45%(x46|x47))*x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int8_t x50 = 6;
	int16_t x52 = INT16_MIN;
	volatile uint32_t t12 = 29U;

	t12 = ((x49%(x50|x51))*x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static volatile uint8_t x54 = 0U;
	volatile int64_t x55 = INT64_MIN;
	static int64_t x56 = -1LL;
	int64_t t13 = -57898111975593112LL;

	t13 = ((x53%(x54|x55))*x56);

	if (t13 != 128LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 9812U;
	int64_t x58 = INT64_MIN;
	int16_t x59 = -68;
	static int64_t t14 = 1430212938103LL;

	t14 = ((x57%(x58|x59))*x60);

	if (t14 != 40LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x61 = UINT8_MAX;
	static int16_t x62 = INT16_MAX;
	static int16_t x63 = -1;
	uint16_t x64 = 1U;

	t15 = ((x61%(x62|x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -1;
	int8_t x66 = INT8_MIN;
	int8_t x67 = -1;
	uint8_t x68 = UINT8_MAX;
	static volatile int32_t t16 = 28;

	t16 = ((x65%(x66|x67))*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	volatile int32_t x70 = INT32_MIN;
	volatile int8_t x71 = -1;
	static volatile uint32_t t17 = 2870557U;

	t17 = ((x69%(x70|x71))*x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 20U;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MAX;
	uint64_t t18 = 3366515231LLU;

	t18 = ((x73%(x74|x75))*x76);

	if (t18 != 655340LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x82 = 244U;
	int8_t x84 = INT8_MAX;
	int64_t t19 = -2416LL;

	t19 = ((x81%(x82|x83))*x84);

	if (t19 != -16256LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 474U;
	static volatile uint32_t x86 = 82044624U;
	volatile int32_t x87 = INT32_MAX;
	int16_t x88 = INT16_MAX;
	static uint32_t t20 = 2U;

	t20 = ((x85%(x86|x87))*x88);

	if (t20 != 15531558U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = -1;
	int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MIN;
	int8_t x92 = INT8_MIN;
	int64_t t21 = 16528376647278893LL;

	t21 = ((x89%(x90|x91))*x92);

	if (t21 != 128LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	static int64_t x94 = INT64_MIN;
	int8_t x95 = -2;
	uint8_t x96 = 1U;
	int64_t t22 = -2672725675343353154LL;

	t22 = ((x93%(x94|x95))*x96);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = 8U;
	int8_t x103 = 3;
	uint32_t x104 = 57U;

	t23 = ((x101%(x102|x103))*x104);

	if (t23 != 456U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = UINT8_MAX;
	static volatile uint8_t x106 = UINT8_MAX;
	int8_t x108 = -1;
	volatile int32_t t24 = 1;

	t24 = ((x105%(x106|x107))*x108);

	if (t24 != -255) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x109 = -1;
	static int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MAX;
	volatile int8_t x112 = 1;

	t25 = ((x109%(x110|x111))*x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x113 = INT32_MAX;
	int64_t x114 = INT64_MIN;
	static uint16_t x116 = UINT16_MAX;
	volatile int64_t t26 = 134303236LL;

	t26 = ((x113%(x114|x115))*x116);

	if (t26 != 140735340806145LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = UINT8_MAX;
	volatile int8_t x118 = 19;
	int16_t x119 = -11;
	int32_t x120 = 75480787;
	int32_t t27 = 90278;

	t27 = ((x117%(x118|x119))*x120);

	if (t27 != 226442361) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = INT16_MAX;
	uint8_t x122 = 27U;
	static int8_t x123 = -1;
	int16_t x124 = 98;
	volatile int32_t t28 = 835;

	t28 = ((x121%(x122|x123))*x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 7387443117667LLU;
	uint8_t x126 = 54U;
	int8_t x128 = INT8_MIN;

	t29 = ((x125%(x126|x127))*x128);

	if (t29 != 18446744073709544960LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MIN;
	volatile uint64_t x131 = 13LLU;
	static uint64_t t30 = 55727LLU;

	t30 = ((x129%(x130|x131))*x132);

	if (t30 != 70365522558989LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 7823U;
	volatile int64_t x134 = 1677567LL;
	uint16_t x136 = 0U;
	uint64_t t31 = 20450899128LLU;

	t31 = ((x133%(x134|x135))*x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x139 = -1;
	int8_t x140 = INT8_MIN;
	int32_t t32 = -2;

	t32 = ((x137%(x138|x139))*x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = 2037735;
	int8_t x143 = INT8_MAX;
	uint16_t x144 = 31U;
	static int32_t t33 = 225222;

	t33 = ((x141%(x142|x143))*x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x145 = 3;
	volatile int32_t x146 = 59124;
	volatile int8_t x147 = INT8_MIN;
	int64_t x148 = -27517951LL;
	int64_t t34 = -187108LL;

	t34 = ((x145%(x146|x147))*x148);

	if (t34 != -82553853LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x150 = 272516617537031029LLU;
	volatile uint16_t x151 = 16U;
	volatile int32_t x152 = 49114079;
	uint64_t t35 = 447484835992884850LLU;

	t35 = ((x149%(x150|x151))*x152);

	if (t35 != 18043769695875191550LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = INT32_MIN;
	volatile int64_t x155 = -1LL;
	int32_t x156 = INT32_MIN;
	static volatile int64_t t36 = 286409362713LL;

	t36 = ((x153%(x154|x155))*x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = 39;
	uint16_t x158 = UINT16_MAX;
	int16_t x159 = 15;
	volatile uint8_t x160 = UINT8_MAX;
	volatile int32_t t37 = 3056715;

	t37 = ((x157%(x158|x159))*x160);

	if (t37 != 9945) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x161 = 1LL;
	static volatile int64_t x162 = -1LL;
	volatile int32_t x164 = -10868;
	int64_t t38 = -469508290718146LL;

	t38 = ((x161%(x162|x163))*x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x166 = INT8_MAX;
	int8_t x167 = -13;
	static uint8_t x168 = UINT8_MAX;
	volatile int32_t t39 = -83;

	t39 = ((x165%(x166|x167))*x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x169 = UINT64_MAX;
	static int64_t x170 = -1LL;
	int16_t x171 = 41;
	volatile uint64_t t40 = 427092317LLU;

	t40 = ((x169%(x170|x171))*x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -1LL;
	int8_t x175 = INT8_MAX;
	int8_t x176 = INT8_MAX;
	int64_t t41 = -90758LL;

	t41 = ((x173%(x174|x175))*x176);

	if (t41 != -127LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = -1;
	int64_t x178 = -1LL;
	int8_t x179 = INT8_MIN;
	volatile int64_t x180 = 9069LL;

	t42 = ((x177%(x178|x179))*x180);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = 13U;
	volatile int32_t x182 = -8431;
	int16_t x183 = INT16_MAX;
	int32_t x184 = INT32_MAX;
	volatile int32_t t43 = 69389670;

	t43 = ((x181%(x182|x183))*x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x186 = -5;
	int16_t x187 = INT16_MIN;
	static uint32_t x188 = 2191U;

	t44 = ((x185%(x186|x187))*x188);

	if (t44 != -6573LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x189 = 7690U;
	int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MAX;
	int8_t x192 = INT8_MIN;
	int32_t t45 = -264;

	t45 = ((x189%(x190|x191))*x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x195 = INT32_MIN;
	uint8_t x196 = 1U;
	int32_t t46 = -2;

	t46 = ((x193%(x194|x195))*x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = -1;
	uint64_t x200 = 87588223685121264LLU;
	uint64_t t47 = 140766LLU;

	t47 = ((x197%(x198|x199))*x200);

	if (t47 != 3356314353747783264LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -10465;
	static int8_t x202 = 0;
	int64_t x203 = INT64_MIN;
	volatile int8_t x204 = INT8_MAX;
	static int64_t t48 = 26654781LL;

	t48 = ((x201%(x202|x203))*x204);

	if (t48 != -1329055LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = -1;
	uint8_t x207 = 4U;
	uint8_t x208 = UINT8_MAX;
	int32_t t49 = -56924594;

	t49 = ((x205%(x206|x207))*x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x209 = 431U;
	int32_t x210 = -63475;
	int64_t x212 = INT64_MAX;
	volatile int64_t t50 = 1106172793000090719LL;

	t50 = ((x209%(x210|x211))*x212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x213 = 56U;
	int8_t x214 = INT8_MAX;
	static int8_t x215 = INT8_MIN;
	uint8_t x216 = 5U;
	volatile int32_t t51 = -5993964;

	t51 = ((x213%(x214|x215))*x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = -1;
	int32_t x222 = 1;
	int64_t x223 = 454911094472868LL;
	int8_t x224 = 7;
	int64_t t52 = 25168646010009LL;

	t52 = ((x221%(x222|x223))*x224);

	if (t52 != -7LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = 0LL;
	int16_t x227 = -191;
	int64_t x228 = INT64_MAX;
	int64_t t53 = -2053657LL;

	t53 = ((x225%(x226|x227))*x228);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x229 = 180777166899144LLU;
	static uint16_t x230 = UINT16_MAX;
	int32_t x231 = 905883764;
	int32_t x232 = INT32_MIN;
	uint64_t t54 = 2LLU;

	t54 = ((x229%(x230|x231))*x232);

	if (t54 != 17641996511019532288LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x233 = INT32_MIN;
	volatile int16_t x234 = INT16_MIN;
	static uint16_t x235 = 6U;
	int16_t x236 = 79;
	static int32_t t55 = 0;

	t55 = ((x233%(x234|x235))*x236);

	if (t55 != -5688) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = INT16_MIN;
	static int64_t x238 = INT64_MAX;
	uint32_t x239 = 176240U;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t56 = 76905LL;

	t56 = ((x237%(x238|x239))*x240);

	if (t56 != -2147450880LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = INT16_MIN;
	volatile uint16_t x246 = UINT16_MAX;
	static uint8_t x248 = UINT8_MAX;
	volatile int32_t t57 = 30981934;

	t57 = ((x245%(x246|x247))*x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x250 = 24972;
	int16_t x251 = -438;
	volatile int64_t t58 = -931LL;

	t58 = ((x249%(x250|x251))*x252);

	if (t58 != 12LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x255 = -30;
	uint64_t t59 = 32562991863001LLU;

	t59 = ((x253%(x254|x255))*x256);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x258 = UINT64_MAX;
	uint64_t x259 = 980693697324LLU;
	int64_t x260 = -1LL;
	static volatile uint64_t t60 = 102LLU;

	t60 = ((x257%(x258|x259))*x260);

	if (t60 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x263 = UINT64_MAX;

	t61 = ((x261%(x262|x263))*x264);

	if (t61 != 4080LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = INT8_MIN;
	volatile uint16_t x266 = UINT16_MAX;
	int8_t x267 = INT8_MIN;
	volatile int32_t x268 = INT32_MAX;
	int32_t t62 = -53147379;

	t62 = ((x265%(x266|x267))*x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x269 = 115U;
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = INT64_MIN;
	static volatile int64_t t63 = -192013LL;

	t63 = ((x269%(x270|x271))*x272);

	if (t63 != 29325LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x275 = -1LL;
	uint64_t x276 = 156961875349109203LLU;
	volatile uint64_t t64 = 666570895724LLU;

	t64 = ((x273%(x274|x275))*x276);

	if (t64 != 14885666817879363701LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x277 = 11414U;
	uint8_t x279 = 0U;
	static int8_t x280 = -1;
	int64_t t65 = -1323350188875194205LL;

	t65 = ((x277%(x278|x279))*x280);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MIN;
	uint32_t x282 = 28848200U;
	int8_t x283 = -1;
	uint32_t x284 = 14U;

	t66 = ((x281%(x282|x283))*x284);

	if (t66 != -30064771072LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x285 = 21885492177831744LL;
	volatile uint16_t x286 = 213U;
	uint16_t x287 = 8U;
	int64_t x288 = -1LL;
	volatile int64_t t67 = -125801LL;

	t67 = ((x285%(x286|x287))*x288);

	if (t67 != -85LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = 2;
	int8_t x290 = INT8_MIN;
	int32_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t68 = 8993822LLU;

	t68 = ((x289%(x290|x291))*x292);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x294 = 66LL;
	int16_t x295 = INT16_MAX;
	volatile int64_t t69 = 3LL;

	t69 = ((x293%(x294|x295))*x296);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = 21746364496300345LLU;
	int32_t x298 = -3307552;
	int32_t x299 = -571;
	int64_t x300 = INT64_MAX;
	volatile uint64_t t70 = 60149753LLU;

	t70 = ((x297%(x298|x299))*x300);

	if (t70 != 9201625672358475463LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MIN;
	volatile int64_t x304 = -1LL;
	static volatile int64_t t71 = -5409249LL;

	t71 = ((x301%(x302|x303))*x304);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = INT16_MIN;
	static uint16_t x306 = 21U;
	int8_t x307 = 7;
	static uint64_t x308 = 777147784938392LLU;
	uint64_t t72 = 425302098LLU;

	t72 = ((x305%(x306|x307))*x308);

	if (t72 != 18434309709150537344LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x309 = UINT64_MAX;
	int64_t x310 = INT64_MAX;
	int8_t x312 = -2;
	volatile uint64_t t73 = 12940842251958LLU;

	t73 = ((x309%(x310|x311))*x312);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x313 = 6U;
	static int8_t x316 = INT8_MAX;
	uint32_t t74 = 117710U;

	t74 = ((x313%(x314|x315))*x316);

	if (t74 != 762U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = 4U;
	static int16_t x318 = INT16_MAX;
	volatile int8_t x319 = -1;
	static int32_t x320 = 152217;

	t75 = ((x317%(x318|x319))*x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x321 = INT8_MIN;
	int16_t x322 = 1;
	uint8_t x323 = 9U;
	uint16_t x324 = 0U;
	int32_t t76 = -46582;

	t76 = ((x321%(x322|x323))*x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MIN;
	static uint8_t x326 = 26U;
	volatile uint32_t x327 = 2033455920U;
	static volatile uint8_t x328 = 0U;
	volatile int64_t t77 = -333LL;

	t77 = ((x325%(x326|x327))*x328);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x329 = 176U;
	volatile int32_t x331 = 41;
	static volatile uint32_t x332 = 505U;

	t78 = ((x329%(x330|x331))*x332);

	if (t78 != 20705U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x333 = INT64_MIN;
	volatile int32_t x334 = INT32_MIN;
	volatile int32_t x335 = INT32_MAX;
	volatile int16_t x336 = INT16_MIN;
	static volatile int64_t t79 = 3LL;

	t79 = ((x333%(x334|x335))*x336);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = 4466965021LLU;
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = -158LL;
	int8_t x340 = 4;
	volatile uint64_t t80 = 10790992548002LLU;

	t80 = ((x337%(x338|x339))*x340);

	if (t80 != 17867860084LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = -1;
	static int32_t x342 = 0;
	static uint64_t x343 = UINT64_MAX;
	static volatile int64_t x344 = -1LL;
	uint64_t t81 = 2LLU;

	t81 = ((x341%(x342|x343))*x344);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x345 = INT64_MIN;
	static volatile int32_t x346 = -102;
	uint8_t x347 = 1U;
	uint8_t x348 = 11U;
	volatile int64_t t82 = -3034374LL;

	t82 = ((x345%(x346|x347))*x348);

	if (t82 != -990LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x350 = -1;
	int64_t x352 = INT64_MIN;
	static int64_t t83 = -82979453LL;

	t83 = ((x349%(x350|x351))*x352);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x353 = 705351039195736859LLU;
	volatile int64_t x354 = INT64_MIN;
	int64_t x356 = 234249439LL;
	volatile uint64_t t84 = 4583628682277701516LLU;

	t84 = ((x353%(x354|x355))*x356);

	if (t84 != 8265641557882208389LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x358 = -1;
	volatile int16_t x359 = -1;
	int64_t x360 = -10862LL;

	t85 = ((x357%(x358|x359))*x360);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = -58;
	uint64_t x362 = UINT64_MAX;
	int16_t x364 = -15;
	volatile uint64_t t86 = 65167675646LLU;

	t86 = ((x361%(x362|x363))*x364);

	if (t86 != 870LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MIN;
	static int32_t x366 = INT32_MAX;
	static int32_t x367 = -31;
	int32_t x368 = INT32_MIN;
	volatile int64_t t87 = -59853407299342690LL;

	t87 = ((x365%(x366|x367))*x368);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x371 = 8U;
	volatile int32_t t88 = -156083257;

	t88 = ((x369%(x370|x371))*x372);

	if (t88 != -10) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = -1;
	static int64_t x374 = INT64_MIN;
	uint16_t x375 = UINT16_MAX;
	static int32_t x376 = INT32_MIN;
	int64_t t89 = 728753425LL;

	t89 = ((x373%(x374|x375))*x376);

	if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = 23U;
	int8_t x378 = INT8_MAX;
	static volatile uint16_t x379 = 291U;
	static uint64_t x380 = 303007184400246554LLU;
	uint64_t t90 = 55LLU;

	t90 = ((x377%(x378|x379))*x380);

	if (t90 != 6969165241205670742LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = INT64_MIN;
	static int64_t x382 = INT64_MIN;
	uint32_t x384 = UINT32_MAX;
	int64_t t91 = 4324LL;

	t91 = ((x381%(x382|x383))*x384);

	if (t91 != -61221151017697200LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MAX;
	int32_t x387 = 147089408;
	volatile int32_t x388 = -1;
	volatile int32_t t92 = 110;

	t92 = ((x385%(x386|x387))*x388);

	if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x389 = INT32_MIN;
	static int32_t x392 = INT32_MIN;
	volatile uint64_t t93 = 1973LLU;

	t93 = ((x389%(x390|x391))*x392);

	if (t93 != 18442210568224899072LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x393 = UINT32_MAX;
	static int32_t x394 = INT32_MIN;
	static volatile uint16_t x395 = UINT16_MAX;
	uint64_t x396 = 224LLU;

	t94 = ((x393%(x394|x395))*x396);

	if (t94 != 481021657088LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MAX;
	static uint32_t x398 = UINT32_MAX;
	static int8_t x399 = INT8_MIN;
	volatile int64_t t95 = -13761LL;

	t95 = ((x397%(x398|x399))*x400);

	if (t95 != -70368744144896LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x405 = 1U;
	volatile uint32_t x408 = UINT32_MAX;
	uint32_t t96 = 3U;

	t96 = ((x405%(x406|x407))*x408);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = -1;
	uint64_t x410 = 173946216170LLU;
	int32_t x411 = -126;
	uint64_t t97 = 6869895LLU;

	t97 = ((x409%(x410|x411))*x412);

	if (t97 != 3702483455643LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x417 = 1U;
	static int64_t x418 = INT64_MIN;
	uint16_t x419 = UINT16_MAX;
	int8_t x420 = -1;

	t98 = ((x417%(x418|x419))*x420);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x421 = -19;
	uint64_t x422 = 286587119849579LLU;
	int8_t x423 = 0;
	uint64_t x424 = 1107483349LLU;
	volatile uint64_t t99 = 11230116LLU;

	t99 = ((x421%(x422|x423))*x424);

	if (t99 != 4775785780309254191LLU) { NG(); } else { ; }
	
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

