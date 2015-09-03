#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MIN;
uint32_t x11 = 913U;
static int64_t x13 = -1LL;
static int16_t x17 = -1;
int64_t x18 = INT64_MAX;
volatile int64_t t5 = -13112670735LL;
uint16_t x36 = UINT16_MAX;
int32_t t8 = 859155;
volatile int8_t x49 = 28;
volatile uint16_t x63 = 500U;
static int64_t x65 = INT64_MAX;
static uint8_t x71 = 4U;
static int16_t x76 = 1;
int16_t x77 = -6776;
uint64_t t19 = 18LLU;
volatile uint64_t t21 = 65LLU;
volatile uint64_t x99 = 1035LLU;
static int64_t x100 = -18938348LL;
volatile int64_t t24 = -3118280336540LL;
static volatile int32_t t26 = 2;
int64_t x123 = INT64_MAX;
static volatile int64_t t29 = 659920580LL;
int32_t x128 = INT32_MIN;
uint64_t x136 = 177770565LLU;
uint64_t x138 = 25823119314LLU;
volatile uint64_t t35 = 566114166399604101LLU;
static int16_t x151 = -1;
volatile uint8_t x153 = UINT8_MAX;
int64_t t37 = 944321529342437344LL;
int64_t x157 = INT64_MIN;
volatile int64_t t38 = -962404978LL;
int32_t x161 = INT32_MAX;
int16_t x165 = -5493;
int16_t x167 = INT16_MAX;
static int32_t t40 = 0;
static uint16_t x174 = 6U;
int32_t x175 = INT32_MAX;
uint64_t x178 = 57512321572217929LLU;
volatile int8_t x186 = INT8_MIN;
uint64_t x188 = 110433651779699048LLU;
int16_t x201 = INT16_MAX;
uint32_t x205 = UINT32_MAX;
uint64_t x207 = 215762450797682LLU;
volatile int32_t x209 = 2965498;
uint8_t x213 = 12U;
int32_t x214 = 3165490;
int64_t x228 = INT64_MIN;
static int8_t x230 = INT8_MIN;
int8_t x236 = -1;
volatile int32_t x244 = INT32_MIN;
volatile uint32_t t56 = 67U;
int16_t x256 = -7;
static int32_t x257 = -1;
int8_t x261 = INT8_MIN;
int64_t x270 = INT64_MAX;
static uint8_t x273 = 27U;
uint8_t x274 = UINT8_MAX;
int64_t t64 = 984384546LL;
int64_t x296 = -491840327343LL;
static volatile int64_t t67 = -8277248615851643LL;
int32_t x297 = INT32_MAX;
int8_t x314 = INT8_MIN;
volatile uint64_t t72 = 2316179517LLU;
int64_t x319 = INT64_MAX;
int8_t x322 = INT8_MIN;
static uint8_t x325 = UINT8_MAX;
uint16_t x327 = 68U;
static int32_t x328 = 1;
int64_t x330 = INT64_MAX;
int64_t t76 = 3832498696983LL;
int8_t x333 = INT8_MAX;
int16_t x345 = -1;
uint32_t x346 = UINT32_MAX;
uint32_t x349 = 30754U;
uint32_t t80 = 45810940U;
int64_t x366 = 3084289LL;
static uint32_t x369 = 41U;
volatile int8_t x371 = 37;
int16_t x378 = INT16_MAX;
static volatile int64_t t85 = -1456681495870244356LL;
int32_t t86 = INT32_MIN;
volatile uint16_t x385 = UINT16_MAX;
volatile int64_t t89 = -849LL;
int32_t x399 = -1;
int16_t x404 = -9;
static int32_t x407 = INT32_MIN;
volatile uint8_t x408 = 1U;
int64_t t92 = -580075LL;
uint16_t x414 = 6U;
int16_t x422 = -1;
volatile uint32_t t96 = 5U;
uint16_t x426 = UINT16_MAX;
uint8_t x428 = UINT8_MAX;
int64_t x435 = 2990397192562037564LL;


