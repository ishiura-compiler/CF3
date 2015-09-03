#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1;
static uint64_t x5 = 27248383364LLU;
static uint64_t t1 = 187LLU;
static int64_t x11 = INT64_MAX;
volatile int32_t x21 = INT32_MIN;
uint16_t x24 = UINT16_MAX;
volatile int8_t x27 = 3;
volatile int32_t x28 = -1;
int32_t x32 = INT32_MIN;
volatile int32_t t7 = 17419;
int8_t x40 = -1;
static volatile int64_t t9 = -1LL;
int64_t x45 = INT64_MIN;
volatile int64_t x47 = -1LL;
int8_t x48 = INT8_MIN;
static volatile int8_t x53 = INT8_MAX;
int8_t x54 = INT8_MIN;
int16_t x55 = -7;
int32_t x61 = -1;
uint32_t x64 = UINT32_MAX;
int64_t x68 = -1LL;
static volatile uint64_t x69 = 47470580LLU;
uint8_t x77 = UINT8_MAX;
static uint64_t x87 = 304LLU;
int16_t x88 = INT16_MAX;
volatile int32_t x89 = -1;
int8_t x96 = -61;
volatile int32_t t23 = 30753559;
static int8_t x117 = INT8_MAX;
int32_t x120 = INT32_MIN;
int16_t x125 = -1;
volatile uint16_t x129 = 492U;
static uint16_t x151 = 2524U;
int32_t x158 = -1;
int32_t x160 = INT32_MIN;
static uint64_t x164 = UINT64_MAX;
int64_t x166 = INT64_MIN;
uint8_t x167 = 39U;
volatile int32_t t37 = 6171958;
volatile int8_t x172 = INT8_MAX;
int32_t t38 = 712816335;
uint16_t x174 = UINT16_MAX;
uint64_t x175 = 3408LLU;
static volatile int8_t x178 = INT8_MIN;
uint16_t x179 = 21859U;
static volatile int32_t t42 = -3;
int32_t x193 = -1;
int16_t x197 = INT16_MIN;
static volatile int32_t x199 = INT32_MIN;
volatile uint64_t t45 = 4870LLU;
uint16_t x204 = 9U;
uint32_t x206 = UINT32_MAX;
static uint32_t x219 = 183639U;
uint32_t x233 = UINT32_MAX;
static int64_t x240 = -285999517LL;
volatile int8_t x241 = 44;
static uint8_t x246 = UINT8_MAX;
int16_t x253 = INT16_MIN;
int32_t x256 = INT32_MAX;
volatile int32_t t58 = -1;
uint16_t x261 = UINT16_MAX;
uint64_t x265 = 250239669862LLU;
int8_t x268 = INT8_MIN;
uint64_t x269 = UINT64_MAX;
int8_t x275 = -2;
int16_t x280 = 59;
volatile int64_t x284 = INT64_MIN;
int8_t x292 = -2;
static uint8_t x294 = 2U;
uint64_t t68 = 38823584829189LLU;
volatile uint32_t x297 = UINT32_MAX;
static volatile uint64_t x308 = UINT64_MAX;
int16_t x312 = -186;
volatile uint32_t t72 = 4U;
static uint64_t x316 = 68696771996LLU;
volatile uint8_t x318 = UINT8_MAX;
static uint64_t t74 = 84041LLU;
volatile uint32_t t76 = 27U;
volatile int32_t t77 = 923959;
uint32_t x342 = 1137245923U;
volatile int32_t t79 = 0;
static uint16_t x348 = UINT16_MAX;
volatile int32_t t80 = -4781878;
int32_t x351 = INT32_MIN;
static volatile int32_t x352 = INT32_MAX;
int32_t t81 = -24407;
int16_t x353 = INT16_MAX;
static uint16_t x360 = 5209U;
volatile uint64_t t85 = 1486LLU;
volatile int32_t x371 = -1;
int8_t x374 = 11;
int64_t t87 = 1939838LL;
int8_t x378 = -1;
volatile uint8_t x379 = 2U;
volatile uint8_t x380 = 38U;
static int8_t x392 = INT8_MAX;
static volatile uint32_t x393 = UINT32_MAX;
int32_t x394 = INT32_MIN;
static volatile uint64_t x396 = 853LLU;
int16_t x401 = 60;
int64_t x402 = INT64_MAX;
int32_t t92 = 4487;
uint16_t x407 = 1U;
static int64_t x412 = -85LL;
static int8_t x413 = INT8_MAX;
int64_t x415 = INT64_MIN;
static volatile uint16_t x416 = UINT16_MAX;
static volatile int32_t x420 = -27523;
int16_t x443 = INT16_MIN;


