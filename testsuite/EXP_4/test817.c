#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
static uint64_t x3 = 7415LLU;
uint8_t x6 = 10U;
volatile uint8_t x8 = 27U;
uint64_t x9 = UINT64_MAX;
int32_t x13 = -1;
int64_t x20 = -62340593931462818LL;
int32_t x25 = INT32_MAX;
uint64_t x28 = 3LLU;
static uint32_t x40 = 5361U;
uint8_t x49 = 9U;
volatile int64_t x52 = INT64_MIN;
static int64_t t12 = 2657222300397LL;
volatile int64_t t13 = -42LL;
static int64_t x61 = INT64_MIN;
volatile int64_t x64 = INT64_MIN;
int8_t x67 = 0;
int8_t x68 = -1;
static volatile int32_t t16 = 62597;
static int16_t x69 = -1;
static int8_t x70 = INT8_MIN;
int8_t x72 = INT8_MIN;
int32_t x81 = INT32_MIN;
uint64_t x86 = UINT64_MAX;
volatile uint64_t t21 = 9744LLU;
uint64_t x92 = 17986801684257737LLU;
int32_t x97 = INT32_MAX;
volatile int16_t x99 = 1562;
volatile int64_t t24 = 31518124LL;
int8_t x104 = -17;
uint32_t t26 = 12228U;
volatile uint16_t x110 = UINT16_MAX;
uint32_t x111 = 6525U;
uint32_t t27 = 28602U;
volatile int64_t t29 = 39356560647860LL;
uint32_t x129 = 244087335U;
int64_t x130 = INT64_MAX;
uint8_t x133 = 1U;
static volatile int64_t t31 = -32191698656233551LL;
int8_t x138 = INT8_MIN;
volatile uint64_t x143 = 262613691134449189LLU;
volatile uint64_t t33 = 401425LLU;
static int16_t x150 = INT16_MAX;
int16_t x156 = INT16_MAX;
int32_t x157 = INT32_MIN;
int8_t x162 = 1;
int32_t x166 = -1;
volatile uint64_t x167 = 7555350427880537666LLU;
int8_t x175 = INT8_MIN;
int64_t x176 = INT64_MIN;
int32_t x177 = -1;
uint64_t x186 = 81102972056LLU;
volatile uint64_t t44 = 548819085LLU;
int16_t x197 = INT16_MAX;
static uint16_t x201 = UINT16_MAX;
static uint32_t x206 = 522450688U;
int16_t x208 = -1;
volatile int32_t x213 = INT32_MAX;
static int16_t x214 = 0;
uint8_t x219 = UINT8_MAX;
uint8_t x220 = 3U;
volatile uint64_t t54 = 674010108890034LLU;
uint64_t x236 = UINT64_MAX;
static uint32_t x238 = 0U;
int64_t t57 = -1833769116730LL;
int8_t x246 = INT8_MIN;
volatile uint16_t x253 = 3U;
int32_t x265 = 159;
int8_t x268 = -1;
int32_t x271 = -1;
static int32_t x272 = -54226193;
volatile uint64_t t65 = 450367880853065021LLU;
volatile int8_t x279 = INT8_MIN;
int64_t t67 = 1LL;
int32_t x281 = -1;
int8_t x284 = INT8_MIN;
static volatile uint64_t t68 = 204250137358LLU;
uint64_t x288 = UINT64_MAX;
int8_t x290 = INT8_MIN;
uint16_t x291 = UINT16_MAX;
static volatile int64_t t70 = 267140746154LL;
static int16_t x295 = INT16_MIN;
int32_t x297 = -1;
int64_t x300 = -1LL;
static int32_t x304 = -30;
volatile uint64_t t74 = 29597LLU;
int16_t x311 = INT16_MIN;
int16_t x323 = 4476;
static uint32_t x330 = UINT32_MAX;
uint32_t t80 = 15572U;
uint64_t t81 = 191908853890792165LLU;
volatile int64_t x351 = 0LL;
static uint32_t x359 = 941U;
int16_t x360 = INT16_MIN;
static uint8_t x364 = 2U;
volatile uint64_t t88 = 127286937771614LLU;
volatile uint32_t x370 = UINT32_MAX;
uint8_t x371 = 24U;
volatile uint8_t x376 = 1U;
uint64_t x378 = UINT64_MAX;
int32_t x384 = INT32_MIN;
int64_t t93 = 73783LL;
static volatile uint64_t t94 = 30169757705386LLU;
static uint32_t x389 = 33992273U;
volatile uint64_t t95 = 122721231LLU;
int32_t x396 = INT32_MIN;
volatile uint32_t t97 = 656U;
uint64_t x402 = 683176865518LLU;
uint16_t x408 = 334U;