void f0(void) {
	int32_t x1 = 48078;
	static int32_t x2 = -1;
	static int8_t x3 = -20;
	static int32_t x4 = INT32_MAX;
	int32_t t0 = -130351;

	t0 = (x1&((x2&x3)+x4));

	if (t0 != 48074) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	static int8_t x6 = -3;
	volatile uint64_t x7 = 2091841082172769LLU;
	int32_t x8 = -5574;
	static volatile uint64_t t1 = 60332LLU;

	t1 = (x5&((x6&x7)+x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 17694944U;
	uint64_t x12 = 226916083993569437LLU;
	volatile uint64_t t2 = 26468LLU;

	t2 = (x9&((x10&x11)+x12));

	if (t2 != 226916083993569536LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = 1732;
	uint64_t x15 = UINT64_MAX;
	static uint32_t x16 = 1U;
	uint64_t t3 = 74968927286LLU;

	t3 = (x13&((x14&x15)+x16));

	if (t3 != 1733LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = -1LL;
	volatile int8_t x20 = INT8_MIN;
	volatile int64_t t4 = -4906868947819LL;

	t4 = (x17&((x18&x19)+x20));

	if (t4 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	volatile int64_t x22 = -5340131LL;
	int8_t x23 = INT8_MIN;
	int64_t x24 = INT64_MAX;

	t5 = (x21&((x22&x23)+x24));

	if (t5 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = UINT64_MAX;
	static uint16_t x26 = 1037U;
	volatile uint16_t x27 = 5663U;
	uint32_t x28 = 740086U;
	uint64_t t6 = 899LLU;

	t6 = (x25&((x26&x27)+x28));

	if (t6 != 741123LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	int64_t x34 = -242004315524LL;
	int16_t x35 = INT16_MAX;
	static int64_t t7 = -20823453986LL;

	t7 = (x33&((x34&x35)+x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = INT8_MAX;
	uint16_t x39 = 2U;
	int16_t x40 = -7;

	t8 = (x37&((x38&x39)+x40));

	if (t8 != 251) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MIN;
	uint8_t x42 = 3U;
	static uint64_t x43 = UINT64_MAX;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t9 = 26189837LLU;

	t9 = (x41&((x42&x43)+x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = 24U;
	int16_t x46 = INT16_MIN;
	volatile int16_t x47 = -41;
	int8_t x48 = INT8_MAX;
	volatile int32_t t10 = 877;

	t10 = (x45&((x46&x47)+x48));

	if (t10 != 24) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x50 = INT16_MIN;
	volatile uint32_t x51 = 43950901U;
	uint32_t x52 = 981U;
	uint32_t t11 = 4858362U;

	t11 = (x49&((x50&x51)+x52));

	if (t11 != 20U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x53 = INT32_MAX;
	static uint64_t x54 = 6187562120LLU;
	static uint8_t x55 = 1U;
	volatile uint8_t x56 = 0U;
	static volatile uint64_t t12 = 39700079112367LLU;

	t12 = (x53&((x54&x55)+x56));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	uint8_t x58 = 0U;
	int8_t x59 = -1;
	volatile uint32_t x60 = 4U;
	uint32_t t13 = 580481U;

	t13 = (x57&((x58&x59)+x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MAX;
	int8_t x62 = INT8_MAX;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t14 = 3789;

	t14 = (x61&((x62&x63)+x64));

	if (t14 != 65651) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x66 = 395361962074LLU;
	static volatile int64_t x67 = -10242748461LL;
	volatile int64_t x68 = 4021530LL;
	static volatile uint64_t t15 = 1352LLU;

	t15 = (x65&((x66&x67)+x68));

	if (t15 != 395365934444LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	int64_t x70 = -1LL;
	uint32_t x72 = 18485579U;
	uint64_t t16 = 5830554835655850772LLU;

	t16 = (x69&((x70&x71)+x72));

	if (t16 != 18485583LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = 13135;
	uint16_t x75 = 43U;
	static volatile int64_t t17 = -4384339776853LL;

	t17 = (x73&((x74&x75)+x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = 351417;
	volatile uint16_t x79 = 3288U;
	int16_t x80 = INT16_MIN;
	int32_t t18 = -4;

	t18 = (x77&((x78&x79)+x80));

	if (t18 != -31608) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = UINT16_MAX;
	uint16_t x82 = 2U;
	uint64_t x83 = UINT64_MAX;
	uint8_t x84 = 1U;

	t19 = (x81&((x82&x83)+x84));

	if (t19 != 3LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	int64_t x87 = 1486491753625517075LL;
	int16_t x88 = -1784;
	volatile int64_t t20 = 968758LL;

	t20 = (x85&((x86&x87)+x88));

	if (t20 != 29979LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x89 = 1439150483535702373LLU;
	static volatile int16_t x90 = INT16_MIN;
	int32_t x91 = -463;
	volatile int32_t x92 = -500083845;

	t21 = (x89&((x90&x91)+x92));

	if (t21 != 1439150483446956385LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	volatile int32_t x94 = INT32_MIN;
	static int8_t x95 = INT8_MIN;
	volatile int8_t x96 = INT8_MAX;
	int32_t t22 = INT32_MIN;

	t22 = (x93&((x94&x95)+x96));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = -1;
	uint64_t t23 = 1828211278064LLU;

	t23 = (x97&((x98&x99)+x100));

	if (t23 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = 249;
	int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	int64_t x104 = INT64_MAX;

	t24 = (x101&((x102&x103)+x104));

	if (t24 != 249LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x106 = UINT16_MAX;
	int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MIN;
	volatile int64_t t25 = 105173199057LL;

	t25 = (x105&((x106&x107)+x108));

	if (t25 != -128LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = -1;
	int8_t x110 = INT8_MIN;
	volatile int32_t x111 = -1;
	static int8_t x112 = -1;

	t26 = (x109&((x110&x111)+x112));

	if (t26 != -129) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x113 = 3U;
	static uint32_t x114 = 4957727U;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = 13U;
	static uint32_t t27 = 6U;

	t27 = (x113&((x114&x115)+x116));

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x117 = 537U;
	static volatile int16_t x118 = INT16_MIN;
	volatile int32_t x119 = -10986;
	static uint64_t x120 = 90976494704515LLU;
	volatile uint64_t t28 = 5753197821LLU;

	t28 = (x117&((x118&x119)+x120));

	if (t28 != 513LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	static volatile uint32_t x122 = UINT32_MAX;
	static int64_t x124 = INT64_MIN;

	t29 = (x121&((x122&x123)+x124));

	if (t29 != 4294967295LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -15;
	uint8_t x126 = 82U;
	int64_t x127 = 20793034887613944LL;
	volatile int64_t t30 = 3403LL;

	t30 = (x125&((x126&x127)+x128));

	if (t30 != -2147483568LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = 676973932476971009LL;
	static int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MAX;
	static int16_t x132 = 43;
	int64_t t31 = -642361706974067760LL;

	t31 = (x129&((x130&x131)+x132));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	volatile int16_t x134 = -1;
	int32_t x135 = 1;
	uint64_t t32 = 84818161458LLU;

	t32 = (x133&((x134&x135)+x136));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 13U;
	int8_t x139 = INT8_MIN;
	volatile int64_t x140 = -1LL;
	uint64_t t33 = 15LLU;

	t33 = (x137&((x138&x139)+x140));

	if (t33 != 13LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x141 = 47154LLU;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MAX;
	int16_t x144 = INT16_MIN;
	uint64_t t34 = 120395521756333LLU;

	t34 = (x141&((x142&x143)+x144));

	if (t34 != 32768LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	static volatile int8_t x147 = INT8_MAX;
	uint64_t x148 = UINT64_MAX;

	t35 = (x145&((x146&x147)+x148));

	if (t35 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x149 = INT16_MIN;
	int32_t x150 = INT32_MIN;
	static int16_t x152 = INT16_MAX;
	volatile int32_t t36 = INT32_MIN;

	t36 = (x149&((x150&x151)+x152));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x154 = INT8_MIN;
	uint8_t x155 = 21U;
	int64_t x156 = -131416174LL;

	t37 = (x153&((x154&x155)+x156));

	if (t37 != 146LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x158 = UINT32_MAX;
	int64_t x159 = INT64_MIN;
	int64_t x160 = 170012409627LL;

	t38 = (x157&((x158&x159)+x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x162 = INT64_MIN;
	static uint8_t x163 = 36U;
	static uint8_t x164 = 13U;
	volatile int64_t t39 = -39LL;

	t39 = (x161&((x162&x163)+x164));

	if (t39 != 13LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x166 = 2229;
	volatile int16_t x168 = INT16_MIN;

	t40 = (x165&((x166&x167)+x168));

	if (t40 != -30591) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x169 = -7283235793327LL;
	int16_t x170 = 21;
	int64_t x171 = -1LL;
	int8_t x172 = 27;
	volatile int64_t t41 = 777300233LL;

	t41 = (x169&((x170&x171)+x172));

	if (t41 != 16LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x173 = INT64_MIN;
	int64_t x176 = -1LL;
	volatile int64_t t42 = -69808687316LL;

	t42 = (x173&((x174&x175)+x176));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 4463U;
	int32_t x179 = -508;
	int32_t x180 = -818;
	uint64_t t43 = 516327LLU;

	t43 = (x177&((x178&x179)+x180));

	if (t43 != 78LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 0U;
	uint16_t x182 = 106U;
	int64_t x183 = INT64_MAX;
	uint32_t x184 = 1843500667U;
	volatile int64_t t44 = 349LL;

	t44 = (x181&((x182&x183)+x184));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 19U;
	int8_t x187 = INT8_MIN;
	volatile uint64_t t45 = 362656448LLU;

	t45 = (x185&((x186&x187)+x188));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x189 = 6220009LLU;
	volatile int32_t x190 = INT32_MAX;
	static volatile uint8_t x191 = 0U;
	static volatile int8_t x192 = INT8_MIN;
	uint64_t t46 = 772715610014LLU;

	t46 = (x189&((x190&x191)+x192));

	if (t46 != 6219904LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = -1056731;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = UINT64_MAX;
	uint64_t t47 = 26852LLU;

	t47 = (x193&((x194&x195)+x196));

	if (t47 != 18446744073708462117LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x202 = UINT64_MAX;
	int32_t x203 = INT32_MAX;
	volatile int16_t x204 = INT16_MAX;
	uint64_t t48 = 7649LLU;

	t48 = (x201&((x202&x203)+x204));

	if (t48 != 32766LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x206 = -1;
	uint64_t x208 = 186735147LLU;
	uint64_t t49 = 8017084462782834711LLU;

	t49 = (x205&((x206&x207)+x208));

	if (t49 != 660450973LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x210 = INT64_MAX;
	static uint64_t x211 = UINT64_MAX;
	static uint64_t x212 = 2914661020551LLU;
	uint64_t t50 = 2801642381129586LLU;

	t50 = (x209&((x210&x211)+x212));

	if (t50 != 340866LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x215 = INT16_MAX;
	static int8_t x216 = INT8_MIN;
	static volatile int32_t t51 = 821;

	t51 = (x213&((x214&x215)+x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 20153141519LLU;
	volatile int16_t x226 = INT16_MAX;
	int32_t x227 = -212120587;
	static uint64_t t52 = 677755449592LLU;

	t52 = (x225&((x226&x227)+x228));

	if (t52 != 2309LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x229 = 17231124672762LLU;
	int32_t x231 = INT32_MAX;
	int16_t x232 = -38;
	uint64_t t53 = 189938614LLU;

	t53 = (x229&((x230&x231)+x232));

	if (t53 != 1863364698LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -1790310861382867941LL;
	int8_t x234 = INT8_MAX;
	int8_t x235 = -1;
	int64_t t54 = 1092701222334LL;

	t54 = (x233&((x234&x235)+x236));

	if (t54 != 26LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x241 = 3U;
	int32_t x242 = INT32_MAX;
	uint64_t x243 = 1909389811381093LLU;
	uint64_t t55 = 32845956479402LLU;

	t55 = (x241&((x242&x243)+x244));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x245 = 14U;
	int32_t x246 = -3303110;
	int32_t x247 = INT32_MIN;
	uint32_t x248 = 1683710280U;

	t56 = (x245&((x246&x247)+x248));

	if (t56 != 8U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x253 = 6423LL;
	int64_t x254 = INT64_MAX;
	static int64_t x255 = -1LL;
	int64_t t57 = -141LL;

	t57 = (x253&((x254&x255)+x256));

	if (t57 != 6416LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x258 = -7395811;
	uint32_t x259 = 538282505U;
	static int8_t x260 = 28;
	uint32_t t58 = 633941485U;

	t58 = (x257&((x258&x259)+x260));

	if (t58 != 537199141U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x262 = INT32_MAX;
	uint16_t x263 = 744U;
	int16_t x264 = INT16_MAX;
	int32_t t59 = 192323960;

	t59 = (x261&((x262&x263)+x264));

	if (t59 != 33408) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = INT32_MIN;
	uint8_t x266 = 1U;
	uint16_t x267 = 745U;
	int8_t x268 = INT8_MAX;
	volatile int32_t t60 = -228486;

	t60 = (x265&((x266&x267)+x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x269 = INT32_MIN;
	uint16_t x271 = 60U;
	uint16_t x272 = UINT16_MAX;
	volatile int64_t t61 = -1678355952413LL;

	t61 = (x269&((x270&x271)+x272));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x275 = 29463U;
	int64_t x276 = 15124387722865210LL;
	int64_t t62 = 1175377694341LL;

	t62 = (x273&((x274&x275)+x276));

	if (t62 != 17LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x277 = -1;
	static volatile int8_t x278 = 12;
	static int8_t x279 = INT8_MIN;
	int64_t x280 = 2688627220045LL;
	volatile int64_t t63 = -32079455LL;

	t63 = (x277&((x278&x279)+x280));

	if (t63 != 2688627220045LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x281 = 5;
	volatile uint32_t x282 = 1439754U;
	int64_t x283 = INT64_MIN;
	volatile uint16_t x284 = 18879U;

	t64 = (x281&((x282&x283)+x284));

	if (t64 != 5LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x285 = 110266U;
	volatile int64_t x286 = INT64_MAX;
	int64_t x287 = 611242647034916451LL;
	uint8_t x288 = 23U;
	static int64_t t65 = 16324553329LL;

	t65 = (x285&((x286&x287)+x288));

	if (t65 != 110138LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x289 = UINT64_MAX;
	static uint16_t x290 = 21962U;
	int16_t x291 = INT16_MAX;
	static int32_t x292 = -153;
	uint64_t t66 = 425602188385438LLU;

	t66 = (x289&((x290&x291)+x292));

	if (t66 != 21809LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	volatile int16_t x295 = INT16_MIN;

	t67 = (x293&((x294&x295)+x296));

	if (t67 != -491840294575LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = 876137LL;
	volatile uint32_t x300 = 19U;
	volatile int64_t t68 = -1593215LL;

	t68 = (x297&((x298&x299)+x300));

	if (t68 != 876156LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x301 = -1;
	static int16_t x302 = INT16_MIN;
	uint32_t x303 = 234U;
	int16_t x304 = INT16_MAX;
	static volatile uint32_t t69 = 249581720U;

	t69 = (x301&((x302&x303)+x304));

	if (t69 != 32767U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = -1;
	uint32_t x306 = 999995U;
	static int8_t x307 = INT8_MIN;
	uint64_t x308 = 7472LLU;
	volatile uint64_t t70 = 25224665LLU;

	t70 = (x305&((x306&x307)+x308));

	if (t70 != 1007408LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = INT32_MIN;
	static int64_t x310 = INT64_MAX;
	static volatile int64_t x311 = -5666056596676887LL;
	uint16_t x312 = 97U;
	volatile int64_t t71 = 2LL;

	t71 = (x309&((x310&x311)+x312));

	if (t71 != 9217705978558939136LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x313 = 7580618LLU;
	int64_t x315 = 31LL;
	volatile int64_t x316 = INT64_MAX;

	t72 = (x313&((x314&x315)+x316));

	if (t72 != 7580618LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x317 = UINT16_MAX;
	volatile int8_t x318 = -1;
	int8_t x320 = -6;
	volatile int64_t t73 = -28342LL;

	t73 = (x317&((x318&x319)+x320));

	if (t73 != 65529LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x321 = UINT32_MAX;
	uint16_t x323 = 17341U;
	static volatile int8_t x324 = -1;
	uint32_t t74 = 10898794U;

	t74 = (x321&((x322&x323)+x324));

	if (t74 != 17279U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x326 = 436029LL;
	volatile int64_t t75 = -106750999254LL;

	t75 = (x325&((x326&x327)+x328));

	if (t75 != 5LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x329 = 2U;
	uint16_t x331 = 3016U;
	int32_t x332 = INT32_MIN;

	t76 = (x329&((x330&x331)+x332));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x334 = 10;
	int8_t x335 = 0;
	static uint8_t x336 = 1U;
	int32_t t77 = -18;

	t77 = (x333&((x334&x335)+x336));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x337 = 54;
	int32_t x338 = INT32_MIN;
	volatile int16_t x339 = INT16_MIN;
	static int16_t x340 = INT16_MAX;
	int32_t t78 = -3;

	t78 = (x337&((x338&x339)+x340));

	if (t78 != 54) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x347 = -1;
	int8_t x348 = INT8_MIN;
	static volatile uint32_t t79 = 313058994U;

	t79 = (x345&((x346&x347)+x348));

	if (t79 != 4294967167U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x350 = 3U;
	uint16_t x351 = 158U;
	static int32_t x352 = INT32_MIN;

	t80 = (x349&((x350&x351)+x352));

	if (t80 != 2U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = -1LL;
	volatile int8_t x354 = INT8_MIN;
	volatile int16_t x355 = 466;
	int16_t x356 = 1;
	volatile int64_t t81 = 12931896796347LL;

	t81 = (x353&((x354&x355)+x356));

	if (t81 != 385LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = 5411131;
	static int64_t x367 = -1LL;
	int32_t x368 = -102703656;
	int64_t t82 = 14285057LL;

	t82 = (x365&((x366&x367)+x368));

	if (t82 != 164121LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x370 = INT32_MIN;
	uint16_t x372 = 207U;
	volatile uint32_t t83 = 21693206U;

	t83 = (x369&((x370&x371)+x372));

	if (t83 != 9U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = INT16_MIN;
	int32_t x374 = 1;
	volatile int8_t x375 = INT8_MAX;
	uint64_t x376 = 726LLU;
	static volatile uint64_t t84 = 179264773583010814LLU;

	t84 = (x373&((x374&x375)+x376));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = -1;
	volatile uint16_t x379 = UINT16_MAX;
	int64_t x380 = INT64_MIN;

	t85 = (x377&((x378&x379)+x380));

	if (t85 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = INT32_MIN;
	uint16_t x382 = 846U;
	volatile int32_t x383 = INT32_MIN;
	volatile int32_t x384 = -1;

	t86 = (x381&((x382&x383)+x384));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x386 = UINT32_MAX;
	uint64_t x387 = 1921LLU;
	volatile uint64_t x388 = 2040660778737LLU;
	volatile uint64_t t87 = 1585138949LLU;

	t87 = (x385&((x386&x387)+x388));

	if (t87 != 26226LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x389 = INT16_MAX;
	uint16_t x390 = 389U;
	int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MAX;
	int64_t t88 = -5800649333240320LL;

	t88 = (x389&((x390&x391)+x392));

	if (t88 != 32767LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x393 = INT16_MIN;
	int8_t x394 = 23;
	int16_t x395 = INT16_MIN;
	int64_t x396 = -712117410031LL;

	t89 = (x393&((x394&x395)+x396));

	if (t89 != -712117420032LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x397 = UINT64_MAX;
	int32_t x398 = 231298;
	static uint8_t x400 = 20U;
	volatile uint64_t t90 = 944982488LLU;

	t90 = (x397&((x398&x399)+x400));

	if (t90 != 231318LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x401 = INT64_MIN;
	int64_t x402 = -81618LL;
	int64_t x403 = -1LL;
	static int64_t t91 = INT64_MIN;

	t91 = (x401&((x402&x403)+x404));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x405 = INT32_MAX;
	volatile int64_t x406 = INT64_MIN;

	t92 = (x405&((x406&x407)+x408));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x409 = 248;
	int8_t x410 = INT8_MIN;
	int64_t x411 = INT64_MIN;
	static uint64_t x412 = UINT64_MAX;
	uint64_t t93 = 38LLU;

	t93 = (x409&((x410&x411)+x412));

	if (t93 != 248LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x413 = INT64_MIN;
	int8_t x415 = INT8_MAX;
	int8_t x416 = INT8_MIN;
	int64_t t94 = INT64_MIN;

	t94 = (x413&((x414&x415)+x416));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x417 = 7LLU;
	int32_t x418 = INT32_MIN;
	uint64_t x419 = 532688639108LLU;
	int8_t x420 = INT8_MIN;
	volatile uint64_t t95 = 5808829218870351038LLU;

	t95 = (x417&((x418&x419)+x420));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x421 = 1172777102U;
	int16_t x423 = -1;
	int8_t x424 = INT8_MAX;

	t96 = (x421&((x422&x423)+x424));

	if (t96 != 14U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x425 = 25479619459LL;
	uint8_t x427 = 32U;
	int64_t t97 = -30LL;

	t97 = (x425&((x426&x427)+x428));

	if (t97 != 259LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = 826LL;
	volatile int8_t x430 = 0;
	int32_t x431 = INT32_MIN;
	int16_t x432 = 18;
	volatile int64_t t98 = 6LL;

	t98 = (x429&((x430&x431)+x432));

	if (t98 != 18LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x433 = 1;
	int8_t x434 = -1;
	volatile uint32_t x436 = 39U;
	static int64_t t99 = -187231041197365LL;

	t99 = (x433&((x434&x435)+x436));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

