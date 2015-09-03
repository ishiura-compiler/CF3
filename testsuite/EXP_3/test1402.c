#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -11021;
volatile int32_t t4 = 3167;
volatile uint64_t x26 = 254931856LLU;
int8_t x28 = INT8_MAX;
volatile int32_t t8 = -6164;
volatile uint32_t x39 = UINT32_MAX;
static volatile int16_t x43 = INT16_MAX;
volatile int16_t x49 = INT16_MIN;
int32_t t14 = -38301112;
int8_t x63 = -60;
int16_t x68 = INT16_MAX;
static int8_t x70 = -1;
int32_t x71 = 1;
uint8_t x72 = 27U;
int32_t t17 = 276406;
int32_t x75 = INT32_MAX;
static int64_t x78 = 3347250LL;
static volatile uint32_t x82 = 343U;
static uint8_t x91 = 106U;
int8_t x92 = INT8_MIN;
uint16_t x94 = 3233U;
int32_t x98 = 1060302;
uint16_t x105 = 0U;
volatile uint8_t x116 = 3U;
uint16_t x118 = 28328U;
int32_t x121 = INT32_MIN;
static int64_t x124 = 1339086395462LL;
int32_t x126 = -1969;
static uint16_t x127 = 16U;
volatile int16_t x131 = INT16_MAX;
static int16_t x136 = INT16_MIN;
volatile int32_t x138 = 11;
volatile int16_t x148 = INT16_MIN;
uint8_t x151 = 7U;
uint16_t x157 = UINT16_MAX;
int64_t x160 = INT64_MIN;
static int32_t x162 = 23512;
int8_t x167 = 33;
int32_t x168 = INT32_MIN;
int8_t x171 = INT8_MIN;
uint8_t x181 = 2U;
volatile int16_t x184 = INT16_MIN;
volatile int32_t t44 = -909053112;
uint16_t x190 = UINT16_MAX;
static int32_t t45 = 0;
volatile int32_t t46 = 33529882;
volatile int64_t t47 = 182980217354LL;
volatile int16_t x202 = INT16_MIN;
int32_t x203 = -1;
volatile int64_t x214 = INT64_MIN;
int8_t x218 = INT8_MAX;
int32_t x226 = INT32_MIN;
static uint32_t x229 = 205923623U;
volatile int32_t x231 = INT32_MIN;
uint16_t x237 = UINT16_MAX;
volatile int8_t x251 = INT8_MAX;
int8_t x252 = 16;
static int8_t x257 = INT8_MIN;
volatile int32_t t62 = -17640;
uint16_t x266 = 1U;
volatile uint8_t x270 = 9U;
int8_t x271 = INT8_MIN;
volatile int16_t x275 = -198;
static uint32_t x278 = 7040U;
int16_t x282 = -137;
int64_t x285 = INT64_MIN;
volatile uint16_t x286 = 13U;
volatile uint32_t x293 = 86725U;
static int16_t x295 = -6;
int8_t x300 = 30;
int64_t x305 = -1LL;
uint8_t x307 = 12U;
volatile int64_t t74 = -673LL;
int16_t x316 = INT16_MAX;
int64_t x320 = INT64_MIN;
static uint32_t t78 = 39765666U;
int32_t x326 = -1;
uint32_t x327 = UINT32_MAX;
volatile int8_t x328 = -3;
volatile int64_t t80 = 17107797LL;
uint64_t x333 = 34743558025LLU;
int8_t x336 = -1;
volatile uint64_t t81 = 73306804859LLU;
int8_t x343 = -1;
int64_t x351 = -128744674381LL;
int64_t t86 = -120496494732LL;
static int32_t x364 = -1373149;
uint8_t x368 = UINT8_MAX;
volatile uint32_t x374 = 1563U;
int8_t x385 = INT8_MIN;
volatile int64_t t95 = -496663830181LL;
volatile uint32_t t96 = 260768U;
volatile uint8_t x403 = 0U;
int8_t x407 = INT8_MAX;


