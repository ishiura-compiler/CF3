#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -135597353324LL;
int64_t x27 = INT64_MAX;
volatile uint64_t x28 = UINT64_MAX;
uint8_t x35 = 5U;
uint32_t x44 = 45639U;
int8_t x48 = INT8_MAX;
int32_t x50 = INT32_MIN;
volatile uint64_t t12 = 2377146LLU;
volatile int8_t x54 = INT8_MIN;
int64_t x57 = INT64_MIN;
int8_t x58 = INT8_MIN;
uint16_t x59 = 7005U;
static uint64_t x62 = 57104360242419LLU;
int64_t x63 = -30992625LL;
uint16_t x64 = 3U;
volatile int32_t t15 = 477;
volatile int32_t x73 = INT32_MIN;
volatile uint16_t x81 = 16690U;
static uint64_t x94 = 87LLU;
static uint32_t x98 = 365686U;
int64_t x99 = INT64_MAX;
int8_t x103 = INT8_MAX;
int32_t x107 = INT32_MAX;
uint8_t x112 = UINT8_MAX;
int16_t x113 = 14;
int16_t x118 = -1;
int64_t x129 = INT64_MAX;
int8_t x132 = 7;
static int32_t x133 = INT32_MIN;
uint16_t x135 = 7U;
static int16_t x138 = -1;
static uint32_t x141 = UINT32_MAX;
int8_t x148 = -9;
int16_t x156 = -7518;
static int32_t t33 = 639713;
int8_t x168 = INT8_MIN;
static int32_t t35 = -1785445;
int16_t x170 = INT16_MIN;
int64_t x175 = -343505857249106078LL;
static uint64_t x188 = 727751525960234300LLU;
static volatile int64_t t43 = 32907LL;
static uint64_t x235 = 5245LLU;
int16_t x239 = 13104;
uint64_t x241 = 216LLU;
int8_t x250 = INT8_MAX;
int64_t x261 = INT64_MIN;
static int16_t x265 = 338;
int32_t t55 = 256;
int64_t x271 = INT64_MIN;
int16_t x279 = 2030;
volatile int64_t x283 = INT64_MAX;
static volatile uint64_t x285 = 49335433LLU;
uint64_t x292 = UINT64_MAX;
static int32_t x293 = INT32_MAX;
volatile int32_t t62 = -1233697;
uint64_t x298 = 298499591643LLU;
uint16_t x305 = 229U;
volatile uint32_t x307 = 8U;
int64_t x311 = INT64_MIN;
int8_t x315 = -1;
volatile int8_t x322 = INT8_MIN;
volatile int32_t t68 = -375863;
int8_t x330 = -15;
int8_t x332 = 0;
static int8_t x333 = INT8_MAX;
int32_t x354 = INT32_MAX;
int16_t x358 = -3;
static volatile int32_t x359 = INT32_MAX;
int32_t x381 = INT32_MIN;
static int32_t t81 = -42493;
static int64_t x387 = -168082668135001LL;
int64_t x389 = -1LL;
volatile int8_t x390 = -1;
int64_t x392 = INT64_MAX;
uint16_t x394 = 332U;
int64_t x396 = -1LL;
int32_t t85 = -320445;
int16_t x402 = -1;
int8_t x404 = 4;
volatile uint32_t t88 = 1169U;
static int8_t x420 = INT8_MIN;
int32_t x423 = INT32_MIN;
volatile int64_t t91 = -1132882LL;
uint64_t x426 = UINT64_MAX;
int16_t x435 = INT16_MIN;
volatile int64_t x437 = INT64_MAX;
static volatile int8_t x441 = INT8_MIN;
int16_t x442 = -1;
int8_t x449 = INT8_MAX;
int8_t x451 = INT8_MIN;
uint64_t x461 = 7871697871LLU;
int32_t x462 = 1;
static int8_t x463 = -27;


