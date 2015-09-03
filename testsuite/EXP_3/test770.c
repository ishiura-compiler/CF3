#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = INT32_MIN;
volatile int8_t x12 = -1;
int64_t x13 = -121378564047015381LL;
volatile int32_t x15 = -1;
volatile int32_t t3 = -2326881;
uint16_t x23 = UINT16_MAX;
uint32_t x26 = 100U;
static int8_t x36 = INT8_MIN;
static volatile int32_t t8 = -910;
uint16_t x42 = 1U;
uint16_t x46 = UINT16_MAX;
volatile int64_t t11 = 38242500713423LL;
int8_t x60 = INT8_MIN;
int32_t x62 = INT32_MIN;
static int64_t x68 = -43LL;
int16_t x77 = -30;
volatile int16_t x85 = 9;
int64_t x87 = -1LL;
int8_t x89 = INT8_MIN;
int32_t x101 = -1;
int64_t x103 = INT64_MIN;
int64_t t25 = -59689LL;
volatile uint64_t x105 = UINT64_MAX;
uint32_t t26 = 24541U;
uint8_t x117 = 17U;
volatile uint64_t t30 = 1416019LLU;
int8_t x125 = INT8_MIN;
volatile uint32_t x130 = 21648U;
volatile int16_t x131 = INT16_MIN;
int16_t x132 = 3720;
int16_t x134 = INT16_MAX;
uint64_t x139 = 541058LLU;
static int16_t x140 = -1467;
int32_t x151 = INT32_MIN;
uint32_t x152 = 86U;
int16_t x161 = -731;
uint32_t x163 = 464U;
int32_t x173 = INT32_MAX;
volatile int8_t x176 = INT8_MAX;
int16_t x179 = INT16_MIN;
static int32_t x181 = 2876343;
int8_t x183 = -1;
static volatile int32_t t45 = 1595545;
volatile int16_t x188 = INT16_MIN;
static volatile int32_t t48 = -30;
int16_t x202 = INT16_MAX;
static volatile int32_t t49 = -99126866;
int64_t t51 = -240256LL;
int32_t x213 = INT32_MIN;
int32_t x216 = -126;
int32_t t52 = 26;
uint16_t x219 = UINT16_MAX;
volatile int64_t t54 = 2154287356074096LL;
int64_t x228 = -1LL;
int16_t x231 = INT16_MIN;
volatile uint32_t x238 = 476U;
volatile uint32_t t58 = 0U;
int64_t x242 = INT64_MAX;
int8_t x249 = -1;
uint8_t x251 = 102U;
int8_t x252 = INT8_MAX;
static volatile uint64_t x255 = UINT64_MAX;
static uint64_t t61 = 245265978522LLU;
static volatile uint32_t x259 = UINT32_MAX;
volatile uint32_t t62 = 7632407U;
uint64_t x261 = 62LLU;
volatile int64_t x262 = INT64_MAX;
uint16_t x264 = 447U;
int32_t x265 = INT32_MAX;
int8_t x279 = -1;
int32_t t67 = 362977;
volatile uint32_t x283 = 221151602U;
volatile uint64_t t69 = 17723LLU;
uint8_t x290 = 26U;
static uint64_t x292 = 7965643053000601444LLU;
int8_t x297 = INT8_MAX;
static volatile uint32_t x303 = 166196U;
uint64_t x321 = 5144431859238964533LLU;
static int64_t t79 = 95237465LL;
int64_t x333 = INT64_MIN;
uint32_t x336 = UINT32_MAX;
static volatile int32_t x339 = -1;
int16_t x340 = INT16_MAX;
uint32_t x343 = UINT32_MAX;
volatile int64_t x345 = INT64_MAX;
static int8_t x349 = -1;
int8_t x350 = -1;
int8_t x352 = 5;
volatile int64_t t85 = 0LL;
volatile int64_t x355 = INT64_MIN;
volatile uint32_t t88 = 1937U;
volatile int64_t t89 = 15497596488635LL;
int64_t x370 = INT64_MIN;
volatile int16_t x371 = INT16_MAX;
static int32_t t90 = 8357089;
int32_t x379 = INT32_MIN;
static int8_t x380 = -1;
int64_t x386 = -1LL;
uint8_t x389 = UINT8_MAX;
static volatile uint8_t x394 = 123U;
int32_t x396 = 9894;
int8_t x398 = INT8_MAX;
uint32_t t98 = 724U;


