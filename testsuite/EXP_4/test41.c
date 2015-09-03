#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x4 = 48U;
static int32_t x5 = INT32_MAX;
volatile uint64_t t1 = 6460818310607LLU;
uint32_t x9 = 1U;
volatile uint32_t x14 = 259U;
int8_t x19 = INT8_MAX;
int16_t x20 = INT16_MAX;
static int16_t x21 = -128;
volatile int32_t x23 = INT32_MIN;
uint8_t x28 = UINT8_MAX;
int64_t x30 = -1LL;
static volatile uint8_t x34 = 9U;
volatile int16_t x45 = INT16_MAX;
static uint32_t x46 = 4657812U;
int32_t x50 = INT32_MIN;
volatile uint64_t x52 = 459972510694561718LLU;
static uint64_t t11 = 212836368LLU;
volatile int32_t x57 = -18443;
uint16_t x58 = 2U;
int8_t x74 = INT8_MIN;
int64_t t18 = 3438158088090839LL;
uint8_t x93 = 19U;
uint8_t x97 = 1U;
uint16_t x99 = 5469U;
static int8_t x100 = -1;
uint32_t x102 = 154U;
uint32_t t22 = 352946U;
int8_t x111 = INT8_MIN;
int32_t x118 = INT32_MIN;
int64_t x122 = INT64_MIN;
int16_t x124 = -163;
int16_t x130 = -85;
static volatile int64_t x133 = INT64_MIN;
static volatile int64_t x137 = -162006440439LL;
volatile uint32_t t32 = 7296U;
volatile uint64_t x145 = UINT64_MAX;
volatile uint64_t t33 = UINT64_MAX;
uint16_t x152 = UINT16_MAX;
int16_t x159 = -1;
int32_t x160 = 11;
int16_t x162 = INT16_MAX;
uint16_t x166 = 0U;
uint64_t t38 = UINT64_MAX;
uint64_t x174 = 640726053304872049LLU;
static uint32_t x183 = 1099567U;
static volatile uint32_t t41 = 1685034814U;
uint32_t x185 = UINT32_MAX;
int8_t x196 = -1;
volatile uint8_t x198 = 99U;
int64_t x201 = INT64_MIN;
static int64_t x204 = 202LL;
uint64_t t47 = 2811268LLU;
static int16_t x217 = 13;
volatile int64_t x218 = 2972694191747224492LL;
uint16_t x221 = 15026U;
static volatile int64_t t53 = -10446326368468LL;
uint8_t x233 = UINT8_MAX;
int16_t x236 = -39;
int64_t x237 = INT64_MIN;
uint32_t x253 = UINT32_MAX;
int16_t x256 = INT16_MAX;
volatile int8_t x259 = INT8_MIN;
uint64_t x261 = UINT64_MAX;
static int16_t x265 = INT16_MAX;
int32_t x266 = INT32_MIN;
static uint32_t x268 = UINT32_MAX;
volatile uint64_t x282 = 305587LLU;
volatile uint16_t x285 = UINT16_MAX;
volatile int8_t x287 = INT8_MAX;
static uint16_t x293 = 781U;
int16_t x307 = INT16_MIN;
int64_t x312 = -1319691LL;
volatile int32_t x313 = INT32_MIN;
static int64_t x318 = -1LL;
int64_t x319 = -1LL;
int32_t x321 = -6960196;
int8_t x362 = 3;
volatile uint64_t t79 = UINT64_MAX;
volatile int64_t x378 = INT64_MIN;
int32_t x379 = INT32_MAX;
uint32_t x385 = UINT32_MAX;
static int32_t x388 = -1;
uint64_t x390 = UINT64_MAX;
volatile int16_t x391 = -1;
volatile uint64_t t83 = 341046550499159340LLU;
volatile int16_t x401 = -1;
static int8_t x403 = INT8_MIN;
int32_t x410 = 60728633;
uint16_t x417 = 3441U;
static volatile int8_t x418 = -8;
int8_t x419 = INT8_MIN;
uint64_t t90 = 1821LLU;
volatile uint64_t t94 = 3400LLU;
int8_t x446 = INT8_MAX;
int64_t x447 = INT64_MIN;
uint8_t x454 = 13U;
int32_t x458 = 478280;
volatile uint32_t t98 = 4U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x2 = 15U;
	int8_t x3 = -2;
	static volatile int64_t t0 = INT64_MIN;

	t0 = (x1-(x2/(x3+x4)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x6 = -5;
	volatile uint64_t x7 = UINT64_MAX;
	int16_t x8 = 88;

	t1 = (x5-(x6/(x7+x8)));

	if (t1 != 18234712534779913981LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 10U;
	uint16_t x11 = UINT16_MAX;
	uint64_t x12 = 3450914430924899030LLU;
	uint64_t t2 = 48885602LLU;

	t2 = (x9-(x10/(x11+x12)));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	static int32_t x15 = INT32_MIN;
	int8_t x16 = 29;
	static volatile uint32_t t3 = 213U;

	t3 = (x13-(x14/(x15+x16)));

	if (t3 != 32767U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	int32_t x18 = INT32_MAX;
	volatile int32_t t4 = 1;

	t4 = (x17-(x18/(x19+x20)));

	if (t4 != -65285) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 12925U;
	uint16_t x24 = 116U;
	int32_t t5 = 2;

	t5 = (x21-(x22/(x23+x24)));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MAX;
	static int64_t x27 = 5797465LL;
	volatile int64_t t6 = -47203432086LL;

	t6 = (x25-(x26/(x27+x28)));

	if (t6 != -498LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 4U;
	volatile int16_t x31 = INT16_MAX;
	volatile int8_t x32 = 1;
	static volatile int64_t t7 = 235711LL;

	t7 = (x29-(x30/(x31+x32)));

	if (t7 != 4LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile int64_t x35 = INT64_MIN;
	int64_t x36 = INT64_MAX;
	static volatile int64_t t8 = -35470962784125LL;

	t8 = (x33-(x34/(x35+x36)));

	if (t8 != 8LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x47 = 661LL;
	static volatile int64_t x48 = INT64_MIN;
	int64_t t9 = -967109336552604659LL;

	t9 = (x45-(x46/(x47+x48)));

	if (t9 != 32767LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = INT16_MAX;
	uint32_t x51 = 6862U;
	uint64_t t10 = 15427736108LLU;

	t10 = (x49-(x50/(x51+x52)));

	if (t10 != 32727LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x53 = UINT16_MAX;
	static uint64_t x54 = UINT64_MAX;
	static int64_t x55 = INT64_MIN;
	int16_t x56 = INT16_MAX;

	t11 = (x53-(x54/(x55+x56)));

	if (t11 != 65534LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x59 = INT8_MAX;
	static uint32_t x60 = UINT32_MAX;
	volatile uint32_t t12 = 1597642178U;

	t12 = (x57-(x58/(x59+x60)));

	if (t12 != 4294948853U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -162734603LL;
	uint16_t x62 = 18868U;
	int64_t x63 = INT64_MIN;
	int64_t x64 = 14409LL;
	volatile int64_t t13 = 6LL;

	t13 = (x61-(x62/(x63+x64)));

	if (t13 != -162734603LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 2296162LLU;
	int8_t x66 = 0;
	int64_t x67 = INT64_MIN;
	volatile uint32_t x68 = UINT32_MAX;
	uint64_t t14 = 19247LLU;

	t14 = (x65-(x66/(x67+x68)));

	if (t14 != 2296162LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x69 = 110U;
	static uint32_t x70 = 899U;
	int16_t x71 = INT16_MIN;
	static volatile int8_t x72 = -14;
	uint32_t t15 = 118U;

	t15 = (x69-(x70/(x71+x72)));

	if (t15 != 110U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 31U;
	static volatile uint64_t x75 = 1034660LLU;
	uint32_t x76 = 58U;
	static uint64_t t16 = 572LLU;

	t16 = (x73-(x74/(x75+x76)));

	if (t16 != 18446726245910988455LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x77 = 210669518U;
	int16_t x78 = INT16_MIN;
	uint64_t x79 = UINT64_MAX;
	int32_t x80 = INT32_MIN;
	static volatile uint64_t t17 = 29578642947LLU;

	t17 = (x77-(x78/(x79+x80)));

	if (t17 != 210669517LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x81 = -1LL;
	int8_t x82 = 4;
	volatile uint32_t x83 = 2537U;
	int64_t x84 = 11305587449987858LL;

	t18 = (x81-(x82/(x83+x84)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = -4532949;
	static volatile uint8_t x91 = UINT8_MAX;
	uint8_t x92 = UINT8_MAX;
	int64_t t19 = -32LL;

	t19 = (x89-(x90/(x91+x92)));

	if (t19 != -9223372036854766920LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x94 = INT8_MAX;
	int32_t x95 = INT32_MIN;
	int8_t x96 = INT8_MAX;
	int32_t t20 = 826791072;

	t20 = (x93-(x94/(x95+x96)));

	if (t20 != 19) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x98 = -42;
	volatile int32_t t21 = 1;

	t21 = (x97-(x98/(x99+x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = 25U;
	uint16_t x103 = 111U;
	static int16_t x104 = INT16_MIN;

	t22 = (x101-(x102/(x103+x104)));

	if (t22 != 25U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = 30349;
	int8_t x106 = INT8_MAX;
	int16_t x107 = INT16_MIN;
	int16_t x108 = -1007;
	volatile int32_t t23 = 839;

	t23 = (x105-(x106/(x107+x108)));

	if (t23 != 30349) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -60953977;
	int64_t x110 = INT64_MIN;
	uint16_t x112 = 1526U;
	volatile int64_t t24 = -356165LL;

	t24 = (x109-(x110/(x111+x112)));

	if (t24 != 6597547891016535LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = 47532596;
	static int16_t x114 = -54;
	int16_t x115 = INT16_MIN;
	uint64_t x116 = 105120390275LLU;
	volatile uint64_t t25 = 11704954329LLU;

	t25 = (x113-(x114/(x115+x116)));

	if (t25 != 18446744073581602084LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MAX;
	int64_t x119 = -1LL;
	int32_t x120 = 704;
	volatile int64_t t26 = 836843105654262LL;

	t26 = (x117-(x118/(x119+x120)));

	if (t26 != 3054869LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	uint16_t x123 = 1U;
	volatile int64_t t27 = 0LL;

	t27 = (x121-(x122/(x123+x124)));

	if (t27 != -56934397436710659LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x125 = INT8_MAX;
	int16_t x126 = -11441;
	uint16_t x127 = 1U;
	uint16_t x128 = 7008U;
	volatile int32_t t28 = -442478891;

	t28 = (x125-(x126/(x127+x128)));

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -3;
	uint64_t x131 = 49LLU;
	static uint32_t x132 = UINT32_MAX;
	uint64_t t29 = 0LLU;

	t29 = (x129-(x130/(x131+x132)));

	if (t29 != 18446744069414584365LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x134 = 89;
	uint8_t x135 = 1U;
	static volatile int64_t x136 = 299115975737202LL;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x133-(x134/(x135+x136)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x138 = INT16_MIN;
	int8_t x139 = -47;
	int8_t x140 = INT8_MAX;
	int64_t t31 = -1030017152500006LL;

	t31 = (x137-(x138/(x139+x140)));

	if (t31 != -162006440030LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MAX;
	int16_t x142 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = INT16_MIN;

	t32 = (x141-(x142/(x143+x144)));

	if (t32 != 2147483646U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x146 = 85U;
	static int32_t x147 = INT32_MIN;
	uint32_t x148 = 11934104U;

	t33 = (x145-(x146/(x147+x148)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = UINT32_MAX;
	int16_t x150 = 13;
	uint64_t x151 = 239169LLU;
	uint64_t t34 = 411153099209LLU;

	t34 = (x149-(x150/(x151+x152)));

	if (t34 != 4294967295LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = 15U;
	int8_t x154 = -1;
	int8_t x155 = INT8_MIN;
	uint16_t x156 = 15U;
	uint32_t t35 = 1105U;

	t35 = (x153-(x154/(x155+x156)));

	if (t35 != 15U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = -1;
	int64_t x158 = -1LL;
	int64_t t36 = -44873670277986550LL;

	t36 = (x157-(x158/(x159+x160)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = 37;
	uint64_t x163 = 6LLU;
	uint32_t x164 = UINT32_MAX;
	uint64_t t37 = 5221105315876616097LLU;

	t37 = (x161-(x162/(x163+x164)));

	if (t37 != 37LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x167 = -1;
	int64_t x168 = INT64_MAX;

	t38 = (x165-(x166/(x167+x168)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x173 = UINT32_MAX;
	uint16_t x175 = 62U;
	static int64_t x176 = INT64_MIN;
	uint64_t t39 = 47232766LLU;

	t39 = (x173-(x174/(x175+x176)));

	if (t39 != 4294967295LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = -1LL;
	int64_t x178 = INT64_MIN;
	int64_t x179 = 478306LL;
	int32_t x180 = INT32_MAX;
	volatile int64_t t40 = 18109LL;

	t40 = (x177-(x178/(x179+x180)));

	if (t40 != 4294010898LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x181 = 292650;
	volatile int8_t x182 = INT8_MIN;
	volatile uint8_t x184 = 2U;

	t41 = (x181-(x182/(x183+x184)));

	if (t41 != 288744U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x186 = 3361865LLU;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = 48U;
	volatile uint64_t t42 = 119008176020LLU;

	t42 = (x185-(x186/(x187+x188)));

	if (t42 != 4294967295LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x189 = INT32_MIN;
	int8_t x190 = -1;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = 1885787722LLU;
	uint64_t t43 = 1441LLU;

	t43 = (x189-(x190/(x191+x192)));

	if (t43 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = UINT8_MAX;
	static int32_t x194 = INT32_MIN;
	uint8_t x195 = UINT8_MAX;
	volatile int32_t t44 = 1;

	t44 = (x193-(x194/(x195+x196)));

	if (t44 != 8454915) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	int8_t x199 = -2;
	int8_t x200 = INT8_MIN;
	volatile int32_t t45 = 2099;

	t45 = (x197-(x198/(x199+x200)));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x202 = UINT8_MAX;
	int32_t x203 = INT32_MIN;
	int64_t t46 = INT64_MIN;

	t46 = (x201-(x202/(x203+x204)));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = -58432443661224803LL;
	static int8_t x206 = -1;
	volatile int64_t x207 = -1LL;
	uint64_t x208 = 98658725740257LLU;

	t47 = (x205-(x206/(x207+x208)));

	if (t47 != 18388311630048139838LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -1;
	static int32_t x210 = -9947;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = 1U;
	int32_t t48 = 144;

	t48 = (x209-(x210/(x211+x212)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = 1;
	int8_t x214 = INT8_MAX;
	int64_t x215 = INT64_MIN;
	uint32_t x216 = UINT32_MAX;
	volatile int64_t t49 = 530415929741751LL;

	t49 = (x213-(x214/(x215+x216)));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x219 = 6;
	volatile int64_t x220 = INT64_MIN;
	int64_t t50 = -295141438819LL;

	t50 = (x217-(x218/(x219+x220)));

	if (t50 != 13LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x222 = INT8_MAX;
	int16_t x223 = INT16_MIN;
	int32_t x224 = -1;
	static volatile int32_t t51 = -3038;

	t51 = (x221-(x222/(x223+x224)));

	if (t51 != 15026) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = 497;
	int16_t x226 = INT16_MAX;
	static int64_t x227 = INT64_MAX;
	static volatile int64_t x228 = -24652318LL;
	static int64_t t52 = -17757897854LL;

	t52 = (x225-(x226/(x227+x228)));

	if (t52 != 497LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -1;
	int32_t x230 = 17;
	static int8_t x231 = INT8_MAX;
	volatile int64_t x232 = INT64_MIN;

	t53 = (x229-(x230/(x231+x232)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x234 = -5822LL;
	volatile int64_t x235 = 1412121672767256LL;
	volatile int64_t t54 = 2604030785LL;

	t54 = (x233-(x234/(x235+x236)));

	if (t54 != 255LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x238 = 3U;
	int8_t x239 = 50;
	static int32_t x240 = INT32_MIN;
	volatile int64_t t55 = INT64_MIN;

	t55 = (x237-(x238/(x239+x240)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x249 = UINT64_MAX;
	int32_t x250 = INT32_MIN;
	uint16_t x251 = 2U;
	volatile int16_t x252 = -432;
	volatile uint64_t t56 = 4018LLU;

	t56 = (x249-(x250/(x251+x252)));

	if (t56 != 18446744073704557467LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x254 = INT32_MIN;
	volatile int16_t x255 = -53;
	uint32_t t57 = 38822949U;

	t57 = (x253-(x254/(x255+x256)));

	if (t57 != 65643U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 6U;
	uint64_t x258 = 2326LLU;
	uint64_t x260 = 164241LLU;
	volatile uint64_t t58 = 118812417LLU;

	t58 = (x257-(x258/(x259+x260)));

	if (t58 != 6LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x262 = 28;
	static uint8_t x263 = UINT8_MAX;
	int16_t x264 = INT16_MIN;
	uint64_t t59 = UINT64_MAX;

	t59 = (x261-(x262/(x263+x264)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x267 = -414LL;
	volatile int64_t t60 = -1033072171545296029LL;

	t60 = (x265-(x266/(x267+x268)));

	if (t60 != 32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x273 = INT16_MAX;
	volatile int32_t x274 = 429837;
	static uint8_t x275 = 14U;
	int8_t x276 = INT8_MAX;
	int32_t t61 = -375761241;

	t61 = (x273-(x274/(x275+x276)));

	if (t61 != 29719) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = 1;
	int32_t x278 = INT32_MIN;
	volatile uint16_t x279 = 7273U;
	int64_t x280 = 0LL;
	volatile int64_t t62 = 16787268905315771LL;

	t62 = (x277-(x278/(x279+x280)));

	if (t62 != 295268LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x281 = 873164607459LLU;
	static int32_t x283 = 26798047;
	int8_t x284 = -1;
	uint64_t t63 = 1413950962LLU;

	t63 = (x281-(x282/(x283+x284)));

	if (t63 != 873164607459LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x286 = INT32_MIN;
	int8_t x288 = -1;
	int32_t t64 = -2;

	t64 = (x285-(x286/(x287+x288)));

	if (t64 != 17109056) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x289 = UINT8_MAX;
	uint16_t x290 = 10U;
	volatile int8_t x291 = -1;
	static uint8_t x292 = 2U;
	volatile int32_t t65 = 757323577;

	t65 = (x289-(x290/(x291+x292)));

	if (t65 != 245) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x294 = INT32_MAX;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = INT32_MIN;
	volatile int32_t t66 = -6217;

	t66 = (x293-(x294/(x295+x296)));

	if (t66 != 782) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = -1;
	uint32_t x298 = 261166738U;
	volatile int64_t x299 = 51867403LL;
	static volatile int8_t x300 = -1;
	volatile int64_t t67 = -4300644511160503194LL;

	t67 = (x297-(x298/(x299+x300)));

	if (t67 != -6LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = -11;
	int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t68 = 108;

	t68 = (x301-(x302/(x303+x304)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x305 = INT64_MIN;
	int32_t x306 = 0;
	int8_t x308 = INT8_MIN;
	static volatile int64_t t69 = INT64_MIN;

	t69 = (x305-(x306/(x307+x308)));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x309 = INT16_MIN;
	volatile int64_t x310 = -1001LL;
	int16_t x311 = INT16_MIN;
	int64_t t70 = 6224LL;

	t70 = (x309-(x310/(x311+x312)));

	if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x314 = 75482239241695LL;
	static int8_t x315 = INT8_MIN;
	static int64_t x316 = -1LL;
	static volatile int64_t t71 = -3253LL;

	t71 = (x313-(x314/(x315+x316)));

	if (t71 != 582986153884LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x317 = INT16_MIN;
	int32_t x320 = -1382688;
	static volatile int64_t t72 = 65813633LL;

	t72 = (x317-(x318/(x319+x320)));

	if (t72 != -32768LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x322 = INT8_MAX;
	int32_t x323 = INT32_MIN;
	int8_t x324 = 1;
	int32_t t73 = -259696057;

	t73 = (x321-(x322/(x323+x324)));

	if (t73 != -6960196) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x329 = UINT32_MAX;
	uint16_t x330 = 0U;
	volatile uint16_t x331 = 55U;
	uint16_t x332 = 21U;
	uint32_t t74 = UINT32_MAX;

	t74 = (x329-(x330/(x331+x332)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = 1211;
	uint16_t x335 = 3U;
	int64_t x336 = INT64_MIN;
	int64_t t75 = INT64_MIN;

	t75 = (x333-(x334/(x335+x336)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x353 = -1;
	int64_t x354 = INT64_MIN;
	static int32_t x355 = -1;
	static int8_t x356 = INT8_MIN;
	int64_t t76 = -51073862820334LL;

	t76 = (x353-(x354/(x355+x356)));

	if (t76 != -71499008037633921LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = -1;
	int8_t x363 = INT8_MAX;
	int16_t x364 = 89;
	int32_t t77 = 0;

	t77 = (x361-(x362/(x363+x364)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x365 = -1LL;
	int8_t x366 = INT8_MIN;
	uint8_t x367 = 82U;
	static int32_t x368 = INT32_MIN;
	int64_t t78 = -2553LL;

	t78 = (x365-(x366/(x367+x368)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x373 = UINT64_MAX;
	static int8_t x374 = 5;
	int8_t x375 = -1;
	volatile uint16_t x376 = 24302U;

	t79 = (x373-(x374/(x375+x376)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x377 = INT8_MIN;
	int8_t x380 = -1;
	int64_t t80 = -5107966051LL;

	t80 = (x377-(x378/(x379+x380)));

	if (t80 != 4294967172LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x381 = INT8_MIN;
	volatile int16_t x382 = 58;
	static int32_t x383 = -46209442;
	static int8_t x384 = INT8_MAX;
	volatile int32_t t81 = -2146028;

	t81 = (x381-(x382/(x383+x384)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x386 = -674721327;
	uint8_t x387 = UINT8_MAX;
	static uint32_t t82 = 124263708U;

	t82 = (x385-(x386/(x387+x388)));

	if (t82 != 2656382U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x389 = INT8_MIN;
	int16_t x392 = INT16_MAX;

	t83 = (x389-(x390/(x391+x392)));

	if (t83 != 18446181089394294528LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x393 = 43U;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MIN;
	static volatile int32_t t84 = 502;

	t84 = (x393-(x394/(x395+x396)));

	if (t84 != 43) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x402 = INT64_MIN;
	uint64_t x404 = UINT64_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = (x401-(x402/(x403+x404)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x409 = -189445LL;
	uint64_t x411 = UINT64_MAX;
	int64_t x412 = INT64_MIN;
	volatile uint64_t t86 = 213LLU;

	t86 = (x409-(x410/(x411+x412)));

	if (t86 != 18446744073709362171LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x413 = INT8_MIN;
	static int64_t x414 = -76691876868823803LL;
	uint8_t x415 = 55U;
	uint32_t x416 = 4U;
	int64_t t87 = -80524547649322712LL;

	t87 = (x413-(x414/(x415+x416)));

	if (t87 != 1299862319810444LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x420 = INT32_MAX;
	int32_t t88 = 60141979;

	t88 = (x417-(x418/(x419+x420)));

	if (t88 != 3441) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x421 = 8399U;
	int32_t x422 = -15;
	int64_t x423 = -1717344266681137716LL;
	int64_t x424 = -3LL;
	int64_t t89 = 10496381LL;

	t89 = (x421-(x422/(x423+x424)));

	if (t89 != 8399LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x425 = -693838454;
	uint32_t x426 = UINT32_MAX;
	static uint64_t x427 = 25508LLU;
	int64_t x428 = INT64_MIN;

	t90 = (x425-(x426/(x427+x428)));

	if (t90 != 18446744073015713162LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x429 = 40161514043485LL;
	uint64_t x430 = UINT64_MAX;
	int16_t x431 = -60;
	uint64_t x432 = 153322896883028301LLU;
	volatile uint64_t t91 = 8429994934079688LLU;

	t91 = (x429-(x430/(x431+x432)));

	if (t91 != 40161514043365LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x433 = UINT8_MAX;
	int8_t x434 = 7;
	int64_t x435 = INT64_MIN;
	static int64_t x436 = INT64_MAX;
	int64_t t92 = -14286712405728LL;

	t92 = (x433-(x434/(x435+x436)));

	if (t92 != 262LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x437 = 1U;
	uint8_t x438 = UINT8_MAX;
	int32_t x439 = -38981;
	int8_t x440 = 5;
	int32_t t93 = 198321;

	t93 = (x437-(x438/(x439+x440)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = INT8_MAX;
	uint64_t x442 = 2307341LLU;
	int64_t x443 = INT64_MIN;
	int8_t x444 = 4;

	t94 = (x441-(x442/(x443+x444)));

	if (t94 != 127LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x445 = 7000483LLU;
	uint8_t x448 = 15U;
	uint64_t t95 = 1777259528555516LLU;

	t95 = (x445-(x446/(x447+x448)));

	if (t95 != 7000483LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x449 = INT32_MIN;
	int8_t x450 = -1;
	static uint16_t x451 = UINT16_MAX;
	static uint16_t x452 = 2123U;
	int32_t t96 = INT32_MIN;

	t96 = (x449-(x450/(x451+x452)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x453 = -1;
	volatile uint16_t x455 = 30387U;
	int8_t x456 = INT8_MAX;
	volatile int32_t t97 = -1090;

	t97 = (x453-(x454/(x455+x456)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = INT8_MAX;
	uint8_t x459 = UINT8_MAX;
	uint32_t x460 = 69931U;

	t98 = (x457-(x458/(x459+x460)));

	if (t98 != 121U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x461 = UINT32_MAX;
	static uint8_t x462 = 126U;
	static int16_t x463 = INT16_MIN;
	uint64_t x464 = 6026103079LLU;
	static uint64_t t99 = 113LLU;

	t99 = (x461-(x462/(x463+x464)));

	if (t99 != 4294967295LLU) { NG(); } else { ; }
	
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

