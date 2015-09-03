#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x12 = 115555032U;
int64_t t1 = -56131512649LL;
uint8_t x13 = 89U;
int32_t x14 = INT32_MIN;
uint64_t x26 = 421LLU;
int16_t x30 = INT16_MAX;
int64_t x32 = -1LL;
int8_t x36 = INT8_MAX;
static volatile int32_t t6 = 785627;
int8_t x42 = -1;
int32_t x53 = INT32_MIN;
volatile uint64_t t11 = 248945LLU;
int32_t x70 = INT32_MAX;
volatile uint64_t t15 = UINT64_MAX;
volatile int8_t x77 = -1;
int16_t x80 = 108;
int16_t x84 = -1;
int8_t x86 = INT8_MIN;
int8_t x87 = -6;
int32_t x91 = -1;
uint64_t t20 = 50529612409LLU;
int32_t x97 = INT32_MAX;
volatile uint32_t t24 = 24432U;
static volatile int16_t x131 = -3;
int16_t x135 = INT16_MIN;
int16_t x136 = INT16_MIN;
static int32_t t32 = -4768;
volatile int32_t t33 = 161667093;
int16_t x147 = -1;
static int32_t x156 = INT32_MAX;
uint16_t x160 = 0U;
int8_t x161 = INT8_MIN;
int16_t x169 = INT16_MIN;
uint8_t x172 = 3U;
volatile uint32_t x178 = UINT32_MAX;
volatile uint32_t x191 = 29U;
volatile uint32_t t43 = UINT32_MAX;
volatile uint32_t x202 = UINT32_MAX;
int32_t x205 = INT32_MIN;
int16_t x206 = -1;
uint8_t x208 = UINT8_MAX;
volatile int64_t x209 = -1483399705953LL;
static uint8_t x215 = UINT8_MAX;
int8_t x220 = -3;
uint8_t x224 = 56U;
volatile int16_t x230 = 2264;
int64_t x231 = INT64_MAX;
static uint8_t x234 = 88U;
uint16_t x235 = 77U;
int8_t x253 = 45;
volatile uint64_t x256 = 919588391064LLU;
uint64_t t57 = 5727692LLU;
volatile uint16_t x265 = 2740U;
volatile int16_t x267 = INT16_MIN;
volatile int32_t t59 = -4470653;
uint32_t x271 = 2190689U;
uint32_t t60 = UINT32_MAX;
static uint64_t t63 = 4935347502LLU;
int16_t x307 = INT16_MAX;
static volatile int32_t t69 = -101;
uint8_t x316 = UINT8_MAX;
int8_t x320 = INT8_MAX;
uint8_t x327 = 31U;
static uint8_t x346 = 49U;
int8_t x350 = INT8_MIN;
int64_t x351 = -1LL;
static int16_t x352 = INT16_MAX;
int64_t x354 = INT64_MIN;
uint32_t x356 = 15642041U;
volatile int64_t t81 = 84594LL;
uint8_t x366 = 15U;
int8_t x371 = 6;
static volatile int32_t x374 = INT32_MIN;
int16_t x387 = INT16_MIN;
int8_t x388 = 0;
int16_t x392 = INT16_MAX;
volatile int8_t x396 = -11;
static uint16_t x400 = 5720U;
int16_t x401 = INT16_MIN;
uint64_t x403 = 63800LLU;
int64_t x406 = 51071668LL;
uint32_t t93 = UINT32_MAX;
uint32_t x411 = 51886959U;
uint16_t x412 = UINT16_MAX;
static volatile int32_t t94 = -1;
int16_t x421 = INT16_MAX;
int32_t x422 = INT32_MAX;
int64_t x424 = -5401766087360LL;
int64_t t96 = -1720683LL;
int16_t x428 = 2045;
static uint32_t x429 = 96778283U;
int64_t x434 = INT64_MIN;
volatile uint64_t t99 = 8659741060184LLU;


