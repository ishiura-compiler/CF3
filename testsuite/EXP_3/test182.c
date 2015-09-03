#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -3;
volatile uint16_t x19 = UINT16_MAX;
volatile uint64_t t4 = 1063550445324LLU;
static int16_t x28 = 312;
int16_t x29 = 2;
int8_t x40 = -1;
int32_t t7 = -104555;
static uint8_t x44 = 16U;
static volatile uint64_t t8 = 52LLU;
int8_t x55 = -1;
int16_t x72 = -1;
int8_t x75 = 12;
uint8_t x78 = 29U;
int16_t x79 = -229;
volatile uint32_t t14 = 39385U;
uint8_t x105 = 1U;
uint16_t x107 = 15U;
int16_t x120 = INT16_MAX;
volatile int64_t x123 = 10304709833LL;
uint64_t x124 = 201065LLU;
uint64_t t20 = 949216737281532LLU;
uint8_t x138 = 14U;
volatile int64_t x145 = INT64_MIN;
volatile uint32_t x153 = 1780315192U;
int8_t x162 = INT8_MIN;
static volatile uint64_t x163 = 437650LLU;
volatile int32_t x164 = INT32_MIN;
int16_t x166 = INT16_MAX;
volatile uint8_t x172 = UINT8_MAX;
volatile int64_t t30 = 41290912799745000LL;
static int32_t x177 = -1;
volatile uint16_t x178 = 0U;
uint8_t x187 = 1U;
uint32_t x188 = 778U;
static int8_t x195 = INT8_MIN;
int16_t x196 = INT16_MIN;
uint16_t x198 = 623U;
int8_t x199 = INT8_MIN;
static uint32_t x202 = UINT32_MAX;
volatile uint32_t t37 = 129414U;
volatile int64_t x206 = -1277622LL;
int16_t x208 = -1;
int64_t t38 = 13855307LL;
int32_t t39 = -231773258;
int32_t x214 = -1;
int16_t x215 = -1;
uint64_t t42 = 7782329167LLU;
int8_t x232 = -1;
volatile int32_t x234 = -25;
static volatile uint64_t x235 = 126462LLU;
int32_t x236 = -7;
static uint64_t t44 = 549119357LLU;
uint64_t x245 = 961397591208LLU;
uint8_t x247 = 5U;
int64_t x262 = 11LL;
uint64_t t49 = 191LLU;
int32_t x271 = -1;
int64_t x282 = -1LL;
int16_t x303 = INT16_MIN;
volatile uint64_t t54 = 35LLU;
int64_t x305 = 5176915683LL;
int64_t t55 = -100474693125813022LL;
uint32_t x318 = 13763386U;
uint16_t x319 = UINT16_MAX;
volatile uint64_t t58 = 1534563371121043289LLU;
uint32_t x327 = 7U;
volatile uint16_t x328 = 3955U;
static volatile int32_t x330 = -1;
static uint32_t x334 = 3429U;
int64_t x335 = 2946661064436174395LL;
volatile uint8_t x341 = UINT8_MAX;
static uint64_t x344 = UINT64_MAX;
static int16_t x352 = -1;
uint16_t x360 = UINT16_MAX;
uint64_t x365 = 1050712345885LLU;
uint64_t x370 = UINT64_MAX;
uint64_t x375 = 192663255LLU;
int32_t x389 = INT32_MAX;
int32_t t74 = 751696;
uint32_t x415 = 916934325U;
volatile uint64_t t76 = 3350LLU;
uint8_t x421 = UINT8_MAX;
int64_t x422 = -1LL;
volatile int32_t x438 = INT32_MIN;
int64_t x440 = 16215589482320LL;
static int8_t x454 = 1;
uint16_t x458 = 12065U;
static int16_t x459 = -1;
volatile uint64_t t87 = 1762377627LLU;
int64_t x476 = -12402LL;
volatile int64_t t88 = -3987734LL;
int8_t x487 = 2;
volatile int64_t t90 = 29101580LL;
static uint64_t x494 = 227163093394LLU;
static volatile uint64_t x498 = 17420LLU;
int16_t x499 = 19;
uint64_t t93 = 15546678800889LLU;
int64_t x502 = 57LL;
uint8_t x509 = UINT8_MAX;
static volatile int64_t t96 = 46LL;
int16_t x516 = INT16_MIN;
int8_t x523 = INT8_MIN;


