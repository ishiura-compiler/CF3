#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -20;
volatile int32_t x4 = -1;
static int64_t x10 = -1LL;
uint64_t x13 = UINT64_MAX;
int16_t x15 = INT16_MIN;
int32_t x25 = INT32_MIN;
int16_t x27 = -1;
static int32_t t6 = 591438539;
uint8_t x33 = 1U;
volatile int32_t x36 = 96;
int32_t t8 = -353721589;
static int64_t x37 = 16000652273771444LL;
int64_t t9 = -7490330726LL;
int16_t x46 = INT16_MAX;
static int32_t t11 = -186284498;
volatile int32_t t12 = 5375;
int32_t x55 = INT32_MAX;
static int32_t x57 = -1;
static int16_t x66 = -1;
int8_t x67 = 1;
uint16_t x72 = UINT16_MAX;
uint8_t x73 = 3U;
volatile int64_t t19 = -39475511273868LL;
uint16_t x81 = 26816U;
static int32_t t21 = 1;
int8_t x90 = -3;
volatile int32_t t22 = 11178642;
int32_t x99 = -19;
int32_t t24 = -2;
int32_t x105 = INT32_MIN;
volatile uint32_t x106 = UINT32_MAX;
static int8_t x109 = INT8_MIN;
volatile uint32_t x120 = UINT32_MAX;
static uint32_t x130 = 268U;
int32_t t34 = 2;
uint32_t x145 = UINT32_MAX;
int16_t x146 = INT16_MIN;
uint32_t x150 = 1770U;
int8_t x156 = 5;
uint32_t x157 = 177281U;
static int64_t x159 = 5977468073385096LL;
static int32_t t40 = 1;
int16_t x165 = INT16_MAX;
static int16_t x173 = -1;
static int32_t x182 = -1866;
int16_t x184 = -3;
int64_t x185 = INT64_MIN;
int64_t x192 = INT64_MIN;
uint32_t x193 = 1157741250U;
volatile uint8_t x199 = 3U;
int64_t x201 = 1060568661LL;
volatile int64_t t50 = 5372697140269LL;
volatile int8_t x218 = 15;
int8_t x225 = INT8_MIN;
static uint64_t x230 = 172269513323LLU;
volatile int64_t x233 = INT64_MIN;
volatile int64_t t58 = 16413221782553LL;
int32_t t59 = -201;
static int32_t x249 = -1;
int8_t x251 = -19;
int8_t x252 = -1;
int32_t t64 = -33;
int8_t x261 = 0;
uint16_t x268 = 14757U;
static volatile uint64_t t66 = 1918LLU;
int8_t x272 = INT8_MIN;
int32_t t67 = 26961;
volatile int64_t x278 = -9LL;
static int32_t t71 = 1357092;
int8_t x293 = INT8_MIN;
int8_t x298 = INT8_MAX;
uint32_t x302 = 200501U;
int32_t x309 = INT32_MIN;
int32_t x315 = -1;
static volatile int32_t t79 = -25371856;
volatile int32_t t80 = 416499;
int32_t x327 = -44746908;
int64_t x328 = INT64_MIN;
int64_t x338 = INT64_MIN;
uint64_t t84 = UINT64_MAX;
int64_t x341 = INT64_MIN;
static uint32_t x343 = 1839622U;
static uint8_t x344 = 3U;
uint16_t x348 = 173U;
volatile uint64_t t86 = UINT64_MAX;
volatile int16_t x349 = INT16_MAX;
static volatile int32_t t88 = INT32_MIN;
volatile int32_t x374 = INT32_MAX;
int64_t x379 = -1LL;
int64_t x380 = -761LL;
int8_t x388 = 28;
static uint8_t x398 = 23U;


