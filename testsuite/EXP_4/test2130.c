#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = -1;
static int32_t x3 = 127876001;
volatile int32_t t0 = -22;
static int16_t x7 = INT16_MAX;
int64_t x8 = INT64_MAX;
int8_t x21 = 1;
int16_t x22 = -1;
int8_t x31 = INT8_MIN;
int16_t x33 = 15070;
uint8_t x36 = UINT8_MAX;
int8_t x40 = INT8_MAX;
uint8_t x41 = 89U;
uint16_t x42 = 35U;
int16_t x43 = INT16_MAX;
int32_t t10 = -184569314;
int64_t x48 = INT64_MIN;
static volatile int16_t x49 = INT16_MIN;
int32_t x50 = -1;
uint32_t x51 = UINT32_MAX;
volatile uint64_t x52 = UINT64_MAX;
volatile int8_t x53 = INT8_MIN;
int64_t x72 = INT64_MAX;
static uint64_t t19 = 5235969483407872000LLU;
volatile int32_t t20 = -14792878;
volatile int64_t x85 = INT64_MIN;
uint16_t x87 = UINT16_MAX;
int32_t x90 = 6996;
int32_t t23 = -356;
volatile uint16_t x101 = UINT16_MAX;
volatile int16_t x104 = -1;
int32_t t25 = -112918;
uint64_t x105 = UINT64_MAX;
volatile uint64_t t26 = 298519759903129939LLU;
uint16_t x112 = 25618U;
volatile int8_t x114 = INT8_MAX;
uint16_t x117 = 234U;
int16_t x120 = INT16_MIN;
static int8_t x125 = INT8_MAX;
int32_t x137 = -4;
int16_t x138 = INT16_MIN;
uint8_t x148 = 0U;
int8_t x151 = 0;
int8_t x162 = -61;
int64_t x163 = -750892997LL;
uint32_t t40 = 375U;
int8_t x166 = -1;
static volatile uint16_t x168 = UINT16_MAX;
volatile int8_t x171 = -9;
volatile int32_t x173 = INT32_MAX;
int16_t x174 = -34;
int32_t x176 = -2314704;
static uint8_t x179 = UINT8_MAX;
static int32_t x180 = 141143;
int32_t x181 = INT32_MIN;
int64_t x182 = -1LL;
static uint8_t x185 = 1U;
volatile int32_t t46 = -486173212;
static uint16_t x193 = UINT16_MAX;
uint32_t x196 = UINT32_MAX;
volatile int32_t t48 = 26;
int64_t x198 = INT64_MIN;
uint32_t x202 = 35U;
int64_t x204 = INT64_MAX;
int64_t t50 = 16530004345LL;
int8_t x207 = INT8_MIN;
static volatile int32_t t54 = -277061158;
static volatile int16_t x221 = -58;
int16_t x223 = INT16_MAX;
volatile int32_t t55 = 11;
static uint8_t x243 = 1U;
volatile int64_t x250 = INT64_MAX;
int16_t x260 = INT16_MAX;
int16_t x264 = INT16_MIN;
int32_t t67 = 1;
uint8_t x274 = 3U;
int32_t t68 = 14523347;
int32_t x277 = INT32_MIN;
volatile int8_t x280 = -1;
volatile int8_t x285 = -1;
uint32_t x291 = 644174U;
volatile uint32_t x293 = UINT32_MAX;
uint8_t x300 = 1U;
int8_t x306 = INT8_MAX;
volatile uint64_t x309 = 473641LLU;
int8_t x315 = -1;
volatile uint32_t t78 = 816796358U;
uint32_t x317 = UINT32_MAX;
int8_t x327 = 0;
uint64_t x334 = 1163309LLU;
uint16_t x341 = UINT16_MAX;
static int16_t x344 = INT16_MIN;
int64_t x348 = 18295141180498920LL;
static int32_t t88 = 3;
volatile int64_t x365 = -1607LL;
uint8_t x372 = UINT8_MAX;
volatile int32_t t92 = -8037871;
int16_t x377 = -3;
static int64_t x381 = -1LL;
int8_t x389 = INT8_MAX;
int32_t t97 = -2;
static volatile int16_t x396 = INT16_MAX;
uint64_t t98 = 3LLU;
volatile uint64_t x397 = 330813847LLU;


