#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
volatile int64_t t0 = -1144LL;
int32_t x15 = -4;
int32_t x24 = INT32_MAX;
volatile uint64_t x27 = UINT64_MAX;
uint64_t t6 = 2LLU;
int16_t x30 = -1996;
static volatile int64_t t8 = 0LL;
int64_t x40 = INT64_MIN;
uint8_t x45 = 8U;
int32_t x53 = INT32_MIN;
uint64_t x61 = 115582012LLU;
static uint64_t t15 = 82985LLU;
int16_t x66 = -9;
int32_t x74 = INT32_MIN;
static int32_t x76 = INT32_MIN;
int32_t t18 = -4516;
int64_t x79 = INT64_MIN;
static int32_t x84 = -319800740;
static uint32_t x88 = 506084418U;
uint32_t x91 = 11U;
int8_t x95 = INT8_MIN;
uint32_t t23 = 20U;
uint16_t x110 = 5U;
int8_t x119 = 1;
uint8_t x121 = UINT8_MAX;
int16_t x127 = INT16_MIN;
volatile uint32_t t31 = 6U;
volatile int16_t x129 = 0;
static int32_t x134 = -1;
int32_t x136 = INT32_MAX;
uint8_t x142 = 18U;
uint8_t x144 = 2U;
static uint32_t x148 = 2U;
volatile int64_t t36 = 471600438LL;
int64_t x150 = -2741298614835952675LL;
uint64_t x156 = 5740LLU;
uint8_t x160 = UINT8_MAX;
uint16_t x161 = 4U;
int64_t x162 = INT64_MAX;
int32_t x170 = INT32_MIN;
int16_t x173 = INT16_MIN;
static volatile int64_t t43 = 39418613560023LL;
uint32_t x188 = 18104U;
uint64_t x195 = 14770589LLU;
int64_t x199 = 4643853394098LL;
static volatile int32_t x200 = INT32_MIN;
int16_t x204 = INT16_MIN;
int32_t x205 = 4;
static int64_t x214 = INT64_MAX;
uint32_t x215 = 83965718U;
int16_t x216 = -1;
uint8_t x219 = UINT8_MAX;
uint32_t t54 = 640077U;
int8_t x222 = -1;
static volatile uint16_t x224 = 3U;
int64_t t56 = -110693093845743853LL;
uint8_t x231 = 7U;
static uint8_t x233 = 97U;
static int32_t t58 = 3609;
int8_t x240 = INT8_MAX;
int32_t t59 = -566069;
volatile int8_t x241 = INT8_MIN;
int32_t x244 = INT32_MIN;
uint8_t x246 = UINT8_MAX;
static volatile uint64_t t62 = 3LLU;
int64_t x255 = 67LL;
int8_t x262 = -1;
int32_t x263 = 1;
volatile int64_t t65 = -77303592LL;
static uint16_t x266 = 50U;
int16_t x283 = INT16_MIN;
int16_t x284 = INT16_MAX;
volatile int16_t x285 = -10;
uint16_t x286 = UINT16_MAX;
uint32_t x287 = 353U;
int32_t x288 = -1;
volatile uint32_t t71 = 23982152U;
volatile uint32_t t72 = 6004310U;
int8_t x296 = 11;
uint32_t x298 = UINT32_MAX;
volatile uint64_t x299 = UINT64_MAX;
int16_t x304 = INT16_MAX;
volatile uint64_t t78 = 0LLU;
volatile int32_t t79 = 22876;
uint64_t t80 = 1653434LLU;
volatile uint32_t x325 = UINT32_MAX;
int16_t x329 = 1973;
uint32_t x331 = UINT32_MAX;
static volatile int8_t x337 = -1;
int8_t x339 = -1;
static volatile int64_t t86 = -12LL;
int8_t x350 = -2;
int16_t x354 = 6949;
int64_t x357 = INT64_MAX;
static int8_t x358 = 4;
int64_t t89 = -999515135129LL;
static uint16_t x376 = 995U;
static volatile int64_t t94 = -3LL;
uint64_t x389 = 223570217410159988LLU;
uint16_t x392 = 8U;
uint64_t t98 = 46LLU;
int32_t t99 = 1;


