#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = -1;
volatile int32_t t1 = 4003;
int8_t x15 = 1;
int32_t x19 = 427224259;
int32_t x20 = 374945431;
volatile int32_t x24 = INT32_MAX;
volatile int64_t x25 = INT64_MAX;
int32_t x28 = INT32_MIN;
int32_t t7 = -458572714;
uint64_t x38 = 19131LLU;
uint8_t x40 = UINT8_MAX;
int32_t x44 = -107134;
static uint16_t x64 = UINT16_MAX;
volatile int16_t x67 = INT16_MIN;
volatile int64_t t15 = 14390577LL;
int32_t x70 = INT32_MIN;
int64_t x82 = -1LL;
volatile int32_t t19 = -80832;
static int64_t x86 = INT64_MIN;
volatile int8_t x95 = INT8_MIN;
static int32_t t23 = 15186989;
static volatile int8_t x104 = INT8_MIN;
int64_t x111 = -29495832LL;
int32_t t27 = -93893;
volatile uint32_t x121 = UINT32_MAX;
static int64_t x123 = INT64_MIN;
uint32_t t28 = 528161U;
int64_t x135 = INT64_MAX;
int8_t x146 = INT8_MIN;
int32_t t35 = 102;
int16_t x158 = 0;
int32_t t39 = -447224968;
int16_t x169 = 3077;
int16_t x170 = INT16_MAX;
int32_t t40 = 3;
uint64_t x198 = 1648399451649LLU;
int64_t t47 = INT64_MIN;
uint32_t x203 = 2618U;
uint32_t t49 = 21U;
static uint16_t x214 = 1U;
volatile uint64_t x221 = UINT64_MAX;
uint64_t x229 = UINT64_MAX;
int32_t x232 = -20219914;
int32_t x238 = INT32_MIN;
static volatile int64_t t57 = INT64_MAX;
int64_t x246 = 199LL;
static int32_t x257 = INT32_MIN;
static int32_t t62 = -611;
volatile uint32_t x266 = 2831793U;
uint64_t x267 = UINT64_MAX;
uint32_t x273 = 33U;
uint32_t x286 = 0U;
int16_t x294 = INT16_MAX;
int64_t x297 = -8144672LL;
static int64_t t70 = 55490006802832508LL;
uint8_t x301 = UINT8_MAX;
int8_t x302 = -1;
volatile int16_t x304 = -1;
static volatile uint16_t x306 = 258U;
int64_t x309 = -1LL;
int32_t x319 = -1;
static uint32_t t75 = 343091315U;
int64_t x324 = INT64_MIN;
volatile uint32_t x326 = 14939U;
static int32_t x334 = INT32_MIN;
volatile int64_t x336 = -25470014273263039LL;
int64_t x337 = INT64_MAX;
volatile int64_t x339 = -1LL;
int16_t x350 = -1;
static int8_t x360 = -1;
uint64_t t83 = UINT64_MAX;
int8_t x362 = INT8_MIN;
int8_t x367 = 4;
int8_t x368 = INT8_MIN;
static int32_t x376 = 214170001;
volatile int32_t t87 = -224;
int16_t x383 = 1689;
volatile int32_t x388 = INT32_MIN;
static int32_t x396 = -127249;
uint8_t x404 = 1U;
int32_t t94 = -2;
volatile int32_t t95 = 139;
static int16_t x411 = INT16_MIN;
int32_t x413 = INT32_MAX;
static int64_t x422 = INT64_MIN;
uint32_t t99 = 10764711U;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	uint64_t x2 = 2153791777LLU;
	volatile uint16_t x3 = 261U;
	int32_t t0 = -4590784;

	t0 = (x1-(x2<=(x3/x4)));

	if (t0 != 126) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -3;
	static volatile uint16_t x6 = 2U;
	static uint32_t x7 = 30085U;
	static uint64_t x8 = 60467314426LLU;

	t1 = (x5-(x6<=(x7/x8)));

	if (t1 != -3) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 8181U;
	int32_t x10 = INT32_MIN;
	uint8_t x11 = 103U;
	volatile uint32_t x12 = 157039U;
	volatile int32_t t2 = 1946908;

	t2 = (x9-(x10<=(x11/x12)));

	if (t2 != 8181) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int8_t x14 = INT8_MIN;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = -935063544;

	t3 = (x13-(x14<=(x15/x16)));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	volatile int16_t x18 = -2702;
	volatile uint32_t t4 = 8756915U;

	t4 = (x17-(x18<=(x19/x20)));

	if (t4 != 4294967294U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	volatile int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	int32_t t5 = -511892;

	t5 = (x21-(x22<=(x23/x24)));

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x26 = UINT16_MAX;
	uint8_t x27 = 15U;
	int64_t t6 = INT64_MAX;

	t6 = (x25-(x26<=(x27/x28)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 0;
	int16_t x30 = INT16_MIN;
	static volatile int32_t x31 = INT32_MIN;
	int32_t x32 = 138;

	t7 = (x29-(x30<=(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 2;
	uint64_t x34 = UINT64_MAX;
	static int64_t x35 = 49846LL;
	static int16_t x36 = INT16_MIN;
	int32_t t8 = -161005882;

	t8 = (x33-(x34<=(x35/x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	volatile uint32_t x39 = UINT32_MAX;
	int32_t t9 = 1561393;

	t9 = (x37-(x38<=(x39/x40)));

	if (t9 != 65534) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MIN;
	int32_t x43 = INT32_MIN;
	volatile int32_t t10 = 2665032;

	t10 = (x41-(x42<=(x43/x44)));

	if (t10 != -129) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x49 = UINT64_MAX;
	uint32_t x50 = 157570U;
	int32_t x51 = INT32_MIN;
	int64_t x52 = -185615853601830LL;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (x49-(x50<=(x51/x52)));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 123U;
	volatile int64_t x54 = INT64_MIN;
	uint64_t x55 = UINT64_MAX;
	int8_t x56 = INT8_MAX;
	volatile int32_t t12 = 15305;

	t12 = (x53-(x54<=(x55/x56)));

	if (t12 != 123) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -1LL;
	int64_t x58 = 90039226LL;
	static int64_t x59 = -332111567723LL;
	int8_t x60 = INT8_MAX;
	int64_t t13 = -12944LL;

	t13 = (x57-(x58<=(x59/x60)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	uint8_t x62 = 2U;
	static uint16_t x63 = 6897U;
	int32_t t14 = 485086;

	t14 = (x61-(x62<=(x63/x64)));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	int32_t x66 = 0;
	int8_t x68 = -1;

	t15 = (x65-(x66<=(x67/x68)));

	if (t15 != -2LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int8_t x71 = INT8_MIN;
	int64_t x72 = INT64_MIN;
	int32_t t16 = 1450838;

	t16 = (x69-(x70<=(x71/x72)));

	if (t16 != -32769) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -12;
	int8_t x74 = INT8_MAX;
	volatile int64_t x75 = INT64_MIN;
	int16_t x76 = -3;
	int32_t t17 = 27783;

	t17 = (x73-(x74<=(x75/x76)));

	if (t17 != -13) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = INT32_MIN;
	uint32_t x78 = 996U;
	int8_t x79 = 1;
	static volatile int64_t x80 = INT64_MAX;
	static int32_t t18 = INT32_MIN;

	t18 = (x77-(x78<=(x79/x80)));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = UINT8_MAX;
	int8_t x83 = INT8_MIN;
	uint32_t x84 = 14590341U;

	t19 = (x81-(x82<=(x83/x84)));

	if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = INT32_MAX;
	volatile uint16_t x87 = 31843U;
	int8_t x88 = INT8_MIN;
	volatile int32_t t20 = 906763325;

	t20 = (x85-(x86<=(x87/x88)));

	if (t20 != 2147483646) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MAX;
	int8_t x90 = -1;
	uint16_t x91 = UINT16_MAX;
	uint64_t x92 = 422LLU;
	int32_t t21 = -1747849;

	t21 = (x89-(x90<=(x91/x92)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 31894U;
	volatile uint32_t x94 = 0U;
	uint16_t x96 = 10150U;
	int32_t t22 = -1;

	t22 = (x93-(x94<=(x95/x96)));

	if (t22 != 31893) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MAX;
	volatile int16_t x98 = -7026;
	uint32_t x99 = 35779469U;
	volatile int64_t x100 = INT64_MAX;

	t23 = (x97-(x98<=(x99/x100)));

	if (t23 != 126) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = 6LL;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	volatile int64_t t24 = -53576961016247509LL;

	t24 = (x101-(x102<=(x103/x104)));

	if (t24 != 5LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = INT32_MIN;
	volatile int8_t x110 = -1;
	uint64_t x112 = 7582LLU;
	static int32_t t25 = INT32_MIN;

	t25 = (x109-(x110<=(x111/x112)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = 51;
	int32_t x114 = 774393;
	int64_t x115 = -1LL;
	int8_t x116 = -1;
	static int32_t t26 = -1;

	t26 = (x113-(x114<=(x115/x116)));

	if (t26 != 51) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -1;
	volatile uint16_t x118 = 1078U;
	static int8_t x119 = -1;
	int64_t x120 = -1LL;

	t27 = (x117-(x118<=(x119/x120)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x122 = INT32_MIN;
	static int16_t x124 = -4;

	t28 = (x121-(x122<=(x123/x124)));

	if (t28 != 4294967294U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = 29U;
	static uint64_t x126 = 3825LLU;
	volatile uint64_t x127 = UINT64_MAX;
	int64_t x128 = INT64_MAX;
	volatile int32_t t29 = 4382253;

	t29 = (x125-(x126<=(x127/x128)));

	if (t29 != 29) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = 2765U;
	int32_t x130 = INT32_MAX;
	uint16_t x131 = 1U;
	int16_t x132 = -1;
	volatile int32_t t30 = -593;

	t30 = (x129-(x130<=(x131/x132)));

	if (t30 != 2765) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = 2852261676657LL;
	static int32_t x134 = 60;
	volatile uint64_t x136 = UINT64_MAX;
	volatile int64_t t31 = -3692396LL;

	t31 = (x133-(x134<=(x135/x136)));

	if (t31 != 2852261676657LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	uint32_t x138 = 2870128U;
	int16_t x139 = INT16_MAX;
	volatile uint64_t x140 = UINT64_MAX;
	volatile int32_t t32 = 80522;

	t32 = (x137-(x138<=(x139/x140)));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MAX;
	int32_t x142 = 5569329;
	int16_t x143 = INT16_MIN;
	volatile int32_t x144 = INT32_MIN;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x141-(x142<=(x143/x144)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	int32_t x147 = -1;
	static uint16_t x148 = 686U;
	volatile int32_t t34 = -55947608;

	t34 = (x145-(x146<=(x147/x148)));

	if (t34 != -32769) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = -1;
	uint8_t x150 = 125U;
	volatile int8_t x151 = -1;
	static int8_t x152 = INT8_MIN;

	t35 = (x149-(x150<=(x151/x152)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	static uint32_t x154 = UINT32_MAX;
	int64_t x155 = -22500LL;
	static int64_t x156 = 78438516931LL;
	static volatile int32_t t36 = 1;

	t36 = (x153-(x154<=(x155/x156)));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 0U;
	uint32_t x159 = 1033656U;
	static int64_t x160 = INT64_MIN;
	volatile int32_t t37 = 621;

	t37 = (x157-(x158<=(x159/x160)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x161 = INT8_MIN;
	static int16_t x162 = INT16_MAX;
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = INT64_MAX;
	volatile int32_t t38 = 4735235;

	t38 = (x161-(x162<=(x163/x164)));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = -972709;
	int32_t x166 = -1;
	uint8_t x167 = 1U;
	volatile int64_t x168 = INT64_MIN;

	t39 = (x165-(x166<=(x167/x168)));

	if (t39 != -972710) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x171 = INT64_MAX;
	uint16_t x172 = UINT16_MAX;

	t40 = (x169-(x170<=(x171/x172)));

	if (t40 != 3076) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -60;
	volatile uint64_t x174 = 99LLU;
	volatile uint8_t x175 = 57U;
	volatile uint32_t x176 = UINT32_MAX;
	int32_t t41 = -349908185;

	t41 = (x173-(x174<=(x175/x176)));

	if (t41 != -60) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = INT8_MIN;
	volatile uint32_t x178 = UINT32_MAX;
	static uint32_t x179 = 15U;
	volatile uint64_t x180 = 651654485248993515LLU;
	static volatile int32_t t42 = -234;

	t42 = (x177-(x178<=(x179/x180)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x181 = 6U;
	volatile int64_t x182 = INT64_MAX;
	static int16_t x183 = 0;
	static volatile uint64_t x184 = UINT64_MAX;
	int32_t t43 = -171421;

	t43 = (x181-(x182<=(x183/x184)));

	if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x185 = UINT8_MAX;
	static int16_t x186 = -1;
	int8_t x187 = 3;
	int16_t x188 = INT16_MIN;
	volatile int32_t t44 = 0;

	t44 = (x185-(x186<=(x187/x188)));

	if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MIN;
	int8_t x191 = -1;
	volatile int8_t x192 = -1;
	int32_t t45 = -805699;

	t45 = (x189-(x190<=(x191/x192)));

	if (t45 != -32769) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x193 = -9;
	volatile int32_t x194 = INT32_MAX;
	volatile int32_t x195 = INT32_MIN;
	volatile int32_t x196 = INT32_MAX;
	int32_t t46 = 0;

	t46 = (x193-(x194<=(x195/x196)));

	if (t46 != -9) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x197 = INT64_MIN;
	uint64_t x199 = 13167LLU;
	int8_t x200 = -1;

	t47 = (x197-(x198<=(x199/x200)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MIN;
	static uint16_t x202 = UINT16_MAX;
	static uint32_t x204 = 1632U;
	int32_t t48 = 0;

	t48 = (x201-(x202<=(x203/x204)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = 8772424U;
	static uint16_t x206 = UINT16_MAX;
	uint8_t x207 = 3U;
	uint16_t x208 = UINT16_MAX;

	t49 = (x205-(x206<=(x207/x208)));

	if (t49 != 8772424U) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x213 = INT32_MAX;
	uint16_t x215 = 236U;
	int16_t x216 = -1;
	volatile int32_t t50 = INT32_MAX;

	t50 = (x213-(x214<=(x215/x216)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -61;
	static int16_t x218 = 7;
	uint64_t x219 = 411399599LLU;
	static uint8_t x220 = 74U;
	int32_t t51 = -57;

	t51 = (x217-(x218<=(x219/x220)));

	if (t51 != -62) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x222 = 2U;
	int8_t x223 = 32;
	uint16_t x224 = 727U;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x221-(x222<=(x223/x224)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = 4;
	int32_t x226 = -567962;
	uint32_t x227 = 35549U;
	static int8_t x228 = INT8_MAX;
	static int32_t t53 = -6229507;

	t53 = (x225-(x226<=(x227/x228)));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x230 = INT32_MIN;
	int8_t x231 = -29;
	static volatile uint64_t t54 = 4458LLU;

	t54 = (x229-(x230<=(x231/x232)));

	if (t54 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x233 = INT64_MAX;
	static int16_t x234 = INT16_MIN;
	volatile uint32_t x235 = UINT32_MAX;
	static int32_t x236 = INT32_MIN;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x233-(x234<=(x235/x236)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x237 = 1U;
	int8_t x239 = INT8_MAX;
	int64_t x240 = INT64_MAX;
	volatile int32_t t56 = -28;

	t56 = (x237-(x238<=(x239/x240)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = INT64_MAX;
	uint8_t x242 = 70U;
	int8_t x243 = -1;
	uint16_t x244 = UINT16_MAX;

	t57 = (x241-(x242<=(x243/x244)));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = 2570414660578LLU;
	int8_t x247 = -1;
	int64_t x248 = INT64_MIN;
	volatile uint64_t t58 = 74537793LLU;

	t58 = (x245-(x246<=(x247/x248)));

	if (t58 != 2570414660578LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = 524368779316302LLU;
	int64_t x250 = -367079974LL;
	int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MAX;
	uint64_t t59 = 1811350670753928258LLU;

	t59 = (x249-(x250<=(x251/x252)));

	if (t59 != 524368779316301LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x253 = UINT32_MAX;
	int16_t x254 = -652;
	int32_t x255 = -1;
	static int32_t x256 = -146429876;
	uint32_t t60 = 33347594U;

	t60 = (x253-(x254<=(x255/x256)));

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x258 = INT32_MAX;
	static int16_t x259 = 0;
	static int64_t x260 = INT64_MIN;
	int32_t t61 = INT32_MIN;

	t61 = (x257-(x258<=(x259/x260)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = 252;
	uint8_t x262 = 0U;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = INT8_MIN;

	t62 = (x261-(x262<=(x263/x264)));

	if (t62 != 251) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = INT16_MIN;
	volatile int32_t x268 = -1;
	volatile int32_t t63 = 1999891;

	t63 = (x265-(x266<=(x267/x268)));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x269 = 10U;
	int16_t x270 = 6503;
	int8_t x271 = 1;
	int16_t x272 = INT16_MIN;
	volatile int32_t t64 = 1;

	t64 = (x269-(x270<=(x271/x272)));

	if (t64 != 10) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x274 = -8015;
	static int16_t x275 = INT16_MAX;
	static volatile int16_t x276 = 124;
	volatile uint32_t t65 = 108966604U;

	t65 = (x273-(x274<=(x275/x276)));

	if (t65 != 32U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x281 = 177U;
	volatile int32_t x282 = INT32_MAX;
	static int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MAX;
	int32_t t66 = 3683876;

	t66 = (x281-(x282<=(x283/x284)));

	if (t66 != 177) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = -5193;
	uint32_t x287 = 6U;
	uint64_t x288 = 143815583262LLU;
	static int32_t t67 = 614802;

	t67 = (x285-(x286<=(x287/x288)));

	if (t67 != -5194) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = UINT8_MAX;
	int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MAX;
	static uint32_t x292 = UINT32_MAX;
	volatile int32_t t68 = 2601285;

	t68 = (x289-(x290<=(x291/x292)));

	if (t68 != 254) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x293 = UINT64_MAX;
	static int32_t x295 = -1;
	volatile int16_t x296 = INT16_MIN;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x293-(x294<=(x295/x296)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x298 = INT8_MIN;
	volatile uint64_t x299 = 10011519LLU;
	static int32_t x300 = INT32_MIN;

	t70 = (x297-(x298<=(x299/x300)));

	if (t70 != -8144672LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x303 = INT16_MIN;
	static volatile int32_t t71 = 12600527;

	t71 = (x301-(x302<=(x303/x304)));

	if (t71 != 254) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = -17;
	int32_t x307 = -1;
	volatile int32_t x308 = INT32_MAX;
	int32_t t72 = -96;

	t72 = (x305-(x306<=(x307/x308)));

	if (t72 != -17) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x310 = INT32_MIN;
	uint16_t x311 = 74U;
	volatile int8_t x312 = INT8_MIN;
	int64_t t73 = 4220411936480449LL;

	t73 = (x309-(x310<=(x311/x312)));

	if (t73 != -2LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = INT16_MIN;
	static uint32_t x314 = 3U;
	int32_t x315 = INT32_MAX;
	volatile int8_t x316 = -1;
	static volatile int32_t t74 = -70071892;

	t74 = (x313-(x314<=(x315/x316)));

	if (t74 != -32769) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x317 = 194006763U;
	int16_t x318 = -1;
	uint16_t x320 = UINT16_MAX;

	t75 = (x317-(x318<=(x319/x320)));

	if (t75 != 194006762U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x321 = UINT8_MAX;
	int32_t x322 = INT32_MAX;
	uint64_t x323 = UINT64_MAX;
	volatile int32_t t76 = -7579451;

	t76 = (x321-(x322<=(x323/x324)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x325 = 75U;
	int8_t x327 = INT8_MAX;
	volatile int64_t x328 = INT64_MIN;
	volatile int32_t t77 = 53;

	t77 = (x325-(x326<=(x327/x328)));

	if (t77 != 75) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x329 = UINT64_MAX;
	int8_t x330 = INT8_MIN;
	static int32_t x331 = INT32_MIN;
	int64_t x332 = INT64_MAX;
	static uint64_t t78 = 965376006483282LLU;

	t78 = (x329-(x330<=(x331/x332)));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = INT8_MIN;
	static int16_t x335 = INT16_MAX;
	volatile int32_t t79 = 53375091;

	t79 = (x333-(x334<=(x335/x336)));

	if (t79 != -129) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x338 = 14849545LLU;
	int32_t x340 = INT32_MIN;
	int64_t t80 = INT64_MAX;

	t80 = (x337-(x338<=(x339/x340)));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x341 = 438U;
	int64_t x342 = INT64_MIN;
	volatile uint64_t x343 = 119668442705518LLU;
	int64_t x344 = 876197981172371954LL;
	volatile uint32_t t81 = 11720121U;

	t81 = (x341-(x342<=(x343/x344)));

	if (t81 != 438U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x349 = 4238821183LLU;
	int8_t x351 = INT8_MAX;
	uint64_t x352 = 3392165655053311LLU;
	volatile uint64_t t82 = 27637LLU;

	t82 = (x349-(x350<=(x351/x352)));

	if (t82 != 4238821183LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MAX;
	uint8_t x359 = UINT8_MAX;

	t83 = (x357-(x358<=(x359/x360)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = INT16_MAX;
	int16_t x363 = INT16_MIN;
	uint32_t x364 = UINT32_MAX;
	int32_t t84 = -1321;

	t84 = (x361-(x362<=(x363/x364)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x365 = 39;
	static volatile int32_t x366 = INT32_MIN;
	int32_t t85 = 23809;

	t85 = (x365-(x366<=(x367/x368)));

	if (t85 != 38) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x369 = INT32_MIN;
	int64_t x370 = -1LL;
	uint64_t x371 = UINT64_MAX;
	volatile uint32_t x372 = 3095U;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x369-(x370<=(x371/x372)));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MAX;
	volatile int16_t x375 = -122;

	t87 = (x373-(x374<=(x375/x376)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x378 = INT16_MIN;
	int64_t x379 = -1LL;
	int16_t x380 = -1;
	volatile uint64_t t88 = 19073LLU;

	t88 = (x377-(x378<=(x379/x380)));

	if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = INT16_MAX;
	uint64_t x382 = UINT64_MAX;
	static int16_t x384 = 13;
	int32_t t89 = 116;

	t89 = (x381-(x382<=(x383/x384)));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = INT32_MAX;
	int64_t x386 = INT64_MIN;
	volatile uint32_t x387 = 51U;
	static volatile int32_t t90 = -249514;

	t90 = (x385-(x386<=(x387/x388)));

	if (t90 != 2147483646) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x389 = INT8_MIN;
	uint64_t x390 = 11292LLU;
	int8_t x391 = -30;
	int8_t x392 = -1;
	int32_t t91 = -7;

	t91 = (x389-(x390<=(x391/x392)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = 77094739LLU;
	int8_t x395 = INT8_MIN;
	static volatile int32_t t92 = -13951;

	t92 = (x393-(x394<=(x395/x396)));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x397 = UINT8_MAX;
	uint64_t x398 = 5702464840164634584LLU;
	volatile int8_t x399 = INT8_MIN;
	uint16_t x400 = 4U;
	volatile int32_t t93 = 541177799;

	t93 = (x397-(x398<=(x399/x400)));

	if (t93 != 254) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x401 = 1;
	uint16_t x402 = UINT16_MAX;
	static uint64_t x403 = 4597607512959435LLU;

	t94 = (x401-(x402<=(x403/x404)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = INT32_MIN;
	uint32_t x407 = 57U;
	int16_t x408 = -1;

	t95 = (x405-(x406<=(x407/x408)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x409 = INT32_MAX;
	uint8_t x410 = 1U;
	int8_t x412 = INT8_MIN;
	static int32_t t96 = -2;

	t96 = (x409-(x410<=(x411/x412)));

	if (t96 != 2147483646) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x414 = 1161986779878041378LLU;
	int8_t x415 = 21;
	int16_t x416 = INT16_MIN;
	int32_t t97 = INT32_MAX;

	t97 = (x413-(x414<=(x415/x416)));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x417 = INT64_MAX;
	int32_t x418 = -1;
	int32_t x419 = -2;
	int8_t x420 = INT8_MIN;
	volatile int64_t t98 = 52LL;

	t98 = (x417-(x418<=(x419/x420)));

	if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x421 = 252052U;
	static int8_t x423 = INT8_MIN;
	volatile int16_t x424 = 9749;

	t99 = (x421-(x422<=(x423/x424)));

	if (t99 != 252051U) { NG(); } else { ; }
	
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
