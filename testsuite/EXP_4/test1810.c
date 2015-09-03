#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 233495967;
int32_t x4 = INT32_MIN;
int32_t x6 = -966;
int8_t x9 = -1;
int16_t x12 = -1;
volatile int32_t t2 = 1499466;
int64_t x18 = -1LL;
volatile uint8_t x22 = 3U;
uint64_t x27 = UINT64_MAX;
int32_t x29 = -1;
volatile int32_t t7 = -32511;
static uint32_t x41 = 2U;
uint32_t x42 = 818U;
uint32_t x46 = UINT32_MAX;
int32_t t12 = -50757;
int32_t x53 = INT32_MIN;
int32_t x54 = INT32_MIN;
int32_t x70 = INT32_MIN;
volatile int16_t x73 = INT16_MAX;
uint8_t x80 = UINT8_MAX;
int64_t x100 = INT64_MAX;
int32_t t25 = 1835951;
int8_t x108 = INT8_MAX;
volatile int32_t t27 = 12271;
static uint8_t x114 = 64U;
volatile int32_t t28 = -1;
int64_t x119 = -1LL;
int32_t x120 = -103473141;
int32_t t29 = 197;
uint8_t x122 = 2U;
uint16_t x124 = 7403U;
uint64_t x128 = 22939288437LLU;
static volatile int16_t x136 = INT16_MIN;
volatile int32_t t35 = 177871494;
uint8_t x145 = 15U;
int32_t t37 = INT32_MIN;
static uint16_t x155 = 2U;
int8_t x157 = -22;
uint64_t x159 = 138343LLU;
int32_t x173 = INT32_MAX;
int64_t x176 = -1LL;
int16_t x182 = 62;
uint32_t x183 = UINT32_MAX;
volatile uint32_t t45 = 2U;
int64_t x199 = INT64_MIN;
int32_t x201 = INT32_MAX;
volatile int32_t x207 = INT32_MIN;
uint8_t x208 = 64U;
static int64_t x218 = INT64_MIN;
volatile int32_t t54 = 165630;
static volatile int32_t x221 = INT32_MAX;
volatile int32_t t55 = -18232;
static uint32_t x227 = 33776621U;
int32_t x230 = 1798;
static uint8_t x232 = UINT8_MAX;
int16_t x233 = INT16_MAX;
int64_t x236 = -1LL;
volatile uint32_t x239 = 7U;
volatile int32_t t59 = -31;
uint64_t x251 = 255621273652LLU;
static int8_t x255 = 0;
uint64_t x256 = 29773909034LLU;
uint8_t x266 = 2U;
static int16_t x297 = INT16_MIN;
volatile int32_t t74 = -1160;
volatile int64_t x301 = INT64_MAX;
int64_t t75 = 464897837387919LL;
static int8_t x305 = -1;
int64_t x308 = INT64_MIN;
static volatile int32_t t76 = -98;
int64_t x313 = -1LL;
int16_t x318 = 0;
int16_t x319 = -1;
volatile int64_t t79 = -352497410LL;
uint8_t x321 = 101U;
int8_t x327 = 4;
volatile uint64_t x328 = 4742576624438983LLU;
volatile int64_t t81 = -52049540695313LL;
int64_t x330 = 4458LL;
int32_t x332 = INT32_MIN;
int64_t t85 = 1791LL;
static int16_t x346 = INT16_MAX;
static int32_t x351 = INT32_MIN;
static int16_t x353 = INT16_MIN;
volatile uint32_t x355 = 57U;
volatile int32_t t88 = 0;
uint8_t x357 = 9U;
int16_t x363 = -6;
volatile int8_t x367 = 60;
int8_t x369 = -1;
int32_t x371 = 184652;
static int64_t x372 = INT64_MIN;
uint32_t x374 = UINT32_MAX;
volatile int32_t t93 = -218;
volatile uint16_t x378 = UINT16_MAX;
int32_t t96 = -645370;


