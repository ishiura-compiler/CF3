#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 5353LLU;
static uint64_t x3 = 61675267051LLU;
static int16_t x17 = 13277;
static int32_t x20 = 14668311;
static int64_t x23 = -3126864032184940LL;
int16_t x42 = INT16_MIN;
int8_t x43 = -1;
static uint16_t x56 = 70U;
volatile int32_t t9 = -4;
volatile int8_t x76 = INT8_MIN;
static volatile int8_t x78 = -1;
volatile int8_t x79 = -1;
volatile int32_t x81 = INT32_MIN;
volatile uint8_t x82 = UINT8_MAX;
int32_t x86 = INT32_MAX;
volatile int64_t t15 = -6477037183438840LL;
int64_t x93 = -1LL;
uint8_t x95 = UINT8_MAX;
int64_t x96 = INT64_MAX;
volatile uint64_t t17 = 3LLU;
uint64_t x130 = 6017798996LLU;
volatile int32_t x138 = INT32_MIN;
uint32_t x140 = 1440447U;
volatile int64_t t24 = 272731265027166505LL;
int32_t x152 = -1;
int64_t t27 = 70870682LL;
int8_t x161 = -1;
uint64_t t29 = 85785179171LLU;
int8_t x166 = -29;
int32_t x167 = INT32_MIN;
uint32_t t32 = 6853U;
uint64_t x198 = UINT64_MAX;
int32_t x199 = INT32_MIN;
uint64_t x201 = 332743071946038LLU;
volatile uint16_t x205 = UINT16_MAX;
uint32_t x210 = 965U;
volatile int64_t x212 = INT64_MAX;
int64_t x216 = INT64_MAX;
int16_t x220 = INT16_MAX;
int64_t x227 = 1442534276694118LL;
int8_t x239 = -18;
volatile int8_t x240 = INT8_MAX;
static uint64_t x256 = UINT64_MAX;
volatile uint8_t x258 = 7U;
int16_t x259 = INT16_MIN;
static uint32_t x261 = UINT32_MAX;
int16_t x262 = INT16_MIN;
volatile uint32_t t50 = 21386690U;
int64_t t51 = -5080128635LL;
int64_t x292 = INT64_MIN;
static int64_t t55 = 50LL;
int16_t x308 = -6966;
int64_t x310 = -1LL;
int16_t x314 = 0;
int8_t x316 = -3;
uint64_t t60 = 306LLU;
int8_t x318 = 4;
static uint8_t x319 = UINT8_MAX;
int32_t x327 = INT32_MIN;
volatile int8_t x332 = INT8_MIN;
volatile int8_t x338 = 0;
int64_t x340 = 2786LL;
int8_t x351 = INT8_MIN;
volatile uint64_t t69 = 1048612169LLU;
static int64_t x370 = -1LL;
uint8_t x376 = UINT8_MAX;
volatile int32_t t74 = 1998069;
volatile int32_t x383 = INT32_MAX;
int8_t x384 = INT8_MIN;
int16_t x386 = INT16_MIN;
static uint8_t x387 = UINT8_MAX;
int64_t x401 = INT64_MIN;
static uint8_t x402 = 107U;
volatile int32_t t81 = -807283256;
int64_t x411 = -1LL;
int16_t x413 = 12374;
int8_t x416 = INT8_MIN;
int8_t x418 = INT8_MAX;
int8_t x419 = 2;
uint64_t t87 = 30442495831837LLU;
uint16_t x439 = 312U;
uint64_t x451 = 67428677447LLU;
int16_t x453 = -1;
uint64_t t91 = 22910122872441LLU;
static int64_t x461 = 486194938037925971LL;
int64_t x463 = -1LL;
volatile int64_t t92 = 30776664402LL;
static volatile int64_t x467 = 11887469LL;
static uint32_t x478 = 5950U;
volatile uint64_t t97 = 113551164454708LLU;
static int16_t x490 = INT16_MAX;
int64_t x491 = -302LL;
static volatile int64_t t98 = -2036266130952LL;
uint32_t x495 = 3U;


