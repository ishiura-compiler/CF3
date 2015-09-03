#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
uint64_t x5 = UINT64_MAX;
static int16_t x7 = 27;
uint8_t x9 = 71U;
volatile uint64_t x10 = 132108214306LLU;
int16_t x14 = INT16_MIN;
uint16_t x18 = 228U;
volatile int32_t x30 = INT32_MIN;
int8_t x31 = INT8_MIN;
volatile int32_t t7 = 3658567;
uint64_t x36 = 18204232742018128LLU;
int32_t x47 = INT32_MIN;
int64_t x53 = INT64_MIN;
volatile int64_t x62 = INT64_MIN;
uint8_t x64 = 3U;
volatile int32_t t15 = -1;
uint8_t x70 = 84U;
int32_t x72 = INT32_MIN;
static int64_t x73 = INT64_MIN;
static uint32_t t18 = UINT32_MAX;
volatile uint8_t x79 = 1U;
volatile uint16_t x80 = UINT16_MAX;
int16_t x89 = -1;
volatile uint32_t x91 = 6U;
int16_t x92 = INT16_MIN;
uint64_t x100 = UINT64_MAX;
uint64_t t24 = UINT64_MAX;
volatile int32_t t25 = INT32_MAX;
static int16_t x107 = INT16_MAX;
int64_t t26 = 1LL;
uint16_t x110 = 1U;
int32_t x114 = INT32_MIN;
int64_t x120 = -205513LL;
static volatile int64_t t29 = 0LL;
int32_t x122 = -1;
uint32_t x123 = UINT32_MAX;
volatile int32_t t31 = 45209751;
int8_t x141 = INT8_MAX;
volatile int64_t x159 = INT64_MIN;
volatile int8_t x161 = -1;
static uint8_t x168 = 68U;
volatile int64_t x181 = INT64_MAX;
int16_t x190 = INT16_MIN;
static uint8_t x193 = 13U;
volatile int16_t x195 = 133;
int64_t t49 = 1578299044631469LL;
int8_t x207 = 49;
static volatile int16_t x209 = -1;
volatile int8_t x215 = INT8_MIN;
uint32_t x219 = 118032685U;
uint32_t x231 = 52569U;
int8_t x232 = -1;
static int32_t t59 = 1;
int64_t x257 = 152155245527LL;
uint32_t x267 = 1100651U;
static uint16_t x272 = 0U;
int64_t x280 = -1LL;
static uint16_t x282 = 1817U;
volatile int32_t x284 = -3072098;
int64_t x285 = INT64_MIN;
volatile int32_t t71 = 45838;
int64_t t73 = 3258965608202135805LL;
static uint64_t x298 = 28177757327LLU;
int32_t x300 = -1;
volatile int32_t t74 = 0;
int16_t x306 = 1;
uint64_t x309 = UINT64_MAX;
uint16_t x312 = 109U;
int32_t x316 = INT32_MIN;
volatile uint64_t t79 = 56583453068LLU;
volatile int32_t t80 = 851077;
uint16_t x330 = UINT16_MAX;
uint8_t x332 = 12U;
volatile int32_t x333 = 0;
int16_t x337 = -1;
int32_t x346 = -1;
static uint8_t x347 = 0U;
int32_t x349 = -196033450;
static uint16_t x350 = 625U;
volatile uint64_t t87 = 6616736212583LLU;
int32_t x357 = INT32_MIN;
int16_t x358 = INT16_MAX;
int32_t x360 = INT32_MAX;
int8_t x373 = INT8_MIN;
volatile int16_t x380 = -12520;
static int16_t x391 = INT16_MAX;
int16_t x394 = INT16_MIN;
volatile int64_t t98 = -219534507LL;
static uint16_t x398 = 12226U;


