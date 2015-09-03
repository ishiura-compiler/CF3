#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x3 = UINT32_MAX;
uint16_t x7 = UINT16_MAX;
uint16_t x16 = 1910U;
uint32_t x17 = 19490210U;
int32_t t5 = INT32_MIN;
uint32_t x29 = 115U;
static int32_t x34 = -1;
uint64_t x40 = UINT64_MAX;
int8_t x50 = INT8_MIN;
static int32_t t12 = 241639;
static int32_t x57 = INT32_MIN;
uint32_t x58 = 29902U;
int32_t x59 = -1;
int64_t x71 = INT64_MAX;
int32_t x79 = 886057;
volatile int32_t t19 = 359;
volatile int32_t x83 = INT32_MAX;
int8_t x86 = INT8_MAX;
volatile int16_t x88 = INT16_MIN;
uint32_t x97 = UINT32_MAX;
int32_t x98 = -1;
uint32_t t25 = 271332423U;
volatile int64_t x108 = INT64_MAX;
int32_t x109 = 391576;
volatile int64_t x112 = -1LL;
int32_t t27 = -207;
int16_t x113 = -1;
volatile int32_t t29 = 1784746;
volatile int64_t t32 = 27836703LL;
int32_t x135 = 2009778;
int8_t x138 = 0;
static volatile int16_t x139 = -1;
uint16_t x140 = 14077U;
volatile int64_t t34 = 495846051347899LL;
static uint8_t x141 = 58U;
static int8_t x146 = INT8_MAX;
int16_t x148 = 4;
static int32_t t36 = -2;
int64_t x152 = INT64_MAX;
static int64_t x153 = INT64_MIN;
uint64_t x156 = 100467106LLU;
static uint64_t x160 = 16544104LLU;
volatile int16_t x162 = INT16_MIN;
volatile uint32_t x164 = 29604U;
int32_t x165 = INT32_MAX;
static int16_t x170 = -1184;
int16_t x173 = INT16_MIN;
volatile uint64_t x175 = UINT64_MAX;
static volatile int32_t x176 = 211113;
int32_t x177 = -79445;
int16_t x181 = INT16_MIN;
int16_t x184 = -1;
int16_t x185 = 0;
volatile int64_t t47 = 275065297LL;
int8_t x195 = 0;
uint16_t x210 = 18985U;
volatile uint32_t x212 = UINT32_MAX;
int8_t x214 = 1;
static uint32_t x218 = UINT32_MAX;
static int8_t x219 = INT8_MIN;
volatile uint64_t x220 = 52443LLU;
int32_t x229 = INT32_MIN;
int16_t x231 = INT16_MIN;
int16_t x235 = 129;
volatile uint16_t x241 = UINT16_MAX;
uint32_t x244 = 744U;
int64_t x246 = -34275985317048LL;
static volatile int64_t t61 = 25064371414301389LL;
int32_t x253 = INT32_MAX;
volatile int16_t x257 = INT16_MIN;
uint16_t x258 = UINT16_MAX;
uint8_t x262 = 14U;
uint64_t x263 = UINT64_MAX;
int8_t x267 = -1;
volatile int32_t t66 = 25;
volatile int64_t x269 = INT64_MIN;
volatile int16_t x272 = 3918;
volatile int64_t t67 = 479518LL;
static volatile int32_t x275 = INT32_MIN;
uint8_t x281 = 123U;
int32_t t70 = 3970727;
int32_t t71 = -1038237;
int32_t x292 = INT32_MIN;
int16_t x295 = INT16_MIN;
volatile int16_t x296 = -5;
int64_t x297 = INT64_MIN;
static int64_t x298 = -4309LL;
int64_t t74 = INT64_MIN;
uint8_t x307 = UINT8_MAX;
volatile uint32_t t77 = 12474U;
static uint16_t x316 = UINT16_MAX;
int32_t t78 = 7;
volatile int64_t t80 = INT64_MIN;
uint16_t x330 = 6U;
int32_t x332 = INT32_MIN;
uint8_t x335 = UINT8_MAX;
int64_t x341 = -94070488445085704LL;
int32_t x342 = 0;
int16_t x343 = -1;
volatile int64_t t85 = -98LL;
int8_t x350 = 11;
volatile uint32_t t87 = 132893U;
uint64_t x353 = 314LLU;
static volatile int16_t x357 = -7;
int32_t x360 = INT32_MIN;
static volatile uint64_t t89 = 1383184825879940LLU;
int64_t x375 = -1065098058LL;
static volatile uint64_t x377 = UINT64_MAX;
int16_t x381 = -1;
volatile int32_t t95 = 1649;
int64_t x394 = 18976781LL;
int8_t x400 = 15;
int64_t t99 = -7485599LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = 115;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = 101001;

	t0 = (x1&(x2^(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 0;
	uint8_t x6 = 93U;
	int32_t x8 = -1;
	volatile int32_t t1 = 8;

	t1 = (x5&(x6^(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	int16_t x10 = INT16_MIN;
	volatile int32_t x11 = 0;
	volatile int16_t x12 = INT16_MIN;
	static int32_t t2 = INT32_MIN;

	t2 = (x9&(x10^(x11==x12)));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MAX;
	volatile uint32_t t3 = 4995U;

	t3 = (x13&(x14^(x15==x16)));

	if (t3 != 2147483648U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = -6340078914527LL;
	uint64_t x19 = 1831077434034LLU;
	int32_t x20 = -2979;
	volatile int64_t t4 = 384128236464411295LL;

	t4 = (x17&(x18^(x19==x20)));

	if (t4 != 17376288LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	static int32_t x22 = INT32_MIN;
	volatile int8_t x23 = INT8_MIN;
	volatile int8_t x24 = 5;

	t5 = (x21&(x22^(x23==x24)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 326U;
	int32_t x26 = INT32_MAX;
	volatile int32_t x27 = -1;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t6 = 1U;

	t6 = (x25&(x26^(x27==x28)));

	if (t6 != 326U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 22794676U;
	int8_t x31 = INT8_MAX;
	static int32_t x32 = INT32_MIN;
	volatile uint32_t t7 = 17U;

	t7 = (x29&(x30^(x31==x32)));

	if (t7 != 48U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 101361876LLU;
	int32_t x35 = INT32_MIN;
	int8_t x36 = INT8_MIN;
	static uint64_t t8 = 193LLU;

	t8 = (x33&(x34^(x35==x36)));

	if (t8 != 101361876LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 199165LLU;
	volatile int64_t x38 = INT64_MIN;
	volatile uint8_t x39 = 12U;
	volatile uint64_t t9 = 502461LLU;

	t9 = (x37&(x38^(x39==x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 31730719038130LL;
	static int8_t x42 = INT8_MIN;
	uint8_t x43 = 127U;
	volatile int32_t x44 = INT32_MAX;
	static int64_t t10 = 340LL;

	t10 = (x41&(x42^(x43==x44)));

	if (t10 != 31730719038080LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int32_t x46 = -1;
	int8_t x47 = INT8_MIN;
	int8_t x48 = -1;
	int64_t t11 = INT64_MIN;

	t11 = (x45&(x46^(x47==x48)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	int16_t x51 = -9488;
	int8_t x52 = -53;

	t12 = (x49&(x50^(x51==x52)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MIN;
	int64_t x56 = -1LL;
	int64_t t13 = INT64_MIN;

	t13 = (x53&(x54^(x55==x56)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x60 = 4;
	volatile uint32_t t14 = 84U;

	t14 = (x57&(x58^(x59==x60)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 3853976;
	int64_t x62 = -1LL;
	uint8_t x63 = 35U;
	static int64_t x64 = -4019936LL;
	volatile int64_t t15 = 1545403LL;

	t15 = (x61&(x62^(x63==x64)));

	if (t15 != 3853976LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x66 = INT64_MIN;
	static volatile int8_t x67 = INT8_MAX;
	int16_t x68 = INT16_MAX;
	uint64_t t16 = 1064235644853092980LLU;

	t16 = (x65&(x66^(x67==x68)));

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -25;
	int64_t x70 = -1LL;
	static volatile uint16_t x72 = 0U;
	volatile int64_t t17 = -45529032606853LL;

	t17 = (x69&(x70^(x71==x72)));

	if (t17 != -25LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	uint32_t x74 = 28594U;
	volatile uint16_t x75 = 11U;
	static volatile uint16_t x76 = 34U;
	static uint32_t t18 = 254917U;

	t18 = (x73&(x74^(x75==x76)));

	if (t18 != 28594U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static int8_t x78 = -16;
	volatile int16_t x80 = -1;

	t19 = (x77&(x78^(x79==x80)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int64_t x82 = -1LL;
	uint32_t x84 = 10360U;
	int64_t t20 = INT64_MAX;

	t20 = (x81&(x82^(x83==x84)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -1;
	static int8_t x87 = -22;
	int32_t t21 = 1687;

	t21 = (x85&(x86^(x87==x88)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = 5909LLU;
	int64_t x90 = -1LL;
	int8_t x91 = -1;
	volatile uint32_t x92 = UINT32_MAX;
	static volatile uint64_t t22 = 669663167LLU;

	t22 = (x89&(x90^(x91==x92)));

	if (t22 != 5908LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 0;
	int64_t x94 = INT64_MIN;
	int16_t x95 = INT16_MAX;
	int8_t x96 = INT8_MIN;
	volatile int64_t t23 = 1LL;

	t23 = (x93&(x94^(x95==x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x99 = 1906352740U;
	volatile uint32_t x100 = 52U;
	static uint32_t t24 = UINT32_MAX;

	t24 = (x97&(x98^(x99==x100)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 563846U;
	int32_t x102 = 6215;
	static uint32_t x103 = 5899U;
	uint16_t x104 = 76U;

	t25 = (x101&(x102^(x103==x104)));

	if (t25 != 6150U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	volatile int16_t x106 = 15;
	volatile uint32_t x107 = UINT32_MAX;
	int32_t t26 = -205;

	t26 = (x105&(x106^(x107==x108)));

	if (t26 != 15) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x110 = 1;
	int8_t x111 = -1;

	t27 = (x109&(x110^(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	int8_t x115 = -1;
	static int16_t x116 = 99;
	int32_t t28 = -5619;

	t28 = (x113&(x114^(x115==x116)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -5;
	uint8_t x118 = UINT8_MAX;
	int64_t x119 = -1LL;
	uint64_t x120 = 2732799271147407LLU;

	t29 = (x117&(x118^(x119==x120)));

	if (t29 != 251) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 93480279459281LL;
	int8_t x122 = INT8_MIN;
	uint32_t x123 = UINT32_MAX;
	uint32_t x124 = 353339U;
	int64_t t30 = -3864099LL;

	t30 = (x121&(x122^(x123==x124)));

	if (t30 != 93480279459200LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = 0;
	int16_t x126 = 2564;
	int16_t x127 = INT16_MAX;
	static int32_t x128 = 228;
	static int32_t t31 = 9;

	t31 = (x125&(x126^(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -43489236119LL;
	static int16_t x130 = 221;
	int32_t x131 = -1;
	volatile int16_t x132 = -1;

	t32 = (x129&(x130^(x131==x132)));

	if (t32 != 72LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -45;
	int64_t x134 = -1LL;
	uint64_t x136 = 73356232994LLU;
	int64_t t33 = -326162LL;

	t33 = (x133&(x134^(x135==x136)));

	if (t33 != -45LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;

	t34 = (x137&(x138^(x139==x140)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x142 = INT64_MAX;
	volatile int8_t x143 = INT8_MIN;
	static int64_t x144 = -1LL;
	int64_t t35 = 49578828886LL;

	t35 = (x141&(x142^(x143==x144)));

	if (t35 != 58LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	uint64_t x147 = 2000565162787LLU;

	t36 = (x145&(x146^(x147==x148)));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	static int32_t x150 = INT32_MIN;
	static volatile uint16_t x151 = 1755U;
	static int32_t t37 = 330;

	t37 = (x149&(x150^(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = 6216433LL;
	static uint16_t x155 = 944U;
	int64_t t38 = -4210690LL;

	t38 = (x153&(x154^(x155==x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	volatile int32_t x158 = -1;
	static int32_t x159 = -1;
	static int32_t t39 = -29;

	t39 = (x157&(x158^(x159==x160)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x163 = -1;
	int32_t t40 = -17858;

	t40 = (x161&(x162^(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = UINT16_MAX;
	int64_t x167 = -2979388182500LL;
	volatile uint16_t x168 = 2U;
	int32_t t41 = -1933;

	t41 = (x165&(x166^(x167==x168)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	int16_t x171 = INT16_MIN;
	uint64_t x172 = 68685648787361555LLU;
	volatile int32_t t42 = 26944;

	t42 = (x169&(x170^(x171==x172)));

	if (t42 != -1184) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = -28268828;
	int32_t t43 = -246;

	t43 = (x173&(x174^(x175==x176)));

	if (t43 != -28278784) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x178 = -398845904120576590LL;
	int8_t x179 = INT8_MIN;
	static int16_t x180 = -1;
	volatile int64_t t44 = -1203977LL;

	t44 = (x177&(x178^(x179==x180)));

	if (t44 != -398845904120577630LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MAX;
	int8_t x183 = 2;
	volatile int32_t t45 = -56371367;

	t45 = (x181&(x182^(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = UINT8_MAX;
	volatile int64_t x187 = INT64_MAX;
	volatile int64_t x188 = INT64_MAX;
	static volatile int32_t t46 = 963046;

	t46 = (x185&(x186^(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 1;
	volatile int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MAX;
	uint32_t x192 = UINT32_MAX;

	t47 = (x189&(x190^(x191==x192)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 0U;
	volatile int64_t x194 = 431104LL;
	uint16_t x196 = 4012U;
	int64_t t48 = 40725586107066811LL;

	t48 = (x193&(x194^(x195==x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = -1;
	int64_t x198 = -94571694LL;
	volatile int64_t x199 = 20LL;
	volatile int64_t x200 = -1LL;
	volatile int64_t t49 = -11LL;

	t49 = (x197&(x198^(x199==x200)));

	if (t49 != -94571694LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x201 = INT64_MAX;
	volatile int8_t x202 = INT8_MIN;
	volatile uint16_t x203 = 6828U;
	int16_t x204 = 1;
	int64_t t50 = 0LL;

	t50 = (x201&(x202^(x203==x204)));

	if (t50 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 11U;
	int32_t x206 = INT32_MAX;
	int8_t x207 = INT8_MAX;
	int8_t x208 = INT8_MIN;
	int32_t t51 = -15479284;

	t51 = (x205&(x206^(x207==x208)));

	if (t51 != 11) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -1;
	int8_t x211 = INT8_MAX;
	static int32_t t52 = -8112;

	t52 = (x209&(x210^(x211==x212)));

	if (t52 != 18985) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 0;
	static volatile int8_t x215 = 1;
	int32_t x216 = -76469;
	int32_t t53 = -395541383;

	t53 = (x213&(x214^(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 45U;
	uint32_t t54 = 0U;

	t54 = (x217&(x218^(x219==x220)));

	if (t54 != 45U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 0U;
	int8_t x222 = -1;
	int64_t x223 = -1LL;
	int32_t x224 = 3583;
	static volatile uint32_t t55 = 4U;

	t55 = (x221&(x222^(x223==x224)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = 2U;
	uint64_t x226 = 380208774422490862LLU;
	volatile int64_t x227 = INT64_MAX;
	int64_t x228 = 245095343850043960LL;
	uint64_t t56 = 20855452495672637LLU;

	t56 = (x225&(x226^(x227==x228)));

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x230 = INT64_MAX;
	uint64_t x232 = 1268192199702670LLU;
	volatile int64_t t57 = -62034012115584LL;

	t57 = (x229&(x230^(x231==x232)));

	if (t57 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = 1637;
	int32_t x234 = INT32_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t58 = 1710;

	t58 = (x233&(x234^(x235==x236)));

	if (t58 != 1637) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = UINT32_MAX;
	static int16_t x238 = INT16_MIN;
	static uint64_t x239 = 85456382257628958LLU;
	uint32_t x240 = UINT32_MAX;
	static volatile uint32_t t59 = 14875172U;

	t59 = (x237&(x238^(x239==x240)));

	if (t59 != 4294934528U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = INT64_MAX;
	volatile int16_t x243 = INT16_MIN;
	int64_t t60 = -1LL;

	t60 = (x241&(x242^(x243==x244)));

	if (t60 != 65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 13209U;
	int8_t x247 = INT8_MIN;
	volatile int16_t x248 = -442;

	t61 = (x245&(x246^(x247==x248)));

	if (t61 != 8968LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 188072359U;
	int8_t x250 = INT8_MIN;
	static int64_t x251 = INT64_MIN;
	static uint32_t x252 = 2543U;
	volatile uint32_t t62 = 16458475U;

	t62 = (x249&(x250^(x251==x252)));

	if (t62 != 188072320U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x254 = 12455168;
	uint8_t x255 = 0U;
	static int32_t x256 = 5566;
	volatile int32_t t63 = 86;

	t63 = (x253&(x254^(x255==x256)));

	if (t63 != 12455168) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x259 = 2683258U;
	uint8_t x260 = 14U;
	static int32_t t64 = 2951;

	t64 = (x257&(x258^(x259==x260)));

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -1163;
	uint8_t x264 = 6U;
	volatile int32_t t65 = -45;

	t65 = (x261&(x262^(x263==x264)));

	if (t65 != 4) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	uint8_t x266 = UINT8_MAX;
	int16_t x268 = INT16_MIN;

	t66 = (x265&(x266^(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x270 = UINT8_MAX;
	static int64_t x271 = -1LL;

	t67 = (x269&(x270^(x271==x272)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 24U;
	volatile int64_t x274 = 100836512091618877LL;
	uint64_t x276 = UINT64_MAX;
	int64_t t68 = 119LL;

	t68 = (x273&(x274^(x275==x276)));

	if (t68 != 24LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	uint8_t x278 = 3U;
	static uint8_t x279 = 46U;
	uint32_t x280 = UINT32_MAX;
	int32_t t69 = -18;

	t69 = (x277&(x278^(x279==x280)));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 42U;
	int64_t x283 = INT64_MIN;
	static int32_t x284 = INT32_MIN;

	t70 = (x281&(x282^(x283==x284)));

	if (t70 != 42) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = 0U;
	int16_t x286 = 324;
	int16_t x287 = INT16_MIN;
	static int64_t x288 = 974405712075505LL;

	t71 = (x285&(x286^(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = 2024;
	static uint32_t x291 = UINT32_MAX;
	volatile int32_t t72 = 78;

	t72 = (x289&(x290^(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x293 = 5U;
	static int32_t x294 = 32329697;
	static int32_t t73 = 6903;

	t73 = (x293&(x294^(x295==x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x299 = 438691;
	uint8_t x300 = 31U;

	t74 = (x297&(x298^(x299==x300)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	uint64_t x302 = 1631587923743LLU;
	volatile int32_t x303 = 224509;
	static volatile uint64_t x304 = UINT64_MAX;
	volatile uint64_t t75 = 7942571564687LLU;

	t75 = (x301&(x302^(x303==x304)));

	if (t75 != 3795318559LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 1;
	int32_t x306 = -1;
	volatile int64_t x308 = 455747277849609LL;
	int32_t t76 = 10920157;

	t76 = (x305&(x306^(x307==x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint32_t x310 = 59U;
	static uint64_t x311 = 0LLU;
	uint16_t x312 = 149U;

	t77 = (x309&(x310^(x311==x312)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 3539527;
	static volatile int16_t x314 = INT16_MAX;
	volatile uint32_t x315 = UINT32_MAX;

	t78 = (x313&(x314^(x315==x316)));

	if (t78 != 583) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int32_t x318 = -1;
	static uint64_t x319 = 3517LLU;
	static volatile int8_t x320 = INT8_MIN;
	static volatile int32_t t79 = 71721;

	t79 = (x317&(x318^(x319==x320)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	static volatile int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MAX;
	int8_t x324 = INT8_MIN;

	t80 = (x321&(x322^(x323==x324)));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	int16_t x326 = INT16_MIN;
	static uint32_t x327 = UINT32_MAX;
	int32_t x328 = INT32_MIN;
	volatile int32_t t81 = -60;

	t81 = (x325&(x326^(x327==x328)));

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 44U;
	uint8_t x331 = 6U;
	volatile int32_t t82 = 1;

	t82 = (x329&(x330^(x331==x332)));

	if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	volatile uint64_t x334 = 5805563999LLU;
	uint32_t x336 = UINT32_MAX;
	uint64_t t83 = 141LLU;

	t83 = (x333&(x334^(x335==x336)));

	if (t83 != 5805563999LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MAX;
	static uint16_t x338 = 685U;
	static uint8_t x339 = 9U;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = -8;

	t84 = (x337&(x338^(x339==x340)));

	if (t84 != 685) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x344 = -1;

	t85 = (x341&(x342^(x343==x344)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	volatile uint32_t x346 = 80341U;
	uint64_t x347 = 12944LLU;
	uint16_t x348 = 3U;
	volatile uint32_t t86 = 2U;

	t86 = (x345&(x346^(x347==x348)));

	if (t86 != 80256U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	uint64_t x351 = 4257891676LLU;
	int32_t x352 = -1;

	t87 = (x349&(x350^(x351==x352)));

	if (t87 != 11U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = UINT32_MAX;
	int32_t x355 = -2120354;
	int8_t x356 = -1;
	uint64_t t88 = 182941710129LLU;

	t88 = (x353&(x354^(x355==x356)));

	if (t88 != 314LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x358 = 4023884LLU;
	uint8_t x359 = UINT8_MAX;

	t89 = (x357&(x358^(x359==x360)));

	if (t89 != 4023880LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 15U;
	int16_t x362 = -1;
	int16_t x363 = -1;
	volatile int16_t x364 = -6;
	volatile int32_t t90 = 49116;

	t90 = (x361&(x362^(x363==x364)));

	if (t90 != 15) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = INT16_MIN;
	int16_t x366 = 14;
	uint16_t x367 = 7U;
	int32_t x368 = -1029;
	int32_t t91 = -2274;

	t91 = (x365&(x366^(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x370 = -1LL;
	volatile int16_t x371 = -470;
	int16_t x372 = INT16_MIN;
	int64_t t92 = -19576LL;

	t92 = (x369&(x370^(x371==x372)));

	if (t92 != 4294967295LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -1LL;
	int8_t x374 = 4;
	volatile int16_t x376 = INT16_MIN;
	int64_t t93 = 2252256451512553220LL;

	t93 = (x373&(x374^(x375==x376)));

	if (t93 != 4LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MIN;
	int16_t x379 = 7;
	int32_t x380 = -1;
	uint64_t t94 = 121360035768LLU;

	t94 = (x377&(x378^(x379==x380)));

	if (t94 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = INT16_MAX;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = INT32_MIN;

	t95 = (x381&(x382^(x383==x384)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = -19;
	int64_t x386 = 11LL;
	uint64_t x387 = UINT64_MAX;
	int64_t x388 = INT64_MAX;
	volatile int64_t t96 = -336414LL;

	t96 = (x385&(x386^(x387==x388)));

	if (t96 != 9LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x389 = INT16_MIN;
	static int16_t x390 = INT16_MAX;
	uint16_t x391 = 9464U;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = -14013754;

	t97 = (x389&(x390^(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	uint64_t x395 = UINT64_MAX;
	int64_t x396 = -172939LL;
	static int64_t t98 = 6626032LL;

	t98 = (x393&(x394^(x395==x396)));

	if (t98 != 18972672LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = 101564;
	int64_t x398 = -23937210672LL;
	uint64_t x399 = 29230280648695987LLU;

	t99 = (x397&(x398^(x399==x400)));

	if (t99 != 66704LL) { NG(); } else { ; }
	
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