void f0(void) {
	volatile int16_t x1 = -1;
	static volatile uint64_t x2 = UINT64_MAX;
	volatile uint64_t x3 = UINT64_MAX;
	uint64_t x4 = 100LLU;
	static uint64_t t0 = 73941926LLU;

	t0 = (x1/((x2<=x3)-x4));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 2U;
	volatile uint8_t x7 = UINT8_MAX;
	volatile uint64_t x8 = 575602474219LLU;
	uint64_t t1 = 25LLU;

	t1 = (x5/((x6<=x7)-x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	int64_t x11 = INT64_MIN;
	static uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 4387442LLU;

	t2 = (x9/((x10<=x11)-x12));

	if (t2 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 920;
	int64_t x14 = INT64_MIN;
	int64_t x15 = 13363LL;
	int8_t x16 = INT8_MAX;
	int32_t t3 = -1072665179;

	t3 = (x13/((x14<=x15)-x16));

	if (t3 != -7) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 451986U;
	volatile int64_t x18 = INT64_MIN;
	int8_t x19 = INT8_MIN;
	static int16_t x20 = INT16_MIN;
	volatile uint32_t t4 = 27564852U;

	t4 = (x17/((x18<=x19)-x20));

	if (t4 != 13U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int32_t x22 = INT32_MAX;
	int16_t x23 = INT16_MIN;
	uint16_t x24 = 12U;
	int32_t t5 = 0;

	t5 = (x21/((x22<=x23)-x24));

	if (t5 != -2730) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 93;
	uint8_t x26 = 120U;
	volatile uint64_t t6 = 653LLU;

	t6 = (x25/((x26<=x27)-x28));

	if (t6 != 46LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile int64_t x30 = -1LL;
	volatile int16_t x31 = -170;
	uint64_t x32 = 8LLU;
	uint64_t t7 = 0LLU;

	t7 = (x29/((x30<=x31)-x32));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 847436044U;
	static int32_t x34 = INT32_MIN;
	uint64_t x36 = 141LLU;
	uint64_t t8 = 2595331676119LLU;

	t8 = (x33/((x34<=x35)-x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int64_t x38 = INT64_MIN;
	uint8_t x39 = UINT8_MAX;
	uint16_t x40 = 111U;
	static volatile int32_t t9 = 13;

	t9 = (x37/((x38<=x39)-x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MAX;
	uint8_t x42 = UINT8_MAX;
	volatile int8_t x43 = INT8_MIN;
	static volatile uint32_t t10 = 1915U;

	t10 = (x41/((x42<=x43)-x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 350U;
	uint8_t x46 = 7U;
	int16_t x47 = INT16_MAX;
	uint32_t t11 = 183807U;

	t11 = (x45/((x46<=x47)-x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 19303U;
	int32_t x51 = INT32_MIN;
	volatile uint64_t x52 = 6439LLU;

	t12 = (x49/((x50<=x51)-x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MAX;
	int8_t x55 = INT8_MAX;
	uint32_t x56 = 825U;
	int64_t t13 = -8775LL;

	t13 = (x53/((x54<=x55)-x56));

	if (t13 != 2147484060LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x60 = 2559;
	volatile int64_t t14 = 1990542089LL;

	t14 = (x57/((x58<=x59)-x60));

	if (t14 != 3605696652406089LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = -1;

	t15 = (x61/((x62<=x63)-x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = INT8_MIN;
	static uint32_t x75 = 517323855U;
	uint64_t x76 = UINT64_MAX;
	uint64_t t16 = 93LLU;

	t16 = (x73/((x74<=x75)-x76));

	if (t16 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x82 = -1;
	uint32_t x83 = UINT32_MAX;
	uint32_t x84 = 197393U;
	static uint32_t t17 = 170865U;

	t17 = (x81/((x82<=x83)-x84));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 10U;
	static int64_t x86 = -1LL;
	static int8_t x87 = INT8_MIN;
	static volatile int32_t x88 = 60343;
	int32_t t18 = -2426;

	t18 = (x85/((x86<=x87)-x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MAX;
	static uint8_t x95 = UINT8_MAX;
	uint32_t x96 = UINT32_MAX;
	uint32_t t19 = 58469U;

	t19 = (x93/((x94<=x95)-x96));

	if (t19 != 1073741823U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x97 = INT16_MAX;
	int16_t x100 = INT16_MAX;
	int32_t t20 = 20;

	t20 = (x97/((x98<=x99)-x100));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -1;
	int64_t x102 = INT64_MIN;
	static volatile int64_t x104 = 42612022LL;
	volatile int64_t t21 = 85831607329LL;

	t21 = (x101/((x102<=x103)-x104));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = -1;
	int8_t x106 = -1;
	int32_t x108 = 2;
	int32_t t22 = -1320285;

	t22 = (x105/((x106<=x107)-x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x110 = UINT8_MAX;
	uint32_t x111 = 398235U;
	volatile int32_t t23 = -384;

	t23 = (x109/((x110<=x111)-x112));

	if (t23 != 129) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x114 = 5;
	static uint64_t x115 = UINT64_MAX;
	int64_t x116 = -1990200LL;
	static int64_t t24 = -202921919092LL;

	t24 = (x113/((x114<=x115)-x116));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x117 = INT16_MAX;
	uint8_t x119 = UINT8_MAX;
	int32_t x120 = -1;
	static int32_t t25 = 3510;

	t25 = (x117/((x118<=x119)-x120));

	if (t25 != 16383) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = 21U;
	int32_t x122 = -1;
	int64_t x123 = -151249132906102484LL;
	int16_t x124 = 222;
	volatile int32_t t26 = 6727;

	t26 = (x121/((x122<=x123)-x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x130 = INT32_MAX;
	int8_t x131 = INT8_MAX;
	static int64_t t27 = -1665735097LL;

	t27 = (x129/((x130<=x131)-x132));

	if (t27 != -1317624576693539401LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x134 = INT64_MAX;
	uint32_t x136 = 4549U;
	volatile uint32_t t28 = 378155U;

	t28 = (x133/((x134<=x135)-x136));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x137 = INT8_MIN;
	int64_t x139 = INT64_MIN;
	int64_t x140 = -1LL;
	int64_t t29 = 51616733LL;

	t29 = (x137/((x138<=x139)-x140));

	if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x142 = INT64_MIN;
	int32_t x143 = -1;
	uint32_t x144 = 6U;
	volatile uint32_t t30 = 513492669U;

	t30 = (x141/((x142<=x143)-x144));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x145 = INT32_MIN;
	uint8_t x146 = 1U;
	uint32_t x147 = UINT32_MAX;
	int32_t t31 = -11532;

	t31 = (x145/((x146<=x147)-x148));

	if (t31 != -214748364) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x153 = 3U;
	int16_t x154 = INT16_MIN;
	uint32_t x155 = UINT32_MAX;
	int32_t t32 = -383393;

	t32 = (x153/((x154<=x155)-x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = UINT16_MAX;
	static int32_t x158 = INT32_MAX;
	int64_t x159 = -1LL;
	static volatile uint8_t x160 = 2U;

	t33 = (x157/((x158<=x159)-x160));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x161 = INT8_MIN;
	static int32_t x162 = INT32_MIN;
	volatile uint32_t x163 = 205337847U;
	static volatile int32_t x164 = 24507;
	volatile int32_t t34 = -621717;

	t34 = (x161/((x162<=x163)-x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x165 = -1;
	volatile int8_t x166 = 46;
	static int32_t x167 = INT32_MIN;

	t35 = (x165/((x166<=x167)-x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x169 = 798981035U;
	volatile int8_t x171 = INT8_MAX;
	volatile int16_t x172 = INT16_MIN;
	volatile uint32_t t36 = 80060453U;

	t36 = (x169/((x170<=x171)-x172));

	if (t36 != 24382U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = -697;
	int8_t x176 = INT8_MIN;
	volatile int32_t t37 = -627;

	t37 = (x173/((x174<=x175)-x176));

	if (t37 != -256) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x177 = 76U;
	int8_t x178 = 16;
	uint16_t x179 = UINT16_MAX;
	uint16_t x180 = 12U;
	volatile int32_t t38 = 67876978;

	t38 = (x177/((x178<=x179)-x180));

	if (t38 != -6) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x181 = -1;
	int16_t x182 = INT16_MAX;
	uint16_t x183 = UINT16_MAX;
	volatile int16_t x184 = INT16_MIN;
	volatile int32_t t39 = -17;

	t39 = (x181/((x182<=x183)-x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x185 = 205492U;
	static int16_t x186 = INT16_MAX;
	uint32_t x187 = 191755U;
	volatile uint64_t t40 = 270948962355793291LLU;

	t40 = (x185/((x186<=x187)-x188));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x189 = -43;
	int64_t x190 = INT64_MIN;
	volatile uint64_t x191 = UINT64_MAX;
	int64_t x192 = 387603078717273LL;
	int64_t t41 = -3898658792LL;

	t41 = (x189/((x190<=x191)-x192));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MIN;
	static uint64_t x195 = 5133430452682LLU;
	volatile uint32_t x196 = UINT32_MAX;
	uint32_t t42 = 640U;

	t42 = (x193/((x194<=x195)-x196));

	if (t42 != 4294967168U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = INT16_MAX;
	static int32_t x206 = INT32_MAX;
	int8_t x207 = -1;
	int64_t x208 = 84297590LL;

	t43 = (x205/((x206<=x207)-x208));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = 40982;
	int64_t x210 = 564033941465219LL;
	int32_t x211 = -370434471;
	volatile int64_t x212 = 5192787599LL;
	static int64_t t44 = 70324304172LL;

	t44 = (x209/((x210<=x211)-x212));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x213 = UINT16_MAX;
	uint32_t x214 = 2090U;
	static int64_t x215 = -1LL;
	uint32_t x216 = 214U;
	uint32_t t45 = 235772054U;

	t45 = (x213/((x214<=x215)-x216));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x225 = -1;
	int16_t x226 = INT16_MIN;
	uint16_t x227 = 15U;
	static int16_t x228 = -77;
	int32_t t46 = -278;

	t46 = (x225/((x226<=x227)-x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x233 = 225178942LLU;
	int16_t x234 = 8;
	uint32_t x236 = 218347U;
	uint64_t t47 = 1875LLU;

	t47 = (x233/((x234<=x235)-x236));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x237 = 1;
	static int16_t x238 = 227;
	static int32_t x240 = -10735;
	volatile int32_t t48 = 6;

	t48 = (x237/((x238<=x239)-x240));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x242 = 15;
	volatile uint64_t x243 = 34116264LLU;
	volatile int8_t x244 = INT8_MAX;
	volatile uint64_t t49 = 31722873352540LLU;

	t49 = (x241/((x242<=x243)-x244));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = 0;
	static int8_t x246 = INT8_MAX;
	volatile int16_t x247 = INT16_MIN;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t50 = 7818LLU;

	t50 = (x245/((x246<=x247)-x248));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x249 = UINT8_MAX;
	uint16_t x251 = UINT16_MAX;
	volatile int32_t x252 = -1;
	int32_t t51 = -14;

	t51 = (x249/((x250<=x251)-x252));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x253 = UINT32_MAX;
	volatile int64_t x254 = INT64_MAX;
	int64_t x255 = -340158LL;
	int8_t x256 = 12;
	volatile uint32_t t52 = 29760586U;

	t52 = (x253/((x254<=x255)-x256));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x257 = INT16_MIN;
	uint64_t x258 = 5852671361956399389LLU;
	static int32_t x259 = 1143;
	static volatile int16_t x260 = 1673;
	volatile int32_t t53 = -16;

	t53 = (x257/((x258<=x259)-x260));

	if (t53 != 19) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x262 = 361472881411LLU;
	static int32_t x263 = INT32_MIN;
	int8_t x264 = -1;
	volatile int64_t t54 = 95694103339214LL;

	t54 = (x261/((x262<=x263)-x264));

	if (t54 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x266 = INT64_MIN;
	uint32_t x267 = UINT32_MAX;
	int8_t x268 = 0;

	t55 = (x265/((x266<=x267)-x268));

	if (t55 != 338) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = -770;
	uint64_t x270 = UINT64_MAX;
	uint64_t x272 = UINT64_MAX;
	static volatile uint64_t t56 = 2LLU;

	t56 = (x269/((x270<=x271)-x272));

	if (t56 != 18446744073709550846LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x273 = UINT64_MAX;
	int64_t x274 = INT64_MAX;
	static int16_t x275 = -1;
	volatile uint16_t x276 = 238U;
	uint64_t t57 = 6948606444582821LLU;

	t57 = (x273/((x274<=x275)-x276));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = INT16_MAX;
	volatile uint64_t x278 = 70871690LLU;
	volatile uint8_t x280 = 7U;
	int32_t t58 = -714;

	t58 = (x277/((x278<=x279)-x280));

	if (t58 != -4681) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = INT64_MAX;
	static int64_t x282 = INT64_MIN;
	uint32_t x284 = 0U;
	volatile int64_t t59 = INT64_MAX;

	t59 = (x281/((x282<=x283)-x284));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x286 = INT64_MIN;
	uint8_t x287 = 47U;
	volatile int16_t x288 = INT16_MAX;
	static uint64_t t60 = 9513249534343LLU;

	t60 = (x285/((x286<=x287)-x288));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = -1;
	int64_t x290 = INT64_MIN;
	volatile int8_t x291 = 37;
	volatile uint64_t t61 = 0LLU;

	t61 = (x289/((x290<=x291)-x292));

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x294 = 26U;
	static volatile uint8_t x295 = UINT8_MAX;
	uint16_t x296 = 193U;

	t62 = (x293/((x294<=x295)-x296));

	if (t62 != -11184810) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x297 = -1;
	uint8_t x299 = 16U;
	int16_t x300 = -2521;
	int32_t t63 = 60029;

	t63 = (x297/((x298<=x299)-x300));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = 133395496LL;
	int64_t x302 = -28298LL;
	int64_t x303 = INT64_MIN;
	static uint32_t x304 = UINT32_MAX;
	static int64_t t64 = 98556882LL;

	t64 = (x301/((x302<=x303)-x304));

	if (t64 != 133395496LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x306 = -28;
	int32_t x308 = 346244;
	int32_t t65 = -4;

	t65 = (x305/((x306<=x307)-x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x309 = INT64_MAX;
	int64_t x310 = INT64_MAX;
	int32_t x312 = -1;
	int64_t t66 = INT64_MAX;

	t66 = (x309/((x310<=x311)-x312));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = 1LL;
	static uint8_t x314 = 3U;
	uint32_t x316 = 125002U;
	int64_t t67 = -3864795528316571144LL;

	t67 = (x313/((x314<=x315)-x316));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = -40;
	uint8_t x323 = 16U;
	uint16_t x324 = 29U;

	t68 = (x321/((x322<=x323)-x324));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x329 = 10365LLU;
	int16_t x331 = -1;
	volatile uint64_t t69 = 3LLU;

	t69 = (x329/((x330<=x331)-x332));

	if (t69 != 10365LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MIN;
	volatile int16_t x336 = INT16_MIN;
	volatile int32_t t70 = 6;

	t70 = (x333/((x334<=x335)-x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x337 = 29045688266444485LLU;
	volatile uint64_t x338 = 1501LLU;
	int16_t x339 = INT16_MIN;
	uint32_t x340 = 48U;
	uint64_t t71 = 61920LLU;

	t71 = (x337/((x338<=x339)-x340));

	if (t71 != 6762726LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = -26;
	int8_t x347 = -2;
	int8_t x348 = INT8_MIN;
	static int32_t t72 = 57;

	t72 = (x345/((x346<=x347)-x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x349 = UINT32_MAX;
	volatile int8_t x350 = INT8_MAX;
	uint16_t x351 = UINT16_MAX;
	volatile uint16_t x352 = 17U;
	volatile uint32_t t73 = 721077U;

	t73 = (x349/((x350<=x351)-x352));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x353 = 359U;
	uint64_t x355 = 1008834579416LLU;
	int8_t x356 = 44;
	int32_t t74 = -285880;

	t74 = (x353/((x354<=x355)-x356));

	if (t74 != -8) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x357 = 95U;
	static volatile int64_t x360 = -173600653222347942LL;
	int64_t t75 = 1464816214848978LL;

	t75 = (x357/((x358<=x359)-x360));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x361 = -1;
	volatile int64_t x362 = INT64_MAX;
	volatile uint16_t x363 = UINT16_MAX;
	volatile int64_t x364 = -23445LL;
	static volatile int64_t t76 = 4052256125203LL;

	t76 = (x361/((x362<=x363)-x364));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x365 = INT8_MIN;
	static int64_t x366 = INT64_MIN;
	static uint16_t x367 = UINT16_MAX;
	int16_t x368 = -92;
	volatile int32_t t77 = 6210695;

	t77 = (x365/((x366<=x367)-x368));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x369 = 0LLU;
	int8_t x370 = -1;
	static int8_t x371 = INT8_MIN;
	static int16_t x372 = INT16_MIN;
	uint64_t t78 = 27700LLU;

	t78 = (x369/((x370<=x371)-x372));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x373 = UINT8_MAX;
	int32_t x374 = INT32_MAX;
	volatile int32_t x375 = -1;
	int32_t x376 = -1;
	volatile int32_t t79 = -13648616;

	t79 = (x373/((x374<=x375)-x376));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x377 = -1;
	int64_t x378 = INT64_MAX;
	uint8_t x379 = 52U;
	static volatile uint16_t x380 = 1561U;
	static int32_t t80 = -38978497;

	t80 = (x377/((x378<=x379)-x380));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x382 = INT16_MIN;
	int16_t x383 = 1;
	static int8_t x384 = INT8_MIN;

	t81 = (x381/((x382<=x383)-x384));

	if (t81 != -16647160) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = INT16_MAX;
	volatile int32_t x386 = 85;
	volatile int16_t x388 = 5;
	static int32_t t82 = -3;

	t82 = (x385/((x386<=x387)-x388));

	if (t82 != -6553) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x391 = INT16_MIN;
	volatile int64_t t83 = 230555LL;

	t83 = (x389/((x390<=x391)-x392));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x393 = INT64_MAX;
	int32_t x395 = 13;
	int64_t t84 = INT64_MAX;

	t84 = (x393/((x394<=x395)-x396));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x397 = INT16_MIN;
	int32_t x398 = INT32_MAX;
	int8_t x399 = INT8_MIN;
	int32_t x400 = -513371;

	t85 = (x397/((x398<=x399)-x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = INT64_MIN;
	static int64_t x403 = INT64_MAX;
	volatile int64_t t86 = -3554325769LL;

	t86 = (x401/((x402<=x403)-x404));

	if (t86 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x405 = INT64_MIN;
	int8_t x406 = INT8_MIN;
	volatile int32_t x407 = INT32_MAX;
	int32_t x408 = INT32_MAX;
	volatile int64_t t87 = 1100361679795293826LL;

	t87 = (x405/((x406<=x407)-x408));

	if (t87 != 4294967300LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x409 = 1U;
	static int16_t x410 = -1;
	volatile int8_t x411 = INT8_MIN;
	volatile uint16_t x412 = 4445U;

	t88 = (x409/((x410<=x411)-x412));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = 128588013;
	int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MAX;
	static int8_t x416 = INT8_MAX;
	int32_t t89 = -1314;

	t89 = (x413/((x414<=x415)-x416));

	if (t89 != -1020539) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = INT32_MIN;
	static uint16_t x418 = 121U;
	uint32_t x419 = 12625883U;
	int32_t t90 = -99883;

	t90 = (x417/((x418<=x419)-x420));

	if (t90 != -16647160) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MAX;
	int64_t x424 = 59977724LL;

	t91 = (x421/((x422<=x423)-x424));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x425 = 1822458;
	int16_t x427 = INT16_MAX;
	uint8_t x428 = 72U;
	static volatile int32_t t92 = 24408;

	t92 = (x425/((x426<=x427)-x428));

	if (t92 != -25311) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x433 = UINT8_MAX;
	static int8_t x434 = 0;
	volatile int64_t x436 = -3506420LL;
	static int64_t t93 = 3192759685977LL;

	t93 = (x433/((x434<=x435)-x436));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x438 = -1;
	static int64_t x439 = INT64_MAX;
	int8_t x440 = -18;
	volatile int64_t t94 = -99017LL;

	t94 = (x437/((x438<=x439)-x440));

	if (t94 != 485440633518672410LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x443 = INT32_MIN;
	int16_t x444 = INT16_MIN;
	int32_t t95 = -36276;

	t95 = (x441/((x442<=x443)-x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x450 = -1;
	int8_t x452 = -1;
	volatile int32_t t96 = 11044805;

	t96 = (x449/((x450<=x451)-x452));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x453 = UINT16_MAX;
	int16_t x454 = INT16_MIN;
	uint32_t x455 = 5U;
	static uint16_t x456 = UINT16_MAX;
	static int32_t t97 = -9;

	t97 = (x453/((x454<=x455)-x456));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x457 = UINT16_MAX;
	static uint32_t x458 = 29674U;
	int64_t x459 = -1LL;
	uint32_t x460 = 31967U;
	volatile uint32_t t98 = 1472U;

	t98 = (x457/((x458<=x459)-x460));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x464 = INT16_MIN;
	volatile uint64_t t99 = 32624167LLU;

	t99 = (x461/((x462<=x463)-x464));

	if (t99 != 240225LLU) { NG(); } else { ; }
	
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

