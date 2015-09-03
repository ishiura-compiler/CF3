#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 310U;
volatile uint32_t x5 = 197631211U;
int32_t x8 = -1;
static volatile uint64_t x10 = 302LLU;
volatile uint64_t t2 = 81230925516417LLU;
volatile int8_t x18 = 1;
uint8_t x21 = UINT8_MAX;
volatile uint64_t x23 = 961772LLU;
volatile uint32_t x27 = UINT32_MAX;
uint32_t t6 = 388U;
static uint64_t x29 = 1LLU;
int64_t x32 = -62449LL;
volatile uint64_t t7 = 257170616LLU;
int32_t x39 = 7;
int64_t x43 = 279209926768497391LL;
uint8_t x49 = UINT8_MAX;
static uint8_t x52 = 26U;
volatile int64_t t12 = -269LL;
int8_t x65 = INT8_MIN;
volatile int32_t x67 = INT32_MIN;
uint64_t x74 = 478520785859616LLU;
uint8_t x82 = 5U;
volatile int32_t t17 = -21802621;
uint64_t x87 = UINT64_MAX;
int16_t x90 = -1;
int64_t x96 = INT64_MIN;
int16_t x105 = INT16_MIN;
int32_t t21 = 701;
int16_t x114 = INT16_MIN;
static int16_t x115 = -13;
uint32_t x124 = 1002386U;
uint8_t x145 = 1U;
volatile int32_t t27 = -887165536;
int8_t x182 = INT8_MIN;
static int64_t x183 = INT64_MAX;
uint32_t x193 = 871871941U;
volatile int16_t x206 = -9091;
static uint32_t x218 = 19487U;
uint16_t x220 = 220U;
static int16_t x230 = INT16_MIN;
int16_t x243 = -1;
int16_t x255 = -1;
volatile int32_t t47 = 2;
uint32_t t48 = 401869061U;
uint64_t x273 = 965622960LLU;
uint32_t x275 = 52678U;
uint8_t x294 = 29U;
volatile uint32_t t52 = 1717554U;
int8_t x319 = INT8_MIN;
int16_t x329 = 6;
int32_t x345 = INT32_MAX;
static volatile int64_t t57 = 1LL;
uint8_t x373 = 9U;
volatile uint64_t x386 = 3LLU;
int8_t x393 = INT8_MIN;
static int32_t x395 = INT32_MIN;
uint64_t x413 = 17543169068505752LLU;
volatile uint64_t x414 = UINT64_MAX;
uint8_t x416 = 25U;
uint32_t x426 = 545440518U;
volatile uint16_t x431 = 6579U;
uint32_t x445 = 4972U;
static volatile uint32_t t68 = 21322939U;
int16_t x454 = INT16_MAX;
int8_t x457 = -1;
uint8_t x469 = 86U;
uint64_t x484 = 246243303781410691LLU;
uint16_t x486 = 1U;
uint16_t x494 = 542U;
volatile uint32_t t77 = 5U;
uint64_t x501 = 39938844158530448LLU;
int16_t x503 = INT16_MIN;
volatile int16_t x508 = -1;
volatile uint64_t t79 = 134253LLU;
int64_t x524 = INT64_MIN;
uint64_t x525 = UINT64_MAX;
static int64_t x538 = INT64_MIN;
volatile int32_t x540 = INT32_MAX;
static uint64_t x545 = UINT64_MAX;
uint64_t x551 = 21594639560LLU;
volatile uint64_t x555 = 3184562298000231LLU;
static int64_t x558 = INT64_MIN;
int16_t x569 = INT16_MAX;
int16_t x572 = INT16_MIN;
uint32_t x576 = 6393U;
volatile int64_t x579 = -292815182LL;
int16_t x607 = INT16_MIN;
static volatile uint64_t t93 = 3024LLU;
static volatile int32_t x631 = -102542466;
static int64_t x632 = INT64_MIN;
uint16_t x645 = UINT16_MAX;
static int32_t x648 = -326200;
volatile uint32_t t96 = 12U;
uint64_t x649 = 7290LLU;
volatile uint16_t x653 = 11U;


