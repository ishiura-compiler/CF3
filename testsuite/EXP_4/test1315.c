#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = 17U;
int8_t x18 = INT8_MIN;
uint8_t x24 = UINT8_MAX;
int32_t x30 = 6350875;
int32_t x31 = 0;
int32_t t8 = 658357485;
static int32_t t9 = 0;
uint16_t x41 = UINT16_MAX;
int64_t x42 = INT64_MIN;
volatile int64_t t10 = 286890154344628055LL;
volatile int64_t x45 = 50LL;
static uint32_t x47 = 7U;
static int64_t x65 = INT64_MAX;
static uint32_t x75 = UINT32_MAX;
uint64_t x79 = 7LLU;
uint64_t x80 = 97913584028944605LLU;
uint64_t t19 = 849864653070039LLU;
int32_t x82 = INT32_MIN;
static int16_t x83 = -1;
int32_t t20 = 58;
int8_t x86 = -24;
volatile int64_t x89 = INT64_MIN;
int16_t x93 = 1;
int16_t x99 = INT16_MAX;
int8_t x106 = INT8_MIN;
int8_t x107 = -18;
static volatile uint64_t t26 = UINT64_MAX;
int8_t x111 = -1;
uint64_t x113 = 0LLU;
uint8_t x117 = UINT8_MAX;
volatile int64_t x124 = -2039517644796611LL;
static volatile int32_t t30 = 1294724;
volatile uint32_t t31 = 1823214U;
int16_t x129 = 27;
int8_t x134 = 8;
int32_t t33 = 47;
uint16_t x139 = UINT16_MAX;
volatile uint64_t t34 = 43189LLU;
static int32_t t35 = 36;
volatile int32_t t38 = INT32_MIN;
int16_t x160 = 1662;
int32_t t40 = -61495;
int64_t x172 = 360101288371359597LL;
uint32_t x173 = 236054U;
uint32_t t43 = 1031354820U;
static uint32_t x184 = 425189341U;
int32_t t45 = -29;
volatile int16_t x186 = INT16_MAX;
static int8_t x189 = INT8_MIN;
uint64_t x190 = 113912888LLU;
static int32_t x191 = -1;
volatile int64_t x193 = INT64_MAX;
static uint32_t x196 = 42382U;
int32_t x202 = INT32_MAX;
uint16_t x223 = UINT16_MAX;
static volatile uint16_t x227 = 14U;
volatile int64_t x228 = -1LL;
volatile int16_t x229 = -1;
int8_t x234 = INT8_MIN;
int64_t x236 = INT64_MAX;
uint32_t x237 = 3633U;
int8_t x246 = INT8_MAX;
volatile uint8_t x247 = 2U;
int8_t x255 = INT8_MAX;
static volatile int64_t x256 = INT64_MIN;
uint32_t t63 = UINT32_MAX;
int16_t x261 = INT16_MIN;
int16_t x263 = INT16_MIN;
static int64_t x268 = INT64_MIN;
uint16_t x270 = UINT16_MAX;
int64_t x274 = INT64_MIN;
int8_t x278 = INT8_MAX;
int32_t t69 = -13751762;
volatile int64_t x300 = -267563863LL;
static int32_t x302 = -1;
int64_t x303 = INT64_MIN;
volatile int32_t t75 = -219065;
static int32_t x305 = INT32_MAX;
volatile uint32_t x308 = UINT32_MAX;
volatile int32_t t76 = INT32_MAX;
uint16_t x309 = UINT16_MAX;
int8_t x311 = INT8_MAX;
int32_t x312 = INT32_MIN;
int64_t x313 = INT64_MAX;
int32_t x314 = INT32_MIN;
int8_t x316 = 1;
volatile uint32_t x318 = 4U;
uint32_t x321 = UINT32_MAX;
uint64_t x323 = 4684588993LLU;
volatile int8_t x325 = INT8_MAX;
uint32_t t81 = 11350286U;
int16_t x330 = -1;
int8_t x331 = INT8_MAX;
static uint64_t x333 = 169659LLU;
volatile int16_t x334 = -1;
int16_t x336 = -1;
int8_t x339 = INT8_MIN;
volatile int64_t x340 = -1LL;
static volatile uint16_t x343 = 7U;
int64_t x350 = -1LL;
int8_t x352 = INT8_MIN;
volatile int16_t x354 = 1910;
int32_t t88 = -2;
int32_t x357 = INT32_MIN;
int16_t x360 = -1892;
int16_t x362 = INT16_MAX;
int16_t x372 = -12333;
static int32_t t93 = 98;
uint8_t x380 = UINT8_MAX;
int32_t x384 = INT32_MIN;
volatile uint64_t x385 = UINT64_MAX;
volatile uint64_t t96 = UINT64_MAX;
int32_t x392 = INT32_MAX;
int8_t x395 = INT8_MAX;
static int32_t x396 = INT32_MAX;


