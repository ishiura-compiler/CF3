#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
uint32_t x3 = UINT32_MAX;
static uint8_t x7 = 3U;
static volatile uint64_t t3 = 3747428191453608LLU;
volatile int32_t x18 = INT32_MIN;
int16_t x22 = 24;
static int32_t x26 = -6;
volatile int8_t x28 = -1;
int64_t x29 = 813054086391205LL;
static uint16_t x31 = 0U;
int16_t x32 = INT16_MAX;
volatile int32_t x43 = INT32_MIN;
uint8_t x44 = 127U;
uint8_t x46 = 51U;
static volatile int64_t x47 = INT64_MAX;
volatile int32_t t12 = 203;
static uint8_t x55 = 1U;
int64_t x56 = INT64_MIN;
static volatile int64_t t13 = -455929723819402LL;
uint16_t x58 = 322U;
static int64_t x67 = -1LL;
volatile int32_t x68 = -5;
int8_t x69 = 7;
static int32_t t17 = -16244;
static int64_t x73 = 112908579605LL;
int64_t x75 = INT64_MIN;
uint32_t x78 = 1501181U;
int8_t x80 = INT8_MIN;
volatile uint8_t x81 = 100U;
int32_t t25 = 0;
int16_t x105 = INT16_MAX;
volatile int32_t t26 = 5605;
uint8_t x111 = UINT8_MAX;
int32_t x112 = -1;
static int32_t x113 = 40429;
uint64_t x116 = UINT64_MAX;
int16_t x121 = INT16_MIN;
static int32_t x122 = INT32_MIN;
uint8_t x123 = UINT8_MAX;
static int32_t t30 = 7023;
static int16_t x125 = INT16_MIN;
int16_t x129 = INT16_MIN;
int32_t x130 = -1;
int8_t x131 = -1;
uint64_t x132 = UINT64_MAX;
uint16_t x133 = 135U;
int8_t x134 = 17;
int8_t x144 = 5;
uint64_t x153 = 9696578LLU;
int64_t x157 = INT64_MIN;
static int64_t t39 = -839083575680LL;
uint8_t x166 = 0U;
uint8_t x167 = 3U;
static volatile uint8_t x168 = 118U;
int64_t x177 = INT64_MIN;
int8_t x180 = 0;
int64_t x189 = -1LL;
int32_t x194 = INT32_MIN;
volatile uint64_t x195 = UINT64_MAX;
static volatile uint16_t x197 = 2U;
volatile int32_t x202 = 207434047;
volatile int8_t x207 = -6;
int8_t x209 = 1;
int64_t x210 = -781460625LL;
int16_t x215 = -8208;
static int32_t t53 = -2;
uint64_t x224 = UINT64_MAX;
int16_t x226 = -1;
uint8_t x228 = UINT8_MAX;
int8_t x231 = INT8_MIN;
uint16_t x232 = UINT16_MAX;
int32_t x233 = 639525543;
static int8_t x240 = INT8_MAX;
static uint64_t x247 = UINT64_MAX;
volatile int32_t t61 = -124;
volatile int64_t x252 = INT64_MAX;
uint8_t x261 = 0U;
static int16_t x267 = 0;
int32_t t66 = -5440400;
int32_t x275 = -130;
volatile int32_t t68 = 1719;
int64_t x277 = INT64_MIN;
uint16_t x281 = 82U;
static volatile uint64_t t71 = 33754982948LLU;
static int16_t x296 = -79;
uint16_t x302 = 27U;
volatile int8_t x303 = -1;
uint16_t x306 = 23U;
uint16_t x310 = 30U;
static volatile uint8_t x320 = 56U;
volatile int64_t x322 = -1LL;
static int64_t x325 = INT64_MIN;
static int8_t x339 = INT8_MIN;
uint8_t x342 = 3U;
int32_t t87 = -3312;
int16_t x353 = INT16_MIN;
int32_t x359 = -1;
volatile int32_t t89 = 19863;
int32_t t91 = -2576;
int64_t x370 = 107254LL;
int16_t x375 = INT16_MAX;
int8_t x376 = INT8_MAX;
uint32_t t94 = 48393798U;
static uint8_t x383 = 36U;
static int32_t x384 = 315653;
volatile int64_t x385 = INT64_MAX;
int32_t x396 = 44;
static volatile int32_t t98 = 7;
volatile int64_t t99 = 222948465280537LL;