void f0(void) {
	static volatile int8_t x1 = INT8_MIN;
	volatile int8_t x2 = INT8_MAX;
	int16_t x3 = INT16_MIN;
	int32_t t0 = -1046262341;

	t0 = ((x1==x2)*(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	static uint16_t x7 = 12U;
	int8_t x8 = -1;
	volatile int32_t t1 = -33;

	t1 = ((x5==x6)*(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 231106753U;
	static volatile uint8_t x10 = UINT8_MAX;
	volatile int8_t x11 = -1;
	volatile int32_t t2 = 58676128;

	t2 = ((x9==x10)*(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x14 = INT16_MIN;
	volatile int8_t x16 = INT8_MIN;

	t3 = ((x13==x14)*(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int64_t x18 = INT64_MAX;
	uint64_t x19 = UINT64_MAX;
	volatile int64_t x20 = INT64_MIN;
	uint64_t t4 = 4536951689LLU;

	t4 = ((x17==x18)*(x19%x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	volatile int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 0;

	t5 = ((x21==x22)*(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	static int8_t x27 = INT8_MIN;
	int64_t x28 = INT64_MIN;
	static volatile int64_t t6 = 8643292174LL;

	t6 = ((x25==x26)*(x27%x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 3343;
	volatile uint16_t x30 = 7U;
	static uint64_t x31 = 24177504LLU;
	int32_t x32 = 31;
	volatile uint64_t t7 = 29403LLU;

	t7 = ((x29==x30)*(x31%x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int8_t x34 = INT8_MIN;
	volatile int8_t x35 = -5;

	t8 = ((x33==x34)*(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	volatile int16_t x38 = -1;
	static int32_t x39 = -1885604;
	int8_t x40 = INT8_MIN;
	int32_t t9 = -8;

	t9 = ((x37==x38)*(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x43 = INT8_MIN;
	int16_t x44 = 43;
	volatile int32_t t10 = 19;

	t10 = ((x41==x42)*(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int32_t x47 = INT32_MIN;
	int64_t x48 = -1LL;

	t11 = ((x45==x46)*(x47%x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MAX;
	static uint16_t x51 = 1009U;
	volatile int8_t x52 = INT8_MIN;
	int32_t t12 = -1063;

	t12 = ((x49==x50)*(x51%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 1U;
	int64_t x54 = -1796219797089433LL;
	volatile int8_t x55 = INT8_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = 85641;

	t13 = ((x53==x54)*(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int64_t x58 = INT64_MIN;
	int8_t x59 = -1;
	static int32_t t14 = 25900;

	t14 = ((x57==x58)*(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 476645604U;
	int64_t x63 = INT64_MIN;
	volatile int64_t x64 = -27360LL;
	int64_t t15 = 2267301120303880227LL;

	t15 = ((x61==x62)*(x63%x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	uint8_t x66 = 21U;
	int16_t x67 = -1;
	volatile int64_t t16 = -119930922077046708LL;

	t16 = ((x65==x66)*(x67%x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 1U;
	int16_t x70 = INT16_MIN;
	static int8_t x71 = INT8_MAX;
	static int64_t x72 = 1LL;
	volatile int64_t t17 = 207350274288630LL;

	t17 = ((x69==x70)*(x71%x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 101779047;
	int16_t x74 = -8620;
	int16_t x75 = INT16_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t18 = 7117U;

	t18 = ((x73==x74)*(x75%x76));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x78 = INT8_MIN;
	uint8_t x79 = 13U;
	int64_t x80 = -546LL;
	static int64_t t19 = -50675648LL;

	t19 = ((x77==x78)*(x79%x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 35U;
	uint8_t x82 = 127U;
	int16_t x83 = -8;
	static int8_t x84 = -1;
	int32_t t20 = 4763;

	t20 = ((x81==x82)*(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x86 = INT64_MAX;
	int8_t x88 = INT8_MIN;
	int64_t t21 = 9858069562852LL;

	t21 = ((x85==x86)*(x87%x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	static uint64_t x91 = 3215940893LLU;
	int16_t x92 = INT16_MAX;
	static volatile uint64_t t22 = 57545261306LLU;

	t22 = ((x89==x90)*(x91%x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 7;
	int16_t x94 = 1813;
	static int32_t x95 = INT32_MIN;
	int32_t x96 = -1;
	static volatile int32_t t23 = 6007384;

	t23 = ((x93==x94)*(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	static int32_t x98 = 17418;
	uint64_t x99 = 28090LLU;
	int64_t x100 = -1LL;
	volatile uint64_t t24 = 600358404580903LLU;

	t24 = ((x97==x98)*(x99%x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = 116LL;
	int8_t x104 = -1;

	t25 = ((x101==x102)*(x103%x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x106 = INT32_MAX;
	uint32_t x107 = UINT32_MAX;
	volatile uint32_t x108 = UINT32_MAX;

	t26 = ((x105==x106)*(x107%x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 4U;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = -1;
	static int32_t x112 = INT32_MAX;
	volatile int32_t t27 = 290103;

	t27 = ((x109==x110)*(x111%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 7573U;
	int64_t x114 = 0LL;
	volatile int64_t x115 = INT64_MIN;
	volatile int8_t x116 = -1;
	static int64_t t28 = -8110LL;

	t28 = ((x113==x114)*(x115%x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = 2U;
	int32_t x119 = -1;
	volatile int32_t x120 = INT32_MAX;
	int32_t t29 = 7869;

	t29 = ((x117==x118)*(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MIN;
	int16_t x122 = -1;
	static uint64_t x123 = UINT64_MAX;
	int64_t x124 = INT64_MIN;

	t30 = ((x121==x122)*(x123%x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -9399;
	volatile int16_t x127 = INT16_MIN;
	volatile int16_t x128 = 184;
	static int32_t t31 = 53;

	t31 = ((x125==x126)*(x127%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static int32_t t32 = 897448196;

	t32 = ((x129==x130)*(x131%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int32_t x135 = -1;
	static volatile int32_t x136 = INT32_MIN;
	volatile int32_t t33 = 54952052;

	t33 = ((x133==x134)*(x135%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	static int16_t x138 = -1;
	volatile uint64_t t34 = 22LLU;

	t34 = ((x137==x138)*(x139%x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	volatile int8_t x142 = 1;
	int16_t x143 = INT16_MIN;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t35 = 1849930658378226LLU;

	t35 = ((x141==x142)*(x143%x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	static int64_t x146 = -1871326872613516LL;
	uint64_t x147 = 227124990678315LLU;
	volatile int64_t x148 = 5553435572242LL;
	volatile uint64_t t36 = 10618223057209LLU;

	t36 = ((x145==x146)*(x147%x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	uint8_t x150 = 1U;
	volatile uint32_t t37 = 5654U;

	t37 = ((x149==x150)*(x151%x152));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int16_t x154 = INT16_MIN;
	uint32_t x155 = 1082U;
	static uint16_t x156 = 12904U;
	uint32_t t38 = 44U;

	t38 = ((x153==x154)*(x155%x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	volatile int8_t x158 = INT8_MAX;
	uint8_t x159 = 1U;
	static int16_t x160 = INT16_MAX;
	volatile int32_t t39 = -230192398;

	t39 = ((x157==x158)*(x159%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MIN;
	int16_t x164 = INT16_MIN;
	static volatile uint32_t t40 = 32924118U;

	t40 = ((x161==x162)*(x163%x164));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x165 = UINT16_MAX;
	uint64_t x166 = 112LLU;
	uint8_t x167 = 83U;
	static volatile int8_t x168 = 1;
	int32_t t41 = 11;

	t41 = ((x165==x166)*(x167%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = 1;
	static int64_t x170 = -1LL;
	volatile uint16_t x171 = UINT16_MAX;
	int16_t x172 = 61;
	int32_t t42 = -5443;

	t42 = ((x169==x170)*(x171%x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x174 = UINT8_MAX;
	int16_t x175 = INT16_MIN;
	int32_t t43 = -33;

	t43 = ((x173==x174)*(x175%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x178 = INT8_MAX;
	int64_t x180 = -1LL;
	volatile int64_t t44 = 1LL;

	t44 = ((x177==x178)*(x179%x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = -1;
	int16_t x184 = INT16_MAX;

	t45 = ((x181==x182)*(x183%x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = 88053784LL;
	static volatile int16_t x187 = INT16_MIN;
	int32_t t46 = -121;

	t46 = ((x185==x186)*(x187%x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	volatile int8_t x190 = 1;
	volatile int64_t x191 = -1LL;
	int64_t x192 = INT64_MIN;
	static int64_t t47 = -1019426LL;

	t47 = ((x189==x190)*(x191%x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int64_t x194 = 25766827337118LL;
	int16_t x195 = INT16_MIN;
	volatile uint16_t x196 = UINT16_MAX;

	t48 = ((x193==x194)*(x195%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	static uint8_t x203 = UINT8_MAX;
	uint8_t x204 = 7U;

	t49 = ((x201==x202)*(x203%x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 53132U;
	int8_t x206 = INT8_MIN;
	uint16_t x207 = 224U;
	int16_t x208 = -10;
	volatile int32_t t50 = -1446394;

	t50 = ((x205==x206)*(x207%x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = -1;
	int64_t x210 = INT64_MIN;
	static int64_t x211 = -1LL;
	int64_t x212 = INT64_MAX;

	t51 = ((x209==x210)*(x211%x212));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x214 = 9U;
	int32_t x215 = INT32_MIN;

	t52 = ((x213==x214)*(x215%x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x217 = UINT8_MAX;
	static volatile int8_t x218 = INT8_MIN;
	uint16_t x220 = 5U;
	int32_t t53 = 0;

	t53 = ((x217==x218)*(x219%x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x221 = INT8_MIN;
	uint32_t x222 = 139231500U;
	int64_t x223 = -1LL;
	uint16_t x224 = 7U;

	t54 = ((x221==x222)*(x223%x224));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = UINT16_MAX;
	volatile int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MIN;
	volatile int64_t t55 = 6LL;

	t55 = ((x225==x226)*(x227%x228));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MAX;
	static int32_t x230 = INT32_MAX;
	static int64_t x232 = -1LL;
	volatile int64_t t56 = -1195433879281LL;

	t56 = ((x229==x230)*(x231%x232));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MIN;
	volatile uint32_t x234 = 40777686U;
	uint8_t x235 = 11U;
	int8_t x236 = -1;
	int32_t t57 = 212931391;

	t57 = ((x233==x234)*(x235%x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x237 = INT8_MAX;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = UINT32_MAX;

	t58 = ((x237==x238)*(x239%x240));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x241 = 35070113LL;
	uint32_t x243 = 15U;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t59 = 466703LLU;

	t59 = ((x241==x242)*(x243%x244));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x250 = 6;
	int32_t t60 = 2361231;

	t60 = ((x249==x250)*(x251%x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = -8773389LL;
	int32_t x254 = 480;
	volatile int32_t x256 = INT32_MIN;

	t61 = ((x253==x254)*(x255%x256));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = 22875;
	static uint32_t x258 = 720U;
	int32_t x260 = 114298;

	t62 = ((x257==x258)*(x259%x260));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x263 = INT8_MAX;
	int32_t t63 = -22146046;

	t63 = ((x261==x262)*(x263%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x266 = UINT32_MAX;
	uint32_t x267 = 58U;
	int64_t x268 = INT64_MIN;
	static int64_t t64 = 7885821656LL;

	t64 = ((x265==x266)*(x267%x268));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MAX;
	int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MAX;
	static int32_t x272 = 11;
	volatile int32_t t65 = 15869045;

	t65 = ((x269==x270)*(x271%x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = 1051;
	uint32_t x274 = 2953U;
	volatile int64_t x275 = -1LL;
	static uint32_t x276 = 601938974U;
	volatile int64_t t66 = 1593219191410271LL;

	t66 = ((x273==x274)*(x275%x276));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = 82750U;
	uint16_t x278 = 6U;
	static int16_t x280 = INT16_MAX;

	t67 = ((x277==x278)*(x279%x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = -1;
	static uint64_t x282 = 46LLU;
	uint32_t x284 = 3207U;
	uint32_t t68 = 122039314U;

	t68 = ((x281==x282)*(x283%x284));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x285 = INT64_MIN;
	int8_t x286 = 37;
	volatile uint64_t x287 = UINT64_MAX;
	static uint32_t x288 = 957321374U;

	t69 = ((x285==x286)*(x287%x288));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x289 = 1277U;
	int8_t x291 = 25;
	uint64_t t70 = 44603LLU;

	t70 = ((x289==x290)*(x291%x292));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x293 = INT32_MIN;
	int64_t x294 = 4354432036912902015LL;
	int32_t x295 = 0;
	static int8_t x296 = -1;
	volatile int32_t t71 = 1991809;

	t71 = ((x293==x294)*(x295%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x298 = 2;
	volatile uint8_t x299 = 0U;
	static volatile uint16_t x300 = 446U;
	volatile int32_t t72 = 731;

	t72 = ((x297==x298)*(x299%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = -1LL;
	int64_t x304 = INT64_MIN;
	int64_t t73 = -138336550LL;

	t73 = ((x301==x302)*(x303%x304));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = INT32_MAX;
	int16_t x306 = INT16_MIN;
	volatile int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t74 = -860675420;

	t74 = ((x305==x306)*(x307%x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x309 = INT16_MIN;
	uint8_t x310 = 5U;
	int32_t x311 = 515;
	int32_t x312 = -806632539;
	int32_t t75 = 854419651;

	t75 = ((x309==x310)*(x311%x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = -5945843803062LL;
	uint16_t x314 = UINT16_MAX;
	uint8_t x315 = 31U;
	volatile uint32_t x316 = 219503100U;
	volatile uint32_t t76 = 1667277U;

	t76 = ((x313==x314)*(x315%x316));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x317 = UINT32_MAX;
	static uint16_t x318 = 14U;
	int32_t x319 = INT32_MIN;
	static int64_t x320 = 24620461301LL;
	volatile int64_t t77 = 2072882108197LL;

	t77 = ((x317==x318)*(x319%x320));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x322 = 7059160071283031LL;
	int16_t x323 = -18;
	int8_t x324 = -17;
	volatile int32_t t78 = -259653;

	t78 = ((x321==x322)*(x323%x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = -1;
	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MIN;
	static volatile int16_t x328 = INT16_MIN;

	t79 = ((x325==x326)*(x327%x328));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x329 = 1492U;
	int8_t x330 = INT8_MAX;
	uint8_t x331 = 22U;
	uint64_t x332 = 710621555163988626LLU;
	uint64_t t80 = 0LLU;

	t80 = ((x329==x330)*(x331%x332));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x334 = INT64_MAX;
	int64_t x335 = INT64_MIN;
	int64_t t81 = -72142021LL;

	t81 = ((x333==x334)*(x335%x336));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = -246985;
	static uint16_t x338 = 26449U;
	int32_t t82 = -1167;

	t82 = ((x337==x338)*(x339%x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MIN;
	static int16_t x342 = INT16_MIN;
	uint32_t x344 = UINT32_MAX;
	volatile uint32_t t83 = 6146U;

	t83 = ((x341==x342)*(x343%x344));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x346 = 1974958562945LLU;
	int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t84 = -92493866;

	t84 = ((x345==x346)*(x347%x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x351 = -12704181937752LL;

	t85 = ((x349==x350)*(x351%x352));

	if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x353 = 300788593U;
	int16_t x354 = -2131;
	static volatile int32_t x356 = 27362651;
	volatile int64_t t86 = 482853056LL;

	t86 = ((x353==x354)*(x355%x356));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = INT8_MIN;
	static int16_t x358 = INT16_MIN;
	uint32_t x359 = 367570U;
	uint64_t x360 = 1722219955508066251LLU;
	volatile uint64_t t87 = 208223464435301LLU;

	t87 = ((x357==x358)*(x359%x360));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x361 = 6U;
	volatile uint64_t x362 = 3790LLU;
	int32_t x363 = -32763;
	volatile uint32_t x364 = 70616715U;

	t88 = ((x361==x362)*(x363%x364));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x365 = 0;
	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MIN;
	int32_t x368 = INT32_MIN;

	t89 = ((x365==x366)*(x367%x368));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = -1LL;
	int16_t x372 = 5941;

	t90 = ((x369==x370)*(x371%x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = -28;
	int16_t x374 = -1;
	int32_t x375 = INT32_MIN;
	volatile uint64_t x376 = UINT64_MAX;
	volatile uint64_t t91 = 12819330LLU;

	t91 = ((x373==x374)*(x375%x376));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MAX;
	volatile uint8_t x378 = 106U;
	static int32_t t92 = 2509;

	t92 = ((x377==x378)*(x379%x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = 718503637;
	int32_t x382 = INT32_MIN;
	volatile int64_t x383 = -1LL;
	uint64_t x384 = 484441413016583832LLU;
	volatile uint64_t t93 = 132796LLU;

	t93 = ((x381==x382)*(x383%x384));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x385 = -48;
	static int32_t x387 = -1;
	int64_t x388 = -297460757LL;
	static volatile int64_t t94 = 1062652988004478871LL;

	t94 = ((x385==x386)*(x387%x388));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x390 = INT8_MAX;
	int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MIN;
	volatile int32_t t95 = -18191224;

	t95 = ((x389==x390)*(x391%x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x393 = 129;
	int8_t x395 = 1;
	int32_t t96 = -14658;

	t96 = ((x393==x394)*(x395%x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x397 = INT32_MAX;
	uint16_t x399 = 5943U;
	static uint32_t x400 = 58040640U;
	static volatile uint32_t t97 = 23U;

	t97 = ((x397==x398)*(x399%x400));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x401 = 125617LL;
	uint8_t x402 = 2U;
	uint8_t x403 = 114U;
	static uint32_t x404 = UINT32_MAX;

	t98 = ((x401==x402)*(x403%x404));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = -15;
	uint32_t x406 = UINT32_MAX;
	int32_t x407 = -47175392;
	int32_t x408 = -1;
	static int32_t t99 = -435363257;

	t99 = ((x405==x406)*(x407%x408));

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

