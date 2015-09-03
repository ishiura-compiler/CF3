#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = 4U;
int16_t x10 = 10;
static int32_t x13 = INT32_MIN;
static int32_t t3 = INT32_MIN;
volatile int32_t t4 = 32110871;
static uint32_t x21 = 5993040U;
int64_t x23 = INT64_MIN;
volatile uint32_t t5 = 64843U;
int64_t x27 = INT64_MAX;
int32_t x28 = INT32_MIN;
volatile int32_t t7 = INT32_MAX;
static int32_t x33 = INT32_MIN;
volatile int64_t x40 = -1LL;
volatile uint64_t t10 = 7LLU;
int32_t x53 = -1;
uint32_t x57 = UINT32_MAX;
static int16_t x63 = INT16_MIN;
uint8_t x64 = 0U;
int32_t x65 = 3;
int16_t x67 = 3836;
volatile uint64_t x70 = 265477044214LLU;
static int64_t x79 = 35LL;
volatile int64_t x81 = INT64_MIN;
volatile int64_t x85 = -1LL;
int64_t x86 = -1LL;
uint16_t x91 = UINT16_MAX;
uint64_t x92 = UINT64_MAX;
static volatile uint16_t x101 = UINT16_MAX;
static int32_t x102 = -1;
int64_t x110 = -115058120592LL;
static uint8_t x111 = UINT8_MAX;
static uint8_t x114 = 3U;
int64_t x118 = INT64_MIN;
static volatile int8_t x120 = 24;
int64_t x121 = 1642049LL;
static int32_t x123 = 29554;
int32_t x126 = INT32_MAX;
int8_t x130 = INT8_MIN;
uint64_t x134 = UINT64_MAX;
static volatile int16_t x135 = 0;
volatile uint64_t x136 = 2884892458171619LLU;
int16_t x138 = INT16_MIN;
int32_t x148 = -1;
int64_t x149 = -1369866280145LL;
static volatile int16_t x162 = -1;
static int32_t t40 = -55;
int32_t x168 = INT32_MIN;
int16_t x169 = INT16_MAX;
int32_t x171 = 525484;
int8_t x179 = INT8_MAX;
static int64_t x182 = INT64_MAX;
uint16_t x183 = 32U;
int64_t x194 = INT64_MIN;
static int8_t x196 = 0;
int8_t x198 = 0;
volatile int8_t x200 = INT8_MIN;
int8_t x205 = INT8_MIN;
int8_t x209 = -1;
static int16_t x216 = -1;
int32_t t53 = -42435;
int16_t x222 = INT16_MAX;
int8_t x223 = INT8_MIN;
volatile int32_t x224 = -1;
int16_t x228 = INT16_MIN;
volatile int32_t x231 = INT32_MIN;
uint64_t t57 = 53595131530LLU;
uint16_t x240 = 358U;
int32_t t59 = -313927;
uint32_t x242 = 1678U;
static uint64_t x245 = 580156LLU;
volatile int16_t x249 = 2;
static uint16_t x264 = 2284U;
static volatile int32_t t65 = -385;
int32_t x265 = INT32_MIN;
volatile int8_t x266 = INT8_MIN;
static volatile int16_t x268 = 72;
static volatile int32_t t66 = INT32_MIN;
int64_t x269 = INT64_MAX;
int32_t t68 = INT32_MIN;
static uint64_t x284 = 269597873529957LLU;
static int16_t x290 = INT16_MAX;
uint64_t x291 = 91783882LLU;
volatile uint64_t t72 = 2097LLU;
volatile int32_t x308 = 13;
static int16_t x310 = INT16_MAX;
int8_t x315 = -1;
static int32_t t79 = -6833954;
int16_t x321 = INT16_MIN;
int64_t x325 = INT64_MIN;
uint32_t t82 = UINT32_MAX;
uint32_t x335 = 1010974U;
volatile uint32_t x340 = 0U;
static int64_t x347 = -145661975522959LL;
uint32_t x352 = 948242U;
volatile int64_t x354 = INT64_MAX;
int16_t x363 = INT16_MIN;
uint16_t x368 = 264U;
volatile int16_t x373 = 0;
int64_t x375 = INT64_MIN;
int64_t x379 = INT64_MIN;
volatile int32_t t94 = 81595963;
int32_t x383 = 50;
int8_t x385 = INT8_MAX;
uint8_t x398 = 1U;


