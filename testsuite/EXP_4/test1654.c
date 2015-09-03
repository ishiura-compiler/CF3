#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x10 = -1LL;
static int64_t t2 = 119220347819540LL;
int64_t x16 = INT64_MAX;
int64_t x19 = INT64_MAX;
volatile int64_t t4 = 374040862550LL;
static uint64_t x26 = 14964LLU;
uint64_t x29 = 18044531211LLU;
int64_t x33 = INT64_MIN;
static int64_t t9 = INT64_MIN;
static int64_t x43 = 14210824852LL;
int32_t x46 = -1;
volatile uint8_t x51 = 0U;
int64_t t12 = 4607558141058438300LL;
uint8_t x56 = 2U;
volatile int32_t t15 = -984027;
volatile int64_t x66 = -1LL;
uint16_t x71 = UINT16_MAX;
int16_t x79 = -1;
volatile int8_t x82 = -1;
volatile int16_t x91 = INT16_MAX;
uint8_t x94 = 0U;
int16_t x101 = -29;
uint16_t x104 = 58U;
int32_t t26 = -1002854;
int16_t x115 = 1;
int32_t x116 = INT32_MAX;
int32_t x123 = -554279;
uint8_t x124 = 69U;
static int8_t x133 = INT8_MIN;
volatile int32_t t33 = 19;
uint8_t x141 = 50U;
static int8_t x143 = -1;
static int64_t t35 = -6424624LL;
int32_t x147 = -1;
volatile uint64_t t36 = 4055LLU;
static int32_t x162 = INT32_MIN;
static int16_t x166 = -2026;
int64_t x170 = -1LL;
static int16_t x174 = INT16_MAX;
int8_t x175 = 1;
int32_t x186 = INT32_MAX;
static volatile int32_t t46 = INT32_MIN;
int64_t t49 = 1925951892531098LL;
volatile int64_t x205 = INT64_MIN;
int8_t x211 = INT8_MIN;
static volatile uint32_t t52 = 546U;
uint8_t x217 = 2U;
int64_t x220 = -497851370LL;
int64_t x221 = -1LL;
static int32_t x222 = INT32_MIN;
int64_t x225 = INT64_MAX;
static int8_t x227 = -5;
int32_t x228 = INT32_MAX;
int64_t t56 = 39612596089996LL;
int64_t x229 = -52601781740772LL;
int64_t t57 = 131573LL;
int64_t x237 = INT64_MIN;
uint8_t x241 = 18U;
uint32_t x244 = 385410U;
int16_t x245 = -1;
static uint64_t t61 = UINT64_MAX;
uint16_t x250 = UINT16_MAX;
int32_t t63 = -346;
volatile int32_t x262 = 29200713;
volatile int32_t x264 = INT32_MAX;
static volatile int8_t x269 = INT8_MIN;
static volatile int64_t x275 = INT64_MIN;
static uint8_t x276 = 0U;
int16_t x278 = 49;
uint64_t x282 = 0LLU;
int64_t x284 = 118552072585557LL;
static volatile uint64_t t70 = 1333654317644LLU;
int64_t x300 = INT64_MIN;
volatile int64_t x304 = -70062786898953719LL;
int8_t x309 = INT8_MIN;
static volatile int8_t x312 = 1;
volatile int8_t x314 = -1;
volatile int16_t x320 = -1;
int8_t x321 = -5;
volatile int32_t t81 = 113419;
int16_t x333 = INT16_MIN;
int32_t x336 = INT32_MAX;
static volatile uint64_t t83 = 986098LLU;
int32_t x343 = 868567844;
volatile uint64_t t87 = 484214511LLU;
uint32_t x360 = UINT32_MAX;
int16_t x362 = INT16_MIN;
volatile uint32_t t91 = 0U;
int64_t x372 = INT64_MAX;
volatile uint64_t t92 = UINT64_MAX;
volatile int32_t t93 = 568970052;
int16_t x381 = -1;
volatile int16_t x382 = -5;
static int16_t x384 = INT16_MIN;
static uint32_t x386 = 29060446U;
int32_t x393 = -1;
int64_t x394 = 1826LL;


