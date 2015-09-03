#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t1 = -79;
uint64_t x10 = 533276327261755LLU;
static uint8_t x11 = 1U;
volatile int8_t x14 = INT8_MIN;
static int32_t t3 = -103524;
static volatile uint64_t t4 = 195391995288LLU;
int32_t x22 = -1;
static volatile int32_t t5 = 31830;
int32_t t6 = 5611575;
static volatile int32_t x35 = INT32_MAX;
volatile uint64_t x38 = UINT64_MAX;
int16_t x42 = 62;
uint32_t t10 = 107335590U;
int32_t x47 = -1347229;
static int8_t x48 = INT8_MAX;
volatile int32_t t11 = 112;
uint64_t t12 = 4368369772907231992LLU;
int16_t x55 = INT16_MIN;
int32_t t13 = -1;
int8_t x66 = 4;
int16_t x68 = -2552;
static uint16_t x71 = UINT16_MAX;
int16_t x76 = -1725;
volatile int8_t x81 = -1;
uint64_t x82 = 448976832305LLU;
uint64_t x99 = 175LLU;
static int32_t x102 = INT32_MIN;
int8_t x105 = -1;
int64_t x106 = -1LL;
volatile int32_t x117 = INT32_MAX;
static volatile uint32_t t29 = 133896U;
int16_t x121 = INT16_MIN;
int8_t x130 = INT8_MIN;
int8_t x131 = -52;
volatile uint32_t x141 = UINT32_MAX;
static int64_t t35 = -50566982LL;
static volatile uint32_t x146 = 17U;
volatile int32_t t38 = -1;
uint32_t x157 = 881390074U;
uint16_t x160 = UINT16_MAX;
uint16_t x164 = UINT16_MAX;
int32_t t41 = -13;
uint64_t x174 = UINT64_MAX;
int8_t x176 = -1;
int64_t x177 = 3114577320026297LL;
static volatile uint8_t x180 = UINT8_MAX;
uint8_t x184 = 7U;
volatile int16_t x188 = INT16_MIN;
volatile uint16_t x194 = UINT16_MAX;
static volatile int32_t t49 = -422;
volatile uint16_t x201 = 7313U;
static volatile int8_t x202 = -19;
volatile int32_t t50 = INT32_MAX;
int64_t x222 = INT64_MIN;
uint16_t x223 = 99U;
int8_t x229 = INT8_MIN;
int8_t x235 = -2;
int64_t x236 = INT64_MIN;
int32_t x244 = 2;
static int16_t x249 = INT16_MIN;
static volatile int64_t x250 = 8161397103LL;
static int16_t x252 = -1;
uint32_t x254 = UINT32_MAX;
uint32_t x260 = 1891U;
uint64_t x262 = 12992154289LLU;
int16_t x269 = INT16_MIN;
static uint64_t x272 = 2722518449566738LLU;
volatile uint64_t t67 = 55LLU;
volatile int64_t t68 = INT64_MIN;
int32_t x278 = INT32_MIN;
static int64_t x279 = INT64_MAX;
static volatile uint32_t x286 = 50516U;
volatile uint16_t x308 = 8631U;
int32_t x315 = 808;
int16_t x323 = INT16_MIN;
volatile int32_t t80 = -7383;
int8_t x327 = INT8_MAX;
static int32_t t81 = 755419931;
uint8_t x329 = UINT8_MAX;
int32_t x331 = INT32_MIN;
uint16_t x342 = UINT16_MAX;
int64_t x343 = 21768207716384LL;
volatile int16_t x345 = -6;
int16_t x348 = -1;
int32_t t86 = 186;
int8_t x351 = 1;
volatile uint64_t x355 = 2121682LLU;
static volatile int64_t t88 = INT64_MIN;
uint64_t x360 = 177672482729LLU;
int16_t x362 = 5940;
uint16_t x372 = UINT16_MAX;
int64_t x373 = INT64_MIN;
int16_t x374 = 996;
int16_t x375 = -1;
int16_t x379 = 65;
int16_t x381 = INT16_MAX;
static uint32_t t96 = 6409U;
int32_t t98 = 8;


