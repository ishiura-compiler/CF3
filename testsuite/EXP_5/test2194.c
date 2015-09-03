#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x7 = 12019LL;
uint32_t x9 = 11U;
uint16_t x12 = 28U;
int32_t x15 = 9733980;
int32_t t4 = -161;
uint8_t x21 = UINT8_MAX;
int16_t x22 = -1;
int8_t x28 = INT8_MIN;
int32_t x29 = -14500;
volatile int32_t t7 = -1675128;
static int16_t x39 = -1;
int32_t x47 = INT32_MIN;
static int32_t x48 = -1;
int32_t t13 = 733089755;
static int32_t x57 = INT32_MIN;
volatile uint64_t x59 = 61719290934281045LLU;
int64_t x61 = -1LL;
static volatile int32_t t15 = -3;
int32_t x70 = -1;
int64_t x75 = INT64_MIN;
int64_t x78 = -110075LL;
int64_t x88 = INT64_MIN;
static uint64_t x94 = 112517LLU;
int64_t x96 = -154828646772785951LL;
int8_t x100 = -17;
static int64_t x101 = INT64_MAX;
volatile int64_t x104 = INT64_MIN;
uint32_t x113 = 1393U;
uint32_t x120 = 151965855U;
uint16_t x122 = UINT16_MAX;
volatile int32_t t32 = 78;
int32_t x140 = INT32_MIN;
static int8_t x144 = 7;
int8_t x145 = INT8_MIN;
static int64_t x152 = INT64_MAX;
volatile int8_t x158 = INT8_MAX;
volatile int32_t t40 = 500713457;
volatile int32_t t41 = 85432988;
int64_t x171 = -1LL;
uint8_t x173 = UINT8_MAX;
int32_t t43 = 166231231;
static int64_t x179 = -1LL;
int32_t t44 = 211178583;
int16_t x203 = -1;
int8_t x206 = INT8_MIN;
volatile int8_t x207 = -21;
static uint64_t x211 = 2043984LLU;
int16_t x212 = 1;
static int8_t x219 = 20;
static uint8_t x221 = 3U;
volatile int16_t x226 = -3524;
volatile uint32_t x230 = UINT32_MAX;
uint8_t x231 = 12U;
int64_t x233 = -343LL;
int32_t t59 = 1;
int16_t x242 = INT16_MIN;
uint64_t x244 = 65512LLU;
int8_t x245 = INT8_MAX;
int32_t x250 = INT32_MIN;
int8_t x252 = 0;
volatile int32_t t63 = -30832924;
static int8_t x258 = INT8_MIN;
static int32_t t64 = 2648705;
int64_t x267 = -1LL;
int16_t x274 = INT16_MIN;
volatile int64_t x278 = -5356191625LL;
uint64_t x279 = 809909909005491561LLU;
uint64_t x281 = UINT64_MAX;
int64_t x287 = INT64_MAX;
int32_t t73 = 174;
int8_t x297 = -1;
volatile int64_t x298 = INT64_MAX;
int16_t x299 = -1004;
static volatile int32_t t74 = -9;
uint64_t x308 = UINT64_MAX;
volatile int32_t t76 = 639;
int64_t x313 = INT64_MIN;
uint8_t x314 = 25U;
int32_t t78 = -40162481;
uint16_t x317 = 5268U;
volatile int8_t x320 = -1;
int32_t t79 = -2057;
uint16_t x323 = UINT16_MAX;
volatile int32_t t81 = -6949728;
volatile int8_t x338 = INT8_MIN;
int16_t x340 = -1;
static int32_t t84 = 2918537;
int32_t x341 = -1;
uint8_t x344 = 8U;
int16_t x346 = INT16_MIN;
uint64_t x352 = 92LLU;
uint8_t x353 = 33U;
volatile uint64_t x364 = UINT64_MAX;
static int64_t x365 = INT64_MAX;
int64_t x367 = INT64_MIN;
int32_t t91 = 163014;
volatile int32_t t92 = 1681151;
static int8_t x373 = INT8_MAX;
int8_t x381 = 1;
uint8_t x382 = UINT8_MAX;
int8_t x384 = INT8_MIN;
int64_t x386 = INT64_MAX;
int32_t x394 = 18311;