void f0(void) {
	static uint16_t x1 = 28624U;
	static int16_t x2 = INT16_MIN;
	static int16_t x4 = -1;

	t0 = ((x1|x2)/(x3|x4));

	if (t0 != 4144LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 7LLU;
	int32_t x6 = -1725777;
	uint8_t x7 = 12U;
	uint64_t x8 = 664783036LLU;
	uint64_t t1 = 176419LLU;

	t1 = ((x5|x6)/(x7|x8));

	if (t1 != 27748518049LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	static int16_t x10 = INT16_MIN;
	int64_t x11 = -1LL;
	volatile uint8_t x12 = UINT8_MAX;
	volatile int64_t t2 = -26885138865933221LL;

	t2 = ((x9|x10)/(x11|x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	uint32_t x14 = 964353U;
	int8_t x16 = INT8_MIN;
	volatile int64_t t3 = 10431345342837LL;

	t3 = ((x13|x14)/(x15|x16));

	if (t3 != 2305843009213452863LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -3360;
	uint16_t x18 = UINT16_MAX;
	int64_t x19 = -1394LL;
	static int64_t x20 = 686979610384LL;
	volatile int64_t t4 = -971236374089527475LL;

	t4 = ((x17|x18)/(x19|x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int16_t x22 = INT16_MIN;
	static uint16_t x23 = UINT16_MAX;
	static volatile int32_t t5 = 156348;

	t5 = ((x21|x22)/(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MIN;
	static volatile int32_t x28 = -2520488;

	t6 = ((x25|x26)/(x27|x28));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 517297775LLU;
	static uint16_t x31 = UINT16_MAX;
	int16_t x32 = -1;
	uint64_t t7 = 9086LLU;

	t7 = ((x29|x30)/(x31|x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	volatile int16_t x34 = -2;
	int16_t x35 = 2505;
	int64_t x36 = INT64_MIN;

	t8 = ((x33|x34)/(x35|x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	volatile int64_t x38 = INT64_MIN;
	int64_t x39 = -14080795LL;
	volatile int64_t t9 = 2646357712544699583LL;

	t9 = ((x37|x38)/(x39|x40));

	if (t9 != 655032051589LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = 2;
	volatile int64_t x43 = -123784LL;
	static int64_t x44 = -32301734052LL;
	int64_t t10 = -40439029515075LL;

	t10 = ((x41|x42)/(x43|x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MAX;
	static int64_t x47 = INT64_MAX;
	static int16_t x48 = -8;
	volatile int64_t t11 = -3367LL;

	t11 = ((x45|x46)/(x47|x48));

	if (t11 != -127LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = UINT64_MAX;
	uint32_t x50 = UINT32_MAX;
	static volatile uint64_t x51 = 6LLU;
	static volatile int32_t x52 = -1;
	static volatile uint64_t t12 = 1559904669065481804LLU;

	t12 = ((x49|x50)/(x51|x52));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x54 = 3239U;
	uint16_t x55 = 1669U;
	int32_t x56 = INT32_MAX;
	volatile int32_t t13 = 4;

	t13 = ((x53|x54)/(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int64_t x58 = 111104341305LL;
	int32_t x59 = -215738;
	int64_t x60 = -39698390636960388LL;
	static volatile int64_t t14 = -43016804811207LL;

	t14 = ((x57|x58)/(x59|x60));

	if (t14 != -834834LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x62 = 12183335U;
	static int16_t x63 = INT16_MIN;
	static uint16_t x64 = UINT16_MAX;

	t15 = ((x61|x62)/(x63|x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 18U;
	volatile int64_t x67 = -1765292327LL;
	volatile int32_t x68 = -1;
	volatile int64_t t16 = 16757776099730LL;

	t16 = ((x65|x66)/(x67|x68));

	if (t16 != 9LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = -1;
	int32_t x70 = -1;
	int32_t x71 = INT32_MAX;
	volatile int8_t x72 = INT8_MAX;
	static volatile int32_t t17 = -69;

	t17 = ((x69|x70)/(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int8_t x75 = INT8_MIN;

	t18 = ((x73|x74)/(x75|x76));

	if (t18 != 16777216) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	volatile uint32_t x78 = UINT32_MAX;
	uint64_t x80 = 2181223201LLU;
	volatile uint64_t t19 = 61383192LLU;

	t19 = ((x77|x78)/(x79|x80));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = 1LL;
	static uint16_t x82 = 4U;
	uint32_t x83 = UINT32_MAX;
	static int64_t t20 = 417423675160LL;

	t20 = ((x81|x82)/(x83|x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	volatile uint8_t x86 = 3U;
	int16_t x87 = -1;
	uint32_t t21 = 2063934953U;

	t21 = ((x85|x86)/(x87|x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -1;
	uint64_t x90 = 350LLU;
	int32_t x92 = INT32_MIN;
	static volatile uint64_t t22 = 17709694835035798LLU;

	t22 = ((x89|x90)/(x91|x92));

	if (t22 != 8589934548LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 30492122U;
	uint8_t x94 = UINT8_MAX;
	int32_t x96 = INT32_MIN;

	t23 = ((x93|x94)/(x95|x96));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	uint32_t x98 = 3481U;
	int64_t x99 = INT64_MAX;
	uint64_t x100 = 7284LLU;
	static volatile uint64_t t24 = 3188623LLU;

	t24 = ((x97|x98)/(x99|x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 1U;
	volatile int64_t x102 = -1LL;
	int16_t x103 = INT16_MIN;
	int64_t x104 = INT64_MAX;
	int64_t t25 = 32269943LL;

	t25 = ((x101|x102)/(x103|x104));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	uint64_t x106 = 4104155608138515828LLU;
	volatile uint64_t x107 = 98061LLU;
	uint32_t x108 = 6555U;
	uint64_t t26 = 25LLU;

	t26 = ((x105|x106)/(x107|x108));

	if (t26 != 187835328171205LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	volatile uint64_t x111 = UINT64_MAX;
	static volatile int32_t x112 = INT32_MAX;
	volatile uint64_t t27 = 138721902732407985LLU;

	t27 = ((x109|x110)/(x111|x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 49U;
	int64_t x114 = INT64_MIN;
	int64_t x115 = -6821445649470LL;
	int8_t x116 = INT8_MAX;
	volatile int64_t t28 = -3LL;

	t28 = ((x113|x114)/(x115|x116));

	if (t28 != 1352113LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 20692LLU;
	static volatile int8_t x118 = -1;
	int8_t x120 = INT8_MIN;
	volatile uint64_t t29 = 14LLU;

	t29 = ((x117|x118)/(x119|x120));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = UINT64_MAX;
	uint32_t x123 = 3U;
	uint16_t x124 = UINT16_MAX;
	uint64_t t30 = 580594463LLU;

	t30 = ((x121|x122)/(x123|x124));

	if (t30 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x125 = 304003U;
	static volatile uint16_t x126 = UINT16_MAX;
	int8_t x128 = INT8_MAX;

	t31 = ((x125|x126)/(x127|x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x130 = 66U;
	int64_t x131 = INT64_MIN;
	int64_t x132 = INT64_MIN;
	volatile int64_t t32 = -1LL;

	t32 = ((x129|x130)/(x131|x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	uint8_t x135 = 0U;
	int32_t t33 = 23527864;

	t33 = ((x133|x134)/(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	uint64_t x138 = 2490837250669473LLU;
	int16_t x139 = INT16_MIN;
	int16_t x140 = -1;
	volatile uint64_t t34 = 50046494458735819LLU;

	t34 = ((x137|x138)/(x139|x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x141 = UINT8_MAX;
	volatile int64_t x143 = -120525869LL;
	int64_t t35 = 237459527103514LL;

	t35 = ((x141|x142)/(x143|x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -1LL;
	uint8_t x146 = 3U;
	int32_t x147 = INT32_MIN;

	t36 = ((x145|x146)/(x147|x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 26U;
	int32_t x151 = -1;
	uint64_t x152 = 744417537201141570LLU;
	static uint64_t t37 = 4433618701248144287LLU;

	t37 = ((x149|x150)/(x151|x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x153 = INT8_MAX;
	uint16_t x154 = 9139U;
	int8_t x155 = -4;
	static uint64_t t38 = 1LLU;

	t38 = ((x153|x154)/(x155|x156));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = -11;
	volatile int32_t x158 = 4815311;
	volatile int8_t x159 = INT8_MIN;
	volatile int32_t t39 = -7161;

	t39 = ((x157|x158)/(x159|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x163 = -1;
	static uint64_t x164 = 66208650LLU;
	volatile uint64_t t40 = 204824004624112323LLU;

	t40 = ((x161|x162)/(x163|x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	uint32_t x166 = 237U;
	int64_t x167 = -1LL;
	int64_t x168 = INT64_MIN;
	int64_t t41 = 894334897LL;

	t41 = ((x165|x166)/(x167|x168));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int8_t x171 = INT8_MAX;
	int8_t x172 = INT8_MAX;
	static volatile int64_t t42 = 60264923772709253LL;

	t42 = ((x169|x170)/(x171|x172));

	if (t42 != -16909320LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x174 = 0;
	static int64_t x175 = 834581466871LL;
	uint32_t x176 = UINT32_MAX;

	t43 = ((x173|x174)/(x175|x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	static int8_t x178 = -37;
	volatile int16_t x179 = -7190;
	uint64_t x180 = 822950890585468698LLU;
	uint64_t t44 = 3LLU;

	t44 = ((x177|x178)/(x179|x180));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = 927U;
	int8_t x182 = 0;
	int16_t x183 = -1;
	int16_t x184 = INT16_MIN;
	uint32_t t45 = 36801395U;

	t45 = ((x181|x182)/(x183|x184));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 1U;
	static int8_t x186 = -1;
	uint32_t x187 = 0U;
	uint32_t t46 = 15U;

	t46 = ((x185|x186)/(x187|x188));

	if (t46 != 237238U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -113;
	volatile int32_t x190 = INT32_MAX;
	uint8_t x191 = 5U;
	int16_t x192 = 49;
	static int32_t t47 = -14293857;

	t47 = ((x189|x190)/(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 1U;
	int32_t x194 = INT32_MIN;
	volatile int64_t x196 = -34646003213LL;
	static volatile uint64_t t48 = 314LLU;

	t48 = ((x193|x194)/(x195|x196));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 1562824U;
	volatile uint64_t x198 = 11227110LLU;
	uint64_t t49 = 40LLU;

	t49 = ((x197|x198)/(x199|x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	volatile int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MIN;
	volatile uint64_t t50 = 327LLU;

	t50 = ((x201|x202)/(x203|x204));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MAX;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	static int64_t t51 = 3236191981642LL;

	t51 = ((x205|x206)/(x207|x208));

	if (t51 != -281474976710655LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = 5509U;
	int64_t x210 = INT64_MIN;
	volatile int16_t x211 = -1;
	uint16_t x212 = 1U;
	int64_t t52 = 4236042520LL;

	t52 = ((x209|x210)/(x211|x212));

	if (t52 != 9223372036854770299LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	volatile int64_t t53 = 39376260099305484LL;

	t53 = ((x213|x214)/(x215|x216));

	if (t53 != 2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -724206304;
	static uint16_t x218 = UINT16_MAX;
	uint32_t x220 = 639321U;

	t54 = ((x217|x218)/(x219|x220));

	if (t54 != 5583U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 1;
	static int8_t x223 = -1;
	int32_t t55 = 29601;

	t55 = ((x221|x222)/(x223|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MIN;
	int8_t x226 = -1;
	int16_t x227 = -1;
	int64_t x228 = INT64_MIN;

	t56 = ((x225|x226)/(x227|x228));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	uint32_t x230 = 1585396U;
	uint64_t x232 = 18555889942955094LLU;
	uint64_t t57 = 910794LLU;

	t57 = ((x229|x230)/(x231|x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x234 = INT8_MIN;
	uint16_t x235 = 38U;
	static int8_t x236 = 1;

	t58 = ((x233|x234)/(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = INT32_MIN;
	static int32_t x238 = 233;
	uint8_t x239 = 110U;

	t59 = ((x237|x238)/(x239|x240));

	if (t59 != -16909318) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = -1;
	int16_t x243 = -1;
	int32_t t60 = -82062;

	t60 = ((x241|x242)/(x243|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;
	uint32_t t61 = 324U;

	t61 = ((x245|x246)/(x247|x248));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = 433;
	static int32_t x250 = INT32_MIN;
	uint16_t x251 = 0U;
	static uint64_t x252 = 2LLU;

	t62 = ((x249|x250)/(x251|x252));

	if (t62 != 9223372035781034200LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 27U;
	int64_t x254 = INT64_MIN;
	static uint32_t x256 = 121328U;
	volatile int64_t t63 = 39508124453826959LL;

	t63 = ((x253|x254)/(x255|x256));

	if (t63 != -76018264391250LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 2U;
	uint8_t x258 = UINT8_MAX;
	volatile int64_t x259 = INT64_MAX;
	int64_t x260 = INT64_MIN;
	volatile int64_t t64 = 5530513663763076LL;

	t64 = ((x257|x258)/(x259|x260));

	if (t64 != -255LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	volatile int64_t x264 = -1LL;

	t65 = ((x261|x262)/(x263|x264));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -1LL;
	volatile int16_t x267 = -1;
	static volatile int16_t x268 = -1;
	int64_t t66 = -39951605647144LL;

	t66 = ((x265|x266)/(x267|x268));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	uint32_t x270 = 1U;
	int32_t x271 = 0;
	uint8_t x272 = 2U;
	static int64_t t67 = 3025194193566707LL;

	t67 = ((x269|x270)/(x271|x272));

	if (t67 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile int32_t x274 = INT32_MAX;
	static int32_t x275 = INT32_MIN;
	static int64_t x276 = 371LL;
	volatile int64_t t68 = -54970359767LL;

	t68 = ((x273|x274)/(x275|x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -1;
	uint8_t x278 = UINT8_MAX;
	volatile uint8_t x279 = UINT8_MAX;
	int8_t x280 = 36;
	static volatile int32_t t69 = -107894987;

	t69 = ((x277|x278)/(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 22U;
	volatile uint8_t x282 = 28U;
	static int32_t t70 = 31;

	t70 = ((x281|x282)/(x283|x284));

	if (t70 != -30) { NG(); } else { ; }
	
}

void f71(void) {


	t71 = ((x285|x286)/(x287|x288));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	static int16_t x290 = -1;
	static int8_t x291 = 43;
	uint32_t x292 = UINT32_MAX;

	t72 = ((x289|x290)/(x291|x292));

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MAX;
	uint32_t x294 = 182U;
	static volatile int32_t x295 = -265215873;
	volatile uint32_t t73 = 948940419U;

	t73 = ((x293|x294)/(x295|x296));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 0;
	int64_t x300 = INT64_MIN;
	volatile uint64_t t74 = 57367163693769LLU;

	t74 = ((x297|x298)/(x299|x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	static int8_t x302 = -2;
	int8_t x303 = INT8_MIN;
	volatile int32_t t75 = 1073589387;

	t75 = ((x301|x302)/(x303|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x305 = INT64_MIN;
	volatile uint16_t x306 = UINT16_MAX;
	int32_t x307 = -1;
	uint8_t x308 = UINT8_MAX;
	int64_t t76 = 3732228826LL;

	t76 = ((x305|x306)/(x307|x308));

	if (t76 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	static volatile uint64_t x310 = 49LLU;
	static int32_t x311 = 1038643;
	static uint16_t x312 = 13347U;
	volatile uint64_t t77 = 2LLU;

	t77 = ((x309|x310)/(x311|x312));

	if (t77 != 17604223539340LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MAX;
	uint64_t x314 = 911LLU;
	int64_t x315 = 1210440LL;
	int8_t x316 = -14;

	t78 = ((x313|x314)/(x315|x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -15;
	int32_t x318 = INT32_MAX;
	int16_t x319 = INT16_MIN;
	static int32_t x320 = INT32_MIN;

	t79 = ((x317|x318)/(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x322 = UINT64_MAX;
	uint32_t x323 = UINT32_MAX;
	int16_t x324 = INT16_MIN;

	t80 = ((x321|x322)/(x323|x324));

	if (t80 != 4294967297LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = 336;
	static int16_t x327 = 7;
	uint64_t x328 = UINT64_MAX;
	static uint64_t t81 = 1412LLU;

	t81 = ((x325|x326)/(x327|x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = -3;
	volatile int8_t x332 = 7;
	static volatile uint32_t t82 = 1107U;

	t82 = ((x329|x330)/(x331|x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x333 = 910U;
	int8_t x334 = 4;
	int8_t x335 = 1;
	static uint32_t x336 = 766U;
	uint32_t t83 = 3659415U;

	t83 = ((x333|x334)/(x335|x336));

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x338 = INT8_MIN;
	int64_t x340 = -3269109LL;
	static volatile int64_t t84 = -570017327LL;

	t84 = ((x337|x338)/(x339|x340));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	int64_t x342 = INT64_MIN;
	volatile int64_t x343 = INT64_MIN;
	uint32_t x344 = 1757763U;
	int64_t t85 = -1783735700019LL;

	t85 = ((x341|x342)/(x343|x344));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MAX;
	int16_t x346 = -1287;
	int64_t x347 = 324841LL;
	int16_t x348 = INT16_MIN;

	t86 = ((x345|x346)/(x347|x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = 0U;
	uint64_t x351 = 1483173703191924LLU;
	static int64_t x352 = INT64_MIN;
	uint64_t t87 = 1697165534268783660LLU;

	t87 = ((x349|x350)/(x351|x352));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 3U;
	volatile uint16_t x355 = UINT16_MAX;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t88 = 0U;

	t88 = ((x353|x354)/(x355|x356));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x359 = INT16_MIN;
	static int16_t x360 = 0;

	t89 = ((x357|x358)/(x359|x360));

	if (t89 != -281474976710655LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 0;
	volatile int8_t x362 = -37;
	uint8_t x363 = UINT8_MAX;
	static uint8_t x364 = UINT8_MAX;
	volatile int32_t t90 = 54191;

	t90 = ((x361|x362)/(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	int8_t x366 = -1;
	volatile uint16_t x367 = 4458U;
	uint8_t x368 = UINT8_MAX;
	volatile int64_t t91 = -207914462263316465LL;

	t91 = ((x365|x366)/(x367|x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = 5;
	static volatile int64_t x370 = -7313920538760991LL;
	int8_t x371 = INT8_MAX;
	int32_t x372 = INT32_MIN;
	int64_t t92 = 2LL;

	t92 = ((x369|x370)/(x371|x372));

	if (t92 != 3405809LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = -102945857LL;
	int32_t x375 = -1;
	volatile int64_t t93 = -8LL;

	t93 = ((x373|x374)/(x375|x376));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 564U;
	int32_t x378 = INT32_MAX;
	int64_t x379 = -1LL;
	int16_t x380 = -1;

	t94 = ((x377|x378)/(x379|x380));

	if (t94 != -2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MAX;
	uint16_t x383 = UINT16_MAX;
	int16_t x384 = 5;
	int64_t t95 = 1LL;

	t95 = ((x381|x382)/(x383|x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = -1LL;
	static volatile int64_t x386 = INT64_MAX;
	static int16_t x387 = INT16_MAX;
	int16_t x388 = INT16_MAX;
	int64_t t96 = 22114000307257750LL;

	t96 = ((x385|x386)/(x387|x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = -1;
	volatile int64_t x391 = -275076705384LL;
	uint64_t t97 = 11LLU;

	t97 = ((x389|x390)/(x391|x392));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 477434509795600LLU;
	volatile int64_t x394 = 429152759329LL;
	static int32_t x395 = INT32_MAX;
	static uint32_t x396 = 522843U;

	t98 = ((x393|x394)/(x395|x396));

	if (t98 != 222455LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = -1;
	int32_t x398 = INT32_MIN;
	static volatile int32_t x399 = -1;
	static int16_t x400 = -1;

	t99 = ((x397|x398)/(x399|x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