void f0(void) {
	int32_t x1 = 231641;
	uint64_t x4 = 120704796106310LLU;
	volatile int32_t t0 = -810176;

	t0 = (x1*(x2==(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -9905743;
	int16_t x6 = INT16_MIN;
	static int32_t x8 = -13422120;
	volatile int32_t t1 = -6587965;

	t1 = (x5*(x6==(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -6;
	int8_t x10 = -5;
	volatile int64_t x11 = INT64_MAX;
	static int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 157681;

	t2 = (x9*(x10==(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 30528383824LLU;
	volatile int8_t x14 = 0;
	int8_t x15 = -49;
	int64_t x16 = 20210836907LL;

	t3 = (x13*(x14==(x15==x16)));

	if (t3 != 30528383824LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	volatile int8_t x19 = 10;
	int8_t x20 = -3;
	int32_t t4 = -50620307;

	t4 = (x17*(x18==(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -891;
	uint8_t x23 = UINT8_MAX;
	volatile uint16_t x24 = UINT16_MAX;
	static volatile int32_t t5 = -55;

	t5 = (x21*(x22==(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 228U;
	int16_t x27 = INT16_MIN;
	volatile uint32_t t6 = 12417U;

	t6 = (x25*(x26==(x27==x28)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -95193441LL;
	int64_t t7 = -1895911565LL;

	t7 = (x29*(x30==(x31==x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int8_t x34 = INT8_MAX;
	uint32_t x35 = 4395037U;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = 330281;

	t8 = (x33*(x34==(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x37 = UINT64_MAX;
	int64_t x38 = INT64_MAX;
	int64_t x39 = INT64_MAX;
	uint32_t x40 = 1665U;
	volatile uint64_t t9 = 32LLU;

	t9 = (x37*(x38==(x39==x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -1;
	int32_t x42 = INT32_MIN;
	int32_t t10 = 250451550;

	t10 = (x41*(x42==(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 715345449U;
	uint16_t x48 = 1369U;
	volatile uint32_t t11 = 55865U;

	t11 = (x45*(x46==(x47==x48)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	static int32_t x50 = INT32_MAX;
	int32_t x51 = INT32_MIN;
	volatile int16_t x52 = INT16_MIN;

	t12 = (x49*(x50==(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	volatile uint64_t x54 = 592276552289367LLU;

	t13 = (x53*(x54==(x55==x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 126175U;
	uint32_t x59 = 624233180U;
	int64_t x60 = -28938953932939LL;
	volatile uint32_t t14 = 404U;

	t14 = (x57*(x58==(x59==x60)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint16_t x62 = 1001U;
	int64_t x63 = 153LL;
	volatile int8_t x64 = -3;
	volatile int32_t t15 = 280181559;

	t15 = (x61*(x62==(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 82U;
	int16_t x66 = -1;
	volatile uint32_t t16 = 13852U;

	t16 = (x65*(x66==(x67==x68)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	uint32_t x71 = UINT32_MAX;
	int8_t x72 = 0;

	t17 = (x69*(x70==(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 36U;
	int32_t x76 = 40083590;
	volatile int64_t t18 = 370495784283LL;

	t18 = (x73*(x74==(x75==x76)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	static int64_t t19 = 5257LL;

	t19 = (x77*(x78==(x79==x80)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = -41675;
	volatile int32_t x83 = -1;
	volatile int8_t x84 = INT8_MIN;
	int32_t t20 = -684;

	t20 = (x81*(x82==(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = 308;
	static uint64_t x86 = 36939845925159123LLU;
	int16_t x87 = 269;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = -3;

	t21 = (x85*(x86==(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 1924108296U;
	volatile int16_t x90 = INT16_MIN;
	static int16_t x91 = -1;
	volatile uint8_t x92 = UINT8_MAX;
	uint32_t t22 = 134412U;

	t22 = (x89*(x90==(x91==x92)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 1LL;
	volatile int64_t x94 = 23610301742625194LL;
	static int32_t x95 = 103660134;
	uint8_t x96 = UINT8_MAX;
	int64_t t23 = -8081758948LL;

	t23 = (x93*(x94==(x95==x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MIN;
	int16_t x98 = 2176;
	int32_t x99 = 2439188;
	volatile int8_t x100 = INT8_MAX;
	volatile int64_t t24 = -39LL;

	t24 = (x97*(x98==(x99==x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int64_t x102 = -1LL;
	uint32_t x103 = 64367604U;
	uint8_t x104 = UINT8_MAX;

	t25 = (x101*(x102==(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MAX;
	int16_t x107 = INT16_MAX;
	static int32_t x108 = INT32_MAX;

	t26 = (x105*(x106==(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	uint16_t x110 = 7U;
	volatile int32_t t27 = 31377;

	t27 = (x109*(x110==(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x114 = -1;
	static volatile int16_t x115 = INT16_MAX;
	volatile int32_t t28 = 2116;

	t28 = (x113*(x114==(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	static int64_t x118 = INT64_MAX;
	int32_t x119 = -106492;
	static int32_t x120 = -1;
	static int32_t t29 = -2075;

	t29 = (x117*(x118==(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x124 = 35U;

	t30 = (x121*(x122==(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x126 = INT8_MIN;
	int16_t x127 = -2;
	int8_t x128 = -1;
	int32_t t31 = 15856;

	t31 = (x125*(x126==(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t t32 = 11685155;

	t32 = (x129*(x130==(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x135 = -1;
	static int64_t x136 = INT64_MAX;
	volatile int32_t t33 = 1;

	t33 = (x133*(x134==(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	int8_t x138 = INT8_MIN;
	static volatile int64_t x139 = INT64_MAX;
	uint32_t x140 = 4069U;
	static int32_t t34 = 97;

	t34 = (x137*(x138==(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -1;
	volatile int32_t x142 = -1;
	volatile uint16_t x143 = 14U;
	static volatile int32_t t35 = 1735;

	t35 = (x141*(x142==(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 1051LLU;
	uint8_t x146 = UINT8_MAX;
	int64_t x147 = -2298383782LL;
	static int8_t x148 = -3;
	uint64_t t36 = 6933528590901LLU;

	t36 = (x145*(x146==(x147==x148)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile uint8_t x150 = UINT8_MAX;
	static int64_t x151 = INT64_MIN;
	int16_t x152 = -96;
	volatile int32_t t37 = 14137;

	t37 = (x149*(x150==(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = UINT64_MAX;
	uint64_t x155 = 6251074881377065774LLU;
	static uint64_t x156 = UINT64_MAX;
	volatile uint64_t t38 = 2270419844122669393LLU;

	t38 = (x153*(x154==(x155==x156)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = -46205586762762167LL;
	static uint16_t x159 = UINT16_MAX;
	int16_t x160 = INT16_MIN;

	t39 = (x157*(x158==(x159==x160)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -11;
	int8_t x162 = 22;
	int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = 7530925;

	t40 = (x161*(x162==(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x165 = INT8_MIN;
	int32_t t41 = -18981599;

	t41 = (x165*(x166==(x167==x168)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MAX;
	static uint8_t x170 = 3U;
	uint64_t x171 = 1035406331158843LLU;
	uint64_t x172 = UINT64_MAX;
	int32_t t42 = 126;

	t42 = (x169*(x170==(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	uint8_t x174 = 1U;
	volatile uint16_t x175 = UINT16_MAX;
	static int16_t x176 = INT16_MIN;
	static volatile int64_t t43 = 0LL;

	t43 = (x173*(x174==(x175==x176)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x178 = 76446380U;
	int16_t x179 = 10;
	int64_t t44 = 81875678333870LL;

	t44 = (x177*(x178==(x179==x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = -1;
	int64_t x182 = INT64_MIN;
	static int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MAX;
	int32_t t45 = -2;

	t45 = (x181*(x182==(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 8U;
	static int16_t x186 = -1;
	int32_t x187 = INT32_MIN;
	volatile int16_t x188 = -98;
	static int32_t t46 = -10303;

	t46 = (x185*(x186==(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x190 = -340;
	static volatile int32_t x191 = INT32_MIN;
	int32_t x192 = INT32_MIN;
	volatile int64_t t47 = -222438536033701LL;

	t47 = (x189*(x190==(x191==x192)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 46799848LLU;
	int64_t x196 = INT64_MIN;
	uint64_t t48 = 16479801521LLU;

	t48 = (x193*(x194==(x195==x196)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x198 = UINT64_MAX;
	uint8_t x199 = 6U;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = 2202;

	t49 = (x197*(x198==(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	int64_t x203 = 320648358614LL;
	volatile int8_t x204 = INT8_MAX;
	volatile int32_t t50 = -566943985;

	t50 = (x201*(x202==(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 65LLU;
	static volatile uint32_t x206 = 55864849U;
	int16_t x208 = INT16_MIN;
	uint64_t t51 = 7531937LLU;

	t51 = (x205*(x206==(x207==x208)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x211 = INT32_MAX;
	static int16_t x212 = INT16_MIN;
	volatile int32_t t52 = -464238623;

	t52 = (x209*(x210==(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 2U;
	volatile int16_t x214 = INT16_MIN;
	int8_t x216 = -11;

	t53 = (x213*(x214==(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = -55;
	uint8_t x218 = UINT8_MAX;
	volatile int32_t x219 = -1;
	volatile int32_t x220 = INT32_MIN;
	int32_t t54 = 8067945;

	t54 = (x217*(x218==(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	uint8_t x222 = 20U;
	int64_t x223 = -1LL;
	volatile int32_t t55 = -8329;

	t55 = (x221*(x222==(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	static int8_t x227 = INT8_MAX;
	volatile int32_t t56 = 0;

	t56 = (x225*(x226==(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MIN;
	int8_t x230 = INT8_MAX;
	int64_t t57 = -16874817099LL;

	t57 = (x229*(x230==(x231==x232)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x234 = INT16_MIN;
	int16_t x235 = -1;
	int32_t x236 = -10543609;
	volatile int32_t t58 = 1737963;

	t58 = (x233*(x234==(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 1038113408LLU;
	static int8_t x238 = 0;
	uint8_t x239 = 16U;
	uint64_t t59 = 27906105LLU;

	t59 = (x237*(x238==(x239==x240)));

	if (t59 != 1038113408LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MAX;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = 0;
	int32_t x244 = -6785;
	int64_t t60 = 45172597LL;

	t60 = (x241*(x242==(x243==x244)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 489;
	int8_t x246 = -1;
	volatile uint8_t x248 = 1U;

	t61 = (x245*(x246==(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = -23528874531LL;
	uint16_t x250 = 505U;
	volatile int8_t x251 = INT8_MIN;
	volatile int64_t t62 = 3LL;

	t62 = (x249*(x250==(x251==x252)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	volatile int8_t x254 = -1;
	volatile uint64_t x255 = UINT64_MAX;
	static int16_t x256 = -1;
	int32_t t63 = 0;

	t63 = (x253*(x254==(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	volatile int16_t x258 = -1;
	int64_t x259 = -1LL;
	int8_t x260 = INT8_MIN;
	int32_t t64 = -30;

	t64 = (x257*(x258==(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x262 = 23701U;
	uint32_t x263 = UINT32_MAX;
	volatile int8_t x264 = INT8_MIN;
	static int32_t t65 = 1;

	t65 = (x261*(x262==(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = 6865;
	volatile int8_t x266 = INT8_MIN;
	int32_t x268 = INT32_MIN;

	t66 = (x265*(x266==(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	uint32_t x270 = UINT32_MAX;
	uint16_t x271 = 1U;
	uint32_t x272 = UINT32_MAX;
	int32_t t67 = -1;

	t67 = (x269*(x270==(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 123U;
	static int16_t x274 = -3;
	volatile int32_t x276 = -1;

	t68 = (x273*(x274==(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MIN;
	uint16_t x279 = 3171U;
	int64_t x280 = INT64_MIN;
	volatile int64_t t69 = 3516983544862015LL;

	t69 = (x277*(x278==(x279==x280)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x282 = INT64_MIN;
	uint8_t x283 = 1U;
	int8_t x284 = 12;
	volatile int32_t t70 = 703172354;

	t70 = (x281*(x282==(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	uint8_t x286 = UINT8_MAX;
	uint64_t x287 = UINT64_MAX;
	static int64_t x288 = INT64_MAX;

	t71 = (x285*(x286==(x287==x288)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	uint8_t x290 = UINT8_MAX;
	uint32_t x291 = UINT32_MAX;
	int64_t x292 = -1LL;
	volatile int32_t t72 = 1008;

	t72 = (x289*(x290==(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	uint8_t x294 = UINT8_MAX;
	volatile uint32_t x295 = UINT32_MAX;
	volatile uint32_t t73 = 216599U;

	t73 = (x293*(x294==(x295==x296)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = -1LL;
	volatile int64_t x298 = INT64_MIN;
	int64_t x299 = -1LL;
	int16_t x300 = 19;
	int64_t t74 = 68044580201LL;

	t74 = (x297*(x298==(x299==x300)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 153U;
	static volatile int32_t x304 = INT32_MIN;
	volatile int32_t t75 = 3120;

	t75 = (x301*(x302==(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	volatile int64_t x307 = INT64_MIN;
	int8_t x308 = -31;
	volatile int32_t t76 = -25;

	t76 = (x305*(x306==(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 80161LLU;
	static uint8_t x311 = 8U;
	int8_t x312 = -1;
	uint64_t t77 = 1492430370294917LLU;

	t77 = (x309*(x310==(x311==x312)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 2818;
	int8_t x314 = 61;
	int32_t x315 = 2;
	static uint64_t x316 = 655306196637679LLU;
	int32_t t78 = -577193412;

	t78 = (x313*(x314==(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile int16_t x318 = 19;
	int32_t x319 = -1;
	volatile int32_t t79 = 41;

	t79 = (x317*(x318==(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 816425314LLU;
	static volatile int32_t x323 = INT32_MAX;
	volatile int64_t x324 = INT64_MIN;
	volatile uint64_t t80 = 5499709166656722251LLU;

	t80 = (x321*(x322==(x323==x324)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = INT32_MIN;
	int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MIN;
	volatile int64_t t81 = 465562427558586LL;

	t81 = (x325*(x326==(x327==x328)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 994U;
	static int8_t x330 = INT8_MIN;
	static int8_t x331 = -31;
	int64_t x332 = INT64_MAX;
	uint32_t t82 = 234621U;

	t82 = (x329*(x330==(x331==x332)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 42U;
	uint8_t x334 = 0U;
	int16_t x335 = INT16_MIN;
	int16_t x336 = -1;
	int32_t t83 = 1649977;

	t83 = (x333*(x334==(x335==x336)));

	if (t83 != 42) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -299079828133LL;
	int8_t x338 = INT8_MIN;
	int64_t x340 = 1022167500099445057LL;
	int64_t t84 = 37780256683898LL;

	t84 = (x337*(x338==(x339==x340)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	volatile int32_t x343 = -3064011;
	uint8_t x344 = 1U;
	volatile int32_t t85 = -150129787;

	t85 = (x341*(x342==(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	uint8_t x346 = 0U;
	int8_t x347 = INT8_MIN;
	static int64_t x348 = -1LL;
	int64_t t86 = INT64_MAX;

	t86 = (x345*(x346==(x347==x348)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x349 = UINT8_MAX;
	static uint64_t x350 = 5LLU;
	int32_t x351 = -1025038;
	volatile uint8_t x352 = 23U;

	t87 = (x349*(x350==(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = -1LL;
	int32_t x355 = 0;
	int64_t x356 = 186861400169559LL;
	int32_t t88 = -250;

	t88 = (x353*(x354==(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MAX;
	int32_t x358 = -1;
	int64_t x360 = -3633595624035055437LL;

	t89 = (x357*(x358==(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x361 = 1022LLU;
	volatile int16_t x362 = -1576;
	volatile int16_t x363 = -223;
	static volatile uint16_t x364 = 1895U;
	uint64_t t90 = 9540800351420LLU;

	t90 = (x361*(x362==(x363==x364)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -111;
	uint32_t x366 = 1U;
	uint64_t x367 = UINT64_MAX;
	static uint64_t x368 = 114LLU;

	t91 = (x365*(x366==(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = 1663219471044815LLU;
	int16_t x371 = INT16_MIN;
	int32_t x372 = 3;
	static uint64_t t92 = 919675LLU;

	t92 = (x369*(x370==(x371==x372)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	int32_t x374 = 63;
	static int64_t t93 = 1LL;

	t93 = (x373*(x374==(x375==x376)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 4U;
	volatile uint64_t x378 = UINT64_MAX;
	volatile int16_t x379 = INT16_MAX;
	int32_t x380 = 29;

	t94 = (x377*(x378==(x379==x380)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -3;
	int64_t x382 = -1LL;
	volatile int32_t t95 = 53416182;

	t95 = (x381*(x382==(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x386 = INT64_MIN;
	uint32_t x387 = UINT32_MAX;
	volatile uint8_t x388 = UINT8_MAX;
	int64_t t96 = -11423887977LL;

	t96 = (x385*(x386==(x387==x388)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	int16_t x390 = -5629;
	volatile int64_t x391 = -1LL;
	int32_t x392 = INT32_MIN;
	int32_t t97 = -1;

	t97 = (x389*(x390==(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = UINT16_MAX;
	volatile int8_t x394 = INT8_MIN;
	static volatile int32_t x395 = 504;

	t98 = (x393*(x394==(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x397 = INT64_MIN;
	int32_t x398 = INT32_MAX;
	volatile int8_t x399 = -25;
	volatile int64_t x400 = INT64_MAX;

	t99 = (x397*(x398==(x399==x400)));

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

