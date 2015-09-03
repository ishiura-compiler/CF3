#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = 2383332LL;
int64_t x16 = INT64_MIN;
int32_t x19 = INT32_MIN;
uint64_t x21 = UINT64_MAX;
int64_t x36 = 9863614871LL;
uint32_t x38 = 93U;
int16_t x43 = -1;
int16_t x47 = -1;
uint16_t x51 = 2U;
int32_t x53 = INT32_MAX;
uint64_t x65 = 144LLU;
int16_t x67 = INT16_MIN;
static int8_t x71 = -42;
volatile int32_t x72 = 28693;
uint8_t x79 = 0U;
int8_t x82 = INT8_MIN;
int64_t x83 = -1LL;
uint64_t x98 = 105336894447143LLU;
int16_t x117 = INT16_MIN;
static int32_t x120 = 1;
volatile uint16_t x121 = 7U;
int64_t x123 = 145155212139400707LL;
volatile int8_t x126 = -3;
static int16_t x131 = -1;
volatile uint8_t x132 = UINT8_MAX;
volatile int64_t x133 = INT64_MAX;
int32_t x137 = -315623;
int16_t x140 = 1068;
int64_t t26 = -552665705297310006LL;
static volatile int8_t x142 = -1;
int8_t x148 = -1;
static int16_t x159 = INT16_MAX;
uint64_t t31 = 6540271LLU;
int64_t x161 = 117LL;
int8_t x167 = INT8_MIN;
int8_t x172 = -1;
static int16_t x179 = INT16_MIN;
volatile int16_t x185 = -561;
int16_t x191 = -1;
int16_t x203 = -2;
int32_t x207 = INT32_MIN;
volatile uint16_t x208 = UINT16_MAX;
int64_t t41 = 100LL;
int32_t x210 = INT32_MIN;
volatile int8_t x227 = 1;
static uint8_t x228 = 49U;
volatile int64_t x234 = -9LL;
int8_t x237 = INT8_MIN;
int64_t t47 = 62364765460202933LL;
volatile int64_t x243 = INT64_MIN;
volatile int32_t x249 = INT32_MAX;
int64_t x260 = 1LL;
int8_t x261 = INT8_MIN;
int32_t x263 = -1;
static int64_t x267 = 1LL;
static volatile int8_t x273 = -1;
volatile uint64_t t54 = 355758LLU;
int16_t x294 = INT16_MAX;
uint64_t t57 = 105608081461LLU;
int16_t x302 = INT16_MIN;
int64_t t59 = INT64_MAX;
volatile int64_t x305 = -1LL;
int64_t x306 = INT64_MIN;
int64_t x308 = -163949984486LL;
uint64_t x311 = 1035617LLU;
static uint32_t x316 = 237854U;
uint8_t x327 = UINT8_MAX;
static int8_t x328 = INT8_MIN;
static uint8_t x341 = UINT8_MAX;
int32_t x348 = -1;
uint32_t x362 = 22573718U;
volatile int16_t x368 = INT16_MIN;
static volatile int32_t x370 = 300103;
int64_t t73 = -141025723488LL;
int8_t x378 = 1;
uint64_t t75 = 29LLU;
uint32_t x382 = 2U;
int16_t x397 = -1303;
int16_t x407 = INT16_MAX;
volatile uint64_t t81 = 7LLU;
int16_t x414 = -1;
volatile int32_t t82 = 4199;
uint8_t x419 = UINT8_MAX;
static volatile int64_t x420 = INT64_MAX;
uint64_t x426 = UINT64_MAX;
volatile int64_t x435 = -1LL;
volatile uint64_t t87 = 198LLU;
uint8_t x437 = 103U;
uint16_t x438 = 39U;
int8_t x448 = INT8_MAX;
static uint64_t t92 = 118589251484241LLU;
int8_t x459 = 0;
int16_t x460 = INT16_MAX;
uint8_t x464 = UINT8_MAX;
int64_t t94 = -939LL;
int16_t x465 = 847;
volatile int64_t x466 = -3903799604855LL;
volatile uint8_t x469 = 1U;
static int32_t x470 = INT32_MAX;
int64_t x472 = 8215525LL;
static volatile int64_t t96 = 0LL;
int16_t x484 = INT16_MAX;
volatile int64_t t99 = -63625LL;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int8_t x2 = -1;
	volatile uint64_t x3 = 227066251407542301LLU;
	volatile uint64_t t0 = 1099594562782897LLU;

	t0 = ((x1*(x2&x3))^x4);

	if (t0 != 2561661887792253191LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = INT16_MIN;
	static uint16_t x7 = 3431U;
	static volatile int8_t x8 = -1;
	int32_t t1 = 36326;

	t1 = ((x5*(x6&x7))^x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	int64_t x10 = 36888635769LL;
	int16_t x11 = INT16_MIN;
	int32_t x12 = INT32_MAX;
	volatile int64_t t2 = 2636636630LL;

	t2 = ((x9*(x10&x11))^x12);

	if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 14U;
	int8_t x14 = INT8_MIN;
	static volatile uint16_t x15 = 29U;
	volatile int64_t t3 = INT64_MIN;

	t3 = ((x13*(x14&x15))^x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 0;
	volatile int16_t x18 = INT16_MIN;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 6164;

	t4 = ((x17*(x18&x19))^x20);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x22 = -1;
	uint8_t x23 = UINT8_MAX;
	int16_t x24 = INT16_MIN;
	volatile uint64_t t5 = 259644LLU;

	t5 = ((x21*(x22&x23))^x24);

	if (t5 != 32513LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	static uint16_t x26 = UINT16_MAX;
	static int32_t x27 = INT32_MIN;
	static volatile uint64_t x28 = 410298610796LLU;
	volatile uint64_t t6 = 401240573LLU;

	t6 = ((x25*(x26&x27))^x28);

	if (t6 != 410298610796LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MAX;
	int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MAX;
	volatile int32_t x32 = -1;
	int32_t t7 = -764;

	t7 = ((x29*(x30&x31))^x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint32_t x34 = UINT32_MAX;
	uint16_t x35 = UINT16_MAX;
	int64_t t8 = -3LL;

	t8 = ((x33*(x34&x35))^x36);

	if (t8 != 12011098519LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = 163872694;
	volatile uint8_t x39 = UINT8_MAX;
	volatile int32_t x40 = -1;
	uint32_t t9 = 18168U;

	t9 = ((x37*(x38&x39))^x40);

	if (t9 != 1939708641U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	static volatile int8_t x42 = 1;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -115490723;

	t10 = ((x41*(x42&x43))^x44);

	if (t10 != 2147483520) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	uint16_t x46 = UINT16_MAX;
	volatile int64_t x48 = INT64_MIN;
	int64_t t11 = -91LL;

	t11 = ((x45*(x46&x47))^x48);

	if (t11 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -1LL;
	volatile int16_t x50 = INT16_MIN;
	volatile int32_t x52 = -65;
	int64_t t12 = -2977468702LL;

	t12 = ((x49*(x50&x51))^x52);

	if (t12 != -65LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = 0;
	int64_t x55 = 1759LL;
	static int16_t x56 = INT16_MAX;
	static int64_t t13 = -14726LL;

	t13 = ((x53*(x54&x55))^x56);

	if (t13 != 32767LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 252183U;
	uint64_t x62 = UINT64_MAX;
	int64_t x63 = 3087988LL;
	int32_t x64 = -907;
	uint64_t t14 = 513LLU;

	t14 = ((x61*(x62&x63))^x64);

	if (t14 != 18446743294971472921LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x66 = 26U;
	int64_t x68 = INT64_MIN;
	static volatile uint64_t t15 = 64163583LLU;

	t15 = ((x65*(x66&x67))^x68);

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = -1LL;
	static volatile uint16_t x70 = 1996U;
	volatile int64_t t16 = 2781LL;

	t16 = ((x69*(x70&x71))^x72);

	if (t16 != -30679LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 29418770U;
	volatile uint8_t x78 = 1U;
	int8_t x80 = INT8_MIN;
	static volatile uint32_t t17 = 22613827U;

	t17 = ((x77*(x78&x79))^x80);

	if (t17 != 4294967168U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = 62;
	static uint16_t x84 = 47U;
	volatile int64_t t18 = 328LL;

	t18 = ((x81*(x82&x83))^x84);

	if (t18 != -7889LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x89 = 251265LLU;
	volatile int64_t x90 = 1555175771789LL;
	int16_t x91 = -3380;
	static uint32_t x92 = 1464765359U;
	uint64_t t19 = 4574613032410473698LLU;

	t19 = ((x89*(x90&x91))^x92);

	if (t19 != 390761238800912163LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = 221032458919349924LLU;
	volatile uint64_t x99 = 2LLU;
	int8_t x100 = INT8_MAX;
	uint64_t t20 = 55214979959590LLU;

	t20 = ((x97*(x98&x99))^x100);

	if (t20 != 442064917838699831LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x118 = 18;
	uint32_t x119 = 14U;
	volatile uint32_t t21 = 435541101U;

	t21 = ((x117*(x118&x119))^x120);

	if (t21 != 4294901761U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x122 = INT16_MAX;
	int64_t x124 = INT64_MIN;
	int64_t t22 = 751LL;

	t22 = ((x121*(x122&x123))^x124);

	if (t22 != -9223372036854750699LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = INT16_MIN;
	static uint8_t x127 = UINT8_MAX;
	static int32_t x128 = INT32_MIN;
	int32_t t23 = 14390575;

	t23 = ((x125*(x126&x127))^x128);

	if (t23 != 2139193344) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = 1;
	volatile uint64_t x130 = 15267755973852LLU;
	uint64_t t24 = 6328137173770937239LLU;

	t24 = ((x129*(x130&x131))^x132);

	if (t24 != 15267755973667LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x134 = 4500618636412728094LLU;
	int32_t x135 = 228870;
	volatile int32_t x136 = INT32_MIN;
	uint64_t t25 = 856297440LLU;

	t25 = ((x133*(x134&x135))^x136);

	if (t25 != 2147339770LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x138 = -1LL;
	int16_t x139 = 739;

	t26 = ((x137*(x138&x139))^x140);

	if (t26 != -233246457LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x141 = -1;
	uint32_t x143 = 203693192U;
	int16_t x144 = INT16_MIN;
	static uint32_t t27 = 6127U;

	t27 = ((x141*(x142&x143))^x144);

	if (t27 != 203711352U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x145 = -1;
	int16_t x146 = INT16_MAX;
	static int64_t x147 = -8287969451LL;
	int64_t t28 = 1493LL;

	t28 = ((x145*(x146&x147))^x148);

	if (t28 != 8020LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x149 = 1879LLU;
	int16_t x150 = -7;
	int64_t x151 = 1667272986741LL;
	volatile int8_t x152 = INT8_MIN;
	static volatile uint64_t t29 = 0LLU;

	t29 = ((x149*(x150&x151))^x152);

	if (t29 != 18443611267767472871LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = 1;
	int16_t x154 = INT16_MIN;
	int32_t x155 = INT32_MAX;
	int32_t x156 = INT32_MIN;
	static int32_t t30 = -14114;

	t30 = ((x153*(x154&x155))^x156);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x157 = 2573U;
	uint64_t x158 = 930784681284985819LLU;
	int32_t x160 = INT32_MIN;

	t31 = ((x157*(x158&x159))^x160);

	if (t31 != 18446744071627841567LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x162 = INT16_MAX;
	int32_t x163 = INT32_MIN;
	int16_t x164 = -1;
	volatile int64_t t32 = -2624658LL;

	t32 = ((x161*(x162&x163))^x164);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = INT8_MIN;
	int32_t x166 = 0;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t33 = 40036679;

	t33 = ((x165*(x166&x167))^x168);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x169 = INT64_MIN;
	int8_t x170 = 7;
	uint64_t x171 = 1030LLU;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = ((x169*(x170&x171))^x172);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x173 = 24U;
	int64_t x174 = INT64_MAX;
	int64_t x175 = INT64_MIN;
	static int32_t x176 = -1;
	volatile int64_t t35 = 1686100376270LL;

	t35 = ((x173*(x174&x175))^x176);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x177 = 1333LLU;
	uint32_t x178 = 743U;
	int8_t x180 = -1;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x177*(x178&x179))^x180);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x186 = -21616755265LL;
	volatile int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MIN;
	static int64_t t37 = -9504571728782LL;

	t37 = ((x185*(x186&x187))^x188);

	if (t37 != -13252121624576LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x189 = -1;
	static int8_t x190 = 1;
	int64_t x192 = INT64_MAX;
	int64_t t38 = INT64_MIN;

	t38 = ((x189*(x190&x191))^x192);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x197 = -2;
	int8_t x198 = -1;
	static int32_t x199 = 1;
	static int16_t x200 = INT16_MIN;
	volatile int32_t t39 = 62;

	t39 = ((x197*(x198&x199))^x200);

	if (t39 != 32766) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x201 = 30U;
	int8_t x202 = -1;
	int32_t x204 = INT32_MIN;
	int32_t t40 = -1;

	t40 = ((x201*(x202&x203))^x204);

	if (t40 != 2147483588) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x205 = -1;
	volatile int64_t x206 = INT64_MAX;

	t41 = ((x205*(x206&x207))^x208);

	if (t41 != -9223372034707226625LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x209 = INT16_MIN;
	int64_t x211 = -69836429147LL;
	static uint32_t x212 = 292126751U;
	volatile int64_t t42 = 6305872128LL;

	t42 = ((x209*(x210&x211))^x212);

	if (t42 != 2322168849989663LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x213 = 112645217U;
	int8_t x214 = 1;
	int16_t x215 = INT16_MIN;
	int32_t x216 = 992950914;
	volatile uint32_t t43 = 4U;

	t43 = ((x213*(x214&x215))^x216);

	if (t43 != 992950914U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = 76029224025LLU;
	uint8_t x222 = 18U;
	int32_t x223 = -1;
	uint32_t x224 = UINT32_MAX;
	volatile uint64_t t44 = 87444750532001LLU;

	t44 = ((x221*(x222&x223))^x224);

	if (t44 != 1367368135101LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x225 = -47156LL;
	int8_t x226 = -1;
	int64_t t45 = 145219968172762LL;

	t45 = ((x225*(x226&x227))^x228);

	if (t45 != -47107LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x233 = 3635;
	int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MAX;
	int64_t t46 = -53011LL;

	t46 = ((x233*(x234&x235))^x236);

	if (t46 != -119078913LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x238 = 2821857022040011LL;
	int16_t x239 = INT16_MAX;
	int32_t x240 = 5627;

	t47 = ((x237*(x238&x239))^x240);

	if (t47 != -2879621LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x241 = -1;
	uint32_t x242 = 576598234U;
	volatile int64_t x244 = 22LL;
	int64_t t48 = -186LL;

	t48 = ((x241*(x242&x243))^x244);

	if (t48 != 22LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = -1;
	int16_t x246 = INT16_MIN;
	static volatile int64_t x247 = -43LL;
	uint8_t x248 = UINT8_MAX;
	int64_t t49 = 10007316533875293LL;

	t49 = ((x245*(x246&x247))^x248);

	if (t49 != 33023LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x250 = INT64_MIN;
	uint8_t x251 = 3U;
	volatile uint8_t x252 = 10U;
	volatile int64_t t50 = 3866LL;

	t50 = ((x249*(x250&x251))^x252);

	if (t50 != 10LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x257 = -1LL;
	volatile int8_t x258 = -1;
	int64_t x259 = INT64_MAX;
	volatile int64_t t51 = INT64_MIN;

	t51 = ((x257*(x258&x259))^x260);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x262 = -1;
	uint8_t x264 = 15U;
	int32_t t52 = -533706;

	t52 = ((x261*(x262&x263))^x264);

	if (t52 != 143) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x265 = INT64_MIN;
	volatile int64_t x266 = -1LL;
	volatile int32_t x268 = -1;
	int64_t t53 = INT64_MAX;

	t53 = ((x265*(x266&x267))^x268);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = 104;
	int64_t x276 = 159256LL;

	t54 = ((x273*(x274&x275))^x276);

	if (t54 != 18446744073709392256LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x281 = INT16_MIN;
	uint64_t x282 = UINT64_MAX;
	uint64_t x283 = 43LLU;
	uint8_t x284 = 8U;
	static volatile uint64_t t55 = 62852426LLU;

	t55 = ((x281*(x282&x283))^x284);

	if (t55 != 18446744073708142600LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x285 = -144;
	static uint16_t x286 = 76U;
	int32_t x287 = INT32_MIN;
	int32_t x288 = -1;
	volatile int32_t t56 = -199;

	t56 = ((x285*(x286&x287))^x288);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x293 = 20623104283LLU;
	uint16_t x295 = UINT16_MAX;
	volatile uint32_t x296 = 8265131U;

	t57 = ((x293*(x294&x295))^x296);

	if (t57 != 675757255818062LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x297 = INT16_MIN;
	volatile int16_t x298 = INT16_MIN;
	volatile int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MAX;
	int32_t t58 = 153710886;

	t58 = ((x297*(x298&x299))^x300);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x301 = INT64_MIN;
	volatile int8_t x303 = INT8_MAX;
	int64_t x304 = INT64_MAX;

	t59 = ((x301*(x302&x303))^x304);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x307 = 96LLU;
	volatile uint64_t t60 = 5430714014196618LLU;

	t60 = ((x305*(x306&x307))^x308);

	if (t60 != 18446743909759567130LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x309 = INT64_MAX;
	int32_t x310 = -1;
	static int64_t x312 = -1LL;
	volatile uint64_t t61 = 37556LLU;

	t61 = ((x309*(x310&x311))^x312);

	if (t61 != 9223372036855811424LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x313 = INT64_MAX;
	static int64_t x314 = 12444241LL;
	volatile uint64_t x315 = 124793614700LLU;
	static volatile uint64_t t62 = 1063948LLU;

	t62 = ((x313*(x314&x315))^x316);

	if (t62 != 18446744073709108958LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x317 = 2U;
	int8_t x318 = INT8_MIN;
	volatile int8_t x319 = -1;
	int64_t x320 = INT64_MAX;
	static volatile int64_t t63 = -456108764566284LL;

	t63 = ((x317*(x318&x319))^x320);

	if (t63 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x321 = 1319482421LLU;
	int8_t x322 = 4;
	volatile int64_t x323 = INT64_MAX;
	int8_t x324 = 52;
	uint64_t t64 = 151134002029149LLU;

	t64 = ((x321*(x322&x323))^x324);

	if (t64 != 5277929696LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x325 = INT64_MAX;
	uint64_t x326 = 1402591864798761LLU;
	volatile uint64_t t65 = 3LLU;

	t65 = ((x325*(x326&x327))^x328);

	if (t65 != 9223372036854775895LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x333 = 4660667LLU;
	int64_t x334 = -1LL;
	int32_t x335 = -1;
	volatile int64_t x336 = 73778LL;
	volatile uint64_t t66 = 1109319956LLU;

	t66 = ((x333*(x334&x335))^x336);

	if (t66 != 18446744073704948343LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x342 = 20509297U;
	int32_t x343 = 7;
	int8_t x344 = -9;
	static volatile uint32_t t67 = 5U;

	t67 = ((x341*(x342&x343))^x344);

	if (t67 != 4294967048U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x345 = 20U;
	int32_t x346 = INT32_MIN;
	int64_t x347 = -2LL;
	static volatile int64_t t68 = 15509222LL;

	t68 = ((x345*(x346&x347))^x348);

	if (t68 != 42949672959LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x349 = INT64_MAX;
	int8_t x350 = INT8_MIN;
	volatile uint16_t x351 = 65U;
	int32_t x352 = INT32_MIN;
	static int64_t t69 = 2737447220121700269LL;

	t69 = ((x349*(x350&x351))^x352);

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x353 = INT8_MIN;
	volatile int16_t x354 = 4876;
	static uint64_t x355 = 672266LLU;
	uint8_t x356 = UINT8_MAX;
	uint64_t t70 = 3LLU;

	t70 = ((x353*(x354&x355))^x356);

	if (t70 != 18446744073709485311LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x361 = UINT16_MAX;
	int32_t x363 = INT32_MIN;
	volatile int64_t x364 = INT64_MIN;
	int64_t t71 = INT64_MIN;

	t71 = ((x361*(x362&x363))^x364);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x365 = 3U;
	uint16_t x366 = UINT16_MAX;
	int64_t x367 = INT64_MIN;
	static volatile int64_t t72 = -334120081LL;

	t72 = ((x365*(x366&x367))^x368);

	if (t72 != -32768LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x369 = -1LL;
	int64_t x371 = INT64_MIN;
	int8_t x372 = -1;

	t73 = ((x369*(x370&x371))^x372);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x373 = UINT16_MAX;
	static int16_t x374 = -1;
	uint8_t x375 = UINT8_MAX;
	int8_t x376 = 3;
	int32_t t74 = 2425;

	t74 = ((x373*(x374&x375))^x376);

	if (t74 != 16711426) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x377 = -1;
	volatile uint64_t x379 = 5201189784539633LLU;
	static int8_t x380 = INT8_MIN;

	t75 = ((x377*(x378&x379))^x380);

	if (t75 != 127LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x381 = 434821;
	static uint64_t x383 = 14450983229LLU;
	static int64_t x384 = INT64_MIN;
	static volatile uint64_t t76 = 90221754145587LLU;

	t76 = ((x381*(x382&x383))^x384);

	if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x393 = INT16_MAX;
	int32_t x394 = -1;
	volatile int64_t x395 = -1LL;
	static volatile int64_t x396 = INT64_MIN;
	volatile int64_t t77 = -922LL;

	t77 = ((x393*(x394&x395))^x396);

	if (t77 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x398 = INT8_MIN;
	int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;
	int64_t t78 = -97344LL;

	t78 = ((x397*(x398&x399))^x400);

	if (t78 != -166912LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x401 = 0;
	uint32_t x402 = 6427U;
	int32_t x403 = 0;
	int8_t x404 = 2;
	volatile uint32_t t79 = 54482U;

	t79 = ((x401*(x402&x403))^x404);

	if (t79 != 2U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x405 = UINT64_MAX;
	uint16_t x406 = UINT16_MAX;
	int64_t x408 = INT64_MIN;
	volatile uint64_t t80 = 4250836256412760LLU;

	t80 = ((x405*(x406&x407))^x408);

	if (t80 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x409 = INT16_MIN;
	volatile uint64_t x410 = UINT64_MAX;
	uint8_t x411 = UINT8_MAX;
	int16_t x412 = -9;

	t81 = ((x409*(x410&x411))^x412);

	if (t81 != 8355831LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x413 = UINT8_MAX;
	uint8_t x415 = 100U;
	volatile int16_t x416 = -1;

	t82 = ((x413*(x414&x415))^x416);

	if (t82 != -25501) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x417 = UINT64_MAX;
	static int64_t x418 = -1LL;
	volatile uint64_t t83 = 1919003139LLU;

	t83 = ((x417*(x418&x419))^x420);

	if (t83 != 9223372036854776062LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MIN;
	int16_t x423 = -1;
	int32_t x424 = INT32_MIN;
	int32_t t84 = -1354403;

	t84 = ((x421*(x422&x423))^x424);

	if (t84 != -2143289344) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x425 = -3733318LL;
	volatile int16_t x427 = 3042;
	volatile int16_t x428 = INT16_MIN;
	uint64_t t85 = 7723215410LLU;

	t85 = ((x425*(x426&x427))^x428);

	if (t85 != 11356746292LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x429 = INT64_MIN;
	int8_t x430 = INT8_MAX;
	volatile int8_t x431 = INT8_MIN;
	static volatile int16_t x432 = -1;
	volatile int64_t t86 = -4148969LL;

	t86 = ((x429*(x430&x431))^x432);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x433 = UINT32_MAX;
	uint8_t x434 = 1U;
	uint64_t x436 = 1LLU;

	t87 = ((x433*(x434&x435))^x436);

	if (t87 != 4294967294LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x439 = INT32_MAX;
	static volatile int8_t x440 = INT8_MAX;
	volatile int32_t t88 = -33016567;

	t88 = ((x437*(x438&x439))^x440);

	if (t88 != 4046) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x441 = 370514158LLU;
	uint32_t x442 = 3035U;
	static volatile int8_t x443 = -7;
	int32_t x444 = -1;
	volatile uint64_t t89 = 369185667365256LLU;

	t89 = ((x441*(x442&x443))^x444);

	if (t89 != 18446742949940110401LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x445 = 2105412667U;
	uint32_t x446 = 59621U;
	volatile uint8_t x447 = 0U;
	volatile uint32_t t90 = 16U;

	t90 = ((x445*(x446&x447))^x448);

	if (t90 != 127U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x449 = INT16_MAX;
	int8_t x450 = INT8_MIN;
	int16_t x451 = INT16_MIN;
	uint8_t x452 = 88U;
	static volatile int32_t t91 = -10909;

	t91 = ((x449*(x450&x451))^x452);

	if (t91 != -1073708968) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x453 = -6;
	int64_t x454 = 1006995432899260240LL;
	static uint64_t x455 = 1180164LLU;
	volatile int16_t x456 = INT16_MIN;

	t92 = ((x453*(x454&x455))^x456);

	if (t92 != 816128LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x457 = UINT8_MAX;
	static int32_t x458 = INT32_MIN;
	int32_t t93 = 207695;

	t93 = ((x457*(x458&x459))^x460);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x461 = 2U;
	int64_t x462 = INT64_MAX;
	uint16_t x463 = 24U;

	t94 = ((x461*(x462&x463))^x464);

	if (t94 != 207LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x467 = 5U;
	int64_t x468 = INT64_MIN;
	static volatile int64_t t95 = 74221153331607204LL;

	t95 = ((x465*(x466&x467))^x468);

	if (t95 != -9223372036854774961LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x471 = INT8_MIN;

	t96 = ((x469*(x470&x471))^x472);

	if (t96 != 2139268197LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x477 = 53U;
	volatile int32_t x478 = INT32_MIN;
	uint8_t x479 = 1U;
	int64_t x480 = -360831986621357476LL;
	int64_t t97 = -1131937545101385LL;

	t97 = ((x477*(x478&x479))^x480);

	if (t97 != -360831986621357476LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x481 = INT16_MIN;
	volatile uint16_t x482 = 25892U;
	int64_t x483 = INT64_MAX;
	int64_t t98 = 78LL;

	t98 = ((x481*(x482&x483))^x484);

	if (t98 != -848396289LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x485 = INT64_MIN;
	int8_t x486 = 1;
	int64_t x487 = INT64_MIN;
	uint8_t x488 = 10U;

	t99 = ((x485*(x486&x487))^x488);

	if (t99 != 10LL) { NG(); } else { ; }
	
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