void f0(void) {
	uint16_t x1 = 7U;
	int32_t x2 = 4;
	int32_t x3 = INT32_MAX;
	int16_t x4 = -1;
	int32_t t0 = 343212;

	t0 = ((x1<(x2|x3))*x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint8_t x6 = 1U;
	int32_t x7 = 29;
	int32_t x8 = -17837;

	t1 = ((x5<(x6|x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 15U;
	volatile int8_t x12 = -1;
	static int32_t t2 = 0;

	t2 = ((x9<(x10|x11))*x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	volatile uint8_t x15 = UINT8_MAX;
	int16_t x16 = INT16_MIN;

	t3 = ((x13<(x14|x15))*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	static int8_t x18 = INT8_MIN;
	static int64_t x19 = -1LL;
	uint64_t x20 = UINT64_MAX;

	t4 = ((x17<(x18|x19))*x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 112515669;
	int64_t x23 = INT64_MIN;
	int16_t x24 = 3053;

	t5 = ((x21<(x22|x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = 93940;
	uint8_t x26 = 50U;
	static int32_t x27 = INT32_MIN;
	int32_t x28 = 1;

	t6 = ((x25<(x26|x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 1U;
	volatile int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = 10517459U;
	volatile uint32_t t7 = 7352U;

	t7 = ((x29<(x30|x31))*x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	uint8_t x34 = 0U;
	volatile int32_t x36 = -1373687;
	int32_t t8 = -103662;

	t8 = ((x33<(x34|x35))*x36);

	if (t8 != -1373687) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -4;
	int64_t x39 = INT64_MIN;
	volatile uint64_t x40 = 61623019LLU;
	volatile uint64_t t9 = 268479373917016LLU;

	t9 = ((x37<(x38|x39))*x40);

	if (t9 != 61623019LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile int32_t x43 = INT32_MIN;
	static uint32_t x44 = 1U;

	t10 = ((x41<(x42|x43))*x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static volatile int32_t x46 = INT32_MIN;

	t11 = ((x45<(x46|x47))*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 2U;
	int16_t x50 = INT16_MIN;
	volatile int16_t x51 = 9139;
	static uint64_t x52 = 134517929710959907LLU;

	t12 = ((x49<(x50|x51))*x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = 3;
	static volatile uint16_t x54 = UINT16_MAX;
	int32_t x56 = INT32_MIN;

	t13 = ((x53<(x54|x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	static uint64_t x58 = UINT64_MAX;
	uint8_t x59 = 96U;
	int32_t x60 = -1;
	int32_t t14 = 52;

	t14 = ((x57<(x58|x59))*x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int8_t x62 = -1;
	int8_t x63 = INT8_MAX;
	int8_t x64 = INT8_MIN;
	int32_t t15 = -3758087;

	t15 = ((x61<(x62|x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	int32_t x67 = -614872985;
	static volatile int32_t t16 = 153;

	t16 = ((x65<(x66|x67))*x68);

	if (t16 != -2552) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x69 = 275305108197146LLU;
	uint16_t x70 = 14647U;
	uint16_t x72 = 59U;
	static volatile int32_t t17 = -14905;

	t17 = ((x69<(x70|x71))*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	static int32_t x74 = 745919168;
	uint32_t x75 = 1003613U;
	volatile int32_t t18 = -5;

	t18 = ((x73<(x74|x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 2883U;
	volatile uint8_t x78 = 0U;
	uint64_t x79 = 3322475LLU;
	int32_t x80 = INT32_MAX;
	volatile int32_t t19 = INT32_MAX;

	t19 = ((x77<(x78|x79))*x80);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x83 = INT32_MIN;
	volatile int16_t x84 = INT16_MAX;
	volatile int32_t t20 = 596;

	t20 = ((x81<(x82|x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint64_t x86 = UINT64_MAX;
	volatile int32_t x87 = -3632;
	uint32_t x88 = UINT32_MAX;
	static volatile uint32_t t21 = UINT32_MAX;

	t21 = ((x85<(x86|x87))*x88);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 474LLU;
	uint64_t x90 = 82759914188666791LLU;
	uint8_t x91 = 80U;
	volatile uint16_t x92 = 4898U;
	static volatile int32_t t22 = -6;

	t22 = ((x89<(x90|x91))*x92);

	if (t22 != 4898) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x93 = UINT64_MAX;
	int8_t x94 = -1;
	volatile int32_t x95 = INT32_MIN;
	uint64_t x96 = 1887492800943472811LLU;
	uint64_t t23 = 1462431LLU;

	t23 = ((x93<(x94|x95))*x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = UINT32_MAX;
	static int64_t x98 = INT64_MIN;
	uint16_t x100 = 462U;
	int32_t t24 = 1665352;

	t24 = ((x97<(x98|x99))*x100);

	if (t24 != 462) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 13U;
	int16_t x103 = -1;
	uint8_t x104 = 0U;
	static volatile int32_t t25 = -178944;

	t25 = ((x101<(x102|x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x107 = -3190;
	uint32_t x108 = 172U;
	static volatile uint32_t t26 = 2357130U;

	t26 = ((x105<(x106|x107))*x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	uint16_t x110 = 51U;
	int16_t x111 = INT16_MIN;
	int64_t x112 = INT64_MIN;
	static volatile int64_t t27 = 11114LL;

	t27 = ((x109<(x110|x111))*x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 322501657U;
	static uint32_t x114 = 24U;
	uint32_t x115 = UINT32_MAX;
	volatile int16_t x116 = INT16_MIN;
	static int32_t t28 = 90974524;

	t28 = ((x113<(x114|x115))*x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x118 = -234;
	static int16_t x119 = -627;
	static uint32_t x120 = UINT32_MAX;

	t29 = ((x117<(x118|x119))*x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x122 = INT8_MAX;
	static uint16_t x123 = 9U;
	static volatile int64_t x124 = INT64_MIN;
	volatile int64_t t30 = INT64_MIN;

	t30 = ((x121<(x122|x123))*x124);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 1739U;
	int16_t x126 = INT16_MIN;
	int16_t x127 = -1;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = 91054;

	t31 = ((x125<(x126|x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	int32_t x132 = -1;
	int32_t t32 = -24201124;

	t32 = ((x129<(x130|x131))*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MAX;
	int16_t x134 = -1879;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MAX;
	static int64_t t33 = -2813376152788LL;

	t33 = ((x133<(x134|x135))*x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 7U;
	int8_t x138 = 3;
	volatile int16_t x139 = 0;
	static volatile int32_t x140 = -1;
	int32_t t34 = 63;

	t34 = ((x137<(x138|x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = -3590LL;
	volatile int32_t x143 = 1;
	static int64_t x144 = -1351398755950LL;

	t35 = ((x141<(x142|x143))*x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 10U;
	volatile uint16_t x147 = UINT16_MAX;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = INT32_MIN;

	t36 = ((x145<(x146|x147))*x148);

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = INT16_MIN;
	uint16_t x150 = 13U;
	int64_t x151 = INT64_MIN;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = -115;

	t37 = ((x149<(x150|x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 5793250495998114392LLU;
	int16_t x154 = INT16_MAX;
	int16_t x155 = 15;
	uint8_t x156 = 37U;

	t38 = ((x153<(x154|x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -1;
	volatile int64_t x159 = INT64_MAX;
	volatile int32_t t39 = 756;

	t39 = ((x157<(x158|x159))*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	int8_t x162 = -1;
	int32_t x163 = -7964626;
	volatile int32_t t40 = 5;

	t40 = ((x161<(x162|x163))*x164);

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	static uint32_t x166 = UINT32_MAX;
	int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MAX;

	t41 = ((x165<(x166|x167))*x168);

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x169 = -1;
	uint8_t x170 = 27U;
	int8_t x171 = -1;
	uint32_t x172 = 3U;
	static volatile uint32_t t42 = 512863U;

	t42 = ((x169<(x170|x171))*x172);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	volatile int32_t x175 = INT32_MIN;
	int32_t t43 = 6997;

	t43 = ((x173<(x174|x175))*x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = INT16_MIN;
	volatile uint64_t x179 = 7574611LLU;
	static volatile int32_t t44 = 4;

	t44 = ((x177<(x178|x179))*x180);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = 1;
	static uint8_t x183 = 115U;
	volatile int32_t t45 = 400791492;

	t45 = ((x181<(x182|x183))*x184);

	if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	int64_t x186 = -1LL;
	int64_t x187 = INT64_MAX;
	int32_t t46 = 842347027;

	t46 = ((x185<(x186|x187))*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	int32_t x190 = INT32_MIN;
	int16_t x191 = -1;
	static uint8_t x192 = UINT8_MAX;
	int32_t t47 = 763974839;

	t47 = ((x189<(x190|x191))*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int64_t x195 = -1LL;
	int32_t x196 = 1068;
	static volatile int32_t t48 = 1;

	t48 = ((x193<(x194|x195))*x196);

	if (t48 != 1068) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 6541345565009LLU;
	int32_t x198 = 12671001;
	uint16_t x199 = UINT16_MAX;
	uint16_t x200 = UINT16_MAX;

	t49 = ((x197<(x198|x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x203 = 3641600852092879LLU;
	static int32_t x204 = INT32_MAX;

	t50 = ((x201<(x202|x203))*x204);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 9915719U;
	uint32_t x206 = 118206364U;
	int8_t x207 = INT8_MAX;
	uint8_t x208 = 13U;
	volatile int32_t t51 = -206292;

	t51 = ((x205<(x206|x207))*x208);

	if (t51 != 13) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = 1U;
	static int16_t x210 = INT16_MAX;
	volatile int32_t x211 = INT32_MIN;
	volatile int8_t x212 = 9;
	int32_t t52 = 33;

	t52 = ((x209<(x210|x211))*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MAX;
	int8_t x215 = INT8_MAX;
	static uint16_t x216 = 19714U;
	int32_t t53 = -79;

	t53 = ((x213<(x214|x215))*x216);

	if (t53 != 19714) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 432;
	int16_t x218 = INT16_MIN;
	volatile uint64_t x219 = UINT64_MAX;
	static uint8_t x220 = 29U;
	int32_t t54 = 0;

	t54 = ((x217<(x218|x219))*x220);

	if (t54 != 29) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	int32_t x224 = INT32_MIN;
	static int32_t t55 = 14697;

	t55 = ((x221<(x222|x223))*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = UINT64_MAX;
	int32_t x226 = INT32_MIN;
	uint8_t x227 = 62U;
	int64_t x228 = 2LL;
	int64_t t56 = 0LL;

	t56 = ((x225<(x226|x227))*x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x230 = INT8_MIN;
	uint8_t x231 = 31U;
	volatile int8_t x232 = INT8_MIN;
	int32_t t57 = 348272426;

	t57 = ((x229<(x230|x231))*x232);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 84U;
	int32_t x234 = -1;
	volatile int64_t t58 = 58633261LL;

	t58 = ((x233<(x234|x235))*x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 11U;
	int64_t x238 = INT64_MAX;
	int8_t x239 = -5;
	volatile uint64_t x240 = 29994535LLU;
	static volatile uint64_t t59 = 4868124865501LLU;

	t59 = ((x237<(x238|x239))*x240);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MAX;
	static int64_t x242 = 326468897LL;
	int8_t x243 = 4;
	int32_t t60 = -980;

	t60 = ((x241<(x242|x243))*x244);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 53U;
	static uint64_t x246 = 8975883731LLU;
	volatile int64_t x247 = INT64_MIN;
	uint8_t x248 = 53U;
	volatile int32_t t61 = -968498;

	t61 = ((x245<(x246|x247))*x248);

	if (t61 != 53) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x251 = 17U;
	volatile int32_t t62 = 6437461;

	t62 = ((x249<(x250|x251))*x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 0;
	uint32_t x255 = UINT32_MAX;
	int16_t x256 = INT16_MIN;
	static volatile int32_t t63 = -9508;

	t63 = ((x253<(x254|x255))*x256);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	int32_t x258 = -1;
	static int16_t x259 = 3;
	volatile uint32_t t64 = 40247052U;

	t64 = ((x257<(x258|x259))*x260);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x261 = 126655170814102LL;
	int8_t x263 = -1;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 6227112;

	t65 = ((x261<(x262|x263))*x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	int32_t x266 = INT32_MAX;
	int32_t x267 = -697727908;
	static uint32_t x268 = UINT32_MAX;
	uint32_t t66 = 1U;

	t66 = ((x265<(x266|x267))*x268);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = 865LL;
	static int32_t x271 = INT32_MAX;

	t67 = ((x269<(x270|x271))*x272);

	if (t67 != 2722518449566738LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 195U;
	volatile int8_t x274 = 1;
	int16_t x275 = -1;
	int64_t x276 = INT64_MIN;

	t68 = ((x273<(x274|x275))*x276);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = INT32_MAX;
	int64_t x280 = -1LL;
	int64_t t69 = 23LL;

	t69 = ((x277<(x278|x279))*x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	int16_t x282 = 3;
	volatile int8_t x283 = 9;
	volatile uint64_t x284 = 15305LLU;
	uint64_t t70 = 6077722167259744LLU;

	t70 = ((x281<(x282|x283))*x284);

	if (t70 != 15305LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 2U;
	int32_t x287 = INT32_MIN;
	int8_t x288 = 1;
	volatile int32_t t71 = -44501450;

	t71 = ((x285<(x286|x287))*x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	volatile int16_t x290 = -12906;
	static volatile int8_t x291 = 3;
	uint32_t x292 = 3U;
	static uint32_t t72 = 1127U;

	t72 = ((x289<(x290|x291))*x292);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	volatile int32_t x294 = INT32_MAX;
	int16_t x295 = INT16_MIN;
	volatile uint8_t x296 = UINT8_MAX;
	static volatile int32_t t73 = -11;

	t73 = ((x293<(x294|x295))*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	int64_t x298 = INT64_MIN;
	static int64_t x299 = INT64_MIN;
	int32_t x300 = 7;
	int32_t t74 = 29806243;

	t74 = ((x297<(x298|x299))*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile int64_t x302 = INT64_MIN;
	int64_t x303 = -47889245LL;
	int16_t x304 = 259;
	volatile int32_t t75 = 208226291;

	t75 = ((x301<(x302|x303))*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -37;
	static uint8_t x306 = 93U;
	uint64_t x307 = UINT64_MAX;
	static volatile int32_t t76 = -6;

	t76 = ((x305<(x306|x307))*x308);

	if (t76 != 8631) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = 5;
	int16_t x310 = -15;
	int16_t x311 = INT16_MIN;
	uint64_t x312 = 395547030LLU;
	volatile uint64_t t77 = 811LLU;

	t77 = ((x309<(x310|x311))*x312);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	uint16_t x314 = UINT16_MAX;
	volatile uint32_t x316 = 175064U;
	volatile uint32_t t78 = 11937U;

	t78 = ((x313<(x314|x315))*x316);

	if (t78 != 175064U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x317 = INT32_MIN;
	volatile int8_t x318 = INT8_MIN;
	int32_t x319 = -4;
	static int16_t x320 = 2839;
	int32_t t79 = -62;

	t79 = ((x317<(x318|x319))*x320);

	if (t79 != 2839) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = 4251673U;
	static uint32_t x322 = 129U;
	int8_t x324 = -1;

	t80 = ((x321<(x322|x323))*x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -4367453;
	static uint16_t x326 = 130U;
	uint8_t x328 = UINT8_MAX;

	t81 = ((x325<(x326|x327))*x328);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MIN;
	uint16_t x332 = UINT16_MAX;
	int32_t t82 = 126;

	t82 = ((x329<(x330|x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	int8_t x334 = -1;
	volatile int32_t x335 = 6231;
	static uint16_t x336 = 0U;
	int32_t t83 = 117753;

	t83 = ((x333<(x334|x335))*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	static int64_t x338 = INT64_MIN;
	uint16_t x339 = 1U;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -75;

	t84 = ((x337<(x338|x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 10816438U;
	static uint16_t x344 = 6133U;
	int32_t t85 = -327;

	t85 = ((x341<(x342|x343))*x344);

	if (t85 != 6133) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = -1;
	int64_t x347 = 19LL;

	t86 = ((x345<(x346|x347))*x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	volatile int32_t x350 = INT32_MAX;
	uint64_t x352 = 8LLU;
	static volatile uint64_t t87 = 39278491204LLU;

	t87 = ((x349<(x350|x351))*x352);

	if (t87 != 8LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 10U;
	static int16_t x354 = INT16_MAX;
	int64_t x356 = INT64_MIN;

	t88 = ((x353<(x354|x355))*x356);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	static int16_t x358 = -1;
	int64_t x359 = INT64_MIN;
	uint64_t t89 = 25419493701LLU;

	t89 = ((x357<(x358|x359))*x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	volatile uint64_t x363 = 67LLU;
	uint16_t x364 = UINT16_MAX;
	int32_t t90 = 2697;

	t90 = ((x361<(x362|x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = INT64_MAX;
	static int32_t x366 = INT32_MIN;
	static int64_t x367 = INT64_MIN;
	int64_t x368 = 526276841248979LL;
	volatile int64_t t91 = 176743897LL;

	t91 = ((x365<(x366|x367))*x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 6U;
	volatile uint32_t x370 = UINT32_MAX;
	int64_t x371 = INT64_MIN;
	int32_t t92 = -4213258;

	t92 = ((x369<(x370|x371))*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x376 = -28402;
	volatile int32_t t93 = 6444;

	t93 = ((x373<(x374|x375))*x376);

	if (t93 != -28402) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	int64_t x378 = -1LL;
	int16_t x380 = 1;
	static volatile int32_t t94 = 14;

	t94 = ((x377<(x378|x379))*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x382 = 17U;
	volatile uint8_t x383 = UINT8_MAX;
	int32_t x384 = 335254;
	static volatile int32_t t95 = 56328672;

	t95 = ((x381<(x382|x383))*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MIN;
	volatile int8_t x386 = INT8_MIN;
	uint8_t x387 = 9U;
	static uint32_t x388 = 54U;

	t96 = ((x385<(x386|x387))*x388);

	if (t96 != 54U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = 16052617185LLU;
	static int16_t x392 = INT16_MIN;
	int32_t t97 = -65464;

	t97 = ((x389<(x390|x391))*x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 494113366LLU;
	static volatile int8_t x394 = -1;
	static int32_t x395 = INT32_MAX;
	volatile int8_t x396 = -6;

	t98 = ((x393<(x394|x395))*x396);

	if (t98 != -6) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 134U;
	uint16_t x398 = 466U;
	uint64_t x399 = 2338347412049772732LLU;
	volatile uint8_t x400 = 17U;
	volatile int32_t t99 = 978177793;

	t99 = ((x397<(x398|x399))*x400);

	if (t99 != 17) { NG(); } else { ; }
	
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