void f0(void) {
	static int32_t x1 = -1;
	int16_t x2 = INT16_MAX;
	static int16_t x3 = INT16_MIN;
	volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -34145517;

	t0 = (x1*(x2&(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint8_t x6 = 1U;
	static volatile int64_t x7 = -117LL;
	int8_t x8 = INT8_MIN;
	int64_t t1 = 14141070LL;

	t1 = (x5*(x6&(x7<=x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	uint16_t x11 = 6891U;
	int64_t x12 = INT64_MAX;

	t2 = (x9*(x10&(x11<=x12)));

	if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int64_t x14 = -527803284931460LL;
	volatile uint8_t x15 = 91U;
	volatile int64_t t3 = 448093977185498514LL;

	t3 = (x13*(x14&(x15<=x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	int64_t x18 = -7516LL;
	volatile uint64_t x20 = 1628593182372LLU;

	t4 = (x17*(x18&(x19<=x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -2;
	uint32_t x22 = 3995U;
	volatile int16_t x23 = -40;
	volatile int8_t x24 = -1;
	volatile uint32_t t5 = 4162818U;

	t5 = (x21*(x22&(x23<=x24)));

	if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 7U;
	int16_t x27 = INT16_MIN;
	static volatile int64_t x28 = -1LL;
	uint64_t t6 = 3LLU;

	t6 = (x25*(x26&(x27<=x28)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	uint64_t x31 = 2378535560LLU;
	uint8_t x32 = 46U;
	uint64_t t7 = 157589392032LLU;

	t7 = (x29*(x30&(x31<=x32)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = 93;
	int16_t x35 = -12223;
	int8_t x36 = INT8_MIN;
	int64_t t8 = INT64_MIN;

	t8 = (x33*(x34&(x35<=x36)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile int16_t x38 = INT16_MAX;
	static int16_t x39 = -1;
	volatile int16_t x40 = -1;

	t9 = (x37*(x38&(x39<=x40)));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MAX;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -62668248;

	t10 = (x41*(x42&(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MAX;
	int8_t x47 = INT8_MIN;
	int64_t x48 = -1LL;
	volatile int32_t t11 = -3302;

	t11 = (x45*(x46&(x47<=x48)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint32_t x50 = 339682652U;
	int32_t x52 = -1;

	t12 = (x49*(x50&(x51<=x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1;
	int16_t x54 = -2;
	int64_t x55 = -1LL;
	int32_t t13 = 0;

	t13 = (x53*(x54&(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 28838206LLU;
	volatile int64_t x58 = 1804053875022164181LL;
	volatile uint8_t x59 = UINT8_MAX;
	int8_t x60 = -1;
	static volatile uint64_t t14 = 102681199507LLU;

	t14 = (x57*(x58&(x59<=x60)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	uint8_t x62 = UINT8_MAX;
	uint64_t x63 = UINT64_MAX;
	static volatile int16_t x64 = INT16_MIN;

	t15 = (x61*(x62&(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MAX;
	static int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MAX;
	static int64_t t16 = -540747390379128270LL;

	t16 = (x65*(x66&(x67<=x68)));

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -3949;
	static int8_t x70 = 37;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -25609;

	t17 = (x69*(x70&(x71<=x72)));

	if (t17 != -3949) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	int32_t x74 = 313922;
	volatile uint8_t x75 = 11U;
	static volatile int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -139877;

	t18 = (x73*(x74&(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	uint16_t x78 = 3510U;
	int8_t x80 = INT8_MIN;
	uint64_t t19 = 1149231153792046954LLU;

	t19 = (x77*(x78&(x79<=x80)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 6351294861LLU;
	uint32_t x83 = 22U;
	int8_t x84 = INT8_MIN;
	volatile uint64_t t20 = 5249958LLU;

	t20 = (x81*(x82&(x83<=x84)));

	if (t20 != 6351294861LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	uint64_t x86 = 3LLU;
	static volatile int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	uint64_t t21 = 2110222502862272827LLU;

	t21 = (x85*(x86&(x87<=x88)));

	if (t21 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 187U;
	volatile int8_t x90 = -1;
	int8_t x92 = -1;
	int32_t t22 = -185;

	t22 = (x89*(x90&(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static int8_t x95 = -1;
	volatile int32_t x96 = -1;
	static volatile int32_t t23 = -131387783;

	t23 = (x93*(x94&(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MAX;
	int32_t x99 = INT32_MIN;
	int32_t x100 = -1;
	static int64_t t24 = INT64_MIN;

	t24 = (x97*(x98&(x99<=x100)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x102 = 12;
	static volatile int32_t x103 = INT32_MAX;
	volatile int32_t t25 = 196;

	t25 = (x101*(x102&(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	int32_t x106 = INT32_MIN;
	int64_t x107 = INT64_MIN;
	int64_t x108 = 3592LL;

	t26 = (x105*(x106&(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 862U;
	int64_t x110 = -3671953109LL;
	volatile int8_t x111 = -1;
	int64_t x112 = 181741LL;
	volatile int64_t t27 = -121323611591LL;

	t27 = (x109*(x110&(x111<=x112)));

	if (t27 != 862LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	static uint32_t x114 = 96236U;
	volatile uint32_t t28 = 1972028781U;

	t28 = (x113*(x114&(x115<=x116)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = 128LL;
	volatile int32_t x118 = 521;
	uint8_t x119 = 10U;
	uint8_t x120 = 6U;
	int64_t t29 = -123583463LL;

	t29 = (x117*(x118&(x119<=x120)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = UINT8_MAX;
	int16_t x122 = -1;
	static int32_t t30 = 8743;

	t30 = (x121*(x122&(x123<=x124)));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	static int8_t x126 = -1;
	int32_t x127 = 0;
	volatile int32_t x128 = -57497;
	int32_t t31 = 2125464;

	t31 = (x125*(x126&(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x130 = INT64_MIN;
	uint8_t x131 = 108U;
	static int16_t x132 = INT16_MIN;
	int64_t t32 = -173873234043518556LL;

	t32 = (x129*(x130&(x131<=x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 0U;
	static volatile uint16_t x135 = 174U;
	int16_t x136 = 0;

	t33 = (x133*(x134&(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 2398621923LLU;
	uint64_t x138 = 2345190009518LLU;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = 1220U;
	volatile uint64_t t34 = 155272375LLU;

	t34 = (x137*(x138&(x139<=x140)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MAX;
	static int8_t x144 = INT8_MIN;

	t35 = (x141*(x142&(x143<=x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	uint64_t x146 = UINT64_MAX;
	uint8_t x148 = 4U;

	t36 = (x145*(x146&(x147<=x148)));

	if (t36 != 255LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	uint64_t x150 = 3LLU;
	uint8_t x151 = 73U;
	int16_t x152 = -3597;
	volatile uint64_t t37 = 508711514728097LLU;

	t37 = (x149*(x150&(x151<=x152)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int64_t x154 = INT64_MIN;
	uint8_t x155 = 1U;
	int64_t x156 = INT64_MAX;
	volatile int64_t t38 = -16299863126765463LL;

	t38 = (x153*(x154&(x155<=x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	uint16_t x158 = 117U;
	uint64_t x159 = UINT64_MAX;
	volatile int8_t x160 = -2;
	int32_t t39 = -1;

	t39 = (x157*(x158&(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 8;
	int64_t x163 = 323LL;
	int64_t x164 = -1LL;
	int32_t t40 = -782;

	t40 = (x161*(x162&(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	uint64_t x167 = 185254058980702LLU;
	uint64_t x168 = 265977526LLU;
	static volatile int32_t t41 = -67866;

	t41 = (x165*(x166&(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -50;
	static int8_t x171 = INT8_MIN;
	int16_t x172 = -147;
	volatile int64_t t42 = 1LL;

	t42 = (x169*(x170&(x171<=x172)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 460392252407844707LLU;
	uint16_t x176 = 3078U;
	volatile uint64_t t43 = 575936915769509618LLU;

	t43 = (x173*(x174&(x175<=x176)));

	if (t43 != 460392252407844707LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = -1989LL;
	int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MIN;
	volatile int64_t t44 = 953446LL;

	t44 = (x177*(x178&(x179<=x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = -5964059388150219LL;
	static int16_t x182 = INT16_MAX;
	volatile uint16_t x183 = 57U;
	static volatile int32_t x184 = -1;
	int64_t t45 = -283911046727363954LL;

	t45 = (x181*(x182&(x183<=x184)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int32_t x187 = -1142099;
	int32_t x188 = -1;

	t46 = (x185*(x186&(x187<=x188)));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	int64_t x190 = 3359125857LL;
	static volatile int8_t x191 = INT8_MIN;
	int32_t x192 = INT32_MAX;
	static volatile int64_t t47 = 57039214283LL;

	t47 = (x189*(x190&(x191<=x192)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1164;
	volatile int32_t x194 = INT32_MIN;
	int32_t x195 = -1;
	uint16_t x196 = 3U;
	volatile int32_t t48 = 72274011;

	t48 = (x193*(x194&(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int8_t x198 = -2;
	uint8_t x199 = 0U;
	int32_t x200 = INT32_MAX;

	t49 = (x197*(x198&(x199<=x200)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = INT64_MAX;
	int8_t x202 = 1;
	static int64_t x203 = 51409577LL;
	static int16_t x204 = 12985;
	int64_t t50 = -29116LL;

	t50 = (x201*(x202&(x203<=x204)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = -1;
	int8_t x207 = -1;
	uint64_t x208 = UINT64_MAX;
	int64_t t51 = INT64_MIN;

	t51 = (x205*(x206&(x207<=x208)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 4268237U;
	int8_t x210 = -9;
	int64_t x212 = INT64_MAX;

	t52 = (x209*(x210&(x211<=x212)));

	if (t52 != 4268237U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -301LL;
	uint32_t x214 = 542U;
	volatile uint16_t x215 = UINT16_MAX;
	uint16_t x216 = UINT16_MAX;
	static volatile int64_t t53 = 324418468368LL;

	t53 = (x213*(x214&(x215<=x216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = 10569770LL;
	uint16_t x219 = 400U;
	int64_t t54 = -11800999906LL;

	t54 = (x217*(x218&(x219<=x220)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x223 = -1;
	uint32_t x224 = 306095U;
	int64_t t55 = -28LL;

	t55 = (x221*(x222&(x223<=x224)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = 2868;

	t56 = (x225*(x226&(x227<=x228)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	int32_t x231 = 1;
	volatile uint64_t x232 = 1339574LLU;

	t57 = (x229*(x230&(x231<=x232)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MAX;
	volatile int8_t x234 = INT8_MAX;
	static volatile int8_t x235 = INT8_MIN;
	uint64_t x236 = 276LLU;
	volatile int64_t t58 = 21LL;

	t58 = (x233*(x234&(x235<=x236)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x238 = 12084380818330429LLU;
	static int64_t x239 = 185864697019LL;
	int8_t x240 = -3;
	static volatile uint64_t t59 = 34342649501LLU;

	t59 = (x237*(x238&(x239<=x240)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x242 = INT8_MAX;
	int16_t x243 = INT16_MIN;
	int32_t t60 = 2827416;

	t60 = (x241*(x242&(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x246 = 2071LLU;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MAX;

	t61 = (x245*(x246&(x247<=x248)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 643576057;
	int16_t x251 = -15922;
	int64_t x252 = INT64_MIN;
	static volatile int32_t t62 = 254411;

	t62 = (x249*(x250&(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = UINT16_MAX;
	int32_t x254 = INT32_MAX;
	static int16_t x255 = INT16_MAX;
	int64_t x256 = -1LL;

	t63 = (x253*(x254&(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	static int8_t x258 = INT8_MIN;
	static volatile uint8_t x259 = 64U;
	static uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = -10810985;

	t64 = (x257*(x258&(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x261 = INT64_MIN;
	volatile int16_t x263 = INT16_MIN;
	static volatile int64_t t65 = INT64_MIN;

	t65 = (x261*(x262&(x263<=x264)));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 1U;
	int8_t x266 = INT8_MIN;
	uint64_t x267 = 734092986LLU;
	volatile int8_t x268 = INT8_MAX;
	static int32_t t66 = 0;

	t66 = (x265*(x266&(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = 49;
	uint32_t x271 = 25U;
	int64_t x272 = 334LL;
	int32_t t67 = -4901;

	t67 = (x269*(x270&(x271<=x272)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 92;
	volatile int16_t x274 = -883;
	volatile int32_t t68 = 238;

	t68 = (x273*(x274&(x275<=x276)));

	if (t68 != 92) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 11616998U;
	uint64_t x279 = 17242167LLU;
	static int64_t x280 = INT64_MAX;
	uint32_t t69 = 151U;

	t69 = (x277*(x278&(x279<=x280)));

	if (t69 != 11616998U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int8_t x283 = -48;

	t70 = (x281*(x282&(x283<=x284)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	volatile int8_t x286 = -1;
	static uint16_t x287 = UINT16_MAX;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t71 = -5595;

	t71 = (x285*(x286&(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MAX;
	uint8_t x291 = UINT8_MAX;
	volatile uint32_t x292 = 33445023U;
	static int32_t t72 = -9996;

	t72 = (x289*(x290&(x291<=x292)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = -1LL;
	int16_t x294 = INT16_MIN;
	int8_t x295 = 3;
	volatile uint8_t x296 = 0U;
	volatile int64_t t73 = -4897682968461LL;

	t73 = (x293*(x294&(x295<=x296)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 203U;
	volatile int16_t x298 = INT16_MIN;
	int64_t x299 = 1659641632898LL;
	uint32_t t74 = 845U;

	t74 = (x297*(x298&(x299<=x300)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	uint32_t x302 = UINT32_MAX;
	uint8_t x303 = 23U;
	uint32_t t75 = 34U;

	t75 = (x301*(x302&(x303<=x304)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	uint64_t x306 = 14686272834249LLU;
	volatile int64_t x307 = INT64_MIN;
	int64_t x308 = -1LL;
	volatile uint64_t t76 = 1288112070355LLU;

	t76 = (x305*(x306&(x307<=x308)));

	if (t76 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 841010U;
	int64_t x311 = INT64_MIN;
	volatile uint32_t t77 = 1474028U;

	t77 = (x309*(x310&(x311<=x312)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 2389U;
	int32_t x315 = -1;
	int16_t x316 = 2167;
	static volatile uint32_t t78 = 541U;

	t78 = (x313*(x314&(x315<=x316)));

	if (t78 != 2389U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 270U;
	volatile uint16_t x318 = UINT16_MAX;
	uint8_t x319 = 2U;
	uint32_t t79 = 1U;

	t79 = (x317*(x318&(x319<=x320)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x322 = 22U;
	static int32_t x323 = INT32_MIN;
	uint8_t x324 = 11U;
	int32_t t80 = 16;

	t80 = (x321*(x322&(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 384U;
	volatile int16_t x326 = -5945;
	int8_t x327 = INT8_MIN;
	static volatile int8_t x328 = 2;

	t81 = (x325*(x326&(x327<=x328)));

	if (t81 != 384) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 12U;
	volatile uint16_t x330 = 2U;
	int16_t x331 = INT16_MIN;
	int8_t x332 = 1;
	int32_t t82 = -654310076;

	t82 = (x329*(x330&(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x334 = 264769895755610329LLU;
	volatile int64_t x335 = -3354534065LL;

	t83 = (x333*(x334&(x335<=x336)));

	if (t83 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	int32_t x338 = -1;
	static int64_t x339 = 947LL;
	int64_t x340 = INT64_MIN;
	static volatile int32_t t84 = -2;

	t84 = (x337*(x338&(x339<=x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	volatile uint16_t x342 = 233U;
	uint16_t x344 = 263U;
	volatile uint64_t t85 = 123855088031867LLU;

	t85 = (x341*(x342&(x343<=x344)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MAX;
	int8_t x346 = 0;
	static uint32_t x347 = 74132U;
	int64_t x348 = -103668LL;
	volatile int64_t t86 = -11977215LL;

	t86 = (x345*(x346&(x347<=x348)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 889LLU;
	static uint16_t x350 = 2U;
	volatile int8_t x351 = INT8_MAX;
	volatile uint32_t x352 = UINT32_MAX;

	t87 = (x349*(x350&(x351<=x352)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = INT64_MIN;
	uint16_t x355 = UINT16_MAX;
	int64_t x356 = -42505801279625LL;
	static volatile int64_t t88 = -41901LL;

	t88 = (x353*(x354&(x355<=x356)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = 382LL;
	uint64_t x358 = 284814633546241250LLU;
	static int8_t x359 = INT8_MAX;
	uint64_t t89 = 815116752093LLU;

	t89 = (x357*(x358&(x359<=x360)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 0;
	volatile int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t90 = -155;

	t90 = (x361*(x362&(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 36274U;
	int32_t x366 = INT32_MAX;
	int16_t x367 = INT16_MIN;
	static volatile uint64_t x368 = 88598963952875LLU;

	t91 = (x365*(x366&(x367<=x368)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = INT32_MIN;

	t92 = (x369*(x370&(x371<=x372)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MAX;
	uint16_t x374 = 39U;
	int64_t x375 = -1LL;
	uint64_t x376 = 97133197LLU;

	t93 = (x373*(x374&(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int16_t x378 = INT16_MIN;
	static volatile int16_t x379 = -1;
	uint8_t x380 = UINT8_MAX;
	static volatile int32_t t94 = 27160;

	t94 = (x377*(x378&(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x383 = 779;
	volatile int32_t t95 = 0;

	t95 = (x381*(x382&(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	int8_t x387 = -1;
	uint16_t x388 = 14U;
	uint32_t t96 = 32646061U;

	t96 = (x385*(x386&(x387<=x388)));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 52600377030542176LLU;
	uint16_t x390 = UINT16_MAX;
	volatile int8_t x391 = 5;
	volatile uint8_t x392 = 15U;
	volatile uint64_t t97 = 121000106013212968LLU;

	t97 = (x389*(x390&(x391<=x392)));

	if (t97 != 52600377030542176LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x395 = 1843449U;
	static int8_t x396 = INT8_MIN;
	int64_t t98 = 591534667807037LL;

	t98 = (x393*(x394&(x395<=x396)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	uint64_t x398 = 606365209299761LLU;
	int64_t x399 = INT64_MAX;
	uint16_t x400 = UINT16_MAX;
	static uint64_t t99 = 440791852977858LLU;

	t99 = (x397*(x398&(x399<=x400)));

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

