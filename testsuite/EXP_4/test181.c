#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x9 = INT64_MAX;
volatile uint64_t t3 = 4946333LLU;
int64_t x21 = 1013215746597LL;
int8_t x22 = 0;
volatile int8_t x23 = INT8_MAX;
volatile int16_t x31 = -1;
uint32_t x34 = 54U;
uint64_t x35 = 262LLU;
int16_t x42 = 3483;
int8_t x49 = INT8_MIN;
uint8_t x50 = 11U;
volatile int64_t t15 = INT64_MAX;
static int16_t x73 = INT16_MIN;
int16_t x74 = -1;
volatile int32_t x77 = INT32_MAX;
int16_t x83 = INT16_MAX;
uint32_t x103 = 2072231U;
volatile uint64_t t23 = 540194LLU;
volatile int64_t x110 = INT64_MIN;
int64_t x111 = INT64_MAX;
volatile int64_t t25 = 134548543836113344LL;
static volatile int64_t x115 = 2741LL;
uint8_t x118 = 5U;
volatile uint16_t x127 = 21268U;
volatile int32_t t29 = 14;
int64_t x139 = 1047929LL;
int16_t x140 = -314;
uint64_t x142 = 781531LLU;
int64_t x146 = INT64_MIN;
int32_t t34 = 224836;
int64_t x165 = 1011LL;
int16_t x168 = INT16_MAX;
int8_t x173 = -1;
volatile int8_t x174 = -26;
int64_t x178 = 212987895869098LL;
uint8_t x182 = 17U;
int32_t x198 = INT32_MIN;
int16_t x199 = INT16_MAX;
uint32_t x202 = 435U;
volatile int16_t x210 = INT16_MIN;
uint16_t x214 = 11U;
static volatile int16_t x215 = INT16_MIN;
int16_t x225 = INT16_MIN;
volatile uint8_t x227 = 6U;
volatile uint64_t x243 = 1385053347LLU;
volatile int64_t x248 = INT64_MIN;
int64_t t50 = -5010LL;
int64_t x249 = -1LL;
static int32_t x251 = INT32_MIN;
volatile int64_t t51 = -120066029829905416LL;
int64_t x253 = 8348LL;
uint64_t t53 = 274055107008927555LLU;
int32_t x265 = 0;
int64_t x276 = INT64_MIN;
volatile int32_t t56 = -717;
static uint32_t x287 = 3U;
int16_t x292 = INT16_MIN;
uint32_t x295 = UINT32_MAX;
volatile int64_t t60 = 2704144LL;
int32_t x307 = INT32_MAX;
int16_t x311 = INT16_MAX;
static volatile int64_t x319 = INT64_MIN;
int8_t x320 = -1;
int16_t x324 = -8994;
int64_t x333 = INT64_MIN;
int16_t x342 = INT16_MIN;
int32_t x344 = -38319;
static int16_t x372 = INT16_MIN;
uint32_t x375 = 1016U;
volatile uint32_t t75 = UINT32_MAX;
static int64_t x390 = INT64_MAX;
volatile int8_t x404 = INT8_MAX;
uint16_t x406 = 26U;
static uint32_t x407 = 40096U;
int32_t x427 = 61;
int8_t x438 = -1;
int8_t x445 = INT8_MIN;
volatile int16_t x446 = INT16_MIN;
uint8_t x452 = 67U;
int64_t x453 = INT64_MAX;
static volatile int64_t x461 = 32663575277789522LL;
static int8_t x462 = 1;
static int64_t t95 = -15120541757LL;
volatile int32_t x475 = INT32_MAX;
uint64_t x476 = UINT64_MAX;
int8_t x485 = -1;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x2 = INT16_MAX;
	uint64_t x3 = 664769645LLU;
	static int8_t x4 = 0;
	static volatile uint64_t t0 = 14282LLU;

	t0 = (x1|(x2+(x3-x4)));

	if (t0 != 664862719LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = -1;
	volatile uint8_t x6 = 0U;
	static int16_t x7 = INT16_MIN;
	volatile uint32_t x8 = 75U;
	static uint32_t t1 = UINT32_MAX;

	t1 = (x5|(x6+(x7-x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = 202518556861141126LLU;
	int16_t x11 = INT16_MIN;
	uint32_t x12 = 272761U;
	volatile uint64_t t2 = 829LLU;

	t2 = (x9|(x10+(x11-x12)));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static uint16_t x14 = 18U;
	int64_t x15 = -1LL;
	volatile uint64_t x16 = 96LLU;

	t3 = (x13|(x14+(x15-x16)));

	if (t3 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	volatile uint64_t x18 = 811033193609305710LLU;
	int16_t x19 = INT16_MAX;
	int16_t x20 = 826;
	volatile uint64_t t4 = 3363171197762920396LLU;

	t4 = (x17|(x18+(x19-x20)));

	if (t4 != 811033195788107775LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x24 = UINT16_MAX;
	volatile int64_t t5 = 52089729120214204LL;

	t5 = (x21|(x22+(x23-x24)));

	if (t5 != -42331LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	static int16_t x26 = INT16_MIN;
	int16_t x27 = 4;
	uint32_t x28 = 1318170U;
	volatile uint32_t t6 = 59U;

	t6 = (x25|(x26+(x27-x28)));

	if (t6 != 4293623807U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 16003U;
	int64_t x30 = 1987369955585LL;
	int64_t x32 = 6898899657783LL;
	volatile int64_t t7 = -17189LL;

	t7 = (x29|(x30+(x31-x32)));

	if (t7 != -4911529689397LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 98389;
	static uint32_t x36 = 51196U;
	static uint64_t t8 = 11885LLU;

	t8 = (x33|(x34+(x35-x36)));

	if (t8 != 18446744073709533525LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	volatile int64_t x43 = INT64_MIN;
	static int8_t x44 = -1;
	int64_t t9 = 0LL;

	t9 = (x41|(x42+(x43-x44)));

	if (t9 != -29284LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 6U;
	uint16_t x46 = 3U;
	int8_t x47 = -1;
	int8_t x48 = 28;
	uint32_t t10 = 980591U;

	t10 = (x45|(x46+(x47-x48)));

	if (t10 != 4294967270U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x51 = 767U;
	uint16_t x52 = 4U;
	volatile uint32_t t11 = 812564U;

	t11 = (x49|(x50+(x51-x52)));

	if (t11 != 4294967174U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 1U;
	static int16_t x54 = -1;
	int64_t x55 = -1LL;
	uint16_t x56 = 18U;
	volatile int64_t t12 = 18562886505860354LL;

	t12 = (x53|(x54+(x55-x56)));

	if (t12 != -19LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = INT32_MIN;
	int8_t x62 = -1;
	int16_t x63 = -1;
	int16_t x64 = INT16_MIN;
	int32_t t13 = -1989;

	t13 = (x61|(x62+(x63-x64)));

	if (t13 != -2147450882) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x65 = INT8_MIN;
	volatile uint16_t x66 = 1U;
	volatile int64_t x67 = -192921LL;
	static int8_t x68 = -1;
	int64_t t14 = 57929254121LL;

	t14 = (x65|(x66+(x67-x68)));

	if (t14 != -23LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	uint16_t x70 = 1764U;
	static int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MAX;

	t15 = (x69|(x70+(x71-x72)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x75 = -1;
	static volatile uint32_t x76 = 33360U;
	volatile uint32_t t16 = 1187573065U;

	t16 = (x73|(x74+(x75-x76)));

	if (t16 != 4294966702U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x78 = -1813015631802LL;
	uint64_t x79 = 372999LLU;
	int16_t x80 = INT16_MIN;
	static volatile uint64_t t17 = 489521LLU;

	t17 = (x77|(x78+(x79-x80)));

	if (t17 != 18446742261233352703LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	uint64_t x82 = 442LLU;
	static uint32_t x84 = 981856U;
	uint64_t t18 = 17165330813048LLU;

	t18 = (x81|(x82+(x83-x84)));

	if (t18 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x85 = -1LL;
	int8_t x86 = INT8_MIN;
	uint32_t x87 = 6748921U;
	uint64_t x88 = 7LLU;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = (x85|(x86+(x87-x88)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	volatile int8_t x90 = -18;
	uint64_t x91 = 1567500LLU;
	int8_t x92 = -27;
	volatile uint64_t t20 = 1212LLU;

	t20 = (x89|(x90+(x91-x92)));

	if (t20 != 9223372036856343317LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x93 = 0U;
	uint64_t x94 = 4168418198529287LLU;
	int32_t x95 = INT32_MIN;
	static volatile int32_t x96 = INT32_MIN;
	static uint64_t t21 = 49574498567210LLU;

	t21 = (x93|(x94+(x95-x96)));

	if (t21 != 4168418198529287LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = INT32_MIN;
	static uint8_t x98 = 7U;
	int64_t x99 = -1LL;
	static int32_t x100 = INT32_MIN;
	int64_t t22 = 384225250LL;

	t22 = (x97|(x98+(x99-x100)));

	if (t22 != -2147483642LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 666;
	static uint8_t x102 = 0U;
	static volatile uint64_t x104 = UINT64_MAX;

	t23 = (x101|(x102+(x103-x104)));

	if (t23 != 2072250LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x105 = -43;
	volatile int8_t x106 = -1;
	int16_t x107 = INT16_MIN;
	volatile int16_t x108 = INT16_MIN;
	int32_t t24 = -12952300;

	t24 = (x105|(x106+(x107-x108)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 3402930U;
	uint8_t x112 = 0U;

	t25 = (x109|(x110+(x111-x112)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x114 = 51U;
	uint32_t x116 = 10981U;
	volatile int64_t t26 = -111826LL;

	t26 = (x113|(x114+(x115-x116)));

	if (t26 != -125LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -665;
	int32_t x119 = 5127206;
	int16_t x120 = 42;
	int32_t t27 = -4396;

	t27 = (x117|(x118+(x119-x120)));

	if (t27 != -665) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MIN;
	uint64_t x123 = 5568051348742LLU;
	int32_t x124 = INT32_MIN;
	volatile uint64_t t28 = 27326231644LLU;

	t28 = (x121|(x122+(x123-x124)));

	if (t28 != 18446744073335800966LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x125 = INT16_MIN;
	uint16_t x126 = UINT16_MAX;
	int8_t x128 = 43;

	t29 = (x125|(x126+(x127-x128)));

	if (t29 != -11544) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = 3U;
	uint8_t x138 = 49U;
	int64_t t30 = -1747689160531721799LL;

	t30 = (x137|(x138+(x139-x140)));

	if (t30 != 1048295LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x141 = 22;
	int16_t x143 = INT16_MIN;
	static uint64_t x144 = UINT64_MAX;
	static volatile uint64_t t31 = 8LLU;

	t31 = (x141|(x142+(x143-x144)));

	if (t31 != 748766LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x145 = -1;
	int8_t x147 = INT8_MIN;
	static int32_t x148 = INT32_MIN;
	int64_t t32 = 1LL;

	t32 = (x145|(x146+(x147-x148)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x149 = 356789944353LLU;
	static volatile int32_t x150 = INT32_MAX;
	uint8_t x151 = UINT8_MAX;
	uint64_t x152 = 73657085LLU;
	volatile uint64_t t33 = 71LLU;

	t33 = (x149|(x150+(x151-x152)));

	if (t33 != 358560470561LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = INT8_MIN;
	int8_t x162 = -1;
	static int32_t x163 = -836515767;
	int16_t x164 = INT16_MIN;

	t34 = (x161|(x162+(x163-x164)));

	if (t34 != -56) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x166 = -1;
	static volatile uint16_t x167 = UINT16_MAX;
	volatile int64_t t35 = -10994438682602588LL;

	t35 = (x165|(x166+(x167-x168)));

	if (t35 != 32767LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x175 = 456063084744LL;
	uint32_t x176 = UINT32_MAX;
	int64_t t36 = 51878436629634LL;

	t36 = (x173|(x174+(x175-x176)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = UINT64_MAX;
	int32_t x179 = INT32_MIN;
	static int8_t x180 = -1;
	uint64_t t37 = UINT64_MAX;

	t37 = (x177|(x178+(x179-x180)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = INT32_MIN;
	int8_t x183 = INT8_MIN;
	static int16_t x184 = -63;
	static int32_t t38 = 12913;

	t38 = (x181|(x182+(x183-x184)));

	if (t38 != -48) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x185 = 1448U;
	int64_t x186 = INT64_MIN;
	static uint32_t x187 = 1792U;
	int32_t x188 = -1;
	volatile int64_t t39 = -180501096751LL;

	t39 = (x185|(x186+(x187-x188)));

	if (t39 != -9223372036854773847LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x189 = 16U;
	int8_t x190 = INT8_MIN;
	static uint8_t x191 = UINT8_MAX;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t40 = -5896;

	t40 = (x189|(x190+(x191-x192)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x197 = INT64_MIN;
	int16_t x200 = INT16_MIN;
	volatile int64_t t41 = -68895647020407LL;

	t41 = (x197|(x198+(x199-x200)));

	if (t41 != -2147418113LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x201 = 2U;
	static int16_t x203 = INT16_MAX;
	uint64_t x204 = 267712634768705LLU;
	uint64_t t42 = 99081780450532LLU;

	t42 = (x201|(x202+(x203-x204)));

	if (t42 != 18446476361074816115LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x205 = INT64_MAX;
	static uint64_t x206 = 586814959799LLU;
	static uint16_t x207 = UINT16_MAX;
	static int64_t x208 = 255416463022LL;
	volatile uint64_t t43 = 6012289011LLU;

	t43 = (x205|(x206+(x207-x208)));

	if (t43 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = -7981558774549LL;
	int16_t x211 = 1;
	static int16_t x212 = INT16_MAX;
	volatile int64_t t44 = 163443533LL;

	t44 = (x209|(x210+(x211-x212)));

	if (t44 != -47893LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = -1LL;
	uint64_t x216 = 30912385706868944LLU;
	uint64_t t45 = UINT64_MAX;

	t45 = (x213|(x214+(x215-x216)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x217 = INT8_MIN;
	volatile uint64_t x218 = UINT64_MAX;
	uint64_t x219 = UINT64_MAX;
	int8_t x220 = INT8_MAX;
	static volatile uint64_t t46 = UINT64_MAX;

	t46 = (x217|(x218+(x219-x220)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = -1;
	int16_t x222 = INT16_MIN;
	static uint64_t x223 = 1005293259523LLU;
	int32_t x224 = -1;
	uint64_t t47 = UINT64_MAX;

	t47 = (x221|(x222+(x223-x224)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x226 = 5549144455LL;
	static volatile int16_t x228 = INT16_MAX;
	int64_t t48 = -14967320LL;

	t48 = (x225|(x226+(x227-x228)));

	if (t48 != -18034LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = 0LL;
	volatile int8_t x242 = INT8_MAX;
	uint64_t x244 = UINT64_MAX;
	static uint64_t t49 = 9704LLU;

	t49 = (x241|(x242+(x243-x244)));

	if (t49 != 1385053475LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x245 = -25524844LL;
	static int64_t x246 = INT64_MIN;
	int16_t x247 = -1;

	t50 = (x245|(x246+(x247-x248)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x250 = -7091;
	volatile int32_t x252 = INT32_MIN;

	t51 = (x249|(x250+(x251-x252)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x254 = 1;
	int16_t x255 = INT16_MAX;
	static int32_t x256 = -1;
	volatile int64_t t52 = -124925222274738111LL;

	t52 = (x253|(x254+(x255-x256)));

	if (t52 != 41117LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x261 = 4;
	static uint32_t x262 = UINT32_MAX;
	uint64_t x263 = UINT64_MAX;
	int32_t x264 = -1;

	t53 = (x261|(x262+(x263-x264)));

	if (t53 != 4294967295LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x266 = 0;
	int16_t x267 = INT16_MIN;
	static int64_t x268 = INT64_MIN;
	int64_t t54 = -51077287326LL;

	t54 = (x265|(x266+(x267-x268)));

	if (t54 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x273 = INT64_MAX;
	static uint64_t x274 = 952228773890888416LLU;
	int32_t x275 = INT32_MIN;
	static uint64_t t55 = UINT64_MAX;

	t55 = (x273|(x274+(x275-x276)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x277 = INT8_MIN;
	int32_t x278 = -851977896;
	int16_t x279 = 1674;
	static uint16_t x280 = UINT16_MAX;

	t56 = (x277|(x278+(x279-x280)));

	if (t56 != -29) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x281 = 476U;
	volatile int16_t x282 = INT16_MAX;
	int16_t x283 = -1;
	int64_t x284 = -14LL;
	volatile int64_t t57 = 102041286661384LL;

	t57 = (x281|(x282+(x283-x284)));

	if (t57 != 33244LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x285 = 305;
	int64_t x286 = -1LL;
	static uint8_t x288 = UINT8_MAX;
	int64_t t58 = 9LL;

	t58 = (x285|(x286+(x287-x288)));

	if (t58 != 4294967091LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x289 = INT32_MIN;
	volatile int32_t x290 = 1;
	uint32_t x291 = 255U;
	static uint32_t t59 = 287249828U;

	t59 = (x289|(x290+(x291-x292)));

	if (t59 != 2147516672U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x293 = -1LL;
	int16_t x294 = INT16_MIN;
	int16_t x296 = 1624;

	t60 = (x293|(x294+(x295-x296)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x301 = INT8_MAX;
	int64_t x302 = INT64_MIN;
	static int64_t x303 = 55906LL;
	volatile int32_t x304 = INT32_MIN;
	int64_t t61 = -1LL;

	t61 = (x301|(x302+(x303-x304)));

	if (t61 != -9223372034707236225LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x305 = INT8_MAX;
	int16_t x306 = -100;
	uint16_t x308 = UINT16_MAX;
	int32_t t62 = 2606;

	t62 = (x305|(x306+(x307-x308)));

	if (t62 != 2147418111) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x309 = UINT8_MAX;
	static uint8_t x310 = 18U;
	uint64_t x312 = 19461995065LLU;
	uint64_t t63 = 742760890519LLU;

	t63 = (x309|(x310+(x311-x312)));

	if (t63 != 18446744054247589375LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x313 = INT32_MAX;
	int8_t x314 = -1;
	volatile uint8_t x315 = 1U;
	volatile int32_t x316 = -1;
	volatile int32_t t64 = INT32_MAX;

	t64 = (x313|(x314+(x315-x316)));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x317 = INT32_MIN;
	int64_t x318 = -1LL;
	static volatile int64_t t65 = 143692222LL;

	t65 = (x317|(x318+(x319-x320)));

	if (t65 != -2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x321 = 0U;
	volatile uint8_t x322 = 29U;
	uint64_t x323 = 1949334LLU;
	uint64_t t66 = 6LLU;

	t66 = (x321|(x322+(x323-x324)));

	if (t66 != 1958357LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x329 = UINT16_MAX;
	int64_t x330 = 1LL;
	uint16_t x331 = UINT16_MAX;
	volatile int64_t x332 = -207579244212597058LL;
	int64_t t67 = 189523947190401510LL;

	t67 = (x329|(x330+(x331-x332)));

	if (t67 != 207579244212715519LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x334 = INT16_MIN;
	volatile int16_t x335 = -1;
	int8_t x336 = INT8_MIN;
	int64_t t68 = -19837227LL;

	t68 = (x333|(x334+(x335-x336)));

	if (t68 != -32641LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x341 = 3U;
	volatile int32_t x343 = INT32_MIN;
	volatile int32_t t69 = -211202417;

	t69 = (x341|(x342+(x343-x344)));

	if (t69 != -2147478097) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x349 = 1U;
	uint8_t x350 = 1U;
	volatile int64_t x351 = -17LL;
	uint8_t x352 = UINT8_MAX;
	static int64_t t70 = -4101461281496LL;

	t70 = (x349|(x350+(x351-x352)));

	if (t70 != -271LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x353 = 6U;
	int32_t x354 = INT32_MIN;
	static uint64_t x355 = UINT64_MAX;
	volatile int8_t x356 = -7;
	uint64_t t71 = 8813324241LLU;

	t71 = (x353|(x354+(x355-x356)));

	if (t71 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x361 = 1U;
	static uint16_t x362 = 61U;
	int8_t x363 = -26;
	uint32_t x364 = 73277411U;
	uint32_t t72 = 4U;

	t72 = (x361|(x362+(x363-x364)));

	if (t72 != 4221689921U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x365 = INT32_MAX;
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = -1LL;
	uint32_t x368 = 0U;
	volatile int64_t t73 = -21063781466LL;

	t73 = (x365|(x366+(x367-x368)));

	if (t73 != 2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x369 = 57;
	int32_t x370 = -23906624;
	int16_t x371 = 28;
	int32_t t74 = 305;

	t74 = (x369|(x370+(x371-x372)));

	if (t74 != -23873795) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x373 = -1;
	static int32_t x374 = INT32_MIN;
	static int8_t x376 = INT8_MIN;

	t75 = (x373|(x374+(x375-x376)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x377 = -27;
	volatile int16_t x378 = 1;
	int8_t x379 = -1;
	uint32_t x380 = UINT32_MAX;
	volatile uint32_t t76 = 1U;

	t76 = (x377|(x378+(x379-x380)));

	if (t76 != 4294967269U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x381 = 26938U;
	int16_t x382 = INT16_MAX;
	volatile int8_t x383 = INT8_MAX;
	int8_t x384 = INT8_MIN;
	int32_t t77 = 145201412;

	t77 = (x381|(x382+(x383-x384)));

	if (t77 != 59902) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x385 = 1U;
	uint16_t x386 = 26633U;
	static int64_t x387 = INT64_MIN;
	volatile int64_t x388 = -1LL;
	int64_t t78 = -1233076375LL;

	t78 = (x385|(x386+(x387-x388)));

	if (t78 != -9223372036854749173LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x389 = INT8_MIN;
	int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MAX;
	static int64_t t79 = 115034188272LL;

	t79 = (x389|(x390+(x391-x392)));

	if (t79 != -128LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = -376;
	static int64_t x395 = -283120620225602016LL;
	uint8_t x396 = 29U;
	volatile int64_t t80 = 130956LL;

	t80 = (x393|(x394+(x395-x396)));

	if (t80 != -283120620225602421LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x401 = INT8_MIN;
	static volatile int16_t x402 = 9;
	int16_t x403 = INT16_MAX;
	int32_t t81 = -48408764;

	t81 = (x401|(x402+(x403-x404)));

	if (t81 != -119) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x405 = UINT16_MAX;
	int64_t x408 = -1LL;
	static volatile int64_t t82 = -2LL;

	t82 = (x405|(x406+(x407-x408)));

	if (t82 != 65535LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x409 = -376079035121LL;
	int32_t x410 = 90;
	volatile uint32_t x411 = UINT32_MAX;
	static uint16_t x412 = UINT16_MAX;
	int64_t t83 = 166LL;

	t83 = (x409|(x410+(x411-x412)));

	if (t83 != -373662198433LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x413 = 174495799991301LLU;
	int64_t x414 = 2298648557281124084LL;
	uint64_t x415 = 1746640846306458LLU;
	int64_t x416 = INT64_MIN;
	uint64_t t84 = 9496014779523270LLU;

	t84 = (x413|(x414+(x415-x416)));

	if (t84 != 11523796377812230031LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x421 = INT32_MIN;
	uint64_t x422 = UINT64_MAX;
	int32_t x423 = 22;
	volatile int16_t x424 = -1;
	uint64_t t85 = 2370574352230341424LLU;

	t85 = (x421|(x422+(x423-x424)));

	if (t85 != 18446744071562067990LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x425 = INT32_MAX;
	uint16_t x426 = 28U;
	volatile uint32_t x428 = UINT32_MAX;
	volatile uint32_t t86 = 7520U;

	t86 = (x425|(x426+(x427-x428)));

	if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x429 = 52576LLU;
	int64_t x430 = -542503007117LL;
	uint16_t x431 = 25U;
	static int64_t x432 = -1LL;
	uint64_t t87 = 23106176741LLU;

	t87 = (x429|(x430+(x431-x432)));

	if (t87 != 18446743531206594029LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x433 = INT32_MIN;
	int64_t x434 = -10263484179LL;
	volatile uint64_t x435 = UINT64_MAX;
	int32_t x436 = -1;
	static uint64_t t88 = 157LLU;

	t88 = (x433|(x434+(x435-x436)));

	if (t88 != 18446744072036002029LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x437 = -6;
	uint64_t x439 = 26251963LLU;
	int16_t x440 = -1;
	uint64_t t89 = 176729091LLU;

	t89 = (x437|(x438+(x439-x440)));

	if (t89 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x441 = INT16_MIN;
	static int16_t x442 = INT16_MAX;
	volatile uint64_t x443 = UINT64_MAX;
	uint8_t x444 = 72U;
	uint64_t t90 = 139927083269336257LLU;

	t90 = (x441|(x442+(x443-x444)));

	if (t90 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x447 = INT16_MAX;
	int8_t x448 = -1;
	static volatile int32_t t91 = 2022;

	t91 = (x445|(x446+(x447-x448)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x449 = INT8_MAX;
	int32_t x450 = INT32_MAX;
	int32_t x451 = -809;
	volatile int32_t t92 = -1;

	t92 = (x449|(x450+(x451-x452)));

	if (t92 != 2147482879) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x454 = UINT64_MAX;
	static volatile uint8_t x455 = 9U;
	int16_t x456 = INT16_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x453|(x454+(x455-x456)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x463 = INT32_MAX;
	int16_t x464 = 1;
	int64_t t94 = 59999603659065LL;

	t94 = (x461|(x462+(x463-x464)));

	if (t94 != 32663576325914623LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x469 = -1;
	volatile int64_t x470 = INT64_MIN;
	int8_t x471 = -1;
	static int32_t x472 = -1;

	t95 = (x469|(x470+(x471-x472)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x473 = UINT32_MAX;
	volatile uint8_t x474 = 14U;
	static volatile uint64_t t96 = 122984558LLU;

	t96 = (x473|(x474+(x475-x476)));

	if (t96 != 4294967295LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x481 = UINT16_MAX;
	uint32_t x482 = 24U;
	volatile int32_t x483 = 3795;
	static uint32_t x484 = 51990860U;
	uint32_t t97 = 110349U;

	t97 = (x481|(x482+(x483-x484)));

	if (t97 != 4242997247U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x486 = INT16_MIN;
	uint32_t x487 = UINT32_MAX;
	uint64_t x488 = UINT64_MAX;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x485|(x486+(x487-x488)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x489 = -1;
	volatile uint64_t x490 = UINT64_MAX;
	uint8_t x491 = UINT8_MAX;
	volatile uint32_t x492 = UINT32_MAX;
	uint64_t t99 = UINT64_MAX;

	t99 = (x489|(x490+(x491-x492)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