void f0(void) {
	static volatile uint8_t x1 = UINT8_MAX;
	static uint64_t x2 = UINT64_MAX;
	int8_t x3 = INT8_MIN;
	static uint16_t x4 = 10U;
	uint64_t t0 = 15193754369LLU;

	t0 = ((x1/x2)&(x3<x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = 41273361;
	uint16_t x8 = 8113U;
	static int32_t t1 = -239702061;

	t1 = ((x5/x6)&(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint32_t x10 = 15524U;
	volatile int8_t x11 = 11;
	uint64_t x12 = 344919441965039417LLU;
	int64_t t2 = 6051101LL;

	t2 = ((x9/x10)&(x11<x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 5;
	static int16_t x14 = -1;
	int8_t x15 = INT8_MAX;
	int16_t x16 = -12;
	static int32_t t3 = 5;

	t3 = ((x13/x14)&(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	volatile int32_t x18 = INT32_MIN;
	static int16_t x19 = INT16_MAX;
	int64_t x20 = INT64_MIN;

	t4 = ((x17/x18)&(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 0;
	int64_t x22 = INT64_MIN;
	volatile int32_t x23 = -54;
	uint64_t x24 = 2984159LLU;
	int64_t t5 = -26517LL;

	t5 = ((x21/x22)&(x23<x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	uint64_t x27 = 2591179214705486LLU;
	uint64_t t6 = 1397LLU;

	t6 = ((x25/x26)&(x27<x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 65535493LL;
	uint32_t x30 = UINT32_MAX;
	uint8_t x31 = UINT8_MAX;
	int64_t x32 = -31LL;
	volatile int64_t t7 = 30354102LL;

	t7 = ((x29/x30)&(x31<x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = -1;
	int32_t x34 = -1;
	int64_t x35 = INT64_MIN;
	volatile int64_t x36 = 57208LL;

	t8 = ((x33/x34)&(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static uint16_t x38 = UINT16_MAX;
	static uint32_t x40 = 4U;
	volatile int32_t t9 = 27699716;

	t9 = ((x37/x38)&(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 1326977645676031561LLU;
	uint64_t x42 = UINT64_MAX;
	int16_t x44 = INT16_MIN;
	volatile uint64_t t10 = 82751628LLU;

	t10 = ((x41/x42)&(x43<x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	volatile uint16_t x46 = 9429U;
	int32_t x47 = INT32_MAX;
	static int64_t x48 = 728751788LL;
	uint64_t t11 = 174398376261885798LLU;

	t11 = ((x45/x46)&(x47<x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x50 = 48594305247313LLU;
	static uint32_t x51 = UINT32_MAX;
	int64_t x52 = INT64_MAX;
	uint64_t t12 = 33159345240373LLU;

	t12 = ((x49/x50)&(x51<x52));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -6930117LL;
	int16_t x54 = -37;
	static int16_t x55 = -17;
	int8_t x56 = 1;
	volatile int64_t t13 = -878471550163195451LL;

	t13 = ((x53/x54)&(x55<x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	static int8_t x58 = -1;
	uint64_t x59 = UINT64_MAX;
	uint32_t x60 = 1416U;

	t14 = ((x57/x58)&(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 4U;
	int32_t x62 = INT32_MIN;
	int16_t x64 = INT16_MAX;
	int32_t t15 = 90;

	t15 = ((x61/x62)&(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	uint64_t x66 = 208851514260540LLU;
	volatile int32_t x67 = INT32_MIN;
	uint64_t t16 = 4038LLU;

	t16 = ((x65/x66)&(x67<x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 3239;

	t17 = ((x69/x70)&(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int64_t x74 = INT64_MIN;
	static int32_t x76 = -1;
	volatile int64_t t18 = -1891016197384LL;

	t18 = ((x73/x74)&(x75<x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = UINT64_MAX;
	static int32_t x79 = INT32_MIN;
	int8_t x80 = 35;
	volatile uint64_t t19 = 14427LLU;

	t19 = ((x77/x78)&(x79<x80));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 8;
	volatile uint8_t x83 = 7U;
	static volatile uint64_t x84 = 22639933986401994LLU;
	uint32_t t20 = 12U;

	t20 = ((x81/x82)&(x83<x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = 9173;
	static int64_t x90 = INT64_MIN;
	int64_t t21 = 117241LL;

	t21 = ((x89/x90)&(x91<x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = -159;
	int64_t x95 = INT64_MAX;
	volatile int8_t x96 = INT8_MAX;
	int32_t t22 = 2;

	t22 = ((x93/x94)&(x95<x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = 1U;
	volatile uint32_t x99 = UINT32_MAX;
	int64_t x100 = INT64_MIN;
	volatile int32_t t23 = 240916;

	t23 = ((x97/x98)&(x99<x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x101 = 1780U;
	volatile int8_t x102 = -1;
	volatile int64_t x103 = -1LL;
	int8_t x104 = -1;
	static int32_t t24 = -133;

	t24 = ((x101/x102)&(x103<x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = INT32_MIN;
	static volatile int8_t x107 = -1;
	uint16_t x108 = UINT16_MAX;
	int32_t t25 = 2;

	t25 = ((x105/x106)&(x107<x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MAX;
	volatile int64_t x110 = INT64_MAX;
	int32_t x111 = -1;
	uint64_t x112 = 1913891657540495444LLU;
	int64_t t26 = -1308LL;

	t26 = ((x109/x110)&(x111<x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = 20;
	uint16_t x114 = UINT16_MAX;
	volatile int32_t x115 = -105874;
	volatile int32_t t27 = 10;

	t27 = ((x113/x114)&(x115<x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	uint8_t x119 = 75U;
	int64_t x120 = INT64_MIN;
	volatile int64_t t28 = 124107457488868LL;

	t28 = ((x117/x118)&(x119<x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x122 = -980177032070LL;
	volatile int8_t x123 = -1;
	volatile int64_t t29 = -863LL;

	t29 = ((x121/x122)&(x123<x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x125 = UINT32_MAX;
	uint64_t x128 = 264542948LLU;
	static volatile uint32_t t30 = 14222U;

	t30 = ((x125/x126)&(x127<x128));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MAX;
	static int8_t x130 = -1;
	int64_t x132 = INT64_MIN;
	volatile int64_t t31 = -101562639784LL;

	t31 = ((x129/x130)&(x131<x132));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	volatile int8_t x134 = INT8_MIN;
	volatile int8_t x135 = -1;
	volatile int64_t t32 = -125639284534LL;

	t32 = ((x133/x134)&(x135<x136));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x137 = 366U;
	static uint16_t x139 = 485U;
	volatile uint16_t x140 = 236U;
	static volatile uint32_t t33 = 1U;

	t33 = ((x137/x138)&(x139<x140));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x141 = INT64_MAX;
	uint16_t x142 = 13294U;
	int8_t x143 = -7;
	volatile uint32_t x144 = 296U;
	int64_t t34 = -14873LL;

	t34 = ((x141/x142)&(x143<x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MAX;
	int32_t t35 = -10237869;

	t35 = ((x145/x146)&(x147<x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MIN;
	int8_t x150 = -1;
	uint16_t x152 = 3U;
	static volatile int32_t t36 = -4421;

	t36 = ((x149/x150)&(x151<x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -1;
	int32_t x154 = INT32_MAX;
	int64_t x155 = -1LL;
	static int8_t x156 = -1;
	int32_t t37 = -15781;

	t37 = ((x153/x154)&(x155<x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = 8LL;
	static volatile int32_t t38 = 4;

	t38 = ((x157/x158)&(x159<x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -7;
	static int64_t x163 = 39694860LL;
	volatile int8_t x164 = INT8_MIN;
	int32_t t39 = 5063;

	t39 = ((x161/x162)&(x163<x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = UINT8_MAX;
	uint8_t x166 = 12U;
	volatile int32_t t40 = 728262305;

	t40 = ((x165/x166)&(x167<x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = -7691287905569064LL;
	uint64_t x170 = 23671034071524LLU;
	uint8_t x172 = UINT8_MAX;
	uint64_t t41 = 42557951435169LLU;

	t41 = ((x169/x170)&(x171<x172));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x173 = 2719U;
	static uint16_t x174 = 24U;
	static int16_t x175 = -165;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t42 = 72;

	t42 = ((x173/x174)&(x175<x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x182 = -1;
	uint64_t x183 = UINT64_MAX;
	volatile int32_t t43 = 36094867;

	t43 = ((x181/x182)&(x183<x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x185 = -1;
	int8_t x186 = INT8_MIN;
	int8_t x187 = -1;
	int64_t x188 = INT64_MIN;

	t44 = ((x185/x186)&(x187<x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x189 = -3;
	int8_t x191 = INT8_MAX;
	uint64_t x192 = UINT64_MAX;

	t45 = ((x189/x190)&(x191<x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = 5;
	int8_t x194 = 1;
	int16_t x195 = INT16_MAX;
	int16_t x196 = INT16_MIN;

	t46 = ((x193/x194)&(x195<x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = 0LL;
	int32_t x198 = -14757006;
	int16_t x199 = INT16_MAX;
	static int8_t x200 = 1;

	t47 = ((x197/x198)&(x199<x200));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	uint32_t x204 = UINT32_MAX;
	static int32_t t48 = 389282;

	t48 = ((x201/x202)&(x203<x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -1LL;
	uint64_t x206 = UINT64_MAX;
	int64_t x207 = INT64_MAX;
	static int32_t x208 = INT32_MAX;
	static volatile uint64_t t49 = 82710532886307LLU;

	t49 = ((x205/x206)&(x207<x208));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x209 = INT8_MIN;
	volatile int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MIN;
	volatile int32_t t50 = -1;

	t50 = ((x209/x210)&(x211<x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MAX;
	int16_t x215 = INT16_MIN;
	int16_t x216 = -3493;
	volatile int64_t t51 = 16734372835LL;

	t51 = ((x213/x214)&(x215<x216));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x217 = -26;
	volatile int8_t x219 = 18;
	int32_t x220 = -1;
	volatile int32_t t52 = -112;

	t52 = ((x217/x218)&(x219<x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x221 = INT8_MAX;
	int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MAX;
	static int8_t x224 = INT8_MIN;
	int32_t t53 = -4258;

	t53 = ((x221/x222)&(x223<x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MIN;
	int8_t x227 = 1;
	static uint64_t x228 = UINT64_MAX;
	volatile int64_t t54 = -2141380045LL;

	t54 = ((x225/x226)&(x227<x228));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x230 = INT16_MAX;
	uint32_t x232 = 1531U;
	volatile uint32_t t55 = 693U;

	t55 = ((x229/x230)&(x231<x232));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x233 = UINT32_MAX;
	static uint32_t x234 = UINT32_MAX;
	static volatile uint32_t x235 = UINT32_MAX;
	static uint32_t x236 = 14309U;
	volatile uint32_t t56 = 7U;

	t56 = ((x233/x234)&(x235<x236));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x238 = 2399U;
	uint32_t x239 = 2U;
	uint64_t x240 = 2945LLU;
	int32_t t57 = -42804;

	t57 = ((x237/x238)&(x239<x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = 0;
	uint16_t x242 = UINT16_MAX;
	uint64_t x243 = 9250587633079662LLU;
	int32_t x244 = -1;
	volatile int32_t t58 = 0;

	t58 = ((x241/x242)&(x243<x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MAX;
	static int64_t x246 = -1LL;
	int32_t x247 = INT32_MAX;
	int16_t x248 = 0;
	static volatile int64_t t59 = -1LL;

	t59 = ((x245/x246)&(x247<x248));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MIN;
	static volatile uint32_t x250 = UINT32_MAX;
	uint32_t t60 = 14389U;

	t60 = ((x249/x250)&(x251<x252));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = INT64_MAX;
	uint32_t x254 = UINT32_MAX;
	volatile int32_t x255 = INT32_MIN;
	static volatile int32_t x256 = 7;
	int64_t t61 = 28478LL;

	t61 = ((x253/x254)&(x255<x256));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x258 = 67U;
	uint8_t x259 = 94U;
	int32_t x260 = -1;

	t62 = ((x257/x258)&(x259<x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = 34U;
	uint16_t x262 = 3U;
	int64_t x263 = 1305LL;
	uint8_t x264 = 3U;
	uint32_t t63 = 737U;

	t63 = ((x261/x262)&(x263<x264));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x265 = 168416988LL;
	static uint32_t x267 = UINT32_MAX;
	int8_t x268 = 54;
	volatile int64_t t64 = 202597615639788LL;

	t64 = ((x265/x266)&(x267<x268));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = UINT64_MAX;
	static int32_t x272 = -1;
	uint64_t t65 = 44988716LLU;

	t65 = ((x269/x270)&(x271<x272));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	static int64_t x274 = 142LL;
	uint32_t x276 = 93109U;
	volatile int64_t t66 = -6330396963LL;

	t66 = ((x273/x274)&(x275<x276));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x277 = INT8_MIN;
	int8_t x279 = -1;
	int64_t x280 = -15746LL;
	volatile uint32_t t67 = 23568U;

	t67 = ((x277/x278)&(x279<x280));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x281 = UINT8_MAX;
	int64_t x283 = INT64_MIN;
	int8_t x284 = 13;
	volatile int32_t t68 = 1;

	t68 = ((x281/x282)&(x283<x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x287 = 24675U;
	int64_t x288 = -2799974299072001052LL;
	volatile int64_t t69 = 348066436034847LL;

	t69 = ((x285/x286)&(x287<x288));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x289 = 20U;
	uint64_t x290 = 509207057LLU;
	int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MAX;
	static volatile uint64_t t70 = 237561640LLU;

	t70 = ((x289/x290)&(x291<x292));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x294 = UINT32_MAX;
	volatile int32_t x296 = 1570602;
	volatile uint32_t t71 = 39059582U;

	t71 = ((x293/x294)&(x295<x296));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -5084860LL;
	static int16_t x298 = INT16_MIN;
	volatile int32_t x299 = -2;
	int64_t t72 = -287211162817LL;

	t72 = ((x297/x298)&(x299<x300));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 2U;
	static volatile int16_t x302 = -1;
	int32_t x303 = 13307419;
	static uint16_t x304 = 39U;
	volatile int32_t t73 = -163689;

	t73 = ((x301/x302)&(x303<x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x306 = INT32_MAX;
	int32_t x308 = 1080872;

	t74 = ((x305/x306)&(x307<x308));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x309 = -10785;
	volatile int64_t x310 = INT64_MAX;
	int8_t x311 = INT8_MIN;
	uint8_t x312 = 60U;
	static volatile int64_t t75 = -429845LL;

	t75 = ((x309/x310)&(x311<x312));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x313 = 2U;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = -1LL;
	uint32_t t76 = 59479382U;

	t76 = ((x313/x314)&(x315<x316));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -1LL;
	static int32_t x318 = -3929;
	volatile int64_t x319 = INT64_MIN;
	int64_t t77 = 119938LL;

	t77 = ((x317/x318)&(x319<x320));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x321 = 1211U;
	uint32_t x322 = 309291690U;
	volatile int8_t x323 = -59;
	int64_t x324 = INT64_MIN;

	t78 = ((x321/x322)&(x323<x324));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = 2LLU;
	static volatile uint64_t t79 = 2005530LLU;

	t79 = ((x325/x326)&(x327<x328));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = INT16_MAX;
	static int64_t x330 = -1LL;
	uint64_t x331 = 8962773443695046747LLU;
	int8_t x332 = INT8_MAX;

	t80 = ((x329/x330)&(x331<x332));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x334 = INT16_MAX;
	volatile int8_t x335 = INT8_MAX;

	t81 = ((x333/x334)&(x335<x336));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = 59;
	int16_t x339 = INT16_MIN;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t82 = 33;

	t82 = ((x337/x338)&(x339<x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x341 = 1085061581175252597LLU;
	static int32_t x342 = -2;
	static volatile int64_t x344 = 12269287LL;
	volatile uint64_t t83 = 65671813831479769LLU;

	t83 = ((x341/x342)&(x343<x344));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MIN;
	static int32_t x346 = INT32_MIN;
	int8_t x347 = 48;
	int16_t x348 = 14;
	volatile int32_t t84 = -236;

	t84 = ((x345/x346)&(x347<x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = INT8_MAX;
	uint32_t x350 = UINT32_MAX;
	static int16_t x352 = INT16_MAX;
	uint32_t t85 = 735U;

	t85 = ((x349/x350)&(x351<x352));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = INT64_MIN;
	static uint8_t x354 = 25U;
	volatile int64_t x355 = INT64_MIN;
	volatile int32_t x356 = 518;

	t86 = ((x353/x354)&(x355<x356));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x357 = UINT32_MAX;
	int32_t x358 = 30889;
	volatile int8_t x359 = 8;
	int32_t x360 = INT32_MIN;
	static volatile uint32_t t87 = 5288076U;

	t87 = ((x357/x358)&(x359<x360));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = 590934U;
	static int32_t x362 = INT32_MIN;
	uint8_t x363 = UINT8_MAX;
	volatile uint32_t t88 = 61796U;

	t88 = ((x361/x362)&(x363<x364));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = -7;
	int16_t x366 = INT16_MAX;
	static uint32_t x367 = 0U;
	volatile int32_t t89 = -1;

	t89 = ((x365/x366)&(x367<x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x369 = 498U;
	volatile uint16_t x370 = 22819U;
	static int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MAX;
	static int32_t t90 = -86058;

	t90 = ((x369/x370)&(x371<x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = -89271784268566LL;
	static volatile int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MAX;
	volatile int64_t t91 = 22517660589316LL;

	t91 = ((x373/x374)&(x375<x376));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = -4280608683LL;
	uint64_t x378 = 624326468380703LLU;
	int64_t x379 = INT64_MIN;
	uint8_t x380 = 22U;
	volatile uint64_t t92 = 6349429538LLU;

	t92 = ((x377/x378)&(x379<x380));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x381 = 27U;
	volatile int16_t x382 = INT16_MIN;
	int16_t x383 = INT16_MIN;
	int8_t x384 = 0;
	volatile int32_t t93 = 223424754;

	t93 = ((x381/x382)&(x383<x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x386 = INT8_MIN;
	int8_t x387 = 52;
	int16_t x388 = INT16_MAX;
	volatile int32_t t94 = 0;

	t94 = ((x385/x386)&(x387<x388));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x389 = INT8_MIN;
	static volatile int64_t x390 = INT64_MIN;
	volatile uint8_t x391 = UINT8_MAX;
	int8_t x392 = -5;

	t95 = ((x389/x390)&(x391<x392));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x393 = -1;
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = -1;
	int64_t x396 = -1LL;

	t96 = ((x393/x394)&(x395<x396));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x397 = UINT64_MAX;
	int8_t x398 = INT8_MIN;
	uint64_t x399 = 7960830LLU;
	volatile uint16_t x400 = 0U;
	static uint64_t t97 = 222792LLU;

	t97 = ((x397/x398)&(x399<x400));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MIN;
	int32_t x404 = -1;
	int64_t t98 = 14228325086478132LL;

	t98 = ((x401/x402)&(x403<x404));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = -1LL;
	int64_t x406 = INT64_MAX;
	uint64_t x408 = UINT64_MAX;
	volatile int64_t t99 = 975LL;

	t99 = ((x405/x406)&(x407<x408));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

