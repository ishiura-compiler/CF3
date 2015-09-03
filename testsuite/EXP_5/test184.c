#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = -6113;
uint64_t t0 = 1LLU;
int8_t x6 = INT8_MAX;
int32_t x11 = 42;
int16_t x14 = INT16_MIN;
volatile uint64_t t4 = 1LLU;
uint64_t x22 = 118754608LLU;
volatile uint64_t x24 = UINT64_MAX;
uint64_t t5 = 1066030LLU;
int64_t x30 = 2LL;
static volatile int64_t t7 = -360888047532988322LL;
uint32_t x37 = 618266U;
int32_t x43 = -500506601;
int64_t x44 = 0LL;
volatile int64_t t10 = -1333911LL;
int16_t x57 = INT16_MIN;
uint64_t x60 = 312LLU;
int16_t x74 = INT16_MAX;
int16_t x78 = -73;
uint8_t x79 = 36U;
int16_t x83 = INT16_MIN;
int64_t t15 = 198991514362139515LL;
static volatile int8_t x85 = -1;
int8_t x87 = INT8_MIN;
uint16_t x88 = UINT16_MAX;
int32_t x90 = -128549;
volatile int16_t x93 = 449;
uint64_t x103 = 2956257LLU;
uint32_t t21 = 18317036U;
int16_t x122 = -1;
volatile uint64_t t23 = 483222LLU;
int64_t x125 = INT64_MIN;
static int64_t x127 = INT64_MAX;
uint64_t t24 = 1132067293726670LLU;
uint64_t x136 = UINT64_MAX;
volatile int32_t x166 = INT32_MIN;
static int32_t x169 = 4550962;
int8_t x175 = 0;
uint8_t x176 = 81U;
int32_t x179 = -1;
uint16_t x187 = 2466U;
static uint16_t x204 = 536U;
static int64_t x206 = INT64_MAX;
volatile int64_t x214 = INT64_MIN;
volatile uint8_t x216 = 1U;
volatile uint16_t x221 = UINT16_MAX;
int16_t x224 = INT16_MIN;
static int32_t t41 = -9240;
static int64_t x232 = -1LL;
int16_t x239 = INT16_MIN;
uint32_t x240 = 5109U;
static uint64_t x245 = 0LLU;
uint32_t x256 = 9U;
int8_t x258 = -1;
int64_t x272 = -4172979LL;
static int8_t x275 = -1;
volatile int64_t t49 = -1802LL;
int32_t x277 = INT32_MIN;
int64_t x278 = -31LL;
int16_t x284 = -1;
static uint32_t x289 = 9510U;
int64_t x292 = INT64_MAX;
int32_t t54 = -6137873;
volatile uint8_t x298 = 17U;
uint32_t t56 = 531U;
volatile int32_t t57 = 1;
static volatile int32_t x313 = INT32_MIN;
int8_t x315 = -1;
int8_t x316 = INT8_MAX;
static int64_t x318 = INT64_MIN;
int64_t x323 = -1LL;
int16_t x324 = -1893;
static volatile int32_t x333 = INT32_MIN;
volatile int8_t x336 = -1;
int64_t x342 = -1LL;
static int16_t x348 = -4;
int64_t t66 = -629954LL;
volatile int32_t x359 = INT32_MIN;
int8_t x363 = INT8_MAX;
volatile int64_t t70 = INT64_MIN;
static int64_t x369 = INT64_MAX;
int8_t x371 = -1;
volatile uint64_t t71 = 15748723LLU;
uint64_t x373 = UINT64_MAX;
int32_t x376 = 13;
uint16_t x377 = 29U;
volatile int16_t x392 = 0;
volatile int64_t t75 = -4778LL;
volatile int16_t x406 = INT16_MAX;
int32_t x415 = -1;
int16_t x417 = INT16_MAX;
volatile int32_t t79 = -8;
int8_t x437 = 4;
uint8_t x438 = 6U;
int32_t x445 = 2;
volatile int64_t x448 = -1325LL;
volatile int64_t t82 = 1949439479LL;
volatile uint8_t x452 = 0U;
volatile int8_t x454 = INT8_MIN;
int16_t x456 = INT16_MAX;
uint8_t x475 = UINT8_MAX;
int16_t x479 = -14233;
int64_t x501 = 63984883LL;
static uint32_t x521 = 127662U;
int16_t x523 = 15158;
uint32_t x528 = 94002569U;
int64_t x541 = INT64_MIN;
int64_t x563 = INT64_MAX;
uint16_t x564 = UINT16_MAX;
int32_t x567 = INT32_MIN;
uint64_t t99 = 14334856LLU;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	volatile uint64_t x2 = UINT64_MAX;
	uint8_t x3 = 14U;

	t0 = (x1-((x2-x3)-x4));

	if (t0 != 18446744073709512750LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint8_t x7 = 6U;
	int8_t x8 = -1;
	uint64_t t1 = 12279LLU;

	t1 = (x5-((x6-x7)-x8));

	if (t1 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	volatile int16_t x10 = 4;
	int16_t x12 = INT16_MIN;
	volatile int64_t t2 = -255456269967254952LL;

	t2 = (x9-((x10-x11)-x12));

	if (t2 != -32731LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int64_t x15 = INT64_MIN;
	static int16_t x16 = -1;
	volatile int64_t t3 = -122614378708580LL;

	t3 = (x13-((x14-x15)-x16));

	if (t3 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	static uint64_t x18 = UINT64_MAX;
	static int16_t x19 = -2657;
	uint16_t x20 = 416U;

	t4 = (x17-((x18-x19)-x20));

	if (t4 != 30527LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 19625U;
	int8_t x23 = INT8_MIN;

	t5 = (x21-((x22-x23)-x24));

	if (t5 != 18446744073590816504LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	volatile uint64_t x26 = 3LLU;
	volatile int64_t x27 = -7701861758486028LL;
	static int64_t x28 = -1LL;
	volatile uint64_t t6 = 473LLU;

	t6 = (x25-((x26-x27)-x28));

	if (t6 != 18439042211951065583LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	uint32_t x31 = UINT32_MAX;
	uint32_t x32 = UINT32_MAX;

	t7 = (x29-((x30-x31)-x32));

	if (t7 != 8589934587LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = INT16_MIN;
	uint8_t x39 = 1U;
	uint16_t x40 = 2U;
	static uint32_t t8 = 2698U;

	t8 = (x37-((x38-x39)-x40));

	if (t8 != 651037U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = -3;
	uint32_t x42 = 0U;
	int64_t t9 = 89058300392908LL;

	t9 = (x41-((x42-x43)-x44));

	if (t9 != -500506604LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -15843LL;
	int32_t x50 = -1;
	int16_t x51 = 407;
	static int32_t x52 = INT32_MIN;

	t10 = (x49-((x50-x51)-x52));

	if (t10 != -2147499083LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x58 = 36;
	static uint32_t x59 = 1U;
	uint64_t t11 = 438146601328105337LLU;

	t11 = (x57-((x58-x59)-x60));

	if (t11 != 18446744073709519125LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -1LL;
	int16_t x62 = INT16_MAX;
	uint32_t x63 = 2394039U;
	int16_t x64 = INT16_MIN;
	static volatile int64_t t12 = -101704979LL;

	t12 = (x61-((x62-x63)-x64));

	if (t12 != -4292638793LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = -1;
	int32_t x75 = 107416807;
	static int16_t x76 = 5015;
	int32_t t13 = -4916713;

	t13 = (x73-((x74-x75)-x76));

	if (t13 != 107389054) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = INT16_MIN;
	int8_t x80 = -1;
	static volatile int32_t t14 = 1694114;

	t14 = (x77-((x78-x79)-x80));

	if (t14 != -32660) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = UINT8_MAX;
	int64_t x82 = 4963834922865LL;
	volatile uint16_t x84 = UINT16_MAX;

	t15 = (x81-((x82-x83)-x84));

	if (t15 != -4963834889843LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x86 = -1LL;
	volatile int64_t t16 = -486490542LL;

	t16 = (x85-((x86-x87)-x88));

	if (t16 != 65407LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int8_t x91 = 2;
	int64_t x92 = -1LL;
	uint64_t t17 = 3263974185LLU;

	t17 = (x89-((x90-x91)-x92));

	if (t17 != 128549LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x94 = -1;
	uint8_t x95 = UINT8_MAX;
	static uint64_t x96 = 154865640916837457LLU;
	volatile uint64_t t18 = 4051244516368175LLU;

	t18 = (x93-((x94-x95)-x96));

	if (t18 != 154865640916838162LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x97 = 370U;
	int64_t x98 = 9977382336LL;
	int32_t x99 = INT32_MAX;
	int64_t x100 = 123459LL;
	volatile int64_t t19 = 700408LL;

	t19 = (x97-((x98-x99)-x100));

	if (t19 != -7829774860LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x101 = 0U;
	uint8_t x102 = 1U;
	static uint32_t x104 = UINT32_MAX;
	volatile uint64_t t20 = 3821063348766184580LLU;

	t20 = (x101-((x102-x103)-x104));

	if (t20 != 4297923551LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x113 = 0;
	uint32_t x114 = 0U;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = UINT16_MAX;

	t21 = (x113-((x114-x115)-x116));

	if (t21 != 32767U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x117 = 2U;
	int32_t x118 = -677;
	uint64_t x119 = UINT64_MAX;
	static volatile int64_t x120 = INT64_MIN;
	volatile uint64_t t22 = 164473315127673621LLU;

	t22 = (x117-((x118-x119)-x120));

	if (t22 != 9223372036854776486LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 87285LLU;
	int8_t x123 = INT8_MIN;
	uint64_t x124 = 182950LLU;

	t23 = (x121-((x122-x123)-x124));

	if (t23 != 270108LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x126 = UINT32_MAX;
	volatile uint64_t x128 = 398932083112LLU;

	t24 = (x125-((x126-x127)-x128));

	if (t24 != 394637115816LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x133 = -9584;
	volatile int8_t x134 = -31;
	uint64_t x135 = UINT64_MAX;
	volatile uint64_t t25 = 7683214774324LLU;

	t25 = (x133-((x134-x135)-x136));

	if (t25 != 18446744073709542061LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x137 = 946205U;
	static int8_t x138 = INT8_MIN;
	static uint32_t x139 = 221312U;
	int64_t x140 = 5474558362LL;
	volatile int64_t t26 = -11562213148LL;

	t26 = (x137-((x138-x139)-x140));

	if (t26 != 1180758711LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = INT16_MAX;
	int8_t x142 = 9;
	static int8_t x143 = INT8_MAX;
	static int8_t x144 = 16;
	int32_t t27 = 17252;

	t27 = (x141-((x142-x143)-x144));

	if (t27 != 32901) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = 23U;
	int16_t x146 = INT16_MIN;
	int64_t x147 = -74110902431987LL;
	int16_t x148 = -49;
	int64_t t28 = -3187036LL;

	t28 = (x145-((x146-x147)-x148));

	if (t28 != -74110902399245LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x153 = 352U;
	int8_t x154 = INT8_MIN;
	int32_t x155 = 76400016;
	uint16_t x156 = 13U;
	static volatile uint32_t t29 = 1786652883U;

	t29 = (x153-((x154-x155)-x156));

	if (t29 != 76400509U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = -1;
	int64_t x158 = INT64_MIN;
	volatile uint64_t x159 = 10270878724094738LLU;
	int32_t x160 = INT32_MIN;
	uint64_t t30 = 24161232LLU;

	t30 = (x157-((x158-x159)-x160));

	if (t30 != 9233642913431386897LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x165 = -1;
	int32_t x167 = -1;
	static int64_t x168 = -1LL;
	int64_t t31 = 897162284LL;

	t31 = (x165-((x166-x167)-x168));

	if (t31 != 2147483645LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x170 = 6U;
	uint16_t x171 = 6U;
	static int8_t x172 = INT8_MIN;
	int32_t t32 = 213270316;

	t32 = (x169-((x170-x171)-x172));

	if (t32 != 4550834) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x173 = 6U;
	uint32_t x174 = UINT32_MAX;
	volatile uint32_t t33 = 246954058U;

	t33 = (x173-((x174-x175)-x176));

	if (t33 != 88U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x177 = INT8_MIN;
	volatile uint16_t x178 = 18488U;
	static volatile int64_t x180 = INT64_MAX;
	volatile int64_t t34 = -3142LL;

	t34 = (x177-((x178-x179)-x180));

	if (t34 != 9223372036854757190LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = -1;
	volatile int8_t x182 = -2;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = INT64_MIN;
	volatile int64_t t35 = -300LL;

	t35 = (x181-((x182-x183)-x184));

	if (t35 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x185 = UINT64_MAX;
	int8_t x186 = 30;
	volatile int16_t x188 = -1;
	uint64_t t36 = 172503413701319248LLU;

	t36 = (x185-((x186-x187)-x188));

	if (t36 != 2434LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x197 = INT64_MIN;
	static volatile uint16_t x198 = UINT16_MAX;
	volatile int8_t x199 = 4;
	static int64_t x200 = INT64_MAX;
	volatile int64_t t37 = 7LL;

	t37 = (x197-((x198-x199)-x200));

	if (t37 != -65532LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x201 = INT8_MIN;
	int64_t x202 = -76922633LL;
	uint32_t x203 = 171U;
	static int64_t t38 = -784578562757LL;

	t38 = (x201-((x202-x203)-x204));

	if (t38 != 76923212LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x205 = INT64_MAX;
	uint16_t x207 = 13847U;
	int16_t x208 = -1;
	static int64_t t39 = -14197332LL;

	t39 = (x205-((x206-x207)-x208));

	if (t39 != 13846LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x213 = UINT8_MAX;
	int64_t x215 = INT64_MIN;
	int64_t t40 = 795057972283306LL;

	t40 = (x213-((x214-x215)-x216));

	if (t40 != 256LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x222 = 57U;
	uint16_t x223 = 2595U;

	t41 = (x221-((x222-x223)-x224));

	if (t41 != 35305) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x229 = 364;
	int32_t x230 = INT32_MIN;
	int64_t x231 = -468242117990031529LL;
	volatile int64_t t42 = 58433198202LL;

	t42 = (x229-((x230-x231)-x232));

	if (t42 != -468242115842547518LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x233 = UINT8_MAX;
	int32_t x234 = INT32_MIN;
	volatile int32_t x235 = INT32_MIN;
	static int32_t x236 = -236;
	int32_t t43 = 1;

	t43 = (x233-((x234-x235)-x236));

	if (t43 != 19) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x237 = -1;
	int16_t x238 = INT16_MAX;
	uint32_t t44 = 153U;

	t44 = (x237-((x238-x239)-x240));

	if (t44 != 4294906869U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x246 = 60;
	static uint16_t x247 = 11U;
	uint32_t x248 = 436811975U;
	static uint64_t t45 = 3LLU;

	t45 = (x245-((x246-x247)-x248));

	if (t45 != 18446744069851396246LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x253 = -1LL;
	static int8_t x254 = 0;
	uint8_t x255 = UINT8_MAX;
	volatile int64_t t46 = 3926553221485LL;

	t46 = (x253-((x254-x255)-x256));

	if (t46 != -4294967033LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x257 = -1;
	int64_t x259 = -1LL;
	int64_t x260 = INT64_MAX;
	volatile int64_t t47 = -34420422347LL;

	t47 = (x257-((x258-x259)-x260));

	if (t47 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x269 = -3;
	int8_t x270 = INT8_MIN;
	static volatile int32_t x271 = 386181459;
	volatile int64_t t48 = -6LL;

	t48 = (x269-((x270-x271)-x272));

	if (t48 != 382008605LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x273 = -1LL;
	volatile int64_t x274 = INT64_MIN;
	int64_t x276 = -1LL;

	t49 = (x273-((x274-x275)-x276));

	if (t49 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x279 = 9;
	uint64_t x280 = 1726135535797152736LLU;
	volatile uint64_t t50 = 78195360LLU;

	t50 = (x277-((x278-x279)-x280));

	if (t50 != 1726135533649669128LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x281 = 9502366669116017LLU;
	int64_t x282 = -1LL;
	volatile uint8_t x283 = 12U;
	static volatile uint64_t t51 = 16892594LLU;

	t51 = (x281-((x282-x283)-x284));

	if (t51 != 9502366669116029LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x285 = UINT64_MAX;
	uint32_t x286 = UINT32_MAX;
	uint32_t x287 = 17U;
	static uint8_t x288 = 5U;
	volatile uint64_t t52 = 8858516337729LLU;

	t52 = (x285-((x286-x287)-x288));

	if (t52 != 18446744069414584342LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x290 = 31695480U;
	int8_t x291 = INT8_MIN;
	volatile int64_t t53 = -233164683512278883LL;

	t53 = (x289-((x290-x291)-x292));

	if (t53 != 9223372036823089709LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x293 = 99U;
	int16_t x294 = INT16_MIN;
	volatile int32_t x295 = -1;
	int16_t x296 = -7;

	t54 = (x293-((x294-x295)-x296));

	if (t54 != 32859) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x297 = -865;
	volatile uint32_t x299 = 120U;
	volatile int64_t x300 = -215939174934LL;
	static volatile int64_t t55 = -26LL;

	t55 = (x297-((x298-x299)-x300));

	if (t55 != -220234142992LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x301 = INT8_MAX;
	int16_t x302 = INT16_MIN;
	uint32_t x303 = UINT32_MAX;
	int32_t x304 = INT32_MIN;

	t56 = (x301-((x302-x303)-x304));

	if (t56 != 2147516542U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x309 = INT8_MAX;
	int16_t x310 = INT16_MIN;
	int16_t x311 = INT16_MIN;
	static uint16_t x312 = 89U;

	t57 = (x309-((x310-x311)-x312));

	if (t57 != 216) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x314 = 2U;
	int32_t t58 = -17876;

	t58 = (x313-((x314-x315)-x316));

	if (t58 != -2147483524) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x317 = INT8_MAX;
	int32_t x319 = -1836770;
	volatile int32_t x320 = INT32_MIN;
	int64_t t59 = -1356536253365905LL;

	t59 = (x317-((x318-x319)-x320));

	if (t59 != 9223372034705455517LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x321 = -1;
	volatile uint32_t x322 = 51U;
	int64_t t60 = -153362717951LL;

	t60 = (x321-((x322-x323)-x324));

	if (t60 != -1946LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x325 = 28LL;
	static int16_t x326 = -55;
	static int64_t x327 = -1LL;
	int64_t x328 = -471815509741952190LL;
	int64_t t61 = 17151590830161050LL;

	t61 = (x325-((x326-x327)-x328));

	if (t61 != -471815509741952108LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x329 = 0;
	int64_t x330 = -1LL;
	uint16_t x331 = 11245U;
	uint32_t x332 = 38U;
	volatile int64_t t62 = 880533LL;

	t62 = (x329-((x330-x331)-x332));

	if (t62 != 11284LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x334 = INT32_MIN;
	volatile uint32_t x335 = 678U;
	volatile uint32_t t63 = 7546U;

	t63 = (x333-((x334-x335)-x336));

	if (t63 != 677U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = 22;
	int16_t x339 = 2378;
	static uint32_t x340 = UINT32_MAX;
	uint64_t t64 = 13458188776867LLU;

	t64 = (x337-((x338-x339)-x340));

	if (t64 != 18446744069414586674LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x341 = INT16_MAX;
	int8_t x343 = -2;
	static volatile int32_t x344 = -89;
	int64_t t65 = -142434636024LL;

	t65 = (x341-((x342-x343)-x344));

	if (t65 != 32677LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x345 = 8168;
	static int64_t x346 = 25700101215LL;
	int32_t x347 = 1;

	t66 = (x345-((x346-x347)-x348));

	if (t66 != -25700093050LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x349 = INT16_MIN;
	static int32_t x350 = 1;
	volatile uint64_t x351 = 5256LLU;
	volatile int8_t x352 = -1;
	volatile uint64_t t67 = 1305835244LLU;

	t67 = (x349-((x350-x351)-x352));

	if (t67 != 18446744073709524102LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x353 = 3LLU;
	int64_t x354 = 973LL;
	int16_t x355 = 117;
	uint8_t x356 = 3U;
	uint64_t t68 = 90LLU;

	t68 = (x353-((x354-x355)-x356));

	if (t68 != 18446744073709550766LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x357 = -992454790LL;
	int64_t x358 = INT64_MIN;
	int64_t x360 = 4LL;
	volatile int64_t t69 = -1521081318736829011LL;

	t69 = (x357-((x358-x359)-x360));

	if (t69 != 9223372033714837374LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x361 = INT64_MIN;
	int64_t x362 = -1LL;
	static volatile int8_t x364 = INT8_MIN;

	t70 = (x361-((x362-x363)-x364));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x370 = UINT64_MAX;
	uint32_t x372 = UINT32_MAX;

	t71 = (x369-((x370-x371)-x372));

	if (t71 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x374 = INT16_MIN;
	int8_t x375 = -9;
	volatile uint64_t t72 = 3LLU;

	t72 = (x373-((x374-x375)-x376));

	if (t72 != 32771LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x378 = -1;
	int32_t x379 = -1;
	int16_t x380 = -1;
	volatile int32_t t73 = 11903763;

	t73 = (x377-((x378-x379)-x380));

	if (t73 != 28) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x381 = 206554005661414212LL;
	uint32_t x382 = 39U;
	static int8_t x383 = INT8_MIN;
	static int16_t x384 = INT16_MIN;
	int64_t t74 = 1264268140039LL;

	t74 = (x381-((x382-x383)-x384));

	if (t74 != 206554005661381277LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x389 = -1;
	static int64_t x390 = -1LL;
	int8_t x391 = INT8_MIN;

	t75 = (x389-((x390-x391)-x392));

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x405 = 317;
	int32_t x407 = -1;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t76 = 1199677LLU;

	t76 = (x405-((x406-x407)-x408));

	if (t76 != 18446744073709519164LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x409 = UINT64_MAX;
	static uint16_t x410 = UINT16_MAX;
	uint64_t x411 = UINT64_MAX;
	uint16_t x412 = 8157U;
	volatile uint64_t t77 = 19733618928202LLU;

	t77 = (x409-((x410-x411)-x412));

	if (t77 != 18446744073709494236LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x413 = 51U;
	int8_t x414 = INT8_MIN;
	static uint64_t x416 = 417153961198LLU;
	uint64_t t78 = 6837LLU;

	t78 = (x413-((x414-x415)-x416));

	if (t78 != 417153961376LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x418 = -1;
	int16_t x419 = INT16_MAX;
	static int16_t x420 = INT16_MIN;

	t79 = (x417-((x418-x419)-x420));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x425 = -1LL;
	uint64_t x426 = 55773093302LLU;
	uint16_t x427 = 1762U;
	uint16_t x428 = 3105U;
	volatile uint64_t t80 = 3663600LLU;

	t80 = (x425-((x426-x427)-x428));

	if (t80 != 18446744017936463180LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x439 = 633194283;
	uint64_t x440 = 3317139068431906441LLU;
	volatile uint64_t t81 = 64827458LLU;

	t81 = (x437-((x438-x439)-x440));

	if (t81 != 3317139069065100722LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x446 = -3;
	volatile int8_t x447 = -5;

	t82 = (x445-((x446-x447)-x448));

	if (t82 != -1325LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x449 = INT8_MIN;
	int32_t x450 = INT32_MAX;
	int64_t x451 = 7393639917416LL;
	int64_t t83 = -48939325873328LL;

	t83 = (x449-((x450-x451)-x452));

	if (t83 != 7391492433641LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x453 = 3007;
	int32_t x455 = -1;
	int32_t t84 = -223;

	t84 = (x453-((x454-x455)-x456));

	if (t84 != 35901) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x457 = -1;
	int16_t x458 = -4;
	static volatile int16_t x459 = -1;
	int8_t x460 = 1;
	volatile int32_t t85 = -609;

	t85 = (x457-((x458-x459)-x460));

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x469 = 11280532091590LLU;
	uint32_t x470 = UINT32_MAX;
	volatile int32_t x471 = INT32_MIN;
	uint64_t x472 = 24846LLU;
	volatile uint64_t t86 = 15624267920061188LLU;

	t86 = (x469-((x470-x471)-x472));

	if (t86 != 11278384632789LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x473 = 757652904486028LLU;
	int8_t x474 = 1;
	uint16_t x476 = UINT16_MAX;
	static volatile uint64_t t87 = 4LLU;

	t87 = (x473-((x474-x475)-x476));

	if (t87 != 757652904551817LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x477 = 25292986722282LL;
	int32_t x478 = 15;
	int16_t x480 = INT16_MIN;
	volatile int64_t t88 = 646067915269230850LL;

	t88 = (x477-((x478-x479)-x480));

	if (t88 != 25292986675266LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x497 = -1LL;
	int64_t x498 = INT64_MIN;
	volatile int64_t x499 = INT64_MIN;
	static int8_t x500 = -1;
	volatile int64_t t89 = 0LL;

	t89 = (x497-((x498-x499)-x500));

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x502 = INT32_MIN;
	int16_t x503 = -824;
	int32_t x504 = INT32_MIN;
	volatile int64_t t90 = 623126013LL;

	t90 = (x501-((x502-x503)-x504));

	if (t90 != 63984059LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x505 = 97U;
	uint16_t x506 = 13U;
	static uint32_t x507 = 126989U;
	int8_t x508 = -1;
	static uint32_t t91 = 1U;

	t91 = (x505-((x506-x507)-x508));

	if (t91 != 127072U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x522 = 91U;
	static volatile uint64_t x524 = 5LLU;
	static uint64_t t92 = 132197757179833954LLU;

	t92 = (x521-((x522-x523)-x524));

	if (t92 != 142734LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x525 = 1816U;
	static volatile int64_t x526 = INT64_MAX;
	int64_t x527 = INT64_MAX;
	static int64_t t93 = 60649LL;

	t93 = (x525-((x526-x527)-x528));

	if (t93 != 94004385LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x529 = 6489152;
	static volatile int8_t x530 = INT8_MIN;
	volatile int16_t x531 = INT16_MAX;
	int32_t x532 = -88320;
	int32_t t94 = -689544070;

	t94 = (x529-((x530-x531)-x532));

	if (t94 != 6433727) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x537 = 2U;
	volatile uint16_t x538 = 185U;
	volatile uint16_t x539 = UINT16_MAX;
	int16_t x540 = INT16_MIN;
	static volatile int32_t t95 = 6896;

	t95 = (x537-((x538-x539)-x540));

	if (t95 != 32584) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x542 = -1LL;
	volatile uint64_t x543 = 9190190880317808209LLU;
	volatile int16_t x544 = INT16_MAX;
	uint64_t t96 = 47LLU;

	t96 = (x541-((x542-x543)-x544));

	if (t96 != 18413562917172616785LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x561 = 2U;
	static uint64_t x562 = 17155753LLU;
	uint64_t t97 = 543LLU;

	t97 = (x561-((x562-x563)-x564));

	if (t97 != 9223372036837685591LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x565 = 265975037034302294LLU;
	uint64_t x566 = 29582185961890857LLU;
	int64_t x568 = INT64_MIN;
	volatile uint64_t t98 = 11696LLU;

	t98 = (x565-((x566-x567)-x568));

	if (t98 != 9459764885779703597LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x569 = UINT64_MAX;
	static volatile uint32_t x570 = 2314U;
	static int8_t x571 = INT8_MAX;
	int32_t x572 = INT32_MIN;

	t99 = (x569-((x570-x571)-x572));

	if (t99 != 18446744071562065780LLU) { NG(); } else { ; }
	
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

