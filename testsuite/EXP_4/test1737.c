#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
static int16_t x11 = INT16_MIN;
static int16_t x18 = 13536;
volatile int32_t t7 = 51221330;
int8_t x43 = INT8_MAX;
uint16_t x53 = 170U;
int32_t t14 = -46496524;
volatile int32_t t16 = -330773;
uint64_t x97 = 7119548907448LLU;
static volatile int32_t t17 = 1470799;
int32_t t20 = -176964181;
static volatile uint16_t x128 = UINT16_MAX;
int16_t x132 = INT16_MAX;
static int64_t x135 = -175263442398887093LL;
int32_t x137 = INT32_MIN;
int64_t x152 = -32870597817LL;
static int16_t x153 = INT16_MIN;
int32_t x154 = -22486;
int8_t x157 = -22;
int64_t x158 = INT64_MIN;
int32_t x169 = INT32_MIN;
int32_t t33 = 400;
int32_t x184 = -9;
int64_t x189 = -1LL;
uint32_t x192 = 7U;
uint8_t x194 = 5U;
int64_t x195 = -1LL;
volatile uint8_t x198 = 0U;
volatile int32_t t40 = 1766;
int8_t x219 = INT8_MIN;
int64_t x227 = INT64_MIN;
int64_t x230 = INT64_MIN;
int32_t t45 = -5;
static int8_t x237 = INT8_MAX;
int32_t t46 = -6369246;
uint32_t x241 = 2285U;
int64_t x242 = INT64_MIN;
int32_t t48 = -412;
volatile int32_t x254 = INT32_MIN;
int32_t t49 = 294794740;
static int32_t x263 = INT32_MIN;
static uint16_t x272 = UINT16_MAX;
static int32_t t53 = -4;
int64_t x291 = -1LL;
volatile uint16_t x303 = 3U;
static int64_t x305 = -62353686LL;
int32_t t58 = 107;
int32_t t60 = 4;
uint8_t x347 = UINT8_MAX;
int32_t x360 = -2034;
uint64_t x362 = UINT64_MAX;
static uint32_t x379 = 3890U;
uint32_t x387 = UINT32_MAX;
uint32_t x388 = UINT32_MAX;
uint8_t x400 = UINT8_MAX;
static int8_t x404 = INT8_MAX;
int16_t x413 = -1;
int8_t x415 = -1;
static uint16_t x422 = 2712U;
int16_t x425 = INT16_MIN;
volatile int64_t x426 = INT64_MAX;
int64_t x435 = INT64_MIN;
uint64_t x442 = UINT64_MAX;
int8_t x443 = -1;
static uint16_t x444 = 28U;
int8_t x445 = -5;
static int32_t t82 = 1696788;
volatile int32_t t83 = 9;
int32_t x462 = -32542302;
int64_t x466 = INT64_MIN;
int32_t x468 = -4;
int32_t t85 = 129848113;
int16_t x469 = 8;
int64_t x477 = INT64_MAX;
uint8_t x494 = UINT8_MAX;
uint16_t x495 = UINT16_MAX;
int64_t x497 = 2693LL;
int64_t x501 = INT64_MIN;
int32_t t94 = 1;
volatile int32_t t96 = 1;
int32_t x520 = 15216;
static int32_t t98 = 821773;
int64_t x524 = 258935411703LL;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint8_t x2 = 42U;
	int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -6;

	t0 = (x1==(x2/(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	uint8_t x7 = 14U;
	static volatile int16_t x8 = INT16_MAX;
	int32_t t1 = 1927;

	t1 = (x5==(x6/(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MAX;
	volatile uint64_t x12 = UINT64_MAX;
	static volatile int32_t t2 = 1;

	t2 = (x9==(x10/(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = 1U;
	volatile int8_t x19 = INT8_MIN;
	static uint32_t x20 = UINT32_MAX;
	volatile int32_t t3 = -2950911;

	t3 = (x17==(x18/(x19&x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 76;
	volatile int8_t x22 = INT8_MIN;
	volatile int64_t x23 = 248LL;
	static uint64_t x24 = UINT64_MAX;
	int32_t t4 = 275695391;

	t4 = (x21==(x22/(x23&x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x25 = UINT8_MAX;
	uint32_t x26 = 36U;
	volatile int32_t x27 = 117;
	uint32_t x28 = 2456U;
	static volatile int32_t t5 = -9;

	t5 = (x25==(x26/(x27&x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = INT64_MIN;
	volatile int16_t x31 = -1;
	int8_t x32 = INT8_MAX;
	volatile int32_t t6 = 50641;

	t6 = (x29==(x30/(x31&x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x33 = 36U;
	static volatile int16_t x34 = INT16_MIN;
	int8_t x35 = INT8_MIN;
	static int32_t x36 = -34;

	t7 = (x33==(x34/(x35&x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MAX;
	volatile int32_t x44 = -11295;
	int32_t t8 = 2;

	t8 = (x41==(x42/(x43&x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	static int8_t x46 = INT8_MIN;
	uint8_t x47 = 1U;
	static int16_t x48 = -1;
	int32_t t9 = -15;

	t9 = (x45==(x46/(x47&x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x54 = 1;
	int32_t x55 = -1834444;
	int16_t x56 = INT16_MIN;
	volatile int32_t t10 = 126;

	t10 = (x53==(x54/(x55&x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = 1LL;
	int16_t x58 = -1;
	static int32_t x59 = -1;
	static uint32_t x60 = 72599642U;
	int32_t t11 = 1;

	t11 = (x57==(x58/(x59&x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = UINT64_MAX;
	int32_t x66 = 53748514;
	int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MIN;
	int32_t t12 = 3997292;

	t12 = (x65==(x66/(x67&x68)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x77 = 15337959;
	static int64_t x78 = INT64_MAX;
	uint32_t x79 = UINT32_MAX;
	int8_t x80 = -50;
	int32_t t13 = 973133;

	t13 = (x77==(x78/(x79&x80)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = 38310569;
	int8_t x82 = -1;
	int32_t x83 = -1;
	int8_t x84 = -1;

	t14 = (x81==(x82/(x83&x84)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x89 = INT8_MAX;
	uint32_t x90 = 21U;
	int32_t x91 = 645981;
	uint64_t x92 = 239126873LLU;
	int32_t t15 = -734;

	t15 = (x89==(x90/(x91&x92)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x93 = UINT8_MAX;
	int32_t x94 = INT32_MIN;
	uint8_t x95 = UINT8_MAX;
	int64_t x96 = -439624490LL;

	t16 = (x93==(x94/(x95&x96)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x98 = INT64_MIN;
	int32_t x99 = INT32_MAX;
	int8_t x100 = -1;

	t17 = (x97==(x98/(x99&x100)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = 0LL;
	static int64_t x102 = INT64_MIN;
	static uint64_t x103 = UINT64_MAX;
	int8_t x104 = -3;
	volatile int32_t t18 = -5892493;

	t18 = (x101==(x102/(x103&x104)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x105 = 332U;
	volatile int64_t x106 = INT64_MIN;
	static uint64_t x107 = 3499LLU;
	uint64_t x108 = UINT64_MAX;
	static int32_t t19 = 78;

	t19 = (x105==(x106/(x107&x108)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = INT8_MIN;
	static int32_t x110 = -6854;
	uint64_t x111 = 42783341740199658LLU;
	int8_t x112 = -32;

	t20 = (x109==(x110/(x111&x112)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x117 = INT32_MIN;
	int32_t x118 = -50211969;
	uint8_t x119 = 11U;
	int64_t x120 = INT64_MAX;
	int32_t t21 = -451699;

	t21 = (x117==(x118/(x119&x120)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x121 = 13198LLU;
	int64_t x122 = -1LL;
	volatile int16_t x123 = 7;
	int8_t x124 = INT8_MAX;
	static int32_t t22 = 10903;

	t22 = (x121==(x122/(x123&x124)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x125 = UINT8_MAX;
	static int64_t x126 = INT64_MIN;
	static int32_t x127 = INT32_MAX;
	int32_t t23 = -20889;

	t23 = (x125==(x126/(x127&x128)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x129 = INT64_MIN;
	uint8_t x130 = UINT8_MAX;
	static uint8_t x131 = UINT8_MAX;
	int32_t t24 = 55433586;

	t24 = (x129==(x130/(x131&x132)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x133 = -17;
	int32_t x134 = INT32_MAX;
	static volatile int32_t x136 = INT32_MIN;
	int32_t t25 = 235;

	t25 = (x133==(x134/(x135&x136)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x138 = UINT16_MAX;
	uint32_t x139 = 71023162U;
	volatile int64_t x140 = -108619365577LL;
	int32_t t26 = -1;

	t26 = (x137==(x138/(x139&x140)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = 28;
	volatile int16_t x146 = -820;
	static int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MIN;
	static int32_t t27 = 3326505;

	t27 = (x145==(x146/(x147&x148)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x149 = 43560049267640LLU;
	uint64_t x150 = 338142027530401LLU;
	static uint64_t x151 = 48077968LLU;
	int32_t t28 = 56260316;

	t28 = (x149==(x150/(x151&x152)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x155 = 311U;
	static uint32_t x156 = 2602U;
	volatile int32_t t29 = -3;

	t29 = (x153==(x154/(x155&x156)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x159 = 3279383LLU;
	static uint8_t x160 = 37U;
	static volatile int32_t t30 = -2597;

	t30 = (x157==(x158/(x159&x160)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x161 = INT64_MIN;
	int8_t x162 = -15;
	volatile uint16_t x163 = 4U;
	static int32_t x164 = 6216268;
	int32_t t31 = -979;

	t31 = (x161==(x162/(x163&x164)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x165 = 9688U;
	uint32_t x166 = 624U;
	int8_t x167 = -2;
	int16_t x168 = -1;
	int32_t t32 = -355;

	t32 = (x165==(x166/(x167&x168)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x170 = INT8_MAX;
	int8_t x171 = -1;
	volatile int8_t x172 = INT8_MIN;

	t33 = (x169==(x170/(x171&x172)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x173 = UINT16_MAX;
	static uint64_t x174 = UINT64_MAX;
	int64_t x175 = 196653412082714260LL;
	uint64_t x176 = UINT64_MAX;
	static volatile int32_t t34 = 149159202;

	t34 = (x173==(x174/(x175&x176)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x181 = -6;
	int32_t x182 = -6812936;
	volatile uint32_t x183 = UINT32_MAX;
	volatile int32_t t35 = 1202;

	t35 = (x181==(x182/(x183&x184)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = INT32_MIN;
	int16_t x186 = -3;
	int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MAX;
	volatile int32_t t36 = 327053004;

	t36 = (x185==(x186/(x187&x188)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x190 = 6U;
	int16_t x191 = -1;
	int32_t t37 = -23;

	t37 = (x189==(x190/(x191&x192)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = INT16_MIN;
	int16_t x196 = -4506;
	volatile int32_t t38 = 285;

	t38 = (x193==(x194/(x195&x196)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x197 = 1783LLU;
	uint64_t x199 = UINT64_MAX;
	volatile uint16_t x200 = 1U;
	int32_t t39 = 122;

	t39 = (x197==(x198/(x199&x200)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x201 = INT16_MIN;
	volatile uint8_t x202 = 4U;
	int32_t x203 = -58;
	int32_t x204 = INT32_MAX;

	t40 = (x201==(x202/(x203&x204)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x213 = 0U;
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MAX;
	uint32_t x216 = UINT32_MAX;
	int32_t t41 = 16145;

	t41 = (x213==(x214/(x215&x216)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MAX;
	uint64_t x220 = 25750LLU;
	static int32_t t42 = -8686;

	t42 = (x217==(x218/(x219&x220)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x225 = -130282413LL;
	static uint64_t x226 = UINT64_MAX;
	int32_t x228 = INT32_MIN;
	static int32_t t43 = 1;

	t43 = (x225==(x226/(x227&x228)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = INT16_MIN;
	uint16_t x231 = 12948U;
	uint8_t x232 = 7U;
	static volatile int32_t t44 = -307;

	t44 = (x229==(x230/(x231&x232)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x233 = INT64_MIN;
	int64_t x234 = INT64_MAX;
	volatile int16_t x235 = INT16_MAX;
	int64_t x236 = -4016LL;

	t45 = (x233==(x234/(x235&x236)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x238 = INT8_MAX;
	volatile int16_t x239 = -1;
	volatile int32_t x240 = -1;

	t46 = (x237==(x238/(x239&x240)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x243 = -1;
	int8_t x244 = INT8_MAX;
	volatile int32_t t47 = 2076;

	t47 = (x241==(x242/(x243&x244)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x249 = INT32_MAX;
	int64_t x250 = INT64_MIN;
	uint8_t x251 = UINT8_MAX;
	int32_t x252 = -1;

	t48 = (x249==(x250/(x251&x252)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = 5023847122214LL;
	static int64_t x255 = INT64_MIN;
	int8_t x256 = -1;

	t49 = (x253==(x254/(x255&x256)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = INT16_MAX;
	int64_t x258 = -1LL;
	volatile int16_t x259 = -11;
	uint8_t x260 = 44U;
	int32_t t50 = 81151236;

	t50 = (x257==(x258/(x259&x260)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x261 = INT32_MIN;
	volatile int16_t x262 = -9799;
	int8_t x264 = INT8_MIN;
	static int32_t t51 = 0;

	t51 = (x261==(x262/(x263&x264)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x269 = -1;
	volatile int64_t x270 = INT64_MAX;
	int32_t x271 = -5895;
	volatile int32_t t52 = 5183;

	t52 = (x269==(x270/(x271&x272)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = INT32_MAX;
	static int32_t x274 = INT32_MAX;
	volatile uint32_t x275 = 2902906U;
	int32_t x276 = INT32_MAX;

	t53 = (x273==(x274/(x275&x276)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x281 = -6724;
	volatile int16_t x282 = INT16_MAX;
	int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;
	int32_t t54 = 114773699;

	t54 = (x281==(x282/(x283&x284)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x289 = -1LL;
	int32_t x290 = INT32_MIN;
	volatile int64_t x292 = INT64_MIN;
	static volatile int32_t t55 = -107357137;

	t55 = (x289==(x290/(x291&x292)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x301 = 3776204750826LLU;
	int64_t x302 = INT64_MIN;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t56 = 3;

	t56 = (x301==(x302/(x303&x304)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x306 = 5LLU;
	int16_t x307 = -7746;
	volatile uint8_t x308 = 2U;
	int32_t t57 = -86125;

	t57 = (x305==(x306/(x307&x308)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x309 = 444U;
	volatile int8_t x310 = INT8_MAX;
	int8_t x311 = INT8_MIN;
	volatile int32_t x312 = INT32_MIN;

	t58 = (x309==(x310/(x311&x312)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x325 = INT64_MIN;
	static int32_t x326 = 18235216;
	uint64_t x327 = 1107630526LLU;
	volatile int16_t x328 = INT16_MAX;
	volatile int32_t t59 = -14773;

	t59 = (x325==(x326/(x327&x328)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = -72621028152LL;
	static volatile int64_t x335 = INT64_MIN;
	int16_t x336 = -1;

	t60 = (x333==(x334/(x335&x336)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x345 = -1;
	int32_t x346 = INT32_MAX;
	uint64_t x348 = 3015627655709852LLU;
	volatile int32_t t61 = -252888528;

	t61 = (x345==(x346/(x347&x348)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x349 = 133020U;
	int16_t x350 = -1;
	static int8_t x351 = -1;
	static volatile uint8_t x352 = 113U;
	volatile int32_t t62 = 938610833;

	t62 = (x349==(x350/(x351&x352)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x353 = 414389166652LLU;
	static uint32_t x354 = 1156908921U;
	uint64_t x355 = UINT64_MAX;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t63 = 1;

	t63 = (x353==(x354/(x355&x356)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x357 = -1;
	volatile uint16_t x358 = 86U;
	volatile uint32_t x359 = UINT32_MAX;
	volatile int32_t t64 = -28352419;

	t64 = (x357==(x358/(x359&x360)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x361 = INT16_MIN;
	volatile int16_t x363 = -1;
	volatile int16_t x364 = -1;
	volatile int32_t t65 = -12596;

	t65 = (x361==(x362/(x363&x364)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x369 = 1894U;
	int16_t x370 = 1;
	uint32_t x371 = 29U;
	volatile uint16_t x372 = UINT16_MAX;
	static volatile int32_t t66 = -26;

	t66 = (x369==(x370/(x371&x372)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x373 = -447;
	static uint16_t x374 = UINT16_MAX;
	volatile int16_t x375 = INT16_MAX;
	static uint64_t x376 = 15LLU;
	volatile int32_t t67 = 27872308;

	t67 = (x373==(x374/(x375&x376)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x377 = INT16_MAX;
	volatile int16_t x378 = -6;
	int32_t x380 = 38539906;
	int32_t t68 = -113010385;

	t68 = (x377==(x378/(x379&x380)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x385 = INT8_MAX;
	volatile int16_t x386 = -1;
	volatile int32_t t69 = 2;

	t69 = (x385==(x386/(x387&x388)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x389 = 16;
	volatile int32_t x390 = INT32_MIN;
	int32_t x391 = -1;
	static uint32_t x392 = 85U;
	static int32_t t70 = -9515;

	t70 = (x389==(x390/(x391&x392)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x393 = 11U;
	int8_t x394 = INT8_MIN;
	int64_t x395 = 10135640580149231LL;
	static uint16_t x396 = UINT16_MAX;
	volatile int32_t t71 = -94634;

	t71 = (x393==(x394/(x395&x396)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x397 = UINT64_MAX;
	int8_t x398 = -2;
	volatile uint64_t x399 = 39376LLU;
	int32_t t72 = 29;

	t72 = (x397==(x398/(x399&x400)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x401 = UINT32_MAX;
	uint16_t x402 = 6624U;
	int32_t x403 = -221749;
	int32_t t73 = -57381;

	t73 = (x401==(x402/(x403&x404)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x405 = 37U;
	uint16_t x406 = 8154U;
	int64_t x407 = -399797100287512881LL;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t74 = 20;

	t74 = (x405==(x406/(x407&x408)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x409 = INT8_MIN;
	static uint8_t x410 = 1U;
	uint64_t x411 = 668349613791479LLU;
	int16_t x412 = -27;
	int32_t t75 = 88675316;

	t75 = (x409==(x410/(x411&x412)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x414 = INT8_MAX;
	int32_t x416 = 705868655;
	int32_t t76 = 57674;

	t76 = (x413==(x414/(x415&x416)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x417 = -6773481077160LL;
	static volatile int32_t x418 = INT32_MIN;
	volatile uint32_t x419 = UINT32_MAX;
	static uint16_t x420 = 6306U;
	static int32_t t77 = 1709796;

	t77 = (x417==(x418/(x419&x420)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x421 = UINT64_MAX;
	uint8_t x423 = 7U;
	int32_t x424 = -1066247;
	static int32_t t78 = -482002;

	t78 = (x421==(x422/(x423&x424)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x427 = -18;
	int16_t x428 = INT16_MIN;
	int32_t t79 = 1555588;

	t79 = (x425==(x426/(x427&x428)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x433 = 134274;
	int64_t x434 = 728964872497549LL;
	int8_t x436 = INT8_MIN;
	static int32_t t80 = 6;

	t80 = (x433==(x434/(x435&x436)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x441 = INT64_MIN;
	volatile int32_t t81 = 156195;

	t81 = (x441==(x442/(x443&x444)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x446 = 5896;
	uint16_t x447 = 2U;
	volatile int8_t x448 = -1;

	t82 = (x445==(x446/(x447&x448)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = INT8_MAX;
	int32_t x450 = -7195731;
	int16_t x451 = INT16_MIN;
	volatile uint64_t x452 = 20234527058471LLU;

	t83 = (x449==(x450/(x451&x452)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x461 = INT32_MIN;
	static uint16_t x463 = 28U;
	volatile int64_t x464 = -1LL;
	volatile int32_t t84 = 167;

	t84 = (x461==(x462/(x463&x464)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x465 = INT32_MAX;
	uint32_t x467 = UINT32_MAX;

	t85 = (x465==(x466/(x467&x468)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x470 = INT8_MIN;
	int16_t x471 = -1;
	int32_t x472 = -12;
	int32_t t86 = -903482;

	t86 = (x469==(x470/(x471&x472)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x473 = INT16_MIN;
	int8_t x474 = 1;
	uint32_t x475 = 1508U;
	uint64_t x476 = 7387342660LLU;
	volatile int32_t t87 = -3487895;

	t87 = (x473==(x474/(x475&x476)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x478 = 3380673U;
	static int8_t x479 = INT8_MIN;
	static volatile int16_t x480 = 4679;
	int32_t t88 = 29;

	t88 = (x477==(x478/(x479&x480)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x481 = -4;
	int32_t x482 = -1;
	uint16_t x483 = 562U;
	int8_t x484 = INT8_MIN;
	volatile int32_t t89 = 111113835;

	t89 = (x481==(x482/(x483&x484)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x485 = -6;
	volatile uint64_t x486 = 179825943670LLU;
	int64_t x487 = -1LL;
	static int64_t x488 = -1LL;
	int32_t t90 = -58;

	t90 = (x485==(x486/(x487&x488)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x489 = 2606585491184047491LLU;
	uint16_t x490 = 0U;
	static int32_t x491 = INT32_MIN;
	int32_t x492 = INT32_MIN;
	int32_t t91 = -80;

	t91 = (x489==(x490/(x491&x492)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x493 = 2030LLU;
	int64_t x496 = -1123050693735342LL;
	int32_t t92 = 40;

	t92 = (x493==(x494/(x495&x496)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x498 = INT32_MIN;
	int16_t x499 = -15;
	int8_t x500 = -1;
	volatile int32_t t93 = 71;

	t93 = (x497==(x498/(x499&x500)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x502 = -7;
	uint64_t x503 = 195147036LLU;
	int16_t x504 = 15038;

	t94 = (x501==(x502/(x503&x504)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x505 = 216U;
	uint64_t x506 = 1685227544LLU;
	volatile uint8_t x507 = UINT8_MAX;
	volatile int32_t x508 = INT32_MAX;
	volatile int32_t t95 = 0;

	t95 = (x505==(x506/(x507&x508)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x509 = 23U;
	uint16_t x510 = 3462U;
	int16_t x511 = -126;
	uint16_t x512 = 250U;

	t96 = (x509==(x510/(x511&x512)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x513 = -1;
	int32_t x514 = INT32_MIN;
	int8_t x515 = INT8_MIN;
	int32_t x516 = -2931522;
	int32_t t97 = 1;

	t97 = (x513==(x514/(x515&x516)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x517 = 27927270U;
	uint16_t x518 = 1284U;
	uint32_t x519 = 105520U;

	t98 = (x517==(x518/(x519&x520)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x521 = INT64_MIN;
	volatile int16_t x522 = -1;
	volatile int16_t x523 = -67;
	static int32_t t99 = -1;

	t99 = (x521==(x522/(x523&x524)));

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