void f0(void) {
	static int16_t x1 = 91;
	int16_t x4 = 8249;
	uint64_t t0 = 103973461200252885LLU;

	t0 = (x1&(x2&(x3%x4)));

	if (t0 != 83LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	uint16_t x7 = 1221U;
	int32_t t1 = -108851;

	t1 = (x5&(x6&(x7%x8)));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	volatile int32_t x11 = INT32_MIN;
	int16_t x12 = INT16_MIN;
	uint64_t t2 = 125828021LLU;

	t2 = (x9&(x10&(x11%x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x14 = 500359LLU;
	static uint16_t x15 = UINT16_MAX;
	static int8_t x16 = -1;
	uint64_t t3 = 1514995101553LLU;

	t3 = (x13&(x14&(x15%x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int64_t x18 = -68854LL;
	static int16_t x19 = INT16_MIN;
	static volatile int64_t t4 = 1790066710830085721LL;

	t4 = (x17&(x18&(x19%x20)));

	if (t4 != -98304LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int8_t x22 = 1;
	int64_t x23 = INT64_MIN;
	volatile uint16_t x24 = UINT16_MAX;
	int64_t t5 = 1704LL;

	t5 = (x21&(x22&(x23%x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -22;
	uint16_t x27 = UINT16_MAX;
	static volatile uint64_t t6 = 6712LLU;

	t6 = (x25&(x26&(x27%x28)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int8_t x30 = INT8_MAX;
	uint16_t x31 = UINT16_MAX;
	uint8_t x32 = UINT8_MAX;
	int32_t t7 = -110;

	t7 = (x29&(x30&(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 97562U;
	uint8_t x34 = UINT8_MAX;
	int16_t x35 = INT16_MAX;
	int8_t x36 = INT8_MIN;
	volatile uint32_t t8 = 12563U;

	t8 = (x33&(x34&(x35%x36)));

	if (t8 != 26U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 1796700;
	static int32_t x38 = INT32_MAX;
	uint32_t x39 = UINT32_MAX;
	volatile uint32_t t9 = 49U;

	t9 = (x37&(x38&(x39%x40)));

	if (t9 != 2112U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 62U;
	uint64_t x42 = 834102656263312LLU;
	int32_t x43 = 949;
	int8_t x44 = 18;
	uint64_t t10 = 117965327300LLU;

	t10 = (x41&(x42&(x43%x44)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = 240337U;
	int64_t x46 = INT64_MAX;
	int32_t x47 = INT32_MIN;
	int16_t x48 = INT16_MAX;
	static int64_t t11 = -226640LL;

	t11 = (x45&(x46&(x47%x48)));

	if (t11 != 240336LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = 3;
	int16_t x51 = -1;

	t12 = (x49&(x50&(x51%x52)));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	static uint32_t x54 = UINT32_MAX;
	uint16_t x55 = UINT16_MAX;
	int64_t x56 = -4936368LL;

	t13 = (x53&(x54&(x55%x56)));

	if (t13 != 65535LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	static volatile int16_t x58 = INT16_MAX;
	volatile int64_t x59 = INT64_MAX;
	static int64_t x60 = INT64_MIN;
	volatile int64_t t14 = -3LL;

	t14 = (x57&(x58&(x59%x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x62 = -7;
	volatile int8_t x63 = INT8_MIN;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x61&(x62&(x63%x64)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int16_t x66 = -1;

	t16 = (x65&(x66&(x67%x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x71 = 52195192527644LLU;
	uint64_t t17 = 26533LLU;

	t17 = (x69&(x70&(x71%x72)));

	if (t17 != 52195192527616LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 1623575155161LL;
	int32_t x74 = 63;
	volatile int32_t x75 = INT32_MIN;
	uint64_t x76 = 571617999295417LLU;
	volatile uint64_t t18 = 3784767162208117LLU;

	t18 = (x73&(x74&(x75%x76)));

	if (t18 != 9LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 184U;
	uint64_t x78 = UINT64_MAX;
	static volatile uint16_t x79 = 13924U;
	static int16_t x80 = INT16_MAX;
	static uint64_t t19 = 577208113141082626LLU;

	t19 = (x77&(x78&(x79%x80)));

	if (t19 != 32LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x82 = 108433568480LL;
	volatile uint32_t x83 = 158317375U;
	uint16_t x84 = 27041U;
	volatile int64_t t20 = -26814LL;

	t20 = (x81&(x82&(x83%x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 6224LL;
	int64_t x87 = -1LL;
	static int8_t x88 = INT8_MIN;

	t21 = (x85&(x86&(x87%x88)));

	if (t21 != 6224LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = INT16_MIN;
	uint16_t x91 = UINT16_MAX;
	volatile uint64_t t22 = 6202928165672LLU;

	t22 = (x89&(x90&(x91%x92)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int64_t x94 = -970LL;
	uint16_t x95 = 63U;
	volatile int16_t x96 = INT16_MIN;
	int64_t t23 = -545633107295413LL;

	t23 = (x93&(x94&(x95%x96)));

	if (t23 != 54LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = -2724LL;
	uint16_t x100 = UINT16_MAX;

	t24 = (x97&(x98&(x99%x100)));

	if (t24 != 1048LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 2608U;
	int32_t x102 = 1511;
	int8_t x103 = INT8_MAX;
	static int32_t t25 = -2658342;

	t25 = (x101&(x102&(x103%x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -1;
	volatile uint32_t x106 = 77U;
	int8_t x107 = INT8_MIN;
	int16_t x108 = INT16_MAX;

	t26 = (x105&(x106&(x107%x108)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MAX;
	static int16_t x112 = -1;

	t27 = (x109&(x110&(x111%x112)));

	if (t27 != 6525U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int16_t x114 = 9280;
	int8_t x115 = INT8_MIN;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t28 = 5669921;

	t28 = (x113&(x114&(x115%x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int64_t x118 = -1604697437358508654LL;
	int16_t x119 = -3137;
	int64_t x120 = -323LL;

	t29 = (x117&(x118&(x119%x120)));

	if (t29 != 13586LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x131 = INT16_MIN;
	int16_t x132 = 60;
	static int64_t t30 = 116LL;

	t30 = (x129&(x130&(x131%x132)));

	if (t30 != 244087328LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x134 = 2U;
	int64_t x135 = INT64_MIN;
	uint16_t x136 = UINT16_MAX;

	t31 = (x133&(x134&(x135%x136)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 1910U;
	static uint8_t x139 = UINT8_MAX;
	int32_t x140 = -1;
	volatile int32_t t32 = 5;

	t32 = (x137&(x138&(x139%x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = 26456177573LL;
	static int8_t x142 = INT8_MIN;
	uint32_t x144 = UINT32_MAX;

	t33 = (x141&(x142&(x143%x144)));

	if (t33 != 13112192LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MAX;
	uint32_t x146 = 5111629U;
	int32_t x147 = -138056766;
	int8_t x148 = -1;
	volatile int64_t t34 = 51482240010LL;

	t34 = (x145&(x146&(x147%x148)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x149 = 135LL;
	uint64_t x151 = 4243715536LLU;
	static int8_t x152 = -12;
	volatile uint64_t t35 = 3189LLU;

	t35 = (x149&(x150&(x151%x152)));

	if (t35 != 128LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x153 = 7U;
	volatile int64_t x154 = -11239057LL;
	static uint64_t x155 = 61063LLU;
	uint64_t t36 = 296824202713096324LLU;

	t36 = (x153&(x154&(x155%x156)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x158 = UINT16_MAX;
	volatile uint32_t x159 = 443298U;
	static uint8_t x160 = UINT8_MAX;
	volatile uint32_t t37 = 1U;

	t37 = (x157&(x158&(x159%x160)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MIN;
	int64_t x163 = -1LL;
	static uint32_t x164 = UINT32_MAX;
	volatile int64_t t38 = 1LL;

	t38 = (x161&(x162&(x163%x164)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -1443462948635289LL;
	uint8_t x168 = 8U;
	static uint64_t t39 = 1LLU;

	t39 = (x165&(x166&(x167%x168)));

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = UINT32_MAX;
	int64_t x170 = -3941293127438LL;
	int8_t x171 = 0;
	volatile int8_t x172 = 1;
	int64_t t40 = -3448LL;

	t40 = (x169&(x170&(x171%x172)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = 2170838910149472LL;
	int32_t x174 = INT32_MIN;
	int64_t t41 = -1015240898240965LL;

	t41 = (x173&(x174&(x175%x176)));

	if (t41 != 2170837532672000LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x178 = INT8_MAX;
	uint64_t x179 = UINT64_MAX;
	int8_t x180 = -1;
	volatile uint64_t t42 = 13LLU;

	t42 = (x177&(x178&(x179%x180)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = -1823LL;
	static volatile int16_t x182 = INT16_MAX;
	uint32_t x183 = 130787U;
	int64_t x184 = INT64_MIN;
	static volatile int64_t t43 = 6LL;

	t43 = (x181&(x182&(x183%x184)));

	if (t43 != 30945LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = UINT32_MAX;
	uint64_t x187 = 150118014502828283LLU;
	uint64_t x188 = 234060598LLU;

	t44 = (x185&(x186&(x187%x188)));

	if (t44 != 33619992LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 16211LLU;
	volatile int64_t x190 = -605608857666382LL;
	static volatile int16_t x191 = INT16_MAX;
	static int32_t x192 = INT32_MAX;
	static volatile uint64_t t45 = 745521940497547612LLU;

	t45 = (x189&(x190&(x191%x192)));

	if (t45 != 15378LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	static int64_t x194 = -1LL;
	volatile int32_t x195 = 0;
	int64_t x196 = -1LL;
	volatile int64_t t46 = 31521264961011LL;

	t46 = (x193&(x194&(x195%x196)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x198 = 6833;
	int64_t x199 = INT64_MAX;
	uint16_t x200 = 81U;
	volatile int64_t t47 = -88897LL;

	t47 = (x197&(x198&(x199%x200)));

	if (t47 != 17LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x202 = INT64_MIN;
	static int32_t x203 = INT32_MAX;
	int16_t x204 = -1;
	static volatile int64_t t48 = -1384LL;

	t48 = (x201&(x202&(x203%x204)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MAX;
	static uint8_t x207 = 1U;
	volatile uint32_t t49 = 898690720U;

	t49 = (x205&(x206&(x207%x208)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x209 = INT8_MIN;
	int32_t x210 = -15370080;
	static int64_t x211 = INT64_MIN;
	static volatile int64_t x212 = 1585346107LL;
	volatile int64_t t50 = 2LL;

	t50 = (x209&(x210&(x211%x212)));

	if (t50 != -49217536LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x215 = UINT16_MAX;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t51 = 11484679;

	t51 = (x213&(x214&(x215%x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x217 = UINT64_MAX;
	int8_t x218 = INT8_MAX;
	volatile uint64_t t52 = 1LLU;

	t52 = (x217&(x218&(x219%x220)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	volatile int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MAX;
	uint16_t x224 = 205U;
	int64_t t53 = 111LL;

	t53 = (x221&(x222&(x223%x224)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x225 = 27U;
	int8_t x226 = INT8_MAX;
	static uint64_t x227 = 82LLU;
	volatile int32_t x228 = INT32_MIN;

	t54 = (x225&(x226&(x227%x228)));

	if (t54 != 18LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x229 = -209686098;
	static volatile int8_t x230 = -44;
	static volatile uint32_t x231 = 48373U;
	static int64_t x232 = -1LL;
	volatile int64_t t55 = 12LL;

	t55 = (x229&(x230&(x231%x232)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 1756LLU;
	uint16_t x234 = UINT16_MAX;
	int8_t x235 = -1;
	volatile uint64_t t56 = 53339488954LLU;

	t56 = (x233&(x234&(x235%x236)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	int8_t x239 = INT8_MAX;
	int64_t x240 = -3230077677547LL;

	t57 = (x237&(x238&(x239%x240)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x241 = UINT16_MAX;
	static int16_t x242 = INT16_MAX;
	int32_t x243 = -1;
	int32_t x244 = INT32_MIN;
	volatile int32_t t58 = 263667541;

	t58 = (x241&(x242&(x243%x244)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x245 = 1505U;
	static uint8_t x247 = UINT8_MAX;
	static volatile int8_t x248 = -1;
	static int32_t t59 = -178;

	t59 = (x245&(x246&(x247%x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x249 = INT8_MAX;
	int16_t x250 = 154;
	volatile int8_t x251 = INT8_MIN;
	volatile int64_t x252 = 256997597608701LL;
	volatile int64_t t60 = -26979691332172472LL;

	t60 = (x249&(x250&(x251%x252)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x254 = 25U;
	int8_t x255 = INT8_MIN;
	static volatile int64_t x256 = INT64_MAX;
	volatile int64_t t61 = 1146135624LL;

	t61 = (x253&(x254&(x255%x256)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x258 = -251;
	static int16_t x259 = INT16_MIN;
	volatile int32_t x260 = -173657356;
	static uint32_t t62 = 36069U;

	t62 = (x257&(x258&(x259%x260)));

	if (t62 != 4294934528U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = 5981266864627662LLU;
	int8_t x262 = -1;
	int8_t x263 = INT8_MIN;
	uint64_t x264 = 19LLU;
	uint64_t t63 = 1049438149320788LLU;

	t63 = (x261&(x262&(x263%x264)));

	if (t63 != 2LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x266 = 8053U;
	static int64_t x267 = -78768352LL;
	static volatile int64_t t64 = 76082454980748271LL;

	t64 = (x265&(x266&(x267%x268)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MIN;
	static uint64_t x270 = UINT64_MAX;

	t65 = (x269&(x270&(x271%x272)));

	if (t65 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x273 = -1;
	volatile int16_t x274 = 6;
	volatile uint64_t x275 = 5266628LLU;
	int8_t x276 = INT8_MAX;
	uint64_t t66 = 234797435726965416LLU;

	t66 = (x273&(x274&(x275%x276)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = -1LL;
	uint32_t x278 = 0U;
	static volatile uint32_t x280 = 5855455U;

	t67 = (x277&(x278&(x279%x280)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x282 = 0;
	static uint64_t x283 = 39860255985696363LLU;

	t68 = (x281&(x282&(x283%x284)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = 242388963LLU;
	static uint16_t x286 = UINT16_MAX;
	uint64_t x287 = 2906921468LLU;
	uint64_t t69 = 3684538143318527841LLU;

	t69 = (x285&(x286&(x287%x288)));

	if (t69 != 2528LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = 1LL;
	static int32_t x292 = -1;

	t70 = (x289&(x290&(x291%x292)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x293 = UINT64_MAX;
	int64_t x294 = 117309066848878025LL;
	uint32_t x296 = 343694492U;
	uint64_t t71 = 2581316434784140580LLU;

	t71 = (x293&(x294&(x295%x296)));

	if (t71 != 169945216LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x298 = INT32_MIN;
	int16_t x299 = INT16_MAX;
	volatile int64_t t72 = -68159175LL;

	t72 = (x297&(x298&(x299%x300)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MAX;
	int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MIN;
	int32_t t73 = -354187;

	t73 = (x301&(x302&(x303%x304)));

	if (t73 != 2147450880) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = 6LLU;
	volatile uint32_t x306 = 13U;
	int16_t x307 = 18;
	uint32_t x308 = 6U;

	t74 = (x305&(x306&(x307%x308)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x309 = 1994676367710392LLU;
	volatile int32_t x310 = 1108274;
	static uint32_t x312 = 6734U;
	uint64_t t75 = 7LLU;

	t75 = (x309&(x310&(x311%x312)));

	if (t75 != 2080LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x313 = -41LL;
	static int16_t x314 = INT16_MIN;
	volatile int16_t x315 = INT16_MIN;
	int8_t x316 = -1;
	static volatile int64_t t76 = 1890LL;

	t76 = (x313&(x314&(x315%x316)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = INT16_MAX;
	static int64_t x318 = -1LL;
	int16_t x319 = 789;
	volatile uint32_t x320 = 2002U;
	volatile int64_t t77 = -44LL;

	t77 = (x317&(x318&(x319%x320)));

	if (t77 != 789LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x321 = 1184455LLU;
	int16_t x322 = INT16_MIN;
	int16_t x324 = -133;
	uint64_t t78 = 64558443493448005LLU;

	t78 = (x321&(x322&(x323%x324)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = INT32_MAX;
	static uint8_t x326 = 3U;
	int32_t x327 = INT32_MAX;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t79 = 631383892941913LLU;

	t79 = (x325&(x326&(x327%x328)));

	if (t79 != 3LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MAX;
	int32_t x331 = -1;
	static uint16_t x332 = 24061U;

	t80 = (x329&(x330&(x331%x332)));

	if (t80 != 2147483647U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = 4;
	uint64_t x334 = 730727LLU;
	int16_t x335 = -1;
	int16_t x336 = -327;

	t81 = (x333&(x334&(x335%x336)));

	if (t81 != 4LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x337 = 45265226608LLU;
	static volatile int8_t x338 = INT8_MIN;
	uint8_t x339 = UINT8_MAX;
	static int16_t x340 = INT16_MIN;
	uint64_t t82 = 1020760086302108LLU;

	t82 = (x337&(x338&(x339%x340)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = -72917729;
	uint32_t x342 = UINT32_MAX;
	int16_t x343 = -1;
	int32_t x344 = INT32_MAX;
	uint32_t t83 = 10145U;

	t83 = (x341&(x342&(x343%x344)));

	if (t83 != 4222049567U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MAX;
	uint64_t x346 = UINT64_MAX;
	int16_t x347 = -1;
	uint8_t x348 = UINT8_MAX;
	static uint64_t t84 = 0LLU;

	t84 = (x345&(x346&(x347%x348)));

	if (t84 != 32767LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x349 = 5U;
	uint8_t x350 = 55U;
	volatile int8_t x352 = INT8_MIN;
	static int64_t t85 = -193443616596575483LL;

	t85 = (x349&(x350&(x351%x352)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 0U;
	static int64_t x354 = -873711496026003795LL;
	volatile int16_t x355 = 14;
	uint32_t x356 = 11089U;
	static int64_t t86 = 1593846658829866912LL;

	t86 = (x353&(x354&(x355%x356)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x357 = INT64_MIN;
	int16_t x358 = -6;
	int64_t t87 = 7LL;

	t87 = (x357&(x358&(x359%x360)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x361 = INT8_MIN;
	uint64_t x362 = 866896609715LLU;
	static uint16_t x363 = 2069U;

	t88 = (x361&(x362&(x363%x364)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x365 = INT16_MIN;
	volatile int64_t x366 = 95849068946LL;
	int64_t x367 = INT64_MAX;
	uint8_t x368 = UINT8_MAX;
	static volatile int64_t t89 = 485084362593998792LL;

	t89 = (x365&(x366&(x367%x368)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = 878;
	static uint16_t x372 = 23653U;
	static volatile uint32_t t90 = 96736291U;

	t90 = (x369&(x370&(x371%x372)));

	if (t90 != 8U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x373 = 924363U;
	volatile int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MIN;
	uint32_t t91 = 8U;

	t91 = (x373&(x374&(x375%x376)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x377 = INT8_MIN;
	uint64_t x379 = 106171LLU;
	static volatile int64_t x380 = INT64_MIN;
	volatile uint64_t t92 = 236918435LLU;

	t92 = (x377&(x378&(x379%x380)));

	if (t92 != 106112LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x381 = -7258684248045LL;
	int32_t x382 = -1;
	int64_t x383 = 2680292998857432256LL;

	t93 = (x381&(x382&(x383%x384)));

	if (t93 != 278138880LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x385 = 60LLU;
	int8_t x386 = 2;
	volatile int16_t x387 = INT16_MAX;
	uint64_t x388 = 425849LLU;

	t94 = (x385&(x386&(x387%x388)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x390 = 29695775740675LLU;
	int8_t x391 = -1;
	int8_t x392 = INT8_MIN;

	t95 = (x389&(x390&(x391%x392)));

	if (t95 != 33686017LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x393 = 3806U;
	int64_t x394 = INT64_MIN;
	static int8_t x395 = INT8_MIN;
	static int64_t t96 = 279560888954589826LL;

	t96 = (x393&(x394&(x395%x396)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = 10;
	static volatile uint32_t x398 = 47935049U;
	volatile int16_t x399 = 0;
	volatile int16_t x400 = INT16_MIN;

	t97 = (x397&(x398&(x399%x400)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x401 = UINT16_MAX;
	int64_t x403 = INT64_MIN;
	static int64_t x404 = -1LL;
	uint64_t t98 = 15LLU;

	t98 = (x401&(x402&(x403%x404)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = -1;
	int8_t x406 = -1;
	int8_t x407 = INT8_MIN;
	volatile int32_t t99 = 6;

	t99 = (x405&(x406&(x407%x408)));

	if (t99 != -128) { NG(); } else { ; }
	
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

