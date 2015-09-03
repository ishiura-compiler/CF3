#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 54U;
int16_t x13 = INT16_MAX;
uint64_t x21 = UINT64_MAX;
int32_t x22 = -1;
uint64_t x25 = 1156557LLU;
volatile uint16_t x26 = 20U;
uint64_t t6 = 3775969LLU;
volatile uint16_t x31 = 1289U;
uint8_t x35 = UINT8_MAX;
volatile int32_t t10 = -882001;
volatile int16_t x49 = INT16_MAX;
volatile int8_t x51 = -1;
uint32_t x64 = UINT32_MAX;
uint32_t x71 = 1005194U;
int32_t x74 = INT32_MIN;
volatile int32_t x79 = INT32_MIN;
volatile uint32_t x90 = 778U;
int32_t t19 = -554926416;
int64_t x93 = 33544048465183LL;
int32_t x95 = INT32_MAX;
int16_t x96 = INT16_MAX;
int64_t t20 = -839729LL;
volatile uint16_t x97 = 7529U;
int32_t x98 = INT32_MIN;
static volatile int8_t x104 = -14;
int16_t x108 = -1;
volatile uint32_t x128 = UINT32_MAX;
volatile int32_t t28 = 893;
int32_t x133 = -1;
int16_t x136 = -1148;
uint16_t x138 = 16290U;
uint32_t x153 = 32380U;
int64_t x163 = INT64_MAX;
static int64_t x165 = 432817700649LL;
static int8_t x169 = -9;
uint64_t x175 = 7419LLU;
volatile uint8_t x177 = UINT8_MAX;
int32_t x185 = INT32_MIN;
uint8_t x186 = UINT8_MAX;
volatile int16_t x190 = -973;
uint8_t x206 = UINT8_MAX;
uint32_t x209 = 186U;
int32_t t46 = -4;
int32_t t48 = -523231057;
uint64_t x225 = 17583867312560LLU;
uint8_t x227 = 41U;
int16_t x229 = INT16_MIN;
static int32_t t51 = 18;
volatile int32_t t54 = 1663;
int64_t t55 = -1102862979332LL;
int16_t x256 = -1954;
int8_t x264 = -1;
uint32_t t58 = 125U;
int64_t x266 = INT64_MIN;
uint8_t x275 = UINT8_MAX;
int16_t x277 = -4;
uint16_t x290 = 280U;
volatile int64_t t64 = INT64_MIN;
int8_t x298 = INT8_MAX;
uint64_t x302 = 135587903691LLU;
int8_t x305 = INT8_MIN;
int32_t x306 = INT32_MIN;
uint64_t x308 = UINT64_MAX;
uint8_t x312 = 1U;
int32_t t69 = -6874408;
volatile int8_t x313 = INT8_MIN;
int32_t t70 = 37697;
int32_t x317 = 1;
uint8_t x318 = 1U;
uint8_t x332 = 20U;
int32_t t74 = 19871978;
static int64_t x333 = 1447986443LL;
int64_t x334 = INT64_MIN;
volatile int64_t x335 = INT64_MIN;
uint32_t x336 = 121104120U;
int64_t t75 = 58249010257405LL;
uint32_t x337 = 3328U;
int16_t x339 = -95;
static volatile int16_t x343 = 22;
uint16_t x344 = UINT16_MAX;
int32_t x346 = INT32_MAX;
int8_t x348 = -1;
int32_t x351 = -1;
int32_t t79 = -32604829;
int8_t x365 = 1;
static uint32_t x367 = UINT32_MAX;
int16_t x373 = -11;
int32_t x381 = INT32_MAX;
static int32_t x382 = 0;
static int16_t x384 = 1365;
volatile int32_t t86 = -353104;
volatile uint16_t x395 = UINT16_MAX;
int64_t x406 = INT64_MAX;
static int32_t x421 = INT32_MIN;
int64_t x427 = INT64_MIN;
int8_t x429 = INT8_MIN;
static uint64_t x434 = UINT64_MAX;
volatile int32_t t98 = 42342938;
int32_t x437 = -166710853;
volatile int32_t t99 = -9;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	static uint32_t x4 = UINT32_MAX;
	static volatile int32_t t0 = 1111776;

	t0 = (x1-(x2<(x3<x4)));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MAX;
	volatile int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 3273;

	t1 = (x5-(x6<(x7<x8)));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 1011;
	static int16_t x10 = -1;
	uint32_t x11 = 1U;
	int64_t x12 = -1LL;
	static int32_t t2 = 0;

	t2 = (x9-(x10<(x11<x12)));

	if (t2 != 1010) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -1;
	volatile int16_t x15 = INT16_MAX;
	int32_t x16 = -1;
	volatile int32_t t3 = 48239003;

	t3 = (x13-(x14<(x15<x16)));

	if (t3 != 32766) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 707372;
	static volatile int8_t x18 = -31;
	volatile uint64_t x19 = UINT64_MAX;
	volatile int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 57021928;

	t4 = (x17-(x18<(x19<x20)));

	if (t4 != 707371) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x23 = INT16_MIN;
	static int32_t x24 = INT32_MIN;
	volatile uint64_t t5 = 7332370164809LLU;

	t5 = (x21-(x22<(x23<x24)));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x27 = -1LL;
	uint32_t x28 = UINT32_MAX;

	t6 = (x25-(x26<(x27<x28)));

	if (t6 != 1156557LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile int32_t x30 = INT32_MAX;
	static int16_t x32 = -16190;
	volatile int32_t t7 = -60;

	t7 = (x29-(x30<(x31<x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 2000U;
	int64_t x34 = INT64_MIN;
	static uint64_t x36 = 5LLU;
	volatile uint32_t t8 = 1U;

	t8 = (x33-(x34<(x35<x36)));

	if (t8 != 1999U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	volatile uint16_t x42 = 25U;
	int64_t x43 = -114576297089232LL;
	uint8_t x44 = 0U;
	int32_t t9 = INT32_MIN;

	t9 = (x41-(x42<(x43<x44)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = -1;
	uint8_t x46 = 12U;
	uint64_t x47 = 9584LLU;
	uint8_t x48 = 1U;

	t10 = (x45-(x46<(x47<x48)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = INT64_MAX;
	int32_t x52 = INT32_MIN;
	int32_t t11 = 1;

	t11 = (x49-(x50<(x51<x52)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = -1066995596567202752LL;
	int32_t x54 = INT32_MIN;
	uint8_t x55 = UINT8_MAX;
	volatile int8_t x56 = INT8_MIN;
	int64_t t12 = 137LL;

	t12 = (x53-(x54<(x55<x56)));

	if (t12 != -1066995596567202753LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x57 = UINT32_MAX;
	uint8_t x58 = 8U;
	static volatile int8_t x59 = INT8_MAX;
	volatile int32_t x60 = -4345;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x57-(x58<(x59<x60)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 11U;
	int64_t x62 = INT64_MIN;
	volatile int16_t x63 = 354;
	static int32_t t14 = 0;

	t14 = (x61-(x62<(x63<x64)));

	if (t14 != 10) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x65 = UINT8_MAX;
	int16_t x66 = -1;
	int16_t x67 = -229;
	int32_t x68 = 57;
	static int32_t t15 = 936094768;

	t15 = (x65-(x66<(x67<x68)));

	if (t15 != 254) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x69 = 4887U;
	uint8_t x70 = 2U;
	volatile int8_t x72 = -1;
	int32_t t16 = 29385;

	t16 = (x69-(x70<(x71<x72)));

	if (t16 != 4887) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 241U;
	int8_t x75 = -1;
	int32_t x76 = -1;
	int32_t t17 = 1391;

	t17 = (x73-(x74<(x75<x76)));

	if (t17 != 240) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MIN;
	int8_t x78 = -1;
	int16_t x80 = INT16_MAX;
	int32_t t18 = 435442978;

	t18 = (x77-(x78<(x79<x80)));

	if (t18 != -32769) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = INT8_MIN;
	static uint32_t x91 = 2U;
	int64_t x92 = INT64_MAX;

	t19 = (x89-(x90<(x91<x92)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x94 = -1;

	t20 = (x93-(x94<(x95<x96)));

	if (t20 != 33544048465182LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x99 = INT16_MIN;
	static uint32_t x100 = UINT32_MAX;
	volatile int32_t t21 = 103935;

	t21 = (x97-(x98<(x99<x100)));

	if (t21 != 7528) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x101 = INT64_MIN;
	static int16_t x102 = INT16_MAX;
	int16_t x103 = -2;
	volatile int64_t t22 = INT64_MIN;

	t22 = (x101-(x102<(x103<x104)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = 56;
	uint16_t x106 = UINT16_MAX;
	volatile int16_t x107 = INT16_MIN;
	int32_t t23 = 50;

	t23 = (x105-(x106<(x107<x108)));

	if (t23 != 56) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x109 = 45U;
	volatile int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MAX;
	int16_t x112 = -525;
	volatile int32_t t24 = 763194;

	t24 = (x109-(x110<(x111<x112)));

	if (t24 != 44) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x113 = INT16_MAX;
	static int8_t x114 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MIN;
	volatile int32_t t25 = 0;

	t25 = (x113-(x114<(x115<x116)));

	if (t25 != 32766) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x117 = 14;
	static volatile int64_t x118 = INT64_MIN;
	static uint32_t x119 = 79420997U;
	static volatile int64_t x120 = INT64_MIN;
	volatile int32_t t26 = 0;

	t26 = (x117-(x118<(x119<x120)));

	if (t26 != 13) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = 1451456810713692LLU;
	volatile int8_t x122 = -1;
	uint8_t x123 = 3U;
	int8_t x124 = 0;
	uint64_t t27 = 14650726084563LLU;

	t27 = (x121-(x122<(x123<x124)));

	if (t27 != 1451456810713691LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x125 = 205U;
	uint16_t x126 = 88U;
	static int16_t x127 = 4892;

	t28 = (x125-(x126<(x127<x128)));

	if (t28 != 205) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = 28242LLU;
	static uint64_t x130 = 16086074LLU;
	int32_t x131 = -1;
	uint8_t x132 = 59U;
	static uint64_t t29 = 1306388230LLU;

	t29 = (x129-(x130<(x131<x132)));

	if (t29 != 28242LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x134 = 24712U;
	volatile uint16_t x135 = 5798U;
	volatile int32_t t30 = -142949;

	t30 = (x133-(x134<(x135<x136)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x137 = 3112U;
	static int64_t x139 = -17053578533358LL;
	uint8_t x140 = 61U;
	volatile int32_t t31 = -13;

	t31 = (x137-(x138<(x139<x140)));

	if (t31 != 3112) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = UINT64_MAX;
	uint16_t x142 = UINT16_MAX;
	int64_t x143 = INT64_MIN;
	static uint16_t x144 = UINT16_MAX;
	static volatile uint64_t t32 = UINT64_MAX;

	t32 = (x141-(x142<(x143<x144)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MAX;
	int8_t x151 = 3;
	int16_t x152 = INT16_MIN;
	int32_t t33 = 57;

	t33 = (x149-(x150<(x151<x152)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x154 = -1;
	static uint8_t x155 = 2U;
	int64_t x156 = INT64_MIN;
	uint32_t t34 = 418721U;

	t34 = (x153-(x154<(x155<x156)));

	if (t34 != 32379U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MAX;
	uint64_t x164 = 803858288706LLU;
	static int32_t t35 = -53;

	t35 = (x161-(x162<(x163<x164)));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x166 = UINT64_MAX;
	volatile int32_t x167 = INT32_MAX;
	uint8_t x168 = UINT8_MAX;
	static volatile int64_t t36 = 998197776636884455LL;

	t36 = (x165-(x166<(x167<x168)));

	if (t36 != 432817700649LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x170 = -1;
	static int64_t x171 = 538674249257928LL;
	volatile uint32_t x172 = UINT32_MAX;
	int32_t t37 = 1079;

	t37 = (x169-(x170<(x171<x172)));

	if (t37 != -10) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MAX;
	static volatile int8_t x174 = INT8_MAX;
	volatile int16_t x176 = INT16_MAX;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x173-(x174<(x175<x176)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x178 = -31;
	int8_t x179 = -1;
	uint32_t x180 = UINT32_MAX;
	static volatile int32_t t39 = 108;

	t39 = (x177-(x178<(x179<x180)));

	if (t39 != 254) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x187 = -1;
	int32_t x188 = -7635354;
	volatile int32_t t40 = INT32_MIN;

	t40 = (x185-(x186<(x187<x188)));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = -1LL;
	volatile uint32_t x191 = 50967U;
	volatile int32_t x192 = INT32_MAX;
	volatile int64_t t41 = 636422991332994511LL;

	t41 = (x189-(x190<(x191<x192)));

	if (t41 != -2LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x194 = 3559126600474748503LL;
	static uint8_t x195 = UINT8_MAX;
	volatile int16_t x196 = -19;
	int32_t t42 = 48247241;

	t42 = (x193-(x194<(x195<x196)));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = 6730528;
	volatile int16_t x198 = INT16_MIN;
	int8_t x199 = -1;
	volatile int16_t x200 = INT16_MIN;
	int32_t t43 = -215197;

	t43 = (x197-(x198<(x199<x200)));

	if (t43 != 6730527) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x205 = INT8_MAX;
	uint8_t x207 = 38U;
	int64_t x208 = -1LL;
	volatile int32_t t44 = 329658564;

	t44 = (x205-(x206<(x207<x208)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x210 = 13769505U;
	volatile int32_t x211 = INT32_MIN;
	volatile int8_t x212 = -1;
	uint32_t t45 = 2747U;

	t45 = (x209-(x210<(x211<x212)));

	if (t45 != 186U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x213 = 1;
	static int16_t x214 = -1;
	int8_t x215 = 7;
	static volatile uint8_t x216 = UINT8_MAX;

	t46 = (x213-(x214<(x215<x216)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = -14699LL;
	static uint8_t x218 = UINT8_MAX;
	int16_t x219 = INT16_MAX;
	static uint8_t x220 = 1U;
	volatile int64_t t47 = -53006934LL;

	t47 = (x217-(x218<(x219<x220)));

	if (t47 != -14699LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MIN;
	volatile uint32_t x222 = 800134185U;
	int64_t x223 = 49163026LL;
	uint64_t x224 = UINT64_MAX;

	t48 = (x221-(x222<(x223<x224)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x226 = INT8_MIN;
	uint8_t x228 = 1U;
	uint64_t t49 = 9681120326439246LLU;

	t49 = (x225-(x226<(x227<x228)));

	if (t49 != 17583867312559LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x230 = 78U;
	static int8_t x231 = INT8_MIN;
	int16_t x232 = 9;
	int32_t t50 = -1484;

	t50 = (x229-(x230<(x231<x232)));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = -1;
	static int16_t x234 = 47;
	static int16_t x235 = -1;
	uint64_t x236 = 6222LLU;

	t51 = (x233-(x234<(x235<x236)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x237 = UINT8_MAX;
	volatile int8_t x238 = -1;
	int32_t x239 = -1;
	int16_t x240 = INT16_MAX;
	static int32_t t52 = 1;

	t52 = (x237-(x238<(x239<x240)));

	if (t52 != 254) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = UINT16_MAX;
	int32_t x242 = INT32_MAX;
	volatile int8_t x243 = INT8_MAX;
	static volatile int16_t x244 = -1;
	volatile int32_t t53 = 4;

	t53 = (x241-(x242<(x243<x244)));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = INT16_MAX;
	int64_t x246 = INT64_MIN;
	volatile int64_t x247 = INT64_MIN;
	static int32_t x248 = INT32_MIN;

	t54 = (x245-(x246<(x247<x248)));

	if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = -1LL;
	int8_t x250 = 0;
	uint8_t x251 = 44U;
	int32_t x252 = INT32_MIN;

	t55 = (x249-(x250<(x251<x252)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x253 = -1LL;
	uint64_t x254 = UINT64_MAX;
	int64_t x255 = -1LL;
	static int64_t t56 = 3688LL;

	t56 = (x253-(x254<(x255<x256)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	int32_t x258 = -1;
	int8_t x259 = 0;
	int16_t x260 = -4;
	int32_t t57 = -647095;

	t57 = (x257-(x258<(x259<x260)));

	if (t57 != -32769) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x261 = 20U;
	volatile int32_t x262 = -7401801;
	volatile uint8_t x263 = 60U;

	t58 = (x261-(x262<(x263<x264)));

	if (t58 != 19U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x265 = -90156;
	uint32_t x267 = 547U;
	int32_t x268 = INT32_MAX;
	static volatile int32_t t59 = 0;

	t59 = (x265-(x266<(x267<x268)));

	if (t59 != -90157) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = -1;
	uint16_t x270 = UINT16_MAX;
	int64_t x271 = 502087579LL;
	int64_t x272 = -1LL;
	int32_t t60 = 64085501;

	t60 = (x269-(x270<(x271<x272)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x273 = UINT8_MAX;
	uint8_t x274 = 58U;
	uint64_t x276 = 2263321343LLU;
	volatile int32_t t61 = 103;

	t61 = (x273-(x274<(x275<x276)));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x278 = 553917983839849LL;
	static int8_t x279 = INT8_MIN;
	uint32_t x280 = 935U;
	volatile int32_t t62 = -55;

	t62 = (x277-(x278<(x279<x280)));

	if (t62 != -4) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MIN;
	volatile int64_t x282 = -9034746957LL;
	int8_t x283 = -1;
	uint64_t x284 = 22445723LLU;
	volatile int32_t t63 = 40002633;

	t63 = (x281-(x282<(x283<x284)));

	if (t63 != -129) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = INT64_MIN;
	int8_t x291 = INT8_MAX;
	uint16_t x292 = UINT16_MAX;

	t64 = (x289-(x290<(x291<x292)));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x293 = 63934787LLU;
	volatile int64_t x294 = -5766095556LL;
	volatile int32_t x295 = INT32_MIN;
	static int16_t x296 = 1568;
	volatile uint64_t t65 = 45649731618593LLU;

	t65 = (x293-(x294<(x295<x296)));

	if (t65 != 63934786LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x297 = 8015358LLU;
	int32_t x299 = INT32_MIN;
	uint8_t x300 = 10U;
	uint64_t t66 = 25LLU;

	t66 = (x297-(x298<(x299<x300)));

	if (t66 != 8015358LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = INT64_MIN;
	static uint64_t x303 = 9118224286599157768LLU;
	volatile int64_t x304 = INT64_MIN;
	volatile int64_t t67 = INT64_MIN;

	t67 = (x301-(x302<(x303<x304)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x307 = INT16_MIN;
	static volatile int32_t t68 = -11446097;

	t68 = (x305-(x306<(x307<x308)));

	if (t68 != -129) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x309 = INT16_MAX;
	volatile int8_t x310 = INT8_MIN;
	volatile uint16_t x311 = 639U;

	t69 = (x309-(x310<(x311<x312)));

	if (t69 != 32766) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x314 = -1LL;
	uint16_t x315 = UINT16_MAX;
	uint8_t x316 = 2U;

	t70 = (x313-(x314<(x315<x316)));

	if (t70 != -129) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x319 = UINT64_MAX;
	int64_t x320 = -199397LL;
	volatile int32_t t71 = 0;

	t71 = (x317-(x318<(x319<x320)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x321 = -1;
	int8_t x322 = -1;
	int32_t x323 = 423;
	static uint32_t x324 = UINT32_MAX;
	volatile int32_t t72 = 1558;

	t72 = (x321-(x322<(x323<x324)));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x325 = UINT8_MAX;
	uint16_t x326 = 99U;
	int8_t x327 = -1;
	volatile int16_t x328 = -1;
	volatile int32_t t73 = 0;

	t73 = (x325-(x326<(x327<x328)));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x329 = -1;
	uint64_t x330 = 1996LLU;
	int64_t x331 = -1LL;

	t74 = (x329-(x330<(x331<x332)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {


	t75 = (x333-(x334<(x335<x336)));

	if (t75 != 1447986442LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x338 = INT8_MIN;
	static volatile int64_t x340 = -1LL;
	static volatile uint32_t t76 = 787490U;

	t76 = (x337-(x338<(x339<x340)));

	if (t76 != 3327U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x341 = 5167277;
	uint64_t x342 = 80246LLU;
	static volatile int32_t t77 = -662;

	t77 = (x341-(x342<(x343<x344)));

	if (t77 != 5167277) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x345 = INT32_MIN;
	int8_t x347 = -2;
	volatile int32_t t78 = INT32_MIN;

	t78 = (x345-(x346<(x347<x348)));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = UINT16_MAX;
	int8_t x350 = -1;
	int8_t x352 = INT8_MIN;

	t79 = (x349-(x350<(x351<x352)));

	if (t79 != 65534) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x353 = 74231466;
	uint8_t x354 = 11U;
	uint32_t x355 = 86045U;
	int32_t x356 = 17;
	volatile int32_t t80 = 2;

	t80 = (x353-(x354<(x355<x356)));

	if (t80 != 74231466) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x361 = INT16_MIN;
	uint64_t x362 = 10992636179317LLU;
	volatile uint32_t x363 = UINT32_MAX;
	int32_t x364 = INT32_MIN;
	static int32_t t81 = 2825;

	t81 = (x361-(x362<(x363<x364)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x366 = 0;
	volatile uint64_t x368 = 2305437445LLU;
	volatile int32_t t82 = 20;

	t82 = (x365-(x366<(x367<x368)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x374 = 1739380847U;
	uint64_t x375 = 1510LLU;
	int64_t x376 = -221703434316222LL;
	static volatile int32_t t83 = -5286806;

	t83 = (x373-(x374<(x375<x376)));

	if (t83 != -11) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x377 = 346608579173701470LLU;
	uint32_t x378 = UINT32_MAX;
	uint64_t x379 = 214371LLU;
	uint8_t x380 = 3U;
	volatile uint64_t t84 = 6749832113781LLU;

	t84 = (x377-(x378<(x379<x380)));

	if (t84 != 346608579173701470LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x383 = INT64_MIN;
	volatile int32_t t85 = -30854;

	t85 = (x381-(x382<(x383<x384)));

	if (t85 != 2147483646) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x386 = 40459343U;
	int64_t x387 = -2994119209221044LL;
	volatile uint16_t x388 = UINT16_MAX;

	t86 = (x385-(x386<(x387<x388)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = INT16_MAX;
	volatile int16_t x390 = INT16_MAX;
	volatile int16_t x391 = -1;
	int32_t x392 = INT32_MAX;
	int32_t t87 = -21019894;

	t87 = (x389-(x390<(x391<x392)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x393 = 60;
	volatile uint16_t x394 = 1970U;
	volatile uint32_t x396 = 322094307U;
	volatile int32_t t88 = 0;

	t88 = (x393-(x394<(x395<x396)));

	if (t88 != 60) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x397 = INT32_MIN;
	volatile int8_t x398 = INT8_MAX;
	int32_t x399 = -2;
	int16_t x400 = INT16_MAX;
	int32_t t89 = INT32_MIN;

	t89 = (x397-(x398<(x399<x400)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = -3;
	static int16_t x402 = INT16_MAX;
	int32_t x403 = -16496;
	int64_t x404 = -5955293LL;
	int32_t t90 = 0;

	t90 = (x401-(x402<(x403<x404)));

	if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = INT8_MAX;
	volatile int64_t x407 = -56298944069392585LL;
	int16_t x408 = INT16_MIN;
	int32_t t91 = -81;

	t91 = (x405-(x406<(x407<x408)));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x409 = INT64_MAX;
	int32_t x410 = 4017461;
	int16_t x411 = -1;
	int8_t x412 = -1;
	volatile int64_t t92 = INT64_MAX;

	t92 = (x409-(x410<(x411<x412)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x413 = UINT32_MAX;
	volatile int64_t x414 = INT64_MAX;
	static volatile int64_t x415 = 6639575936983487LL;
	volatile uint32_t x416 = 20975U;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = (x413-(x414<(x415<x416)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x417 = -1;
	static int16_t x418 = -3992;
	uint16_t x419 = UINT16_MAX;
	int32_t x420 = INT32_MIN;
	volatile int32_t t94 = -30627;

	t94 = (x417-(x418<(x419<x420)));

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x422 = INT16_MAX;
	int16_t x423 = -1;
	int32_t x424 = INT32_MIN;
	volatile int32_t t95 = INT32_MIN;

	t95 = (x421-(x422<(x423<x424)));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x425 = 0U;
	volatile int8_t x426 = 3;
	static uint16_t x428 = 129U;
	int32_t t96 = -134495690;

	t96 = (x425-(x426<(x427<x428)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x430 = -1;
	static int16_t x431 = 1;
	int16_t x432 = -1;
	static int32_t t97 = 119964670;

	t97 = (x429-(x430<(x431<x432)));

	if (t97 != -129) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = INT16_MIN;
	uint8_t x435 = UINT8_MAX;
	int64_t x436 = -9623674LL;

	t98 = (x433-(x434<(x435<x436)));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x438 = INT16_MIN;
	volatile int8_t x439 = INT8_MAX;
	static uint32_t x440 = 138U;

	t99 = (x437-(x438<(x439<x440)));

	if (t99 != -166710854) { NG(); } else { ; }
	
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

