#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -1LL;
uint64_t x8 = 38003653LLU;
uint16_t x12 = 958U;
int64_t x34 = INT64_MIN;
volatile uint64_t t5 = 14816719719025LLU;
uint32_t x38 = 19747U;
volatile uint32_t t7 = 534U;
int8_t x51 = -1;
uint8_t x58 = 39U;
int16_t x76 = 87;
int8_t x79 = -1;
static int32_t x81 = INT32_MIN;
static int32_t t16 = -280939530;
int8_t x85 = -1;
uint8_t x86 = 0U;
volatile int32_t t17 = -7;
volatile int16_t x94 = INT16_MIN;
static int8_t x95 = INT8_MIN;
volatile int32_t x101 = -39;
int16_t x112 = INT16_MIN;
uint16_t x114 = 13U;
int16_t x122 = INT16_MAX;
int8_t x127 = 4;
int32_t t25 = -514146;
int16_t x138 = -1;
int64_t x139 = -1LL;
uint32_t x143 = 24U;
volatile int32_t t29 = 127;
int8_t x150 = INT8_MIN;
int32_t x151 = -1;
volatile int32_t t30 = 55774247;
static volatile int8_t x179 = 0;
uint8_t x183 = UINT8_MAX;
volatile int32_t t35 = -8667;
volatile int32_t t36 = 1;
int64_t x196 = -1LL;
volatile int32_t t37 = 1;
int8_t x204 = -1;
uint64_t x205 = UINT64_MAX;
int64_t x206 = INT64_MIN;
static int32_t t43 = -46375420;
static volatile int32_t t44 = -2;
int16_t x234 = INT16_MIN;
uint64_t x235 = 466647646LLU;
volatile uint32_t t46 = 1U;
uint16_t x238 = UINT16_MAX;
volatile int8_t x240 = -1;
volatile int32_t t47 = INT32_MIN;
volatile int32_t x250 = INT32_MIN;
volatile int32_t t50 = -102608;
int32_t x253 = -275685;
int16_t x275 = -3943;
int64_t x286 = 3LL;
volatile int16_t x298 = -434;
static volatile int8_t x301 = INT8_MIN;
int16_t x303 = 664;
int16_t x314 = -60;
int8_t x315 = -1;
int32_t x321 = INT32_MIN;
volatile int8_t x324 = -1;
volatile int32_t t61 = 1763603;
uint16_t x358 = 12379U;
static volatile int64_t x365 = 6690554LL;
static volatile int16_t x371 = INT16_MIN;
uint32_t x379 = UINT32_MAX;
volatile int8_t x380 = INT8_MIN;
static uint32_t x383 = 22U;
int32_t x389 = -1;
int8_t x390 = INT8_MIN;
volatile uint64_t x395 = 44347667355063234LLU;
volatile int64_t x398 = INT64_MAX;
int32_t t74 = -1042770;
int32_t x405 = -1;
volatile int32_t x409 = -1;
volatile int32_t t77 = 97;
uint32_t x442 = 4759012U;
int64_t x444 = -1LL;
uint64_t x451 = 2465484605LLU;
int8_t x456 = INT8_MAX;
volatile int64_t t83 = 3683676857LL;
static int32_t x457 = 366873797;
volatile uint8_t x459 = UINT8_MAX;
int8_t x460 = 50;
static uint8_t x469 = 60U;
uint8_t x478 = 8U;
int16_t x483 = -1;
int16_t x484 = -5315;
static int64_t x488 = 1336077347280811402LL;
int32_t x491 = 17;
int16_t x493 = -1;
static int32_t x494 = INT32_MIN;
uint32_t x501 = 41U;
uint64_t x502 = UINT64_MAX;
static volatile uint32_t t93 = 178431730U;
uint32_t x507 = UINT32_MAX;
uint64_t t94 = 1331LLU;
volatile uint16_t x514 = 111U;
int16_t x516 = -1;
volatile int32_t t95 = 290;
int8_t x534 = INT8_MIN;
volatile int32_t t98 = 1;
int16_t x537 = -1;


