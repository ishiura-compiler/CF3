#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MIN;
volatile int32_t t0 = 237;
int32_t x5 = 32580676;
uint32_t x10 = 20689831U;
uint64_t x11 = 117128LLU;
int32_t t2 = -5895985;
int8_t x15 = INT8_MIN;
int32_t t3 = -108;
uint8_t x17 = UINT8_MAX;
volatile uint32_t x21 = 599U;
int16_t x23 = INT16_MAX;
int8_t x26 = -1;
int64_t x30 = INT64_MIN;
int32_t t9 = 895;
int32_t x42 = INT32_MIN;
int16_t x44 = -1;
uint32_t x49 = 200893U;
volatile int8_t x51 = -42;
static int32_t x58 = INT32_MIN;
volatile int32_t t13 = -2709706;
int16_t x67 = 739;
int64_t x82 = INT64_MIN;
volatile uint32_t x84 = 12448U;
static volatile int32_t t19 = 30409;
volatile int32_t t20 = -2664;
uint32_t x90 = 220108U;
static int16_t x93 = 2240;
volatile int32_t t22 = 187676;
int64_t x97 = 124243954285493LL;
static int32_t t24 = -149;
volatile uint64_t x105 = 187934648LLU;
volatile uint16_t x106 = 2U;
uint64_t x110 = 16497863LLU;
static volatile int32_t t31 = -457893341;
volatile int32_t t32 = 1090;
int32_t x143 = INT32_MIN;
static int32_t x158 = -1;
volatile int16_t x159 = -1;
volatile int32_t t37 = -44319297;
int32_t x164 = INT32_MIN;
volatile int32_t t39 = 14413927;
int32_t t40 = -11355470;
int16_t x173 = INT16_MIN;
static int32_t t41 = -10252;
volatile uint32_t x179 = 743404196U;
volatile int32_t t43 = 294935027;
int8_t x186 = INT8_MIN;
uint32_t x187 = 1888322U;
uint32_t x188 = UINT32_MAX;
volatile int8_t x192 = INT8_MIN;
int32_t t45 = 74147249;
volatile uint8_t x194 = 0U;
static volatile uint8_t x200 = 2U;
volatile int32_t t50 = 6157;
volatile int32_t t51 = -118923424;
int8_t x217 = 2;
static int64_t x222 = -1008765435LL;
int32_t t54 = -361992;
int16_t x229 = INT16_MAX;
uint64_t x234 = UINT64_MAX;
volatile int32_t x235 = -1;
volatile int32_t t56 = 12112;
int64_t x242 = 59776LL;
int8_t x259 = 3;
int64_t x262 = 1037473051LL;
volatile int32_t x267 = INT32_MIN;
int8_t x269 = INT8_MIN;
volatile int8_t x271 = 23;
volatile uint64_t x281 = UINT64_MAX;
uint64_t x283 = 18038LLU;
int32_t t69 = 9;
int64_t x292 = -1LL;
volatile int16_t x298 = 91;
int32_t t73 = 1;
int8_t x307 = INT8_MIN;
int32_t t75 = 123265249;
static uint32_t x313 = UINT32_MAX;
int64_t x321 = INT64_MAX;
int8_t x322 = -1;
int64_t x334 = -231409LL;
int16_t x337 = INT16_MAX;
volatile int8_t x338 = INT8_MIN;
int64_t x341 = INT64_MIN;
volatile int16_t x345 = -1;
int64_t x347 = -2991694832549860LL;
static uint32_t x358 = 23U;
uint8_t x359 = 8U;
int8_t x365 = INT8_MIN;
volatile int32_t t90 = -44108385;
int64_t x377 = INT64_MIN;
static int8_t x390 = INT8_MIN;
int64_t x409 = INT64_MAX;
int64_t x411 = INT64_MAX;
static int32_t x412 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int8_t x2 = INT8_MIN;
	int32_t x4 = INT32_MIN;

	t0 = (x1==(x2<(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -3;
	static int16_t x7 = -1;
	uint64_t x8 = 3LLU;
	int32_t t1 = -1791266;

	t1 = (x5==(x6<(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	static volatile int16_t x12 = INT16_MAX;

	t2 = (x9==(x10<(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int16_t x14 = -20;
	int8_t x16 = -1;

	t3 = (x13==(x14<(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = 0LL;
	int64_t x19 = -1LL;
	int8_t x20 = INT8_MAX;
	int32_t t4 = -7834;

	t4 = (x17==(x18<(x19%x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -4;
	volatile int32_t x24 = INT32_MIN;
	int32_t t5 = 2466459;

	t5 = (x21==(x22<(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 1;
	int16_t x27 = INT16_MAX;
	uint16_t x28 = 6U;
	int32_t t6 = -199693;

	t6 = (x25==(x26<(x27%x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int8_t x31 = -1;
	static int8_t x32 = INT8_MAX;
	static volatile int32_t t7 = -1;

	t7 = (x29==(x30<(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = -1;
	static volatile int32_t x34 = 3507766;
	volatile int32_t x35 = 836304323;
	static uint64_t x36 = UINT64_MAX;
	static int32_t t8 = 12;

	t8 = (x33==(x34<(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;

	t9 = (x37==(x38<(x39%x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int32_t x43 = -570533;
	static volatile int32_t t10 = -1473;

	t10 = (x41==(x42<(x43%x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = -1LL;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t11 = -426;

	t11 = (x49==(x50<(x51%x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x53 = 3044332816672LLU;
	static int64_t x54 = INT64_MIN;
	uint64_t x55 = 253548110145458LLU;
	int8_t x56 = -13;
	int32_t t12 = -955;

	t12 = (x53==(x54<(x55%x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = -1;
	static int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;

	t13 = (x57==(x58<(x59%x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = UINT32_MAX;
	int16_t x62 = INT16_MIN;
	static int32_t x63 = 459139;
	volatile int64_t x64 = INT64_MIN;
	volatile int32_t t14 = -1858717;

	t14 = (x61==(x62<(x63%x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = UINT32_MAX;
	volatile int64_t x66 = INT64_MIN;
	static uint16_t x68 = UINT16_MAX;
	volatile int32_t t15 = -688;

	t15 = (x65==(x66<(x67%x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x69 = 38U;
	int16_t x70 = INT16_MIN;
	int16_t x71 = -38;
	uint16_t x72 = 11798U;
	int32_t t16 = -6707091;

	t16 = (x69==(x70<(x71%x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	int8_t x74 = -1;
	volatile int8_t x75 = INT8_MIN;
	static int16_t x76 = -2;
	int32_t t17 = -51;

	t17 = (x73==(x74<(x75%x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -1;
	uint8_t x78 = 118U;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = 2;
	int32_t t18 = 406850781;

	t18 = (x77==(x78<(x79%x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = -4513;
	int8_t x83 = INT8_MIN;

	t19 = (x81==(x82<(x83%x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	static int64_t x86 = INT64_MIN;
	static int32_t x87 = -1;
	volatile uint16_t x88 = UINT16_MAX;

	t20 = (x85==(x86<(x87%x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = UINT16_MAX;
	static int16_t x91 = INT16_MIN;
	uint64_t x92 = UINT64_MAX;
	int32_t t21 = 42655;

	t21 = (x89==(x90<(x91%x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x94 = 177563712U;
	volatile int32_t x95 = 559;
	volatile int8_t x96 = -1;

	t22 = (x93==(x94<(x95%x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x98 = INT32_MAX;
	uint16_t x99 = 17030U;
	int32_t x100 = -1;
	volatile int32_t t23 = -72335;

	t23 = (x97==(x98<(x99%x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	int16_t x102 = INT16_MIN;
	volatile int16_t x103 = -1;
	uint16_t x104 = 1U;

	t24 = (x101==(x102<(x103%x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x107 = INT32_MAX;
	int32_t x108 = 4;
	volatile int32_t t25 = -277585778;

	t25 = (x105==(x106<(x107%x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = 510455674LLU;
	static int8_t x111 = -1;
	int32_t x112 = -1;
	volatile int32_t t26 = 208710323;

	t26 = (x109==(x110<(x111%x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 7874359376LLU;
	static volatile uint16_t x114 = 6041U;
	static int32_t x115 = -124579048;
	uint32_t x116 = 958U;
	volatile int32_t t27 = -23328;

	t27 = (x113==(x114<(x115%x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x117 = 602U;
	volatile int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MAX;
	static int64_t x120 = 591649667509LL;
	int32_t t28 = -412;

	t28 = (x117==(x118<(x119%x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	uint16_t x122 = UINT16_MAX;
	static uint32_t x123 = 68695297U;
	static int16_t x124 = 8;
	volatile int32_t t29 = -59278;

	t29 = (x121==(x122<(x123%x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x125 = 411860568LLU;
	int64_t x126 = -1LL;
	static int64_t x127 = 839519352577LL;
	int16_t x128 = INT16_MAX;
	volatile int32_t t30 = -630;

	t30 = (x125==(x126<(x127%x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	volatile int64_t x130 = -1LL;
	uint8_t x131 = 11U;
	uint16_t x132 = 177U;

	t31 = (x129==(x130<(x131%x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MAX;
	int8_t x134 = -1;
	uint16_t x135 = 29U;
	int8_t x136 = INT8_MIN;

	t32 = (x133==(x134<(x135%x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 2U;
	uint8_t x138 = 0U;
	static uint8_t x139 = UINT8_MAX;
	uint8_t x140 = UINT8_MAX;
	int32_t t33 = 42504;

	t33 = (x137==(x138<(x139%x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -1;
	int16_t x142 = INT16_MAX;
	static int32_t x144 = 6701938;
	int32_t t34 = -961250;

	t34 = (x141==(x142<(x143%x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 11U;
	uint32_t x146 = 113638U;
	int32_t x147 = INT32_MAX;
	volatile uint8_t x148 = 1U;
	static volatile int32_t t35 = 25062032;

	t35 = (x145==(x146<(x147%x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	uint16_t x150 = 3050U;
	int32_t x151 = -7491;
	volatile int64_t x152 = INT64_MIN;
	static int32_t t36 = 1;

	t36 = (x149==(x150<(x151%x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MIN;
	int64_t x160 = INT64_MIN;

	t37 = (x157==(x158<(x159%x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x161 = INT16_MIN;
	uint8_t x162 = 17U;
	uint64_t x163 = 71332930LLU;
	volatile int32_t t38 = -257075822;

	t38 = (x161==(x162<(x163%x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = UINT8_MAX;
	uint64_t x166 = 2449LLU;
	static uint64_t x167 = 893693LLU;
	volatile int32_t x168 = -1;

	t39 = (x165==(x166<(x167%x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 758332988LLU;
	int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	int64_t x172 = -120752450439389429LL;

	t40 = (x169==(x170<(x171%x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x174 = 141U;
	int32_t x175 = -5;
	static int16_t x176 = -1;

	t41 = (x173==(x174<(x175%x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = 0;
	static int32_t x178 = -1;
	int16_t x180 = 4655;
	volatile int32_t t42 = 38;

	t42 = (x177==(x178<(x179%x180)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x181 = UINT32_MAX;
	uint32_t x182 = UINT32_MAX;
	volatile int8_t x183 = 4;
	volatile uint8_t x184 = 2U;

	t43 = (x181==(x182<(x183%x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	int32_t t44 = -16;

	t44 = (x185==(x186<(x187%x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x189 = UINT32_MAX;
	uint8_t x190 = 1U;
	int64_t x191 = INT64_MIN;

	t45 = (x189==(x190<(x191%x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x193 = INT8_MIN;
	int32_t x195 = -1;
	int16_t x196 = -1;
	static volatile int32_t t46 = -4586;

	t46 = (x193==(x194<(x195%x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 387053201805LLU;
	volatile uint16_t x198 = 1U;
	int8_t x199 = INT8_MIN;
	volatile int32_t t47 = 6702235;

	t47 = (x197==(x198<(x199%x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x201 = 0;
	static int64_t x202 = INT64_MIN;
	uint16_t x203 = UINT16_MAX;
	int8_t x204 = INT8_MIN;
	int32_t t48 = -854095;

	t48 = (x201==(x202<(x203%x204)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = UINT32_MAX;
	volatile uint32_t x206 = 1038078168U;
	int8_t x207 = INT8_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t49 = -5729963;

	t49 = (x205==(x206<(x207%x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x209 = 93U;
	uint8_t x210 = UINT8_MAX;
	int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MAX;

	t50 = (x209==(x210<(x211%x212)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = -19;
	int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = 1U;

	t51 = (x213==(x214<(x215%x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x218 = 148127646U;
	int32_t x219 = -16925516;
	volatile int16_t x220 = -1;
	int32_t t52 = -125409;

	t52 = (x217==(x218<(x219%x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 120083469U;
	uint8_t x223 = UINT8_MAX;
	uint32_t x224 = UINT32_MAX;
	volatile int32_t t53 = -750026310;

	t53 = (x221==(x222<(x223%x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -8;
	int64_t x226 = -1LL;
	volatile int32_t x227 = INT32_MAX;
	int8_t x228 = -15;

	t54 = (x225==(x226<(x227%x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x230 = UINT8_MAX;
	uint64_t x231 = 256743890344LLU;
	static uint32_t x232 = 11U;
	int32_t t55 = 256957767;

	t55 = (x229==(x230<(x231%x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = -96;
	int8_t x236 = -54;

	t56 = (x233==(x234<(x235%x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	uint32_t x238 = 316570U;
	uint32_t x239 = UINT32_MAX;
	int64_t x240 = -1LL;
	int32_t t57 = 9564;

	t57 = (x237==(x238<(x239%x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x241 = INT64_MIN;
	uint16_t x243 = 8U;
	volatile int16_t x244 = INT16_MIN;
	int32_t t58 = -433282;

	t58 = (x241==(x242<(x243%x244)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x245 = -1;
	uint32_t x246 = 1525017U;
	static int32_t x247 = 55213;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t59 = -323118360;

	t59 = (x245==(x246<(x247%x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MAX;
	int16_t x250 = -1;
	int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MIN;
	int32_t t60 = -3967;

	t60 = (x249==(x250<(x251%x252)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MIN;
	volatile int64_t x254 = INT64_MIN;
	uint64_t x255 = 218901LLU;
	uint8_t x256 = 7U;
	volatile int32_t t61 = 1612647;

	t61 = (x253==(x254<(x255%x256)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = 7868;
	int8_t x258 = INT8_MIN;
	volatile int16_t x260 = 15;
	volatile int32_t t62 = -795;

	t62 = (x257==(x258<(x259%x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = -1;
	uint64_t x263 = 37836296003LLU;
	int32_t x264 = -17243866;
	volatile int32_t t63 = -1;

	t63 = (x261==(x262<(x263%x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	uint32_t x266 = 49U;
	int32_t x268 = -333;
	volatile int32_t t64 = -2032389;

	t64 = (x265==(x266<(x267%x268)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x270 = INT8_MIN;
	int32_t x272 = -1;
	int32_t t65 = 551;

	t65 = (x269==(x270<(x271%x272)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = 0;
	uint32_t x274 = 1960001U;
	int32_t x275 = INT32_MIN;
	int16_t x276 = -74;
	int32_t t66 = 57;

	t66 = (x273==(x274<(x275%x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = 428107LL;
	static volatile uint16_t x278 = 487U;
	volatile uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MIN;
	int32_t t67 = 15105184;

	t67 = (x277==(x278<(x279%x280)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x282 = 3;
	int8_t x284 = INT8_MAX;
	volatile int32_t t68 = -264;

	t68 = (x281==(x282<(x283%x284)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = 2LLU;
	int32_t x286 = INT32_MIN;
	volatile uint16_t x287 = 11632U;
	int64_t x288 = INT64_MIN;

	t69 = (x285==(x286<(x287%x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	uint32_t x290 = UINT32_MAX;
	volatile uint8_t x291 = 1U;
	int32_t t70 = -13015987;

	t70 = (x289==(x290<(x291%x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -1;
	static uint64_t x294 = 0LLU;
	volatile uint16_t x295 = 42U;
	int32_t x296 = -1;
	int32_t t71 = 16;

	t71 = (x293==(x294<(x295%x296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = -1;
	volatile int8_t x299 = -1;
	int8_t x300 = INT8_MIN;
	volatile int32_t t72 = -23079;

	t72 = (x297==(x298<(x299%x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x301 = INT16_MIN;
	uint8_t x302 = UINT8_MAX;
	static int64_t x303 = -2363235423935LL;
	int32_t x304 = INT32_MIN;

	t73 = (x301==(x302<(x303%x304)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x305 = INT32_MIN;
	uint8_t x306 = 2U;
	int8_t x308 = -2;
	volatile int32_t t74 = -20520863;

	t74 = (x305==(x306<(x307%x308)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = -1;
	uint16_t x310 = UINT16_MAX;
	volatile int16_t x311 = -1;
	uint8_t x312 = 2U;

	t75 = (x309==(x310<(x311%x312)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x314 = INT8_MIN;
	volatile int16_t x315 = -1493;
	int16_t x316 = INT16_MIN;
	volatile int32_t t76 = -1917;

	t76 = (x313==(x314<(x315%x316)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x317 = 1009153U;
	int16_t x318 = 0;
	volatile uint32_t x319 = UINT32_MAX;
	int64_t x320 = -1LL;
	int32_t t77 = 632096;

	t77 = (x317==(x318<(x319%x320)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x323 = -1;
	int8_t x324 = -1;
	volatile int32_t t78 = -517517;

	t78 = (x321==(x322<(x323%x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = INT8_MIN;
	uint16_t x326 = 1877U;
	int8_t x327 = -41;
	volatile int8_t x328 = 1;
	static volatile int32_t t79 = -8603;

	t79 = (x325==(x326<(x327%x328)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = 7979;
	int8_t x330 = -1;
	static uint8_t x331 = 59U;
	int8_t x332 = 1;
	volatile int32_t t80 = -397350142;

	t80 = (x329==(x330<(x331%x332)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x333 = INT16_MIN;
	static int64_t x335 = -6004LL;
	int32_t x336 = -7618;
	int32_t t81 = 11;

	t81 = (x333==(x334<(x335%x336)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x339 = -6936637327397LL;
	static int32_t x340 = INT32_MIN;
	int32_t t82 = -179781;

	t82 = (x337==(x338<(x339%x340)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x342 = INT32_MAX;
	int16_t x343 = -1;
	int32_t x344 = -2730;
	volatile int32_t t83 = 1;

	t83 = (x341==(x342<(x343%x344)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x346 = 36864LL;
	int32_t x348 = -904;
	static int32_t t84 = 1179;

	t84 = (x345==(x346<(x347%x348)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x349 = 62U;
	uint16_t x350 = 22195U;
	static int64_t x351 = INT64_MIN;
	int64_t x352 = INT64_MIN;
	volatile int32_t t85 = -1;

	t85 = (x349==(x350<(x351%x352)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x357 = INT32_MIN;
	uint16_t x360 = UINT16_MAX;
	int32_t t86 = 2;

	t86 = (x357==(x358<(x359%x360)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = -5;
	int16_t x362 = INT16_MIN;
	volatile int64_t x363 = INT64_MIN;
	int16_t x364 = -1;
	volatile int32_t t87 = -22747444;

	t87 = (x361==(x362<(x363%x364)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x366 = 29;
	uint16_t x367 = UINT16_MAX;
	static volatile uint64_t x368 = 47256781096385869LLU;
	volatile int32_t t88 = -24;

	t88 = (x365==(x366<(x367%x368)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x369 = 9U;
	uint32_t x370 = 40U;
	static uint32_t x371 = 7342943U;
	uint16_t x372 = UINT16_MAX;
	static int32_t t89 = -69;

	t89 = (x369==(x370<(x371%x372)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = INT16_MIN;
	int8_t x374 = -1;
	volatile uint64_t x375 = 792271035958LLU;
	int8_t x376 = -1;

	t90 = (x373==(x374<(x375%x376)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x378 = INT16_MAX;
	int8_t x379 = INT8_MIN;
	static volatile int64_t x380 = INT64_MIN;
	volatile int32_t t91 = -8000;

	t91 = (x377==(x378<(x379%x380)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = -1;
	uint16_t x382 = UINT16_MAX;
	int8_t x383 = -11;
	int16_t x384 = INT16_MIN;
	volatile int32_t t92 = 12974;

	t92 = (x381==(x382<(x383%x384)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x385 = 111U;
	int32_t x386 = INT32_MIN;
	int64_t x387 = 129580LL;
	int16_t x388 = INT16_MIN;
	volatile int32_t t93 = 895;

	t93 = (x385==(x386<(x387%x388)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = 385;
	int8_t x391 = INT8_MAX;
	int16_t x392 = 317;
	volatile int32_t t94 = 12;

	t94 = (x389==(x390<(x391%x392)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x393 = INT8_MIN;
	uint32_t x394 = 101672U;
	static int8_t x395 = INT8_MAX;
	static int64_t x396 = -509LL;
	static volatile int32_t t95 = 1456;

	t95 = (x393==(x394<(x395%x396)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x397 = INT32_MIN;
	volatile int16_t x398 = -1;
	int32_t x399 = -29346857;
	static int8_t x400 = 1;
	volatile int32_t t96 = 43592821;

	t96 = (x397==(x398<(x399%x400)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MAX;
	static int8_t x402 = -1;
	static int64_t x403 = -13148889229LL;
	static int16_t x404 = INT16_MIN;
	volatile int32_t t97 = 26856617;

	t97 = (x401==(x402<(x403%x404)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x405 = 717;
	static int16_t x406 = -1;
	int16_t x407 = INT16_MAX;
	volatile int8_t x408 = -1;
	volatile int32_t t98 = -2897555;

	t98 = (x405==(x406<(x407%x408)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x410 = INT16_MAX;
	int32_t t99 = -42663;

	t99 = (x409==(x410<(x411%x412)));

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