void f0(void) {
	volatile uint8_t x1 = 7U;
	int8_t x2 = -1;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 643;

	t0 = ((x1+x2)^(x3-x4));

	if (t0 != -32776) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 70320U;
	int16_t x6 = INT16_MIN;
	int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MIN;
	int64_t t1 = -17254968165368LL;

	t1 = ((x5+x6)^(x7-x8));

	if (t1 != -9223372034707254608LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 3U;
	int8_t x14 = 7;
	static uint8_t x15 = 66U;
	int8_t x16 = -1;
	volatile int32_t t2 = 0;

	t2 = ((x13+x14)^(x15-x16));

	if (t2 != 73) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	int8_t x18 = -1;
	int8_t x20 = INT8_MIN;
	int32_t t3 = 3984;

	t3 = ((x17+x18)^(x19-x20));

	if (t3 != -65663) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint16_t x22 = 2511U;
	int32_t x23 = -1;
	uint64_t x24 = 19366239LLU;

	t4 = ((x21+x22)^(x23-x24));

	if (t4 != 18446744073690183663LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	int32_t x26 = -58813332;
	uint32_t x27 = UINT32_MAX;
	uint32_t t5 = 2U;

	t5 = ((x25+x26)^(x27-x28));

	if (t5 != 58813356U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x30 = UINT32_MAX;
	volatile int8_t x31 = INT8_MAX;
	int64_t x32 = 7934LL;
	int64_t t6 = -122385236LL;

	t6 = ((x29+x30)^(x31-x32));

	if (t6 != -7808LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = -14484;
	int16_t x38 = -1;
	volatile uint16_t x39 = UINT16_MAX;

	t7 = ((x37+x38)^(x39-x40));

	if (t7 != -80021) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x41 = 52825529103354463LLU;
	int16_t x42 = 785;
	static uint8_t x43 = 11U;

	t8 = ((x41+x42)^(x43-x44));

	if (t8 != 18393918544606196363LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x53 = UINT32_MAX;
	int16_t x54 = -1;
	volatile int32_t x56 = INT32_MAX;
	static volatile uint32_t t9 = 40603202U;

	t9 = ((x53+x54)^(x55-x56));

	if (t9 != 2147483646U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 1U;
	static int64_t x58 = INT64_MIN;
	int64_t x59 = 827144499911330531LL;
	static int8_t x60 = INT8_MAX;
	int64_t t10 = 1921851173LL;

	t10 = ((x57+x58)^(x59-x60));

	if (t10 != -8396227536943445403LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MIN;
	static uint32_t x70 = UINT32_MAX;
	volatile int8_t x71 = 1;
	uint32_t t11 = 713940U;

	t11 = ((x69+x70)^(x71-x72));

	if (t11 != 4294934525U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x73 = 308647398U;
	static int64_t x74 = -51324739LL;
	static volatile int8_t x76 = INT8_MIN;
	int64_t t12 = 677179138508LL;

	t12 = ((x73+x74)^(x75-x76));

	if (t12 != 257322543LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x77 = -1;
	static volatile int8_t x80 = INT8_MAX;
	int32_t t13 = 92;

	t13 = ((x77+x78)^(x79-x80));

	if (t13 != -384) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x81 = INT16_MAX;
	int16_t x82 = 1215;
	static uint32_t x83 = UINT32_MAX;
	uint8_t x84 = 3U;

	t14 = ((x81+x82)^(x83-x84));

	if (t14 != 4294933314U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = INT32_MAX;
	int16_t x86 = INT16_MIN;
	volatile uint16_t x87 = UINT16_MAX;
	static uint16_t x88 = 30U;
	int32_t t15 = -107;

	t15 = ((x85+x86)^(x87-x88));

	if (t15 != 2147450910) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = 1;
	static volatile uint16_t x91 = UINT16_MAX;
	uint32_t x92 = UINT32_MAX;
	uint32_t t16 = 105142U;

	t16 = ((x89+x90)^(x91-x92));

	if (t16 != 2147549185U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x93 = 2405424793LL;
	static int16_t x94 = 581;
	volatile int8_t x95 = INT8_MAX;
	int32_t x96 = 585980;
	static int64_t t17 = 5907141LL;

	t17 = ((x93+x94)^(x95-x96));

	if (t17 != -2404847779LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x106 = 56;
	volatile int64_t x108 = -874429295473892LL;
	int64_t t18 = 218LL;

	t18 = ((x105+x106)^(x107-x108));

	if (t18 != 874429295473866LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x117 = -1LL;
	volatile int64_t x118 = 645240548905LL;
	static int8_t x119 = -1;
	int64_t t19 = -2800910209LL;

	t19 = ((x117+x118)^(x119-x120));

	if (t19 != -645240525272LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x121 = UINT16_MAX;
	volatile int8_t x122 = -1;

	t20 = ((x121+x122)^(x123-x124));

	if (t20 != 10304531614LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x125 = 3836LLU;
	int8_t x126 = -1;
	int16_t x127 = INT16_MIN;
	int64_t x128 = -1LL;
	volatile uint64_t t21 = 2578359529389139287LLU;

	t21 = ((x125+x126)^(x127-x128));

	if (t21 != 18446744073709522682LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x129 = 1894U;
	int16_t x130 = INT16_MIN;
	volatile int16_t x131 = INT16_MAX;
	int16_t x132 = -1;
	static volatile int32_t t22 = -12;

	t22 = ((x129+x130)^(x131-x132));

	if (t22 != -63642) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x137 = UINT16_MAX;
	int16_t x139 = -1;
	static uint64_t x140 = 6152LLU;
	static volatile uint64_t t23 = 157LLU;

	t23 = ((x137+x138)^(x139-x140));

	if (t23 != 18446744073709479930LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x146 = 3528U;
	volatile int8_t x147 = 61;
	int8_t x148 = INT8_MIN;
	int64_t t24 = 2269878791LL;

	t24 = ((x145+x146)^(x147-x148));

	if (t24 != -9223372036854772363LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = INT8_MAX;
	int8_t x150 = -1;
	uint64_t x151 = UINT64_MAX;
	static int8_t x152 = INT8_MIN;
	volatile uint64_t t25 = 1521308797LLU;

	t25 = ((x149+x150)^(x151-x152));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x154 = INT8_MIN;
	int64_t x155 = -182LL;
	uint32_t x156 = UINT32_MAX;
	volatile int64_t t26 = -4983LL;

	t26 = ((x153+x154)^(x155-x156));

	if (t26 != -6075282189LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x157 = -1;
	static uint8_t x158 = UINT8_MAX;
	static int32_t x159 = INT32_MIN;
	int32_t x160 = -1;
	int32_t t27 = -1784605;

	t27 = ((x157+x158)^(x159-x160));

	if (t27 != -2147483393) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x161 = INT8_MIN;
	static volatile uint64_t t28 = 2761861LLU;

	t28 = ((x161+x162)^(x163-x164));

	if (t28 != 18446744071561630354LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x165 = INT8_MIN;
	volatile int8_t x167 = -23;
	uint8_t x168 = 38U;
	volatile int32_t t29 = 229;

	t29 = ((x165+x166)^(x167-x168));

	if (t29 != -32580) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x169 = -1;
	volatile int16_t x170 = INT16_MIN;
	int64_t x171 = -24LL;

	t30 = ((x169+x170)^(x171-x172));

	if (t30 != 33046LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x179 = -4775307758750LL;
	static volatile uint64_t x180 = 391671550978LLU;
	uint64_t t31 = 335126087LLU;

	t31 = ((x177+x178)^(x179-x180));

	if (t31 != 5166979309727LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x181 = -1LL;
	volatile uint64_t x182 = 767074LLU;
	volatile uint64_t x183 = 55606088763167644LLU;
	uint8_t x184 = 6U;
	static volatile uint64_t t32 = 13171542935252389LLU;

	t32 = ((x181+x182)^(x183-x184));

	if (t32 != 55606088763467767LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x185 = INT32_MAX;
	uint64_t x186 = UINT64_MAX;
	uint64_t t33 = 2167684465659216182LLU;

	t33 = ((x185+x186)^(x187-x188));

	if (t33 != 2147484425LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x189 = INT64_MAX;
	int32_t x190 = INT32_MIN;
	int32_t x191 = -1;
	uint16_t x192 = 105U;
	volatile int64_t t34 = 61457LL;

	t34 = ((x189+x190)^(x191-x192));

	if (t34 != -9223372034707292055LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x193 = -1LL;
	uint64_t x194 = 825944628955804046LLU;
	uint64_t t35 = 125957062LLU;

	t35 = ((x193+x194)^(x195-x196));

	if (t35 != 825944628955778573LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = -2;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t36 = -2501509;

	t36 = ((x197+x198)^(x199-x200));

	if (t36 != -66068) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = INT32_MIN;
	int16_t x203 = INT16_MIN;
	uint32_t x204 = UINT32_MAX;

	t37 = ((x201+x202)^(x203-x204));

	if (t37 != 2147516414U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x205 = -8241;
	int8_t x207 = -30;

	t38 = ((x205+x206)^(x207-x208));

	if (t38 != 1285882LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x209 = -46;
	uint16_t x210 = UINT16_MAX;
	volatile int32_t x211 = -209128320;
	static int8_t x212 = -3;

	t39 = ((x209+x210)^(x211-x212));

	if (t39 != -209188014) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x213 = INT64_MAX;
	int8_t x216 = -1;
	int64_t t40 = 58151848167LL;

	t40 = ((x213+x214)^(x215-x216));

	if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x217 = UINT32_MAX;
	static int16_t x218 = INT16_MAX;
	int8_t x219 = -32;
	int16_t x220 = INT16_MIN;
	uint32_t t41 = 3736356U;

	t41 = ((x217+x218)^(x219-x220));

	if (t41 != 30U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x221 = UINT64_MAX;
	uint64_t x222 = 0LLU;
	static uint32_t x223 = 1447U;
	uint64_t x224 = UINT64_MAX;

	t42 = ((x221+x222)^(x223-x224));

	if (t42 != 18446744073709550167LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x229 = -1;
	static uint8_t x230 = 0U;
	static int64_t x231 = INT64_MIN;
	int64_t t43 = -15476681138LL;

	t43 = ((x229+x230)^(x231-x232));

	if (t43 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x233 = 7U;

	t44 = ((x233+x234)^(x235-x236));

	if (t44 != 4294840811LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x237 = 6912U;
	int32_t x238 = INT32_MAX;
	static int8_t x239 = -1;
	int32_t x240 = -27125;
	volatile uint32_t t45 = 3901816U;

	t45 = ((x237+x238)^(x239-x240));

	if (t45 != 2147513099U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x241 = -1LL;
	static volatile uint16_t x242 = 92U;
	int32_t x243 = -1710;
	uint16_t x244 = UINT16_MAX;
	int64_t t46 = 2146119884354970975LL;

	t46 = ((x241+x242)^(x243-x244));

	if (t46 != -67320LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x246 = UINT8_MAX;
	uint32_t x248 = 0U;
	uint64_t t47 = 8012044653300LLU;

	t47 = ((x245+x246)^(x247-x248));

	if (t47 != 961397591458LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x261 = INT8_MIN;
	int16_t x263 = 14;
	uint64_t x264 = UINT64_MAX;
	uint64_t t48 = 5LLU;

	t48 = ((x261+x262)^(x263-x264));

	if (t48 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x265 = INT64_MAX;
	volatile int32_t x266 = -1;
	volatile int64_t x267 = INT64_MIN;
	static uint64_t x268 = 796391580139LLU;

	t49 = ((x265+x266)^(x267-x268));

	if (t49 != 796391580139LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x269 = -1LL;
	static uint32_t x270 = UINT32_MAX;
	int64_t x272 = INT64_MIN;
	volatile int64_t t50 = -1LL;

	t50 = ((x269+x270)^(x271-x272));

	if (t50 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x277 = INT16_MAX;
	static int64_t x278 = -4217LL;
	volatile int16_t x279 = 98;
	int16_t x280 = -1;
	int64_t t51 = -2574739887348737LL;

	t51 = ((x277+x278)^(x279-x280));

	if (t51 != 28645LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x281 = UINT64_MAX;
	int8_t x283 = INT8_MAX;
	int8_t x284 = INT8_MIN;
	volatile uint64_t t52 = 94580LLU;

	t52 = ((x281+x282)^(x283-x284));

	if (t52 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x293 = INT32_MIN;
	int32_t x294 = 4229;
	uint32_t x295 = UINT32_MAX;
	uint64_t x296 = 1LLU;
	uint64_t t53 = 7054766393670LLU;

	t53 = ((x293+x294)^(x295-x296));

	if (t53 != 18446744071562063739LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x301 = -1;
	volatile int8_t x302 = INT8_MAX;
	uint64_t x304 = 254503057712027301LLU;

	t54 = ((x301+x302)^(x303-x304));

	if (t54 != 18192241015997491493LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x306 = 1381U;
	uint32_t x307 = 1404486563U;
	volatile int8_t x308 = -6;

	t55 = ((x305+x306)^(x307-x308));

	if (t55 != 6025625569LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x309 = INT8_MIN;
	int8_t x310 = -1;
	int32_t x311 = -12528233;
	uint8_t x312 = 62U;
	volatile int32_t t56 = 32837;

	t56 = ((x309+x310)^(x311-x312));

	if (t56 != 12528166) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x313 = INT16_MAX;
	int8_t x314 = -8;
	int32_t x315 = INT32_MIN;
	int16_t x316 = -3;
	volatile int32_t t57 = 1860880;

	t57 = ((x313+x314)^(x315-x316));

	if (t57 != -2147450892) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x317 = 15U;
	uint64_t x320 = UINT64_MAX;

	t58 = ((x317+x318)^(x319-x320));

	if (t58 != 13828937LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x321 = 99U;
	volatile uint8_t x322 = 13U;
	uint64_t x323 = 4152782207LLU;
	uint8_t x324 = 1U;
	uint64_t t59 = 587869079061622LLU;

	t59 = ((x321+x322)^(x323-x324));

	if (t59 != 4152782094LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x325 = -1;
	int32_t x326 = INT32_MAX;
	uint32_t t60 = 4099U;

	t60 = ((x325+x326)^(x327-x328));

	if (t60 != 2147487594U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x329 = -1;
	int8_t x331 = -1;
	static int16_t x332 = -10983;
	int32_t t61 = -6950;

	t61 = ((x329+x330)^(x331-x332));

	if (t61 != -10984) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x333 = INT8_MIN;
	uint16_t x336 = 11568U;
	int64_t t62 = 25497019521LL;

	t62 = ((x333+x334)^(x335-x336));

	if (t62 != 2946661064436166126LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x342 = INT64_MIN;
	int16_t x343 = -1;
	volatile uint64_t t63 = 180LLU;

	t63 = ((x341+x342)^(x343-x344));

	if (t63 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x349 = -1;
	uint8_t x350 = UINT8_MAX;
	static int8_t x351 = 0;
	volatile int32_t t64 = 1;

	t64 = ((x349+x350)^(x351-x352));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x353 = -1LL;
	int8_t x354 = INT8_MAX;
	uint16_t x355 = 471U;
	static uint32_t x356 = 228380208U;
	volatile int64_t t65 = -62946155950796LL;

	t65 = ((x353+x354)^(x355-x356));

	if (t65 != 4066587609LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x357 = 103U;
	volatile int16_t x358 = INT16_MIN;
	int16_t x359 = -1;
	static int32_t t66 = 10483560;

	t66 = ((x357+x358)^(x359-x360));

	if (t66 != 32871) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x366 = INT32_MIN;
	uint8_t x367 = UINT8_MAX;
	int32_t x368 = -346836863;
	uint64_t t67 = 14961690082LLU;

	t67 = ((x365+x366)^(x367-x368));

	if (t67 != 1048911175011LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x369 = INT64_MIN;
	volatile uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MIN;
	uint64_t t68 = 29LLU;

	t68 = ((x369+x370)^(x371-x372));

	if (t68 != 9223372036854742784LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x373 = INT64_MAX;
	static int32_t x374 = -1;
	int8_t x376 = INT8_MAX;
	volatile uint64_t t69 = 419284436LLU;

	t69 = ((x373+x374)^(x375-x376));

	if (t69 != 9223372036662112678LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x385 = 2U;
	uint32_t x386 = UINT32_MAX;
	int32_t x387 = -1080677;
	static volatile uint32_t x388 = 174389U;
	uint32_t t70 = 19731332U;

	t70 = ((x385+x386)^(x387-x388));

	if (t70 != 4293712231U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x390 = UINT64_MAX;
	int32_t x391 = -1347;
	uint8_t x392 = 62U;
	uint64_t t71 = 52520LLU;

	t71 = ((x389+x390)^(x391-x392));

	if (t71 != 18446744071562069377LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x397 = 80686835U;
	int16_t x398 = INT16_MIN;
	static int16_t x399 = INT16_MIN;
	static int16_t x400 = 0;
	uint32_t t72 = 1U;

	t72 = ((x397+x398)^(x399-x400));

	if (t72 != 4214304499U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x405 = -507414641;
	int16_t x406 = INT16_MAX;
	uint8_t x407 = 3U;
	int16_t x408 = INT16_MIN;
	int32_t t73 = 940;

	t73 = ((x405+x406)^(x407-x408));

	if (t73 != -507414643) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x409 = INT8_MIN;
	static uint16_t x410 = 1844U;
	int16_t x411 = INT16_MIN;
	int32_t x412 = -1;

	t74 = ((x409+x410)^(x411-x412));

	if (t74 != -31051) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x413 = INT64_MAX;
	uint64_t x414 = 3LLU;
	volatile int32_t x416 = 246010;
	volatile uint64_t t75 = 34798608LLU;

	t75 = ((x413+x414)^(x415-x416));

	if (t75 != 9223372037771464121LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x417 = 107;
	static uint16_t x418 = 0U;
	volatile uint64_t x419 = UINT64_MAX;
	volatile int8_t x420 = -1;

	t76 = ((x417+x418)^(x419-x420));

	if (t76 != 107LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x423 = 236U;
	static uint16_t x424 = 0U;
	volatile int64_t t77 = 9543110205446141LL;

	t77 = ((x421+x422)^(x423-x424));

	if (t77 != 18LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x425 = 109U;
	int64_t x426 = -26008219659LL;
	int32_t x427 = INT32_MAX;
	static volatile uint8_t x428 = 25U;
	static volatile int64_t t78 = 232384881LL;

	t78 = ((x425+x426)^(x427-x428));

	if (t78 != -27678871676LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x429 = 25U;
	int64_t x430 = INT64_MIN;
	uint64_t x431 = 81564580039864LLU;
	static uint32_t x432 = 37U;
	volatile uint64_t t79 = 8358852753LLU;

	t79 = ((x429+x430)^(x431-x432));

	if (t79 != 9223453601434815626LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x437 = 34271498LLU;
	volatile int64_t x439 = -10082964645LL;
	static uint64_t t80 = 1135637747577923588LLU;

	t80 = ((x437+x438)^(x439-x440));

	if (t80 != 16224918719745LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x441 = 1U;
	int8_t x442 = INT8_MIN;
	volatile int64_t x443 = INT64_MAX;
	volatile uint16_t x444 = 1U;
	int64_t t81 = -61765LL;

	t81 = ((x441+x442)^(x443-x444));

	if (t81 != 9223372032559808639LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x445 = INT16_MIN;
	int16_t x446 = 125;
	uint32_t x447 = 542704040U;
	volatile uint64_t x448 = 2089LLU;
	uint64_t t82 = 1106730745LLU;

	t82 = ((x445+x446)^(x447-x448));

	if (t82 != 18446744073166878978LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x449 = -4;
	uint32_t x450 = 756937U;
	uint8_t x451 = 2U;
	int8_t x452 = INT8_MIN;
	uint32_t t83 = 1564U;

	t83 = ((x449+x450)^(x451-x452));

	if (t83 != 756807U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x453 = 361;
	static int8_t x455 = 13;
	int16_t x456 = -16218;
	int32_t t84 = 254;

	t84 = ((x453+x454)^(x455-x456));

	if (t84 != 15885) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x457 = UINT8_MAX;
	int16_t x460 = INT16_MIN;
	volatile int32_t t85 = 1998803;

	t85 = ((x457+x458)^(x459-x460));

	if (t85 != 20447) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x461 = 37;
	int16_t x462 = INT16_MIN;
	int64_t x463 = -1LL;
	volatile int32_t x464 = -199271960;
	static volatile int64_t t86 = -5348803043LL;

	t86 = ((x461+x462)^(x463-x464));

	if (t86 != -199285198LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x465 = 1;
	volatile int32_t x466 = 3;
	uint32_t x467 = 199778430U;
	static uint64_t x468 = 428326409249LLU;

	t87 = ((x465+x466)^(x467-x468));

	if (t87 != 18446743645582920793LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x473 = 57U;
	int64_t x474 = INT64_MIN;
	int64_t x475 = INT64_MIN;

	t88 = ((x473+x474)^(x475-x476));

	if (t88 != 12363LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x477 = INT64_MAX;
	volatile int32_t x478 = INT32_MIN;
	int32_t x479 = 437;
	int64_t x480 = -825899514741279LL;
	volatile int64_t t89 = -28862041329882LL;

	t89 = ((x477+x478)^(x479-x480));

	if (t89 != 9222546139487517739LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x485 = -1LL;
	static int16_t x486 = -3;
	uint16_t x488 = 62U;

	t90 = ((x485+x486)^(x487-x488));

	if (t90 != 56LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x489 = 69U;
	int16_t x490 = 0;
	uint16_t x491 = 17U;
	uint32_t x492 = 4U;
	uint32_t t91 = 3266U;

	t91 = ((x489+x490)^(x491-x492));

	if (t91 != 72U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x493 = -1;
	int8_t x495 = -63;
	uint64_t x496 = 2LLU;
	uint64_t t92 = 2250846985854LLU;

	t92 = ((x493+x494)^(x495-x496));

	if (t92 != 18446743846546458158LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x497 = UINT32_MAX;
	int32_t x500 = -651433024;

	t93 = ((x497+x498)^(x499-x500));

	if (t93 != 4946415704LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x501 = UINT64_MAX;
	static uint64_t x503 = 112728837135LLU;
	int16_t x504 = INT16_MIN;
	uint64_t t94 = 1766LLU;

	t94 = ((x501+x502)^(x503-x504));

	if (t94 != 112728869943LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x505 = INT64_MIN;
	static uint64_t x506 = UINT64_MAX;
	volatile uint32_t x507 = 905U;
	int16_t x508 = INT16_MIN;
	volatile uint64_t t95 = 5468LLU;

	t95 = ((x505+x506)^(x507-x508));

	if (t95 != 9223372036854742134LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x510 = -1;
	int16_t x511 = -1;
	int64_t x512 = INT64_MAX;

	t96 = ((x509+x510)^(x511-x512));

	if (t96 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x513 = 14786;
	uint64_t x514 = 581891444LLU;
	int16_t x515 = INT16_MIN;
	static volatile uint64_t t97 = 9084032850555793LLU;

	t97 = ((x513+x514)^(x515-x516));

	if (t97 != 581906230LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x517 = 1U;
	uint64_t x518 = 729806454734LLU;
	static int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MAX;
	static uint64_t t98 = 91114814252122LLU;

	t98 = ((x517+x518)^(x519-x520));

	if (t98 != 18446743343903129678LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x521 = INT16_MIN;
	volatile uint8_t x522 = UINT8_MAX;
	int16_t x524 = -1;
	static volatile int32_t t99 = 16;

	t99 = ((x521+x522)^(x523-x524));

	if (t99 != 32638) { NG(); } else { ; }
	
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