void f0(void) {
	int32_t x1 = 296273474;
	volatile int32_t x3 = -1;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -161510620;

	t0 = ((x1*(x2<x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 47U;
	int8_t x7 = INT8_MIN;
	int32_t x8 = INT32_MIN;

	t1 = ((x5*(x6<x7))*x8);

	if (t1 != 15271518586212974592LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 209414440U;
	uint64_t x10 = 445821583933LLU;
	int8_t x12 = INT8_MIN;
	volatile uint32_t t2 = 3132U;

	t2 = ((x9*(x10<x11))*x12);

	if (t2 != 3259722752U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -14;
	uint16_t x14 = 6U;
	int64_t x15 = 205813226690564777LL;
	uint8_t x16 = UINT8_MAX;
	static volatile int32_t t3 = 47916869;

	t3 = ((x13*(x14<x15))*x16);

	if (t3 != -3570) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -32;
	uint32_t x18 = 3U;
	volatile int8_t x19 = -1;
	volatile uint32_t x20 = UINT32_MAX;
	static uint32_t t4 = 10051764U;

	t4 = ((x17*(x18<x19))*x20);

	if (t4 != 32U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = 3197164675222221479LL;
	static int32_t x23 = INT32_MIN;
	static volatile int32_t t5 = 5;

	t5 = ((x21*(x22<x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	uint64_t x26 = 7144340LLU;
	uint32_t t6 = 177U;

	t6 = ((x25*(x26<x27))*x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 1U;
	int16_t x30 = INT16_MAX;
	uint16_t x31 = 5U;

	t7 = ((x29*(x30<x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	uint64_t x34 = UINT64_MAX;
	int32_t x35 = INT32_MIN;
	uint64_t x36 = 1189651924LLU;
	volatile uint64_t t8 = 14106658253487486LLU;

	t8 = ((x33*(x34<x35))*x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 6201864677960LL;
	int64_t x38 = -3LL;
	static int32_t x39 = 90409676;

	t9 = ((x37*(x38<x39))*x40);

	if (t9 != -6201864677960LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = INT16_MAX;
	int64_t t10 = -1690465496LL;

	t10 = ((x45*(x46<x47))*x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	static volatile uint32_t x50 = 4799U;
	int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MIN;
	volatile int32_t t11 = 17484835;

	t11 = ((x49*(x50<x51))*x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x56 = 5U;
	int32_t t12 = 1056543681;

	t12 = ((x53*(x54<x55))*x56);

	if (t12 != 635) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = UINT16_MAX;
	volatile int64_t x58 = -1LL;
	int64_t x59 = 2762050627843592LL;
	uint16_t x60 = 1U;
	volatile int32_t t13 = -6706218;

	t13 = ((x57*(x58<x59))*x60);

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x62 = 3821;
	volatile uint16_t x63 = 567U;
	uint32_t t14 = 209370U;

	t14 = ((x61*(x62<x63))*x64);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = 0;
	uint16_t x66 = 139U;
	int16_t x67 = -1;
	static volatile int64_t t15 = 479514LL;

	t15 = ((x65*(x66<x67))*x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = INT16_MIN;
	int64_t x71 = INT64_MAX;
	uint8_t x72 = 0U;
	uint64_t t16 = 3805719339566LLU;

	t16 = ((x69*(x70<x71))*x72);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 889336189;
	static volatile int64_t x74 = INT64_MIN;
	static int8_t x75 = 1;
	uint32_t x76 = 83U;
	uint32_t t17 = 252195919U;

	t17 = ((x73*(x74<x75))*x76);

	if (t17 != 800459655U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = INT64_MIN;
	static volatile uint16_t x79 = 0U;
	volatile uint32_t x80 = 17U;
	uint32_t t18 = 32631U;

	t18 = ((x77*(x78<x79))*x80);

	if (t18 != 4335U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = 13;
	static int32_t x82 = -1;
	int16_t x83 = 1;
	int64_t x84 = 20354906557140829LL;
	volatile int64_t t19 = -57187LL;

	t19 = ((x81*(x82<x83))*x84);

	if (t19 != 264613785242830777LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = 0;
	int16_t x86 = -1;
	int32_t t20 = 750478;

	t20 = ((x85*(x86<x87))*x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = INT64_MAX;
	int32_t x91 = -1;
	static volatile int64_t x92 = -1LL;
	static volatile int64_t t21 = 2070616852198LL;

	t21 = ((x89*(x90<x91))*x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	int8_t x94 = 9;
	int8_t x95 = 0;
	static int32_t t22 = 3;

	t22 = ((x93*(x94<x95))*x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = 1;
	static int8_t x102 = INT8_MAX;
	volatile int16_t x103 = INT16_MAX;
	int32_t x104 = 0;

	t23 = ((x101*(x102<x103))*x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MAX;
	uint16_t x115 = 44U;
	static int64_t x116 = INT64_MAX;
	int64_t t24 = 249432LL;

	t24 = ((x113*(x114<x115))*x116);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x118 = 5734124LLU;
	int8_t x119 = INT8_MAX;
	int32_t t25 = -135776860;

	t25 = ((x117*(x118<x119))*x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x121 = -1;
	static volatile uint32_t x122 = UINT32_MAX;
	volatile int64_t x123 = INT64_MIN;
	int8_t x124 = -24;
	volatile int32_t t26 = -1826210;

	t26 = ((x121*(x122<x123))*x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x126 = INT32_MIN;
	uint16_t x127 = UINT16_MAX;
	volatile int8_t x128 = INT8_MIN;
	static int32_t t27 = -1423832;

	t27 = ((x125*(x126<x127))*x128);

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x130 = INT32_MAX;
	static int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MIN;
	static int32_t t28 = -461;

	t28 = ((x129*(x130<x131))*x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = -14;
	uint8_t x134 = 6U;
	int32_t x135 = -1;
	volatile int8_t x136 = INT8_MAX;
	volatile int32_t t29 = -84008735;

	t29 = ((x133*(x134<x135))*x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MIN;
	volatile int8_t x138 = INT8_MAX;
	static int32_t x139 = -18;
	volatile int64_t x140 = -1LL;
	static volatile int64_t t30 = 0LL;

	t30 = ((x137*(x138<x139))*x140);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = 58;
	int64_t x142 = 39704LL;
	int64_t x143 = INT64_MAX;
	uint8_t x144 = 15U;
	volatile int32_t t31 = -15502;

	t31 = ((x141*(x142<x143))*x144);

	if (t31 != 870) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x146 = UINT32_MAX;
	uint8_t x147 = UINT8_MAX;
	int64_t x148 = -84036209376576LL;
	volatile int64_t t32 = -352998583195LL;

	t32 = ((x145*(x146<x147))*x148);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = UINT8_MAX;
	int64_t x150 = 174898206773981LL;
	static uint8_t x152 = 0U;
	volatile int32_t t33 = 1;

	t33 = ((x149*(x150<x151))*x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x153 = UINT16_MAX;
	uint16_t x154 = 5U;
	int16_t x155 = -1;
	int32_t x156 = INT32_MIN;
	int32_t t34 = 12;

	t34 = ((x153*(x154<x155))*x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x157 = UINT16_MAX;
	int32_t x159 = INT32_MIN;
	int32_t t35 = 605025;

	t35 = ((x157*(x158<x159))*x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MIN;
	uint32_t x163 = UINT32_MAX;
	volatile uint64_t t36 = 442406LLU;

	t36 = ((x161*(x162<x163))*x164);

	if (t36 != 128LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x165 = 446U;
	static int16_t x168 = 5386;

	t37 = ((x165*(x166<x167))*x168);

	if (t37 != 2402156) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x169 = 40U;
	volatile uint64_t x170 = 1877424275783LLU;
	volatile uint64_t x171 = UINT64_MAX;

	t38 = ((x169*(x170<x171))*x172);

	if (t38 != 5080) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = 1;
	int8_t x176 = INT8_MIN;
	int32_t t39 = 1176;

	t39 = ((x173*(x174<x175))*x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x177 = UINT64_MAX;
	uint32_t x180 = UINT32_MAX;
	uint64_t t40 = 150123LLU;

	t40 = ((x177*(x178<x179))*x180);

	if (t40 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x181 = -67267705322773595LL;
	int64_t x182 = -1LL;
	static int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MIN;
	volatile int64_t t41 = -176135702407404005LL;

	t41 = ((x181*(x182<x183))*x184);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x185 = 6957;
	int8_t x186 = -1;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;

	t42 = ((x185*(x186<x187))*x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x189 = INT64_MIN;
	volatile uint8_t x190 = UINT8_MAX;
	volatile int16_t x191 = 9;
	int64_t x192 = INT64_MIN;
	int64_t t43 = -2184797035LL;

	t43 = ((x189*(x190<x191))*x192);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x194 = INT16_MIN;
	uint32_t x195 = 0U;
	int32_t x196 = 273;
	volatile int32_t t44 = 1721;

	t44 = ((x193*(x194<x195))*x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x198 = -1;
	uint64_t x200 = 26412864062LLU;

	t45 = ((x197*(x198<x199))*x200);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = 0;
	volatile int16_t x202 = -1922;
	int64_t x203 = INT64_MAX;
	static int32_t t46 = -110392;

	t46 = ((x201*(x202<x203))*x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x205 = 49U;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = 3U;
	volatile int32_t t47 = 474176361;

	t47 = ((x205*(x206<x207))*x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	int32_t t48 = -192;

	t48 = ((x209*(x210<x211))*x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x217 = 96597898804LLU;
	volatile uint16_t x218 = UINT16_MAX;
	volatile uint8_t x220 = UINT8_MAX;
	volatile uint64_t t49 = 693LLU;

	t49 = ((x217*(x218<x219))*x220);

	if (t49 != 24632464195020LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = 14U;
	int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MIN;
	static uint16_t x224 = 1U;
	int32_t t50 = 8085;

	t50 = ((x221*(x222<x223))*x224);

	if (t50 != 14) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x225 = 15545;
	int8_t x226 = INT8_MAX;
	static int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MAX;
	static volatile int32_t t51 = -20451193;

	t51 = ((x225*(x226<x227))*x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MAX;
	uint8_t x230 = 102U;
	volatile uint32_t x231 = 41U;
	uint16_t x232 = 27440U;
	volatile int32_t t52 = -206218203;

	t52 = ((x229*(x230<x231))*x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x234 = 425U;
	volatile uint64_t x235 = 533381063LLU;
	volatile int32_t x236 = 64091;
	uint32_t t53 = 43535385U;

	t53 = ((x233*(x234<x235))*x236);

	if (t53 != 4294903205U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = -1;
	static uint32_t x238 = 1887U;
	static int16_t x239 = -154;
	static volatile int64_t t54 = -34823733LL;

	t54 = ((x237*(x238<x239))*x240);

	if (t54 != 285999517LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x242 = UINT16_MAX;
	volatile int64_t x243 = INT64_MAX;
	uint8_t x244 = 65U;
	volatile int32_t t55 = 217;

	t55 = ((x241*(x242<x243))*x244);

	if (t55 != 2860) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x245 = -1LL;
	uint16_t x247 = UINT16_MAX;
	int16_t x248 = INT16_MAX;
	static int64_t t56 = 284454951734LL;

	t56 = ((x245*(x246<x247))*x248);

	if (t56 != -32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x249 = -85734;
	int64_t x250 = -1LL;
	int32_t x251 = 94;
	uint32_t x252 = 186806U;
	static uint32_t t57 = 4U;

	t57 = ((x249*(x250<x251))*x252);

	if (t57 != 1164243580U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x254 = -53;
	uint64_t x255 = 574979389884467788LLU;

	t58 = ((x253*(x254<x255))*x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x257 = 321937129305272LLU;
	int8_t x258 = -1;
	uint8_t x259 = 101U;
	static volatile int16_t x260 = INT16_MIN;
	volatile uint64_t t59 = 801137380999LLU;

	t59 = ((x257*(x258<x259))*x260);

	if (t59 != 7897508220634398720LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x262 = 445U;
	int32_t x263 = -1;
	static volatile int8_t x264 = -1;
	volatile int32_t t60 = 2256854;

	t60 = ((x261*(x262<x263))*x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x266 = -242;
	int32_t x267 = -59397012;
	volatile uint64_t t61 = 48384185772530LLU;

	t61 = ((x265*(x266<x267))*x268);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x270 = INT16_MIN;
	static uint8_t x271 = UINT8_MAX;
	volatile int64_t x272 = INT64_MIN;
	uint64_t t62 = 7LLU;

	t62 = ((x269*(x270<x271))*x272);

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x273 = -487628LL;
	uint64_t x274 = 0LLU;
	int16_t x276 = -1;
	int64_t t63 = -136LL;

	t63 = ((x273*(x274<x275))*x276);

	if (t63 != 487628LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = -1;
	int16_t x278 = INT16_MIN;
	static volatile int8_t x279 = -1;
	static int32_t t64 = -142400;

	t64 = ((x277*(x278<x279))*x280);

	if (t64 != -59) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x281 = -2148270802211097LL;
	int64_t x282 = 5024146287264710LL;
	volatile int16_t x283 = -204;
	static volatile int64_t t65 = 3870LL;

	t65 = ((x281*(x282<x283))*x284);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = -1;
	uint64_t x286 = 151176022262LLU;
	uint16_t x287 = 10738U;
	int8_t x288 = INT8_MAX;
	int32_t t66 = 1010120955;

	t66 = ((x285*(x286<x287))*x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x289 = INT32_MAX;
	int64_t x290 = INT64_MAX;
	volatile int32_t x291 = INT32_MAX;
	volatile int32_t t67 = -12;

	t67 = ((x289*(x290<x291))*x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x293 = UINT64_MAX;
	int16_t x295 = INT16_MIN;
	int8_t x296 = 22;

	t68 = ((x293*(x294<x295))*x296);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x298 = 0LL;
	int64_t x299 = -244866561LL;
	static uint16_t x300 = 131U;
	static uint32_t t69 = 451795U;

	t69 = ((x297*(x298<x299))*x300);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = 0;
	uint32_t x302 = 154U;
	int8_t x303 = -8;
	uint32_t x304 = 5425U;
	volatile uint32_t t70 = 428063450U;

	t70 = ((x301*(x302<x303))*x304);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x305 = 29804858LLU;
	uint64_t x306 = 20LLU;
	uint32_t x307 = UINT32_MAX;
	static uint64_t t71 = 18498977742700515LLU;

	t71 = ((x305*(x306<x307))*x308);

	if (t71 != 18446744073679746758LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x309 = 738U;
	volatile uint16_t x310 = UINT16_MAX;
	static volatile int32_t x311 = -1;

	t72 = ((x309*(x310<x311))*x312);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MAX;
	uint64_t x315 = 106559158240624558LLU;
	uint64_t t73 = 6149089LLU;

	t73 = ((x313*(x314<x315))*x316);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x317 = 1045365;
	volatile int64_t x319 = INT64_MIN;
	uint64_t x320 = 2051384288052631907LLU;

	t74 = ((x317*(x318<x319))*x320);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = 27512LL;
	static uint8_t x327 = 2U;
	int32_t x328 = INT32_MAX;
	static int32_t t75 = -9012077;

	t75 = ((x325*(x326<x327))*x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x329 = 5U;
	static int32_t x330 = INT32_MIN;
	volatile uint32_t x331 = 48U;
	static volatile int8_t x332 = INT8_MIN;

	t76 = ((x329*(x330<x331))*x332);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x333 = INT32_MIN;
	static uint32_t x334 = 484758034U;
	int32_t x335 = 1584946;
	static int16_t x336 = -1;

	t77 = ((x333*(x334<x335))*x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x337 = 651U;
	int8_t x338 = 1;
	int8_t x339 = INT8_MIN;
	volatile int8_t x340 = -1;
	volatile uint32_t t78 = 44070U;

	t78 = ((x337*(x338<x339))*x340);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x341 = 34U;
	static volatile int8_t x343 = -16;
	int16_t x344 = INT16_MAX;

	t79 = ((x341*(x342<x343))*x344);

	if (t79 != 1114078) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x345 = INT16_MIN;
	static uint8_t x346 = 14U;
	volatile uint64_t x347 = 42644846075175190LLU;

	t80 = ((x345*(x346<x347))*x348);

	if (t80 != -2147450880) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x349 = 65U;
	uint8_t x350 = 29U;

	t81 = ((x349*(x350<x351))*x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x354 = UINT64_MAX;
	uint32_t x355 = 937993U;
	int16_t x356 = -67;
	static volatile int32_t t82 = 3343;

	t82 = ((x353*(x354<x355))*x356);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x357 = -1;
	int32_t x358 = INT32_MAX;
	static int8_t x359 = INT8_MAX;
	static int32_t t83 = -1246;

	t83 = ((x357*(x358<x359))*x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x362 = 77513U;
	int64_t x363 = INT64_MIN;
	static int64_t x364 = 378108LL;
	volatile int64_t t84 = -410245LL;

	t84 = ((x361*(x362<x363))*x364);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x365 = -412513408LL;
	int64_t x366 = INT64_MIN;
	int32_t x367 = INT32_MIN;
	uint64_t x368 = UINT64_MAX;

	t85 = ((x365*(x366<x367))*x368);

	if (t85 != 412513408LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = -1;
	volatile int8_t x372 = INT8_MIN;
	int32_t t86 = -978080010;

	t86 = ((x369*(x370<x371))*x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x373 = 2LL;
	int16_t x375 = -4433;
	int8_t x376 = -1;

	t87 = ((x373*(x374<x375))*x376);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x377 = 1;
	volatile int32_t t88 = -20;

	t88 = ((x377*(x378<x379))*x380);

	if (t88 != 38) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x389 = UINT8_MAX;
	int64_t x390 = 136685LL;
	uint32_t x391 = UINT32_MAX;
	int32_t t89 = 262766328;

	t89 = ((x389*(x390<x391))*x392);

	if (t89 != 32385) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x395 = 42U;
	uint64_t t90 = 1LLU;

	t90 = ((x393*(x394<x395))*x396);

	if (t90 != 3663607102635LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x397 = INT32_MAX;
	uint64_t x398 = 346LLU;
	int16_t x399 = 24;
	uint16_t x400 = UINT16_MAX;
	int32_t t91 = -14;

	t91 = ((x397*(x398<x399))*x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x403 = INT16_MAX;
	volatile uint16_t x404 = UINT16_MAX;

	t92 = ((x401*(x402<x403))*x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x405 = INT8_MIN;
	uint32_t x406 = UINT32_MAX;
	volatile int16_t x408 = INT16_MIN;
	static int32_t t93 = -618;

	t93 = ((x405*(x406<x407))*x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x409 = -1;
	uint16_t x410 = UINT16_MAX;
	uint8_t x411 = 44U;
	static volatile int64_t t94 = 449945271016LL;

	t94 = ((x409*(x410<x411))*x412);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x414 = 2091749U;
	volatile int32_t t95 = 130216687;

	t95 = ((x413*(x414<x415))*x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x417 = UINT32_MAX;
	uint8_t x418 = 7U;
	int16_t x419 = INT16_MIN;
	uint32_t t96 = 1566U;

	t96 = ((x417*(x418<x419))*x420);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x433 = INT64_MIN;
	int16_t x434 = 0;
	uint32_t x435 = 2U;
	uint64_t x436 = 10566783756104462LLU;
	uint64_t t97 = 6535743208301591780LLU;

	t97 = ((x433*(x434<x435))*x436);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x437 = 0;
	int8_t x438 = INT8_MIN;
	uint8_t x439 = 1U;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t98 = 1827;

	t98 = ((x437*(x438<x439))*x440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x441 = 46U;
	static uint16_t x442 = 1482U;
	uint8_t x444 = 2U;
	static volatile int32_t t99 = -396264;

	t99 = ((x441*(x442<x443))*x444);

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

