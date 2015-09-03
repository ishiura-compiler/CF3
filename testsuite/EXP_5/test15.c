#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 7;
static volatile int64_t t0 = 7946619037LL;
static volatile int16_t x8 = 1;
int32_t t1 = 534;
volatile int64_t x12 = INT64_MAX;
static uint64_t t2 = 25529960154793LLU;
volatile int64_t x16 = INT64_MAX;
int32_t t4 = 35483822;
static uint64_t t6 = 7277117022LLU;
static uint16_t x40 = 1U;
int64_t x48 = 274760134LL;
volatile int64_t t9 = 21307LL;
int32_t x50 = 66793;
static int32_t t10 = 109;
static uint8_t x53 = UINT8_MAX;
volatile int8_t x56 = -1;
int16_t x59 = 1;
volatile uint64_t t13 = 7755356625LLU;
static int32_t x69 = -822727;
volatile uint32_t x85 = 103879899U;
volatile uint64_t x89 = 2680LLU;
volatile int64_t x101 = INT64_MIN;
volatile int64_t x102 = -1LL;
int32_t x104 = -1;
int32_t x106 = -26;
uint16_t x110 = UINT16_MAX;
volatile int32_t x112 = INT32_MAX;
int64_t x118 = 202LL;
uint32_t x119 = 0U;
uint64_t t23 = 18180547833600078LLU;
int16_t x127 = INT16_MIN;
int32_t x128 = 31790;
static volatile int64_t t24 = -17437230550738080LL;
int16_t x136 = -14533;
static uint64_t x142 = 2102356013959295276LLU;
int64_t x144 = -1LL;
static volatile uint64_t t28 = 127346539875987LLU;
int32_t x172 = 440;
int64_t t32 = 15181LL;
int8_t x179 = 1;
volatile uint32_t x180 = 12U;
uint64_t t34 = 6235279233028664LLU;
static int64_t t35 = 94LL;
static int64_t x202 = INT64_MIN;
int64_t x214 = 1507755573680LL;
int8_t x226 = INT8_MAX;
int8_t x229 = -1;
volatile uint16_t x236 = 2U;
uint16_t x249 = 1U;
int16_t x254 = -2238;
static int16_t x256 = INT16_MAX;
uint32_t t44 = 2444112U;
static uint16_t x261 = UINT16_MAX;
static volatile int32_t x262 = 252930;
int16_t x264 = INT16_MIN;
static int8_t x283 = -31;
int8_t x288 = INT8_MAX;
int64_t x291 = -1LL;
static int16_t x293 = -1;
int64_t x295 = INT64_MAX;
int16_t x297 = INT16_MIN;
uint64_t t54 = 19183407LLU;
int64_t x324 = INT64_MIN;
int64_t x332 = INT64_MIN;
int64_t t56 = -55246657803471LL;
static uint32_t x345 = 519519U;
uint8_t x355 = UINT8_MAX;
volatile uint32_t t61 = 128994U;
uint16_t x366 = 2U;
static uint16_t x376 = 1757U;
static volatile int8_t x381 = INT8_MIN;
int64_t x387 = INT64_MIN;
uint32_t x395 = 2242U;
int32_t x398 = INT32_MAX;
uint8_t x403 = 10U;
volatile int32_t x409 = INT32_MIN;
volatile int8_t x410 = -1;
uint16_t x431 = 0U;
static volatile uint16_t x436 = UINT16_MAX;
int16_t x446 = INT16_MIN;
uint16_t x464 = UINT16_MAX;
int32_t x471 = -1;
volatile uint64_t x472 = 4380450306171758554LLU;
uint64_t t83 = 171903497LLU;
static volatile uint32_t x475 = UINT32_MAX;
int32_t x479 = -81302;
volatile int32_t x485 = -1;
int32_t x489 = INT32_MAX;
static int16_t x496 = -1;
int8_t x497 = -1;
int64_t x500 = 172503LL;
static volatile int32_t x501 = -29416081;
volatile int16_t x504 = 1;
static volatile int32_t x507 = INT32_MIN;
volatile uint32_t t91 = 0U;
int64_t x518 = 43LL;
static int8_t x528 = INT8_MAX;
int64_t t97 = -64146710366LL;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = 364998;

	t0 = (x1-((x2+x3)-x4));

	if (t0 != 9223372032560173518LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 263U;
	static volatile int16_t x6 = INT16_MIN;
	uint8_t x7 = 9U;

	t1 = (x5-((x6+x7)-x8));

	if (t1 != 33023) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -14;
	uint8_t x10 = 124U;
	static uint64_t x11 = 52332491LLU;

	t2 = (x9-((x10+x11)-x12));

	if (t2 != 9223372036802443178LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 6971803860905LLU;
	int64_t x14 = 439300049851344122LL;
	volatile uint32_t x15 = 0U;
	uint64_t t3 = 703LLU;

	t3 = (x13-((x14+x15)-x16));

	if (t3 != 8784078958807292590LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 1;
	volatile int8_t x18 = INT8_MIN;
	int8_t x19 = -1;
	int16_t x20 = INT16_MAX;

	t4 = (x17-((x18+x19)-x20));

	if (t4 != 32897) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 38;
	uint32_t x22 = 54U;
	int8_t x23 = -6;
	int32_t x24 = -1;
	volatile uint32_t t5 = 337U;

	t5 = (x21-((x22+x23)-x24));

	if (t5 != 4294967285U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	int32_t x27 = INT32_MIN;
	static int64_t x28 = -116408933LL;

	t6 = (x25-((x26+x27)-x28));

	if (t6 != 2031074715LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = 0;
	uint64_t x30 = 117496905838705035LLU;
	volatile int32_t x31 = -1;
	int8_t x32 = INT8_MIN;
	uint64_t t7 = 457662LLU;

	t7 = (x29-((x30+x31)-x32));

	if (t7 != 18329247167870846454LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 1085190684U;
	int64_t x38 = 2630948070LL;
	static uint16_t x39 = UINT16_MAX;
	static volatile int64_t t8 = -612710LL;

	t8 = (x37-((x38+x39)-x40));

	if (t8 != -1545822920LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = 2;
	uint16_t x46 = UINT16_MAX;
	static int64_t x47 = -133389769892855LL;

	t9 = (x45-((x46+x47)-x48));

	if (t9 != 133390044587456LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x49 = 1;
	int16_t x51 = INT16_MIN;
	static uint16_t x52 = 6021U;

	t10 = (x49-((x50+x51)-x52));

	if (t10 != -28003) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x54 = INT32_MIN;
	static uint32_t x55 = 926966U;
	static volatile uint32_t t11 = 0U;

	t11 = (x53-((x54+x55)-x56));

	if (t11 != 2146556936U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 28;
	static int8_t x58 = 13;
	int32_t x60 = -1;
	volatile int32_t t12 = -2024;

	t12 = (x57-((x58+x59)-x60));

	if (t12 != 13) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = UINT64_MAX;
	int16_t x66 = INT16_MAX;
	uint32_t x67 = UINT32_MAX;
	uint64_t x68 = 260643313260890LLU;

	t13 = (x65-((x66+x67)-x68));

	if (t13 != 260643313228123LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x70 = 1546U;
	uint64_t x71 = 7459295181118132723LLU;
	static int64_t x72 = INT64_MIN;
	uint64_t t14 = 1452277937LLU;

	t14 = (x69-((x70+x71)-x72));

	if (t14 != 1764076855735818812LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = -1;
	int16_t x74 = -13;
	int8_t x75 = 46;
	volatile uint16_t x76 = 32U;
	int32_t t15 = -1;

	t15 = (x73-((x74+x75)-x76));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x77 = INT8_MAX;
	int8_t x78 = 59;
	int8_t x79 = INT8_MAX;
	int16_t x80 = -1;
	volatile int32_t t16 = -10237220;

	t16 = (x77-((x78+x79)-x80));

	if (t16 != -60) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x86 = -28038300072LL;
	int16_t x87 = INT16_MIN;
	static int16_t x88 = -1;
	int64_t t17 = -23427405976285LL;

	t17 = (x85-((x86+x87)-x88));

	if (t17 != 28142212738LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x90 = INT16_MIN;
	int8_t x91 = -1;
	int32_t x92 = INT32_MIN;
	uint64_t t18 = 513770LLU;

	t18 = (x89-((x90+x91)-x92));

	if (t18 != 18446744071562103417LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x103 = 0U;
	int64_t t19 = INT64_MIN;

	t19 = (x101-((x102+x103)-x104));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x105 = 941507695133378885LLU;
	static uint64_t x107 = 43812212780880148LLU;
	int8_t x108 = INT8_MIN;
	static volatile uint64_t t20 = 477391LLU;

	t20 = (x105-((x106+x107)-x108));

	if (t20 != 897695482352498635LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x109 = UINT64_MAX;
	int16_t x111 = INT16_MAX;
	volatile uint64_t t21 = 25557342LLU;

	t21 = (x109-((x110+x111)-x112));

	if (t21 != 2147385344LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = -5LL;
	volatile uint8_t x114 = 7U;
	int32_t x115 = INT32_MIN;
	volatile uint64_t x116 = 76122211LLU;
	uint64_t t22 = 58312272417561LLU;

	t22 = (x113-((x114+x115)-x116));

	if (t22 != 2223605847LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x117 = UINT64_MAX;
	uint8_t x120 = 123U;

	t23 = (x117-((x118+x119)-x120));

	if (t23 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = -197;
	int64_t x126 = -1LL;

	t24 = (x125-((x126+x127)-x128));

	if (t24 != 64362LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = -1;
	volatile uint16_t x130 = 980U;
	int8_t x131 = -5;
	static int16_t x132 = INT16_MAX;
	int32_t t25 = 53559;

	t25 = (x129-((x130+x131)-x132));

	if (t25 != 31791) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = -1;
	int64_t x134 = INT64_MAX;
	static int64_t x135 = INT64_MIN;
	static volatile int64_t t26 = 14815372034LL;

	t26 = (x133-((x134+x135)-x136));

	if (t26 != -14533LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x137 = 55U;
	uint16_t x138 = 31224U;
	volatile uint16_t x139 = 6U;
	uint32_t x140 = 111U;
	uint32_t t27 = 701349U;

	t27 = (x137-((x138+x139)-x140));

	if (t27 != 4294936232U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = -1;
	int8_t x143 = 1;

	t28 = (x141-((x142+x143)-x144));

	if (t28 != 16344388059750256337LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = -1LL;
	int8_t x146 = 0;
	uint16_t x147 = 53U;
	int8_t x148 = INT8_MAX;
	volatile int64_t t29 = 252996050LL;

	t29 = (x145-((x146+x147)-x148));

	if (t29 != 73LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x165 = 97113U;
	int16_t x166 = 48;
	int8_t x167 = INT8_MIN;
	int64_t x168 = -1LL;
	volatile int64_t t30 = 4925385377493LL;

	t30 = (x165-((x166+x167)-x168));

	if (t30 != 97192LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x169 = 1U;
	int8_t x170 = INT8_MIN;
	static volatile int64_t x171 = 7984382175LL;
	int64_t t31 = 38697917651917LL;

	t31 = (x169-((x170+x171)-x172));

	if (t31 != -7984381606LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x173 = -3726LL;
	int16_t x174 = INT16_MIN;
	int32_t x175 = -1;
	static int32_t x176 = 191761112;

	t32 = (x173-((x174+x175)-x176));

	if (t32 != 191790155LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x177 = UINT16_MAX;
	int64_t x178 = 0LL;
	int64_t t33 = 0LL;

	t33 = (x177-((x178+x179)-x180));

	if (t33 != 65546LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x181 = 309U;
	uint64_t x182 = 7864LLU;
	int8_t x183 = INT8_MIN;
	int64_t x184 = 1207198942134249348LL;

	t34 = (x181-((x182+x183)-x184));

	if (t34 != 1207198942134241921LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x197 = -11;
	uint8_t x198 = 13U;
	int64_t x199 = -6077217616914LL;
	static int32_t x200 = 77795173;

	t35 = (x197-((x198+x199)-x200));

	if (t35 != 6077295412063LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x201 = INT64_MIN;
	volatile uint16_t x203 = 1202U;
	uint8_t x204 = 67U;
	volatile int64_t t36 = -3305453876599LL;

	t36 = (x201-((x202+x203)-x204));

	if (t36 != -1135LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x209 = -1LL;
	int8_t x210 = -2;
	int16_t x211 = INT16_MIN;
	uint8_t x212 = 3U;
	int64_t t37 = -7LL;

	t37 = (x209-((x210+x211)-x212));

	if (t37 != 32772LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x213 = -1LL;
	int32_t x215 = 443;
	int32_t x216 = INT32_MAX;
	volatile int64_t t38 = -8569284943606LL;

	t38 = (x213-((x214+x215)-x216));

	if (t38 != -1505608090477LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x221 = 564997004884LLU;
	static int64_t x222 = -2027240315725LL;
	int8_t x223 = 10;
	static uint16_t x224 = 19116U;
	uint64_t t39 = 16589641484LLU;

	t39 = (x221-((x222+x223)-x224));

	if (t39 != 2592237339715LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x225 = 14;
	static volatile int16_t x227 = INT16_MIN;
	volatile int32_t x228 = 816;
	int32_t t40 = 0;

	t40 = (x225-((x226+x227)-x228));

	if (t40 != 33471) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MAX;
	uint32_t x232 = UINT32_MAX;
	static volatile uint32_t t41 = 7U;

	t41 = (x229-((x230+x231)-x232));

	if (t41 != 32639U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = INT8_MAX;
	int32_t x234 = -1;
	int16_t x235 = -488;
	volatile int32_t t42 = 1974134;

	t42 = (x233-((x234+x235)-x236));

	if (t42 != 618) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x250 = 11U;
	static uint16_t x251 = 4403U;
	static volatile int64_t x252 = INT64_MAX;
	volatile int64_t t43 = -9210072904LL;

	t43 = (x249-((x250+x251)-x252));

	if (t43 != 9223372036854771394LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x253 = INT32_MIN;
	uint32_t x255 = 27U;

	t44 = (x253-((x254+x255)-x256));

	if (t44 != 2147518626U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x263 = INT16_MAX;
	static int32_t t45 = 20112886;

	t45 = (x261-((x262+x263)-x264));

	if (t45 != -252930) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x265 = INT64_MIN;
	int8_t x266 = INT8_MIN;
	static int16_t x267 = -1;
	static volatile uint64_t x268 = UINT64_MAX;
	uint64_t t46 = 223515512094095566LLU;

	t46 = (x265-((x266+x267)-x268));

	if (t46 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x269 = -167;
	int64_t x270 = 1235871703947807LL;
	uint32_t x271 = UINT32_MAX;
	static volatile int64_t x272 = -200LL;
	static int64_t t47 = 145148LL;

	t47 = (x269-((x270+x271)-x272));

	if (t47 != -1235875998915469LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x273 = 335U;
	static uint8_t x274 = UINT8_MAX;
	volatile int64_t x275 = 71605095492153804LL;
	static int32_t x276 = INT32_MAX;
	int64_t t48 = 0LL;

	t48 = (x273-((x274+x275)-x276));

	if (t48 != -71605093344670077LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x281 = -1LL;
	uint64_t x282 = 166780LLU;
	uint32_t x284 = 118887703U;
	volatile uint64_t t49 = 6278235LLU;

	t49 = (x281-((x282+x283)-x284));

	if (t49 != 118720953LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x285 = INT64_MIN;
	volatile int8_t x286 = -1;
	static int16_t x287 = INT16_MIN;
	volatile int64_t t50 = 10LL;

	t50 = (x285-((x286+x287)-x288));

	if (t50 != -9223372036854742912LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x289 = 1207692596LLU;
	static volatile uint32_t x290 = UINT32_MAX;
	int16_t x292 = -1;
	volatile uint64_t t51 = 15LLU;

	t51 = (x289-((x290+x291)-x292));

	if (t51 != 18446744070622276917LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x294 = INT32_MIN;
	volatile int8_t x296 = INT8_MIN;
	volatile int64_t t52 = 48LL;

	t52 = (x293-((x294+x295)-x296));

	if (t52 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x298 = UINT64_MAX;
	uint64_t x299 = UINT64_MAX;
	volatile uint64_t x300 = 234635177635837LLU;
	uint64_t t53 = 2429115561LLU;

	t53 = (x297-((x298+x299)-x300));

	if (t53 != 234635177603071LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x313 = 3251027LLU;
	volatile uint64_t x314 = UINT64_MAX;
	int64_t x315 = INT64_MAX;
	int8_t x316 = INT8_MIN;

	t54 = (x313-((x314+x315)-x316));

	if (t54 != 9223372036858026709LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MIN;
	static uint32_t x323 = 99U;
	volatile int64_t t55 = 1499183251LL;

	t55 = (x321-((x322+x323)-x324));

	if (t55 != -2147483747LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x329 = 0U;
	int8_t x330 = 29;
	int32_t x331 = INT32_MIN;

	t56 = (x329-((x330+x331)-x332));

	if (t56 != -9223372034707292189LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x333 = 65747332286002041LLU;
	int16_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	int8_t x336 = INT8_MAX;
	static uint64_t t57 = 1216803800442066421LLU;

	t57 = (x333-((x334+x335)-x336));

	if (t57 != 65747332285936634LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x337 = INT32_MIN;
	static int32_t x338 = INT32_MAX;
	int64_t x339 = INT64_MIN;
	int64_t x340 = -1LL;
	int64_t t58 = -16668834LL;

	t58 = (x337-((x338+x339)-x340));

	if (t58 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x341 = 3;
	static volatile uint64_t x342 = 1669996387680742229LLU;
	volatile int32_t x343 = 1;
	int16_t x344 = INT16_MIN;
	uint64_t t59 = 83645955836783LLU;

	t59 = (x341-((x342+x343)-x344));

	if (t59 != 16776747686028776621LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = INT16_MIN;
	volatile int32_t x348 = INT32_MAX;
	uint32_t t60 = 395717261U;

	t60 = (x345-((x346+x347)-x348));

	if (t60 != 2147970399U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x353 = UINT16_MAX;
	uint32_t x354 = UINT32_MAX;
	static int32_t x356 = INT32_MAX;

	t61 = (x353-((x354+x355)-x356));

	if (t61 != 2147548928U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x365 = 19U;
	int64_t x367 = -1LL;
	int16_t x368 = -12;
	int64_t t62 = 707LL;

	t62 = (x365-((x366+x367)-x368));

	if (t62 != 6LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x373 = 2129966U;
	int64_t x374 = -28158568872627LL;
	static volatile int32_t x375 = INT32_MIN;
	static volatile int64_t t63 = -16284018LL;

	t63 = (x373-((x374+x375)-x376));

	if (t63 != 28160718487998LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x377 = INT32_MAX;
	int8_t x378 = -1;
	int64_t x379 = INT64_MAX;
	static volatile int32_t x380 = 210198;
	volatile int64_t t64 = 43LL;

	t64 = (x377-((x378+x379)-x380));

	if (t64 != -9223372034707081961LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x382 = -36;
	static int8_t x383 = -1;
	static int8_t x384 = 52;
	int32_t t65 = -2516;

	t65 = (x381-((x382+x383)-x384));

	if (t65 != -39) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x385 = 16759U;
	static uint16_t x386 = UINT16_MAX;
	int16_t x388 = 7;
	static int64_t t66 = 32LL;

	t66 = (x385-((x386+x387)-x388));

	if (t66 != 9223372036854727039LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x389 = -1;
	static volatile int32_t x390 = 101;
	uint16_t x391 = UINT16_MAX;
	uint16_t x392 = 6098U;
	static volatile int32_t t67 = -156392;

	t67 = (x389-((x390+x391)-x392));

	if (t67 != -59539) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x393 = 2;
	volatile int8_t x394 = INT8_MAX;
	static volatile uint16_t x396 = 31440U;
	uint32_t t68 = 62371640U;

	t68 = (x393-((x394+x395)-x396));

	if (t68 != 29073U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x397 = 14184U;
	int64_t x399 = INT64_MIN;
	uint8_t x400 = 83U;
	volatile int64_t t69 = 708217087LL;

	t69 = (x397-((x398+x399)-x400));

	if (t69 != 9223372034707306428LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x401 = INT16_MIN;
	static int32_t x402 = INT32_MIN;
	int64_t x404 = -1LL;
	static volatile int64_t t70 = -26142LL;

	t70 = (x401-((x402+x403)-x404));

	if (t70 != 2147450869LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x405 = -1;
	int8_t x406 = INT8_MIN;
	int8_t x407 = -1;
	int8_t x408 = -1;
	int32_t t71 = -1;

	t71 = (x405-((x406+x407)-x408));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x411 = INT8_MIN;
	static int8_t x412 = INT8_MIN;
	volatile int32_t t72 = 457;

	t72 = (x409-((x410+x411)-x412));

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x421 = INT32_MIN;
	static int32_t x422 = INT32_MIN;
	uint32_t x423 = 20198U;
	uint16_t x424 = 0U;
	volatile uint32_t t73 = 63U;

	t73 = (x421-((x422+x423)-x424));

	if (t73 != 4294947098U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x425 = -1LL;
	uint32_t x426 = UINT32_MAX;
	volatile uint32_t x427 = 14U;
	int16_t x428 = 1;
	volatile int64_t t74 = -2189849615638LL;

	t74 = (x425-((x426+x427)-x428));

	if (t74 != -13LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x429 = UINT32_MAX;
	uint8_t x430 = UINT8_MAX;
	int8_t x432 = INT8_MAX;
	volatile uint32_t t75 = 1710296U;

	t75 = (x429-((x430+x431)-x432));

	if (t75 != 4294967167U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x433 = 6U;
	int32_t x434 = INT32_MIN;
	uint64_t x435 = UINT64_MAX;
	uint64_t t76 = 137018811802921826LLU;

	t76 = (x433-((x434+x435)-x436));

	if (t76 != 2147549190LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x445 = 0LL;
	static volatile int64_t x447 = 3099392LL;
	int32_t x448 = INT32_MIN;
	static volatile int64_t t77 = -1LL;

	t77 = (x445-((x446+x447)-x448));

	if (t77 != -2150550272LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x449 = -13273;
	int32_t x450 = -1;
	int8_t x451 = INT8_MAX;
	uint8_t x452 = 2U;
	int32_t t78 = 79;

	t78 = (x449-((x450+x451)-x452));

	if (t78 != -13397) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x453 = 191078500852LLU;
	uint16_t x454 = UINT16_MAX;
	int16_t x455 = 656;
	uint64_t x456 = 12156750522939LLU;
	static volatile uint64_t t79 = 1949204035LLU;

	t79 = (x453-((x454+x455)-x456));

	if (t79 != 12347828957600LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x457 = 749563329;
	uint64_t x458 = 19LLU;
	int64_t x459 = INT64_MIN;
	static uint64_t x460 = 154541479528LLU;
	volatile uint64_t t80 = 278152710266089LLU;

	t80 = (x457-((x458+x459)-x460));

	if (t80 != 9223372192145818646LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x461 = 25515U;
	static int16_t x462 = INT16_MIN;
	uint8_t x463 = 5U;
	volatile int32_t t81 = -264485871;

	t81 = (x461-((x462+x463)-x464));

	if (t81 != 123813) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x465 = -1;
	int16_t x466 = -6;
	volatile uint16_t x467 = 0U;
	int32_t x468 = 6;
	int32_t t82 = 3;

	t82 = (x465-((x466+x467)-x468));

	if (t82 != 11) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x469 = INT16_MIN;
	uint8_t x470 = 10U;

	t83 = (x469-((x470+x471)-x472));

	if (t83 != 4380450306171725777LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x473 = -1;
	uint64_t x474 = 17762162828153LLU;
	int8_t x476 = INT8_MIN;
	uint64_t t84 = 441217271LLU;

	t84 = (x473-((x474+x475)-x476));

	if (t84 != 18446726307251756039LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x477 = INT16_MAX;
	int8_t x478 = INT8_MAX;
	volatile int32_t x480 = -112666;
	int32_t t85 = -22;

	t85 = (x477-((x478+x479)-x480));

	if (t85 != 1276) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x486 = 134093U;
	uint16_t x487 = 14174U;
	uint16_t x488 = 4053U;
	uint32_t t86 = 8U;

	t86 = (x485-((x486+x487)-x488));

	if (t86 != 4294823081U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x490 = 6;
	static uint64_t x491 = UINT64_MAX;
	int16_t x492 = 5640;
	static uint64_t t87 = 2311LLU;

	t87 = (x489-((x490+x491)-x492));

	if (t87 != 2147489282LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x493 = 7;
	int8_t x494 = 3;
	int16_t x495 = 3;
	volatile int32_t t88 = -3168;

	t88 = (x493-((x494+x495)-x496));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x498 = 29832882U;
	static uint16_t x499 = 714U;
	int64_t t89 = 1816602409566345301LL;

	t89 = (x497-((x498+x499)-x500));

	if (t89 != -29661094LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x502 = 19LLU;
	int16_t x503 = INT16_MIN;
	uint64_t t90 = 176516840LLU;

	t90 = (x501-((x502+x503)-x504));

	if (t90 != 18446744073680168285LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x505 = 59U;
	uint16_t x506 = 10U;
	int32_t x508 = INT32_MIN;

	t91 = (x505-((x506+x507)-x508));

	if (t91 != 49U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x509 = INT8_MIN;
	int32_t x510 = -1;
	static uint8_t x511 = 2U;
	uint64_t x512 = 46LLU;
	uint64_t t92 = 219805323LLU;

	t92 = (x509-((x510+x511)-x512));

	if (t92 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x513 = -1;
	int16_t x514 = INT16_MIN;
	static int16_t x515 = -1;
	int64_t x516 = INT64_MIN;
	int64_t t93 = 224340125LL;

	t93 = (x513-((x514+x515)-x516));

	if (t93 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x517 = INT8_MIN;
	volatile uint8_t x519 = 3U;
	int8_t x520 = 0;
	int64_t t94 = -5587847589LL;

	t94 = (x517-((x518+x519)-x520));

	if (t94 != -174LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x521 = 121U;
	uint64_t x522 = UINT64_MAX;
	int16_t x523 = -1;
	uint64_t x524 = 435942787LLU;
	uint64_t t95 = 3154123328LLU;

	t95 = (x521-((x522+x523)-x524));

	if (t95 != 435942910LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x525 = 28;
	int8_t x526 = INT8_MIN;
	uint32_t x527 = 5U;
	static uint32_t t96 = 240437U;

	t96 = (x525-((x526+x527)-x528));

	if (t96 != 278U) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x529 = INT16_MIN;
	volatile int8_t x530 = INT8_MAX;
	int64_t x531 = 2854922LL;
	int64_t x532 = 11796055374LL;

	t97 = (x529-((x530+x531)-x532));

	if (t97 != 11793167557LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x533 = UINT8_MAX;
	static int8_t x534 = INT8_MIN;
	uint32_t x535 = UINT32_MAX;
	uint64_t x536 = 380199LLU;
	static volatile uint64_t t98 = 2266355528938383LLU;

	t98 = (x533-((x534+x535)-x536));

	if (t98 != 18446744069414964903LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x541 = 5U;
	uint8_t x542 = UINT8_MAX;
	static volatile int64_t x543 = 12016LL;
	int32_t x544 = -212631471;
	int64_t t99 = -63024LL;

	t99 = (x541-((x542+x543)-x544));

	if (t99 != -212643737LL) { NG(); } else { ; }
	
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