void f0(void) {
	volatile int64_t x1 = 223509826265806LL;
	volatile int8_t x2 = INT8_MIN;
	int64_t x3 = 28748364590049LL;
	volatile int64_t t0 = 1LL;

	t0 = (x1|((x2==x3)*x4));

	if (t0 != 223509826265806LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static int8_t x6 = -1;
	static int32_t x7 = INT32_MIN;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -329;

	t1 = (x5|((x6==x7)*x8));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	uint32_t x11 = UINT32_MAX;
	volatile int16_t x12 = INT16_MIN;
	int32_t t2 = 0;

	t2 = (x9|((x10==x11)*x12));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	static int8_t x15 = INT8_MAX;
	volatile int16_t x16 = -1567;

	t3 = (x13|((x14==x15)*x16));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 7809740;
	int16_t x18 = INT16_MAX;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = 13U;

	t4 = (x17|((x18==x19)*x20));

	if (t4 != 7809740) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = -1;
	volatile int32_t x24 = -502213;

	t5 = (x21|((x22==x23)*x24));

	if (t5 != 5993040U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int32_t x26 = INT32_MIN;
	int64_t t6 = INT64_MAX;

	t6 = (x25|((x26==x27)*x28));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	uint32_t x30 = UINT32_MAX;
	static volatile int64_t x31 = -172303916LL;
	int32_t x32 = -1;

	t7 = (x29|((x30==x31)*x32));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t8 = INT32_MIN;

	t8 = (x33|((x34==x35)*x36));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint8_t x38 = UINT8_MAX;
	int32_t x39 = -1;
	static volatile int64_t t9 = 18670970835311LL;

	t9 = (x37|((x38==x39)*x40));

	if (t9 != -2147483648LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 127939LLU;
	volatile int8_t x42 = INT8_MAX;
	static uint8_t x43 = 35U;
	volatile uint64_t x44 = 1878211100771325LLU;

	t10 = (x41|((x42==x43)*x44));

	if (t10 != 127939LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 3U;
	int16_t x46 = INT16_MIN;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = -1;
	int32_t t11 = -969;

	t11 = (x45|((x46==x47)*x48));

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = UINT64_MAX;
	int16_t x50 = INT16_MIN;
	static int16_t x51 = 6710;
	int16_t x52 = 3623;
	uint64_t t12 = UINT64_MAX;

	t12 = (x49|((x50==x51)*x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x54 = 653LL;
	int64_t x55 = INT64_MIN;
	uint32_t x56 = 32U;
	uint32_t t13 = UINT32_MAX;

	t13 = (x53|((x54==x55)*x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = UINT8_MAX;
	static int32_t x59 = -1;
	int8_t x60 = INT8_MIN;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (x57|((x58==x59)*x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 1U;
	uint16_t x62 = 20162U;
	volatile int32_t t15 = -2163;

	t15 = (x61|((x62==x63)*x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x66 = INT64_MAX;
	volatile int32_t x68 = -1;
	volatile int32_t t16 = 950263;

	t16 = (x65|((x66==x67)*x68));

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 82U;
	uint32_t x71 = 276435857U;
	volatile int16_t x72 = -1;
	volatile int32_t t17 = -421236893;

	t17 = (x69|((x70==x71)*x72));

	if (t17 != 82) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	uint16_t x74 = 1235U;
	volatile int32_t x75 = 0;
	static int32_t x76 = -10708;
	uint64_t t18 = UINT64_MAX;

	t18 = (x73|((x74==x75)*x76));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint8_t x78 = UINT8_MAX;
	int8_t x80 = -1;
	int32_t t19 = INT32_MIN;

	t19 = (x77|((x78==x79)*x80));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MIN;
	uint64_t x83 = UINT64_MAX;
	volatile int8_t x84 = -7;
	int64_t t20 = INT64_MIN;

	t20 = (x81|((x82==x83)*x84));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x87 = UINT8_MAX;
	int64_t x88 = -1LL;
	volatile int64_t t21 = -224319LL;

	t21 = (x85|((x86==x87)*x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	int32_t x90 = INT32_MIN;
	volatile uint64_t t22 = 58790952556872LLU;

	t22 = (x89|((x90==x91)*x92));

	if (t22 != 2147483647LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int16_t x94 = -239;
	static int8_t x95 = -1;
	volatile int64_t x96 = INT64_MIN;
	volatile int64_t t23 = 4405432649466LL;

	t23 = (x93|((x94==x95)*x96));

	if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MAX;
	static int16_t x98 = 665;
	int32_t x99 = -3701;
	static int64_t x100 = INT64_MAX;
	int64_t t24 = 95609037489418LL;

	t24 = (x97|((x98==x99)*x100));

	if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x103 = 576U;
	int16_t x104 = 50;
	static int32_t t25 = 3827;

	t25 = (x101|((x102==x103)*x104));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 33U;
	int16_t x106 = INT16_MAX;
	uint8_t x107 = 22U;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 25506127;

	t26 = (x105|((x106==x107)*x108));

	if (t26 != 33) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 0U;
	static uint16_t x112 = 6U;
	volatile int32_t t27 = 368;

	t27 = (x109|((x110==x111)*x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	uint8_t x115 = 11U;
	int32_t x116 = INT32_MIN;
	uint64_t t28 = UINT64_MAX;

	t28 = (x113|((x114==x115)*x116));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MIN;
	int64_t x119 = -1LL;
	static volatile int32_t t29 = INT32_MIN;

	t29 = (x117|((x118==x119)*x120));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MIN;
	uint32_t x124 = UINT32_MAX;
	int64_t t30 = -27991918465LL;

	t30 = (x121|((x122==x123)*x124));

	if (t30 != 1642049LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint64_t x127 = 25729516835266709LLU;
	static int32_t x128 = 614;
	static volatile int32_t t31 = INT32_MIN;

	t31 = (x125|((x126==x127)*x128));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	static int16_t x131 = -6;
	int32_t x132 = -132695595;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x129|((x130==x131)*x132));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	static volatile uint64_t t33 = 12651175620802623LLU;

	t33 = (x133|((x134==x135)*x136));

	if (t33 != 65535LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	uint64_t x139 = 11821918044692LLU;
	static uint8_t x140 = UINT8_MAX;
	int32_t t34 = -801510984;

	t34 = (x137|((x138==x139)*x140));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 3049574555782877309LL;
	int64_t x142 = INT64_MIN;
	volatile uint16_t x143 = UINT16_MAX;
	uint64_t x144 = 1905LLU;
	volatile uint64_t t35 = 4044LLU;

	t35 = (x141|((x142==x143)*x144));

	if (t35 != 3049574555782877309LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MAX;
	int64_t x147 = 142471875477157614LL;
	volatile int32_t t36 = -2751;

	t36 = (x145|((x146==x147)*x148));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x150 = 1U;
	volatile int32_t x151 = INT32_MIN;
	int8_t x152 = -1;
	volatile int64_t t37 = -7LL;

	t37 = (x149|((x150==x151)*x152));

	if (t37 != -1369866280145LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -2;
	uint8_t x154 = UINT8_MAX;
	volatile int64_t x155 = 2437927795680LL;
	static uint64_t x156 = 3149451259204728LLU;
	volatile uint64_t t38 = 4830060119LLU;

	t38 = (x153|((x154==x155)*x156));

	if (t38 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	volatile int64_t x158 = -29573LL;
	int16_t x159 = 13;
	int16_t x160 = -1;
	volatile int32_t t39 = -49;

	t39 = (x157|((x158==x159)*x160));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int32_t x163 = -1;
	static int16_t x164 = -1;

	t40 = (x161|((x162==x163)*x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	static int64_t x166 = INT64_MAX;
	int64_t x167 = INT64_MAX;
	int32_t t41 = 13724296;

	t41 = (x165|((x166==x167)*x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = 73887617;
	volatile int64_t x172 = INT64_MIN;
	int64_t t42 = -27LL;

	t42 = (x169|((x170==x171)*x172));

	if (t42 != 32767LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 11U;
	uint16_t x174 = 43U;
	static int16_t x175 = INT16_MIN;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t43 = 58237618856051554LLU;

	t43 = (x173|((x174==x175)*x176));

	if (t43 != 11LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 1374LLU;
	static volatile int16_t x178 = INT16_MAX;
	volatile int16_t x180 = -4754;
	static uint64_t t44 = 69LLU;

	t44 = (x177|((x178==x179)*x180));

	if (t44 != 1374LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 56746261;
	int8_t x184 = INT8_MAX;
	static volatile int32_t t45 = -125011447;

	t45 = (x181|((x182==x183)*x184));

	if (t45 != 56746261) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = UINT8_MAX;
	uint64_t x186 = UINT64_MAX;
	int8_t x187 = INT8_MIN;
	int16_t x188 = -763;
	int32_t t46 = 477999;

	t46 = (x185|((x186==x187)*x188));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 21U;
	static volatile int64_t x190 = 504LL;
	static volatile int16_t x191 = INT16_MIN;
	static int64_t x192 = INT64_MAX;
	volatile int64_t t47 = -43063742703LL;

	t47 = (x189|((x190==x191)*x192));

	if (t47 != 21LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x193 = 441U;
	int16_t x195 = -1;
	int32_t t48 = 46;

	t48 = (x193|((x194==x195)*x196));

	if (t48 != 441) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = 111;
	int64_t x199 = -1LL;
	int32_t t49 = 0;

	t49 = (x197|((x198==x199)*x200));

	if (t49 != 111) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 1U;
	volatile uint16_t x202 = 1966U;
	int16_t x203 = 737;
	int8_t x204 = INT8_MIN;
	static int32_t t50 = 22950;

	t50 = (x201|((x202==x203)*x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = INT32_MIN;
	static volatile int64_t x207 = 233262457LL;
	int64_t x208 = INT64_MIN;
	int64_t t51 = 1332243328LL;

	t51 = (x205|((x206==x207)*x208));

	if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x210 = UINT32_MAX;
	int16_t x211 = INT16_MIN;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = -15781;

	t52 = (x209|((x210==x211)*x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = 0U;
	volatile int64_t x214 = 382698850932795LL;
	int8_t x215 = INT8_MIN;

	t53 = (x213|((x214==x215)*x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -18636;
	static volatile uint32_t x218 = 2U;
	int16_t x219 = INT16_MIN;
	int16_t x220 = 0;
	int32_t t54 = -67050640;

	t54 = (x217|((x218==x219)*x220));

	if (t54 != -18636) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = 3531U;
	volatile uint32_t t55 = 64506039U;

	t55 = (x221|((x222==x223)*x224));

	if (t55 != 3531U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 52;
	volatile int64_t x226 = INT64_MIN;
	static int64_t x227 = INT64_MIN;
	int32_t t56 = -486821;

	t56 = (x225|((x226==x227)*x228));

	if (t56 != -32716) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = UINT32_MAX;
	uint32_t x230 = UINT32_MAX;
	uint64_t x232 = UINT64_MAX;

	t57 = (x229|((x230==x231)*x232));

	if (t57 != 4294967295LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -452799;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = 18878153936481LL;
	static uint64_t x236 = 0LLU;
	volatile uint64_t t58 = 137650070LLU;

	t58 = (x233|((x234==x235)*x236));

	if (t58 != 18446744073709098817LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = UINT8_MAX;
	int32_t x238 = -1;
	static int8_t x239 = 0;

	t59 = (x237|((x238==x239)*x240));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	uint16_t x243 = UINT16_MAX;
	int64_t x244 = INT64_MIN;
	int64_t t60 = -562LL;

	t60 = (x241|((x242==x243)*x244));

	if (t60 != 32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x246 = INT8_MAX;
	uint64_t x247 = 33315068816436879LLU;
	static uint8_t x248 = 24U;
	uint64_t t61 = 96706LLU;

	t61 = (x245|((x246==x247)*x248));

	if (t61 != 580156LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x250 = 188U;
	int16_t x251 = INT16_MIN;
	int16_t x252 = -2;
	static volatile int32_t t62 = 150268;

	t62 = (x249|((x250==x251)*x252));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MAX;
	uint32_t x254 = 0U;
	static volatile int64_t x255 = 2022334LL;
	volatile int16_t x256 = -14773;
	static int32_t t63 = 8598;

	t63 = (x253|((x254==x255)*x256));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 70;
	static int32_t x258 = INT32_MAX;
	int16_t x259 = INT16_MAX;
	int32_t x260 = INT32_MAX;
	volatile int32_t t64 = -116086874;

	t64 = (x257|((x258==x259)*x260));

	if (t64 != 70) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;

	t65 = (x261|((x262==x263)*x264));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x267 = -7;

	t66 = (x265|((x266==x267)*x268));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MIN;
	uint32_t x271 = 11U;
	static volatile uint64_t x272 = UINT64_MAX;
	volatile uint64_t t67 = 373LLU;

	t67 = (x269|((x270==x271)*x272));

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	volatile int32_t x274 = INT32_MIN;
	int32_t x275 = -1;
	volatile int32_t x276 = -1;

	t68 = (x273|((x274==x275)*x276));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int16_t x278 = 1798;
	volatile uint16_t x279 = UINT16_MAX;
	int32_t x280 = 13985;
	volatile int32_t t69 = INT32_MAX;

	t69 = (x277|((x278==x279)*x280));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 3023;
	uint16_t x282 = 1994U;
	volatile uint64_t x283 = 343LLU;
	static uint64_t t70 = 753LLU;

	t70 = (x281|((x282==x283)*x284));

	if (t70 != 3023LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	static int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	int64_t x288 = -1LL;
	int64_t t71 = 5395922513064LL;

	t71 = (x285|((x286==x287)*x288));

	if (t71 != 4294967295LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 3LLU;
	static int8_t x292 = INT8_MIN;

	t72 = (x289|((x290==x291)*x292));

	if (t72 != 3LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	volatile int16_t x294 = -292;
	int16_t x295 = INT16_MIN;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = INT32_MIN;

	t73 = (x293|((x294==x295)*x296));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MAX;
	uint8_t x299 = UINT8_MAX;
	static uint8_t x300 = 7U;
	volatile int64_t t74 = INT64_MIN;

	t74 = (x297|((x298==x299)*x300));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 244878U;
	volatile uint8_t x302 = 5U;
	static volatile int64_t x303 = 5539468LL;
	int8_t x304 = -3;
	volatile uint32_t t75 = 13154686U;

	t75 = (x301|((x302==x303)*x304));

	if (t75 != 244878U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 4476401LLU;
	int8_t x306 = INT8_MIN;
	volatile uint16_t x307 = 22737U;
	uint64_t t76 = 2301173164589689LLU;

	t76 = (x305|((x306==x307)*x308));

	if (t76 != 4476401LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 1;
	static volatile int8_t x311 = INT8_MIN;
	int16_t x312 = -1;
	static volatile int32_t t77 = -61;

	t77 = (x309|((x310==x311)*x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 7;
	int16_t x314 = INT16_MAX;
	uint16_t x316 = 334U;
	static int32_t t78 = -130792;

	t78 = (x313|((x314==x315)*x316));

	if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MIN;

	t79 = (x317|((x318==x319)*x320));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = -1LL;
	int16_t x323 = -7165;
	uint16_t x324 = UINT16_MAX;
	static int32_t t80 = 50931;

	t80 = (x321|((x322==x323)*x324));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = 6456711709995LL;
	static volatile int16_t x327 = -2;
	uint16_t x328 = 3U;
	static volatile int64_t t81 = INT64_MIN;

	t81 = (x325|((x326==x327)*x328));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = -1;
	static int64_t x330 = INT64_MIN;
	volatile int8_t x331 = INT8_MAX;
	uint32_t x332 = UINT32_MAX;

	t82 = (x329|((x330==x331)*x332));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 170LL;
	int16_t x334 = INT16_MAX;
	volatile uint16_t x336 = 1100U;
	int64_t t83 = 310880LL;

	t83 = (x333|((x334==x335)*x336));

	if (t83 != 170LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	static uint64_t x338 = 19LLU;
	static volatile uint8_t x339 = 0U;
	volatile int64_t t84 = INT64_MAX;

	t84 = (x337|((x338==x339)*x340));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	uint32_t x342 = 7852763U;
	uint32_t x343 = 32932234U;
	volatile int32_t x344 = INT32_MIN;
	volatile int64_t t85 = 22494LL;

	t85 = (x341|((x342==x343)*x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int64_t x346 = INT64_MAX;
	uint8_t x348 = 14U;
	volatile int32_t t86 = -1123274;

	t86 = (x345|((x346==x347)*x348));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	static volatile uint32_t t87 = UINT32_MAX;

	t87 = (x349|((x350==x351)*x352));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 233123715027728LL;
	int64_t x355 = -216LL;
	int64_t x356 = INT64_MIN;
	int64_t t88 = 2302254615384845LL;

	t88 = (x353|((x354==x355)*x356));

	if (t88 != 233123715027728LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x357 = 122809575775314081LLU;
	uint16_t x358 = 650U;
	static int64_t x359 = 1101607043986461589LL;
	volatile int16_t x360 = INT16_MAX;
	static uint64_t t89 = 3429363LLU;

	t89 = (x357|((x358==x359)*x360));

	if (t89 != 122809575775314081LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MIN;
	uint64_t x362 = UINT64_MAX;
	int32_t x364 = INT32_MAX;
	int32_t t90 = -8156274;

	t90 = (x361|((x362==x363)*x364));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MIN;
	int16_t x367 = -2350;
	volatile int32_t t91 = 0;

	t91 = (x365|((x366==x367)*x368));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = 67U;
	uint16_t x370 = 7553U;
	int64_t x371 = 0LL;
	uint32_t x372 = UINT32_MAX;
	static uint32_t t92 = 90U;

	t92 = (x369|((x370==x371)*x372));

	if (t92 != 67U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = 2097378035LL;
	uint64_t x376 = 247LLU;
	uint64_t t93 = 28956062239799LLU;

	t93 = (x373|((x374==x375)*x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = UINT8_MAX;
	int32_t x378 = 5;
	volatile uint16_t x380 = UINT16_MAX;

	t94 = (x377|((x378==x379)*x380));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MAX;
	int8_t x382 = INT8_MIN;
	int32_t x384 = 7829;
	int32_t t95 = -130;

	t95 = (x381|((x382==x383)*x384));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = INT32_MIN;
	int8_t x387 = -1;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t96 = -1;

	t96 = (x385|((x386==x387)*x388));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -8893724618047457LL;
	int64_t x390 = -29029419649790LL;
	static volatile int16_t x391 = INT16_MIN;
	static int8_t x392 = 0;
	volatile int64_t t97 = -214706285LL;

	t97 = (x389|((x390==x391)*x392));

	if (t97 != -8893724618047457LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	int32_t x394 = -1;
	uint32_t x395 = 3284371U;
	static int64_t x396 = 8505743LL;
	volatile int64_t t98 = -72794702LL;

	t98 = (x393|((x394==x395)*x396));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x397 = 265U;
	volatile uint32_t x399 = 15203793U;
	uint64_t x400 = 302LLU;
	volatile uint64_t t99 = 12249168253209LLU;

	t99 = (x397|((x398==x399)*x400));

	if (t99 != 265LLU) { NG(); } else { ; }
	
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