void f0(void) {
	int16_t x1 = -1;
	int16_t x2 = -138;
	static volatile int32_t t0 = 504;

	t0 = (x1*(x2<=(x3|x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	static int64_t x6 = 0LL;
	static int64_t x7 = INT64_MAX;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = INT32_MAX;

	t1 = (x5*(x6<=(x7|x8)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MAX;
	int32_t t2 = -1703292;

	t2 = (x9*(x10<=(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 30U;
	volatile int64_t x16 = INT64_MIN;
	uint64_t t3 = 1325698624284145581LLU;

	t3 = (x13*(x14<=(x15|x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	volatile int16_t x18 = INT16_MAX;
	volatile int32_t x19 = INT32_MIN;
	static int32_t x20 = -1;
	volatile int32_t t4 = -7117;

	t4 = (x17*(x18<=(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 26U;
	int32_t x22 = 103;
	uint32_t x23 = 2592296U;
	int32_t x24 = INT32_MIN;
	uint32_t t5 = 64U;

	t5 = (x21*(x22<=(x23|x24)));

	if (t5 != 26U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = 5538321LL;
	volatile int8_t x28 = -1;

	t6 = (x25*(x26<=(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 5764U;
	int16_t x30 = INT16_MIN;
	static uint8_t x31 = 4U;
	uint64_t x32 = 26306589LLU;
	uint32_t t7 = 5U;

	t7 = (x29*(x30<=(x31|x32)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = INT8_MAX;

	t8 = (x33*(x34<=(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	uint32_t x39 = UINT32_MAX;
	static volatile int8_t x40 = INT8_MIN;

	t9 = (x37*(x38<=(x39|x40)));

	if (t9 != 16000652273771444LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -5903;
	static int16_t x42 = -30;
	int8_t x43 = 53;
	int64_t x44 = -1LL;
	int32_t t10 = -216;

	t10 = (x41*(x42<=(x43|x44)));

	if (t10 != -5903) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = UINT8_MAX;
	static uint8_t x47 = 6U;
	int32_t x48 = INT32_MIN;

	t11 = (x45*(x46<=(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -85431607;
	static volatile int8_t x50 = -1;
	int16_t x51 = -1;
	static int32_t x52 = 368238;

	t12 = (x49*(x50<=(x51|x52)));

	if (t12 != -85431607) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 1427U;
	int16_t x54 = 740;
	static volatile int64_t x56 = -1LL;
	static int32_t t13 = 47631670;

	t13 = (x53*(x54<=(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = UINT32_MAX;
	uint64_t x59 = 1LLU;
	volatile uint16_t x60 = UINT16_MAX;
	int32_t t14 = 2136;

	t14 = (x57*(x58<=(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 11U;
	int8_t x62 = -1;
	static volatile uint32_t x63 = 122312U;
	uint32_t x64 = 355063U;
	static volatile int32_t t15 = -416018;

	t15 = (x61*(x62<=(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 14;

	t16 = (x65*(x66<=(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 0U;
	int64_t x70 = INT64_MIN;
	static int8_t x71 = INT8_MIN;
	int32_t t17 = 1354;

	t17 = (x69*(x70<=(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = 5;
	int8_t x75 = -29;
	static int8_t x76 = INT8_MAX;
	volatile int32_t t18 = -26065;

	t18 = (x73*(x74<=(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 1628LL;
	static int64_t x78 = -1LL;
	static int8_t x79 = INT8_MIN;
	static volatile int64_t x80 = -1LL;

	t19 = (x77*(x78<=(x79|x80)));

	if (t19 != 1628LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x82 = 13;
	volatile int32_t x83 = -1;
	int8_t x84 = 12;
	int32_t t20 = -49;

	t20 = (x81*(x82<=(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	volatile uint32_t x86 = UINT32_MAX;
	int32_t x87 = INT32_MAX;
	int64_t x88 = INT64_MIN;

	t21 = (x85*(x86<=(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	volatile uint32_t x91 = 8U;
	int8_t x92 = -1;

	t22 = (x89*(x90<=(x91|x92)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static int64_t x94 = -6317387LL;
	uint8_t x95 = 3U;
	uint16_t x96 = 435U;
	static volatile int32_t t23 = 0;

	t23 = (x93*(x94<=(x95|x96)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x97 = 2U;
	uint16_t x98 = 1915U;
	uint32_t x100 = UINT32_MAX;

	t24 = (x97*(x98<=(x99|x100)));

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 10668098LLU;
	int8_t x102 = -1;
	int64_t x103 = INT64_MIN;
	static int16_t x104 = -1;
	uint64_t t25 = 5204529630579731LLU;

	t25 = (x101*(x102<=(x103|x104)));

	if (t25 != 10668098LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x107 = 16LLU;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = INT32_MIN;

	t26 = (x105*(x106<=(x107|x108)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = UINT32_MAX;
	static int16_t x111 = -1;
	volatile uint32_t x112 = 12U;
	static int32_t t27 = -24786442;

	t27 = (x109*(x110<=(x111|x112)));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 15U;
	static uint64_t x114 = 93543LLU;
	volatile int64_t x115 = INT64_MAX;
	int8_t x116 = -3;
	volatile int32_t t28 = 60;

	t28 = (x113*(x114<=(x115|x116)));

	if (t28 != 15) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = -191;
	int16_t x118 = INT16_MAX;
	static volatile int64_t x119 = INT64_MIN;
	int32_t t29 = 6227071;

	t29 = (x117*(x118<=(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	volatile int64_t x122 = INT64_MIN;
	volatile int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MIN;
	int32_t t30 = -379141855;

	t30 = (x121*(x122<=(x123|x124)));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MAX;
	int16_t x126 = INT16_MAX;
	static int64_t x127 = -1LL;
	static int64_t x128 = INT64_MAX;
	volatile int64_t t31 = -507132372901605LL;

	t31 = (x125*(x126<=(x127|x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	int8_t x131 = 27;
	uint8_t x132 = 9U;
	static int32_t t32 = 14;

	t32 = (x129*(x130<=(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 2072822U;
	volatile int32_t x134 = 1499907;
	uint16_t x135 = 170U;
	int32_t x136 = 101198992;
	static volatile uint32_t t33 = 3U;

	t33 = (x133*(x134<=(x135|x136)));

	if (t33 != 2072822U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = 10324815;
	uint64_t x138 = 331428406359LLU;
	volatile int32_t x139 = INT32_MAX;
	int16_t x140 = 6164;

	t34 = (x137*(x138<=(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	uint16_t x142 = 15U;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = 13196U;
	static volatile int32_t t35 = 1;

	t35 = (x141*(x142<=(x143|x144)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x147 = INT32_MIN;
	int64_t x148 = -1LL;
	static volatile uint32_t t36 = UINT32_MAX;

	t36 = (x145*(x146<=(x147|x148)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 13U;
	int8_t x151 = 55;
	static int16_t x152 = -1;
	volatile int32_t t37 = -8;

	t37 = (x149*(x150<=(x151|x152)));

	if (t37 != 13) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x154 = 9854222325919048LLU;
	int8_t x155 = 26;
	int32_t t38 = -1408517;

	t38 = (x153*(x154<=(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MAX;
	static int64_t x160 = 188976457870LL;
	uint32_t t39 = 270893192U;

	t39 = (x157*(x158<=(x159|x160)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	volatile int8_t x162 = INT8_MIN;
	int16_t x163 = -1;
	volatile int8_t x164 = INT8_MAX;

	t40 = (x161*(x162<=(x163|x164)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = -1;
	uint64_t x167 = UINT64_MAX;
	uint8_t x168 = 5U;
	int32_t t41 = 475661959;

	t41 = (x165*(x166<=(x167|x168)));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 2;
	int32_t x170 = INT32_MIN;
	int64_t x171 = 6770LL;
	int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = 1898282;

	t42 = (x169*(x170<=(x171|x172)));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = INT32_MIN;
	uint16_t x175 = 179U;
	int32_t x176 = 32859838;
	static int32_t t43 = -936856795;

	t43 = (x173*(x174<=(x175|x176)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = 1U;
	uint8_t x178 = 1U;
	uint32_t x179 = 2817U;
	int16_t x180 = -1370;
	int32_t t44 = 358053;

	t44 = (x177*(x178<=(x179|x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 280U;
	int16_t x183 = -1;
	volatile int32_t t45 = -68287;

	t45 = (x181*(x182<=(x183|x184)));

	if (t45 != 280) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = INT64_MAX;
	uint64_t x187 = 25LLU;
	int32_t x188 = -25184927;
	volatile int64_t t46 = INT64_MIN;

	t46 = (x185*(x186<=(x187|x188)));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = -349086;
	uint16_t x191 = 1U;
	volatile int32_t t47 = -1;

	t47 = (x189*(x190<=(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x194 = 28454U;
	int64_t x195 = INT64_MIN;
	uint16_t x196 = 10U;
	uint32_t t48 = 198U;

	t48 = (x193*(x194<=(x195|x196)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = 14920710459091766LL;
	uint8_t x198 = UINT8_MAX;
	volatile int64_t x200 = INT64_MAX;
	static int64_t t49 = 45684476LL;

	t49 = (x197*(x198<=(x199|x200)));

	if (t49 != 14920710459091766LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 28795LLU;
	volatile int16_t x203 = 6;
	int64_t x204 = -580501281935323LL;

	t50 = (x201*(x202<=(x203|x204)));

	if (t50 != 1060568661LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	uint32_t x206 = 365385046U;
	int16_t x207 = INT16_MIN;
	int16_t x208 = -1;
	int32_t t51 = INT32_MIN;

	t51 = (x205*(x206<=(x207|x208)));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = -3196;
	static volatile int64_t x210 = -1LL;
	uint64_t x211 = 252662545844728877LLU;
	int16_t x212 = INT16_MAX;
	volatile int32_t t52 = 0;

	t52 = (x209*(x210<=(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 1378LLU;
	uint32_t x214 = 17U;
	static int16_t x215 = -5;
	static uint8_t x216 = 1U;
	uint64_t t53 = 3791807457LLU;

	t53 = (x213*(x214<=(x215|x216)));

	if (t53 != 1378LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	int32_t x219 = INT32_MIN;
	static int64_t x220 = -16681554LL;
	static int32_t t54 = 10;

	t54 = (x217*(x218<=(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 16929427U;
	uint16_t x224 = 14155U;
	int64_t t55 = -41742564179555LL;

	t55 = (x221*(x222<=(x223|x224)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x226 = -1;
	uint8_t x227 = 2U;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -715982;

	t56 = (x225*(x226<=(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = 568640367564585LL;
	volatile uint8_t x231 = 0U;
	uint64_t x232 = UINT64_MAX;
	volatile int64_t t57 = -780LL;

	t57 = (x229*(x230<=(x231|x232)));

	if (t57 != 568640367564585LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = 21;
	int8_t x235 = INT8_MAX;
	int64_t x236 = -1LL;

	t58 = (x233*(x234<=(x235|x236)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = UINT16_MAX;
	int16_t x238 = 2;
	int8_t x239 = -1;
	int64_t x240 = 435859690905623LL;

	t59 = (x237*(x238<=(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MIN;
	uint32_t x242 = 156U;
	int32_t x243 = INT32_MIN;
	static uint32_t x244 = UINT32_MAX;
	int32_t t60 = INT32_MIN;

	t60 = (x241*(x242<=(x243|x244)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	uint32_t x246 = UINT32_MAX;
	int32_t x247 = INT32_MIN;
	volatile uint16_t x248 = 13842U;
	int32_t t61 = -17;

	t61 = (x245*(x246<=(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x250 = 923782910519591LL;
	volatile int32_t t62 = 314280;

	t62 = (x249*(x250<=(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = -2270;
	volatile int64_t x254 = INT64_MIN;
	static volatile int16_t x255 = -1;
	uint32_t x256 = 53662066U;
	int32_t t63 = 267741;

	t63 = (x253*(x254<=(x255|x256)));

	if (t63 != -2270) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = -1;
	static int8_t x258 = -38;
	int8_t x259 = -1;
	int16_t x260 = INT16_MAX;

	t64 = (x257*(x258<=(x259|x260)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x262 = INT8_MAX;
	static uint16_t x263 = 6168U;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t65 = 388867850;

	t65 = (x261*(x262<=(x263|x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 4793164969892LLU;
	int16_t x266 = INT16_MAX;
	uint32_t x267 = UINT32_MAX;

	t66 = (x265*(x266<=(x267|x268)));

	if (t66 != 4793164969892LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1629146;
	static uint32_t x270 = 4165278U;
	int16_t x271 = 11;

	t67 = (x269*(x270<=(x271|x272)));

	if (t67 != -1629146) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 12451668;
	volatile int16_t x274 = -1;
	static uint8_t x275 = UINT8_MAX;
	int32_t x276 = 201;
	static volatile int32_t t68 = -77;

	t68 = (x273*(x274<=(x275|x276)));

	if (t68 != 12451668) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t69 = -88726;

	t69 = (x277*(x278<=(x279|x280)));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x282 = INT16_MIN;
	int32_t x283 = -6;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = -105810866;

	t70 = (x281*(x282<=(x283|x284)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	static int8_t x286 = INT8_MAX;
	int64_t x287 = -1LL;
	uint16_t x288 = 476U;

	t71 = (x285*(x286<=(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -6;
	static uint64_t x290 = 155450733687180LLU;
	int16_t x291 = INT16_MAX;
	uint64_t x292 = 908873181018502658LLU;
	static volatile int32_t t72 = 210132;

	t72 = (x289*(x290<=(x291|x292)));

	if (t72 != -6) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = UINT64_MAX;
	uint16_t x295 = UINT16_MAX;
	uint16_t x296 = 9U;
	volatile int32_t t73 = 0;

	t73 = (x293*(x294<=(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int16_t x299 = INT16_MAX;
	static int16_t x300 = INT16_MIN;
	int32_t t74 = -28698143;

	t74 = (x297*(x298<=(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 1004U;
	uint32_t x303 = UINT32_MAX;
	uint64_t x304 = 8136885292229078494LLU;
	int32_t t75 = -10638;

	t75 = (x301*(x302<=(x303|x304)));

	if (t75 != 1004) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 1;
	int8_t x306 = INT8_MIN;
	int8_t x307 = 28;
	int32_t x308 = INT32_MIN;
	int32_t t76 = -212987;

	t76 = (x305*(x306<=(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = 119775945;
	static int8_t x311 = INT8_MAX;
	static int8_t x312 = -1;
	volatile int32_t t77 = 23085060;

	t77 = (x309*(x310<=(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	uint16_t x314 = 24U;
	volatile int8_t x316 = INT8_MIN;
	int32_t t78 = 553123;

	t78 = (x313*(x314<=(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	uint8_t x318 = 3U;
	int16_t x319 = INT16_MIN;
	int16_t x320 = -5;

	t79 = (x317*(x318<=(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 1U;
	uint16_t x322 = UINT16_MAX;
	static volatile int64_t x323 = INT64_MIN;
	volatile uint32_t x324 = UINT32_MAX;

	t80 = (x321*(x322<=(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = 98U;
	static uint8_t x326 = UINT8_MAX;
	volatile int32_t t81 = 1;

	t81 = (x325*(x326<=(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -6;
	volatile uint64_t x330 = 177317527819LLU;
	int8_t x331 = INT8_MIN;
	int32_t x332 = -876;
	int32_t t82 = -565;

	t82 = (x329*(x330<=(x331|x332)));

	if (t82 != -6) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	uint16_t x334 = UINT16_MAX;
	int64_t x335 = 1097547032LL;
	uint16_t x336 = 84U;
	uint32_t t83 = UINT32_MAX;

	t83 = (x333*(x334<=(x335|x336)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	static int32_t x339 = 1759401;
	uint32_t x340 = 182047U;

	t84 = (x337*(x338<=(x339|x340)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x342 = UINT64_MAX;
	int64_t t85 = 1LL;

	t85 = (x341*(x342<=(x343|x344)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = UINT64_MAX;
	int32_t x346 = INT32_MIN;
	static uint8_t x347 = 12U;

	t86 = (x345*(x346<=(x347|x348)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x350 = UINT8_MAX;
	int16_t x351 = INT16_MIN;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t87 = -3;

	t87 = (x349*(x350<=(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MIN;
	int64_t x355 = -1LL;
	static volatile int8_t x356 = INT8_MIN;

	t88 = (x353*(x354<=(x355|x356)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = -1;
	volatile int16_t x359 = -3150;
	int32_t x360 = -1644230;
	static volatile int32_t t89 = 0;

	t89 = (x357*(x358<=(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	int16_t x362 = INT16_MIN;
	int64_t x363 = 18122144LL;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t90 = INT32_MAX;

	t90 = (x361*(x362<=(x363|x364)));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = -1;
	volatile int64_t x366 = -4545LL;
	uint32_t x367 = 39U;
	int32_t x368 = 69;
	volatile int32_t t91 = -50031;

	t91 = (x365*(x366<=(x367|x368)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = 0U;
	int32_t x370 = INT32_MAX;
	int32_t x371 = -68419;
	uint64_t x372 = 2215540973786LLU;
	volatile int32_t t92 = 28763;

	t92 = (x369*(x370<=(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	volatile int16_t x375 = -24;
	static int8_t x376 = -13;
	int32_t t93 = 15771807;

	t93 = (x373*(x374<=(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	volatile uint32_t x378 = 902659086U;
	static volatile int32_t t94 = -2;

	t94 = (x377*(x378<=(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	int32_t x382 = -1;
	static volatile int16_t x383 = INT16_MIN;
	int64_t x384 = INT64_MIN;
	volatile int32_t t95 = 7258962;

	t95 = (x381*(x382<=(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	uint16_t x386 = 2844U;
	static uint8_t x387 = 9U;
	int32_t t96 = -941808200;

	t96 = (x385*(x386<=(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	int64_t x390 = 55048743LL;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = 3130308151162LLU;
	volatile int32_t t97 = 38;

	t97 = (x389*(x390<=(x391|x392)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	uint8_t x394 = 3U;
	static int16_t x395 = INT16_MIN;
	volatile int16_t x396 = 245;
	volatile int32_t t98 = 3791274;

	t98 = (x393*(x394<=(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	static int64_t x399 = -1LL;
	int64_t x400 = 22072719LL;
	volatile uint32_t t99 = 426U;

	t99 = (x397*(x398<=(x399|x400)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