void f0(void) {
	uint8_t x5 = UINT8_MAX;
	int8_t x6 = -1;
	int32_t x7 = -1;
	uint32_t x8 = 92U;
	volatile uint32_t t0 = UINT32_MAX;

	t0 = (x5|((x6<=x7)-x8));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 5819306081LL;
	int16_t x10 = INT16_MAX;
	uint64_t x11 = 8026856LLU;

	t1 = (x9|((x10<=x11)-x12));

	if (t1 != 8520717673LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x15 = 44U;
	volatile int32_t x16 = -1;
	int32_t t2 = -769463;

	t2 = (x13|((x14<=x15)-x16));

	if (t2 != 91) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -848646756280983403LL;
	int32_t x18 = INT32_MIN;
	static volatile int16_t x19 = -1;
	int64_t x20 = -12LL;
	volatile int64_t t3 = 7617LL;

	t3 = (x17|((x18<=x19)-x20));

	if (t3 != -848646756280983395LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x25 = 111267535U;
	static int32_t x27 = INT32_MIN;
	int16_t x28 = INT16_MIN;
	volatile uint32_t t4 = 162U;

	t4 = (x25|((x26<=x27)-x28));

	if (t4 != 111267535U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 10U;
	uint64_t x31 = UINT64_MAX;
	int64_t t5 = -8516980075LL;

	t5 = (x29|((x30<=x31)-x32));

	if (t5 != 10LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MAX;
	int8_t x35 = -1;

	t6 = (x33|((x34<=x35)-x36));

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = -1;
	int32_t x38 = -1;
	int8_t x39 = INT8_MAX;
	volatile int16_t x40 = 0;
	static int32_t t7 = 40679489;

	t7 = (x37|((x38<=x39)-x40));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 1U;
	int64_t x43 = INT64_MAX;
	int64_t x44 = 0LL;
	static int64_t t8 = 3LL;

	t8 = (x41|((x42<=x43)-x44));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = INT32_MIN;
	static uint16_t x46 = 2103U;
	static int8_t x47 = INT8_MIN;
	volatile int32_t x48 = 123;
	volatile int32_t t9 = -3448837;

	t9 = (x45|((x46<=x47)-x48));

	if (t9 != -123) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -1LL;
	static uint64_t x50 = 50620566188521606LLU;
	static uint64_t x51 = UINT64_MAX;
	int8_t x52 = INT8_MIN;
	static int64_t t10 = 994051681602LL;

	t10 = (x49|((x50<=x51)-x52));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x54 = -3839;
	uint8_t x55 = 0U;
	volatile uint64_t x56 = 30291LLU;

	t11 = (x53|((x54<=x55)-x56));

	if (t11 != 18446744073709521326LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	uint32_t x58 = UINT32_MAX;
	uint16_t x59 = 522U;
	volatile int8_t x60 = -1;
	volatile int32_t t12 = 54391639;

	t12 = (x57|((x58<=x59)-x60));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = INT16_MIN;
	volatile int8_t x62 = -1;
	static uint8_t x63 = 1U;
	static uint16_t x64 = 61U;
	static int32_t t13 = -3108;

	t13 = (x61|((x62<=x63)-x64));

	if (t13 != -60) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = 2U;
	int64_t x67 = 78684744161974145LL;
	volatile uint8_t x68 = 11U;
	int64_t t14 = 110118LL;

	t14 = (x65|((x66<=x67)-x68));

	if (t14 != -10LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x71 = -1;
	static int32_t x72 = -1;

	t15 = (x69|((x70<=x71)-x72));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x73 = 179U;
	int16_t x74 = INT16_MIN;
	uint8_t x75 = 35U;
	volatile int8_t x76 = -1;
	uint32_t t16 = 3046813U;

	t16 = (x73|((x74<=x75)-x76));

	if (t16 != 179U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x78 = 40;
	static int16_t x79 = INT16_MAX;
	int32_t t17 = 923016;

	t17 = (x77|((x78<=x79)-x80));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = 2259336364392158452LL;
	int8_t x82 = INT8_MIN;
	static int16_t x83 = INT16_MIN;
	static volatile int64_t t18 = -912966407936LL;

	t18 = (x81|((x82<=x83)-x84));

	if (t18 != 2259336364392158453LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 2774600931955687574LLU;
	uint32_t x88 = 2U;
	volatile uint64_t t19 = 8234053908LLU;

	t19 = (x85|((x86<=x87)-x88));

	if (t19 != 2774600932514594815LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x89 = 13716849440LLU;
	static uint64_t x90 = 71187396148586832LLU;
	int64_t x92 = -1LL;

	t20 = (x89|((x90<=x91)-x92));

	if (t20 != 13716849442LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = -1;
	static volatile uint32_t x94 = 493346857U;
	volatile uint8_t x95 = 0U;
	int32_t x96 = 5815;
	int32_t t21 = -41472;

	t21 = (x93|((x94<=x95)-x96));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x98 = 27994880LLU;
	int32_t x99 = INT32_MIN;
	int8_t x100 = -1;
	volatile int32_t t22 = INT32_MAX;

	t22 = (x97|((x98<=x99)-x100));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = UINT8_MAX;
	volatile int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	volatile int16_t x104 = INT16_MIN;
	int32_t t23 = -7;

	t23 = (x101|((x102<=x103)-x104));

	if (t23 != 33023) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 1U;
	uint16_t x106 = 5306U;
	int8_t x107 = 0;
	int16_t x108 = -412;

	t24 = (x105|((x106<=x107)-x108));

	if (t24 != 413U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 13U;
	static int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	static volatile int8_t x112 = -37;
	volatile int32_t t25 = 1079;

	t25 = (x109|((x110<=x111)-x112));

	if (t25 != 47) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x114 = 0U;
	static uint32_t x115 = 199616682U;
	int8_t x116 = -51;
	volatile int32_t t26 = 0;

	t26 = (x113|((x114<=x115)-x116));

	if (t26 != -76) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = 1011LL;
	int32_t x118 = INT32_MIN;
	volatile int32_t x119 = INT32_MIN;
	static int8_t x120 = INT8_MIN;
	int64_t t27 = -118219LL;

	t27 = (x117|((x118<=x119)-x120));

	if (t27 != 1011LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = UINT8_MAX;
	static uint16_t x122 = 1U;
	int16_t x123 = -907;
	uint64_t x124 = 28639166708LLU;
	static uint64_t t28 = 28405623190LLU;

	t28 = (x121|((x122<=x123)-x124));

	if (t28 != 18446744045070385151LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = UINT32_MAX;
	uint8_t x126 = 70U;
	int8_t x127 = 2;
	int8_t x128 = INT8_MAX;
	uint32_t t29 = UINT32_MAX;

	t29 = (x125|((x126<=x127)-x128));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -41;
	volatile uint8_t x130 = 1U;
	int8_t x132 = INT8_MAX;
	int32_t t30 = -42938;

	t30 = (x129|((x130<=x131)-x132));

	if (t30 != -41) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x133 = 6;
	volatile int32_t x134 = INT32_MAX;
	volatile int32_t t31 = 8;

	t31 = (x133|((x134<=x135)-x136));

	if (t31 != 32774) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x137 = INT32_MIN;
	int32_t x138 = -763228994;
	int16_t x139 = 480;
	int8_t x140 = INT8_MIN;

	t32 = (x137|((x138<=x139)-x140));

	if (t32 != -2147483519) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = 8108;
	volatile int64_t x142 = INT64_MIN;
	static int64_t x143 = INT64_MAX;
	int32_t x144 = INT32_MAX;

	t33 = (x141|((x142<=x143)-x144));

	if (t33 != -2147475538) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = -1LL;
	volatile int16_t x146 = -10013;
	int32_t x148 = INT32_MAX;
	volatile int64_t t34 = -6354430291LL;

	t34 = (x145|((x146<=x147)-x148));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = -1;
	int64_t x154 = -1LL;
	uint32_t x155 = 155742U;
	int32_t t35 = -42777424;

	t35 = (x153|((x154<=x155)-x156));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	uint64_t x158 = 1685217718113LLU;
	static int64_t x159 = INT64_MAX;
	int64_t t36 = 8152LL;

	t36 = (x157|((x158<=x159)-x160));

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x162 = INT8_MAX;
	int64_t x163 = 354133443515LL;
	volatile uint32_t x164 = 335480U;
	volatile uint32_t t37 = 9U;

	t37 = (x161|((x162<=x163)-x164));

	if (t37 != 4294967177U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x170 = -1068;
	uint32_t x171 = 10024428U;
	int32_t t38 = -21;

	t38 = (x169|((x170<=x171)-x172));

	if (t38 != -3) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x177 = UINT32_MAX;
	static int16_t x179 = -84;
	int16_t x180 = 118;
	uint32_t t39 = UINT32_MAX;

	t39 = (x177|((x178<=x179)-x180));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = UINT32_MAX;
	uint64_t x182 = 966819520901LLU;
	volatile uint64_t x183 = 692510077135809LLU;
	static volatile uint16_t x184 = 1256U;
	static uint32_t t40 = UINT32_MAX;

	t40 = (x181|((x182<=x183)-x184));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x185 = INT32_MIN;
	uint64_t x186 = UINT64_MAX;
	uint64_t x187 = UINT64_MAX;
	volatile int8_t x188 = INT8_MAX;
	volatile int32_t t41 = -84903;

	t41 = (x185|((x186<=x187)-x188));

	if (t41 != -126) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x189 = -1;
	int64_t x190 = INT64_MIN;
	static int32_t x192 = 870853086;
	volatile int32_t t42 = -471;

	t42 = (x189|((x190<=x191)-x192));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = UINT32_MAX;
	static int64_t x194 = INT64_MAX;
	static volatile int8_t x195 = INT8_MIN;
	uint16_t x196 = 0U;

	t43 = (x193|((x194<=x195)-x196));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = 1;
	static int8_t x198 = INT8_MAX;
	static int8_t x199 = -1;
	uint8_t x200 = 85U;
	volatile int32_t t44 = 5;

	t44 = (x197|((x198<=x199)-x200));

	if (t44 != -85) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = 85342;
	int32_t x203 = -1;
	volatile int32_t x204 = -1081002;
	static volatile int32_t t45 = -13098539;

	t45 = (x201|((x202<=x203)-x204));

	if (t45 != 1146879) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x207 = INT64_MIN;
	static int32_t t46 = 1;

	t46 = (x205|((x206<=x207)-x208));

	if (t46 != -255) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x210 = 4683U;
	int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MAX;
	volatile int64_t t47 = 13LL;

	t47 = (x209|((x210<=x211)-x212));

	if (t47 != -1635988833LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 21U;
	int16_t x214 = -1;
	volatile uint16_t x216 = UINT16_MAX;
	int32_t t48 = -3;

	t48 = (x213|((x214<=x215)-x216));

	if (t48 != -65513) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x217 = UINT32_MAX;
	int16_t x218 = 0;
	static uint8_t x219 = 25U;
	uint32_t t49 = UINT32_MAX;

	t49 = (x217|((x218<=x219)-x220));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = UINT32_MAX;
	static uint8_t x222 = UINT8_MAX;
	int16_t x223 = 54;
	static volatile uint32_t t50 = UINT32_MAX;

	t50 = (x221|((x222<=x223)-x224));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = 338023089757384237LLU;
	int64_t x226 = -1LL;
	uint64_t x227 = 114299077393LLU;
	int16_t x228 = INT16_MIN;
	volatile uint64_t t51 = 131098247865713972LLU;

	t51 = (x225|((x226<=x227)-x228));

	if (t51 != 338023089757417005LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x229 = INT32_MAX;
	static volatile int16_t x232 = INT16_MAX;
	volatile int32_t t52 = -2;

	t52 = (x229|((x230<=x231)-x232));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = -1;
	static volatile int16_t x236 = -3;
	static int32_t t53 = -15;

	t53 = (x233|((x234<=x235)-x236));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MIN;
	volatile int32_t x243 = 791;
	static volatile uint16_t x244 = UINT16_MAX;
	int32_t t54 = -342803;

	t54 = (x241|((x242<=x243)-x244));

	if (t54 != -65534) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x249 = INT16_MAX;
	int8_t x250 = INT8_MIN;
	int8_t x251 = 1;
	int8_t x252 = 1;
	int32_t t55 = 22609751;

	t55 = (x249|((x250<=x251)-x252));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x254 = INT32_MIN;
	int64_t x255 = 453517353729178LL;
	volatile uint64_t t56 = 29696LLU;

	t56 = (x253|((x254<=x255)-x256));

	if (t56 != 18446743154121160557LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 6823015625798LLU;
	uint64_t x258 = 773131541094644LLU;
	static int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MIN;

	t57 = (x257|((x258<=x259)-x260));

	if (t57 != 6823015658567LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x261 = -1;
	int32_t x262 = INT32_MIN;
	static volatile uint16_t x263 = 110U;
	int8_t x264 = 0;
	static int32_t t58 = -302098;

	t58 = (x261|((x262<=x263)-x264));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x266 = INT32_MAX;
	int16_t x268 = 996;

	t59 = (x265|((x266<=x267)-x268));

	if (t59 != -324) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MIN;
	int16_t x272 = 9;

	t60 = (x269|((x270<=x271)-x272));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = 3;
	volatile uint32_t x274 = UINT32_MAX;
	int64_t x275 = 100568674981124551LL;
	volatile int64_t x276 = -1LL;
	volatile int64_t t61 = -9155183469095LL;

	t61 = (x273|((x274<=x275)-x276));

	if (t61 != 3LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x281 = -1LL;
	uint32_t x282 = UINT32_MAX;
	static int16_t x283 = 2211;
	volatile uint8_t x284 = 0U;
	static volatile int64_t t62 = -14619777LL;

	t62 = (x281|((x282<=x283)-x284));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = 3509668894771LLU;
	uint32_t x286 = 120897U;
	int32_t x287 = INT32_MIN;
	uint16_t x288 = UINT16_MAX;

	t63 = (x285|((x286<=x287)-x288));

	if (t63 != 18446744073709508659LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x289 = UINT16_MAX;
	int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MAX;
	int64_t x292 = 7LL;
	volatile int64_t t64 = 424986LL;

	t64 = (x289|((x290<=x291)-x292));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x293 = 1515U;
	volatile int64_t x294 = -23512993665652479LL;
	static volatile int64_t x295 = INT64_MIN;
	int16_t x296 = 107;
	static volatile int32_t t65 = -198612;

	t65 = (x293|((x294<=x295)-x296));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x297 = INT8_MIN;
	uint16_t x298 = 265U;
	static uint16_t x299 = 1U;
	static uint8_t x300 = 21U;
	volatile int32_t t66 = -356056;

	t66 = (x297|((x298<=x299)-x300));

	if (t66 != -21) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x301 = 56;
	int32_t x302 = INT32_MIN;
	int64_t x303 = INT64_MAX;
	static int8_t x304 = -1;
	int32_t t67 = -29;

	t67 = (x301|((x302<=x303)-x304));

	if (t67 != 58) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = INT16_MAX;
	int8_t x306 = -1;
	int8_t x308 = INT8_MAX;
	int32_t t68 = 3072595;

	t68 = (x305|((x306<=x307)-x308));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x309 = UINT16_MAX;
	int32_t x310 = 136070;
	volatile uint64_t x311 = 1910754509167009LLU;
	int16_t x312 = INT16_MIN;

	t69 = (x309|((x310<=x311)-x312));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x313 = INT32_MAX;
	uint32_t x314 = 505U;
	int16_t x315 = -1;
	static int32_t t70 = -8367252;

	t70 = (x313|((x314<=x315)-x316));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MIN;
	static int64_t x318 = INT64_MIN;
	static uint16_t x319 = 6404U;
	int32_t t71 = -476680131;

	t71 = (x317|((x318<=x319)-x320));

	if (t71 != -126) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = -1;
	int32_t x322 = INT32_MAX;
	volatile int16_t x323 = INT16_MIN;
	volatile uint32_t x324 = 507798089U;
	uint32_t t72 = UINT32_MAX;

	t72 = (x321|((x322<=x323)-x324));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = 0U;
	int8_t x326 = 1;
	volatile uint32_t x328 = 11628U;
	static volatile uint32_t t73 = 11986U;

	t73 = (x325|((x326<=x327)-x328));

	if (t73 != 4294955669U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = INT16_MAX;
	uint64_t x330 = 282242LLU;
	static int16_t x331 = 7;
	volatile int64_t x332 = 14606881LL;
	static volatile int64_t t74 = -33988126248LL;

	t74 = (x329|((x330<=x331)-x332));

	if (t74 != -14581761LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x333 = INT16_MIN;
	int8_t x334 = INT8_MIN;
	int32_t x335 = -1;
	int16_t x336 = 5797;
	volatile int32_t t75 = -870289;

	t75 = (x333|((x334<=x335)-x336));

	if (t75 != -5796) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x337 = 0U;
	volatile int8_t x338 = -39;
	uint32_t x339 = 764U;
	int64_t x340 = 4LL;
	int64_t t76 = 2775438004781LL;

	t76 = (x337|((x338<=x339)-x340));

	if (t76 != -4LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = 1;
	static uint64_t x342 = 605734103410505LLU;
	static int32_t x343 = INT32_MAX;
	uint64_t x344 = 55229389476LLU;
	volatile uint64_t t77 = 60808LLU;

	t77 = (x341|((x342<=x343)-x344));

	if (t77 != 18446744018480162141LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = 111U;
	int64_t x347 = -1LL;
	static uint64_t x348 = 212896908943LLU;
	uint64_t t78 = 30772270LLU;

	t78 = (x345|((x346<=x347)-x348));

	if (t78 != 18446743860812642687LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = UINT16_MAX;
	static volatile int32_t t79 = 5;

	t79 = (x349|((x350<=x351)-x352));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x353 = 48544U;
	static int16_t x355 = -1;
	volatile uint32_t t80 = 63U;

	t80 = (x353|((x354<=x355)-x356));

	if (t80 != 4279369704U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x357 = -1LL;
	volatile int32_t x358 = -1;
	uint32_t x359 = 3419U;
	int32_t x360 = -1;

	t81 = (x357|((x358<=x359)-x360));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x361 = 1002979940075658LLU;
	int64_t x362 = 23427287296685LL;
	uint8_t x363 = 44U;
	static uint16_t x364 = 26U;
	volatile uint64_t t82 = 16272240LLU;

	t82 = (x361|((x362<=x363)-x364));

	if (t82 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x365 = INT32_MAX;
	int64_t x367 = INT64_MIN;
	static uint16_t x368 = 0U;
	int32_t t83 = INT32_MAX;

	t83 = (x365|((x366<=x367)-x368));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = INT32_MAX;
	int32_t x370 = -1;
	volatile uint32_t x372 = UINT32_MAX;
	static uint32_t t84 = 187U;

	t84 = (x369|((x370<=x371)-x372));

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = -1;
	uint64_t x375 = 0LLU;
	int16_t x376 = -5;
	volatile int32_t t85 = 963;

	t85 = (x373|((x374<=x375)-x376));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x377 = INT8_MIN;
	static uint8_t x378 = 78U;
	int32_t x379 = INT32_MIN;
	int8_t x380 = -24;
	volatile int32_t t86 = 14770797;

	t86 = (x377|((x378<=x379)-x380));

	if (t86 != -104) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x381 = 4;
	int64_t x382 = INT64_MIN;
	int32_t x383 = INT32_MIN;
	static volatile int64_t x384 = INT64_MAX;
	volatile int64_t t87 = 3374468331524104LL;

	t87 = (x381|((x382<=x383)-x384));

	if (t87 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x385 = INT64_MAX;
	volatile int16_t x386 = -4480;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x385|((x386<=x387)-x388));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = -28358972;
	int64_t x390 = 516LL;
	int64_t x391 = INT64_MIN;
	volatile int32_t t89 = -320;

	t89 = (x389|((x390<=x391)-x392));

	if (t89 != -14651) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x393 = -1;
	uint32_t x394 = 97989553U;
	int8_t x395 = INT8_MIN;
	int32_t t90 = 32066;

	t90 = (x393|((x394<=x395)-x396));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x397 = INT8_MIN;
	int64_t x398 = INT64_MIN;
	volatile uint16_t x399 = 11095U;
	int32_t t91 = 1303415;

	t91 = (x397|((x398<=x399)-x400));

	if (t91 != -87) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x402 = INT8_MIN;
	volatile int32_t x404 = -1;
	volatile int32_t t92 = -241;

	t92 = (x401|((x402<=x403)-x404));

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x405 = UINT32_MAX;
	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MIN;

	t93 = (x405|((x406<=x407)-x408));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x409 = 1;
	int16_t x410 = -196;

	t94 = (x409|((x410<=x411)-x412));

	if (t94 != -65535) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x413 = INT16_MAX;
	volatile uint32_t x414 = UINT32_MAX;
	int16_t x415 = 223;
	uint64_t x416 = 77647413184495825LLU;
	uint64_t t95 = 47894252829LLU;

	t95 = (x413|((x414<=x415)-x416));

	if (t95 != 18369096660525055999LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x423 = 4504495678451928779LLU;

	t96 = (x421|((x422<=x423)-x424));

	if (t96 != 5401766100991LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x425 = INT32_MAX;
	static int16_t x426 = INT16_MAX;
	volatile int32_t x427 = -204;
	volatile int32_t t97 = 378604;

	t97 = (x425|((x426<=x427)-x428));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x430 = -1;
	int8_t x431 = INT8_MIN;
	int32_t x432 = -1611;
	static volatile uint32_t t98 = 1775644U;

	t98 = (x429|((x430<=x431)-x432));

	if (t98 != 96779883U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x433 = INT32_MIN;
	int64_t x435 = -253531903007818421LL;
	static uint64_t x436 = UINT64_MAX;

	t99 = (x433|((x434<=x435)-x436));

	if (t99 != 18446744071562067970LLU) { NG(); } else { ; }
	
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

