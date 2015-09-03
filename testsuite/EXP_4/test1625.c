#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = UINT16_MAX;
uint64_t t1 = 152962317070LLU;
static uint8_t x11 = UINT8_MAX;
int16_t x14 = -202;
int8_t x18 = INT8_MAX;
int16_t x20 = -8672;
uint8_t x24 = 5U;
volatile uint64_t t5 = 931711260LLU;
volatile int32_t t6 = -1891;
int64_t x32 = INT64_MAX;
int32_t t7 = 14;
uint64_t x34 = 4138662413734010870LLU;
int32_t t10 = -14;
int64_t x45 = INT64_MIN;
uint16_t x52 = UINT16_MAX;
static int32_t x64 = INT32_MIN;
int8_t x69 = 1;
int64_t x74 = INT64_MIN;
int8_t x75 = -1;
uint64_t t19 = UINT64_MAX;
int16_t x86 = INT16_MIN;
int64_t x95 = INT64_MAX;
int8_t x105 = -1;
int32_t x108 = INT32_MAX;
uint32_t x109 = 1U;
int32_t x111 = INT32_MAX;
static uint8_t x115 = 11U;
uint64_t x125 = UINT64_MAX;
int32_t x127 = -4;
volatile uint64_t t31 = UINT64_MAX;
int32_t x131 = INT32_MIN;
int32_t t33 = INT32_MAX;
volatile int32_t t35 = 73;
uint64_t x148 = UINT64_MAX;
int32_t t36 = -2;
volatile int8_t x156 = -3;
int32_t x157 = INT32_MAX;
int16_t x158 = 862;
int32_t t40 = 6001408;
int32_t x167 = INT32_MAX;
volatile int32_t t43 = -38088384;
int64_t x179 = INT64_MIN;
static volatile int64_t x182 = 38LL;
int8_t x188 = INT8_MIN;
static volatile uint32_t t47 = 210649309U;
int64_t x195 = INT64_MIN;
int16_t x199 = INT16_MIN;
uint64_t x201 = UINT64_MAX;
int32_t x203 = INT32_MIN;
static uint16_t x205 = UINT16_MAX;
int16_t x206 = 1505;
static volatile int64_t x214 = -1LL;
int64_t x216 = -1LL;
static uint64_t x221 = 4616569415287383905LLU;
uint64_t x225 = UINT64_MAX;
uint32_t x228 = 14122U;
static uint64_t x234 = 24LLU;
int64_t x243 = -4645LL;
int8_t x246 = INT8_MAX;
int16_t x248 = 228;
int32_t t62 = INT32_MIN;
int64_t x254 = -1007545642396370443LL;
static uint64_t x257 = 62LLU;
int16_t x260 = 138;
volatile uint32_t x265 = UINT32_MAX;
int64_t x278 = INT64_MIN;
uint32_t x281 = 283U;
volatile int8_t x287 = INT8_MAX;
int64_t x290 = INT64_MIN;
int8_t x293 = 3;
int64_t x299 = INT64_MIN;
uint64_t x306 = 230781621701LLU;
uint16_t x307 = UINT16_MAX;
uint64_t t76 = 50438345999530LLU;
uint8_t x311 = 25U;
volatile int32_t t78 = -13;
int32_t x319 = INT32_MIN;
volatile int64_t t79 = INT64_MAX;
int32_t x325 = INT32_MIN;
int64_t x328 = -1LL;
volatile int64_t x329 = -11855929116555LL;
int16_t x334 = INT16_MIN;
int8_t x335 = INT8_MIN;
int64_t x344 = -1LL;
static uint32_t x352 = 4418130U;
static int32_t t87 = -145;
uint8_t x359 = 0U;
uint32_t x363 = UINT32_MAX;
int64_t t90 = INT64_MIN;
int32_t x365 = -1;
static int16_t x368 = 9;
uint64_t x369 = UINT64_MAX;
static uint32_t x371 = 3U;
static uint64_t t92 = UINT64_MAX;
uint16_t x375 = 63U;
static volatile uint32_t t93 = UINT32_MAX;
int64_t x377 = INT64_MAX;
static int16_t x380 = INT16_MIN;
int8_t x382 = -1;
int16_t x388 = 59;
volatile uint32_t x393 = UINT32_MAX;
static volatile uint32_t t98 = UINT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint16_t x2 = 510U;
	int32_t x3 = 132278172;
	static int16_t x4 = -1;
	volatile int32_t t0 = -498403826;

	t0 = (x1^(x2==(x3<=x4)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 47LLU;
	volatile uint32_t x6 = 76U;
	int64_t x7 = INT64_MAX;

	t1 = (x5^(x6==(x7<=x8)));

	if (t1 != 47LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -2927LL;
	int64_t x10 = INT64_MIN;
	volatile uint8_t x12 = 98U;
	volatile int64_t t2 = -2LL;

	t2 = (x9^(x10==(x11<=x12)));

	if (t2 != -2927LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = UINT8_MAX;
	static int32_t x15 = -1;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 95;

	t3 = (x13^(x14==(x15<=x16)));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint8_t x19 = UINT8_MAX;
	int32_t t4 = 0;

	t4 = (x17^(x18==(x19<=x20)));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 0LLU;
	uint16_t x22 = 76U;
	uint8_t x23 = 1U;

	t5 = (x21^(x22==(x23<=x24)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int64_t x26 = 3LL;
	int64_t x27 = 245536367563127LL;
	volatile int64_t x28 = INT64_MIN;

	t6 = (x25^(x26==(x27<=x28)));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 30U;
	int64_t x30 = INT64_MAX;
	static int32_t x31 = -1;

	t7 = (x29^(x30==(x31<=x32)));

	if (t7 != 30) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	uint64_t x35 = UINT64_MAX;
	int32_t x36 = -158607913;
	static int32_t t8 = INT32_MIN;

	t8 = (x33^(x34==(x35<=x36)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 318U;
	int32_t x38 = 38137;
	static int32_t x39 = INT32_MIN;
	uint32_t x40 = UINT32_MAX;
	int32_t t9 = 231;

	t9 = (x37^(x38==(x39<=x40)));

	if (t9 != 318) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint64_t x42 = 3115500LLU;
	int64_t x43 = INT64_MIN;
	volatile uint16_t x44 = 21589U;

	t10 = (x41^(x42==(x43<=x44)));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x46 = 1LLU;
	volatile int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MIN;
	int64_t t11 = 2LL;

	t11 = (x45^(x46==(x47<=x48)));

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MAX;
	int8_t x50 = -1;
	int64_t x51 = -1LL;
	static volatile int32_t t12 = INT32_MAX;

	t12 = (x49^(x50==(x51<=x52)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -27880337LL;
	int32_t x54 = INT32_MAX;
	volatile int64_t x55 = INT64_MAX;
	int32_t x56 = -1;
	int64_t t13 = -128608412796400LL;

	t13 = (x53^(x54==(x55<=x56)));

	if (t13 != -27880337LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	int32_t x58 = 36;
	int64_t x59 = INT64_MIN;
	volatile uint64_t x60 = UINT64_MAX;
	int32_t t14 = 909;

	t14 = (x57^(x58==(x59<=x60)));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint8_t x62 = UINT8_MAX;
	int16_t x63 = INT16_MIN;
	volatile int32_t t15 = -174649863;

	t15 = (x61^(x62==(x63<=x64)));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = -14174871868550949LL;
	static uint8_t x67 = UINT8_MAX;
	volatile int32_t x68 = INT32_MIN;
	static int32_t t16 = 7106295;

	t16 = (x65^(x66==(x67<=x68)));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x70 = UINT8_MAX;
	int16_t x71 = -68;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 121474899;

	t17 = (x69^(x70==(x71<=x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static int32_t x76 = INT32_MIN;
	int32_t t18 = INT32_MIN;

	t18 = (x73^(x74==(x75<=x76)));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	static int16_t x78 = -377;
	uint64_t x79 = UINT64_MAX;
	uint16_t x80 = 5U;

	t19 = (x77^(x78==(x79<=x80)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int16_t x82 = 1;
	int16_t x83 = INT16_MIN;
	volatile uint16_t x84 = 1217U;
	int32_t t20 = -21656;

	t20 = (x81^(x82==(x83<=x84)));

	if (t20 != 2147483646) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	uint8_t x87 = 26U;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -7572;

	t21 = (x85^(x86==(x87<=x88)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	uint8_t x90 = 3U;
	static volatile int8_t x91 = INT8_MAX;
	uint64_t x92 = 196208LLU;
	int32_t t22 = 22;

	t22 = (x89^(x90==(x91<=x92)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint8_t x94 = 12U;
	int16_t x96 = INT16_MIN;
	int32_t t23 = 1462;

	t23 = (x93^(x94==(x95<=x96)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	int8_t x98 = INT8_MAX;
	int8_t x99 = INT8_MIN;
	int16_t x100 = INT16_MIN;
	static int32_t t24 = 29838;

	t24 = (x97^(x98==(x99<=x100)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int32_t x102 = -1;
	int64_t x103 = INT64_MIN;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -1;

	t25 = (x101^(x102==(x103<=x104)));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = UINT8_MAX;
	uint64_t x107 = 2980742795259622401LLU;
	int32_t t26 = 871354502;

	t26 = (x105^(x106==(x107<=x108)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 23U;
	uint32_t x112 = 49586U;
	uint32_t t27 = 3373U;

	t27 = (x109^(x110==(x111<=x112)));

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 5LLU;
	static volatile int32_t x114 = 62922;
	static int8_t x116 = INT8_MAX;
	volatile uint64_t t28 = 156042LLU;

	t28 = (x113^(x114==(x115<=x116)));

	if (t28 != 5LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int16_t x118 = -1;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = 205U;
	volatile int64_t t29 = INT64_MAX;

	t29 = (x117^(x118==(x119<=x120)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	static uint64_t x122 = 1563612298LLU;
	static int8_t x123 = 5;
	int64_t x124 = 347466709923LL;
	int32_t t30 = 377;

	t30 = (x121^(x122==(x123<=x124)));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x126 = 15U;
	volatile int16_t x128 = INT16_MIN;

	t31 = (x125^(x126==(x127<=x128)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MAX;
	static int64_t x130 = 2078642193LL;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -11;

	t32 = (x129^(x130==(x131<=x132)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	static int64_t x134 = INT64_MAX;
	int16_t x135 = -1857;
	volatile int8_t x136 = INT8_MIN;

	t33 = (x133^(x134==(x135<=x136)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int32_t x138 = 21;
	static int16_t x139 = 4489;
	uint8_t x140 = 14U;
	static volatile int32_t t34 = INT32_MIN;

	t34 = (x137^(x138==(x139<=x140)));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	static uint64_t x144 = UINT64_MAX;

	t35 = (x141^(x142==(x143<=x144)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	static int64_t x146 = INT64_MIN;
	int64_t x147 = -136905237LL;

	t36 = (x145^(x146==(x147<=x148)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MAX;
	int64_t x150 = INT64_MIN;
	uint64_t x151 = 666032897928LLU;
	volatile uint8_t x152 = UINT8_MAX;
	int32_t t37 = INT32_MAX;

	t37 = (x149^(x150==(x151<=x152)));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	uint64_t x154 = 1267592865985619547LLU;
	static volatile int8_t x155 = 0;
	volatile int64_t t38 = INT64_MIN;

	t38 = (x153^(x154==(x155<=x156)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MAX;
	int32_t t39 = INT32_MAX;

	t39 = (x157^(x158==(x159<=x160)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int64_t x162 = -1190649431LL;
	int64_t x163 = INT64_MAX;
	int16_t x164 = 74;

	t40 = (x161^(x162==(x163<=x164)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	uint64_t x166 = UINT64_MAX;
	volatile uint64_t x168 = 512586063279913LLU;
	volatile int32_t t41 = 1038344;

	t41 = (x165^(x166==(x167<=x168)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	int32_t x170 = INT32_MIN;
	int64_t x171 = 4030116055141717022LL;
	int64_t x172 = INT64_MAX;
	volatile int32_t t42 = -853796;

	t42 = (x169^(x170==(x171<=x172)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 52U;
	int8_t x174 = INT8_MAX;
	uint32_t x175 = 60376566U;
	int16_t x176 = INT16_MIN;

	t43 = (x173^(x174==(x175<=x176)));

	if (t43 != 52) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -9821;
	static volatile uint64_t x178 = UINT64_MAX;
	static int32_t x180 = INT32_MIN;
	int32_t t44 = 6649765;

	t44 = (x177^(x178==(x179<=x180)));

	if (t44 != -9821) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MAX;
	static volatile uint16_t x183 = UINT16_MAX;
	uint32_t x184 = 84U;
	int32_t t45 = -5887;

	t45 = (x181^(x182==(x183<=x184)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MIN;
	int64_t x186 = -2326247669LL;
	uint8_t x187 = 41U;
	volatile int32_t t46 = -14;

	t46 = (x185^(x186==(x187<=x188)));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 6210216U;
	volatile int32_t x190 = -253134329;
	volatile int64_t x191 = -294LL;
	volatile int16_t x192 = 114;

	t47 = (x189^(x190==(x191<=x192)));

	if (t47 != 6210216U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x193 = -1LL;
	int16_t x194 = INT16_MIN;
	int32_t x196 = INT32_MIN;
	volatile int64_t t48 = -5LL;

	t48 = (x193^(x194==(x195<=x196)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = -686;
	int64_t x198 = INT64_MIN;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t49 = -20035;

	t49 = (x197^(x198==(x199<=x200)));

	if (t49 != -686) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = -1;
	static int64_t x204 = -1LL;
	static uint64_t t50 = UINT64_MAX;

	t50 = (x201^(x202==(x203<=x204)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x207 = 1U;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = 382913;

	t51 = (x205^(x206==(x207<=x208)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	uint8_t x210 = 2U;
	uint64_t x211 = 366383144LLU;
	int8_t x212 = INT8_MIN;
	int32_t t52 = 30053302;

	t52 = (x209^(x210==(x211<=x212)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -100;
	int8_t x215 = 0;
	volatile int32_t t53 = -675550;

	t53 = (x213^(x214==(x215<=x216)));

	if (t53 != -100) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	int32_t x218 = 1081;
	int8_t x219 = INT8_MAX;
	int16_t x220 = INT16_MAX;
	volatile int32_t t54 = 3905;

	t54 = (x217^(x218==(x219<=x220)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MIN;
	volatile int32_t x223 = -10;
	int16_t x224 = INT16_MAX;
	uint64_t t55 = 225765079598LLU;

	t55 = (x221^(x222==(x223<=x224)));

	if (t55 != 4616569415287383905LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MAX;
	static uint64_t t56 = UINT64_MAX;

	t56 = (x225^(x226==(x227<=x228)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	int16_t x230 = -1;
	int32_t x231 = 1;
	static uint16_t x232 = 126U;
	volatile int32_t t57 = 3616;

	t57 = (x229^(x230==(x231<=x232)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x233 = -1LL;
	int32_t x235 = INT32_MIN;
	static int32_t x236 = -1;
	volatile int64_t t58 = -339972466LL;

	t58 = (x233^(x234==(x235<=x236)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 7;
	uint8_t x238 = 69U;
	static int16_t x239 = -1552;
	int32_t x240 = 50151125;
	int32_t t59 = 31964830;

	t59 = (x237^(x238==(x239<=x240)));

	if (t59 != 7) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x241 = 652U;
	int64_t x242 = -803246LL;
	uint16_t x244 = 7824U;
	volatile int32_t t60 = -7078007;

	t60 = (x241^(x242==(x243<=x244)));

	if (t60 != 652) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -761;
	static int64_t x247 = -1LL;
	int32_t t61 = -30686643;

	t61 = (x245^(x246==(x247<=x248)));

	if (t61 != -761) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	int8_t x250 = -1;
	static volatile int16_t x251 = -1;
	int16_t x252 = -1;

	t62 = (x249^(x250==(x251<=x252)));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	int64_t x255 = -7364491317LL;
	uint8_t x256 = 18U;
	volatile int64_t t63 = INT64_MIN;

	t63 = (x253^(x254==(x255<=x256)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MAX;
	int8_t x259 = 0;
	uint64_t t64 = 57416LLU;

	t64 = (x257^(x258==(x259<=x260)));

	if (t64 != 62LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = 49U;
	int8_t x262 = 62;
	int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;
	uint32_t t65 = 16858929U;

	t65 = (x261^(x262==(x263<=x264)));

	if (t65 != 49U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = 1U;
	volatile uint8_t x267 = 4U;
	int64_t x268 = INT64_MIN;
	uint32_t t66 = UINT32_MAX;

	t66 = (x265^(x266==(x267<=x268)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = UINT8_MAX;
	uint32_t x272 = 0U;
	static volatile uint64_t t67 = UINT64_MAX;

	t67 = (x269^(x270==(x271<=x272)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	uint64_t x274 = UINT64_MAX;
	volatile int8_t x275 = 0;
	int16_t x276 = INT16_MIN;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x273^(x274==(x275<=x276)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	static int8_t x279 = 37;
	volatile int8_t x280 = -1;
	volatile int32_t t69 = INT32_MIN;

	t69 = (x277^(x278==(x279<=x280)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x282 = -1LL;
	static int64_t x283 = INT64_MIN;
	int16_t x284 = 546;
	volatile uint32_t t70 = 1U;

	t70 = (x281^(x282==(x283<=x284)));

	if (t70 != 283U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x285 = 8786LLU;
	uint64_t x286 = 61913LLU;
	int64_t x288 = INT64_MIN;
	static volatile uint64_t t71 = 6671189LLU;

	t71 = (x285^(x286==(x287<=x288)));

	if (t71 != 8786LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	int16_t x291 = INT16_MIN;
	uint32_t x292 = 2U;
	volatile int32_t t72 = -3584122;

	t72 = (x289^(x290==(x291<=x292)));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = INT16_MIN;
	int64_t x295 = -94353LL;
	uint64_t x296 = 98LLU;
	static int32_t t73 = 1;

	t73 = (x293^(x294==(x295<=x296)));

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	static int16_t x298 = 11;
	int16_t x300 = -3846;
	static int32_t t74 = -13;

	t74 = (x297^(x298==(x299<=x300)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = 1;
	int16_t x302 = -1;
	static int16_t x303 = INT16_MIN;
	int8_t x304 = -1;
	volatile int32_t t75 = -15973513;

	t75 = (x301^(x302==(x303<=x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 976009702LLU;
	uint32_t x308 = 1167U;

	t76 = (x305^(x306==(x307<=x308)));

	if (t76 != 976009702LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = -1;
	uint16_t x310 = 14U;
	static uint64_t x312 = 5674LLU;
	int32_t t77 = 1;

	t77 = (x309^(x310==(x311<=x312)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MAX;
	volatile uint64_t x314 = 3495284336382749398LLU;
	int16_t x315 = 82;
	int64_t x316 = INT64_MIN;

	t78 = (x313^(x314==(x315<=x316)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	static volatile int8_t x318 = INT8_MIN;
	int32_t x320 = INT32_MAX;

	t79 = (x317^(x318==(x319<=x320)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	static uint16_t x322 = 14796U;
	uint64_t x323 = UINT64_MAX;
	uint64_t x324 = 1LLU;
	volatile int32_t t80 = 31576;

	t80 = (x321^(x322==(x323<=x324)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = 0U;
	static int32_t x327 = INT32_MAX;
	volatile int32_t t81 = -1862540;

	t81 = (x325^(x326==(x327<=x328)));

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = -1LL;
	uint64_t x331 = 83914989095283LLU;
	static uint16_t x332 = 92U;
	static volatile int64_t t82 = -63764260995235971LL;

	t82 = (x329^(x330==(x331<=x332)));

	if (t82 != -11855929116555LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	int32_t x336 = 116223;
	static int32_t t83 = 5744364;

	t83 = (x333^(x334==(x335<=x336)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = 16;
	volatile int16_t x338 = INT16_MAX;
	int8_t x339 = INT8_MAX;
	uint64_t x340 = 53238742997474973LLU;
	int32_t t84 = 1;

	t84 = (x337^(x338==(x339<=x340)));

	if (t84 != 16) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -33;
	int8_t x342 = INT8_MIN;
	static int8_t x343 = INT8_MIN;
	volatile int32_t t85 = -61599;

	t85 = (x341^(x342==(x343<=x344)));

	if (t85 != -33) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = 3;
	int8_t x346 = INT8_MAX;
	volatile int8_t x347 = INT8_MAX;
	static int32_t x348 = -61845000;
	volatile int32_t t86 = 1;

	t86 = (x345^(x346==(x347<=x348)));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = -1LL;
	uint8_t x351 = 46U;

	t87 = (x349^(x350==(x351<=x352)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -270587;
	uint8_t x354 = 8U;
	int16_t x355 = INT16_MAX;
	int64_t x356 = INT64_MIN;
	static volatile int32_t t88 = -372;

	t88 = (x353^(x354==(x355<=x356)));

	if (t88 != -270587) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x357 = 62U;
	static volatile int32_t x358 = -478;
	static volatile int64_t x360 = INT64_MIN;
	volatile uint32_t t89 = 384U;

	t89 = (x357^(x358==(x359<=x360)));

	if (t89 != 62U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MIN;
	static int16_t x362 = INT16_MIN;
	static int16_t x364 = INT16_MIN;

	t90 = (x361^(x362==(x363<=x364)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x366 = UINT16_MAX;
	volatile uint8_t x367 = UINT8_MAX;
	int32_t t91 = -4166;

	t91 = (x365^(x366==(x367<=x368)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x370 = 24U;
	volatile uint8_t x372 = UINT8_MAX;

	t92 = (x369^(x370==(x371<=x372)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int8_t x374 = 1;
	int64_t x376 = INT64_MIN;

	t93 = (x373^(x374==(x375<=x376)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = -475;
	static int64_t x379 = -1LL;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x377^(x378==(x379<=x380)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	uint64_t x383 = UINT64_MAX;
	volatile uint32_t x384 = 213598U;
	int32_t t95 = 0;

	t95 = (x381^(x382==(x383<=x384)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 3755;
	volatile uint8_t x386 = 4U;
	int8_t x387 = INT8_MIN;
	int32_t t96 = -6;

	t96 = (x385^(x386==(x387<=x388)));

	if (t96 != 3755) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MAX;
	int8_t x390 = -1;
	volatile uint32_t x391 = 2056277U;
	volatile int64_t x392 = -12LL;
	int64_t t97 = INT64_MAX;

	t97 = (x389^(x390==(x391<=x392)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MAX;
	uint8_t x395 = UINT8_MAX;
	int32_t x396 = -1761029;

	t98 = (x393^(x394==(x395<=x396)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = -1;
	int8_t x399 = INT8_MIN;
	static int16_t x400 = INT16_MAX;
	int32_t t99 = 1248651;

	t99 = (x397^(x398==(x399<=x400)));

	if (t99 != -128) { NG(); } else { ; }
	
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

