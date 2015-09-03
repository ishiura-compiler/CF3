#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MIN;
static int32_t x6 = INT32_MIN;
volatile int16_t x10 = -5198;
static int32_t x16 = 845365;
static volatile int64_t x26 = 11LL;
int8_t x34 = INT8_MIN;
uint16_t x37 = 2U;
volatile int16_t x39 = -369;
volatile uint16_t x44 = UINT16_MAX;
static uint16_t x50 = 12799U;
int32_t x53 = INT32_MAX;
static int8_t x56 = 24;
int64_t x59 = -243LL;
volatile int8_t x68 = 0;
volatile int32_t t18 = 553;
uint16_t x98 = UINT16_MAX;
int8_t x99 = 13;
uint32_t x109 = 125U;
int8_t x116 = INT8_MIN;
int16_t x126 = -1;
int64_t x128 = -9501646898815115LL;
int32_t x129 = INT32_MIN;
int16_t x131 = INT16_MIN;
int8_t x134 = INT8_MIN;
int16_t x137 = 2349;
int32_t t29 = 5778300;
static int64_t x157 = 91756766LL;
int32_t t32 = -859;
uint8_t x172 = 40U;
static int32_t t34 = -110;
volatile uint64_t x177 = UINT64_MAX;
uint64_t x179 = 871875931LLU;
int32_t x180 = -1;
static volatile int8_t x184 = -3;
uint16_t x185 = 4U;
static uint64_t x187 = 1LLU;
volatile uint16_t x188 = 167U;
int8_t x194 = INT8_MIN;
int8_t x197 = INT8_MIN;
volatile int16_t x209 = INT16_MAX;
int32_t x210 = -1;
uint8_t x213 = 2U;
volatile int8_t x227 = INT8_MIN;
volatile uint16_t x230 = UINT16_MAX;
static volatile int64_t x231 = INT64_MAX;
volatile int64_t x239 = -1LL;
uint32_t x240 = 4U;
static int16_t x248 = -1;
volatile uint8_t x252 = UINT8_MAX;
int16_t x256 = -1;
volatile int64_t x265 = 29LL;
int64_t x274 = INT64_MIN;
uint32_t x281 = UINT32_MAX;
static uint64_t x290 = UINT64_MAX;
uint16_t x293 = 239U;
static int8_t x297 = -1;
static uint32_t x303 = UINT32_MAX;
volatile uint32_t x310 = 9977U;
static int64_t x312 = INT64_MAX;
volatile int32_t t64 = 15798434;
int16_t x327 = INT16_MIN;
static volatile uint8_t x332 = UINT8_MAX;
int32_t t67 = 23;
int8_t x338 = -1;
uint16_t x339 = 6537U;
int32_t t69 = -31247907;
uint8_t x366 = 85U;
static int8_t x380 = -1;
int32_t t77 = 3;
uint64_t x385 = UINT64_MAX;
static int32_t x386 = INT32_MIN;
volatile int8_t x387 = INT8_MIN;
volatile int16_t x389 = INT16_MIN;
uint32_t x394 = 82617U;
int8_t x396 = INT8_MIN;
int32_t t80 = -21006114;
int8_t x400 = -1;
int8_t x428 = 3;
int32_t x429 = INT32_MAX;
volatile int32_t t86 = -733;
int8_t x450 = INT8_MIN;
uint32_t x461 = UINT32_MAX;
static uint8_t x464 = UINT8_MAX;
uint8_t x493 = 4U;
static int16_t x496 = -1;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	int64_t x3 = -53LL;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = -456221;

	t0 = ((x1/x2)<(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = UINT32_MAX;
	uint64_t x7 = UINT64_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 3481610;

	t1 = ((x5/x6)<(x7-x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -79185260000422LL;
	uint8_t x11 = UINT8_MAX;
	static volatile int32_t x12 = -17405057;
	int32_t t2 = 24621;

	t2 = ((x9/x10)<(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int64_t x14 = -1LL;
	uint16_t x15 = 53U;
	static int32_t t3 = -6117781;

	t3 = ((x13/x14)<(x15-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 91822772923276LL;
	int64_t x22 = INT64_MAX;
	volatile int64_t x23 = INT64_MIN;
	volatile uint64_t x24 = 1447311LLU;
	int32_t t4 = -63294918;

	t4 = ((x21/x22)<(x23-x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 1;
	int8_t x27 = -1;
	int32_t x28 = -55698;
	int32_t t5 = -168;

	t5 = ((x25/x26)<(x27-x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -1;
	int32_t x30 = INT32_MAX;
	int32_t x31 = -1;
	static volatile int8_t x32 = INT8_MAX;
	int32_t t6 = 1;

	t6 = ((x29/x30)<(x31-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	int8_t x35 = INT8_MIN;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t7 = 1;

	t7 = ((x33/x34)<(x35-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = INT8_MIN;
	int64_t x40 = INT64_MIN;
	volatile int32_t t8 = -325;

	t8 = ((x37/x38)<(x39-x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	static int64_t x42 = -1LL;
	static int64_t x43 = -615805362749325705LL;
	volatile int32_t t9 = 34;

	t9 = ((x41/x42)<(x43-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x45 = 1312U;
	static int64_t x46 = -205LL;
	volatile uint64_t x47 = UINT64_MAX;
	int64_t x48 = INT64_MIN;
	volatile int32_t t10 = 15572;

	t10 = ((x45/x46)<(x47-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = UINT16_MAX;
	volatile int16_t x51 = INT16_MIN;
	volatile int32_t x52 = 1;
	static int32_t t11 = 1006888;

	t11 = ((x49/x50)<(x51-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x54 = 4914883537357LL;
	int64_t x55 = 52979LL;
	int32_t t12 = -46640;

	t12 = ((x53/x54)<(x55-x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MAX;
	int64_t x58 = INT64_MIN;
	uint64_t x60 = 288124500LLU;
	static int32_t t13 = -513849;

	t13 = ((x57/x58)<(x59-x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = -31;
	volatile int16_t x62 = INT16_MAX;
	static int8_t x63 = 27;
	uint64_t x64 = 0LLU;
	int32_t t14 = 913;

	t14 = ((x61/x62)<(x63-x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MIN;
	uint32_t x67 = 365U;
	volatile int32_t t15 = 15;

	t15 = ((x65/x66)<(x67-x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = 18;
	static int64_t x74 = 115309739LL;
	int64_t x75 = -90702LL;
	int8_t x76 = 3;
	int32_t t16 = 700518592;

	t16 = ((x73/x74)<(x75-x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	int32_t x78 = -1;
	int8_t x79 = -1;
	int8_t x80 = 3;
	static volatile int32_t t17 = 841728;

	t17 = ((x77/x78)<(x79-x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = 7785LL;
	int16_t x86 = INT16_MIN;
	int32_t x87 = 162275736;
	uint64_t x88 = 5LLU;

	t18 = ((x85/x86)<(x87-x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 6082U;
	int16_t x90 = INT16_MIN;
	volatile int16_t x91 = INT16_MAX;
	uint64_t x92 = 442285084282228LLU;
	int32_t t19 = -951812379;

	t19 = ((x89/x90)<(x91-x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = 1;
	uint64_t x94 = 56LLU;
	int32_t x95 = -1;
	static int16_t x96 = INT16_MIN;
	static volatile int32_t t20 = 0;

	t20 = ((x93/x94)<(x95-x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	uint64_t x100 = UINT64_MAX;
	int32_t t21 = 90847;

	t21 = ((x97/x98)<(x99-x100));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x110 = 119U;
	uint64_t x111 = UINT64_MAX;
	uint8_t x112 = 6U;
	volatile int32_t t22 = -7;

	t22 = ((x109/x110)<(x111-x112));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = UINT8_MAX;
	volatile int32_t x114 = -1;
	int32_t x115 = -18869527;
	volatile int32_t t23 = -14;

	t23 = ((x113/x114)<(x115-x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = 7390403LLU;
	volatile int16_t x118 = INT16_MAX;
	volatile int16_t x119 = 24;
	int32_t x120 = 3;
	int32_t t24 = 46;

	t24 = ((x117/x118)<(x119-x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x125 = 3;
	uint8_t x127 = 99U;
	int32_t t25 = 81596368;

	t25 = ((x125/x126)<(x127-x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x130 = -15903;
	uint64_t x132 = 78552045035738LLU;
	volatile int32_t t26 = -12;

	t26 = ((x129/x130)<(x131-x132));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = -4626194350260336LL;
	int32_t x135 = INT32_MAX;
	static volatile int32_t x136 = 79996603;
	volatile int32_t t27 = -5923171;

	t27 = ((x133/x134)<(x135-x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x138 = INT16_MIN;
	volatile int32_t x139 = INT32_MIN;
	volatile uint64_t x140 = 11589127707903LLU;
	static volatile int32_t t28 = 1;

	t28 = ((x137/x138)<(x139-x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = INT32_MIN;
	uint64_t x142 = 115655044463554LLU;
	static volatile int32_t x143 = -1;
	int64_t x144 = INT64_MIN;

	t29 = ((x141/x142)<(x143-x144));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = 26;
	int8_t x146 = -1;
	int16_t x147 = INT16_MIN;
	int64_t x148 = -1LL;
	volatile int32_t t30 = -1397519;

	t30 = ((x145/x146)<(x147-x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x153 = INT16_MAX;
	uint64_t x154 = 778281588290445003LLU;
	static int32_t x155 = INT32_MIN;
	uint32_t x156 = 16134744U;
	int32_t t31 = 6050325;

	t31 = ((x153/x154)<(x155-x156));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x158 = -1;
	int64_t x159 = -22612558LL;
	uint64_t x160 = UINT64_MAX;

	t32 = ((x157/x158)<(x159-x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x161 = 127787LL;
	int8_t x162 = -1;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = INT8_MAX;
	volatile int32_t t33 = -244;

	t33 = ((x161/x162)<(x163-x164));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x169 = -226469338767690LL;
	volatile int64_t x170 = 838616780913LL;
	uint16_t x171 = 705U;

	t34 = ((x169/x170)<(x171-x172));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = 0;
	int64_t x174 = -1LL;
	static uint64_t x175 = 130057LLU;
	static int16_t x176 = -1;
	static int32_t t35 = -2;

	t35 = ((x173/x174)<(x175-x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x178 = UINT32_MAX;
	static int32_t t36 = -12981899;

	t36 = ((x177/x178)<(x179-x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x181 = -11;
	uint64_t x182 = 762LLU;
	static int16_t x183 = INT16_MAX;
	volatile int32_t t37 = 6711;

	t37 = ((x181/x182)<(x183-x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x186 = INT32_MAX;
	volatile int32_t t38 = -1226153;

	t38 = ((x185/x186)<(x187-x188));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x193 = INT16_MAX;
	volatile int64_t x195 = 2023596969464LL;
	uint8_t x196 = 3U;
	volatile int32_t t39 = 21347;

	t39 = ((x193/x194)<(x195-x196));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x198 = UINT32_MAX;
	static int8_t x199 = 14;
	uint16_t x200 = 27U;
	int32_t t40 = -3836835;

	t40 = ((x197/x198)<(x199-x200));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x205 = 32442205U;
	volatile int16_t x206 = -3058;
	volatile int32_t x207 = 51639;
	static int32_t x208 = -1;
	int32_t t41 = -5124958;

	t41 = ((x205/x206)<(x207-x208));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x211 = 121U;
	static uint64_t x212 = 28538156LLU;
	int32_t t42 = 22858;

	t42 = ((x209/x210)<(x211-x212));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x214 = -7;
	volatile uint64_t x215 = 6140645890LLU;
	static int32_t x216 = -42589671;
	static int32_t t43 = 9540008;

	t43 = ((x213/x214)<(x215-x216));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x217 = INT8_MAX;
	volatile uint16_t x218 = UINT16_MAX;
	volatile uint32_t x219 = 229447190U;
	int8_t x220 = 0;
	volatile int32_t t44 = 46;

	t44 = ((x217/x218)<(x219-x220));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x221 = 27U;
	int64_t x222 = 289867636LL;
	uint32_t x223 = UINT32_MAX;
	int32_t x224 = INT32_MAX;
	volatile int32_t t45 = 36;

	t45 = ((x221/x222)<(x223-x224));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x225 = INT16_MIN;
	static int16_t x226 = -718;
	volatile int32_t x228 = INT32_MIN;
	volatile int32_t t46 = -8245617;

	t46 = ((x225/x226)<(x227-x228));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x229 = INT8_MIN;
	int32_t x232 = 4;
	volatile int32_t t47 = 1;

	t47 = ((x229/x230)<(x231-x232));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x233 = INT8_MAX;
	static volatile int16_t x234 = -1;
	uint8_t x235 = 63U;
	int32_t x236 = 0;
	volatile int32_t t48 = 95;

	t48 = ((x233/x234)<(x235-x236));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = INT16_MIN;
	static int32_t x238 = INT32_MIN;
	volatile int32_t t49 = -1741441;

	t49 = ((x237/x238)<(x239-x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = 32;
	volatile int64_t x246 = 274585524390831927LL;
	static uint64_t x247 = 1346790432492LLU;
	volatile int32_t t50 = 1730301;

	t50 = ((x245/x246)<(x247-x248));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x249 = INT8_MAX;
	static int64_t x250 = INT64_MIN;
	int32_t x251 = -26299;
	volatile int32_t t51 = 1248473;

	t51 = ((x249/x250)<(x251-x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x253 = INT8_MIN;
	volatile int16_t x254 = 1;
	static int8_t x255 = -1;
	int32_t t52 = 58286;

	t52 = ((x253/x254)<(x255-x256));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x261 = INT16_MIN;
	int16_t x262 = 3457;
	static int32_t x263 = -1;
	volatile uint8_t x264 = 1U;
	volatile int32_t t53 = 8;

	t53 = ((x261/x262)<(x263-x264));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x266 = UINT16_MAX;
	uint16_t x267 = 198U;
	int8_t x268 = INT8_MIN;
	int32_t t54 = 6573;

	t54 = ((x265/x266)<(x267-x268));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x269 = -1;
	uint16_t x270 = UINT16_MAX;
	uint16_t x271 = 447U;
	int8_t x272 = INT8_MAX;
	int32_t t55 = 1057956348;

	t55 = ((x269/x270)<(x271-x272));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = 0;
	int32_t x275 = INT32_MAX;
	uint16_t x276 = UINT16_MAX;
	int32_t t56 = -4;

	t56 = ((x273/x274)<(x275-x276));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x277 = -1;
	int16_t x278 = INT16_MIN;
	static int32_t x279 = -1;
	uint32_t x280 = 354U;
	int32_t t57 = 1;

	t57 = ((x277/x278)<(x279-x280));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x282 = UINT64_MAX;
	uint16_t x283 = 604U;
	static uint32_t x284 = 24U;
	volatile int32_t t58 = 129735254;

	t58 = ((x281/x282)<(x283-x284));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x289 = INT8_MIN;
	int16_t x291 = -1;
	volatile int64_t x292 = INT64_MAX;
	volatile int32_t t59 = 3756;

	t59 = ((x289/x290)<(x291-x292));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x294 = 32408425LL;
	static volatile uint8_t x295 = 14U;
	static int8_t x296 = INT8_MIN;
	int32_t t60 = -5069;

	t60 = ((x293/x294)<(x295-x296));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x298 = 576;
	int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MAX;
	volatile int32_t t61 = -15622;

	t61 = ((x297/x298)<(x299-x300));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x301 = INT16_MAX;
	uint32_t x302 = 61863857U;
	int64_t x304 = 2091212205561857794LL;
	volatile int32_t t62 = -869;

	t62 = ((x301/x302)<(x303-x304));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x309 = -718;
	uint64_t x311 = 33911057213LLU;
	int32_t t63 = 107932;

	t63 = ((x309/x310)<(x311-x312));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x317 = -1420066830502146LL;
	volatile int16_t x318 = INT16_MIN;
	int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MAX;

	t64 = ((x317/x318)<(x319-x320));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x321 = -2139664LL;
	static int16_t x322 = -2828;
	volatile int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	int32_t t65 = -120202344;

	t65 = ((x321/x322)<(x323-x324));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x325 = 12U;
	uint16_t x326 = 5U;
	int8_t x328 = INT8_MIN;
	int32_t t66 = 594844476;

	t66 = ((x325/x326)<(x327-x328));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x329 = -4083;
	uint8_t x330 = UINT8_MAX;
	int16_t x331 = INT16_MIN;

	t67 = ((x329/x330)<(x331-x332));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x333 = -1;
	int32_t x334 = -1;
	static int8_t x335 = 8;
	int64_t x336 = -60053LL;
	volatile int32_t t68 = 1406855;

	t68 = ((x333/x334)<(x335-x336));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x337 = -1;
	uint8_t x340 = 37U;

	t69 = ((x337/x338)<(x339-x340));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = INT8_MIN;
	volatile int64_t x343 = 214246211743865LL;
	static int16_t x344 = INT16_MIN;
	int32_t t70 = 1296;

	t70 = ((x341/x342)<(x343-x344));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x357 = INT64_MIN;
	static uint16_t x358 = UINT16_MAX;
	int16_t x359 = INT16_MIN;
	static uint8_t x360 = 6U;
	volatile int32_t t71 = -3816199;

	t71 = ((x357/x358)<(x359-x360));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x361 = INT32_MIN;
	volatile int8_t x362 = INT8_MIN;
	uint8_t x363 = 7U;
	uint32_t x364 = 868U;
	static volatile int32_t t72 = 265676365;

	t72 = ((x361/x362)<(x363-x364));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x365 = 14U;
	int16_t x367 = -1;
	uint16_t x368 = 491U;
	int32_t t73 = -2;

	t73 = ((x365/x366)<(x367-x368));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x369 = UINT64_MAX;
	static uint32_t x370 = UINT32_MAX;
	static int16_t x371 = -1;
	uint16_t x372 = 96U;
	int32_t t74 = 0;

	t74 = ((x369/x370)<(x371-x372));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x373 = UINT32_MAX;
	int32_t x374 = INT32_MAX;
	volatile int32_t x375 = -1;
	int32_t x376 = INT32_MIN;
	int32_t t75 = 12;

	t75 = ((x373/x374)<(x375-x376));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x377 = -212459579207859LL;
	uint32_t x378 = 94677U;
	volatile uint8_t x379 = 9U;
	static volatile int32_t t76 = 227107521;

	t76 = ((x377/x378)<(x379-x380));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x381 = INT8_MAX;
	uint32_t x382 = 79303621U;
	volatile int16_t x383 = -1;
	int8_t x384 = INT8_MIN;

	t77 = ((x381/x382)<(x383-x384));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x388 = INT16_MIN;
	volatile int32_t t78 = 32258;

	t78 = ((x385/x386)<(x387-x388));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x390 = UINT8_MAX;
	int16_t x391 = -1;
	uint8_t x392 = 8U;
	volatile int32_t t79 = 32;

	t79 = ((x389/x390)<(x391-x392));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x393 = -34894LL;
	static int32_t x395 = 868954;

	t80 = ((x393/x394)<(x395-x396));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x397 = -1;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	static volatile int32_t t81 = 31847;

	t81 = ((x397/x398)<(x399-x400));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x405 = -1LL;
	uint16_t x406 = 4586U;
	volatile uint32_t x407 = 54519U;
	uint16_t x408 = 4513U;
	static int32_t t82 = 447876960;

	t82 = ((x405/x406)<(x407-x408));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x417 = INT16_MAX;
	int8_t x418 = 15;
	int16_t x419 = INT16_MIN;
	static uint16_t x420 = 7012U;
	volatile int32_t t83 = -24313243;

	t83 = ((x417/x418)<(x419-x420));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x421 = 4;
	volatile int32_t x422 = -1;
	static int64_t x423 = 350LL;
	static volatile int64_t x424 = -1LL;
	volatile int32_t t84 = -1373;

	t84 = ((x421/x422)<(x423-x424));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x425 = -1LL;
	int64_t x426 = INT64_MAX;
	volatile uint64_t x427 = 73371840361LLU;
	static volatile int32_t t85 = 12727735;

	t85 = ((x425/x426)<(x427-x428));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x430 = 2U;
	int32_t x431 = -49;
	int64_t x432 = INT64_MIN;

	t86 = ((x429/x430)<(x431-x432));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x437 = 443;
	int16_t x438 = INT16_MIN;
	static int16_t x439 = INT16_MIN;
	static uint64_t x440 = 1628577LLU;
	int32_t t87 = -4421816;

	t87 = ((x437/x438)<(x439-x440));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x441 = 14LL;
	int64_t x442 = INT64_MAX;
	int32_t x443 = -13405924;
	volatile int32_t x444 = -1;
	volatile int32_t t88 = 3641846;

	t88 = ((x441/x442)<(x443-x444));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x449 = 260873001U;
	int32_t x451 = INT32_MIN;
	volatile int64_t x452 = -3856805LL;
	volatile int32_t t89 = 228418;

	t89 = ((x449/x450)<(x451-x452));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x462 = UINT64_MAX;
	volatile int8_t x463 = -59;
	int32_t t90 = -616273;

	t90 = ((x461/x462)<(x463-x464));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x465 = 355225LLU;
	volatile int8_t x466 = INT8_MAX;
	uint8_t x467 = UINT8_MAX;
	static int64_t x468 = -372555206LL;
	int32_t t91 = -456;

	t91 = ((x465/x466)<(x467-x468));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x469 = INT32_MIN;
	volatile int64_t x470 = INT64_MIN;
	int32_t x471 = 0;
	volatile int16_t x472 = INT16_MIN;
	static int32_t t92 = 135597;

	t92 = ((x469/x470)<(x471-x472));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x473 = UINT32_MAX;
	volatile int16_t x474 = INT16_MIN;
	volatile int32_t x475 = -13942;
	static int8_t x476 = INT8_MIN;
	volatile int32_t t93 = -9;

	t93 = ((x473/x474)<(x475-x476));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x477 = 73U;
	uint16_t x478 = UINT16_MAX;
	int64_t x479 = INT64_MIN;
	int16_t x480 = INT16_MIN;
	static volatile int32_t t94 = 1170581;

	t94 = ((x477/x478)<(x479-x480));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x481 = UINT64_MAX;
	int16_t x482 = INT16_MIN;
	uint16_t x483 = 0U;
	volatile uint16_t x484 = UINT16_MAX;
	volatile int32_t t95 = -4;

	t95 = ((x481/x482)<(x483-x484));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x485 = UINT16_MAX;
	int64_t x486 = 69788769658969LL;
	static int32_t x487 = -1;
	uint16_t x488 = 16282U;
	volatile int32_t t96 = 199690;

	t96 = ((x485/x486)<(x487-x488));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x489 = -1;
	static volatile int32_t x490 = INT32_MIN;
	int8_t x491 = INT8_MIN;
	int32_t x492 = INT32_MIN;
	int32_t t97 = -12150;

	t97 = ((x489/x490)<(x491-x492));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x494 = 2324785U;
	uint16_t x495 = 624U;
	volatile int32_t t98 = 0;

	t98 = ((x493/x494)<(x495-x496));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x497 = 0;
	uint8_t x498 = UINT8_MAX;
	int8_t x499 = INT8_MAX;
	uint16_t x500 = 368U;
	int32_t t99 = 1;

	t99 = ((x497/x498)<(x499-x500));

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