void f0(void) {
	uint32_t x1 = 1728451837U;
	static int32_t x2 = INT32_MIN;
	static int16_t x3 = 9;
	uint16_t x4 = 10U;

	t0 = ((x1-x2)>>(x3==x4));

	if (t0 != 3875935485U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = INT8_MAX;
	int16_t x7 = 6;
	volatile uint32_t t1 = 215U;

	t1 = ((x5-x6)>>(x7==x8));

	if (t1 != 197631084U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int32_t x11 = -1;
	volatile int16_t x12 = INT16_MIN;

	t2 = ((x9-x10)>>(x11==x12));

	if (t2 != 18446744073709518546LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1971;
	int16_t x14 = INT16_MIN;
	volatile int32_t x15 = -1;
	static uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = -195160;

	t3 = ((x13-x14)>>(x15==x16));

	if (t3 != 15398) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	uint64_t x19 = 1482262LLU;
	int32_t x20 = 164626618;
	volatile int32_t t4 = 6871;

	t4 = ((x17-x18)>>(x19==x20));

	if (t4 != 32766) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x22 = -14022878LL;
	int8_t x24 = -1;
	volatile int64_t t5 = 7082607273786LL;

	t5 = ((x21-x22)>>(x23==x24));

	if (t5 != 14023133LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 43499835U;
	volatile int8_t x26 = 2;
	int32_t x28 = -1;

	t6 = ((x25-x26)>>(x27==x28));

	if (t6 != 21749916U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MIN;
	uint64_t x31 = 33460913687591LLU;

	t7 = ((x29-x30)>>(x31==x32));

	if (t7 != 2147483649LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MAX;
	volatile uint64_t x34 = 33434933LLU;
	int16_t x35 = INT16_MIN;
	static volatile int64_t x36 = 7930561LL;
	uint64_t t8 = 2954021LLU;

	t8 = ((x33-x34)>>(x35==x36));

	if (t8 != 9223372036821340874LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint32_t x38 = 347734195U;
	volatile uint64_t x40 = 990815LLU;
	uint32_t t9 = 4U;

	t9 = ((x37-x38)>>(x39==x40));

	if (t9 != 3947232973U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	int64_t x42 = INT64_MIN;
	int64_t x44 = -48883280062570913LL;
	int64_t t10 = -4183599949048108LL;

	t10 = ((x41-x42)>>(x43==x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -536;
	static int16_t x46 = INT16_MIN;
	uint32_t x47 = 23360451U;
	uint32_t x48 = 25U;
	int32_t t11 = -85130;

	t11 = ((x45-x46)>>(x47==x48));

	if (t11 != 32232) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = 15LL;
	static int64_t x51 = -1LL;

	t12 = ((x49-x50)>>(x51==x52));

	if (t12 != 240LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	static int8_t x58 = 4;
	uint32_t x59 = UINT32_MAX;
	int32_t x60 = -358;
	int32_t t13 = -117;

	t13 = ((x57-x58)>>(x59==x60));

	if (t13 != 2147483643) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x66 = 43U;
	uint8_t x68 = UINT8_MAX;
	static uint32_t t14 = 997U;

	t14 = ((x65-x66)>>(x67==x68));

	if (t14 != 4294967125U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 18U;
	uint64_t x70 = UINT64_MAX;
	int32_t x71 = -1;
	int32_t x72 = INT32_MIN;
	volatile uint64_t t15 = 21444401428LLU;

	t15 = ((x69-x70)>>(x71==x72));

	if (t15 != 19LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x73 = 0U;
	volatile int16_t x75 = INT16_MIN;
	int8_t x76 = -1;
	uint64_t t16 = 258862123893LLU;

	t16 = ((x73-x74)>>(x75==x76));

	if (t16 != 18446265552923692000LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x81 = INT8_MAX;
	int32_t x83 = -1;
	static int64_t x84 = -1LL;

	t17 = ((x81-x82)>>(x83==x84));

	if (t17 != 61) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = 1537782;
	uint64_t x86 = 13360LLU;
	static int8_t x88 = -1;
	volatile uint64_t t18 = 936647LLU;

	t18 = ((x85-x86)>>(x87==x88));

	if (t18 != 762211LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	uint16_t x91 = 1535U;
	static int16_t x92 = -231;
	volatile int32_t t19 = -454;

	t19 = ((x89-x90)>>(x91==x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x93 = -1LL;
	uint64_t x94 = UINT64_MAX;
	volatile int64_t x95 = -1LL;
	uint64_t t20 = 700981561582LLU;

	t20 = ((x93-x94)>>(x95==x96));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x106 = INT32_MIN;
	int64_t x107 = -1LL;
	int16_t x108 = -1;

	t21 = ((x105-x106)>>(x107==x108));

	if (t21 != 1073725440) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x113 = 1333;
	volatile int8_t x116 = INT8_MIN;
	static int32_t t22 = -5;

	t22 = ((x113-x114)>>(x115==x116));

	if (t22 != 34101) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x117 = 12;
	int64_t x118 = -1LL;
	uint64_t x119 = UINT64_MAX;
	uint8_t x120 = 105U;
	int64_t t23 = -1LL;

	t23 = ((x117-x118)>>(x119==x120));

	if (t23 != 13LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x121 = 4U;
	static int8_t x122 = -31;
	uint16_t x123 = 159U;
	int32_t t24 = -4;

	t24 = ((x121-x122)>>(x123==x124));

	if (t24 != 35) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x125 = UINT64_MAX;
	volatile int64_t x126 = INT64_MIN;
	volatile int64_t x127 = INT64_MAX;
	uint16_t x128 = UINT16_MAX;
	volatile uint64_t t25 = 687369LLU;

	t25 = ((x125-x126)>>(x127==x128));

	if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x133 = UINT64_MAX;
	volatile int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MAX;
	uint32_t x136 = 4010U;
	volatile uint64_t t26 = 170546426LLU;

	t26 = ((x133-x134)>>(x135==x136));

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x146 = -1;
	int64_t x147 = INT64_MAX;
	int64_t x148 = -1LL;

	t27 = ((x145-x146)>>(x147==x148));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x149 = 5816653364127667620LLU;
	uint16_t x150 = 623U;
	int64_t x151 = 1488LL;
	int32_t x152 = -1;
	uint64_t t28 = 1520966856376424LLU;

	t28 = ((x149-x150)>>(x151==x152));

	if (t28 != 5816653364127666997LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = -1;
	static uint64_t x158 = 52799LLU;
	int64_t x159 = INT64_MAX;
	static int16_t x160 = INT16_MAX;
	volatile uint64_t t29 = 8341044LLU;

	t29 = ((x157-x158)>>(x159==x160));

	if (t29 != 18446744073709498816LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x161 = INT64_MAX;
	static int16_t x162 = 1;
	int8_t x163 = 0;
	volatile int16_t x164 = INT16_MIN;
	volatile int64_t t30 = -85221404936400LL;

	t30 = ((x161-x162)>>(x163==x164));

	if (t30 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x169 = -1;
	volatile int32_t x170 = INT32_MIN;
	static uint16_t x171 = 15702U;
	int64_t x172 = INT64_MAX;
	volatile int32_t t31 = INT32_MAX;

	t31 = ((x169-x170)>>(x171==x172));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x173 = INT16_MAX;
	static uint64_t x174 = UINT64_MAX;
	int8_t x175 = INT8_MIN;
	int16_t x176 = -15;
	uint64_t t32 = 123544037248733286LLU;

	t32 = ((x173-x174)>>(x175==x176));

	if (t32 != 32768LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = 49;
	uint32_t x178 = UINT32_MAX;
	uint8_t x179 = 52U;
	volatile uint8_t x180 = UINT8_MAX;
	uint32_t t33 = 500051186U;

	t33 = ((x177-x178)>>(x179==x180));

	if (t33 != 50U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = -1LL;
	int8_t x184 = -1;
	int64_t t34 = -2221LL;

	t34 = ((x181-x182)>>(x183==x184));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x189 = UINT16_MAX;
	int32_t x190 = -58370;
	static int32_t x191 = -2775280;
	static uint64_t x192 = 1038356543LLU;
	int32_t t35 = -812387947;

	t35 = ((x189-x190)>>(x191==x192));

	if (t35 != 123905) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x194 = -1;
	int16_t x195 = INT16_MIN;
	int16_t x196 = -3;
	uint32_t t36 = 1U;

	t36 = ((x193-x194)>>(x195==x196));

	if (t36 != 871871942U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = INT32_MAX;
	int64_t x202 = -1LL;
	static uint64_t x203 = 134730660LLU;
	int64_t x204 = INT64_MIN;
	static volatile int64_t t37 = -39738758LL;

	t37 = ((x201-x202)>>(x203==x204));

	if (t37 != 2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x205 = 352548568LLU;
	int64_t x207 = INT64_MAX;
	static int16_t x208 = INT16_MIN;
	static uint64_t t38 = 25LLU;

	t38 = ((x205-x206)>>(x207==x208));

	if (t38 != 352557659LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x213 = 0;
	int8_t x214 = INT8_MIN;
	static uint16_t x215 = UINT16_MAX;
	static int16_t x216 = INT16_MIN;
	static int32_t t39 = 213983;

	t39 = ((x213-x214)>>(x215==x216));

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x217 = 381U;
	volatile int8_t x219 = 0;
	volatile uint32_t t40 = 1041U;

	t40 = ((x217-x218)>>(x219==x220));

	if (t40 != 4294948190U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x229 = 1;
	int64_t x231 = INT64_MIN;
	static int32_t x232 = -1;
	volatile int32_t t41 = 2039;

	t41 = ((x229-x230)>>(x231==x232));

	if (t41 != 32769) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x233 = 200;
	int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MIN;
	int32_t x236 = INT32_MIN;
	int32_t t42 = 503;

	t42 = ((x233-x234)>>(x235==x236));

	if (t42 != 32968) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x237 = 1687711676LL;
	int32_t x238 = -1;
	int32_t x239 = INT32_MAX;
	int8_t x240 = INT8_MIN;
	static int64_t t43 = 533078408700553LL;

	t43 = ((x237-x238)>>(x239==x240));

	if (t43 != 1687711677LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x241 = 65373U;
	int64_t x242 = -1LL;
	volatile int16_t x244 = -1;
	int64_t t44 = -1LL;

	t44 = ((x241-x242)>>(x243==x244));

	if (t44 != 32687LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x245 = UINT32_MAX;
	uint8_t x246 = 1U;
	int8_t x247 = INT8_MIN;
	static int32_t x248 = INT32_MIN;
	uint32_t t45 = 652811U;

	t45 = ((x245-x246)>>(x247==x248));

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x253 = INT8_MIN;
	volatile int16_t x254 = -1135;
	int16_t x256 = 4203;
	volatile int32_t t46 = 364;

	t46 = ((x253-x254)>>(x255==x256));

	if (t46 != 1007) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = INT16_MAX;
	int16_t x258 = 1;
	uint64_t x259 = UINT64_MAX;
	int64_t x260 = 44266457LL;

	t47 = ((x257-x258)>>(x259==x260));

	if (t47 != 32766) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x261 = INT8_MAX;
	uint32_t x262 = 3U;
	int8_t x263 = 6;
	uint16_t x264 = 3U;

	t48 = ((x261-x262)>>(x263==x264));

	if (t48 != 124U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x274 = UINT8_MAX;
	volatile int16_t x276 = -1;
	static volatile uint64_t t49 = 6LLU;

	t49 = ((x273-x274)>>(x275==x276));

	if (t49 != 965622705LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x281 = 401676285;
	static int8_t x282 = -1;
	static int16_t x283 = -1;
	static uint8_t x284 = 1U;
	volatile int32_t t50 = -278969;

	t50 = ((x281-x282)>>(x283==x284));

	if (t50 != 401676286) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x293 = UINT16_MAX;
	uint64_t x295 = 3610207LLU;
	int64_t x296 = INT64_MIN;
	static volatile int32_t t51 = 771790350;

	t51 = ((x293-x294)>>(x295==x296));

	if (t51 != 65506) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x301 = 503U;
	static uint16_t x302 = 343U;
	int16_t x303 = INT16_MIN;
	uint8_t x304 = 2U;

	t52 = ((x301-x302)>>(x303==x304));

	if (t52 != 160U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x317 = -94;
	uint32_t x318 = 3U;
	int8_t x320 = 4;
	static volatile uint32_t t53 = 380U;

	t53 = ((x317-x318)>>(x319==x320));

	if (t53 != 4294967199U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x330 = -9;
	uint64_t x331 = 63LLU;
	volatile int16_t x332 = -1;
	int32_t t54 = 2;

	t54 = ((x329-x330)>>(x331==x332));

	if (t54 != 15) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x346 = 4U;
	static volatile uint16_t x347 = 1U;
	uint32_t x348 = 3314U;
	int32_t t55 = -927211;

	t55 = ((x345-x346)>>(x347==x348));

	if (t55 != 2147483643) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x353 = 95LLU;
	int32_t x354 = -9754196;
	int64_t x355 = -1LL;
	int8_t x356 = -1;
	uint64_t t56 = 109625131697754LLU;

	t56 = ((x353-x354)>>(x355==x356));

	if (t56 != 4877145LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x357 = 3;
	int64_t x358 = -1LL;
	static int32_t x359 = -1;
	static int8_t x360 = -1;

	t57 = ((x357-x358)>>(x359==x360));

	if (t57 != 2LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x365 = -2;
	uint64_t x366 = UINT64_MAX;
	uint8_t x367 = UINT8_MAX;
	uint16_t x368 = UINT16_MAX;
	static uint64_t t58 = UINT64_MAX;

	t58 = ((x365-x366)>>(x367==x368));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x374 = -7612;
	int8_t x375 = INT8_MIN;
	int64_t x376 = 316523LL;
	static volatile int32_t t59 = -1;

	t59 = ((x373-x374)>>(x375==x376));

	if (t59 != 7621) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x377 = -1LL;
	int16_t x378 = -1;
	int8_t x379 = 1;
	static volatile uint8_t x380 = UINT8_MAX;
	int64_t t60 = -3718565825994LL;

	t60 = ((x377-x378)>>(x379==x380));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x385 = -1;
	int64_t x387 = -1LL;
	static volatile int16_t x388 = 16132;
	uint64_t t61 = 218LLU;

	t61 = ((x385-x386)>>(x387==x388));

	if (t61 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x394 = UINT32_MAX;
	int32_t x396 = INT32_MIN;
	uint32_t t62 = 48332U;

	t62 = ((x393-x394)>>(x395==x396));

	if (t62 != 2147483584U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x401 = -115325LL;
	int64_t x402 = INT64_MIN;
	uint8_t x403 = UINT8_MAX;
	int16_t x404 = INT16_MIN;
	volatile int64_t t63 = 3596LL;

	t63 = ((x401-x402)>>(x403==x404));

	if (t63 != 9223372036854660483LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x415 = INT32_MIN;
	uint64_t t64 = 12989310LLU;

	t64 = ((x413-x414)>>(x415==x416));

	if (t64 != 17543169068505753LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x421 = INT16_MIN;
	volatile uint64_t x422 = 8255553327229876496LLU;
	static int32_t x423 = 1562;
	volatile int16_t x424 = -1;
	volatile uint64_t t65 = 98045736LLU;

	t65 = ((x421-x422)>>(x423==x424));

	if (t65 != 10191190746479642352LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x425 = 58;
	int16_t x427 = INT16_MAX;
	uint8_t x428 = 21U;
	volatile uint32_t t66 = 19677U;

	t66 = ((x425-x426)>>(x427==x428));

	if (t66 != 3749526836U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x429 = 0;
	int64_t x430 = -1LL;
	int16_t x432 = INT16_MIN;
	static int64_t t67 = 27684889992LL;

	t67 = ((x429-x430)>>(x431==x432));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x446 = 103U;
	uint16_t x447 = 877U;
	int16_t x448 = -8;

	t68 = ((x445-x446)>>(x447==x448));

	if (t68 != 4869U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x449 = 43;
	static int16_t x450 = INT16_MIN;
	int16_t x451 = -3369;
	int16_t x452 = 119;
	static int32_t t69 = 197;

	t69 = ((x449-x450)>>(x451==x452));

	if (t69 != 32811) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x453 = INT32_MAX;
	int32_t x455 = 1171766;
	int64_t x456 = INT64_MIN;
	volatile int32_t t70 = -13752;

	t70 = ((x453-x454)>>(x455==x456));

	if (t70 != 2147450880) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x458 = INT8_MIN;
	uint64_t x459 = UINT64_MAX;
	static int32_t x460 = INT32_MIN;
	volatile int32_t t71 = -859917979;

	t71 = ((x457-x458)>>(x459==x460));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x461 = UINT8_MAX;
	int16_t x462 = -1;
	uint32_t x463 = 61120U;
	uint32_t x464 = UINT32_MAX;
	volatile int32_t t72 = 0;

	t72 = ((x461-x462)>>(x463==x464));

	if (t72 != 256) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x465 = INT8_MAX;
	uint64_t x466 = 100667838LLU;
	volatile uint8_t x467 = 0U;
	int64_t x468 = INT64_MAX;
	volatile uint64_t t73 = 75655438LLU;

	t73 = ((x465-x466)>>(x467==x468));

	if (t73 != 18446744073608883905LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x470 = 17331LLU;
	int16_t x471 = INT16_MIN;
	int32_t x472 = -1;
	static uint64_t t74 = 508005LLU;

	t74 = ((x469-x470)>>(x471==x472));

	if (t74 != 18446744073709534371LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x481 = UINT64_MAX;
	int32_t x482 = -1;
	uint16_t x483 = 1U;
	uint64_t t75 = 263165798LLU;

	t75 = ((x481-x482)>>(x483==x484));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x485 = UINT64_MAX;
	uint32_t x487 = UINT32_MAX;
	static uint64_t x488 = 851781679710LLU;
	volatile uint64_t t76 = 28644200952039687LLU;

	t76 = ((x485-x486)>>(x487==x488));

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x493 = 753132583U;
	static int8_t x495 = INT8_MAX;
	static int32_t x496 = INT32_MAX;

	t77 = ((x493-x494)>>(x495==x496));

	if (t77 != 753132041U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x502 = INT8_MIN;
	uint8_t x504 = 0U;
	static uint64_t t78 = 9188986277435LLU;

	t78 = ((x501-x502)>>(x503==x504));

	if (t78 != 39938844158530576LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x505 = UINT32_MAX;
	uint64_t x506 = 1655065984778403154LLU;
	uint64_t x507 = UINT64_MAX;

	t79 = ((x505-x506)>>(x507==x508));

	if (t79 != 8395839046613057878LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x521 = UINT16_MAX;
	volatile int64_t x522 = -2062220478141LL;
	int8_t x523 = -1;
	static volatile int64_t t80 = -3676645892468LL;

	t80 = ((x521-x522)>>(x523==x524));

	if (t80 != 2062220543676LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x526 = INT64_MIN;
	volatile uint64_t x527 = 2LLU;
	uint8_t x528 = 0U;
	uint64_t t81 = 45344272923317291LLU;

	t81 = ((x525-x526)>>(x527==x528));

	if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x537 = INT8_MIN;
	int16_t x539 = -19;
	int64_t t82 = 684LL;

	t82 = ((x537-x538)>>(x539==x540));

	if (t82 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x541 = 88U;
	int8_t x542 = INT8_MIN;
	uint16_t x543 = 1U;
	int16_t x544 = 42;
	static volatile int32_t t83 = 78;

	t83 = ((x541-x542)>>(x543==x544));

	if (t83 != 216) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x546 = -1;
	static int16_t x547 = 0;
	int32_t x548 = INT32_MIN;
	static uint64_t t84 = 0LLU;

	t84 = ((x545-x546)>>(x547==x548));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x549 = 0U;
	uint32_t x550 = 33534727U;
	volatile int64_t x552 = 300868030207132LL;
	uint32_t t85 = 2310U;

	t85 = ((x549-x550)>>(x551==x552));

	if (t85 != 4261432569U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x553 = 5740594054LL;
	static uint16_t x554 = 1U;
	volatile int32_t x556 = -142240848;
	int64_t t86 = -3154502652460LL;

	t86 = ((x553-x554)>>(x555==x556));

	if (t86 != 5740594053LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x557 = -10430715699027LL;
	volatile uint16_t x559 = UINT16_MAX;
	uint16_t x560 = 6346U;
	volatile int64_t t87 = 830654577LL;

	t87 = ((x557-x558)>>(x559==x560));

	if (t87 != 9223361606139076781LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x570 = -1;
	int32_t x571 = INT32_MAX;
	int32_t t88 = 3;

	t88 = ((x569-x570)>>(x571==x572));

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x573 = 32U;
	uint16_t x574 = UINT16_MAX;
	static uint8_t x575 = 0U;
	volatile uint32_t t89 = 3U;

	t89 = ((x573-x574)>>(x575==x576));

	if (t89 != 4294901793U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x577 = INT8_MIN;
	static int32_t x578 = -456588;
	static uint16_t x580 = 9U;
	volatile int32_t t90 = -4006844;

	t90 = ((x577-x578)>>(x579==x580));

	if (t90 != 456460) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x605 = INT8_MAX;
	int8_t x606 = -1;
	int8_t x608 = -1;
	int32_t t91 = -32;

	t91 = ((x605-x606)>>(x607==x608));

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x609 = UINT16_MAX;
	uint64_t x610 = UINT64_MAX;
	volatile uint16_t x611 = 173U;
	uint16_t x612 = 6U;
	volatile uint64_t t92 = 1LLU;

	t92 = ((x609-x610)>>(x611==x612));

	if (t92 != 65536LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x613 = 1569LLU;
	uint16_t x614 = UINT16_MAX;
	int32_t x615 = INT32_MIN;
	static uint16_t x616 = UINT16_MAX;

	t93 = ((x613-x614)>>(x615==x616));

	if (t93 != 18446744073709487650LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x625 = 1600293;
	int8_t x626 = INT8_MAX;
	static int32_t x627 = INT32_MIN;
	volatile int64_t x628 = -1LL;
	volatile int32_t t94 = -2578;

	t94 = ((x625-x626)>>(x627==x628));

	if (t94 != 1600166) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x629 = 497U;
	uint8_t x630 = 2U;
	uint32_t t95 = 21497U;

	t95 = ((x629-x630)>>(x631==x632));

	if (t95 != 495U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x646 = 419425U;
	int32_t x647 = 190975665;

	t96 = ((x645-x646)>>(x647==x648));

	if (t96 != 4294613406U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x650 = INT16_MIN;
	uint16_t x651 = UINT16_MAX;
	uint16_t x652 = UINT16_MAX;
	static uint64_t t97 = 259342013776601LLU;

	t97 = ((x649-x650)>>(x651==x652));

	if (t97 != 20029LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x654 = -1LL;
	static int16_t x655 = INT16_MAX;
	int32_t x656 = -96622;
	volatile int64_t t98 = 3303426969LL;

	t98 = ((x653-x654)>>(x655==x656));

	if (t98 != 12LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x657 = UINT8_MAX;
	int32_t x658 = 39;
	uint32_t x659 = 106U;
	int8_t x660 = INT8_MIN;
	volatile int32_t t99 = -60;

	t99 = ((x657-x658)>>(x659==x660));

	if (t99 != 216) { NG(); } else { ; }
	
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