void f0(void) {
	int64_t x1 = 343627305178160LL;
	int64_t x2 = -12LL;
	volatile uint8_t x3 = UINT8_MAX;
	int8_t x4 = 36;
	int32_t t0 = 26054;

	t0 = (x1<=((x2^x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = -1;
	uint8_t x8 = 1U;
	int32_t t1 = 2;

	t1 = (x5<=((x6^x7)^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = -1;
	static int8_t x11 = INT8_MIN;
	volatile int32_t t2 = 740488278;

	t2 = (x9<=((x10^x11)^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -4;
	int8_t x14 = INT8_MAX;
	int32_t x16 = INT32_MAX;
	static int32_t t3 = -7;

	t3 = (x13<=((x14^x15)^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 65845LLU;
	int32_t x18 = INT32_MIN;
	int64_t x19 = -1LL;
	volatile uint16_t x20 = 1U;

	t4 = (x17<=((x18^x19)^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x23 = -1;
	static uint16_t x24 = 18234U;
	int32_t t5 = 1263599;

	t5 = (x21<=((x22^x23)^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MIN;
	int16_t x27 = 41;
	int32_t t6 = -12299;

	t6 = (x25<=((x26^x27)^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MIN;
	uint8_t x31 = UINT8_MAX;
	volatile int8_t x32 = -1;

	t7 = (x29<=((x30^x31)^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	volatile uint16_t x34 = 9U;
	uint16_t x35 = UINT16_MAX;
	volatile int16_t x36 = 5;
	int32_t t8 = 102;

	t8 = (x33<=((x34^x35)^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	static int64_t x38 = 64091056429328LL;
	uint32_t x40 = 94U;
	int32_t t9 = 2368462;

	t9 = (x37<=((x38^x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile uint32_t x42 = UINT32_MAX;
	volatile uint64_t x43 = 1731068LLU;
	volatile int64_t x44 = INT64_MIN;
	volatile int32_t t10 = 2395521;

	t10 = (x41<=((x42^x43)^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint64_t x46 = UINT64_MAX;
	volatile int32_t t11 = 113001018;

	t11 = (x45<=((x46^x47)^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	static uint32_t x50 = 4349U;
	volatile int8_t x51 = INT8_MIN;
	uint64_t x52 = 8948008708LLU;
	volatile int32_t t12 = 3262;

	t12 = (x49<=((x50^x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -7;
	uint32_t x54 = 322058U;
	static int64_t x55 = INT64_MAX;
	int64_t x56 = INT64_MAX;

	t13 = (x53<=((x54^x55)^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	int8_t x60 = 29;
	static int32_t t14 = 26923334;

	t14 = (x57<=((x58^x59)^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 90LLU;
	uint8_t x63 = 18U;
	static int8_t x64 = 13;

	t15 = (x61<=((x62^x63)^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 61;
	int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MIN;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = 6;

	t16 = (x65<=((x66^x67)^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x69 = INT16_MIN;
	int64_t x71 = 5607112LL;
	volatile int64_t x72 = INT64_MAX;
	int32_t t17 = 25567;

	t17 = (x69<=((x70^x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 2;
	static volatile int32_t x74 = INT32_MAX;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = 555486;

	t18 = (x73<=((x74^x75)^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MAX;
	volatile int32_t x79 = 61910;
	uint8_t x80 = 29U;
	int32_t t19 = -43763;

	t19 = (x77<=((x78^x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int32_t x82 = INT32_MAX;
	uint32_t x83 = 7760994U;
	uint32_t x84 = 23933U;
	volatile int32_t t20 = 136746162;

	t20 = (x81<=((x82^x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 16;
	uint32_t x86 = 3957U;
	uint16_t x87 = UINT16_MAX;
	int32_t t21 = -7095;

	t21 = (x85<=((x86^x87)^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	static int16_t x90 = INT16_MAX;
	static int64_t x91 = INT64_MIN;
	int32_t x92 = INT32_MIN;
	int32_t t22 = 40;

	t22 = (x89<=((x90^x91)^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int32_t x95 = INT32_MAX;
	volatile int32_t t23 = 5;

	t23 = (x93<=((x94^x95)^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	volatile int64_t x98 = 1430146LL;
	static volatile int8_t x99 = INT8_MIN;
	int32_t t24 = -70;

	t24 = (x97<=((x98^x99)^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = 400963548916879LL;
	static int8_t x103 = -1;
	volatile int32_t t25 = -97076681;

	t25 = (x101<=((x102^x103)^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 3214272919208812185LL;
	int16_t x106 = INT16_MIN;
	static int16_t x107 = -1;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 290;

	t26 = (x105<=((x106^x107)^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -605840375532211358LL;
	int64_t x110 = INT64_MIN;
	static int8_t x111 = -1;
	volatile uint64_t x112 = 4442928791845644LLU;
	volatile int32_t t27 = 11212;

	t27 = (x109<=((x110^x111)^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x114 = -1;
	int32_t x115 = INT32_MIN;
	uint64_t x116 = 5060LLU;
	int32_t t28 = 28187;

	t28 = (x113<=((x114^x115)^x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = -1;
	volatile int8_t x119 = INT8_MIN;
	int32_t t29 = 47;

	t29 = (x117<=((x118^x119)^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	int16_t x123 = 103;
	int64_t x124 = INT64_MAX;
	int32_t t30 = 0;

	t30 = (x121<=((x122^x123)^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = -2;
	volatile uint64_t x127 = UINT64_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 2417461;

	t31 = (x125<=((x126^x127)^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	int8_t x130 = -1;
	int16_t x131 = INT16_MIN;
	uint16_t x132 = UINT16_MAX;

	t32 = (x129<=((x130^x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x133 = INT8_MIN;
	volatile uint64_t x134 = 441187787825LLU;
	int64_t x135 = -1LL;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t33 = 124976;

	t33 = (x133<=((x134^x135)^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 2246373LLU;
	volatile uint8_t x138 = 15U;
	int64_t x139 = INT64_MIN;
	volatile int32_t t34 = -150154;

	t34 = (x137<=((x138^x139)^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	volatile uint64_t x143 = 10064LLU;
	static int32_t t35 = -111932491;

	t35 = (x141<=((x142^x143)^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x146 = INT8_MIN;
	volatile uint32_t x147 = 484U;
	static volatile int32_t x148 = -1;
	int32_t t36 = -14072;

	t36 = (x145<=((x146^x147)^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 120U;
	int8_t x150 = INT8_MAX;
	int8_t x151 = INT8_MAX;
	int32_t t37 = -19379233;

	t37 = (x149<=((x150^x151)^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 15U;
	int32_t x154 = INT32_MIN;
	int64_t x155 = 53472LL;
	static uint16_t x156 = UINT16_MAX;
	static int32_t t38 = -3045;

	t38 = (x153<=((x154^x155)^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -2978;
	static int16_t x159 = INT16_MIN;
	volatile int16_t x160 = -1;
	int32_t t39 = 88023326;

	t39 = (x157<=((x158^x159)^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 16200;
	int8_t x162 = INT8_MIN;
	int16_t x163 = -1;
	int16_t x164 = -1;

	t40 = (x161<=((x162^x163)^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 2U;
	static int32_t x166 = 2048600;
	uint32_t x167 = 16383087U;
	static volatile int32_t x168 = INT32_MIN;

	t41 = (x165<=((x166^x167)^x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x169 = UINT32_MAX;
	int64_t x170 = INT64_MAX;
	uint8_t x172 = 4U;
	volatile int32_t t42 = -27351862;

	t42 = (x169<=((x170^x171)^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = 0U;
	int32_t x175 = INT32_MIN;
	static int64_t x176 = -1LL;

	t43 = (x173<=((x174^x175)^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x178 = 10;
	uint32_t x180 = UINT32_MAX;

	t44 = (x177<=((x178^x179)^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 0U;
	volatile uint16_t x182 = UINT16_MAX;
	volatile uint16_t x183 = UINT16_MAX;
	static int8_t x184 = INT8_MIN;
	int32_t t45 = 797683;

	t45 = (x181<=((x182^x183)^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -6LL;
	uint16_t x186 = UINT16_MAX;
	int16_t x187 = -4;
	int32_t x188 = -388;
	int32_t t46 = 36;

	t46 = (x185<=((x186^x187)^x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	static int16_t x190 = -1;
	int64_t x191 = -1LL;
	int16_t x192 = INT16_MAX;
	int32_t t47 = -164193376;

	t47 = (x189<=((x190^x191)^x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	uint16_t x194 = 15U;
	int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = -64643;

	t48 = (x193<=((x194^x195)^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x197 = 20261U;
	int16_t x198 = -1;
	int32_t x199 = INT32_MIN;
	int16_t x200 = INT16_MAX;
	volatile int32_t t49 = 107820;

	t49 = (x197<=((x198^x199)^x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	uint16_t x202 = UINT16_MAX;
	uint16_t x204 = 0U;
	volatile int32_t t50 = 10459;

	t50 = (x201<=((x202^x203)^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -1;
	volatile int32_t x208 = 818757;
	static int32_t t51 = 1826;

	t51 = (x205<=((x206^x207)^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	uint8_t x210 = 0U;
	volatile int32_t t52 = -26624;

	t52 = (x209<=((x210^x211)^x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x213 = INT8_MAX;
	static int64_t x214 = 2249587677516134098LL;
	volatile int32_t x215 = INT32_MAX;
	uint16_t x216 = 1652U;
	volatile int32_t t53 = -39515;

	t53 = (x213<=((x214^x215)^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	int16_t x218 = -1;
	uint8_t x220 = 1U;
	static int32_t t54 = 5370;

	t54 = (x217<=((x218^x219)^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 511696325503087937LLU;
	static int8_t x223 = -1;
	static uint16_t x224 = 531U;
	int32_t t55 = 5978;

	t55 = (x221<=((x222^x223)^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	volatile int64_t x227 = INT64_MIN;
	uint16_t x228 = UINT16_MAX;
	int32_t t56 = 168876423;

	t56 = (x225<=((x226^x227)^x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	static int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -300586899;

	t57 = (x229<=((x230^x231)^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x234 = 1;
	uint32_t x235 = UINT32_MAX;
	int16_t x236 = -7;
	volatile int32_t t58 = -25379;

	t58 = (x233<=((x234^x235)^x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = INT8_MIN;
	uint32_t x238 = 61612773U;
	int64_t x239 = INT64_MAX;
	int32_t x240 = -299039;

	t59 = (x237<=((x238^x239)^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	int16_t x243 = INT16_MAX;
	static int32_t t60 = -788900663;

	t60 = (x241<=((x242^x243)^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = 106;
	uint8_t x247 = UINT8_MAX;
	uint8_t x248 = 46U;
	int32_t t61 = 11465;

	t61 = (x245<=((x246^x247)^x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 18860U;
	int32_t x251 = -266460;
	int32_t t62 = 45;

	t62 = (x249<=((x250^x251)^x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = UINT8_MAX;
	int32_t x254 = INT32_MAX;
	static int64_t x255 = INT64_MIN;
	int64_t x256 = INT64_MAX;

	t63 = (x253<=((x254^x255)^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MAX;
	volatile int32_t x259 = -7661;
	static volatile int64_t x260 = INT64_MIN;

	t64 = (x257<=((x258^x259)^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 3493U;
	int64_t x262 = INT64_MAX;
	int32_t x263 = INT32_MIN;
	int32_t x264 = INT32_MAX;
	volatile int32_t t65 = -3852;

	t65 = (x261<=((x262^x263)^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = UINT8_MAX;
	int64_t x266 = -1LL;
	volatile int8_t x268 = -1;
	int32_t t66 = -11;

	t66 = (x265<=((x266^x267)^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MIN;
	int8_t x270 = 0;
	static int32_t x271 = INT32_MIN;
	uint64_t x272 = 50LLU;
	volatile int32_t t67 = -133688865;

	t67 = (x269<=((x270^x271)^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	volatile uint16_t x275 = UINT16_MAX;
	int8_t x276 = -13;
	volatile int32_t t68 = 31;

	t68 = (x273<=((x274^x275)^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = 61U;
	int16_t x280 = INT16_MIN;
	int32_t t69 = -200132145;

	t69 = (x277<=((x278^x279)^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MIN;
	int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	volatile int32_t t70 = 487;

	t70 = (x281<=((x282^x283)^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	int64_t x286 = -1LL;
	volatile uint32_t x288 = UINT32_MAX;
	volatile int32_t t71 = -32318;

	t71 = (x285<=((x286^x287)^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x289 = -1;
	int32_t x290 = -12607;
	static uint64_t x291 = 6LLU;
	volatile int16_t x292 = -1;
	volatile int32_t t72 = -14421838;

	t72 = (x289<=((x290^x291)^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	static volatile uint16_t x294 = 202U;
	int16_t x295 = INT16_MIN;
	static int32_t x296 = INT32_MIN;

	t73 = (x293<=((x294^x295)^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x300 = INT32_MAX;

	t74 = (x297<=((x298^x299)^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	int16_t x302 = 7;
	uint16_t x303 = 2U;
	int16_t x304 = 11;
	volatile int32_t t75 = -102593;

	t75 = (x301<=((x302^x303)^x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MIN;
	int16_t x306 = -1;
	uint64_t x307 = 3983873801LLU;

	t76 = (x305<=((x306^x307)^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	uint8_t x310 = 0U;
	int64_t x311 = 1LL;
	int8_t x312 = INT8_MAX;
	volatile int32_t t77 = -14;

	t77 = (x309<=((x310^x311)^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x315 = -1;
	static uint8_t x316 = 20U;

	t78 = (x313<=((x314^x315)^x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x318 = -4;
	int16_t x319 = INT16_MIN;

	t79 = (x317<=((x318^x319)^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = INT8_MIN;
	static int8_t x324 = INT8_MAX;
	static int32_t t80 = -595;

	t80 = (x321<=((x322^x323)^x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	int8_t x326 = INT8_MAX;
	uint64_t x327 = 78968584737099766LLU;
	static uint64_t x328 = UINT64_MAX;

	t81 = (x325<=((x326^x327)^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 4U;
	int16_t x330 = -5770;
	int64_t x331 = -7587469549351LL;
	static int64_t x332 = INT64_MIN;
	static volatile int32_t t82 = 3625;

	t82 = (x329<=((x330^x331)^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	int64_t x334 = INT64_MIN;
	int8_t x335 = -6;
	int16_t x336 = 0;
	int32_t t83 = 10775211;

	t83 = (x333<=((x334^x335)^x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	uint8_t x339 = 64U;

	t84 = (x337<=((x338^x339)^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = -4;
	int8_t x343 = INT8_MIN;
	volatile int32_t t85 = -14869131;

	t85 = (x341<=((x342^x343)^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	uint16_t x347 = UINT16_MAX;
	volatile int16_t x348 = INT16_MAX;
	int32_t t86 = 7;

	t86 = (x345<=((x346^x347)^x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = 7095LL;
	volatile int32_t x351 = INT32_MIN;
	volatile int32_t t87 = -180800;

	t87 = (x349<=((x350^x351)^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 38;

	t88 = (x353<=((x354^x355)^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 94;
	volatile int16_t x358 = 1;
	static volatile int16_t x359 = -1;
	uint64_t x360 = 120306962687287LLU;
	int32_t t89 = -22577734;

	t89 = (x357<=((x358^x359)^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 7237710LL;
	int8_t x362 = -1;
	int64_t x363 = -1LL;
	int32_t t90 = -54;

	t90 = (x361<=((x362^x363)^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = INT32_MAX;
	int8_t x368 = INT8_MAX;

	t91 = (x365<=((x366^x367)^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = INT16_MIN;
	uint16_t x370 = UINT16_MAX;
	static int8_t x371 = -1;
	static uint64_t x372 = 13519054667LLU;

	t92 = (x369<=((x370^x371)^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = 61;
	volatile int32_t x375 = 126529;
	static volatile uint64_t x376 = 84677999LLU;
	int32_t t93 = 102;

	t93 = (x373<=((x374^x375)^x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 1U;
	int32_t x378 = INT32_MAX;
	int64_t x379 = -184876205490LL;
	int8_t x380 = 49;
	int32_t t94 = -418;

	t94 = (x377<=((x378^x379)^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x383 = -1;
	volatile int32_t t95 = -54;

	t95 = (x381<=((x382^x383)^x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int32_t x387 = -1;
	uint8_t x388 = UINT8_MAX;
	static volatile int32_t t96 = 79271552;

	t96 = (x385<=((x386^x387)^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MIN;
	int8_t x391 = -1;
	int64_t x392 = -153021LL;
	volatile int32_t t97 = 5;

	t97 = (x389<=((x390^x391)^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x393 = 343U;
	int32_t x395 = -1;
	int16_t x396 = 0;
	int32_t t98 = 558893;

	t98 = (x393<=((x394^x395)^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MIN;
	uint64_t x398 = 16LLU;
	int16_t x399 = -1;
	static uint16_t x400 = 0U;
	volatile int32_t t99 = 70275432;

	t99 = (x397<=((x398^x399)^x400));

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