void f0(void) {
	static int32_t x1 = 3546723;
	uint32_t x2 = 11002600U;
	static volatile int64_t x3 = INT64_MAX;
	uint64_t x4 = UINT64_MAX;
	volatile uint32_t t0 = 101U;

	t0 = (x1-(x2&(x3==x4)));

	if (t0 != 3546723U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = INT32_MAX;

	t1 = (x5-(x6&(x7==x8)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int32_t x10 = -1;
	uint8_t x11 = UINT8_MAX;
	int64_t x12 = -1LL;
	static int32_t t2 = -4511;

	t2 = (x9-(x10&(x11==x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -5;
	int32_t x14 = INT32_MIN;
	uint8_t x15 = 0U;
	int32_t x16 = -19762;
	volatile int32_t t3 = 1;

	t3 = (x13-(x14&(x15==x16)));

	if (t3 != -5) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 2U;
	static int32_t x19 = INT32_MAX;
	static int8_t x20 = INT8_MIN;
	int32_t t4 = 564;

	t4 = (x17-(x18&(x19==x20)));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	volatile int16_t x22 = INT16_MIN;
	uint8_t x23 = 3U;
	int32_t t5 = 4326367;

	t5 = (x21-(x22&(x23==x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	static int64_t x26 = 446322139697LL;
	int16_t x27 = -1;
	uint32_t x28 = 6166U;
	int64_t t6 = -178418902LL;

	t6 = (x25-(x26&(x27==x28)));

	if (t6 != 2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x29 = 0U;
	uint64_t x32 = 989350069500941LLU;
	static volatile int32_t t7 = 214;

	t7 = (x29-(x30&(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 5U;
	static int32_t x34 = INT32_MIN;
	int64_t x35 = INT64_MIN;
	static uint64_t x36 = 2380LLU;

	t8 = (x33-(x34&(x35==x36)));

	if (t8 != 5) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int8_t x38 = -6;
	volatile int16_t x39 = INT16_MIN;
	uint32_t x40 = 117U;

	t9 = (x37-(x38&(x39==x40)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x43 = -1;
	static int32_t x44 = INT32_MIN;

	t10 = (x41-(x42&(x43==x44)));

	if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x46 = 89U;
	int16_t x48 = -300;
	volatile int64_t t11 = 173LL;

	t11 = (x45-(x46&(x47==x48)));

	if (t11 != 50LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 824717295U;
	volatile int64_t x50 = INT64_MIN;
	uint16_t x51 = 81U;
	int8_t x52 = INT8_MAX;
	int64_t t12 = -17LL;

	t12 = (x49-(x50&(x51==x52)));

	if (t12 != 824717295LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	uint16_t x54 = UINT16_MAX;
	uint8_t x55 = 3U;
	uint64_t x56 = 1861469531653115LLU;
	int32_t t13 = -302950;

	t13 = (x53-(x54&(x55==x56)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 1427U;
	int32_t x58 = -1;
	int32_t x59 = -4369874;
	uint64_t x60 = 2662957541620387LLU;
	uint32_t t14 = 0U;

	t14 = (x57-(x58&(x59==x60)));

	if (t14 != 1427U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x61 = 0U;
	uint8_t x62 = 9U;
	uint32_t x63 = 82381091U;
	volatile int8_t x64 = INT8_MAX;
	static volatile int32_t t15 = -17316954;

	t15 = (x61-(x62&(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MAX;
	uint64_t x67 = 48500017293280348LLU;
	int8_t x68 = INT8_MIN;
	static volatile int64_t t16 = INT64_MAX;

	t16 = (x65-(x66&(x67==x68)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 1U;
	int16_t x70 = -1;
	int64_t x71 = INT64_MIN;
	int64_t x72 = 1LL;
	volatile int32_t t17 = -881944726;

	t17 = (x69-(x70&(x71==x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 81462LL;
	uint32_t x74 = 2U;
	uint64_t x76 = 14110LLU;
	static int64_t t18 = 60153735716190LL;

	t18 = (x73-(x74&(x75==x76)));

	if (t18 != 81462LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 100437639016278LLU;
	int8_t x78 = -14;

	t19 = (x77-(x78&(x79==x80)));

	if (t19 != 100437639016278LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	uint32_t x84 = 0U;

	t20 = (x81-(x82&(x83==x84)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 28U;
	uint16_t x87 = 496U;
	int32_t x88 = -4596766;
	int32_t t21 = 902531;

	t21 = (x85-(x86&(x87==x88)));

	if (t21 != 28) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x90 = UINT32_MAX;
	int8_t x91 = INT8_MIN;
	volatile uint64_t x92 = 12186109454865612LLU;
	static int64_t t22 = INT64_MIN;

	t22 = (x89-(x90&(x91==x92)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = UINT32_MAX;
	int16_t x95 = INT16_MAX;
	static int8_t x96 = 1;
	static volatile uint32_t t23 = 1U;

	t23 = (x93-(x94&(x95==x96)));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x97 = 811298654U;
	uint8_t x98 = UINT8_MAX;
	volatile int8_t x100 = INT8_MIN;
	volatile uint32_t t24 = 1620U;

	t24 = (x97-(x98&(x99==x100)));

	if (t24 != 811298654U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 538486804U;
	int16_t x102 = INT16_MAX;
	uint32_t x103 = 1982840U;
	uint32_t x104 = UINT32_MAX;
	static uint32_t t25 = 0U;

	t25 = (x101-(x102&(x103==x104)));

	if (t25 != 538486804U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = UINT64_MAX;
	uint32_t x108 = 128U;

	t26 = (x105-(x106&(x107==x108)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	int8_t x110 = 1;
	static int16_t x112 = 3;
	static int32_t t27 = 3105479;

	t27 = (x109-(x110&(x111==x112)));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = UINT32_MAX;
	static uint16_t x115 = UINT16_MAX;
	int32_t x116 = INT32_MAX;
	volatile uint64_t t28 = 1796408812608762LLU;

	t28 = (x113-(x114&(x115==x116)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = 0;
	int64_t x119 = INT64_MAX;
	volatile uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = -25810;

	t29 = (x117-(x118&(x119==x120)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = -1;
	int32_t x122 = 58090;
	uint64_t x123 = 357761468413129856LLU;

	t30 = (x121-(x122&(x123==x124)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 276558U;
	int32_t x126 = INT32_MIN;
	volatile uint16_t x127 = 3U;
	int8_t x128 = -1;

	t31 = (x125-(x126&(x127==x128)));

	if (t31 != 276558U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = INT16_MAX;
	volatile uint16_t x131 = UINT16_MAX;
	int64_t x132 = INT64_MAX;
	int32_t t32 = -133;

	t32 = (x129-(x130&(x131==x132)));

	if (t32 != 27) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = 1;
	volatile uint8_t x135 = 31U;
	int8_t x136 = INT8_MIN;

	t33 = (x133-(x134&(x135==x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	uint64_t x138 = UINT64_MAX;
	uint16_t x140 = UINT16_MAX;

	t34 = (x137-(x138&(x139==x140)));

	if (t34 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -46;
	int32_t x142 = 2;
	uint16_t x143 = 1032U;
	int8_t x144 = 8;

	t35 = (x141-(x142&(x143==x144)));

	if (t35 != -46) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	uint32_t x146 = 31165433U;
	static uint64_t x147 = UINT64_MAX;
	int64_t x148 = -181602852561175683LL;
	volatile int64_t t36 = -120749854123376LL;

	t36 = (x145-(x146&(x147==x148)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 5;
	uint64_t x150 = UINT64_MAX;
	int64_t x151 = INT64_MIN;
	int8_t x152 = INT8_MIN;
	uint64_t t37 = 234427227813319LLU;

	t37 = (x149-(x150&(x151==x152)));

	if (t37 != 5LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	static int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	static int8_t x156 = 0;

	t38 = (x153-(x154&(x155==x156)));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 2678220;
	volatile int64_t x158 = -2231LL;
	uint64_t x159 = 2703LLU;
	int64_t t39 = -57304771086862208LL;

	t39 = (x157-(x158&(x159==x160)));

	if (t39 != 2678220LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 17892675;
	uint8_t x162 = 1U;
	int16_t x163 = 22;
	int16_t x164 = 118;

	t40 = (x161-(x162&(x163==x164)));

	if (t40 != 17892675) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 11705U;
	uint16_t x166 = 11U;
	uint64_t x167 = 25LLU;
	int16_t x168 = INT16_MIN;
	uint32_t t41 = 300U;

	t41 = (x165-(x166&(x167==x168)));

	if (t41 != 11705U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = UINT64_MAX;
	int8_t x170 = INT8_MAX;
	int8_t x171 = INT8_MIN;
	static volatile uint64_t t42 = UINT64_MAX;

	t42 = (x169-(x170&(x171==x172)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = UINT32_MAX;
	static int16_t x175 = INT16_MIN;
	volatile uint32_t x176 = 14467U;

	t43 = (x173-(x174&(x175==x176)));

	if (t43 != 236054U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x177 = -13282;
	uint8_t x178 = 60U;
	int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MAX;
	volatile int32_t t44 = -116;

	t44 = (x177-(x178&(x179==x180)));

	if (t44 != -13282) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -16;
	int8_t x182 = -1;
	int64_t x183 = INT64_MIN;

	t45 = (x181-(x182&(x183==x184)));

	if (t45 != -16) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 909LL;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = INT16_MIN;
	static int64_t t46 = 20LL;

	t46 = (x185-(x186&(x187==x188)));

	if (t46 != 909LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x192 = UINT64_MAX;
	uint64_t t47 = 1095131041951LLU;

	t47 = (x189-(x190&(x191==x192)));

	if (t47 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x194 = UINT16_MAX;
	volatile int64_t x195 = INT64_MAX;
	volatile int64_t t48 = INT64_MAX;

	t48 = (x193-(x194&(x195==x196)));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = UINT8_MAX;
	static uint64_t x198 = 711936LLU;
	volatile uint64_t x199 = 570LLU;
	uint64_t x200 = 788221LLU;
	volatile uint64_t t49 = 0LLU;

	t49 = (x197-(x198&(x199==x200)));

	if (t49 != 255LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	uint64_t x203 = UINT64_MAX;
	static uint32_t x204 = 8U;
	volatile int32_t t50 = INT32_MAX;

	t50 = (x201-(x202&(x203==x204)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MAX;
	int32_t x206 = INT32_MAX;
	static int16_t x207 = -12571;
	volatile uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = -386538817;

	t51 = (x205-(x206&(x207==x208)));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	int32_t x212 = 20464;
	int32_t t52 = -3;

	t52 = (x209-(x210&(x211==x212)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MAX;
	int64_t x215 = -1LL;
	uint32_t x216 = 1U;
	int32_t t53 = -5742;

	t53 = (x213-(x214&(x215==x216)));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	static volatile int32_t x218 = -3;
	static uint64_t x219 = 947001067168211010LLU;
	volatile int16_t x220 = INT16_MIN;
	int32_t t54 = 461;

	t54 = (x217-(x218&(x219==x220)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 0U;
	int64_t x222 = -1LL;
	uint8_t x224 = 9U;
	volatile int64_t t55 = 18LL;

	t55 = (x221-(x222&(x223==x224)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	int8_t x226 = INT8_MIN;
	volatile int32_t t56 = INT32_MIN;

	t56 = (x225-(x226&(x227==x228)));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = 7;
	int64_t x231 = -178LL;
	volatile uint64_t x232 = 329876834735986871LLU;
	int32_t t57 = 64;

	t57 = (x229-(x230&(x231==x232)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = 863U;
	volatile uint8_t x235 = 0U;
	volatile int32_t t58 = -64;

	t58 = (x233-(x234&(x235==x236)));

	if (t58 != 863) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = -1LL;
	static int64_t x239 = -2564987LL;
	int8_t x240 = INT8_MIN;
	static volatile int64_t t59 = -8676263850858LL;

	t59 = (x237-(x238&(x239==x240)));

	if (t59 != 3633LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MAX;
	int8_t x242 = -1;
	int8_t x243 = INT8_MAX;
	volatile int32_t x244 = -22;
	int32_t t60 = INT32_MAX;

	t60 = (x241-(x242&(x243==x244)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	volatile uint32_t x248 = 90639124U;
	volatile int32_t t61 = INT32_MIN;

	t61 = (x245-(x246&(x247==x248)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -3001LL;
	uint16_t x250 = 517U;
	uint64_t x251 = 4LLU;
	int64_t x252 = INT64_MAX;
	int64_t t62 = -1989521184908LL;

	t62 = (x249-(x250&(x251==x252)));

	if (t62 != -3001LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	volatile int16_t x254 = -1;

	t63 = (x253-(x254&(x255==x256)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = 0U;
	static uint32_t x258 = 49231U;
	int64_t x259 = INT64_MIN;
	static volatile int32_t x260 = INT32_MIN;
	uint32_t t64 = 65592921U;

	t64 = (x257-(x258&(x259==x260)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = -1;
	volatile int16_t x264 = INT16_MAX;
	int32_t t65 = 209262668;

	t65 = (x261-(x262&(x263==x264)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	volatile int64_t x266 = INT64_MAX;
	int8_t x267 = 0;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x265-(x266&(x267==x268)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	uint32_t x271 = 228600411U;
	static uint64_t x272 = 355831195019LLU;
	volatile int32_t t67 = INT32_MIN;

	t67 = (x269-(x270&(x271==x272)));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 0;
	int64_t x275 = INT64_MIN;
	int64_t x276 = -250583052341LL;
	int64_t t68 = 116818LL;

	t68 = (x273-(x274&(x275==x276)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 3U;
	static uint64_t x279 = 138LLU;
	volatile uint64_t x280 = 2221131772279535416LLU;

	t69 = (x277-(x278&(x279==x280)));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	static volatile uint8_t x282 = UINT8_MAX;
	static int64_t x283 = INT64_MAX;
	static int64_t x284 = -5330LL;
	volatile int32_t t70 = 2;

	t70 = (x281-(x282&(x283==x284)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int8_t x286 = INT8_MIN;
	uint16_t x287 = 1U;
	volatile uint8_t x288 = 7U;
	volatile int32_t t71 = 2;

	t71 = (x285-(x286&(x287==x288)));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MAX;
	uint32_t x290 = 2202U;
	int16_t x291 = 4052;
	int32_t x292 = INT32_MIN;
	volatile uint32_t t72 = 103U;

	t72 = (x289-(x290&(x291==x292)));

	if (t72 != 32767U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 2051713LLU;
	volatile int64_t x294 = INT64_MIN;
	volatile int64_t x295 = 1996714329814341LL;
	uint8_t x296 = 30U;
	volatile uint64_t t73 = 214935LLU;

	t73 = (x293-(x294&(x295==x296)));

	if (t73 != 2051713LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	uint32_t x298 = 1929107U;
	int32_t x299 = INT32_MAX;
	uint32_t t74 = 4087U;

	t74 = (x297-(x298&(x299==x300)));

	if (t74 != 32767U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 3U;
	volatile uint32_t x304 = UINT32_MAX;

	t75 = (x301-(x302&(x303==x304)));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = INT32_MAX;
	static int32_t x307 = INT32_MIN;

	t76 = (x305-(x306&(x307==x308)));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = -113;
	static volatile int32_t t77 = -3152081;

	t77 = (x309-(x310&(x311==x312)));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x315 = 31U;
	int64_t t78 = INT64_MAX;

	t78 = (x313-(x314&(x315==x316)));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	volatile int32_t x319 = INT32_MIN;
	static int8_t x320 = INT8_MIN;
	static volatile int64_t t79 = INT64_MIN;

	t79 = (x317-(x318&(x319==x320)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = 4585812;
	int16_t x324 = 5577;
	uint32_t t80 = UINT32_MAX;

	t80 = (x321-(x322&(x323==x324)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x326 = UINT32_MAX;
	uint32_t x327 = 1830784U;
	uint8_t x328 = 104U;

	t81 = (x325-(x326&(x327==x328)));

	if (t81 != 127U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 19344608U;
	int64_t x332 = -1LL;
	volatile uint32_t t82 = 103649U;

	t82 = (x329-(x330&(x331==x332)));

	if (t82 != 19344608U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x335 = INT16_MAX;
	static volatile uint64_t t83 = 19650234334361LLU;

	t83 = (x333-(x334&(x335==x336)));

	if (t83 != 169659LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	static volatile int16_t x338 = -5119;
	volatile int64_t t84 = INT64_MAX;

	t84 = (x337-(x338&(x339==x340)));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	int16_t x342 = 31;
	int16_t x344 = INT16_MIN;
	volatile int64_t t85 = INT64_MAX;

	t85 = (x341-(x342&(x343==x344)));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 3U;
	volatile int8_t x346 = INT8_MIN;
	uint32_t x347 = 1U;
	int32_t x348 = -1;
	int32_t t86 = 353085;

	t86 = (x345-(x346&(x347==x348)));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x351 = UINT64_MAX;
	int64_t t87 = 49LL;

	t87 = (x349-(x350&(x351==x352)));

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int8_t x355 = -1;
	static int64_t x356 = INT64_MIN;

	t88 = (x353-(x354&(x355==x356)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = -8;
	static int64_t x359 = -1LL;
	int32_t t89 = INT32_MIN;

	t89 = (x357-(x358&(x359==x360)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -2;
	int8_t x363 = INT8_MIN;
	uint8_t x364 = 29U;
	volatile int32_t t90 = 0;

	t90 = (x361-(x362&(x363==x364)));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = 309U;
	int64_t x366 = INT64_MIN;
	uint8_t x367 = UINT8_MAX;
	static volatile int16_t x368 = INT16_MIN;
	int64_t t91 = -15403LL;

	t91 = (x365-(x366&(x367==x368)));

	if (t91 != 309LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 1;
	uint8_t x370 = 43U;
	uint32_t x371 = 6646757U;
	volatile int32_t t92 = 527734788;

	t92 = (x369-(x370&(x371==x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -15359393;
	int32_t x374 = -4536;
	volatile uint64_t x375 = UINT64_MAX;
	uint32_t x376 = 1U;

	t93 = (x373-(x374&(x375==x376)));

	if (t93 != -15359393) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 342880790U;
	uint32_t x378 = 483947813U;
	static int16_t x379 = INT16_MAX;
	static volatile uint32_t t94 = 213U;

	t94 = (x377-(x378&(x379==x380)));

	if (t94 != 342880790U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = UINT16_MAX;
	uint16_t x382 = 4914U;
	int32_t x383 = -1;
	int32_t t95 = -2926;

	t95 = (x381-(x382&(x383==x384)));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x386 = -11140LL;
	int8_t x387 = -38;
	uint64_t x388 = 103LLU;

	t96 = (x385-(x386&(x387==x388)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = 1406593179LL;
	int64_t x390 = INT64_MIN;
	static int16_t x391 = 1;
	static volatile int64_t t97 = 54322428721191LL;

	t97 = (x389-(x390&(x391==x392)));

	if (t97 != 1406593179LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 5U;
	volatile uint32_t x394 = 2U;
	volatile uint32_t t98 = 9384U;

	t98 = (x393-(x394&(x395==x396)));

	if (t98 != 5U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -35;
	int64_t x398 = -1LL;
	int16_t x399 = INT16_MIN;
	volatile uint64_t x400 = 71535199LLU;
	int64_t t99 = -34400491LL;

	t99 = (x397-(x398&(x399==x400)));

	if (t99 != -35LL) { NG(); } else { ; }
	
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