void f0(void) {
	volatile uint16_t x1 = 452U;
	int16_t x2 = INT16_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 1050537653LL;

	t0 = ((x1==x2)^(x3|x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 0U;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 93911;

	t1 = ((x5==x6)^(x7|x8));

	if (t1 != -32741) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x11 = INT16_MIN;
	volatile uint32_t x12 = 176U;
	uint32_t t2 = 0U;

	t2 = ((x9==x10)^(x11|x12));

	if (t2 != 4294934704U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1266;
	uint16_t x15 = 30U;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = ((x13==x14)^(x15|x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x19 = INT8_MIN;
	uint64_t x20 = 31284730LLU;
	static volatile uint64_t t4 = 27863282345947LLU;

	t4 = ((x17==x18)^(x19|x20));

	if (t4 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	uint32_t x22 = 81095896U;
	uint16_t x23 = 0U;
	static uint16_t x24 = 42U;
	volatile int32_t t5 = -3296487;

	t5 = ((x21==x22)^(x23|x24));

	if (t5 != 42) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 19U;
	volatile int32_t x26 = INT32_MIN;
	int64_t x27 = -1LL;
	int64_t x28 = -1LL;
	volatile int64_t t6 = 1775354790LL;

	t6 = ((x25==x26)^(x27|x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -1LL;
	uint8_t x32 = 109U;

	t7 = ((x29==x30)^(x31|x32));

	if (t7 != -19) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static uint32_t x34 = 11604U;
	static int8_t x35 = INT8_MAX;
	volatile uint64_t t8 = 118LLU;

	t8 = ((x33==x34)^(x35|x36));

	if (t8 != 18204232742018175LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 4U;
	int8_t x38 = -1;
	int32_t x39 = INT32_MAX;
	static int32_t x40 = -18;
	volatile int32_t t9 = 621899732;

	t9 = ((x37==x38)^(x39|x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1644806737781460LL;
	static int16_t x42 = 1606;
	int32_t x43 = -23637625;
	uint16_t x44 = 643U;
	volatile int32_t t10 = 37;

	t10 = ((x41==x42)^(x43|x44));

	if (t10 != -23637113) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 227762790LL;
	int32_t x46 = 1167835;
	volatile uint16_t x48 = 8192U;
	volatile int32_t t11 = 245;

	t11 = ((x45==x46)^(x47|x48));

	if (t11 != -2147475456) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	int32_t x50 = -1;
	int64_t x51 = INT64_MIN;
	int8_t x52 = 7;
	int64_t t12 = 205282673466487LL;

	t12 = ((x49==x50)^(x51|x52));

	if (t12 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = 0;
	uint8_t x55 = 11U;
	int64_t x56 = -1LL;
	volatile int64_t t13 = -2LL;

	t13 = ((x53==x54)^(x55|x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int8_t x58 = INT8_MIN;
	volatile int64_t x59 = INT64_MIN;
	static uint32_t x60 = UINT32_MAX;
	volatile int64_t t14 = 1651043LL;

	t14 = ((x57==x58)^(x59|x60));

	if (t14 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -2533;
	int32_t x63 = INT32_MIN;

	t15 = ((x61==x62)^(x63|x64));

	if (t15 != -2147483645) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	static int16_t x66 = 3;
	volatile int16_t x67 = INT16_MIN;
	int8_t x68 = 17;
	static int32_t t16 = -2816023;

	t16 = ((x65==x66)^(x67|x68));

	if (t16 != -32751) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -707;
	int64_t x71 = INT64_MIN;
	volatile int64_t t17 = 4611696LL;

	t17 = ((x69==x70)^(x71|x72));

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MIN;
	int32_t x75 = -3836977;
	volatile uint32_t x76 = UINT32_MAX;

	t18 = ((x73==x74)^(x75|x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = 57619971;
	int32_t x78 = 18;
	volatile int32_t t19 = -49690383;

	t19 = ((x77==x78)^(x79|x80));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MAX;
	int8_t x83 = 0;
	static int32_t x84 = INT32_MAX;
	int32_t t20 = INT32_MAX;

	t20 = ((x81==x82)^(x83|x84));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MIN;
	int16_t x86 = -1522;
	uint32_t x87 = 47406815U;
	int8_t x88 = INT8_MIN;
	uint32_t t21 = 1522760U;

	t21 = ((x85==x86)^(x87|x88));

	if (t21 != 4294967263U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MIN;
	static uint32_t t22 = 124U;

	t22 = ((x89==x90)^(x91|x92));

	if (t22 != 4294934534U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int8_t x94 = INT8_MAX;
	static int32_t x95 = -1;
	volatile int32_t x96 = INT32_MIN;
	static int32_t t23 = 2376668;

	t23 = ((x93==x94)^(x95|x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MAX;
	volatile int64_t x98 = -1LL;
	int8_t x99 = -1;

	t24 = ((x97==x98)^(x99|x100));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 10;
	uint64_t x102 = 133670680324LLU;
	static uint16_t x103 = 450U;
	volatile int32_t x104 = INT32_MAX;

	t25 = ((x101==x102)^(x103|x104));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -53999634LL;
	int64_t x106 = INT64_MAX;
	int64_t x108 = 71662900759426013LL;

	t26 = ((x105==x106)^(x107|x108));

	if (t26 != 71662900759429119LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x109 = 40U;
	static int32_t x111 = INT32_MIN;
	volatile int8_t x112 = -4;
	static int32_t t27 = -407306;

	t27 = ((x109==x110)^(x111|x112));

	if (t27 != -4) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x113 = 1622430LLU;
	static volatile int8_t x115 = 3;
	static uint64_t x116 = 1403420718077013669LLU;
	static uint64_t t28 = 2060997105LLU;

	t28 = ((x113==x114)^(x115|x116));

	if (t28 != 1403420718077013671LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MAX;

	t29 = ((x117==x118)^(x119|x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int64_t x124 = INT64_MIN;
	static int64_t t30 = 0LL;

	t30 = ((x121==x122)^(x123|x124));

	if (t30 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	int8_t x126 = INT8_MIN;
	int16_t x127 = -1;
	int8_t x128 = 19;

	t31 = ((x125==x126)^(x127|x128));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 7891132860LLU;
	static int64_t x130 = INT64_MIN;
	static int8_t x131 = INT8_MIN;
	int8_t x132 = 1;
	int32_t t32 = 4726252;

	t32 = ((x129==x130)^(x131|x132));

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -2;
	int64_t x134 = INT64_MIN;
	volatile uint16_t x135 = 6U;
	static int32_t x136 = INT32_MAX;
	volatile int32_t t33 = INT32_MAX;

	t33 = ((x133==x134)^(x135|x136));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 1U;
	static int8_t x138 = INT8_MAX;
	static int32_t x139 = -1;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 543433981;

	t34 = ((x137==x138)^(x139|x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x142 = 2503U;
	volatile int8_t x143 = -1;
	static uint16_t x144 = UINT16_MAX;
	static volatile int32_t t35 = -88051220;

	t35 = ((x141==x142)^(x143|x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -504;
	uint64_t x146 = UINT64_MAX;
	int64_t x147 = -1LL;
	int8_t x148 = -20;
	static volatile int64_t t36 = -21161LL;

	t36 = ((x145==x146)^(x147|x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x149 = 5601129LL;
	static int16_t x150 = INT16_MIN;
	int8_t x151 = 1;
	uint16_t x152 = 4U;
	static int32_t t37 = 30298;

	t37 = ((x149==x150)^(x151|x152));

	if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int16_t x154 = -1;
	int64_t x155 = INT64_MIN;
	uint8_t x156 = UINT8_MAX;
	int64_t t38 = 968801396878557135LL;

	t38 = ((x153==x154)^(x155|x156));

	if (t38 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	static uint64_t x158 = 311012LLU;
	int16_t x160 = INT16_MAX;
	int64_t t39 = -92613LL;

	t39 = ((x157==x158)^(x159|x160));

	if (t39 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = 912261293LLU;
	volatile uint64_t x163 = UINT64_MAX;
	uint16_t x164 = 204U;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x161==x162)^(x163|x164));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x166 = 2532094075LLU;
	volatile int64_t x167 = -386LL;
	volatile int64_t t41 = -33999249711756545LL;

	t41 = ((x165==x166)^(x167|x168));

	if (t41 != -386LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 66167435LLU;
	static int8_t x170 = -1;
	int16_t x171 = INT16_MIN;
	static uint16_t x172 = UINT16_MAX;
	int32_t t42 = 15938;

	t42 = ((x169==x170)^(x171|x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 0;
	static uint64_t x174 = UINT64_MAX;
	uint16_t x175 = 8U;
	int32_t x176 = INT32_MIN;
	int32_t t43 = 13045;

	t43 = ((x173==x174)^(x175|x176));

	if (t43 != -2147483640) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = 12365257U;
	int32_t x178 = INT32_MIN;
	static int8_t x179 = 0;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = INT32_MIN;

	t44 = ((x177==x178)^(x179|x180));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = -1LL;
	volatile int16_t x183 = INT16_MAX;
	volatile int32_t x184 = INT32_MIN;
	static int32_t t45 = 24;

	t45 = ((x181==x182)^(x183|x184));

	if (t45 != -2147450881) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	volatile int8_t x186 = INT8_MIN;
	static uint8_t x187 = 54U;
	int16_t x188 = 4;
	int32_t t46 = 9578013;

	t46 = ((x185==x186)^(x187|x188));

	if (t46 != 54) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	int16_t x191 = INT16_MAX;
	volatile uint64_t x192 = 2617686LLU;
	uint64_t t47 = 335228935159LLU;

	t47 = ((x189==x190)^(x191|x192));

	if (t47 != 2621439LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = 67564618308LL;
	static int16_t x196 = -2421;
	int32_t t48 = 1;

	t48 = ((x193==x194)^(x195|x196));

	if (t48 != -2417) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MAX;
	int16_t x198 = INT16_MIN;
	volatile int32_t x199 = INT32_MIN;
	int64_t x200 = -1LL;

	t49 = ((x197==x198)^(x199|x200));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = INT32_MIN;
	int16_t x202 = -1;
	int8_t x203 = INT8_MAX;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -67664614;

	t50 = ((x201==x202)^(x203|x204));

	if (t50 != -2147483521) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	static uint8_t x206 = 4U;
	volatile int64_t x208 = -1LL;
	int64_t t51 = 1551726LL;

	t51 = ((x205==x206)^(x207|x208));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x210 = UINT32_MAX;
	volatile int64_t x211 = INT64_MAX;
	volatile uint8_t x212 = 7U;
	volatile int64_t t52 = 471650516LL;

	t52 = ((x209==x210)^(x211|x212));

	if (t52 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 1U;
	int64_t x214 = -1LL;
	uint32_t x216 = 41817U;
	uint32_t t53 = 5005242U;

	t53 = ((x213==x214)^(x215|x216));

	if (t53 != 4294967257U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = -29;
	static int32_t x218 = INT32_MIN;
	int16_t x220 = INT16_MAX;
	volatile uint32_t t54 = 21309149U;

	t54 = ((x217==x218)^(x219|x220));

	if (t54 != 118063103U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = 4686U;
	int32_t x222 = INT32_MIN;
	static volatile int32_t x223 = INT32_MIN;
	static uint16_t x224 = UINT16_MAX;
	int32_t t55 = -45;

	t55 = ((x221==x222)^(x223|x224));

	if (t55 != -2147418113) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MIN;
	static uint8_t x226 = 48U;
	static uint32_t x227 = 148257084U;
	volatile uint16_t x228 = UINT16_MAX;
	uint32_t t56 = 11725U;

	t56 = ((x225==x226)^(x227|x228));

	if (t56 != 148307967U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 9U;
	int16_t x230 = -1;
	uint32_t t57 = UINT32_MAX;

	t57 = ((x229==x230)^(x231|x232));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MAX;
	static uint64_t x234 = UINT64_MAX;
	volatile int16_t x235 = INT16_MIN;
	uint64_t x236 = 5930659754357LLU;
	uint64_t t58 = 18LLU;

	t58 = ((x233==x234)^(x235|x236));

	if (t58 != 18446744073709531509LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = 2943026709656143324LL;
	int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MAX;
	uint8_t x240 = UINT8_MAX;

	t59 = ((x237==x238)^(x239|x240));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	uint64_t x242 = UINT64_MAX;
	uint8_t x243 = 34U;
	static int8_t x244 = INT8_MIN;
	int32_t t60 = 172;

	t60 = ((x241==x242)^(x243|x244));

	if (t60 != -94) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 14U;
	volatile uint64_t x246 = 2LLU;
	static uint64_t x247 = 275LLU;
	uint32_t x248 = UINT32_MAX;
	volatile uint64_t t61 = 590918LLU;

	t61 = ((x245==x246)^(x247|x248));

	if (t61 != 4294967295LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x249 = UINT8_MAX;
	int32_t x250 = -23038;
	int64_t x251 = INT64_MIN;
	int64_t x252 = -2655738463811423LL;
	volatile int64_t t62 = 1577327879804712LL;

	t62 = ((x249==x250)^(x251|x252));

	if (t62 != -2655738463811423LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x253 = INT64_MIN;
	volatile uint8_t x254 = 33U;
	static volatile int8_t x255 = INT8_MIN;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = -917;

	t63 = ((x253==x254)^(x255|x256));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = INT32_MIN;
	uint32_t x259 = UINT32_MAX;
	int64_t x260 = -532605101767767LL;
	volatile int64_t t64 = -5281945989LL;

	t64 = ((x257==x258)^(x259|x260));

	if (t64 != -532601714507777LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 466;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = UINT64_MAX;
	int16_t x264 = 0;
	uint64_t t65 = UINT64_MAX;

	t65 = ((x261==x262)^(x263|x264));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = -130117357;
	int8_t x266 = INT8_MAX;
	static volatile uint64_t x268 = 122LLU;
	uint64_t t66 = 3790543324837623LLU;

	t66 = ((x265==x266)^(x267|x268));

	if (t66 != 1100667LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = UINT16_MAX;
	int16_t x270 = INT16_MIN;
	int32_t x271 = INT32_MIN;
	volatile int32_t t67 = INT32_MIN;

	t67 = ((x269==x270)^(x271|x272));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	int8_t x274 = 1;
	static volatile int8_t x275 = INT8_MAX;
	int64_t x276 = INT64_MIN;
	volatile int64_t t68 = -1722952698850356LL;

	t68 = ((x273==x274)^(x275|x276));

	if (t68 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	static uint32_t x278 = 236U;
	uint16_t x279 = 14094U;
	volatile int64_t t69 = -126868646LL;

	t69 = ((x277==x278)^(x279|x280));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	static uint64_t x283 = 1625LLU;
	static uint64_t t70 = 1615501LLU;

	t70 = ((x281==x282)^(x283|x284));

	if (t70 != 18446744073706479583LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = 339323688734506LLU;
	int8_t x287 = INT8_MIN;
	volatile int32_t x288 = INT32_MIN;

	t71 = ((x285==x286)^(x287|x288));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MAX;
	volatile int16_t x290 = 16141;
	static volatile int16_t x291 = INT16_MIN;
	int32_t x292 = INT32_MAX;
	volatile int32_t t72 = -13086962;

	t72 = ((x289==x290)^(x291|x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 561;
	static uint64_t x294 = 7401400190422LLU;
	static volatile int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MIN;

	t73 = ((x293==x294)^(x295|x296));

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = -5190;
	uint16_t x299 = 211U;

	t74 = ((x297==x298)^(x299|x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = 1;
	static uint8_t x302 = 1U;
	static int32_t x303 = INT32_MIN;
	uint64_t x304 = 29LLU;
	volatile uint64_t t75 = 89620671LLU;

	t75 = ((x301==x302)^(x303|x304));

	if (t75 != 18446744071562067996LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int64_t x307 = 197178LL;
	uint32_t x308 = 1568U;
	int64_t t76 = -482226LL;

	t76 = ((x305==x306)^(x307|x308));

	if (t76 != 198202LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x310 = UINT16_MAX;
	uint16_t x311 = 5956U;
	volatile int32_t t77 = 61;

	t77 = ((x309==x310)^(x311|x312));

	if (t77 != 5997) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -976924091;
	uint64_t x314 = 91158325LLU;
	int16_t x315 = INT16_MAX;
	volatile int32_t t78 = -2909370;

	t78 = ((x313==x314)^(x315|x316));

	if (t78 != -2147450881) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	volatile int8_t x318 = INT8_MIN;
	uint64_t x319 = 8443179737653948012LLU;
	int8_t x320 = 1;

	t79 = ((x317==x318)^(x319|x320));

	if (t79 != 8443179737653948013LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	volatile int8_t x322 = -1;
	int32_t x323 = INT32_MAX;
	volatile int16_t x324 = 3;

	t80 = ((x321==x322)^(x323|x324));

	if (t80 != 2147483646) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = -1;
	uint32_t x326 = UINT32_MAX;
	static int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;
	volatile int32_t t81 = 2059475;

	t81 = ((x325==x326)^(x327|x328));

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	int16_t x331 = INT16_MAX;
	int32_t t82 = -466973785;

	t82 = ((x329==x330)^(x331|x332));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x334 = INT8_MIN;
	int32_t x335 = -725211744;
	int64_t x336 = -1LL;
	volatile int64_t t83 = -1652224LL;

	t83 = ((x333==x334)^(x335|x336));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x338 = 0U;
	int32_t x339 = 704;
	int16_t x340 = -1;
	static volatile int32_t t84 = 118;

	t84 = ((x337==x338)^(x339|x340));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	static int32_t x342 = 16597678;
	int16_t x343 = -483;
	int16_t x344 = -1;
	int32_t t85 = -689075;

	t85 = ((x341==x342)^(x343|x344));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	volatile int8_t x348 = 25;
	static volatile int32_t t86 = -1056120390;

	t86 = ((x345==x346)^(x347|x348));

	if (t86 != 25) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x351 = -29;
	uint64_t x352 = 1LLU;

	t87 = ((x349==x350)^(x351|x352));

	if (t87 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 1U;
	volatile uint64_t x354 = 441396LLU;
	volatile uint64_t x355 = 50817LLU;
	uint64_t x356 = 173729949807300906LLU;
	uint64_t t88 = 40453243217646LLU;

	t88 = ((x353==x354)^(x355|x356));

	if (t88 != 173729949807335339LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x359 = 391766182U;
	static uint32_t t89 = 116888U;

	t89 = ((x357==x358)^(x359|x360));

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 13U;
	int8_t x362 = -1;
	static uint16_t x363 = 392U;
	uint64_t x364 = 46038LLU;
	volatile uint64_t t90 = 390LLU;

	t90 = ((x361==x362)^(x363|x364));

	if (t90 != 46046LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = UINT8_MAX;
	volatile uint32_t x366 = 3353584U;
	uint8_t x367 = 115U;
	volatile int64_t x368 = -1LL;
	volatile int64_t t91 = 3673008925LL;

	t91 = ((x365==x366)^(x367|x368));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 0;
	static uint8_t x370 = 3U;
	int64_t x371 = 16161306414274LL;
	int32_t x372 = -976955;
	static volatile int64_t t92 = -1104357432300849332LL;

	t92 = ((x369==x370)^(x371|x372));

	if (t92 != -155705LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = 62210174U;
	int16_t x375 = INT16_MIN;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 3825;

	t93 = ((x373==x374)^(x375|x376));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MIN;
	int8_t x379 = 27;
	int32_t t94 = -57518186;

	t94 = ((x377==x378)^(x379|x380));

	if (t94 != -12517) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = -1LL;
	volatile int16_t x382 = INT16_MIN;
	static uint32_t x383 = UINT32_MAX;
	uint16_t x384 = 511U;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = ((x381==x382)^(x383|x384));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	int32_t x386 = INT32_MAX;
	static int32_t x387 = -206978768;
	uint32_t x388 = 26U;
	uint32_t t96 = 6904U;

	t96 = ((x385==x386)^(x387|x388));

	if (t96 != 4087988539U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 362U;
	int64_t x390 = 2753856464070263LL;
	volatile int8_t x392 = INT8_MIN;
	int32_t t97 = 12284;

	t97 = ((x389==x390)^(x391|x392));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	int64_t x395 = -1LL;
	uint32_t x396 = 61964070U;

	t98 = ((x393==x394)^(x395|x396));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	int8_t x399 = 11;
	volatile int64_t x400 = INT64_MIN;
	int64_t t99 = -46328523LL;

	t99 = ((x397==x398)^(x399|x400));

	if (t99 != -9223372036854775797LL) { NG(); } else { ; }
	
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

