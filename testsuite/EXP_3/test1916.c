#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = -53224;
int32_t t2 = 4824;
uint8_t x28 = 82U;
static volatile int64_t t6 = -188011636571507LL;
int16_t x31 = 326;
volatile int64_t x35 = -129LL;
volatile int32_t x38 = -8246898;
int16_t x39 = INT16_MIN;
volatile int64_t x50 = -1LL;
uint16_t x51 = 1U;
volatile int16_t x52 = 30;
int16_t x57 = -471;
uint32_t x63 = 267U;
static volatile uint64_t t16 = 105521977LLU;
int16_t x76 = INT16_MIN;
int64_t t19 = 20616008760LL;
uint64_t t20 = 13315320510873LLU;
static int16_t x85 = -1;
int32_t x88 = -1;
static int64_t x94 = INT64_MAX;
volatile uint32_t x98 = 1306U;
volatile int64_t t25 = -112702861296747645LL;
static int32_t x112 = INT32_MAX;
int32_t x121 = 105661646;
uint8_t x123 = 8U;
int64_t t31 = -56935603520276944LL;
int32_t x129 = -1217;
uint64_t x132 = 249LLU;
int32_t x133 = -1;
int16_t x136 = INT16_MIN;
static uint64_t t33 = 20355LLU;
volatile int64_t x142 = -1LL;
static uint8_t x143 = 106U;
static volatile int64_t x158 = -1211011005257858049LL;
int32_t x159 = INT32_MIN;
int16_t x160 = 106;
uint32_t x161 = UINT32_MAX;
volatile uint32_t x163 = 1286U;
int8_t x168 = INT8_MIN;
static int8_t x170 = -5;
int64_t x177 = 59157017423LL;
int64_t x182 = 643986158LL;
static uint16_t x184 = 1549U;
volatile int64_t t45 = -281758042754370LL;
volatile int32_t t46 = -119433;
static uint16_t x200 = 1U;
int32_t x201 = -1;
int32_t t50 = -11762639;
uint64_t x214 = 45113161178LLU;
volatile uint64_t t53 = 11470143447777648LLU;
int16_t x219 = -176;
volatile uint8_t x223 = UINT8_MAX;
uint64_t x227 = UINT64_MAX;
int64_t x241 = INT64_MAX;
uint64_t x244 = UINT64_MAX;
int32_t x249 = INT32_MIN;
int32_t x250 = 646;
volatile int64_t x256 = INT64_MIN;
volatile int16_t x265 = 18;
int32_t t66 = 9251;
uint8_t x272 = UINT8_MAX;
int32_t t68 = -230;
int8_t x284 = -11;
volatile int64_t x287 = INT64_MAX;
static uint8_t x292 = 26U;
static int8_t x295 = INT8_MIN;
int32_t x300 = INT32_MIN;
int32_t x304 = -1;
int32_t t76 = -21306;
static volatile uint32_t t77 = 31U;
int8_t x322 = -1;
uint64_t x323 = UINT64_MAX;
uint8_t x324 = 7U;
uint64_t t80 = 4081480567785LLU;
volatile int32_t x325 = -1;
volatile int64_t t81 = 113812253LL;
int16_t x335 = INT16_MIN;
int64_t x341 = INT64_MIN;
volatile int16_t x343 = 5519;
int8_t x347 = INT8_MAX;
uint16_t x353 = 99U;
int32_t x355 = INT32_MIN;
int32_t x356 = -1;
volatile int8_t x358 = -1;
int16_t x362 = INT16_MIN;
int8_t x364 = INT8_MIN;
int16_t x367 = -1;
uint32_t x372 = 6527U;
static volatile uint8_t x373 = 85U;
static int8_t x374 = INT8_MIN;
static volatile uint64_t x375 = 34892096328LLU;
int16_t x376 = INT16_MAX;
volatile uint16_t x377 = UINT16_MAX;
int32_t x379 = 625;
int32_t t94 = -174587556;
int32_t t95 = -22542;
static int8_t x385 = INT8_MAX;
int64_t x387 = INT64_MIN;
int64_t x394 = -1LL;
int16_t x397 = INT16_MIN;
int32_t t99 = -1067;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int64_t x2 = INT64_MAX;
	uint16_t x3 = 13U;
	uint16_t x4 = 11269U;
	int64_t t0 = -85885LL;

	t0 = ((x1%x2)%(x3|x4));

	if (t0 != 10213LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile int32_t x6 = -1;
	volatile int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 6LL;

	t1 = ((x5%x6)%(x7|x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	uint16_t x11 = UINT16_MAX;
	int32_t x12 = INT32_MAX;

	t2 = ((x9%x10)%(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static uint16_t x14 = 2746U;
	volatile int32_t x15 = -1;
	uint16_t x16 = UINT16_MAX;
	static int64_t t3 = 12339896947152460LL;

	t3 = ((x13%x14)%(x15|x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1029;
	uint16_t x18 = 155U;
	volatile int32_t x19 = -11062906;
	volatile int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 824067297;

	t4 = ((x17%x18)%(x19|x20));

	if (t4 != -99) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 1U;
	int16_t x22 = -1;
	static int32_t x23 = -1;
	int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = -1040810119329113820LL;

	t5 = ((x21%x22)%(x23|x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int16_t x26 = -1;
	volatile int64_t x27 = 336004606431909866LL;

	t6 = ((x25%x26)%(x27|x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	static int16_t x30 = -1;
	int32_t x32 = 1;
	int32_t t7 = -6;

	t7 = ((x29%x30)%(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 1354;
	volatile uint32_t x34 = 15447833U;
	int16_t x36 = INT16_MAX;
	volatile int64_t t8 = 13LL;

	t8 = ((x33%x34)%(x35|x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 108455U;

	t9 = ((x37%x38)%(x39|x40));

	if (t9 != 3290167U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -67375;
	static volatile uint8_t x42 = 94U;
	int16_t x43 = INT16_MIN;
	volatile int32_t x44 = -2102985;
	volatile int32_t t10 = -161881877;

	t10 = ((x41%x42)%(x43|x44));

	if (t10 != -71) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -42;
	int8_t x46 = INT8_MAX;
	int32_t x47 = INT32_MAX;
	uint64_t x48 = 17LLU;
	uint64_t t11 = 7879550302LLU;

	t11 = ((x45%x46)%(x47|x48));

	if (t11 != 2147483609LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile int64_t t12 = -1983467968227242419LL;

	t12 = ((x49%x50)%(x51|x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = 1;
	int8_t x54 = -1;
	int8_t x55 = -1;
	uint64_t x56 = 2LLU;
	uint64_t t13 = 47162LLU;

	t13 = ((x53%x54)%(x55|x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x58 = -1;
	volatile uint16_t x59 = UINT16_MAX;
	static uint16_t x60 = 85U;
	static volatile int32_t t14 = 705391040;

	t14 = ((x57%x58)%(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint64_t x62 = UINT64_MAX;
	int8_t x64 = INT8_MIN;
	static uint64_t t15 = 2171LLU;

	t15 = ((x61%x62)%(x63|x64));

	if (t15 != 13561LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = 14;
	uint64_t x66 = UINT64_MAX;
	int16_t x67 = 1097;
	static volatile int32_t x68 = -1;

	t16 = ((x65%x66)%(x67|x68));

	if (t16 != 14LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	int8_t x70 = 3;
	static uint16_t x71 = UINT16_MAX;
	static int8_t x72 = -1;
	int32_t t17 = -1;

	t17 = ((x69%x70)%(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int16_t x74 = INT16_MAX;
	int8_t x75 = INT8_MAX;
	volatile int32_t t18 = -6;

	t18 = ((x73%x74)%(x75|x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = 32LL;
	int8_t x78 = INT8_MIN;
	int8_t x79 = -42;
	uint32_t x80 = 906U;

	t19 = ((x77%x78)%(x79|x80));

	if (t19 != 32LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	uint64_t x82 = 233224322802129LLU;
	volatile int16_t x83 = -408;
	uint64_t x84 = UINT64_MAX;

	t20 = ((x81%x82)%(x83|x84));

	if (t20 != 99485997960362LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = 3707852828164977LLU;
	uint16_t x87 = 192U;
	volatile uint64_t t21 = 5597433710013673LLU;

	t21 = ((x85%x86)%(x87|x88));

	if (t21 != 176253588791040LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = -1;
	static int8_t x91 = INT8_MAX;
	uint64_t x92 = UINT64_MAX;
	uint64_t t22 = 2960372473464570LLU;

	t22 = ((x89%x90)%(x91|x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int16_t x95 = INT16_MIN;
	int64_t x96 = 11921311019129739LL;
	static int64_t t23 = 415LL;

	t23 = ((x93%x94)%(x95|x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	uint8_t x99 = UINT8_MAX;
	static int8_t x100 = -3;
	volatile uint32_t t24 = 1354U;

	t24 = ((x97%x98)%(x99|x100));

	if (t24 != 117U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = -9;
	static int8_t x103 = 6;
	int8_t x104 = -1;

	t25 = ((x101%x102)%(x103|x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -14;
	static int32_t x106 = INT32_MIN;
	static int16_t x107 = INT16_MAX;
	int32_t x108 = INT32_MIN;
	int32_t t26 = -10890110;

	t26 = ((x105%x106)%(x107|x108));

	if (t26 != -14) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	uint8_t x110 = 1U;
	uint8_t x111 = 1U;
	int64_t t27 = 0LL;

	t27 = ((x109%x110)%(x111|x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 3178085902840LLU;
	volatile int64_t x114 = -1LL;
	int64_t x115 = 522208866657670LL;
	static volatile int64_t x116 = INT64_MIN;
	uint64_t t28 = 1220969846187LLU;

	t28 = ((x113%x114)%(x115|x116));

	if (t28 != 3178085902840LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 0U;
	int64_t x118 = INT64_MIN;
	volatile int8_t x119 = INT8_MIN;
	static uint16_t x120 = UINT16_MAX;
	int64_t t29 = -30644300060LL;

	t29 = ((x117%x118)%(x119|x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x122 = 67433LLU;
	uint16_t x124 = UINT16_MAX;
	uint64_t t30 = 4131140395781354LLU;

	t30 = ((x121%x122)%(x123|x124));

	if (t30 != 61568LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MIN;
	int32_t x127 = 210;
	int64_t x128 = -11458739LL;

	t31 = ((x125%x126)%(x127|x128));

	if (t31 != -4726757LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x130 = 438U;
	uint16_t x131 = 43U;
	volatile uint64_t t32 = 322899111568656417LLU;

	t32 = ((x129%x130)%(x131|x132));

	if (t32 != 230LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x134 = 25131LLU;
	int16_t x135 = INT16_MIN;

	t33 = ((x133%x134)%(x135|x136));

	if (t33 != 15561LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -2;
	int8_t x138 = INT8_MIN;
	int64_t x139 = 5112331693110461LL;
	int32_t x140 = -1;
	static int64_t t34 = 11766549238569LL;

	t34 = ((x137%x138)%(x139|x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 29528U;
	int32_t x144 = INT32_MIN;
	volatile int64_t t35 = -68434834975087235LL;

	t35 = ((x141%x142)%(x143|x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -20;
	static uint16_t x146 = 1U;
	int64_t x147 = INT64_MIN;
	int64_t x148 = -1LL;
	int64_t t36 = -260327388987LL;

	t36 = ((x145%x146)%(x147|x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 632U;
	static int32_t x150 = 1358;
	uint16_t x151 = 32U;
	uint64_t x152 = UINT64_MAX;
	static uint64_t t37 = 9212360146571207078LLU;

	t37 = ((x149%x150)%(x151|x152));

	if (t37 != 632LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 10175U;
	int16_t x154 = 19;
	int64_t x155 = INT64_MIN;
	uint8_t x156 = UINT8_MAX;
	int64_t t38 = -141091007LL;

	t38 = ((x153%x154)%(x155|x156));

	if (t38 != 10LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 21U;
	volatile int64_t t39 = -491799669337880LL;

	t39 = ((x157%x158)%(x159|x160));

	if (t39 != 21LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x162 = 1U;
	uint8_t x164 = UINT8_MAX;
	uint32_t t40 = 3U;

	t40 = ((x161%x162)%(x163|x164));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x165 = -1;
	static int32_t x166 = INT32_MIN;
	static volatile int16_t x167 = -1;
	static int32_t t41 = 1217;

	t41 = ((x165%x166)%(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MIN;
	int32_t x171 = INT32_MAX;
	static int16_t x172 = INT16_MAX;
	volatile int32_t t42 = 30;

	t42 = ((x169%x170)%(x171|x172));

	if (t42 != -3) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	uint64_t x174 = UINT64_MAX;
	int64_t x175 = -17656491750LL;
	volatile int64_t x176 = -1LL;
	volatile uint64_t t43 = 9218961688878336003LLU;

	t43 = ((x173%x174)%(x175|x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x178 = 866247061670LLU;
	int64_t x179 = 2932985738LL;
	int8_t x180 = INT8_MIN;
	uint64_t t44 = 255LLU;

	t44 = ((x177%x178)%(x179|x180));

	if (t44 != 59157017423LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int64_t x183 = -1LL;

	t45 = ((x181%x182)%(x183|x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MIN;
	static int16_t x187 = -1;
	volatile int32_t x188 = -1;

	t46 = ((x185%x186)%(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = INT32_MIN;
	static int8_t x190 = 2;
	volatile uint8_t x191 = UINT8_MAX;
	int32_t x192 = 8650;
	static int32_t t47 = -1894;

	t47 = ((x189%x190)%(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int16_t x194 = 8;
	uint16_t x195 = 0U;
	static volatile uint8_t x196 = 14U;
	int64_t t48 = 240LL;

	t48 = ((x193%x194)%(x195|x196));

	if (t48 != 7LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 846U;
	volatile int32_t x198 = 1678;
	volatile int16_t x199 = -14;
	volatile int32_t t49 = 7894;

	t49 = ((x197%x198)%(x199|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MAX;
	uint8_t x203 = UINT8_MAX;
	int16_t x204 = INT16_MAX;

	t50 = ((x201%x202)%(x203|x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = -1;
	static volatile uint16_t x207 = 6759U;
	uint32_t x208 = UINT32_MAX;
	uint32_t t51 = 2332965U;

	t51 = ((x205%x206)%(x207|x208));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = 27857584036105LL;
	int8_t x211 = INT8_MAX;
	int32_t x212 = -1;
	int64_t t52 = -85626054705LL;

	t52 = ((x209%x210)%(x211|x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x215 = UINT32_MAX;
	int64_t x216 = -2LL;

	t53 = ((x213%x214)%(x215|x216));

	if (t53 != 32166831246LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = 1U;
	int16_t x218 = INT16_MIN;
	uint32_t x220 = UINT32_MAX;
	uint32_t t54 = 112099092U;

	t54 = ((x217%x218)%(x219|x220));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MIN;
	static uint16_t x222 = 225U;
	volatile int32_t x224 = INT32_MIN;
	int32_t t55 = -1;

	t55 = ((x221%x222)%(x223|x224));

	if (t55 != -143) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int32_t x226 = INT32_MIN;
	int8_t x228 = 1;
	volatile uint64_t t56 = 486597905212LLU;

	t56 = ((x225%x226)%(x227|x228));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MAX;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = 4U;
	volatile int64_t t57 = -1LL;

	t57 = ((x229%x230)%(x231|x232));

	if (t57 != 3LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 12636;
	int8_t x234 = -1;
	int16_t x235 = 0;
	int8_t x236 = 3;
	int32_t t58 = -161897185;

	t58 = ((x233%x234)%(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 1023U;
	static volatile uint64_t x238 = 138LLU;
	uint8_t x239 = 4U;
	int16_t x240 = INT16_MAX;
	uint64_t t59 = 28LLU;

	t59 = ((x237%x238)%(x239|x240));

	if (t59 != 57LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x242 = INT8_MAX;
	int16_t x243 = -1;
	volatile uint64_t t60 = 61114074175335131LLU;

	t60 = ((x241%x242)%(x243|x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	volatile uint16_t x246 = 5U;
	int64_t x247 = -97116765LL;
	uint32_t x248 = 2U;
	int64_t t61 = -103723981LL;

	t61 = ((x245%x246)%(x247|x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x251 = -1676LL;
	volatile int16_t x252 = INT16_MIN;
	volatile int64_t t62 = 1LL;

	t62 = ((x249%x250)%(x251|x252));

	if (t62 != -60LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 1220885335979530150LLU;
	int64_t x254 = -1LL;
	uint64_t x255 = 229584482687740LLU;
	static uint64_t t63 = 2364005LLU;

	t63 = ((x253%x254)%(x255|x256));

	if (t63 != 1220885335979530150LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MAX;
	int16_t x258 = INT16_MIN;
	static int16_t x259 = INT16_MIN;
	uint16_t x260 = UINT16_MAX;
	int32_t t64 = -2714;

	t64 = ((x257%x258)%(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x261 = UINT32_MAX;
	int8_t x262 = -1;
	uint32_t x263 = 10708U;
	int8_t x264 = INT8_MAX;
	volatile uint32_t t65 = 66092U;

	t65 = ((x261%x262)%(x263|x264));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x266 = INT32_MAX;
	int8_t x267 = INT8_MAX;
	int8_t x268 = -2;

	t66 = ((x265%x266)%(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 53;
	static int16_t x270 = -1;
	int16_t x271 = 905;
	volatile int32_t t67 = 1161943;

	t67 = ((x269%x270)%(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 1;
	volatile uint16_t x274 = 350U;
	static int32_t x275 = -923636737;
	int16_t x276 = INT16_MAX;

	t68 = ((x273%x274)%(x275|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x277 = -1;
	uint64_t x278 = 14977094LLU;
	uint16_t x279 = 4262U;
	int32_t x280 = INT32_MIN;
	uint64_t t69 = 1410382964712LLU;

	t69 = ((x277%x278)%(x279|x280));

	if (t69 != 6611631LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 604971360U;
	static uint8_t x282 = 118U;
	volatile int8_t x283 = INT8_MIN;
	static volatile uint32_t t70 = 523U;

	t70 = ((x281%x282)%(x283|x284));

	if (t70 != 110U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = 15;
	uint16_t x286 = 1U;
	volatile int64_t x288 = 452486054533776242LL;
	int64_t t71 = -4323936LL;

	t71 = ((x285%x286)%(x287|x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MIN;
	int32_t x291 = -1;
	volatile int64_t t72 = 5LL;

	t72 = ((x289%x290)%(x291|x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	uint32_t x294 = UINT32_MAX;
	static int16_t x296 = INT16_MAX;
	static uint32_t t73 = 2209105U;

	t73 = ((x293%x294)%(x295|x296));

	if (t73 != 2147483648U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 12112805367LLU;
	uint16_t x298 = 121U;
	int32_t x299 = -552833;
	volatile uint64_t t74 = 188499132710042530LLU;

	t74 = ((x297%x298)%(x299|x300));

	if (t74 != 58LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = 166642;
	int64_t x302 = INT64_MAX;
	int64_t x303 = 56520458609296LL;
	volatile int64_t t75 = -3533955716LL;

	t75 = ((x301%x302)%(x303|x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 38020;
	int32_t x306 = INT32_MAX;
	int32_t x307 = 0;
	volatile uint16_t x308 = UINT16_MAX;

	t76 = ((x305%x306)%(x307|x308));

	if (t76 != 38020) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = 1891;
	int32_t x310 = INT32_MIN;
	uint32_t x311 = 3U;
	uint32_t x312 = 172562U;

	t77 = ((x309%x310)%(x311|x312));

	if (t77 != 1891U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	uint32_t x314 = UINT32_MAX;
	int16_t x315 = 137;
	uint16_t x316 = 28274U;
	volatile uint32_t t78 = 192U;

	t78 = ((x313%x314)%(x315|x316));

	if (t78 != 8713U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MAX;
	volatile int32_t x318 = -1;
	volatile uint16_t x319 = 485U;
	uint32_t x320 = 1775874627U;
	volatile int64_t t79 = -33254263LL;

	t79 = ((x317%x318)%(x319|x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x321 = INT64_MIN;

	t80 = ((x321%x322)%(x323|x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MIN;
	volatile int64_t x328 = INT64_MAX;

	t81 = ((x325%x326)%(x327|x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	int32_t x330 = INT32_MAX;
	int32_t x331 = 1;
	uint16_t x332 = 217U;
	volatile int32_t t82 = -307746;

	t82 = ((x329%x330)%(x331|x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	static int32_t x334 = 198;
	int16_t x336 = 0;
	int32_t t83 = 2962456;

	t83 = ((x333%x334)%(x335|x336));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 623412LLU;
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MAX;
	int16_t x340 = INT16_MAX;
	static volatile uint64_t t84 = 259818109286LLU;

	t84 = ((x337%x338)%(x339|x340));

	if (t84 != 839LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = INT64_MIN;
	int64_t x344 = INT64_MAX;
	volatile int64_t t85 = 2072818802355LL;

	t85 = ((x341%x342)%(x343|x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = -1;
	int16_t x346 = -1;
	static uint32_t x348 = UINT32_MAX;
	uint32_t t86 = 1228U;

	t86 = ((x345%x346)%(x347|x348));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x349 = -1;
	volatile int32_t x350 = -4;
	uint8_t x351 = 52U;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 0;

	t87 = ((x349%x350)%(x351|x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = 14;
	int32_t t88 = 10000;

	t88 = ((x353%x354)%(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x357 = INT32_MAX;
	uint32_t x359 = 1099983581U;
	volatile int16_t x360 = -104;
	volatile uint32_t t89 = 53U;

	t89 = ((x357%x358)%(x359|x360));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 79U;
	int64_t x363 = -449419LL;
	static int64_t t90 = 1445LL;

	t90 = ((x361%x362)%(x363|x364));

	if (t90 != 2LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x365 = -3346223LL;
	int64_t x366 = INT64_MAX;
	static int32_t x368 = INT32_MIN;
	int64_t t91 = -6160LL;

	t91 = ((x365%x366)%(x367|x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	uint8_t x370 = 1U;
	uint64_t x371 = 3506758LLU;
	static uint64_t t92 = 181943862899112LLU;

	t92 = ((x369%x370)%(x371|x372));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t t93 = 14059619957554LLU;

	t93 = ((x373%x374)%(x375|x376));

	if (t93 != 85LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = -1;
	int8_t x380 = 0;

	t94 = ((x377%x378)%(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 19U;
	uint16_t x382 = UINT16_MAX;
	int32_t x383 = 363180;
	static uint16_t x384 = 5U;

	t95 = ((x381%x382)%(x383|x384));

	if (t95 != 19) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = INT64_MIN;
	uint8_t x388 = 64U;
	volatile int64_t t96 = -42918LL;

	t96 = ((x385%x386)%(x387|x388));

	if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x389 = UINT32_MAX;
	volatile int64_t x390 = -1LL;
	int16_t x391 = INT16_MAX;
	uint16_t x392 = 4185U;
	static int64_t t97 = -3834675797LL;

	t97 = ((x389%x390)%(x391|x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = -1;
	volatile int8_t x395 = -1;
	uint16_t x396 = 2U;
	volatile int64_t t98 = 164LL;

	t98 = ((x393%x394)%(x395|x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x398 = INT32_MIN;
	static volatile int32_t x399 = 66;
	int32_t x400 = INT32_MIN;

	t99 = ((x397%x398)%(x399|x400));

	if (t99 != -32768) { NG(); } else { ; }
	
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