void f0(void) {
	uint64_t x2 = UINT64_MAX;
	int8_t x4 = -1;

	t0 = (x1&(x2==(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 177;
	uint8_t x6 = 6U;
	volatile int32_t t1 = -31;

	t1 = (x5&(x6==(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -49561;
	uint16_t x10 = UINT16_MAX;
	uint16_t x11 = 50U;
	volatile uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 1245;

	t2 = (x9&(x10==(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	volatile uint32_t x14 = UINT32_MAX;
	volatile uint32_t x15 = UINT32_MAX;
	volatile int8_t x16 = -1;
	volatile int32_t t3 = 2600;

	t3 = (x13&(x14==(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	volatile int32_t x18 = INT32_MIN;
	uint32_t x19 = 13068706U;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -34317721;

	t4 = (x17&(x18==(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x23 = 629LLU;
	uint8_t x24 = 1U;
	volatile int32_t t5 = -6994828;

	t5 = (x21&(x22==(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x25 = 119096U;
	uint64_t x26 = UINT64_MAX;
	int64_t x27 = INT64_MIN;
	volatile int8_t x28 = INT8_MIN;
	volatile uint32_t t6 = 33900871U;

	t6 = (x25&(x26==(x27^x28)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 0;
	uint16_t x30 = 1U;
	int16_t x32 = -1;
	int32_t t7 = 251995062;

	t7 = (x29&(x30==(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = 59;
	int8_t x35 = INT8_MIN;
	static volatile int32_t t8 = 2;

	t8 = (x33&(x34==(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	volatile uint16_t x38 = 318U;
	uint8_t x39 = 49U;
	volatile int64_t t9 = 89389LL;

	t9 = (x37&(x38==(x39^x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x44 = UINT8_MAX;

	t10 = (x41&(x42==(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int8_t x46 = INT8_MIN;
	int16_t x47 = -433;
	volatile int32_t t11 = -1;

	t11 = (x45&(x46==(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t t12 = -846716;

	t12 = (x49&(x50==(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MIN;
	int32_t x55 = 0;
	volatile uint64_t x56 = 250309384LLU;
	int32_t t13 = 484615;

	t13 = (x53&(x54==(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = -40;
	int16_t x58 = INT16_MIN;
	static int8_t x59 = -1;
	static int32_t x60 = INT32_MAX;
	static volatile int32_t t14 = -19;

	t14 = (x57&(x58==(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = UINT16_MAX;
	int16_t x62 = INT16_MIN;
	static int32_t x63 = INT32_MIN;
	int8_t x64 = -1;
	static volatile int32_t t15 = -33;

	t15 = (x61&(x62==(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = 341575424558128464LL;
	uint64_t x66 = 8547341620270LLU;
	uint8_t x67 = 7U;
	static uint8_t x68 = UINT8_MAX;
	volatile int64_t t16 = -129580660LL;

	t16 = (x65&(x66==(x67^x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1;
	int16_t x70 = INT16_MAX;
	int8_t x71 = 1;
	int32_t t17 = -554;

	t17 = (x69&(x70==(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x73 = 1134466802141453LLU;
	volatile uint32_t x74 = 2753U;
	uint16_t x75 = UINT16_MAX;
	volatile uint32_t x76 = 1350780779U;
	volatile uint64_t t18 = 7265643668901LLU;

	t18 = (x73&(x74==(x75^x76)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 0LLU;
	uint16_t x78 = 25U;
	static int16_t x79 = INT16_MIN;
	int16_t x80 = -1;

	t19 = (x77&(x78==(x79^x80)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int32_t x82 = -200151756;
	int64_t x83 = 51740201LL;
	int8_t x84 = INT8_MAX;

	t20 = (x81&(x82==(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x86 = INT64_MAX;
	static uint8_t x88 = 4U;
	volatile int64_t t21 = 0LL;

	t21 = (x85&(x86==(x87^x88)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -1;
	uint64_t x91 = 8893136521660104316LLU;
	uint16_t x92 = 80U;
	static int32_t t22 = -34991;

	t22 = (x89&(x90==(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 12;
	int32_t x94 = -61;
	uint16_t x95 = 7U;
	static int16_t x96 = 21;

	t23 = (x93&(x94==(x95^x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int32_t x98 = -628643614;
	volatile int64_t x99 = -124392405518881319LL;
	volatile int8_t x100 = -1;
	int64_t t24 = 4243423987681350724LL;

	t24 = (x97&(x98==(x99^x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = -1LL;
	int8_t x103 = -1;

	t25 = (x101&(x102==(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = INT32_MAX;
	uint16_t x107 = 290U;
	int8_t x108 = -1;

	t26 = (x105&(x106==(x107^x108)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = 2U;
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	int32_t t27 = -1;

	t27 = (x109&(x110==(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -3953186094614663257LL;
	volatile int32_t x115 = 294347;
	volatile int8_t x116 = 0;
	volatile int64_t t28 = 5561559LL;

	t28 = (x113&(x114==(x115^x116)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = 1993;
	int16_t x119 = -1;
	int32_t t29 = -7240328;

	t29 = (x117&(x118==(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 1;
	static int32_t x122 = -1;
	static int64_t x123 = -1LL;
	uint8_t x124 = 0U;
	volatile int32_t t30 = -3709431;

	t30 = (x121&(x122==(x123^x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = 16284U;
	volatile int16_t x127 = -13;
	int64_t x128 = -34LL;
	volatile int32_t t31 = 7233420;

	t31 = (x125&(x126==(x127^x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = -1;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = -1;
	static volatile int64_t t32 = -332261039283903LL;

	t32 = (x129&(x130==(x131^x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MIN;
	static uint32_t x134 = UINT32_MAX;
	int32_t x135 = 15;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t33 = 887;

	t33 = (x133&(x134==(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x139 = -62;
	volatile uint16_t x140 = 7962U;
	int32_t t34 = 73744972;

	t34 = (x137&(x138==(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x141 = INT16_MIN;
	uint32_t x142 = 555U;
	int16_t x143 = INT16_MIN;
	int32_t x144 = 496141975;
	int32_t t35 = 4;

	t35 = (x141&(x142==(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	static volatile uint8_t x147 = UINT8_MAX;
	volatile int32_t t36 = -337;

	t36 = (x145&(x146==(x147^x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	int8_t x150 = INT8_MIN;
	static int32_t x152 = -1;
	static volatile int64_t t37 = 5765794652051506LL;

	t37 = (x149&(x150==(x151^x152)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	static volatile int32_t x154 = INT32_MIN;
	static int64_t x155 = 17867354979782732LL;
	static int32_t x156 = INT32_MIN;
	uint32_t t38 = 0U;

	t38 = (x153&(x154==(x155^x156)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	uint16_t x158 = 3U;
	int64_t x159 = INT64_MIN;
	volatile uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -655;

	t39 = (x157&(x158==(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	uint64_t x164 = UINT64_MAX;

	t40 = (x161&(x162==(x163^x164)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = 454;
	volatile int32_t x167 = INT32_MAX;
	int32_t t41 = 9607;

	t41 = (x165&(x166==(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	int64_t x170 = 1430106LL;
	int64_t x172 = -58190239LL;
	int32_t t42 = 254;

	t42 = (x169&(x170==(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x175 = INT64_MAX;
	volatile int32_t t43 = 11;

	t43 = (x173&(x174==(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	uint64_t x178 = 138598455499283LLU;
	uint64_t t44 = 127LLU;

	t44 = (x177&(x178==(x179^x180)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x183 = 43U;
	int16_t x184 = 11;
	int32_t t45 = 254721377;

	t45 = (x181&(x182==(x183^x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MIN;
	int32_t x187 = -40818411;
	static int8_t x188 = -1;

	t46 = (x185&(x186==(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MAX;
	uint8_t x190 = 54U;
	int64_t x191 = -1972LL;
	int32_t x192 = -1;
	int32_t t47 = 2;

	t47 = (x189&(x190==(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x194 = INT16_MIN;
	int64_t x195 = -1LL;

	t48 = (x193&(x194==(x195^x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	uint64_t x199 = 642078174115623553LLU;
	uint16_t x200 = UINT16_MAX;
	volatile uint64_t t49 = 343LLU;

	t49 = (x197&(x198==(x199^x200)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -7931566618LL;
	static uint16_t x203 = 217U;

	t50 = (x201&(x202==(x203^x204)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 14808U;
	int64_t x206 = 50LL;
	int8_t x208 = INT8_MIN;
	uint32_t t51 = 14953U;

	t51 = (x205&(x206==(x207^x208)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int32_t x210 = -406703;
	static int32_t x211 = INT32_MIN;
	volatile int64_t x212 = INT64_MIN;
	int32_t t52 = -6321188;

	t52 = (x209&(x210==(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 1;
	volatile int16_t x214 = INT16_MIN;
	int32_t x215 = -12;
	static int8_t x216 = -1;
	static volatile int32_t t53 = -299533570;

	t53 = (x213&(x214==(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	int32_t x218 = -1;
	uint64_t x219 = 259LLU;
	volatile int8_t x220 = -26;

	t54 = (x217&(x218==(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MIN;
	static int32_t x224 = -1;

	t55 = (x221&(x222==(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 11283902LLU;
	static uint64_t x226 = 3348761LLU;
	int32_t x227 = -1;
	uint16_t x228 = 3042U;
	uint64_t t56 = 14845LLU;

	t56 = (x225&(x226==(x227^x228)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = -1422;
	volatile int32_t x230 = INT32_MIN;
	static volatile int8_t x231 = INT8_MIN;
	int64_t x232 = INT64_MAX;
	int32_t t57 = -63852515;

	t57 = (x229&(x230==(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = 6U;
	int8_t x234 = -1;
	uint64_t x235 = 17850089958LLU;
	int32_t x236 = -1;
	volatile int32_t t58 = -27189;

	t58 = (x233&(x234==(x235^x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = 129577U;
	int16_t x238 = INT16_MAX;
	static int16_t x239 = INT16_MAX;
	int64_t x240 = INT64_MIN;
	uint32_t t59 = 61407569U;

	t59 = (x237&(x238==(x239^x240)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	static volatile uint32_t x242 = UINT32_MAX;
	volatile int8_t x244 = INT8_MIN;
	volatile int64_t t60 = 92455440461039158LL;

	t60 = (x241&(x242==(x243^x244)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x245 = INT32_MAX;
	int16_t x246 = -1;
	int64_t x247 = -283700846425983762LL;
	volatile uint32_t x248 = 5183367U;
	int32_t t61 = 6;

	t61 = (x245&(x246==(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 6LL;
	volatile int8_t x251 = 0;
	int64_t x252 = -7841781450657030LL;
	volatile int64_t t62 = -231330LL;

	t62 = (x249&(x250==(x251^x252)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 10LLU;
	uint16_t x254 = 890U;
	uint16_t x255 = UINT16_MAX;
	uint32_t x256 = 478U;
	uint64_t t63 = 33126146571LLU;

	t63 = (x253&(x254==(x255^x256)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MAX;
	volatile uint8_t x258 = UINT8_MAX;
	static int32_t x259 = -2686;
	int32_t t64 = -852;

	t64 = (x257&(x258==(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MAX;
	volatile uint32_t x263 = 183U;
	int32_t t65 = -4427677;

	t65 = (x261&(x262==(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 1770216500837982799LLU;
	int8_t x266 = 31;
	volatile uint16_t x267 = UINT16_MAX;
	int8_t x268 = INT8_MIN;
	uint64_t t66 = 5324985630152643LLU;

	t66 = (x265&(x266==(x267^x268)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	int16_t x270 = -1;
	static int32_t x271 = 275467;
	uint16_t x272 = UINT16_MAX;

	t67 = (x269&(x270==(x271^x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -8626;
	uint16_t x275 = 1613U;
	static uint64_t x276 = 40LLU;

	t68 = (x273&(x274==(x275^x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x278 = UINT32_MAX;
	volatile int8_t x279 = INT8_MAX;
	int32_t t69 = -4187;

	t69 = (x277&(x278==(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 31953068074722LLU;
	static uint64_t x282 = UINT64_MAX;
	volatile int16_t x283 = -1;
	uint8_t x284 = 45U;
	uint64_t t70 = 18864LLU;

	t70 = (x281&(x282==(x283^x284)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	uint8_t x287 = 37U;
	int16_t x288 = 10;
	static volatile int32_t t71 = -66;

	t71 = (x285&(x286==(x287^x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	uint8_t x290 = 58U;
	uint8_t x292 = 2U;
	volatile int32_t t72 = 44;

	t72 = (x289&(x290==(x291^x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x294 = INT32_MIN;
	uint64_t x295 = UINT64_MAX;
	uint16_t x296 = UINT16_MAX;
	volatile uint32_t t73 = 78717746U;

	t73 = (x293&(x294==(x295^x296)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -706973634399639375LL;
	static volatile int32_t x298 = INT32_MAX;
	int32_t x299 = -2298018;
	volatile int64_t t74 = -508758666603353LL;

	t74 = (x297&(x298==(x299^x300)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MIN;
	static int8_t x303 = INT8_MIN;
	int64_t x304 = -1430259428984917LL;
	int32_t t75 = 63356262;

	t75 = (x301&(x302==(x303^x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = -1;
	uint8_t x307 = 6U;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 85376251;

	t76 = (x305&(x306==(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = -1;
	static int32_t x311 = INT32_MAX;
	int32_t x312 = -7;
	uint64_t t77 = 7099545449338797908LLU;

	t77 = (x309&(x310==(x311^x312)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	int16_t x314 = -325;
	int64_t x316 = -1LL;

	t78 = (x313&(x314==(x315^x316)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x318 = -2LL;
	int64_t x319 = -2045001244209LL;
	int16_t x320 = INT16_MIN;
	uint32_t t79 = 25713529U;

	t79 = (x317&(x318==(x319^x320)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1307456;
	static volatile uint32_t x322 = UINT32_MAX;
	int8_t x323 = -17;
	int64_t x324 = INT64_MAX;
	volatile int32_t t80 = -50957728;

	t80 = (x321&(x322==(x323^x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	int16_t x326 = INT16_MIN;
	static volatile int16_t x328 = INT16_MIN;
	int32_t t81 = -1;

	t81 = (x325&(x326==(x327^x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = 15434136250LL;
	uint32_t x330 = 17U;
	static int16_t x331 = -1;
	uint64_t x332 = 0LLU;
	volatile int64_t t82 = 52012831LL;

	t82 = (x329&(x330==(x331^x332)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MAX;
	volatile int32_t t83 = -1;

	t83 = (x333&(x334==(x335^x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = 5094712;
	int8_t x338 = INT8_MAX;
	uint64_t x339 = UINT64_MAX;
	uint32_t x340 = UINT32_MAX;
	int32_t t84 = -235816;

	t84 = (x337&(x338==(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = -2;
	volatile uint32_t x343 = UINT32_MAX;
	int32_t t85 = 38;

	t85 = (x341&(x342==(x343^x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	static int16_t x346 = INT16_MAX;
	int8_t x347 = -1;
	int32_t t86 = 37096;

	t86 = (x345&(x346==(x347^x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	static int16_t x350 = INT16_MAX;
	static int64_t x351 = -1LL;
	int32_t x352 = 12;
	static int64_t t87 = 93LL;

	t87 = (x349&(x350==(x351^x352)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = 180;
	int8_t x354 = INT8_MIN;
	static uint8_t x355 = 15U;
	int16_t x356 = INT16_MIN;

	t88 = (x353&(x354==(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 0;
	uint32_t x358 = UINT32_MAX;
	int16_t x359 = INT16_MAX;
	int16_t x360 = 1;
	volatile int32_t t89 = -283957727;

	t89 = (x357&(x358==(x359^x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	uint16_t x362 = 0U;
	int8_t x363 = INT8_MIN;
	uint64_t x364 = 480021356429157788LLU;
	volatile int32_t t90 = 8047;

	t90 = (x361&(x362==(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x366 = UINT8_MAX;
	int32_t x367 = -1;
	static int16_t x368 = INT16_MAX;
	volatile int64_t t91 = -48792318789623068LL;

	t91 = (x365&(x366==(x367^x368)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	int8_t x370 = INT8_MIN;
	int64_t x371 = -19009318231LL;

	t92 = (x369&(x370==(x371^x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 1806741529938719233LLU;
	static volatile uint64_t x374 = UINT64_MAX;
	uint8_t x375 = 4U;
	int8_t x376 = -1;
	static uint64_t t93 = 220LLU;

	t93 = (x373&(x374==(x375^x376)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = 4U;
	uint16_t x379 = 851U;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = 216168;

	t94 = (x377&(x378==(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -1;
	int32_t x383 = -482;
	static uint8_t x384 = UINT8_MAX;
	static volatile int64_t t95 = -238LL;

	t95 = (x381&(x382==(x383^x384)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -1;
	uint32_t x386 = 326U;
	volatile int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MIN;
	volatile int32_t t96 = -75;

	t96 = (x385&(x386==(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x390 = 13965881626189LLU;
	uint8_t x391 = UINT8_MAX;
	static int64_t x392 = -1LL;

	t97 = (x389&(x390==(x391^x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	int8_t x394 = INT8_MIN;
	static volatile int32_t x395 = INT32_MAX;

	t98 = (x393&(x394==(x395^x396)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x398 = UINT64_MAX;
	static uint16_t x399 = UINT16_MAX;
	volatile int16_t x400 = -1;
	volatile uint64_t t99 = 7194693938999095992LLU;

	t99 = (x397&(x398==(x399^x400)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

