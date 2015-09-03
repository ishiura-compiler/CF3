#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = -42;
int64_t x16 = -2946316368639LL;
int64_t t1 = 724833896055LL;
volatile uint64_t x18 = UINT64_MAX;
volatile uint64_t t2 = 11380318597923776LLU;
static int64_t x24 = -1LL;
int8_t x25 = INT8_MIN;
uint16_t x27 = 218U;
static int64_t x29 = INT64_MAX;
static volatile int32_t x30 = INT32_MAX;
static int8_t x31 = INT8_MAX;
uint16_t x56 = UINT16_MAX;
uint16_t x76 = UINT16_MAX;
uint8_t x91 = 117U;
volatile int16_t x92 = -1;
uint64_t t14 = 855273789661LLU;
volatile uint64_t t15 = 417390810LLU;
uint64_t x106 = UINT64_MAX;
int8_t x109 = 0;
volatile uint64_t t18 = 105LLU;
volatile uint8_t x121 = UINT8_MAX;
uint64_t x122 = 1631400313207LLU;
uint16_t x123 = 3U;
static volatile uint32_t t20 = 12U;
volatile int64_t t21 = 51267713LL;
uint32_t x137 = 21396U;
uint64_t t22 = 3762891620205165LLU;
int16_t x145 = INT16_MIN;
uint64_t t23 = 1977LLU;
int8_t x171 = INT8_MIN;
static int32_t x175 = -1;
int16_t x176 = -1;
static int16_t x184 = INT16_MAX;
int16_t x190 = INT16_MIN;
uint64_t x194 = 70770736929LLU;
static uint32_t x198 = 9678565U;
uint32_t x200 = 9379U;
uint32_t t31 = 10U;
uint32_t x205 = UINT32_MAX;
volatile int32_t t34 = 12;
uint16_t x221 = UINT16_MAX;
volatile uint8_t x232 = 56U;
static int8_t x233 = -1;
volatile uint64_t t39 = 23495359094LLU;
int64_t x246 = -197601846LL;
volatile int64_t t41 = -1510120112816LL;
int64_t x250 = -1LL;
volatile int32_t t43 = -1;
int8_t x258 = -1;
uint16_t x260 = 16922U;
static int8_t x262 = 28;
static int64_t t46 = -2144312763963333433LL;
int32_t t47 = -512135;
int16_t x274 = -3;
volatile uint64_t t48 = 12552384450873LLU;
static int64_t x291 = -139832169297038LL;
int16_t x303 = INT16_MIN;
uint64_t t53 = 7281330355282129LLU;
int16_t x318 = INT16_MAX;
int64_t t54 = 2152506377750597917LL;
int32_t x339 = INT32_MIN;
volatile uint64_t x340 = UINT64_MAX;
volatile int8_t x342 = -1;
int8_t x350 = 0;
volatile uint32_t t59 = 3863424U;
volatile int16_t x357 = INT16_MIN;
static int64_t t60 = -13438654180300LL;
uint16_t x380 = 61U;
uint16_t x381 = UINT16_MAX;
uint8_t x383 = 4U;
volatile int8_t x384 = -46;
int64_t x412 = -1LL;
static uint16_t x413 = 1600U;
int16_t x415 = INT16_MIN;
int32_t x427 = 3;
static volatile uint64_t x437 = UINT64_MAX;
int32_t x449 = -1;
int16_t x460 = INT16_MIN;
int64_t x463 = 481274589026LL;
uint64_t x466 = UINT64_MAX;
int8_t x469 = 0;
uint8_t x477 = UINT8_MAX;
int32_t x499 = INT32_MIN;
int16_t x510 = -1;
static volatile int8_t x512 = -1;
int32_t x518 = INT32_MAX;
uint8_t x536 = UINT8_MAX;
volatile int32_t t85 = -232;
static uint64_t x550 = 4013690469988972LLU;
uint32_t x551 = 3U;
volatile int8_t x580 = 1;
uint64_t x591 = 485342346295976980LLU;
uint64_t t93 = 6952271LLU;
static int16_t x614 = 1906;
static int8_t x639 = 0;