void f0(void) {
	static int8_t x1 = 17;
	volatile uint8_t x3 = 0U;
	volatile int32_t t0 = 14026;

	t0 = (x1*(x2<=(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1653864948U;
	static int8_t x7 = INT8_MAX;
	int32_t x8 = INT32_MAX;
	volatile uint32_t t1 = 3064U;

	t1 = (x5*(x6<=(x7&x8)));

	if (t1 != 1653864948U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MAX;

	t2 = (x9*(x10<=(x11&x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	volatile int32_t x14 = 24850;
	static int8_t x15 = INT8_MIN;
	uint32_t x16 = 0U;
	static uint64_t t3 = 2045LLU;

	t3 = (x13*(x14<=(x15&x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -3006340083710600LL;
	static int16_t x19 = 28;
	int8_t x20 = -1;
	int64_t t4 = 31LL;

	t4 = (x17*(x18<=(x19&x20)));

	if (t4 != -3006340083710600LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 7U;
	int16_t x23 = -7;
	static int8_t x24 = INT8_MIN;
	volatile uint32_t t5 = 264U;

	t5 = (x21*(x22<=(x23&x24)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1641658249686LL;
	volatile uint64_t x26 = 302111346543LLU;
	uint8_t x28 = 31U;
	static int64_t t6 = 248186LL;

	t6 = (x25*(x26<=(x27&x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = -1;
	volatile int16_t x31 = 3729;
	int8_t x32 = 38;

	t7 = (x29*(x30<=(x31&x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	uint64_t x34 = UINT64_MAX;
	uint8_t x35 = 11U;
	int16_t x36 = INT16_MAX;
	static int32_t t8 = -31019446;

	t8 = (x33*(x34<=(x35&x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 1;
	volatile uint32_t x38 = 169U;
	int16_t x39 = INT16_MAX;
	static int64_t x40 = 12LL;
	volatile int32_t t9 = 0;

	t9 = (x37*(x38<=(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x43 = INT64_MIN;
	int16_t x44 = -1;
	uint32_t t10 = 26U;

	t10 = (x41*(x42<=(x43&x44)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -552479676081915LL;
	static volatile int64_t x47 = -304068070060454LL;
	uint8_t x48 = 32U;
	volatile int64_t t11 = -591372LL;

	t11 = (x45*(x46<=(x47&x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1;
	uint8_t x50 = 1U;
	int16_t x51 = INT16_MAX;
	uint16_t x52 = UINT16_MAX;

	t12 = (x49*(x50<=(x51&x52)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x55 = INT32_MAX;
	int16_t x56 = 122;
	volatile int32_t t13 = INT32_MIN;

	t13 = (x53*(x54<=(x55&x56)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MAX;
	int64_t x58 = -1LL;
	static uint8_t x59 = 24U;
	volatile int16_t x60 = INT16_MIN;
	static volatile int32_t t14 = INT32_MAX;

	t14 = (x57*(x58<=(x59&x60)));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int64_t x62 = -1LL;
	volatile uint64_t x63 = 5342021441872347211LLU;
	uint8_t x64 = 1U;
	volatile int64_t t15 = -8755LL;

	t15 = (x61*(x62<=(x63&x64)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -1;
	uint16_t x66 = 31664U;
	int64_t x67 = -20073LL;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = 307576906;

	t16 = (x65*(x66<=(x67&x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	static int16_t x71 = -7;
	uint64_t x72 = 3984688LLU;
	int32_t t17 = 567134;

	t17 = (x69*(x70<=(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x74 = -1;
	volatile uint32_t x75 = UINT32_MAX;
	int16_t x76 = -954;
	int32_t t18 = -4;

	t18 = (x73*(x74<=(x75&x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MAX;
	int8_t x78 = -1;
	volatile int32_t x79 = INT32_MAX;
	int64_t t19 = INT64_MAX;

	t19 = (x77*(x78<=(x79&x80)));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 164680369276468LL;
	uint8_t x82 = UINT8_MAX;
	int64_t x83 = INT64_MIN;
	uint16_t x84 = UINT16_MAX;
	static volatile int64_t t20 = 237273287225LL;

	t20 = (x81*(x82<=(x83&x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = -1;
	volatile int8_t x87 = INT8_MAX;
	static volatile uint64_t x88 = 329020322LLU;
	int32_t t21 = 115;

	t21 = (x85*(x86<=(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -12;
	int16_t x90 = INT16_MAX;
	volatile int32_t x91 = INT32_MIN;
	static int16_t x92 = -304;
	int32_t t22 = 1;

	t22 = (x89*(x90<=(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = UINT16_MAX;
	static uint32_t x94 = UINT32_MAX;
	uint16_t x95 = UINT16_MAX;
	int32_t x96 = INT32_MIN;
	volatile int32_t t23 = -30;

	t23 = (x93*(x94<=(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MIN;
	volatile uint16_t x98 = 1U;
	uint32_t x99 = 903357251U;
	int64_t t24 = INT64_MIN;

	t24 = (x97*(x98<=(x99&x100)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 1;
	static volatile uint8_t x102 = 1U;
	int16_t x103 = -46;
	static int32_t x104 = INT32_MIN;

	t25 = (x101*(x102<=(x103&x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	uint16_t x106 = 1110U;
	int16_t x107 = INT16_MIN;
	int32_t t26 = -9684575;

	t26 = (x105*(x106<=(x107&x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 7285U;
	int16_t x110 = INT16_MAX;
	int16_t x111 = -1;
	int32_t x112 = 43418;

	t27 = (x109*(x110<=(x111&x112)));

	if (t27 != 7285) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	uint16_t x115 = 13376U;
	static int16_t x116 = -19;

	t28 = (x113*(x114<=(x115&x116)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = 44U;
	static uint64_t x118 = 99869629LLU;

	t29 = (x117*(x118<=(x119&x120)));

	if (t29 != 44) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x121*(x122<=(x123&x124)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 7U;
	int8_t x126 = INT8_MIN;
	uint8_t x127 = UINT8_MAX;
	volatile int32_t t31 = -59;

	t31 = (x125*(x126<=(x127&x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x129 = INT64_MIN;
	int16_t x130 = -1;
	uint32_t x131 = 746648012U;
	int16_t x132 = INT16_MIN;
	volatile int64_t t32 = 336032476278262505LL;

	t32 = (x129*(x130<=(x131&x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	int64_t x134 = -1LL;
	int8_t x135 = -1;
	volatile int32_t t33 = -3;

	t33 = (x133*(x134<=(x135&x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MIN;
	volatile int16_t x139 = -1017;
	static int8_t x140 = -1;
	static volatile int32_t t34 = 1813;

	t34 = (x137*(x138<=(x139&x140)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = -1LL;
	static uint16_t x143 = 99U;
	int16_t x144 = INT16_MAX;

	t35 = (x141*(x142<=(x143&x144)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x146 = -1;
	volatile int16_t x147 = INT16_MAX;
	static int32_t x148 = -2;
	int32_t t36 = 3;

	t36 = (x145*(x146<=(x147&x148)));

	if (t36 != 15) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	static int64_t x150 = INT64_MIN;
	volatile int32_t x151 = -1;
	static uint32_t x152 = 15U;

	t37 = (x149*(x150<=(x151&x152)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MIN;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = 0;

	t38 = (x153*(x154<=(x155&x156)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x158 = INT16_MIN;
	static int8_t x160 = 0;
	volatile int32_t t39 = -44665258;

	t39 = (x157*(x158<=(x159&x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	volatile uint64_t x162 = UINT64_MAX;
	static int8_t x163 = INT8_MIN;
	uint32_t x164 = UINT32_MAX;
	int32_t t40 = 693;

	t40 = (x161*(x162<=(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = 13;
	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MAX;
	int64_t x168 = 8184135694LL;
	static volatile int32_t t41 = 327;

	t41 = (x165*(x166<=(x167&x168)));

	if (t41 != 13) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = 1LLU;
	uint32_t x170 = 1477U;
	volatile uint32_t x171 = 1672875U;
	int64_t x172 = 6LL;
	volatile uint64_t t42 = 2501LLU;

	t42 = (x169*(x170<=(x171&x172)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = UINT32_MAX;
	static uint16_t x175 = 5U;
	int32_t t43 = 113696;

	t43 = (x173*(x174<=(x175&x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	int32_t x178 = 758079;
	int64_t x179 = -1LL;
	volatile uint64_t x180 = 22522329LLU;
	volatile int32_t t44 = -199;

	t44 = (x177*(x178<=(x179&x180)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 487496U;
	int64_t x184 = -8552730LL;

	t45 = (x181*(x182<=(x183&x184)));

	if (t45 != 487496U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	static uint8_t x186 = 37U;
	static volatile int8_t x187 = INT8_MAX;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -1738866;

	t46 = (x185*(x186<=(x187&x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -210;
	int64_t x190 = 13433327628476LL;
	static volatile uint32_t x191 = 6U;
	static volatile int8_t x192 = 42;
	volatile int32_t t47 = 23020223;

	t47 = (x189*(x190<=(x191&x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int8_t x194 = -1;
	uint64_t x195 = 132706207076848435LLU;
	uint16_t x196 = 3552U;
	volatile int64_t t48 = -2885348LL;

	t48 = (x193*(x194<=(x195&x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 56056U;
	static volatile uint32_t x198 = 410U;
	int64_t x200 = 229938LL;
	uint32_t t49 = 2586U;

	t49 = (x197*(x198<=(x199&x200)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = INT32_MIN;
	volatile int8_t x203 = -3;
	int32_t x204 = INT32_MIN;
	static int32_t t50 = INT32_MAX;

	t50 = (x201*(x202<=(x203&x204)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	volatile uint32_t x206 = 169908U;
	static volatile int32_t t51 = 111800433;

	t51 = (x205*(x206<=(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = 2U;
	int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MAX;
	volatile int16_t x212 = INT16_MIN;
	int32_t t52 = 49216804;

	t52 = (x209*(x210<=(x211&x212)));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	int32_t x214 = -1;
	uint16_t x215 = 7712U;
	volatile int32_t x216 = -4074;
	int32_t t53 = 13481100;

	t53 = (x213*(x214<=(x215&x216)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	int64_t x219 = INT64_MIN;
	static int64_t x220 = -1LL;

	t54 = (x217*(x218<=(x219&x220)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = -123473120;
	int32_t x223 = -90;
	uint64_t x224 = 1031623059361418660LLU;

	t55 = (x221*(x222<=(x223&x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	static int64_t x226 = INT64_MIN;
	static int64_t x228 = INT64_MIN;
	volatile int32_t t56 = 27054;

	t56 = (x225*(x226<=(x227&x228)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 899LLU;
	uint64_t x231 = 1091951123414302LLU;
	static uint64_t t57 = 5054908024LLU;

	t57 = (x229*(x230<=(x231&x232)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x234 = INT16_MAX;
	uint64_t x235 = 103774LLU;
	static int32_t t58 = 31658315;

	t58 = (x233*(x234<=(x235&x236)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = INT8_MIN;
	int16_t x238 = 1886;
	uint32_t x240 = 8226890U;

	t59 = (x237*(x238<=(x239&x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	volatile int32_t x242 = -1;
	volatile int16_t x243 = -1;
	uint64_t x244 = UINT64_MAX;
	volatile int32_t t60 = 2230560;

	t60 = (x241*(x242<=(x243&x244)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = 14;
	int32_t x246 = INT32_MIN;
	uint32_t x247 = UINT32_MAX;
	int64_t x248 = INT64_MIN;
	int32_t t61 = -984724;

	t61 = (x245*(x246<=(x247&x248)));

	if (t61 != 14) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 45U;
	int32_t x250 = INT32_MIN;
	int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -2413;

	t62 = (x249*(x250<=(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 3U;
	int16_t x254 = -4316;
	static int32_t t63 = 132;

	t63 = (x253*(x254<=(x255&x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = -1;
	int32_t x258 = 5931;
	int64_t x259 = 27938258663LL;
	static uint32_t x260 = 33U;
	int32_t t64 = -2966415;

	t64 = (x257*(x258<=(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 3LL;
	int8_t x262 = -1;
	int64_t x263 = -1LL;
	int16_t x264 = 40;
	volatile int64_t t65 = 863030680444442LL;

	t65 = (x261*(x262<=(x263&x264)));

	if (t65 != 3LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 0;
	static int16_t x267 = 1;
	int8_t x268 = INT8_MIN;
	int32_t t66 = 2;

	t66 = (x265*(x266<=(x267&x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 350861U;
	int64_t x270 = INT64_MAX;
	int64_t x271 = -1LL;
	int32_t x272 = 41532;
	volatile uint32_t t67 = 305095U;

	t67 = (x269*(x270<=(x271&x272)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 27U;
	uint16_t x274 = 7U;
	static volatile int64_t x275 = 1LL;
	volatile int32_t x276 = INT32_MAX;
	int32_t t68 = 22961;

	t68 = (x273*(x274<=(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint8_t x278 = UINT8_MAX;
	int32_t x279 = 2706650;
	int64_t x280 = -9889052703581871LL;
	volatile int32_t t69 = 72;

	t69 = (x277*(x278<=(x279&x280)));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 1U;
	int32_t x282 = -1;
	int32_t x283 = INT32_MAX;
	int32_t x284 = INT32_MAX;
	volatile uint32_t t70 = 6442U;

	t70 = (x281*(x282<=(x283&x284)));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	uint32_t x286 = 0U;
	volatile uint64_t x287 = UINT64_MAX;
	int64_t x288 = INT64_MIN;
	int32_t t71 = 15511;

	t71 = (x285*(x286<=(x287&x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 3446094664207LL;
	int64_t x290 = -1LL;
	uint8_t x291 = 4U;
	volatile int16_t x292 = INT16_MIN;
	int64_t t72 = 10LL;

	t72 = (x289*(x290<=(x291&x292)));

	if (t72 != 3446094664207LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 112536109292787359LLU;
	static volatile int16_t x294 = -1;
	uint8_t x295 = 1U;
	volatile int8_t x296 = INT8_MAX;
	volatile uint64_t t73 = 372LLU;

	t73 = (x293*(x294<=(x295&x296)));

	if (t73 != 112536109292787359LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x298 = INT32_MIN;
	static uint8_t x299 = UINT8_MAX;
	int16_t x300 = -1;

	t74 = (x297*(x298<=(x299&x300)));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x302 = 10U;
	static int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MAX;

	t75 = (x301*(x302<=(x303&x304)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = UINT8_MAX;
	int64_t x307 = INT64_MIN;

	t76 = (x305*(x306<=(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -55;
	static int8_t x310 = INT8_MAX;
	int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 526973189;

	t77 = (x309*(x310<=(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MIN;
	uint32_t x316 = 670553U;
	volatile int64_t t78 = 7877121022233LL;

	t78 = (x313*(x314<=(x315&x316)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = 7871496546052LL;
	uint8_t x320 = 56U;

	t79 = (x317*(x318<=(x319&x320)));

	if (t79 != 7871496546052LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x322 = -52;
	volatile uint16_t x323 = 4897U;
	int32_t x324 = 166238092;
	int32_t t80 = 95;

	t80 = (x321*(x322<=(x323&x324)));

	if (t80 != 101) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	volatile int64_t x326 = INT64_MIN;

	t81 = (x325*(x326<=(x327&x328)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int8_t x331 = INT8_MIN;
	int32_t t82 = -791233;

	t82 = (x329*(x330<=(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	uint64_t x334 = 58806945624LLU;
	uint32_t x335 = UINT32_MAX;
	uint8_t x336 = 0U;
	int32_t t83 = 44866830;

	t83 = (x333*(x334<=(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 196U;
	int16_t x338 = INT16_MAX;
	static uint64_t x339 = 1182659273400882LLU;
	uint32_t x340 = 861776U;
	volatile int32_t t84 = -54202;

	t84 = (x337*(x338<=(x339&x340)));

	if (t84 != 196) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 1931347737458864LL;
	int32_t x342 = -1;
	static volatile int32_t x343 = INT32_MIN;
	static int16_t x344 = -1;

	t85 = (x341*(x342<=(x343&x344)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	volatile int64_t x347 = INT64_MAX;
	uint32_t x348 = UINT32_MAX;
	int32_t t86 = -3;

	t86 = (x345*(x346<=(x347&x348)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x349 = INT64_MAX;
	uint32_t x350 = 14U;
	int32_t x352 = 13;
	volatile int64_t t87 = 1007241108287LL;

	t87 = (x349*(x350<=(x351&x352)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = 17;
	static int16_t x356 = INT16_MIN;

	t88 = (x353*(x354<=(x355&x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = INT64_MIN;
	static volatile int16_t x359 = 226;
	int8_t x360 = INT8_MIN;
	int32_t t89 = 0;

	t89 = (x357*(x358<=(x359&x360)));

	if (t89 != 9) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	volatile int16_t x362 = INT16_MIN;
	int16_t x364 = INT16_MAX;
	volatile int64_t t90 = INT64_MAX;

	t90 = (x361*(x362<=(x363&x364)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	volatile int8_t x366 = INT8_MAX;
	uint8_t x368 = 2U;
	volatile int32_t t91 = -102;

	t91 = (x365*(x366<=(x367&x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MIN;
	volatile int32_t t92 = -352;

	t92 = (x369*(x370<=(x371&x372)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -131557214;
	int64_t x375 = 4844LL;
	volatile uint64_t x376 = 645467LLU;

	t93 = (x373*(x374<=(x375&x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	int64_t x379 = -253934087LL;
	int64_t x380 = INT64_MIN;
	int32_t t94 = -1567496;

	t94 = (x377*(x378<=(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -42;
	int16_t x382 = INT16_MIN;
	int8_t x383 = 0;
	uint32_t x384 = 2540407U;
	static volatile int32_t t95 = -1830637;

	t95 = (x381*(x382<=(x383&x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 1;
	int32_t x386 = 6467016;
	int64_t x387 = INT64_MAX;
	static int16_t x388 = 88;

	t96 = (x385*(x386<=(x387&x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	static int32_t x390 = INT32_MIN;
	int32_t x391 = INT32_MIN;
	volatile int16_t x392 = INT16_MIN;
	static uint32_t t97 = UINT32_MAX;

	t97 = (x389*(x390<=(x391&x392)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = 3U;
	static uint16_t x394 = 15522U;
	int8_t x395 = INT8_MAX;
	int8_t x396 = INT8_MIN;
	static volatile int32_t t98 = 4151;

	t98 = (x393*(x394<=(x395&x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MIN;
	uint64_t x399 = 186699621237551LLU;
	int64_t x400 = -1LL;
	volatile int64_t t99 = 0LL;

	t99 = (x397*(x398<=(x399&x400)));

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