void f0(void) {
	int8_t x1 = -1;
	int16_t x4 = INT16_MIN;
	volatile uint64_t t0 = 167748550LLU;

	t0 = (((x1&x2)*x3)%x4);

	if (t0 != 330147704524003LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = UINT8_MAX;
	int32_t x14 = -14722;
	int8_t x15 = 2;
	static uint16_t x16 = 18U;
	static int32_t t1 = -1;

	t1 = (((x13&x14)*x15)%x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x18 = INT32_MIN;
	int64_t x19 = INT64_MIN;
	int64_t t2 = 239278142532439028LL;

	t2 = (((x17&x18)*x19)%x20);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MAX;
	static volatile int8_t x24 = -10;
	static int64_t t3 = 1914081911LL;

	t3 = (((x21&x22)*x23)%x24);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x29 = 11;
	int32_t x30 = 11027;
	int16_t x31 = INT16_MAX;
	int8_t x32 = INT8_MAX;
	int32_t t4 = 895;

	t4 = (((x29&x30)*x31)%x32);

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MIN;
	static int8_t x35 = INT8_MIN;
	int64_t x36 = -275LL;
	volatile int64_t t5 = -1LL;

	t5 = (((x33&x34)*x35)%x36);

	if (t5 != 4LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = 9U;
	uint8_t x44 = 80U;
	int32_t t6 = -7398;

	t6 = (((x41&x42)*x43)%x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = 96683LLU;
	int64_t x46 = -1LL;
	volatile int8_t x47 = -12;
	int64_t x48 = -27726838297339LL;
	static volatile uint64_t t7 = 2848726225LLU;

	t7 = (((x45&x46)*x47)%x48);

	if (t7 != 27726837137143LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = 339;
	uint32_t x50 = UINT32_MAX;
	int8_t x51 = 1;
	static int8_t x52 = 3;
	volatile uint32_t t8 = 163U;

	t8 = (((x49&x50)*x51)%x52);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x53 = 1659U;
	int16_t x54 = 3;
	static uint8_t x55 = UINT8_MAX;

	t9 = (((x53&x54)*x55)%x56);

	if (t9 != 65) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x61 = INT64_MIN;
	uint32_t x62 = UINT32_MAX;
	int32_t x63 = -166865;
	int32_t x64 = -530833130;
	volatile int64_t t10 = -1557LL;

	t10 = (((x61&x62)*x63)%x64);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = 3;
	int8_t x74 = INT8_MIN;
	static int64_t x75 = -16469LL;
	int64_t t11 = 55256787412854223LL;

	t11 = (((x73&x74)*x75)%x76);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x77 = 1U;
	int8_t x80 = -1;
	int32_t t12 = 0;

	t12 = (((x77&x78)*x79)%x80);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x83 = INT16_MAX;
	static int64_t x84 = INT64_MAX;
	volatile int64_t t13 = 15059411LL;

	t13 = (((x81&x82)*x83)%x84);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x85 = INT8_MAX;
	int8_t x87 = INT8_MIN;
	int32_t x88 = -1;
	volatile int32_t t14 = 656663813;

	t14 = (((x85&x86)*x87)%x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = -162717;
	static int64_t x90 = -4847761LL;
	static volatile int16_t x91 = -2264;
	uint32_t x92 = 421U;

	t15 = (((x89&x90)*x91)%x92);

	if (t15 != 186LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x94 = UINT64_MAX;
	static uint64_t t16 = 24LLU;

	t16 = (((x93&x94)*x95)%x96);

	if (t16 != 9223372036854775554LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x97 = 10670999245LLU;
	static int64_t x98 = INT64_MAX;
	volatile int32_t x99 = -859;
	int8_t x100 = 1;

	t17 = (((x97&x98)*x99)%x100);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x101 = -41;
	int8_t x102 = INT8_MAX;
	static uint32_t x103 = UINT32_MAX;
	uint8_t x104 = 1U;
	volatile uint32_t t18 = 444478U;

	t18 = (((x101&x102)*x103)%x104);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x113 = INT8_MIN;
	int16_t x114 = 93;
	int16_t x115 = INT16_MIN;
	volatile int8_t x116 = -1;
	int32_t t19 = -91520610;

	t19 = (((x113&x114)*x115)%x116);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x117 = INT64_MAX;
	int16_t x118 = INT16_MAX;
	uint32_t x119 = UINT32_MAX;
	int32_t x120 = INT32_MAX;
	volatile int64_t t20 = -56091LL;

	t20 = (((x117&x118)*x119)%x120);

	if (t20 != 32767LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x121 = UINT32_MAX;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = 1U;
	static int8_t x124 = -1;
	volatile uint32_t t21 = 68495U;

	t21 = (((x121&x122)*x123)%x124);

	if (t21 != 4294967168U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x125 = -300606LL;
	uint8_t x126 = 6U;
	volatile uint8_t x127 = 3U;
	volatile uint32_t x128 = UINT32_MAX;
	volatile int64_t t22 = 1633978383LL;

	t22 = (((x125&x126)*x127)%x128);

	if (t22 != 6LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x129 = 0U;
	volatile int16_t x131 = -11913;
	uint8_t x132 = 2U;
	static uint64_t t23 = 88474965777LLU;

	t23 = (((x129&x130)*x131)%x132);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x137 = 22U;
	static int64_t x139 = -56423481631269LL;

	t24 = (((x137&x138)*x139)%x140);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x141 = 837U;
	int64_t x142 = -1LL;
	static int16_t x143 = -1;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t25 = 72093322756177989LLU;

	t25 = (((x141&x142)*x143)%x144);

	if (t25 != 18446744073709550779LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x145 = 3131997U;
	uint16_t x146 = 12U;
	static volatile uint64_t x147 = UINT64_MAX;
	volatile int32_t x148 = INT32_MIN;
	uint64_t t26 = 40652757735480405LLU;

	t26 = (((x145&x146)*x147)%x148);

	if (t26 != 2147483636LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x149 = -1LL;
	uint16_t x150 = 0U;
	volatile int64_t x151 = -1LL;

	t27 = (((x149&x150)*x151)%x152);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = -1;
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = -1;
	int64_t x156 = 12448989739161LL;
	volatile int64_t t28 = 15712815LL;

	t28 = (((x153&x154)*x155)%x156);

	if (t28 != -255LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x162 = -1;
	uint64_t x163 = 17LLU;
	volatile int16_t x164 = INT16_MAX;

	t29 = (((x161&x162)*x163)%x164);

	if (t29 != 32766LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x165 = -1LL;
	uint8_t x168 = 1U;
	volatile int64_t t30 = -277587359332026LL;

	t30 = (((x165&x166)*x167)%x168);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x173 = 0;
	static int64_t x174 = INT64_MIN;
	static volatile uint16_t x175 = 1U;
	int32_t x176 = -1;
	static volatile int64_t t31 = -182250013LL;

	t31 = (((x173&x174)*x175)%x176);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x177 = 8U;
	int16_t x178 = INT16_MIN;
	static uint32_t x179 = UINT32_MAX;
	static int8_t x180 = INT8_MIN;

	t32 = (((x177&x178)*x179)%x180);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x185 = 2898LL;
	int8_t x186 = INT8_MIN;
	static uint16_t x187 = 65U;
	volatile int8_t x188 = -28;
	int64_t t33 = -540LL;

	t33 = (((x185&x186)*x187)%x188);

	if (t33 != 4LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x189 = 6807U;
	int8_t x190 = 12;
	int64_t x191 = 160124918174961298LL;
	static int64_t x192 = INT64_MAX;
	static volatile int64_t t34 = -105164560622528LL;

	t34 = (((x189&x190)*x191)%x192);

	if (t34 != 640499672699845192LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x193 = UINT8_MAX;
	uint32_t x194 = 80486U;
	volatile uint16_t x195 = 199U;
	int32_t x196 = INT32_MIN;
	static volatile uint32_t t35 = 574U;

	t35 = (((x193&x194)*x195)%x196);

	if (t35 != 20298U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = INT8_MIN;
	int8_t x200 = -1;
	uint64_t t36 = 1085006515693238230LLU;

	t36 = (((x197&x198)*x199)%x200);

	if (t36 != 274877906944LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x202 = INT16_MAX;
	static volatile uint8_t x203 = 119U;
	int8_t x204 = INT8_MIN;
	uint64_t t37 = 10809132LLU;

	t37 = (((x201&x202)*x203)%x204);

	if (t37 != 2595866LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x206 = 7U;
	static int64_t x207 = -44957519918LL;
	int16_t x208 = -485;
	volatile int64_t t38 = -143406047007913746LL;

	t38 = (((x205&x206)*x207)%x208);

	if (t38 != -241LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x209 = 2572;
	volatile uint32_t x211 = 710U;
	volatile int64_t t39 = -7152123921503LL;

	t39 = (((x209&x210)*x211)%x212);

	if (t39 != 366360LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x213 = UINT64_MAX;
	int16_t x214 = 76;
	uint64_t x215 = 203799LLU;
	uint64_t t40 = 208164LLU;

	t40 = (((x213&x214)*x215)%x216);

	if (t40 != 15488724LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x217 = 12028175390183LLU;
	int32_t x218 = INT32_MIN;
	uint8_t x219 = 37U;
	uint64_t t41 = 436301005LLU;

	t41 = (((x217&x218)*x219)%x220);

	if (t41 != 21270LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = INT16_MIN;
	int16_t x226 = 28;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t42 = 79428063LLU;

	t42 = (((x225&x226)*x227)%x228);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x233 = INT32_MIN;
	int8_t x234 = 4;
	uint8_t x235 = 7U;
	volatile int8_t x236 = INT8_MIN;
	int32_t t43 = 2027391;

	t43 = (((x233&x234)*x235)%x236);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x237 = UINT32_MAX;
	uint64_t x238 = UINT64_MAX;
	volatile uint64_t t44 = 0LLU;

	t44 = (((x237&x238)*x239)%x240);

	if (t44 != 113LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x241 = INT16_MAX;
	static int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MIN;
	int64_t x244 = -744776060LL;
	volatile int64_t t45 = 41514498LL;

	t45 = (((x241&x242)*x243)%x244);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x245 = INT64_MAX;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = INT32_MAX;
	int8_t x248 = -1;
	uint64_t t46 = 70LLU;

	t46 = (((x245&x246)*x247)%x248);

	if (t46 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x249 = UINT8_MAX;
	volatile int32_t x250 = INT32_MAX;
	int64_t x251 = 195631836LL;
	static int32_t x252 = 316805;
	volatile int64_t t47 = -135198864457828LL;

	t47 = (((x249&x250)*x251)%x252);

	if (t47 != 102050LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x253 = UINT8_MAX;
	int16_t x254 = INT16_MIN;
	uint64_t x255 = UINT64_MAX;
	volatile uint64_t t48 = 121LLU;

	t48 = (((x253&x254)*x255)%x256);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x257 = 0U;
	int32_t x260 = 7289;
	uint32_t t49 = 1651057U;

	t49 = (((x257&x258)*x259)%x260);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x263 = UINT32_MAX;
	uint32_t x264 = UINT32_MAX;

	t50 = (((x261&x262)*x263)%x264);

	if (t50 != 32768U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = 6;
	int64_t x266 = -256647063781999840LL;
	static volatile int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MIN;

	t51 = (((x265&x266)*x267)%x268);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x269 = INT8_MAX;
	int8_t x270 = INT8_MIN;
	volatile int8_t x271 = INT8_MIN;
	static int16_t x272 = -1044;
	volatile int32_t t52 = 11;

	t52 = (((x269&x270)*x271)%x272);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x281 = -32;
	int8_t x282 = -1;
	int32_t x283 = -2;
	int16_t x284 = INT16_MIN;
	int32_t t53 = 55332;

	t53 = (((x281&x282)*x283)%x284);

	if (t53 != 64) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x285 = INT64_MIN;
	volatile int64_t x286 = INT64_MAX;
	int32_t x287 = 7550;
	int32_t x288 = INT32_MIN;
	volatile int64_t t54 = 8643022204971851LL;

	t54 = (((x285&x286)*x287)%x288);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x289 = 736U;
	uint16_t x290 = 42U;
	volatile int16_t x291 = INT16_MAX;

	t55 = (((x289&x290)*x291)%x292);

	if (t55 != 1048544LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x297 = 106U;
	volatile int32_t x298 = 6088479;
	int8_t x299 = INT8_MIN;
	volatile uint16_t x300 = 220U;
	int32_t t56 = -108;

	t56 = (((x297&x298)*x299)%x300);

	if (t56 != -180) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x301 = 0U;
	int32_t x302 = INT32_MIN;
	int8_t x303 = -17;
	static uint32_t x304 = 3768117U;
	uint32_t t57 = 15474203U;

	t57 = (((x301&x302)*x303)%x304);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x305 = INT8_MAX;
	static int16_t x306 = INT16_MIN;
	int64_t x307 = INT64_MAX;
	int64_t t58 = -565147622235LL;

	t58 = (((x305&x306)*x307)%x308);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x309 = -1;
	int16_t x311 = INT16_MIN;
	static int32_t x312 = -4563578;
	volatile int64_t t59 = 60956306LL;

	t59 = (((x309&x310)*x311)%x312);

	if (t59 != 32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x313 = INT16_MIN;
	static uint64_t x315 = UINT64_MAX;

	t60 = (((x313&x314)*x315)%x316);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x317 = INT16_MIN;
	static int8_t x320 = INT8_MAX;
	volatile int32_t t61 = -458889;

	t61 = (((x317&x318)*x319)%x320);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x321 = UINT64_MAX;
	int64_t x322 = -1LL;
	uint16_t x323 = 22160U;
	int64_t x324 = INT64_MIN;
	static volatile uint64_t t62 = 1845LLU;

	t62 = (((x321&x322)*x323)%x324);

	if (t62 != 9223372036854753648LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x325 = -2794;
	static uint64_t x326 = 199936769334LLU;
	static int32_t x328 = INT32_MAX;
	volatile uint64_t t63 = 6049372617423616LLU;

	t63 = (((x325&x326)*x327)%x328);

	if (t63 != 1926695660LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x329 = 1U;
	static volatile int16_t x330 = INT16_MIN;
	volatile int64_t x331 = INT64_MIN;
	int64_t t64 = 507873195689LL;

	t64 = (((x329&x330)*x331)%x332);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x333 = INT8_MIN;
	static volatile int32_t x334 = INT32_MIN;
	volatile uint32_t x335 = 361827U;
	int16_t x336 = 1046;
	static uint32_t t65 = 30U;

	t65 = (((x333&x334)*x335)%x336);

	if (t65 != 670U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = INT16_MIN;
	int64_t x339 = INT64_MIN;
	int64_t t66 = 7459926LL;

	t66 = (((x337&x338)*x339)%x340);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x341 = 50U;
	uint64_t x342 = UINT64_MAX;
	volatile uint8_t x343 = 3U;
	static int64_t x344 = INT64_MIN;
	volatile uint64_t t67 = 413283645059321601LLU;

	t67 = (((x341&x342)*x343)%x344);

	if (t67 != 150LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x345 = INT16_MIN;
	static volatile int16_t x346 = -1;
	static int16_t x347 = -619;
	uint32_t x348 = 12657U;
	volatile uint32_t t68 = 3U;

	t68 = (((x345&x346)*x347)%x348);

	if (t68 != 6878U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x349 = 230LLU;
	uint8_t x350 = 13U;
	int64_t x352 = -619578LL;

	t69 = (((x349&x350)*x351)%x352);

	if (t69 != 619066LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x353 = INT32_MIN;
	static int16_t x354 = INT16_MIN;
	static int32_t x355 = 1;
	int16_t x356 = INT16_MIN;
	volatile int32_t t70 = 288403;

	t70 = (((x353&x354)*x355)%x356);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x361 = 2197372U;
	uint64_t x362 = UINT64_MAX;
	static int8_t x363 = 31;
	volatile int32_t x364 = -1;
	volatile uint64_t t71 = 457LLU;

	t71 = (((x361&x362)*x363)%x364);

	if (t71 != 68118532LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x365 = UINT64_MAX;
	int16_t x366 = 0;
	volatile int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MAX;
	uint64_t t72 = 533LLU;

	t72 = (((x365&x366)*x367)%x368);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x369 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MIN;
	volatile int64_t t73 = 472421LL;

	t73 = (((x369&x370)*x371)%x372);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x373 = INT32_MAX;
	static int8_t x374 = INT8_MAX;
	volatile int16_t x375 = -3;

	t74 = (((x373&x374)*x375)%x376);

	if (t74 != -126) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x377 = UINT32_MAX;
	static int8_t x378 = -1;
	int16_t x379 = INT16_MIN;
	volatile int64_t x380 = INT64_MIN;
	volatile int64_t t75 = -53989294620370522LL;

	t75 = (((x377&x378)*x379)%x380);

	if (t75 != 32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x381 = INT64_MAX;
	static int64_t x382 = 13136LL;
	static int64_t t76 = -3560053134425LL;

	t76 = (((x381&x382)*x383)%x384);

	if (t76 != 48LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x385 = 30578U;
	volatile uint32_t x388 = 729293U;
	volatile uint32_t t77 = 3U;

	t77 = (((x385&x386)*x387)%x388);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x389 = 57435134U;
	uint32_t x390 = 14U;
	uint16_t x391 = 1603U;
	int32_t x392 = -1;
	volatile uint32_t t78 = 3962229U;

	t78 = (((x389&x390)*x391)%x392);

	if (t78 != 22442U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x393 = 0U;
	volatile int16_t x394 = 27;
	static int32_t x395 = -1;
	int16_t x396 = INT16_MIN;
	volatile uint32_t t79 = 15865044U;

	t79 = (((x393&x394)*x395)%x396);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x403 = -3526;
	static int32_t x404 = INT32_MIN;
	volatile int64_t t80 = 5402949161766615LL;

	t80 = (((x401&x402)*x403)%x404);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x405 = -1;
	static volatile int8_t x406 = -1;
	int32_t x407 = INT32_MAX;
	int32_t x408 = INT32_MIN;

	t81 = (((x405&x406)*x407)%x408);

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x409 = UINT64_MAX;
	int32_t x410 = -1;
	int8_t x412 = -1;
	static volatile uint64_t t82 = 13396759291LLU;

	t82 = (((x409&x410)*x411)%x412);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x414 = -1;
	int16_t x415 = 26;
	int32_t t83 = -126;

	t83 = (((x413&x414)*x415)%x416);

	if (t83 != 60) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x417 = INT64_MIN;
	static int16_t x420 = INT16_MIN;
	int64_t t84 = -7610910058982LL;

	t84 = (((x417&x418)*x419)%x420);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x421 = 6;
	int64_t x422 = INT64_MAX;
	int32_t x423 = INT32_MIN;
	uint8_t x424 = UINT8_MAX;
	volatile int64_t t85 = 97388795966014LL;

	t85 = (((x421&x422)*x423)%x424);

	if (t85 != -3LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x425 = -7253306598045003LL;
	int32_t x426 = INT32_MIN;
	uint8_t x427 = 12U;
	volatile int32_t x428 = -1;
	volatile int64_t t86 = 2222524384236124088LL;

	t86 = (((x425&x426)*x427)%x428);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x429 = -6074;
	int32_t x430 = -1;
	uint8_t x431 = UINT8_MAX;
	uint64_t x432 = 59LLU;

	t87 = (((x429&x430)*x431)%x432);

	if (t87 != 3LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x437 = 714580774836700089LLU;
	static volatile int32_t x438 = 31898;
	uint64_t x440 = 3301567015LLU;
	volatile uint64_t t88 = 5LLU;

	t88 = (((x437&x438)*x439)%x440);

	if (t88 != 47424LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x449 = INT8_MIN;
	static int8_t x450 = -1;
	volatile int8_t x452 = -1;
	volatile uint64_t t89 = 5822287295230750135LLU;

	t89 = (((x449&x450)*x451)%x452);

	if (t89 != 18446735442838838400LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x454 = 10;
	uint64_t x455 = 8037807735LLU;
	int8_t x456 = INT8_MIN;
	volatile uint64_t t90 = 19668LLU;

	t90 = (((x453&x454)*x455)%x456);

	if (t90 != 80378077350LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x457 = 1049487400474816469LL;
	volatile uint32_t x458 = UINT32_MAX;
	uint64_t x459 = 6269955696816578LLU;
	int64_t x460 = INT64_MIN;

	t91 = (((x457&x458)*x459)%x460);

	if (t91 != 4868885892551722090LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x462 = 14621;
	int16_t x464 = -90;

	t92 = (((x461&x462)*x463)%x464);

	if (t92 != -43LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x465 = INT8_MIN;
	static volatile uint64_t x466 = 12923LLU;
	uint16_t x468 = UINT16_MAX;
	volatile uint64_t t93 = 13276306LLU;

	t93 = (((x465&x466)*x467)%x468);

	if (t93 != 46990LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x469 = 1U;
	static int8_t x470 = INT8_MIN;
	volatile int64_t x471 = -1LL;
	int64_t x472 = INT64_MIN;
	int64_t t94 = -37140689809LL;

	t94 = (((x469&x470)*x471)%x472);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x473 = -1;
	static int32_t x474 = 7824538;
	uint8_t x475 = 116U;
	volatile int64_t x476 = 7195LL;
	volatile int64_t t95 = -182LL;

	t95 = (((x473&x474)*x475)%x476);

	if (t95 != 4353LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x477 = -1LL;
	int16_t x479 = INT16_MAX;
	volatile int16_t x480 = -1;
	int64_t t96 = 113092463882518971LL;

	t96 = (((x477&x478)*x479)%x480);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x481 = UINT64_MAX;
	uint64_t x482 = 3761780971LLU;
	volatile int32_t x483 = -98032259;
	int32_t x484 = INT32_MIN;

	t97 = (((x481&x482)*x483)%x484);

	if (t97 != 18077968187259208127LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x489 = INT8_MAX;
	int32_t x492 = INT32_MIN;

	t98 = (((x489&x490)*x491)%x492);

	if (t98 != -38354LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x493 = 3199290854021346827LLU;
	uint32_t x494 = UINT32_MAX;
	uint8_t x496 = 78U;
	volatile uint64_t t99 = 48740962112LLU;

	t99 = (((x493&x494)*x495)%x496);

	if (t99 != 51LLU) { NG(); } else { ; }
	
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