void f0(void) {
	static int16_t x5 = INT16_MAX;
	uint8_t x6 = 1U;
	int16_t x8 = INT16_MAX;
	int32_t t0 = 226;

	t0 = ((x5-x6)*(x7-x8));

	if (t0 != -1075019694) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x13 = -1LL;
	int8_t x14 = INT8_MIN;
	static volatile uint8_t x15 = 0U;

	t1 = ((x13-x14)*(x15-x16));

	if (t1 != 374182178817153LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MIN;
	int32_t x19 = INT32_MIN;
	int32_t x20 = -727900641;

	t2 = ((x17-x18)*(x19-x20));

	if (t2 != 9223372035435192801LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -1LL;
	static int64_t x22 = INT64_MIN;
	volatile uint64_t x23 = 30655122425505LLU;
	static volatile uint64_t t3 = 226399956563794LLU;

	t3 = ((x21-x22)*(x23-x24));

	if (t3 != 18446713418587126110LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x26 = 10368462LLU;
	int16_t x28 = INT16_MIN;
	volatile uint64_t t4 = 10113689252LLU;

	t4 = ((x25-x26)*(x27-x28));

	if (t4 != 18446743731691241876LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x32 = INT8_MAX;
	int64_t t5 = -1225LL;

	t5 = ((x29-x30)*(x31-x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = INT64_MIN;
	volatile int64_t x38 = INT64_MIN;
	volatile int16_t x39 = INT16_MIN;
	uint64_t x40 = 131315636008458758LLU;
	static volatile uint64_t t6 = 150418356LLU;

	t6 = ((x37-x38)*(x39-x40));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x41 = 1;
	uint64_t x42 = UINT64_MAX;
	int64_t x43 = INT64_MAX;
	static int16_t x44 = 1;
	volatile uint64_t t7 = 196563101LLU;

	t7 = ((x41-x42)*(x43-x44));

	if (t7 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = -2;
	int8_t x50 = -12;
	static int8_t x51 = 1;
	uint8_t x52 = UINT8_MAX;
	int32_t t8 = -15751;

	t8 = ((x49-x50)*(x51-x52));

	if (t8 != -2540) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x53 = INT8_MIN;
	static volatile int8_t x54 = INT8_MIN;
	uint8_t x55 = 114U;
	volatile int32_t t9 = -119;

	t9 = ((x53-x54)*(x55-x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = -1LL;
	static uint64_t x58 = 11LLU;
	int16_t x59 = -1;
	volatile int32_t x60 = -1;
	volatile uint64_t t10 = 2631529767255832LLU;

	t10 = ((x57-x58)*(x59-x60));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = -10351192LL;
	int32_t x62 = INT32_MIN;
	int32_t x63 = -3;
	int32_t x64 = 3754938;
	volatile int64_t t11 = 5LL;

	t11 = ((x61-x62)*(x63-x64));

	if (t11 != -8024806281465096LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x73 = INT16_MIN;
	uint16_t x74 = 0U;
	int64_t x75 = -1LL;
	volatile int64_t t12 = 1684609413706LL;

	t12 = ((x73-x74)*(x75-x76));

	if (t12 != 2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = 6U;
	uint16_t x78 = UINT16_MAX;
	static uint64_t x79 = 1897163LLU;
	int16_t x80 = INT16_MAX;
	uint64_t t13 = 150491728792LLU;

	t13 = ((x77-x78)*(x79-x80));

	if (t13 != 18446743951537546132LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int32_t x90 = INT32_MAX;

	t14 = ((x89-x90)*(x91-x92));

	if (t14 != 18446743820306481152LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int64_t x102 = 186457441LL;
	uint64_t x103 = 395964469872LLU;
	uint64_t x104 = 8320482361134LLU;

	t15 = ((x101-x102)*(x103-x104));

	if (t15 != 1843780514602379452LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x105 = 2640U;
	int64_t x107 = -1LL;
	static volatile int32_t x108 = INT32_MIN;
	uint64_t t16 = 146709LLU;

	t16 = ((x105-x106)*(x107-x108));

	if (t16 != 5671504311727LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x110 = UINT16_MAX;
	int8_t x111 = INT8_MAX;
	static volatile uint64_t x112 = UINT64_MAX;
	static uint64_t t17 = 124054085688722LLU;

	t17 = ((x109-x110)*(x111-x112));

	if (t17 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x117 = 25U;
	static int8_t x118 = INT8_MAX;
	static uint64_t x119 = UINT64_MAX;
	volatile uint32_t x120 = 394782704U;

	t18 = ((x117-x118)*(x119-x120));

	if (t18 != 40267835910LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x124 = -19743LL;
	uint64_t t19 = 1862093559LLU;

	t19 = ((x121-x122)*(x123-x124));

	if (t19 != 18414530443130001424LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x129 = INT32_MAX;
	uint8_t x130 = 1U;
	volatile uint32_t x131 = 138358U;
	volatile int16_t x132 = 64;

	t20 = ((x129-x130)*(x131-x132));

	if (t20 != 4294690708U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x133 = -922LL;
	volatile uint16_t x134 = 21063U;
	static uint16_t x135 = UINT16_MAX;
	volatile int16_t x136 = INT16_MIN;

	t21 = ((x133-x134)*(x135-x136));

	if (t21 != -2161191455LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x138 = INT32_MIN;
	volatile int8_t x139 = INT8_MIN;
	static uint64_t x140 = UINT64_MAX;

	t22 = ((x137-x138)*(x139-x140));

	if (t22 != 18446743800976411028LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x146 = UINT8_MAX;
	uint64_t x147 = UINT64_MAX;
	uint16_t x148 = 0U;

	t23 = ((x145-x146)*(x147-x148));

	if (t23 != 33023LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x153 = INT8_MAX;
	volatile int8_t x154 = INT8_MIN;
	int8_t x155 = 0;
	volatile uint8_t x156 = 69U;
	volatile int32_t t24 = -3364100;

	t24 = ((x153-x154)*(x155-x156));

	if (t24 != -17595) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x169 = -1;
	static volatile uint8_t x170 = UINT8_MAX;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t25 = -230895134;

	t25 = ((x169-x170)*(x171-x172));

	if (t25 != 98048) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x173 = -88081246601651LL;
	int8_t x174 = INT8_MIN;
	static int64_t t26 = -51734234LL;

	t26 = ((x173-x174)*(x175-x176));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x181 = 11U;
	uint64_t x182 = 13LLU;
	int32_t x183 = INT32_MAX;
	static uint64_t t27 = 399216105974LLU;

	t27 = ((x181-x182)*(x183-x184));

	if (t27 != 18446744069414649856LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x185 = -1LL;
	int8_t x186 = 1;
	int32_t x187 = -1;
	uint8_t x188 = UINT8_MAX;
	volatile int64_t t28 = -7619611439676652LL;

	t28 = ((x185-x186)*(x187-x188));

	if (t28 != 512LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x189 = 11270U;
	volatile int8_t x191 = -21;
	static uint32_t x192 = 52U;
	uint32_t t29 = 492U;

	t29 = ((x189-x190)*(x191-x192));

	if (t29 != 4291752522U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x193 = INT64_MIN;
	uint32_t x195 = 4413849U;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t30 = 753LLU;

	t30 = ((x193-x194)*(x195-x196));

	if (t30 != 8910991631777119175LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x197 = -1;
	uint32_t x199 = 53665120U;

	t31 = ((x197-x198)*(x199-x200));

	if (t31 != 2455146546U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MAX;
	volatile int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MIN;
	int64_t t32 = -4440692159851436LL;

	t32 = ((x201-x202)*(x203-x204));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x206 = INT32_MIN;
	uint32_t x207 = 26114U;
	static uint16_t x208 = 4U;
	static uint32_t t33 = 414U;

	t33 = ((x205-x206)*(x207-x208));

	if (t33 != 4294941186U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x209 = INT16_MAX;
	int8_t x210 = 16;
	uint16_t x211 = UINT16_MAX;
	int16_t x212 = 1;

	t34 = ((x209-x210)*(x211-x212));

	if (t34 != 2146304034) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x217 = UINT16_MAX;
	uint32_t x218 = 2567U;
	volatile int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MIN;
	static volatile uint32_t t35 = 348624992U;

	t35 = ((x217-x218)*(x219-x220));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x222 = UINT64_MAX;
	static uint32_t x223 = 198065U;
	uint32_t x224 = 358415019U;
	volatile uint64_t t36 = 3346006027215827LLU;

	t36 = ((x221-x222)*(x223-x224));

	if (t36 != 257998870413312LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MIN;
	int64_t x227 = 3434967221016423075LL;
	uint64_t x228 = 54466280037LLU;
	volatile uint64_t t37 = 5180150624190163190LLU;

	t37 = ((x225-x226)*(x227-x228));

	if (t37 != 5977050720149954816LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x229 = UINT16_MAX;
	volatile uint16_t x230 = 218U;
	uint16_t x231 = 5U;
	int32_t t38 = -245745;

	t38 = ((x229-x230)*(x231-x232));

	if (t38 != -3331167) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x234 = 16LLU;
	static uint64_t x235 = UINT64_MAX;
	int8_t x236 = INT8_MAX;

	t39 = ((x233-x234)*(x235-x236));

	if (t39 != 2176LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x237 = 27709287056855785LLU;
	int64_t x238 = INT64_MIN;
	uint64_t x239 = UINT64_MAX;
	static int32_t x240 = INT32_MAX;
	volatile uint64_t t40 = 32682762348476650LLU;

	t40 = ((x237-x238)*(x239-x240));

	if (t40 != 7926219395087466496LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x245 = 4U;
	int8_t x247 = INT8_MAX;
	int16_t x248 = -9414;

	t41 = ((x245-x246)*(x247-x248));

	if (t41 != 1885319250850LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x249 = -202510681;
	static int8_t x251 = INT8_MIN;
	int32_t x252 = 378;
	int64_t t42 = -337793486LL;

	t42 = ((x249-x250)*(x251-x252));

	if (t42 != 102470404080LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x253 = -1;
	int32_t x254 = -1;
	int16_t x255 = -1;
	volatile uint16_t x256 = UINT16_MAX;

	t43 = ((x253-x254)*(x255-x256));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x257 = -1;
	int16_t x259 = -674;
	volatile int32_t t44 = 16536;

	t44 = ((x257-x258)*(x259-x260));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x261 = 472U;
	static volatile int8_t x263 = INT8_MAX;
	uint64_t x264 = UINT64_MAX;
	uint64_t t45 = 1821LLU;

	t45 = ((x261-x262)*(x263-x264));

	if (t45 != 56832LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x265 = -8106143363257459LL;
	uint16_t x266 = 2U;
	int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MIN;

	t46 = ((x265-x266)*(x267-x268));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x269 = 16857;
	int16_t x270 = 1;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 128U;

	t47 = ((x269-x270)*(x271-x272));

	if (t47 != -554494976) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x273 = INT16_MIN;
	static uint64_t x275 = UINT64_MAX;
	uint32_t x276 = 2U;

	t48 = ((x273-x274)*(x275-x276));

	if (t48 != 98295LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = -6;
	int32_t x292 = -1;
	static int64_t t49 = -1LL;

	t49 = ((x289-x290)*(x291-x292));

	if (t49 != 17059524654238514LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x293 = UINT16_MAX;
	uint32_t x294 = 653483U;
	int8_t x295 = INT8_MIN;
	static volatile uint32_t x296 = 3128U;
	static uint32_t t50 = 126306233U;

	t50 = ((x293-x294)*(x295-x296));

	if (t50 != 1914358688U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x301 = -1;
	static int16_t x302 = 7;
	uint16_t x304 = 54U;
	int32_t t51 = -211;

	t51 = ((x301-x302)*(x303-x304));

	if (t51 != 262576) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x305 = INT8_MAX;
	static uint16_t x306 = 6609U;
	uint8_t x307 = 17U;
	int8_t x308 = -1;
	int32_t t52 = -1;

	t52 = ((x305-x306)*(x307-x308));

	if (t52 != -116676) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x309 = INT32_MIN;
	uint64_t x310 = 43762332LLU;
	static int8_t x311 = INT8_MIN;
	int32_t x312 = 2722;

	t53 = ((x309-x310)*(x311-x312));

	if (t53 != 6245051043000LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x317 = 0U;
	volatile int16_t x319 = 137;
	int64_t x320 = -207470LL;

	t54 = ((x317-x318)*(x319-x320));

	if (t54 != -6802658569LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x329 = 117U;
	int16_t x330 = INT16_MAX;
	int64_t x331 = -1LL;
	int8_t x332 = -34;
	volatile int64_t t55 = -21LL;

	t55 = ((x329-x330)*(x331-x332));

	if (t55 != -1077450LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x337 = 1207098433343978619LLU;
	static int8_t x338 = 3;
	volatile uint64_t t56 = 27953196857421549LLU;

	t56 = ((x337-x338)*(x339-x340));

	if (t56 != 8686734930801458296LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x341 = 5042929U;
	uint8_t x343 = 0U;
	int8_t x344 = -1;
	volatile uint32_t t57 = 108U;

	t57 = ((x341-x342)*(x343-x344));

	if (t57 != 5042930U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x349 = -1;
	int32_t x351 = -1;
	static int32_t x352 = 28711;
	int32_t t58 = -241;

	t58 = ((x349-x350)*(x351-x352));

	if (t58 != 28712) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x353 = -1;
	static volatile uint32_t x354 = 31U;
	uint16_t x355 = 3097U;
	uint16_t x356 = 83U;

	t59 = ((x353-x354)*(x355-x356));

	if (t59 != 4294870848U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x358 = 7393LL;
	static int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;

	t60 = ((x357-x358)*(x359-x360));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x377 = 1;
	volatile uint32_t x378 = 474406465U;
	int8_t x379 = -37;
	static volatile uint32_t t61 = 23511850U;

	t61 = ((x377-x378)*(x379-x380));

	if (t61 != 3542160512U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x382 = 103U;
	int32_t t62 = -5426;

	t62 = ((x381-x382)*(x383-x384));

	if (t62 != 3271600) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x389 = -1;
	uint64_t x390 = 4LLU;
	uint32_t x391 = 1195U;
	static int16_t x392 = INT16_MAX;
	volatile uint64_t t63 = 7858714753LLU;

	t63 = ((x389-x390)*(x391-x392));

	if (t63 != 18446744052234872996LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x397 = 24414140LL;
	int16_t x398 = -1;
	int16_t x399 = INT16_MAX;
	static int64_t x400 = 65296068196LL;
	volatile int64_t t64 = 9142649237692852LL;

	t64 = ((x397-x398)*(x399-x400));

	if (t64 != -1594146615704601489LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x405 = -1311LL;
	int8_t x406 = INT8_MAX;
	static uint8_t x407 = UINT8_MAX;
	int16_t x408 = -1;
	volatile int64_t t65 = -1745LL;

	t65 = ((x405-x406)*(x407-x408));

	if (t65 != -368128LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x409 = 210504405LLU;
	static int8_t x410 = INT8_MIN;
	int16_t x411 = -1;
	static volatile uint64_t t66 = 159672787449419924LLU;

	t66 = ((x409-x410)*(x411-x412));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x414 = -1LL;
	int8_t x416 = INT8_MAX;
	volatile int64_t t67 = 203728340879464460LL;

	t67 = ((x413-x414)*(x415-x416));

	if (t67 != -52664895LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x425 = INT8_MAX;
	static int8_t x426 = INT8_MIN;
	volatile uint8_t x428 = 14U;
	int32_t t68 = 88570724;

	t68 = ((x425-x426)*(x427-x428));

	if (t68 != -2805) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x438 = UINT8_MAX;
	uint16_t x439 = 28U;
	static volatile int8_t x440 = INT8_MAX;
	uint64_t t69 = 519LLU;

	t69 = ((x437-x438)*(x439-x440));

	if (t69 != 25344LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x445 = -1;
	uint64_t x446 = 10309510830438LLU;
	static int32_t x447 = -1;
	uint32_t x448 = 7618U;
	volatile uint64_t t70 = 464335783473582936LLU;

	t70 = ((x445-x446)*(x447-x448));

	if (t70 != 11699214646344221813LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x450 = -1;
	uint16_t x451 = 908U;
	int64_t x452 = -1LL;
	static int64_t t71 = 23148248LL;

	t71 = ((x449-x450)*(x451-x452));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x453 = 20U;
	uint16_t x454 = 2U;
	uint8_t x455 = UINT8_MAX;
	uint16_t x456 = 1U;
	int32_t t72 = 221996332;

	t72 = ((x453-x454)*(x455-x456));

	if (t72 != 4572) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x457 = 618469U;
	static int32_t x458 = INT32_MIN;
	volatile uint64_t x459 = 2661890935278085934LLU;
	uint64_t t73 = 1099692461396106LLU;

	t73 = ((x457-x458)*(x459-x460));

	if (t73 != 15479542264136039974LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x461 = INT8_MIN;
	int64_t x462 = -723396LL;
	uint8_t x464 = UINT8_MAX;
	volatile int64_t t74 = 4248272066LL;

	t74 = ((x461-x462)*(x463-x464));

	if (t74 != 348090509271223628LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x465 = 23233613LL;
	int8_t x467 = INT8_MAX;
	volatile uint16_t x468 = 337U;
	volatile uint64_t t75 = 812382LLU;

	t75 = ((x465-x466)*(x467-x468));

	if (t75 != 18446744068830492676LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x470 = 15155;
	int32_t x471 = -1;
	int64_t x472 = -8157122364767LL;
	volatile int64_t t76 = 10434949772047LL;

	t76 = ((x469-x470)*(x471-x472));

	if (t76 != -123621189438028730LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x473 = INT16_MAX;
	static int64_t x474 = -1LL;
	int8_t x475 = -6;
	volatile uint64_t x476 = UINT64_MAX;
	static volatile uint64_t t77 = 49312648LLU;

	t77 = ((x473-x474)*(x475-x476));

	if (t77 != 18446744073709387776LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x478 = 116U;
	uint8_t x479 = 24U;
	int16_t x480 = -1;
	volatile int32_t t78 = -260775;

	t78 = ((x477-x478)*(x479-x480));

	if (t78 != 3475) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x485 = -33442495LL;
	int64_t x486 = -293LL;
	uint32_t x487 = 65985U;
	uint8_t x488 = 1U;
	int64_t t79 = 393381091509LL;

	t79 = ((x485-x486)*(x487-x488));

	if (t79 != -2206650256768LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x493 = 714;
	static int16_t x494 = INT16_MIN;
	int64_t x495 = -1LL;
	int8_t x496 = 1;
	static volatile int64_t t80 = 8468944173250LL;

	t80 = ((x493-x494)*(x495-x496));

	if (t80 != -66964LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x497 = 27U;
	volatile int8_t x498 = INT8_MIN;
	static uint32_t x500 = UINT32_MAX;
	volatile uint32_t t81 = 0U;

	t81 = ((x497-x498)*(x499-x500));

	if (t81 != 2147483803U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x509 = -221247407LL;
	static int32_t x511 = -1954;
	volatile int64_t t82 = -531133099LL;

	t82 = ((x509-x510)*(x511-x512));

	if (t82 != 432096183918LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x513 = UINT8_MAX;
	int32_t x514 = -1;
	uint16_t x515 = 1U;
	uint8_t x516 = 31U;
	volatile int32_t t83 = 15293031;

	t83 = ((x513-x514)*(x515-x516));

	if (t83 != -7680) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x517 = INT32_MAX;
	int8_t x519 = -8;
	int16_t x520 = -243;
	int32_t t84 = -8;

	t84 = ((x517-x518)*(x519-x520));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x533 = UINT8_MAX;
	uint16_t x534 = 1U;
	volatile uint16_t x535 = 1274U;

	t85 = ((x533-x534)*(x535-x536));

	if (t85 != 258826) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x537 = 24193498U;
	static int8_t x538 = INT8_MIN;
	volatile int32_t x539 = INT32_MAX;
	static int8_t x540 = 5;
	static volatile uint32_t t86 = 42172536U;

	t86 = ((x537-x538)*(x539-x540));

	if (t86 != 4149805540U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x541 = 1;
	int16_t x542 = 52;
	volatile int16_t x543 = INT16_MIN;
	volatile uint8_t x544 = 125U;
	int32_t t87 = 19931353;

	t87 = ((x541-x542)*(x543-x544));

	if (t87 != 1677543) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x549 = -118739;
	int8_t x552 = -29;
	volatile uint64_t t88 = 520143LLU;

	t88 = ((x549-x550)*(x551-x552));

	if (t88 != 18318305978666104864LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x553 = 29714U;
	uint32_t x554 = UINT32_MAX;
	volatile int8_t x555 = 4;
	int16_t x556 = INT16_MIN;
	volatile uint32_t t89 = 11764U;

	t89 = ((x553-x554)*(x555-x556));

	if (t89 != 973819980U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x561 = 1;
	static uint8_t x562 = 107U;
	uint64_t x563 = UINT64_MAX;
	volatile int8_t x564 = INT8_MIN;
	uint64_t t90 = 14282244LLU;

	t90 = ((x561-x562)*(x563-x564));

	if (t90 != 18446744073709538154LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x573 = -60LL;
	int32_t x574 = 161;
	uint64_t x575 = 543LLU;
	int32_t x576 = INT32_MIN;
	uint64_t t91 = 23268143626777728LLU;

	t91 = ((x573-x574)*(x575-x576));

	if (t91 != 18446743599115545405LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x577 = -250;
	int32_t x578 = -225605500;
	uint16_t x579 = 7U;
	int32_t t92 = 212;

	t92 = ((x577-x578)*(x579-x580));

	if (t92 != 1353631500) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x589 = UINT32_MAX;
	static int32_t x590 = 194;
	int16_t x592 = INT16_MIN;

	t93 = ((x589-x590)*(x591-x592));

	if (t93 != 13835782677627405508LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x593 = INT16_MIN;
	volatile int16_t x594 = -1;
	int16_t x595 = 12;
	volatile uint32_t x596 = UINT32_MAX;
	uint32_t t94 = 3150177U;

	t94 = ((x593-x594)*(x595-x596));

	if (t94 != 4294541325U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x597 = INT64_MIN;
	int64_t x598 = INT64_MIN;
	static uint8_t x599 = 1U;
	uint64_t x600 = UINT64_MAX;
	uint64_t t95 = 794141808808LLU;

	t95 = ((x597-x598)*(x599-x600));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x601 = UINT64_MAX;
	volatile int8_t x602 = INT8_MAX;
	int32_t x603 = INT32_MIN;
	int64_t x604 = INT64_MIN;
	static uint64_t t96 = 27642149LLU;

	t96 = ((x601-x602)*(x603-x604));

	if (t96 != 274877906944LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x613 = -1;
	int16_t x615 = INT16_MIN;
	int8_t x616 = INT8_MAX;
	volatile int32_t t97 = 5251;

	t97 = ((x613-x614)*(x615-x616));

	if (t97 != 62730765) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x633 = UINT8_MAX;
	int16_t x634 = -1;
	uint8_t x635 = 8U;
	int16_t x636 = INT16_MAX;
	int32_t t98 = -21338566;

	t98 = ((x633-x634)*(x635-x636));

	if (t98 != -8386304) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x637 = UINT64_MAX;
	volatile int8_t x638 = INT8_MIN;
	int16_t x640 = -27;
	uint64_t t99 = 859LLU;

	t99 = ((x637-x638)*(x639-x640));

	if (t99 != 3429LLU) { NG(); } else { ; }
	
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

