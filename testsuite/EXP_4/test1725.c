#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x11 = UINT64_MAX;
volatile int8_t x14 = 0;
int32_t t2 = -3051525;
uint32_t x23 = UINT32_MAX;
static int16_t x29 = INT16_MIN;
static uint16_t x30 = UINT16_MAX;
volatile int32_t t6 = -469490804;
volatile uint8_t x37 = 1U;
volatile int32_t x38 = INT32_MIN;
int16_t x48 = INT16_MAX;
int32_t t9 = 781709017;
volatile uint8_t x55 = UINT8_MAX;
volatile int32_t t10 = 5;
int8_t x61 = INT8_MAX;
int64_t x65 = INT64_MAX;
int32_t x71 = 2;
volatile int32_t t15 = 5;
uint16_t x79 = 1514U;
static volatile int8_t x93 = -1;
uint8_t x95 = UINT8_MAX;
int64_t x102 = -182806325LL;
uint32_t x121 = 8938U;
int64_t x134 = INT64_MAX;
volatile int64_t x135 = -1LL;
uint64_t x145 = UINT64_MAX;
int16_t x150 = INT16_MIN;
static uint8_t x152 = 79U;
int32_t x159 = -1;
int8_t x167 = 4;
volatile int32_t t31 = 15741;
uint8_t x171 = 7U;
int64_t x173 = INT64_MAX;
volatile int32_t t33 = -1;
volatile int8_t x190 = -14;
uint8_t x195 = 0U;
uint8_t x196 = 1U;
uint16_t x199 = 180U;
static int64_t x212 = -1LL;
uint16_t x221 = UINT16_MAX;
static uint64_t x240 = UINT64_MAX;
volatile int32_t t44 = 1;
uint32_t x252 = 506413824U;
volatile int64_t x256 = 1938LL;
uint32_t x266 = UINT32_MAX;
int32_t t50 = 2587703;
int32_t x271 = INT32_MIN;
static int32_t t52 = 26380;
int32_t x280 = 5;
static volatile int8_t x282 = -1;
int8_t x286 = -1;
uint64_t x287 = 3064238448LLU;
uint64_t x300 = UINT64_MAX;
uint32_t x303 = 12559U;
uint64_t x305 = 0LLU;
int32_t x309 = INT32_MAX;
static uint16_t x312 = 1780U;
int32_t x313 = -1;
volatile int16_t x323 = -1;
uint64_t x329 = 8709LLU;
volatile int32_t t63 = -296942;
static uint64_t x338 = UINT64_MAX;
static uint8_t x347 = 15U;
uint8_t x349 = UINT8_MAX;
uint16_t x359 = 19U;
int8_t x366 = INT8_MAX;
static volatile int32_t t70 = -39554948;
static uint32_t x382 = UINT32_MAX;
int16_t x386 = 3;
static uint64_t x397 = UINT64_MAX;
volatile int64_t x400 = INT64_MIN;
volatile int32_t t75 = -310470752;
volatile int8_t x410 = 1;
int32_t x411 = INT32_MIN;
volatile uint8_t x437 = UINT8_MAX;
volatile uint8_t x441 = 2U;
static uint64_t x446 = UINT64_MAX;
int16_t x447 = 14;
static volatile int32_t t86 = 29394;
volatile uint16_t x476 = UINT16_MAX;
int32_t x477 = INT32_MIN;
int64_t x481 = 258670636LL;
uint8_t x482 = 47U;
static volatile int32_t t95 = 311205;
static int16_t x499 = INT16_MAX;
uint16_t x507 = 460U;
static int32_t t98 = -564539;
int32_t t99 = -613689010;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = -1;
	uint16_t x3 = 8236U;
	volatile int8_t x4 = INT8_MIN;
	int32_t t0 = 65310;

	t0 = (x1<(x2*(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	uint16_t x12 = 6U;
	int32_t t1 = 0;

	t1 = (x9<(x10*(x11&x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	int32_t x15 = INT32_MIN;
	uint64_t x16 = 9769965LLU;

	t2 = (x13<(x14*(x15&x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = -1;
	static volatile int8_t x22 = INT8_MIN;
	int32_t x24 = -1;
	volatile int32_t t3 = 247;

	t3 = (x21<(x22*(x23&x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -57;
	int32_t x26 = INT32_MIN;
	int8_t x27 = 0;
	volatile int32_t x28 = -1;
	static int32_t t4 = -27331057;

	t4 = (x25<(x26*(x27&x28)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x31 = 71276;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t5 = 5;

	t5 = (x29<(x30*(x31&x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -3571;
	static uint8_t x34 = 8U;
	int8_t x35 = 3;
	static int8_t x36 = -1;

	t6 = (x33<(x34*(x35&x36)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x39 = UINT64_MAX;
	int8_t x40 = INT8_MAX;
	volatile int32_t t7 = -1;

	t7 = (x37<(x38*(x39&x40)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	volatile int32_t x42 = -1;
	volatile int8_t x43 = 1;
	uint16_t x44 = 43U;
	volatile int32_t t8 = 87444;

	t8 = (x41<(x42*(x43&x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 1U;
	int16_t x46 = INT16_MAX;
	uint16_t x47 = 8315U;

	t9 = (x45<(x46*(x47&x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 1U;
	uint32_t x54 = UINT32_MAX;
	int32_t x56 = INT32_MIN;

	t10 = (x53<(x54*(x55&x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x57 = INT8_MIN;
	volatile int32_t x58 = -1;
	static uint32_t x59 = 1U;
	uint8_t x60 = 75U;
	int32_t t11 = 15822;

	t11 = (x57<(x58*(x59&x60)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x62 = 2;
	int64_t x63 = -1LL;
	int16_t x64 = INT16_MIN;
	volatile int32_t t12 = 44;

	t12 = (x61<(x62*(x63&x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x66 = 18236949LL;
	volatile int32_t x67 = INT32_MIN;
	volatile uint8_t x68 = 2U;
	volatile int32_t t13 = 9773;

	t13 = (x65<(x66*(x67&x68)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = 0U;
	static int64_t x70 = 23372427LL;
	uint16_t x72 = 521U;
	static volatile int32_t t14 = -4;

	t14 = (x69<(x70*(x71&x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = -2036541;
	int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MIN;
	volatile uint64_t x76 = UINT64_MAX;

	t15 = (x73<(x74*(x75&x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 39U;
	uint8_t x78 = 6U;
	volatile int64_t x80 = -322990964155LL;
	int32_t t16 = 132472556;

	t16 = (x77<(x78*(x79&x80)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MIN;
	volatile int16_t x82 = INT16_MIN;
	int32_t x83 = -1;
	int8_t x84 = -1;
	int32_t t17 = 14;

	t17 = (x81<(x82*(x83&x84)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MAX;
	volatile int16_t x86 = 13;
	volatile int32_t x87 = -1;
	static uint64_t x88 = 31515116029LLU;
	volatile int32_t t18 = 3215;

	t18 = (x85<(x86*(x87&x88)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x94 = INT16_MIN;
	uint8_t x96 = 109U;
	volatile int32_t t19 = 518712;

	t19 = (x93<(x94*(x95&x96)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = -1LL;
	static int32_t x98 = 620915271;
	static uint16_t x99 = 14200U;
	static uint32_t x100 = 40U;
	volatile int32_t t20 = -1054790297;

	t20 = (x97<(x98*(x99&x100)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x101 = 22U;
	uint16_t x103 = 0U;
	int16_t x104 = INT16_MIN;
	int32_t t21 = 1265173;

	t21 = (x101<(x102*(x103&x104)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x105 = UINT64_MAX;
	volatile int32_t x106 = 335024;
	static uint64_t x107 = 30261231LLU;
	uint32_t x108 = 15U;
	static int32_t t22 = -91957613;

	t22 = (x105<(x106*(x107&x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x113 = 12U;
	static int8_t x114 = -1;
	int32_t x115 = 610994797;
	uint32_t x116 = 62U;
	int32_t t23 = -5014593;

	t23 = (x113<(x114*(x115&x116)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = UINT64_MAX;
	volatile int64_t x118 = -16766LL;
	static int16_t x119 = INT16_MIN;
	int32_t x120 = INT32_MAX;
	int32_t t24 = -792;

	t24 = (x117<(x118*(x119&x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x122 = INT8_MIN;
	int64_t x123 = -1LL;
	int32_t x124 = INT32_MIN;
	volatile int32_t t25 = 2;

	t25 = (x121<(x122*(x123&x124)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = -1;
	uint64_t x136 = 6536LLU;
	static volatile int32_t t26 = 4778150;

	t26 = (x133<(x134*(x135&x136)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x146 = -3;
	static int16_t x147 = INT16_MIN;
	int64_t x148 = 911LL;
	static volatile int32_t t27 = -54951;

	t27 = (x145<(x146*(x147&x148)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x149 = INT64_MIN;
	int32_t x151 = -190259968;
	int32_t t28 = 25587;

	t28 = (x149<(x150*(x151&x152)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x153 = 72U;
	volatile int8_t x154 = INT8_MIN;
	static volatile uint16_t x155 = UINT16_MAX;
	int64_t x156 = INT64_MIN;
	int32_t t29 = -1954245;

	t29 = (x153<(x154*(x155&x156)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x157 = -1;
	int16_t x158 = 97;
	static int16_t x160 = 616;
	int32_t t30 = 22117346;

	t30 = (x157<(x158*(x159&x160)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x165 = 10U;
	int64_t x166 = INT64_MIN;
	uint16_t x168 = 11U;

	t31 = (x165<(x166*(x167&x168)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = 689294238;
	int16_t x170 = INT16_MAX;
	int16_t x172 = INT16_MIN;
	static volatile int32_t t32 = 65670216;

	t32 = (x169<(x170*(x171&x172)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x174 = 83926LLU;
	int8_t x175 = INT8_MAX;
	int8_t x176 = INT8_MIN;

	t33 = (x173<(x174*(x175&x176)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x182 = 13LLU;
	int32_t x183 = INT32_MAX;
	int64_t x184 = -7211651LL;
	static int32_t t34 = -267;

	t34 = (x181<(x182*(x183&x184)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = 1221;
	uint16_t x186 = 9794U;
	int8_t x187 = -1;
	volatile uint32_t x188 = 5154U;
	volatile int32_t t35 = 0;

	t35 = (x185<(x186*(x187&x188)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = INT64_MIN;
	volatile uint32_t x191 = UINT32_MAX;
	int64_t x192 = INT64_MIN;
	static int32_t t36 = 6;

	t36 = (x189<(x190*(x191&x192)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x193 = 59644270474852LLU;
	static int64_t x194 = INT64_MAX;
	int32_t t37 = -1810;

	t37 = (x193<(x194*(x195&x196)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x197 = INT8_MIN;
	static int16_t x198 = INT16_MIN;
	int16_t x200 = 32;
	volatile int32_t t38 = 532707;

	t38 = (x197<(x198*(x199&x200)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x205 = INT32_MIN;
	uint32_t x206 = 6U;
	int64_t x207 = INT64_MAX;
	volatile uint8_t x208 = 55U;
	volatile int32_t t39 = 1289452;

	t39 = (x205<(x206*(x207&x208)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x209 = INT8_MIN;
	static int16_t x210 = INT16_MAX;
	int16_t x211 = -1;
	static int32_t t40 = 142020635;

	t40 = (x209<(x210*(x211&x212)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x222 = 2748;
	static int32_t x223 = INT32_MIN;
	static int8_t x224 = 6;
	volatile int32_t t41 = 662;

	t41 = (x221<(x222*(x223&x224)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x225 = 8707871273595855LL;
	int8_t x226 = INT8_MIN;
	uint32_t x227 = 7902U;
	volatile int64_t x228 = INT64_MAX;
	volatile int32_t t42 = -1540;

	t42 = (x225<(x226*(x227&x228)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x229 = 53LLU;
	int64_t x230 = -123760LL;
	int32_t x231 = -1;
	static int32_t x232 = 170;
	static int32_t t43 = -52103;

	t43 = (x229<(x230*(x231&x232)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x237 = 10U;
	uint32_t x238 = 20578U;
	int32_t x239 = -9018540;

	t44 = (x237<(x238*(x239&x240)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x241 = 23020986999395LLU;
	uint16_t x242 = 1397U;
	uint8_t x243 = 100U;
	int8_t x244 = INT8_MAX;
	static int32_t t45 = 4;

	t45 = (x241<(x242*(x243&x244)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x245 = INT64_MIN;
	int64_t x246 = -1LL;
	static int16_t x247 = 1;
	volatile uint32_t x248 = 45U;
	volatile int32_t t46 = -18403336;

	t46 = (x245<(x246*(x247&x248)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x249 = 161LL;
	volatile uint16_t x250 = 8U;
	static volatile uint16_t x251 = UINT16_MAX;
	int32_t t47 = -12613118;

	t47 = (x249<(x250*(x251&x252)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x253 = UINT64_MAX;
	uint32_t x254 = 1102708107U;
	uint8_t x255 = 17U;
	int32_t t48 = 46;

	t48 = (x253<(x254*(x255&x256)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x261 = INT32_MIN;
	int32_t x262 = INT32_MAX;
	uint32_t x263 = 13872593U;
	int16_t x264 = -1;
	volatile int32_t t49 = -239477155;

	t49 = (x261<(x262*(x263&x264)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x265 = 53401760U;
	static uint64_t x267 = 13058469162914478LLU;
	int64_t x268 = INT64_MIN;

	t50 = (x265<(x266*(x267&x268)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x269 = UINT16_MAX;
	uint64_t x270 = 215782214688LLU;
	static int8_t x272 = INT8_MIN;
	volatile int32_t t51 = 87326355;

	t51 = (x269<(x270*(x271&x272)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x273 = 6U;
	uint64_t x274 = UINT64_MAX;
	static int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MIN;

	t52 = (x273<(x274*(x275&x276)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x277 = INT16_MIN;
	int32_t x278 = -1;
	int16_t x279 = INT16_MIN;
	volatile int32_t t53 = 5165;

	t53 = (x277<(x278*(x279&x280)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x281 = -1;
	int8_t x283 = INT8_MIN;
	volatile int16_t x284 = INT16_MIN;
	static int32_t t54 = 3;

	t54 = (x281<(x282*(x283&x284)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x285 = UINT64_MAX;
	static int64_t x288 = INT64_MAX;
	volatile int32_t t55 = 34;

	t55 = (x285<(x286*(x287&x288)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x297 = 0;
	volatile int64_t x298 = 30363437079LL;
	volatile int32_t x299 = INT32_MAX;
	volatile int32_t t56 = -38300194;

	t56 = (x297<(x298*(x299&x300)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x301 = -2;
	int32_t x302 = -1;
	volatile int16_t x304 = INT16_MIN;
	static int32_t t57 = -2;

	t57 = (x301<(x302*(x303&x304)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x306 = INT16_MAX;
	int16_t x307 = -3;
	int16_t x308 = INT16_MIN;
	static int32_t t58 = 3649;

	t58 = (x305<(x306*(x307&x308)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x310 = -1;
	volatile int64_t x311 = -1932974200427LL;
	int32_t t59 = -5;

	t59 = (x309<(x310*(x311&x312)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x314 = INT16_MIN;
	volatile int8_t x315 = INT8_MAX;
	uint32_t x316 = UINT32_MAX;
	int32_t t60 = -15925;

	t60 = (x313<(x314*(x315&x316)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x321 = INT8_MIN;
	static int64_t x322 = -1LL;
	uint16_t x324 = 7991U;
	int32_t t61 = 31809;

	t61 = (x321<(x322*(x323&x324)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x325 = -172456;
	volatile int32_t x326 = INT32_MAX;
	int8_t x327 = INT8_MIN;
	volatile uint64_t x328 = UINT64_MAX;
	static volatile int32_t t62 = -160032727;

	t62 = (x325<(x326*(x327&x328)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x330 = 25485U;
	volatile int64_t x331 = INT64_MIN;
	volatile uint32_t x332 = 35000412U;

	t63 = (x329<(x330*(x331&x332)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x337 = 82U;
	volatile int16_t x339 = -1;
	uint8_t x340 = UINT8_MAX;
	int32_t t64 = 109428;

	t64 = (x337<(x338*(x339&x340)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x341 = 3838;
	static int8_t x342 = -1;
	uint32_t x343 = 4U;
	uint32_t x344 = 12675U;
	int32_t t65 = -157728;

	t65 = (x341<(x342*(x343&x344)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x345 = 267U;
	uint16_t x346 = UINT16_MAX;
	uint16_t x348 = 13U;
	int32_t t66 = 1972;

	t66 = (x345<(x346*(x347&x348)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x350 = -1LL;
	int32_t x351 = -263508417;
	uint32_t x352 = 221U;
	int32_t t67 = 0;

	t67 = (x349<(x350*(x351&x352)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x357 = INT64_MIN;
	uint8_t x358 = 25U;
	int32_t x360 = INT32_MIN;
	volatile int32_t t68 = -14026;

	t68 = (x357<(x358*(x359&x360)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x361 = INT8_MAX;
	static volatile uint64_t x362 = UINT64_MAX;
	volatile int16_t x363 = INT16_MIN;
	uint64_t x364 = 188525111LLU;
	int32_t t69 = -279376;

	t69 = (x361<(x362*(x363&x364)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x365 = INT32_MIN;
	uint16_t x367 = UINT16_MAX;
	int8_t x368 = 6;

	t70 = (x365<(x366*(x367&x368)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x373 = 1448;
	static volatile int32_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	int8_t x376 = INT8_MIN;
	static int32_t t71 = -1;

	t71 = (x373<(x374*(x375&x376)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x381 = 1;
	volatile uint16_t x383 = UINT16_MAX;
	volatile int32_t x384 = INT32_MIN;
	volatile int32_t t72 = -20;

	t72 = (x381<(x382*(x383&x384)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x385 = UINT64_MAX;
	uint16_t x387 = 2095U;
	uint64_t x388 = 1944505LLU;
	int32_t t73 = -38;

	t73 = (x385<(x386*(x387&x388)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x389 = INT32_MIN;
	int8_t x390 = 0;
	volatile int32_t x391 = 99;
	int16_t x392 = INT16_MAX;
	int32_t t74 = 5;

	t74 = (x389<(x390*(x391&x392)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x398 = INT32_MIN;
	static uint8_t x399 = 2U;

	t75 = (x397<(x398*(x399&x400)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x405 = INT16_MIN;
	static uint32_t x406 = UINT32_MAX;
	uint8_t x407 = 24U;
	int32_t x408 = INT32_MIN;
	volatile int32_t t76 = 43;

	t76 = (x405<(x406*(x407&x408)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x409 = -1LL;
	volatile int16_t x412 = 3841;
	int32_t t77 = 2297809;

	t77 = (x409<(x410*(x411&x412)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x413 = -328612050;
	int16_t x414 = -1;
	volatile int8_t x415 = INT8_MIN;
	static uint64_t x416 = 191199LLU;
	int32_t t78 = 25667868;

	t78 = (x413<(x414*(x415&x416)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x417 = -1;
	int16_t x418 = -1;
	int16_t x419 = INT16_MIN;
	uint8_t x420 = 2U;
	volatile int32_t t79 = 161;

	t79 = (x417<(x418*(x419&x420)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x425 = INT64_MIN;
	int64_t x426 = 3726175LL;
	int32_t x427 = INT32_MIN;
	int32_t x428 = INT32_MIN;
	static int32_t t80 = 666418;

	t80 = (x425<(x426*(x427&x428)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x429 = INT8_MIN;
	static int16_t x430 = -3136;
	static int64_t x431 = -1LL;
	int16_t x432 = INT16_MAX;
	int32_t t81 = 80;

	t81 = (x429<(x430*(x431&x432)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x433 = -503149LL;
	int64_t x434 = -1LL;
	int64_t x435 = 14119LL;
	static int32_t x436 = INT32_MAX;
	int32_t t82 = -237265;

	t82 = (x433<(x434*(x435&x436)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x438 = 4681378011460587LL;
	static uint16_t x439 = 295U;
	static int64_t x440 = -1LL;
	static volatile int32_t t83 = 253938;

	t83 = (x437<(x438*(x439&x440)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x442 = 89;
	uint16_t x443 = 3U;
	int8_t x444 = INT8_MIN;
	int32_t t84 = 756139700;

	t84 = (x441<(x442*(x443&x444)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x445 = -1;
	uint16_t x448 = 857U;
	volatile int32_t t85 = 1;

	t85 = (x445<(x446*(x447&x448)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x453 = UINT32_MAX;
	volatile int64_t x454 = 5022LL;
	int16_t x455 = -1;
	int8_t x456 = INT8_MIN;

	t86 = (x453<(x454*(x455&x456)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x457 = UINT8_MAX;
	int8_t x458 = INT8_MAX;
	int32_t x459 = -1;
	int8_t x460 = INT8_MAX;
	int32_t t87 = 64876630;

	t87 = (x457<(x458*(x459&x460)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x461 = 0;
	int8_t x462 = INT8_MIN;
	volatile int8_t x463 = INT8_MIN;
	volatile int64_t x464 = -1LL;
	static volatile int32_t t88 = 54208256;

	t88 = (x461<(x462*(x463&x464)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x465 = -1;
	volatile int8_t x466 = INT8_MIN;
	volatile int16_t x467 = 1922;
	volatile uint64_t x468 = 59444540893421862LLU;
	volatile int32_t t89 = 25441;

	t89 = (x465<(x466*(x467&x468)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x469 = 25176U;
	static int32_t x470 = -1;
	uint16_t x471 = UINT16_MAX;
	volatile int16_t x472 = 148;
	int32_t t90 = 2935562;

	t90 = (x469<(x470*(x471&x472)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x473 = INT64_MIN;
	static uint32_t x474 = UINT32_MAX;
	int64_t x475 = INT64_MIN;
	static int32_t t91 = 0;

	t91 = (x473<(x474*(x475&x476)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x478 = 2U;
	static int32_t x479 = 15;
	int8_t x480 = 1;
	int32_t t92 = 1;

	t92 = (x477<(x478*(x479&x480)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x483 = 93;
	int32_t x484 = INT32_MIN;
	static volatile int32_t t93 = 63072;

	t93 = (x481<(x482*(x483&x484)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x485 = INT32_MIN;
	volatile uint64_t x486 = 293LLU;
	int64_t x487 = -1LL;
	int64_t x488 = -1LL;
	volatile int32_t t94 = 4371;

	t94 = (x485<(x486*(x487&x488)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x489 = 30U;
	int32_t x490 = 30292005;
	uint64_t x491 = 50785945321285LLU;
	int32_t x492 = INT32_MIN;

	t95 = (x489<(x490*(x491&x492)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x493 = INT64_MIN;
	static uint64_t x494 = UINT64_MAX;
	volatile uint16_t x495 = UINT16_MAX;
	static volatile int8_t x496 = -1;
	int32_t t96 = -1;

	t96 = (x493<(x494*(x495&x496)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x497 = 76LLU;
	int32_t x498 = -167;
	uint64_t x500 = UINT64_MAX;
	volatile int32_t t97 = -1;

	t97 = (x497<(x498*(x499&x500)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x505 = INT16_MIN;
	int32_t x506 = -1;
	int32_t x508 = 1;

	t98 = (x505<(x506*(x507&x508)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x509 = INT16_MIN;
	uint8_t x510 = UINT8_MAX;
	int32_t x511 = 116;
	static volatile int64_t x512 = INT64_MAX;

	t99 = (x509<(x510*(x511&x512)));

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