void f0(void) {
	int16_t x6 = -638;
	volatile int32_t x7 = -274436;
	int64_t t0 = 20LL;

	t0 = (x5+(x6<=(x7*x8)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MAX;
	static volatile int64_t x10 = 2949698558734866LL;
	uint32_t x11 = UINT32_MAX;
	static volatile int64_t t1 = INT64_MAX;

	t1 = (x9+(x10<=(x11*x12)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MAX;
	int32_t x15 = -22;
	uint8_t x16 = UINT8_MAX;
	int64_t t2 = INT64_MIN;

	t2 = (x13+(x14<=(x15*x16)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = 223;
	volatile int64_t x26 = 1LL;
	static int8_t x27 = -1;
	int16_t x28 = -1248;
	static int32_t t3 = 767381714;

	t3 = (x25+(x26<=(x27*x28)));

	if (t3 != 224) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = INT8_MIN;
	int16_t x31 = 4;
	int8_t x32 = INT8_MIN;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x29+(x30<=(x31*x32)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x33 = 8LLU;
	volatile uint64_t x35 = 182798LLU;
	static uint8_t x36 = 79U;

	t5 = (x33+(x34<=(x35*x36)));

	if (t5 != 8LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = INT64_MIN;
	uint16_t x39 = UINT16_MAX;
	int8_t x40 = INT8_MIN;
	volatile int64_t t6 = -1621LL;

	t6 = (x37+(x38<=(x39*x40)));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = 0;
	int8_t x43 = INT8_MAX;
	int8_t x44 = INT8_MAX;

	t7 = (x41+(x42<=(x43*x44)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = 7769826LL;
	volatile uint64_t x46 = UINT64_MAX;
	int16_t x47 = 1;
	int16_t x48 = INT16_MAX;
	int64_t t8 = -210232LL;

	t8 = (x45+(x46<=(x47*x48)));

	if (t8 != 7769826LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	static uint64_t x50 = 13672733LLU;
	uint64_t x52 = 55LLU;
	int32_t t9 = -9;

	t9 = (x49+(x50<=(x51*x52)));

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -1;
	static int64_t x54 = 798381980LL;
	int32_t x55 = -1;
	int16_t x56 = -1;
	static volatile int32_t t10 = 720929;

	t10 = (x53+(x54<=(x55*x56)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x57 = INT8_MIN;
	int8_t x59 = INT8_MIN;
	uint16_t x60 = 19U;
	static volatile int32_t t11 = 62637530;

	t11 = (x57+(x58<=(x59*x60)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MAX;
	int16_t x62 = -1;
	int8_t x63 = -1;
	int32_t x64 = -499780;
	int32_t t12 = 412094;

	t12 = (x61+(x62<=(x63*x64)));

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = -1LL;
	volatile int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MIN;
	uint32_t x68 = 3455U;
	static volatile int64_t t13 = -3789942139032327LL;

	t13 = (x65+(x66<=(x67*x68)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = UINT16_MAX;
	volatile int32_t x74 = 18645;
	volatile uint8_t x75 = 33U;
	volatile int32_t t14 = -3919;

	t14 = (x73+(x74<=(x75*x76)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 0U;
	uint8_t x78 = 0U;
	volatile int32_t x80 = -1;
	static volatile int32_t t15 = -74;

	t15 = (x77+(x78<=(x79*x80)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x82 = -1;
	int8_t x83 = 42;
	static uint16_t x84 = UINT16_MAX;

	t16 = (x81+(x82<=(x83*x84)));

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x87 = 3LLU;
	uint64_t x88 = UINT64_MAX;

	t17 = (x85+(x86<=(x87*x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = INT64_MAX;
	volatile uint8_t x90 = 63U;
	volatile uint16_t x91 = 421U;
	int8_t x92 = -7;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x89+(x90<=(x91*x92)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	int8_t x96 = 8;
	static int32_t t19 = 1840;

	t19 = (x93+(x94<=(x95*x96)));

	if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x97 = UINT16_MAX;
	uint16_t x98 = UINT16_MAX;
	int64_t x99 = INT64_MAX;
	int64_t x100 = -1LL;
	volatile int32_t t20 = -10093103;

	t20 = (x97+(x98<=(x99*x100)));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x102 = INT8_MIN;
	uint8_t x103 = 5U;
	uint32_t x104 = 12895830U;
	static int32_t t21 = -396146;

	t21 = (x101+(x102<=(x103*x104)));

	if (t21 != -39) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x109 = 1;
	static uint16_t x110 = UINT16_MAX;
	int8_t x111 = INT8_MAX;
	int32_t t22 = 207570727;

	t22 = (x109+(x110<=(x111*x112)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = -1LL;
	volatile uint64_t x115 = 6850198159792776LLU;
	uint64_t x116 = UINT64_MAX;
	static volatile int64_t t23 = -467316969339LL;

	t23 = (x113+(x114<=(x115*x116)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = -1LL;
	int8_t x123 = INT8_MIN;
	uint8_t x124 = 119U;
	static volatile int64_t t24 = -392343747489LL;

	t24 = (x121+(x122<=(x123*x124)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x125 = INT8_MIN;
	static volatile int32_t x126 = INT32_MIN;
	int64_t x128 = 52524894567826968LL;

	t25 = (x125+(x126<=(x127*x128)));

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = INT8_MIN;
	static int16_t x130 = -4;
	volatile int64_t x131 = 1019714887364LL;
	int16_t x132 = -1;
	static int32_t t26 = 27;

	t26 = (x129+(x130<=(x131*x132)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = INT32_MAX;
	uint16_t x140 = 4076U;
	volatile int32_t t27 = INT32_MAX;

	t27 = (x137+(x138<=(x139*x140)));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = -1;
	static uint16_t x142 = 2U;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t28 = -837;

	t28 = (x141+(x142<=(x143*x144)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x145 = INT16_MIN;
	int32_t x146 = -1;
	uint32_t x147 = 167706416U;
	int8_t x148 = 4;

	t29 = (x145+(x146<=(x147*x148)));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x149 = 1009U;
	int32_t x152 = -1;

	t30 = (x149+(x150<=(x151*x152)));

	if (t30 != 1010) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = INT8_MIN;
	volatile int8_t x158 = INT8_MAX;
	int16_t x159 = -20;
	int32_t x160 = -1;
	int32_t t31 = -3102738;

	t31 = (x157+(x158<=(x159*x160)));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x161 = 20U;
	volatile int8_t x162 = -1;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = 1;
	volatile int32_t t32 = 40470;

	t32 = (x161+(x162<=(x163*x164)));

	if (t32 != 21) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x173 = -1;
	int16_t x174 = INT16_MAX;
	int16_t x175 = -1;
	int32_t x176 = -11;
	int32_t t33 = 5428016;

	t33 = (x173+(x174<=(x175*x176)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x177 = 20U;
	int32_t x178 = 2;
	int8_t x180 = -2;
	static int32_t t34 = 43470;

	t34 = (x177+(x178<=(x179*x180)));

	if (t34 != 20) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = INT16_MAX;
	uint64_t x182 = 4793923722229646LLU;
	uint64_t x184 = UINT64_MAX;

	t35 = (x181+(x182<=(x183*x184)));

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x185 = -662211855;
	uint64_t x186 = UINT64_MAX;
	int64_t x187 = 41297989093853LL;
	volatile int64_t x188 = 0LL;

	t36 = (x185+(x186<=(x187*x188)));

	if (t36 != -662211855) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x193 = -26;
	static int8_t x194 = INT8_MIN;
	uint16_t x195 = 1U;

	t37 = (x193+(x194<=(x195*x196)));

	if (t37 != -25) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x197 = UINT16_MAX;
	uint32_t x198 = 25784U;
	int16_t x199 = -1;
	volatile int64_t x200 = 41721308137573LL;
	int32_t t38 = -71567;

	t38 = (x197+(x198<=(x199*x200)));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x201 = UINT64_MAX;
	volatile int16_t x202 = 0;
	static int16_t x203 = 0;
	uint64_t t39 = 101443109163242LLU;

	t39 = (x201+(x202<=(x203*x204)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x207 = UINT32_MAX;
	volatile uint64_t x208 = 137979336518641066LLU;
	volatile uint64_t t40 = 131690873117925LLU;

	t40 = (x205+(x206<=(x207*x208)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x209 = UINT64_MAX;
	static int8_t x210 = -1;
	volatile uint8_t x211 = 5U;
	static volatile uint32_t x212 = 7009U;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x209+(x210<=(x211*x212)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x213 = INT8_MAX;
	static uint64_t x214 = 0LLU;
	uint8_t x215 = UINT8_MAX;
	static uint32_t x216 = UINT32_MAX;
	static volatile int32_t t42 = 1114;

	t42 = (x213+(x214<=(x215*x216)));

	if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x217 = UINT8_MAX;
	static uint64_t x218 = UINT64_MAX;
	int8_t x219 = 1;
	uint32_t x220 = 5027675U;

	t43 = (x217+(x218<=(x219*x220)));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x221 = INT8_MIN;
	volatile int64_t x222 = 17LL;
	static volatile uint64_t x223 = 12322444515591LLU;
	int16_t x224 = 2;

	t44 = (x221+(x222<=(x223*x224)));

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x229 = INT32_MIN;
	int16_t x230 = INT16_MAX;
	uint16_t x231 = 2198U;
	uint64_t x232 = UINT64_MAX;
	int32_t t45 = -11169;

	t45 = (x229+(x230<=(x231*x232)));

	if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x233 = 740026U;
	uint32_t x236 = 101U;

	t46 = (x233+(x234<=(x235*x236)));

	if (t46 != 740026U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x237 = INT32_MIN;
	static volatile int16_t x239 = INT16_MIN;

	t47 = (x237+(x238<=(x239*x240)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x241 = -1;
	int32_t x242 = -1;
	uint8_t x243 = UINT8_MAX;
	int8_t x244 = INT8_MAX;
	volatile int32_t t48 = -8327505;

	t48 = (x241+(x242<=(x243*x244)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x245 = UINT8_MAX;
	int64_t x246 = INT64_MAX;
	static uint64_t x247 = UINT64_MAX;
	static uint8_t x248 = UINT8_MAX;
	static int32_t t49 = -2645853;

	t49 = (x245+(x246<=(x247*x248)));

	if (t49 != 256) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x249 = -233;
	int32_t x251 = INT32_MAX;
	static int32_t x252 = 1;

	t50 = (x249+(x250<=(x251*x252)));

	if (t50 != -232) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x254 = INT16_MIN;
	int32_t x255 = 1;
	static int16_t x256 = INT16_MIN;
	volatile int32_t t51 = -131853;

	t51 = (x253+(x254<=(x255*x256)));

	if (t51 != -275684) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x273 = 87216;
	static uint64_t x274 = 273537969945472LLU;
	int16_t x276 = INT16_MAX;
	int32_t t52 = 864204;

	t52 = (x273+(x274<=(x275*x276)));

	if (t52 != 87217) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x285 = 10U;
	static int32_t x287 = -1;
	int8_t x288 = -6;
	volatile int32_t t53 = -21;

	t53 = (x285+(x286<=(x287*x288)));

	if (t53 != 11) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x293 = INT8_MIN;
	volatile int32_t x294 = -1822186;
	int16_t x295 = INT16_MIN;
	volatile int16_t x296 = -1;
	int32_t t54 = -1;

	t54 = (x293+(x294<=(x295*x296)));

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x297 = INT8_MIN;
	int32_t x299 = -1;
	static volatile int16_t x300 = INT16_MAX;
	static volatile int32_t t55 = 304908375;

	t55 = (x297+(x298<=(x299*x300)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x302 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t56 = -3264;

	t56 = (x301+(x302<=(x303*x304)));

	if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x309 = -14;
	volatile int64_t x310 = INT64_MIN;
	volatile int64_t x311 = -1LL;
	volatile int16_t x312 = INT16_MIN;
	static volatile int32_t t57 = 95904387;

	t57 = (x309+(x310<=(x311*x312)));

	if (t57 != -13) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x313 = 0U;
	uint32_t x316 = 101945723U;
	int32_t t58 = -5;

	t58 = (x313+(x314<=(x315*x316)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x322 = INT16_MAX;
	uint8_t x323 = UINT8_MAX;
	int32_t t59 = INT32_MIN;

	t59 = (x321+(x322<=(x323*x324)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x329 = 11474454444013834LLU;
	static int32_t x330 = 25;
	volatile int16_t x331 = INT16_MIN;
	uint64_t x332 = 112779442LLU;
	static uint64_t t60 = 94007228261796050LLU;

	t60 = (x329+(x330<=(x331*x332)));

	if (t60 != 11474454444013835LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x333 = UINT16_MAX;
	uint64_t x334 = UINT64_MAX;
	volatile int64_t x335 = -1LL;
	static int32_t x336 = INT32_MIN;

	t61 = (x333+(x334<=(x335*x336)));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x337 = UINT16_MAX;
	uint32_t x338 = 32178U;
	static uint16_t x339 = UINT16_MAX;
	uint16_t x340 = 543U;
	volatile int32_t t62 = -76;

	t62 = (x337+(x338<=(x339*x340)));

	if (t62 != 65536) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x341 = -1;
	static int8_t x342 = INT8_MIN;
	uint32_t x343 = 28U;
	int16_t x344 = -92;
	int32_t t63 = -2598481;

	t63 = (x341+(x342<=(x343*x344)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x345 = 24U;
	int16_t x346 = INT16_MIN;
	static int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t64 = -249950522;

	t64 = (x345+(x346<=(x347*x348)));

	if (t64 != 25) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x349 = UINT64_MAX;
	static volatile int16_t x350 = INT16_MAX;
	static uint16_t x351 = UINT16_MAX;
	int16_t x352 = INT16_MIN;
	uint64_t t65 = UINT64_MAX;

	t65 = (x349+(x350<=(x351*x352)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x357 = INT8_MIN;
	int32_t x359 = INT32_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t66 = -2165;

	t66 = (x357+(x358<=(x359*x360)));

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x366 = INT8_MIN;
	uint16_t x367 = 1U;
	int8_t x368 = 36;
	int64_t t67 = 2360942308237020LL;

	t67 = (x365+(x366<=(x367*x368)));

	if (t67 != 6690555LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x369 = 11;
	int16_t x370 = INT16_MIN;
	int64_t x372 = -1LL;
	static int32_t t68 = -7189784;

	t68 = (x369+(x370<=(x371*x372)));

	if (t68 != 12) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x377 = 0U;
	uint32_t x378 = 3U;
	static volatile int32_t t69 = -8502164;

	t69 = (x377+(x378<=(x379*x380)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x381 = 4U;
	int32_t x382 = 14241;
	uint32_t x384 = 1587919089U;
	volatile int32_t t70 = -31897613;

	t70 = (x381+(x382<=(x383*x384)));

	if (t70 != 5) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x385 = INT16_MAX;
	static uint32_t x386 = 622979U;
	uint32_t x387 = 147196U;
	volatile int8_t x388 = INT8_MIN;
	int32_t t71 = 129;

	t71 = (x385+(x386<=(x387*x388)));

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x391 = 1;
	int64_t x392 = INT64_MAX;
	volatile int32_t t72 = 2117;

	t72 = (x389+(x390<=(x391*x392)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x393 = -78;
	static int16_t x394 = -2;
	int32_t x396 = INT32_MIN;
	volatile int32_t t73 = -1;

	t73 = (x393+(x394<=(x395*x396)));

	if (t73 != -78) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x397 = UINT16_MAX;
	uint64_t x399 = UINT64_MAX;
	volatile int64_t x400 = INT64_MAX;

	t74 = (x397+(x398<=(x399*x400)));

	if (t74 != 65536) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x406 = INT64_MAX;
	volatile uint16_t x407 = 34U;
	int16_t x408 = INT16_MAX;
	static int32_t t75 = -130249569;

	t75 = (x405+(x406<=(x407*x408)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x410 = INT8_MIN;
	int64_t x411 = 533779507LL;
	int16_t x412 = INT16_MAX;
	static volatile int32_t t76 = 4538;

	t76 = (x409+(x410<=(x411*x412)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x417 = 1479U;
	int32_t x418 = INT32_MAX;
	uint8_t x419 = 2U;
	uint64_t x420 = UINT64_MAX;

	t77 = (x417+(x418<=(x419*x420)));

	if (t77 != 1480) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x433 = -1;
	static volatile uint16_t x434 = 26908U;
	volatile uint64_t x435 = 210529291LLU;
	int8_t x436 = -1;
	static volatile int32_t t78 = -9;

	t78 = (x433+(x434<=(x435*x436)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x437 = UINT8_MAX;
	static int64_t x438 = -77490498275843LL;
	volatile uint16_t x439 = 17474U;
	volatile int16_t x440 = -1;
	int32_t t79 = -82959709;

	t79 = (x437+(x438<=(x439*x440)));

	if (t79 != 256) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x441 = 1LL;
	int32_t x443 = -1;
	static int64_t t80 = -10LL;

	t80 = (x441+(x442<=(x443*x444)));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x445 = -1;
	int32_t x446 = INT32_MIN;
	int8_t x447 = 60;
	uint32_t x448 = 2245961U;
	int32_t t81 = -111350;

	t81 = (x445+(x446<=(x447*x448)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x449 = 77249;
	uint16_t x450 = 145U;
	uint32_t x452 = 7838327U;
	volatile int32_t t82 = -12549518;

	t82 = (x449+(x450<=(x451*x452)));

	if (t82 != 77250) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x453 = 54194350223415731LL;
	volatile int16_t x454 = 842;
	uint8_t x455 = 25U;

	t83 = (x453+(x454<=(x455*x456)));

	if (t83 != 54194350223415732LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x458 = 769893096662149LL;
	int32_t t84 = -2;

	t84 = (x457+(x458<=(x459*x460)));

	if (t84 != 366873797) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x470 = 141449LLU;
	int8_t x471 = -1;
	uint32_t x472 = 958759597U;
	volatile int32_t t85 = -269839307;

	t85 = (x469+(x470<=(x471*x472)));

	if (t85 != 61) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x473 = INT8_MIN;
	int64_t x474 = INT64_MIN;
	int32_t x475 = -15;
	int32_t x476 = -1;
	volatile int32_t t86 = -32983;

	t86 = (x473+(x474<=(x475*x476)));

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x477 = 30;
	static uint32_t x479 = 472584484U;
	int16_t x480 = INT16_MIN;
	static volatile int32_t t87 = 6;

	t87 = (x477+(x478<=(x479*x480)));

	if (t87 != 31) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x481 = 3;
	static uint64_t x482 = UINT64_MAX;
	int32_t t88 = 425636;

	t88 = (x481+(x482<=(x483*x484)));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x485 = -41;
	int64_t x486 = INT64_MIN;
	int8_t x487 = 0;
	volatile int32_t t89 = -2;

	t89 = (x485+(x486<=(x487*x488)));

	if (t89 != -40) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x489 = INT16_MIN;
	static int16_t x490 = INT16_MAX;
	int32_t x492 = 3;
	int32_t t90 = 735389;

	t90 = (x489+(x490<=(x491*x492)));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x495 = 49U;
	int8_t x496 = -1;
	volatile int32_t t91 = -499;

	t91 = (x493+(x494<=(x495*x496)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x497 = INT8_MIN;
	int16_t x498 = INT16_MIN;
	static int8_t x499 = -23;
	static int64_t x500 = -1LL;
	volatile int32_t t92 = -55398480;

	t92 = (x497+(x498<=(x499*x500)));

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x503 = 869U;
	uint32_t x504 = UINT32_MAX;

	t93 = (x501+(x502<=(x503*x504)));

	if (t93 != 41U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x505 = UINT64_MAX;
	int16_t x506 = 11;
	uint16_t x508 = UINT16_MAX;

	t94 = (x505+(x506<=(x507*x508)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x513 = INT16_MIN;
	int32_t x515 = -753240776;

	t95 = (x513+(x514<=(x515*x516)));

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x517 = 4;
	uint64_t x518 = 16820879872891860LLU;
	static int32_t x519 = INT32_MIN;
	uint64_t x520 = 14442863LLU;
	int32_t t96 = 1;

	t96 = (x517+(x518<=(x519*x520)));

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x521 = -4486;
	int32_t x522 = INT32_MAX;
	static uint8_t x523 = 3U;
	volatile uint64_t x524 = UINT64_MAX;
	int32_t t97 = 46378306;

	t97 = (x521+(x522<=(x523*x524)));

	if (t97 != -4485) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x533 = INT8_MAX;
	volatile int8_t x535 = 0;
	static int64_t x536 = INT64_MAX;

	t98 = (x533+(x534<=(x535*x536)));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x538 = 21U;
	volatile int16_t x539 = 15;
	int8_t x540 = INT8_MIN;
	int32_t t99 = 879;

	t99 = (x537+(x538<=(x539*x540)));

	if (t99 != -1) { NG(); } else { ; }
	
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

