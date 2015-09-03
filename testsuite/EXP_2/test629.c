#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 205436632242LLU;
int64_t x8 = INT64_MAX;
int8_t x15 = 1;
uint16_t x17 = UINT16_MAX;
uint8_t x30 = UINT8_MAX;
volatile int32_t t6 = 35;
int16_t x42 = -1;
int32_t x56 = INT32_MAX;
static uint16_t x59 = UINT16_MAX;
volatile int64_t x60 = -1LL;
volatile int32_t x64 = 1;
uint64_t x67 = 15857308924479112LLU;
volatile int8_t x68 = -1;
uint32_t x70 = 4000U;
static volatile int32_t t15 = 906080;
int8_t x79 = -1;
volatile int32_t t16 = -732963;
int64_t x82 = INT64_MIN;
int32_t x83 = INT32_MIN;
uint64_t x91 = 524LLU;
static int32_t t18 = -1128414;
volatile int8_t x96 = INT8_MIN;
int64_t t23 = 1271901LL;
static int32_t x113 = INT32_MIN;
static int16_t x116 = 8;
int8_t x118 = INT8_MAX;
volatile int64_t x120 = INT64_MAX;
volatile int32_t t27 = 0;
uint64_t x134 = 9LLU;
int32_t t29 = 0;
int32_t t30 = 7884;
static volatile uint8_t x145 = 14U;
volatile int32_t t32 = 25;
static int32_t x152 = 7;
volatile int16_t x153 = INT16_MIN;
static uint32_t x156 = 49U;
volatile int16_t x162 = 1;
uint32_t x164 = UINT32_MAX;
volatile uint32_t x169 = 120521U;
int64_t x175 = INT64_MAX;
volatile uint8_t x188 = 62U;
int64_t x190 = INT64_MIN;
int16_t x204 = INT16_MAX;
int8_t x208 = INT8_MAX;
volatile int8_t x209 = INT8_MAX;
int32_t x214 = INT32_MIN;
uint32_t x218 = UINT32_MAX;
static int8_t x225 = INT8_MIN;
int8_t x228 = INT8_MAX;
volatile int32_t t52 = 257739;
uint16_t x231 = UINT16_MAX;
uint32_t x232 = UINT32_MAX;
int8_t x233 = 1;
static int16_t x237 = INT16_MIN;
int64_t x246 = -1149492031577LL;
uint32_t x247 = UINT32_MAX;
int32_t x254 = INT32_MAX;
volatile int32_t t59 = -70102408;
int16_t x267 = INT16_MAX;
uint8_t x269 = 1U;
volatile int64_t x270 = -732771750317LL;
int32_t x272 = INT32_MIN;
int32_t t62 = 0;
static uint64_t x277 = 7970291160696838LLU;
int64_t t64 = 7088993122400LL;
int32_t x286 = INT32_MIN;
static int16_t x288 = INT16_MIN;
int64_t x289 = -1LL;
int32_t x292 = INT32_MIN;
int16_t x293 = INT16_MAX;
uint64_t x295 = 445944517LLU;
volatile int64_t x299 = -1LL;
uint32_t x300 = 756U;
uint32_t x302 = 94472U;
static int8_t x306 = INT8_MAX;
int32_t t70 = -1114;
static int8_t x309 = INT8_MIN;
int8_t x311 = -1;
static volatile int32_t x327 = INT32_MAX;
int8_t x329 = INT8_MAX;
static uint32_t x332 = 4U;
volatile int8_t x345 = INT8_MIN;
static int64_t x352 = INT64_MIN;
volatile int64_t t81 = -6908926249340LL;
int64_t x355 = -231237456308LL;
int8_t x363 = -1;
int64_t x365 = -1LL;
uint32_t t85 = 310593473U;
static int32_t t87 = 1923;
int8_t x386 = INT8_MAX;
int8_t x387 = INT8_MIN;
volatile int32_t t91 = 10;
uint8_t x393 = 0U;
int32_t x394 = -8686;
uint32_t x395 = 410U;
int32_t t92 = 2380627;
volatile int16_t x398 = 0;
int8_t x399 = INT8_MIN;
uint32_t x409 = 1U;
volatile uint64_t x418 = 2575LLU;
volatile int32_t t98 = -19441;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static int8_t x3 = INT8_MIN;
	int8_t x4 = -1;
	int32_t t0 = 51;

	t0 = ((x1<=(x2/x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 117U;
	static int32_t x6 = INT32_MIN;
	int64_t x7 = 84LL;
	int64_t t1 = 1808352090LL;

	t1 = ((x5<=(x6/x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 50U;
	int16_t x10 = 170;
	int8_t x11 = INT8_MIN;
	int16_t x12 = -6757;
	int32_t t2 = 348053357;

	t2 = ((x9<=(x10/x11))%x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint64_t x14 = UINT64_MAX;
	int64_t x16 = 664LL;
	static int64_t t3 = 34922413866724LL;

	t3 = ((x13<=(x14/x15))%x16);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -35;
	uint8_t x19 = 19U;
	static volatile int16_t x20 = -1;
	int32_t t4 = 405166113;

	t4 = ((x17<=(x18/x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	static int8_t x31 = -1;
	int64_t x32 = -134379741914096LL;
	int64_t t5 = 6524151833183LL;

	t5 = ((x29<=(x30/x31))%x32);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x33 = 0U;
	uint16_t x34 = 189U;
	static int8_t x35 = -8;
	int16_t x36 = -1;

	t6 = ((x33<=(x34/x35))%x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	uint16_t x38 = UINT16_MAX;
	uint64_t x39 = 1516128800LLU;
	int32_t x40 = 2;
	int32_t t7 = 0;

	t7 = ((x37<=(x38/x39))%x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 1853U;
	static uint64_t x43 = UINT64_MAX;
	int8_t x44 = INT8_MAX;
	int32_t t8 = -776736;

	t8 = ((x41<=(x42/x43))%x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -1003429;
	int32_t x46 = 25185812;
	static volatile uint16_t x47 = 7U;
	volatile int16_t x48 = INT16_MIN;
	static volatile int32_t t9 = 362172885;

	t9 = ((x45<=(x46/x47))%x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 481708U;
	uint8_t x50 = 1U;
	int16_t x51 = INT16_MAX;
	uint16_t x52 = 4U;
	volatile int32_t t10 = -117178473;

	t10 = ((x49<=(x50/x51))%x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = 1;
	volatile int32_t x54 = INT32_MIN;
	static int32_t x55 = INT32_MAX;
	static int32_t t11 = -1094824;

	t11 = ((x53<=(x54/x55))%x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = INT16_MAX;
	int8_t x58 = -13;
	volatile int64_t t12 = 2599806271LL;

	t12 = ((x57<=(x58/x59))%x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 2735U;
	uint16_t x62 = 75U;
	uint16_t x63 = 199U;
	volatile int32_t t13 = 11686613;

	t13 = ((x61<=(x62/x63))%x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 644538416U;
	int8_t x66 = 34;
	volatile int32_t t14 = -1164762;

	t14 = ((x65<=(x66/x67))%x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x69 = 41U;
	int8_t x71 = INT8_MIN;
	volatile int32_t x72 = -350335982;

	t15 = ((x69<=(x70/x71))%x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = UINT8_MAX;
	int16_t x78 = INT16_MIN;
	volatile int32_t x80 = INT32_MIN;

	t16 = ((x77<=(x78/x79))%x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = UINT64_MAX;
	uint8_t x84 = 7U;
	int32_t t17 = -286053;

	t17 = ((x81<=(x82/x83))%x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = INT16_MIN;
	static int64_t x90 = INT64_MIN;
	int16_t x92 = -1;

	t18 = ((x89<=(x90/x91))%x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x93 = INT8_MIN;
	int32_t x94 = 236117;
	volatile uint16_t x95 = UINT16_MAX;
	static int32_t t19 = 1039202191;

	t19 = ((x93<=(x94/x95))%x96);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x97 = INT8_MAX;
	int16_t x98 = 2;
	int8_t x99 = INT8_MIN;
	static int8_t x100 = 6;
	volatile int32_t t20 = 16173;

	t20 = ((x97<=(x98/x99))%x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -39;
	volatile int8_t x102 = INT8_MIN;
	volatile int32_t x103 = -1;
	uint8_t x104 = 7U;
	volatile int32_t t21 = 22444495;

	t21 = ((x101<=(x102/x103))%x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MIN;
	volatile int8_t x106 = -1;
	uint8_t x107 = 1U;
	uint64_t x108 = 29206199LLU;
	static volatile uint64_t t22 = 199LLU;

	t22 = ((x105<=(x106/x107))%x108);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x109 = UINT16_MAX;
	int32_t x110 = -970;
	static int32_t x111 = -1;
	int64_t x112 = INT64_MIN;

	t23 = ((x109<=(x110/x111))%x112);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x114 = INT8_MIN;
	static int64_t x115 = INT64_MIN;
	volatile int32_t t24 = 41;

	t24 = ((x113<=(x114/x115))%x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x117 = UINT8_MAX;
	int32_t x119 = 34;
	int64_t t25 = 227706991891848LL;

	t25 = ((x117<=(x118/x119))%x120);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = 119260413LL;
	static int16_t x122 = INT16_MIN;
	int32_t x123 = INT32_MAX;
	int32_t x124 = INT32_MAX;
	volatile int32_t t26 = 7;

	t26 = ((x121<=(x122/x123))%x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -1LL;
	static int32_t x126 = -1217;
	uint32_t x127 = 39791085U;
	uint8_t x128 = 36U;

	t27 = ((x125<=(x126/x127))%x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MIN;
	volatile int8_t x131 = -1;
	static uint8_t x132 = UINT8_MAX;
	int32_t t28 = -86902;

	t28 = ((x129<=(x130/x131))%x132);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x133 = -1LL;
	volatile uint16_t x135 = UINT16_MAX;
	uint8_t x136 = 50U;

	t29 = ((x133<=(x134/x135))%x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	static int8_t x138 = 1;
	volatile int32_t x139 = INT32_MIN;
	uint8_t x140 = UINT8_MAX;

	t30 = ((x137<=(x138/x139))%x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = INT64_MAX;
	int16_t x142 = -1;
	int64_t x143 = INT64_MAX;
	static volatile int16_t x144 = INT16_MIN;
	int32_t t31 = 6673;

	t31 = ((x141<=(x142/x143))%x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MIN;

	t32 = ((x145<=(x146/x147))%x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x149 = -7;
	static volatile int8_t x150 = INT8_MAX;
	volatile uint8_t x151 = 27U;
	int32_t t33 = -23885;

	t33 = ((x149<=(x150/x151))%x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x154 = -7LL;
	uint32_t x155 = UINT32_MAX;
	volatile uint32_t t34 = 965899U;

	t34 = ((x153<=(x154/x155))%x156);

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -1;
	static volatile int8_t x158 = -1;
	volatile int8_t x159 = -1;
	uint16_t x160 = 332U;
	int32_t t35 = 14857;

	t35 = ((x157<=(x158/x159))%x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MIN;
	int16_t x163 = INT16_MAX;
	uint32_t t36 = 158747508U;

	t36 = ((x161<=(x162/x163))%x164);

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	volatile int64_t x166 = INT64_MAX;
	static int32_t x167 = INT32_MIN;
	static uint64_t x168 = 422317LLU;
	uint64_t t37 = 3764022903366370071LLU;

	t37 = ((x165<=(x166/x167))%x168);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x170 = -1;
	uint16_t x171 = UINT16_MAX;
	uint16_t x172 = UINT16_MAX;
	int32_t t38 = -1;

	t38 = ((x169<=(x170/x171))%x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -3361716;
	uint32_t x174 = UINT32_MAX;
	int8_t x176 = INT8_MAX;
	int32_t t39 = 319;

	t39 = ((x173<=(x174/x175))%x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = -12524288801073LL;
	uint8_t x178 = 9U;
	uint8_t x179 = UINT8_MAX;
	static volatile int32_t x180 = INT32_MIN;
	static int32_t t40 = 0;

	t40 = ((x177<=(x178/x179))%x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x181 = -1;
	int16_t x182 = 491;
	static int64_t x183 = INT64_MIN;
	volatile uint64_t x184 = 13342529LLU;
	volatile uint64_t t41 = 203786943110470LLU;

	t41 = ((x181<=(x182/x183))%x184);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x185 = 1U;
	static uint64_t x186 = 1226726533LLU;
	int8_t x187 = INT8_MIN;
	int32_t t42 = 405;

	t42 = ((x185<=(x186/x187))%x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -1LL;
	static uint32_t x191 = 318941U;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t43 = -40984;

	t43 = ((x189<=(x190/x191))%x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = 1U;
	volatile int64_t x194 = INT64_MAX;
	int32_t x195 = -5585;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t44 = -88;

	t44 = ((x193<=(x194/x195))%x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x197 = UINT16_MAX;
	int16_t x198 = 6;
	int16_t x199 = -208;
	volatile int64_t x200 = INT64_MIN;
	volatile int64_t t45 = 11084525415474628LL;

	t45 = ((x197<=(x198/x199))%x200);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 1LLU;
	static int32_t x202 = 972;
	int64_t x203 = INT64_MIN;
	static int32_t t46 = -509250;

	t46 = ((x201<=(x202/x203))%x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x205 = UINT8_MAX;
	int32_t x206 = INT32_MIN;
	int64_t x207 = INT64_MAX;
	volatile int32_t t47 = -2;

	t47 = ((x205<=(x206/x207))%x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x210 = UINT16_MAX;
	static uint32_t x211 = 197852782U;
	int8_t x212 = INT8_MAX;
	int32_t t48 = 3683;

	t48 = ((x209<=(x210/x211))%x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MIN;
	int8_t x215 = 30;
	int8_t x216 = INT8_MAX;
	int32_t t49 = 12;

	t49 = ((x213<=(x214/x215))%x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = 12283501133LL;
	volatile int16_t x219 = -6;
	static int64_t x220 = 20671LL;
	int64_t t50 = -1017916485011LL;

	t50 = ((x217<=(x218/x219))%x220);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x221 = 19U;
	volatile int64_t x222 = -1LL;
	volatile uint64_t x223 = 8788057869566154847LLU;
	uint8_t x224 = 54U;
	static int32_t t51 = -2;

	t51 = ((x221<=(x222/x223))%x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x226 = -1LL;
	int16_t x227 = INT16_MAX;

	t52 = ((x225<=(x226/x227))%x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = 1396575648722044LL;
	int64_t x230 = INT64_MIN;
	static uint32_t t53 = 3U;

	t53 = ((x229<=(x230/x231))%x232);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x234 = 18092878857811LLU;
	volatile uint16_t x235 = UINT16_MAX;
	uint32_t x236 = 3339U;
	volatile uint32_t t54 = 114U;

	t54 = ((x233<=(x234/x235))%x236);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x238 = 4431U;
	int32_t x239 = INT32_MIN;
	int64_t x240 = 9244880840654LL;
	volatile int64_t t55 = 17737788450LL;

	t55 = ((x237<=(x238/x239))%x240);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x245 = 15815796286378LL;
	uint64_t x248 = UINT64_MAX;
	static uint64_t t56 = 7439LLU;

	t56 = ((x245<=(x246/x247))%x248);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x249 = 2016U;
	volatile uint16_t x250 = 58U;
	volatile uint32_t x251 = 371U;
	int8_t x252 = -1;
	int32_t t57 = -448675300;

	t57 = ((x249<=(x250/x251))%x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = 7104U;
	static uint8_t x255 = 1U;
	uint8_t x256 = 1U;
	static int32_t t58 = 58;

	t58 = ((x253<=(x254/x255))%x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x257 = UINT64_MAX;
	volatile int16_t x258 = INT16_MIN;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = INT16_MIN;

	t59 = ((x257<=(x258/x259))%x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = -8083302445930188LL;
	static int32_t x262 = INT32_MAX;
	uint8_t x263 = 19U;
	int64_t x264 = -1LL;
	static int64_t t60 = 1003544628LL;

	t60 = ((x261<=(x262/x263))%x264);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = 10;
	uint8_t x268 = 2U;
	volatile int32_t t61 = 119449917;

	t61 = ((x265<=(x266/x267))%x268);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x271 = 134043305LL;

	t62 = ((x269<=(x270/x271))%x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x278 = -1;
	static int64_t x279 = 449859079972396032LL;
	int32_t x280 = INT32_MIN;
	int32_t t63 = 0;

	t63 = ((x277<=(x278/x279))%x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x281 = 278893;
	int64_t x282 = 30002585423516093LL;
	volatile uint32_t x283 = 6506929U;
	static int64_t x284 = -1LL;

	t64 = ((x281<=(x282/x283))%x284);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = INT8_MIN;
	int8_t x287 = 23;
	volatile int32_t t65 = 0;

	t65 = ((x285<=(x286/x287))%x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x290 = -9;
	static int32_t x291 = -1;
	int32_t t66 = -461;

	t66 = ((x289<=(x290/x291))%x292);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x294 = INT32_MIN;
	int64_t x296 = -1LL;
	static volatile int64_t t67 = -189478475LL;

	t67 = ((x293<=(x294/x295))%x296);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x297 = 0;
	int32_t x298 = INT32_MIN;
	static uint32_t t68 = 2331U;

	t68 = ((x297<=(x298/x299))%x300);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x301 = 0U;
	uint8_t x303 = 1U;
	static int64_t x304 = INT64_MIN;
	volatile int64_t t69 = -174LL;

	t69 = ((x301<=(x302/x303))%x304);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = -1;
	int8_t x307 = -5;
	int32_t x308 = -1;

	t70 = ((x305<=(x306/x307))%x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x310 = 1351;
	static int64_t x312 = INT64_MIN;
	volatile int64_t t71 = -16636758LL;

	t71 = ((x309<=(x310/x311))%x312);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x313 = 112898750290952280LLU;
	int32_t x314 = INT32_MIN;
	uint8_t x315 = 1U;
	int16_t x316 = INT16_MAX;
	int32_t t72 = 1;

	t72 = ((x313<=(x314/x315))%x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x317 = -1136300211003517LL;
	int32_t x318 = -28238552;
	volatile int32_t x319 = INT32_MIN;
	uint32_t x320 = 139056393U;
	uint32_t t73 = 5799U;

	t73 = ((x317<=(x318/x319))%x320);

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = INT32_MAX;
	int8_t x322 = INT8_MIN;
	volatile uint16_t x323 = 1020U;
	static int8_t x324 = -1;
	volatile int32_t t74 = 94976934;

	t74 = ((x321<=(x322/x323))%x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x325 = INT8_MIN;
	static int32_t x326 = INT32_MAX;
	int32_t x328 = INT32_MIN;
	static int32_t t75 = -99703;

	t75 = ((x325<=(x326/x327))%x328);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x330 = INT32_MAX;
	int8_t x331 = -13;
	uint32_t t76 = 487U;

	t76 = ((x329<=(x330/x331))%x332);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = -1;
	volatile int64_t x334 = -1LL;
	int32_t x335 = INT32_MAX;
	static volatile int64_t x336 = 109659403385LL;
	int64_t t77 = -37618531130LL;

	t77 = ((x333<=(x334/x335))%x336);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x337 = 99U;
	static int8_t x338 = INT8_MAX;
	uint16_t x339 = 26263U;
	static uint8_t x340 = UINT8_MAX;
	volatile int32_t t78 = -7176429;

	t78 = ((x337<=(x338/x339))%x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = INT8_MIN;
	static volatile uint32_t x342 = 215613955U;
	int32_t x343 = INT32_MIN;
	volatile int8_t x344 = INT8_MAX;
	volatile int32_t t79 = -1084986;

	t79 = ((x341<=(x342/x343))%x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MAX;
	uint32_t x348 = 6899352U;
	uint32_t t80 = 176392U;

	t80 = ((x345<=(x346/x347))%x348);

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = INT16_MAX;
	uint16_t x350 = 16U;
	int64_t x351 = -3LL;

	t81 = ((x349<=(x350/x351))%x352);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x353 = INT32_MAX;
	uint16_t x354 = 3U;
	int64_t x356 = -1LL;
	int64_t t82 = -17784LL;

	t82 = ((x353<=(x354/x355))%x356);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = INT16_MIN;
	uint32_t x358 = 32978U;
	int16_t x359 = INT16_MIN;
	static volatile int8_t x360 = -1;
	volatile int32_t t83 = 249202;

	t83 = ((x357<=(x358/x359))%x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x361 = -1LL;
	volatile uint64_t x362 = 198940LLU;
	int32_t x364 = INT32_MIN;
	static volatile int32_t t84 = 28237677;

	t84 = ((x361<=(x362/x363))%x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x366 = -2614055LL;
	uint64_t x367 = 50484161269263503LLU;
	uint32_t x368 = 412004793U;

	t85 = ((x365<=(x366/x367))%x368);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x369 = 56U;
	int8_t x370 = INT8_MIN;
	static uint8_t x371 = 2U;
	static volatile uint64_t x372 = 19073010317LLU;
	uint64_t t86 = 394453486392921253LLU;

	t86 = ((x369<=(x370/x371))%x372);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x373 = INT32_MAX;
	volatile uint8_t x374 = 83U;
	static int64_t x375 = -4380631996784000535LL;
	int16_t x376 = INT16_MAX;

	t87 = ((x373<=(x374/x375))%x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x377 = 3;
	int32_t x378 = INT32_MIN;
	int32_t x379 = 1618;
	int16_t x380 = -1;
	static volatile int32_t t88 = 277;

	t88 = ((x377<=(x378/x379))%x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x381 = INT64_MIN;
	volatile int64_t x382 = -667932180LL;
	uint16_t x383 = 2870U;
	volatile int32_t x384 = INT32_MIN;
	volatile int32_t t89 = 206525;

	t89 = ((x381<=(x382/x383))%x384);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x385 = INT64_MAX;
	static int16_t x388 = INT16_MAX;
	volatile int32_t t90 = -791629061;

	t90 = ((x385<=(x386/x387))%x388);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x389 = 14282062U;
	uint8_t x390 = 36U;
	uint64_t x391 = 8182441000LLU;
	static volatile uint16_t x392 = 30024U;

	t91 = ((x389<=(x390/x391))%x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x396 = INT16_MAX;

	t92 = ((x393<=(x394/x395))%x396);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x397 = 486U;
	static volatile uint32_t x400 = 8285975U;
	volatile uint32_t t93 = 2907722U;

	t93 = ((x397<=(x398/x399))%x400);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = 71935;
	int8_t x402 = 7;
	static volatile int16_t x403 = INT16_MIN;
	int64_t x404 = INT64_MIN;
	int64_t t94 = 3698816371658388LL;

	t94 = ((x401<=(x402/x403))%x404);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = -1;
	int32_t x406 = INT32_MAX;
	volatile int64_t x407 = INT64_MAX;
	uint64_t x408 = 118648559LLU;
	uint64_t t95 = 20774LLU;

	t95 = ((x405<=(x406/x407))%x408);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x410 = INT64_MIN;
	volatile int8_t x411 = INT8_MIN;
	static uint64_t x412 = UINT64_MAX;
	volatile uint64_t t96 = 671049069684948912LLU;

	t96 = ((x409<=(x410/x411))%x412);

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x413 = 67;
	uint64_t x414 = 4065808LLU;
	int32_t x415 = INT32_MIN;
	uint16_t x416 = 100U;
	volatile int32_t t97 = 10112;

	t97 = ((x413<=(x414/x415))%x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x417 = 14U;
	uint32_t x419 = 1745U;
	uint8_t x420 = 5U;

	t98 = ((x417<=(x418/x419))%x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x421 = INT8_MAX;
	uint64_t x422 = 21705203259459LLU;
	static volatile int8_t x423 = -1;
	uint8_t x424 = 44U;
	int32_t t99 = 39;

	t99 = ((x421<=(x422/x423))%x424);

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

