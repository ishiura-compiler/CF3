#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = 0;
static volatile int32_t x5 = 24500;
volatile int16_t x7 = INT16_MIN;
volatile uint64_t x13 = UINT64_MAX;
static volatile uint64_t x17 = 1011146956LLU;
uint32_t x20 = UINT32_MAX;
volatile uint16_t x28 = 734U;
int32_t t6 = 3371723;
volatile int16_t x32 = INT16_MAX;
static uint8_t x33 = 44U;
int64_t x39 = INT64_MIN;
int32_t x42 = 76523;
int32_t x51 = INT32_MIN;
static uint32_t t12 = UINT32_MAX;
int32_t t13 = 29896703;
static volatile int16_t x57 = 14;
int8_t x62 = INT8_MIN;
int64_t x65 = INT64_MIN;
volatile int64_t t16 = INT64_MIN;
int16_t x69 = -1253;
static uint8_t x75 = UINT8_MAX;
volatile uint16_t x88 = 18164U;
static int32_t x92 = 22894920;
uint64_t t23 = 488369334933LLU;
int64_t x102 = 1050467LL;
uint32_t t25 = 355283U;
int16_t x107 = INT16_MIN;
int8_t x111 = INT8_MIN;
int8_t x113 = INT8_MAX;
int16_t x121 = INT16_MAX;
int32_t x124 = INT32_MIN;
int64_t x125 = -758102LL;
int32_t t38 = -1419;
static uint8_t x160 = 3U;
int32_t x165 = INT32_MIN;
volatile uint8_t x166 = 62U;
int16_t x168 = -1;
int64_t x175 = 32720951975LL;
int8_t x177 = 0;
static int64_t x178 = INT64_MAX;
int16_t x185 = INT16_MIN;
int16_t x188 = INT16_MIN;
int64_t x189 = INT64_MAX;
uint8_t x200 = UINT8_MAX;
int16_t x203 = -520;
uint16_t x206 = 18355U;
int64_t x208 = 0LL;
uint16_t x210 = UINT16_MAX;
static int64_t x212 = INT64_MIN;
uint8_t x214 = UINT8_MAX;
int64_t x215 = -1LL;
uint16_t x223 = 31881U;
volatile int32_t t55 = -2228079;
int32_t x232 = INT32_MIN;
int32_t x234 = INT32_MIN;
volatile int64_t x247 = 205901340998021LL;
volatile int32_t x250 = INT32_MIN;
int64_t x252 = INT64_MIN;
static int16_t x260 = -581;
static volatile int32_t t65 = -19;
int8_t x266 = -1;
uint32_t x278 = 0U;
volatile uint8_t x282 = 2U;
int64_t x284 = INT64_MIN;
volatile uint8_t x285 = 35U;
uint16_t x286 = 970U;
int8_t x290 = 1;
int32_t x291 = INT32_MIN;
static int8_t x294 = -1;
static uint16_t x300 = 1337U;
int8_t x301 = -47;
int8_t x302 = INT8_MAX;
static volatile uint64_t x308 = 1898956588480866522LLU;
static int64_t x310 = 32195805706LL;
static uint64_t t78 = 2563969245925586LLU;
int32_t x317 = INT32_MAX;
int8_t x318 = INT8_MAX;
int64_t x323 = 1904LL;
volatile int32_t t80 = 267;
uint8_t x326 = 18U;
uint16_t x331 = 2657U;
uint32_t x332 = UINT32_MAX;
int64_t x341 = 2843155082712LL;
static int64_t x347 = -65121343349066026LL;
uint32_t x348 = 1004004853U;
int32_t t86 = -86;
int8_t x350 = 0;
uint8_t x353 = 4U;
int64_t x355 = -19922LL;
int16_t x362 = -3581;
volatile uint16_t x363 = UINT16_MAX;
int64_t x364 = -340369604950LL;
static int16_t x367 = INT16_MIN;
static volatile int32_t x376 = -1;
int8_t x377 = 1;
uint16_t x378 = UINT16_MAX;
int32_t t96 = -25828;
volatile int8_t x389 = 0;
volatile int16_t x391 = -4154;
int32_t t97 = -19090;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	uint8_t x3 = UINT8_MAX;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -95416550;

	t0 = (x1|(x2<(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 107512635U;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 190675100;

	t1 = (x5|(x6<(x7|x8)));

	if (t1 != 24501) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile uint64_t x10 = 94029834508LLU;
	static uint16_t x11 = 16U;
	uint16_t x12 = UINT16_MAX;
	static int32_t t2 = INT32_MIN;

	t2 = (x9|(x10<(x11|x12)));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	volatile uint64_t x15 = 4290131100122188276LLU;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = (x13|(x14<(x15|x16)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = INT64_MIN;
	static volatile int64_t x19 = 1LL;
	static volatile uint64_t t4 = 38237289131967306LLU;

	t4 = (x17|(x18<(x19|x20)));

	if (t4 != 1011146957LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	uint16_t x22 = 2248U;
	int8_t x23 = INT8_MAX;
	uint32_t x24 = 408U;
	int32_t t5 = INT32_MIN;

	t5 = (x21|(x22<(x23|x24)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int16_t x26 = -1;
	int32_t x27 = 178766575;

	t6 = (x25|(x26<(x27|x28)));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 94U;
	volatile int32_t x30 = INT32_MIN;
	int8_t x31 = -1;
	volatile int32_t t7 = 156;

	t7 = (x29|(x30<(x31|x32)));

	if (t7 != 95) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 4596671LLU;
	int64_t x35 = INT64_MIN;
	static int8_t x36 = 2;
	volatile int32_t t8 = -4180891;

	t8 = (x33|(x34<(x35|x36)));

	if (t8 != 45) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = UINT32_MAX;
	static int8_t x38 = INT8_MIN;
	static volatile int16_t x40 = INT16_MIN;
	uint32_t t9 = UINT32_MAX;

	t9 = (x37|(x38<(x39|x40)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MAX;
	volatile uint32_t x43 = 13U;
	static int64_t x44 = INT64_MIN;
	static volatile int32_t t10 = INT32_MAX;

	t10 = (x41|(x42<(x43|x44)));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int64_t x46 = INT64_MAX;
	int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MIN;
	volatile int64_t t11 = 0LL;

	t11 = (x45|(x46<(x47|x48)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int16_t x50 = INT16_MIN;
	static int16_t x52 = INT16_MIN;

	t12 = (x49|(x50<(x51|x52)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x53 = 112U;
	int64_t x54 = INT64_MAX;
	uint16_t x55 = 1708U;
	int8_t x56 = INT8_MIN;

	t13 = (x53|(x54<(x55|x56)));

	if (t13 != 112) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -7554831507LL;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = INT64_MIN;
	int32_t t14 = 137505;

	t14 = (x57|(x58<(x59|x60)));

	if (t14 != 14) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = 0;
	uint32_t x63 = 8U;
	int16_t x64 = 11242;
	volatile int32_t t15 = 1483;

	t15 = (x61|(x62<(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = UINT16_MAX;
	volatile uint8_t x67 = UINT8_MAX;
	volatile uint64_t x68 = 1LLU;

	t16 = (x65|(x66<(x67|x68)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MAX;
	static uint64_t x71 = 24588402816097477LLU;
	int32_t x72 = INT32_MAX;
	int32_t t17 = -37955665;

	t17 = (x69|(x70<(x71|x72)));

	if (t17 != -1253) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -10;
	static volatile int64_t x74 = INT64_MIN;
	uint16_t x76 = 219U;
	static int32_t t18 = 27375439;

	t18 = (x73|(x74<(x75|x76)));

	if (t18 != -9) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	static int16_t x78 = INT16_MAX;
	static int16_t x79 = 3433;
	static uint32_t x80 = 113506031U;
	static int32_t t19 = -402227135;

	t19 = (x77|(x78<(x79|x80)));

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	uint16_t x82 = 22U;
	int32_t x83 = -21;
	int32_t x84 = INT32_MIN;
	int32_t t20 = 66635595;

	t20 = (x81|(x82<(x83|x84)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MIN;
	static int32_t t21 = -9312;

	t21 = (x85|(x86<(x87|x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	uint32_t x90 = 2077671U;
	uint32_t x91 = UINT32_MAX;
	volatile int32_t t22 = -25491702;

	t22 = (x89|(x90<(x91|x92)));

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = 19611623LLU;
	int64_t x94 = INT64_MIN;
	int16_t x95 = -80;
	uint16_t x96 = UINT16_MAX;

	t23 = (x93|(x94<(x95|x96)));

	if (t23 != 19611623LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	volatile int16_t x98 = INT16_MIN;
	uint32_t x99 = 63051760U;
	volatile int8_t x100 = INT8_MAX;
	int32_t t24 = INT32_MIN;

	t24 = (x97|(x98<(x99|x100)));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 20U;
	static uint32_t x103 = 20942299U;
	static int64_t x104 = 2482645735053723890LL;

	t25 = (x101|(x102<(x103|x104)));

	if (t25 != 21U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	static uint8_t x106 = 11U;
	int8_t x108 = INT8_MAX;
	volatile int32_t t26 = 24;

	t26 = (x105|(x106<(x107|x108)));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = INT8_MIN;
	static volatile int32_t x112 = INT32_MAX;
	int32_t t27 = 63;

	t27 = (x109|(x110<(x111|x112)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x114 = -953353;
	volatile uint32_t x115 = 532U;
	int32_t x116 = 237433881;
	int32_t t28 = 4261;

	t28 = (x113|(x114<(x115|x116)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 19627996670397991LLU;
	int16_t x118 = -1;
	uint64_t x119 = 56435577285587371LLU;
	uint8_t x120 = UINT8_MAX;
	uint64_t t29 = 8628578671717349627LLU;

	t29 = (x117|(x118<(x119|x120)));

	if (t29 != 19627996670397991LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x122 = UINT32_MAX;
	int32_t x123 = -46666711;
	volatile int32_t t30 = -51044;

	t30 = (x121|(x122<(x123|x124)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x126 = INT64_MIN;
	static uint64_t x127 = 1492816600LLU;
	int16_t x128 = INT16_MIN;
	int64_t t31 = -464781883472LL;

	t31 = (x125|(x126<(x127|x128)));

	if (t31 != -758101LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = -13389;
	static volatile uint8_t x130 = 1U;
	volatile int64_t x131 = INT64_MIN;
	uint8_t x132 = 114U;
	static volatile int32_t t32 = -2;

	t32 = (x129|(x130<(x131|x132)));

	if (t32 != -13389) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	uint8_t x134 = 10U;
	int8_t x135 = 2;
	static uint64_t x136 = UINT64_MAX;
	volatile int64_t t33 = 238506062111460LL;

	t33 = (x133|(x134<(x135|x136)));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 1LL;
	static int16_t x138 = INT16_MIN;
	volatile int16_t x139 = 1;
	static uint8_t x140 = 43U;
	volatile int64_t t34 = 3981469370921268200LL;

	t34 = (x137|(x138<(x139|x140)));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 80035352U;
	uint64_t x142 = UINT64_MAX;
	static volatile int8_t x143 = INT8_MIN;
	volatile int32_t x144 = -1;
	static uint32_t t35 = 6U;

	t35 = (x141|(x142<(x143|x144)));

	if (t35 != 80035352U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	volatile uint8_t x146 = 1U;
	int64_t x147 = INT64_MAX;
	int64_t x148 = INT64_MAX;
	int32_t t36 = -222721;

	t36 = (x145|(x146<(x147|x148)));

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = -1LL;
	volatile uint16_t x150 = 0U;
	uint8_t x151 = 1U;
	int64_t x152 = INT64_MIN;
	static volatile int64_t t37 = 3667957178794101LL;

	t37 = (x149|(x150<(x151|x152)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 27U;
	uint64_t x154 = 282067038675LLU;
	static volatile uint64_t x155 = 2853533935LLU;
	int8_t x156 = 32;

	t38 = (x153|(x154<(x155|x156)));

	if (t38 != 27) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = 0U;
	static int16_t x158 = -1;
	volatile uint8_t x159 = UINT8_MAX;
	volatile uint32_t t39 = 918223U;

	t39 = (x157|(x158<(x159|x160)));

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MAX;
	volatile uint8_t x162 = UINT8_MAX;
	volatile int64_t x163 = INT64_MIN;
	uint8_t x164 = UINT8_MAX;
	static volatile int64_t t40 = INT64_MAX;

	t40 = (x161|(x162<(x163|x164)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x167 = 26U;
	int32_t t41 = INT32_MIN;

	t41 = (x165|(x166<(x167|x168)));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	uint32_t x170 = 40237932U;
	volatile int32_t x171 = INT32_MIN;
	volatile int8_t x172 = INT8_MIN;
	int64_t t42 = INT64_MAX;

	t42 = (x169|(x170<(x171|x172)));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -103959781;
	static int16_t x174 = INT16_MIN;
	int64_t x176 = 268997949271480846LL;
	int32_t t43 = -469542;

	t43 = (x173|(x174<(x175|x176)));

	if (t43 != -103959781) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x179 = INT16_MAX;
	uint8_t x180 = 3U;
	static int32_t t44 = -2168960;

	t44 = (x177|(x178<(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = 759971U;
	static volatile uint32_t x182 = 13701453U;
	int32_t x183 = -1139;
	uint16_t x184 = 11U;
	volatile uint32_t t45 = 21U;

	t45 = (x181|(x182<(x183|x184)));

	if (t45 != 759971U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = -1;
	static int32_t x187 = 124044161;
	int32_t t46 = -6397343;

	t46 = (x185|(x186<(x187|x188)));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x190 = 8731017LLU;
	int8_t x191 = INT8_MIN;
	uint8_t x192 = 2U;
	int64_t t47 = INT64_MAX;

	t47 = (x189|(x190<(x191|x192)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 8;
	static volatile int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = -9;

	t48 = (x193|(x194<(x195|x196)));

	if (t48 != 8) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MIN;
	uint32_t x198 = 4036795U;
	int8_t x199 = INT8_MAX;
	volatile int32_t t49 = INT32_MIN;

	t49 = (x197|(x198<(x199|x200)));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	static volatile uint8_t x202 = UINT8_MAX;
	static int16_t x204 = INT16_MIN;
	int32_t t50 = INT32_MIN;

	t50 = (x201|(x202<(x203|x204)));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = -1;
	uint32_t x207 = 1U;
	int32_t t51 = 125444;

	t51 = (x205|(x206<(x207|x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 26343812U;
	uint32_t x211 = 145339712U;
	uint32_t t52 = 968792137U;

	t52 = (x209|(x210<(x211|x212)));

	if (t52 != 26343812U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 80;
	volatile uint8_t x216 = 2U;
	static int32_t t53 = 6376;

	t53 = (x213|(x214<(x215|x216)));

	if (t53 != 80) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	int16_t x218 = -1;
	int64_t x219 = -1LL;
	int8_t x220 = -38;
	uint32_t t54 = UINT32_MAX;

	t54 = (x217|(x218<(x219|x220)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int64_t x224 = INT64_MIN;

	t55 = (x221|(x222<(x223|x224)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 2U;
	int32_t x226 = -54;
	int8_t x227 = -31;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -9;

	t56 = (x225|(x226<(x227|x228)));

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -7;
	uint16_t x230 = 359U;
	int64_t x231 = INT64_MAX;
	volatile int32_t t57 = 4486;

	t57 = (x229|(x230<(x231|x232)));

	if (t57 != -7) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 13955U;
	int64_t x235 = INT64_MIN;
	int8_t x236 = 41;
	static volatile int32_t t58 = 376;

	t58 = (x233|(x234<(x235|x236)));

	if (t58 != 13955) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	int16_t x238 = INT16_MIN;
	int16_t x239 = -1;
	int16_t x240 = INT16_MIN;
	int32_t t59 = 53733;

	t59 = (x237|(x238<(x239|x240)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MIN;
	int16_t x244 = INT16_MAX;
	static volatile int64_t t60 = INT64_MAX;

	t60 = (x241|(x242<(x243|x244)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	volatile uint32_t x246 = UINT32_MAX;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t61 = -46119;

	t61 = (x245|(x246<(x247|x248)));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 0;
	uint64_t x251 = UINT64_MAX;
	int32_t t62 = -13;

	t62 = (x249|(x250<(x251|x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = -1;
	static volatile uint32_t x254 = 3U;
	int16_t x255 = -874;
	volatile int64_t x256 = INT64_MIN;
	static volatile int32_t t63 = 24386673;

	t63 = (x253|(x254<(x255|x256)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 5762338LLU;
	volatile int16_t x258 = 212;
	volatile int16_t x259 = INT16_MIN;
	volatile uint64_t t64 = 1871LLU;

	t64 = (x257|(x258<(x259|x260)));

	if (t64 != 5762338LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 22662U;
	static uint64_t x262 = 505089983582LLU;
	int64_t x263 = 0LL;
	uint8_t x264 = 124U;

	t65 = (x261|(x262<(x263|x264)));

	if (t65 != 22662) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 61U;
	uint8_t x267 = 0U;
	static int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 120;

	t66 = (x265|(x266<(x267|x268)));

	if (t66 != 61) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 14;
	int16_t x270 = -174;
	int16_t x271 = INT16_MAX;
	int64_t x272 = 612LL;
	volatile int32_t t67 = 31;

	t67 = (x269|(x270<(x271|x272)));

	if (t67 != 15) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 4U;
	uint8_t x274 = UINT8_MAX;
	volatile int8_t x275 = 4;
	static int16_t x276 = -1;
	volatile int32_t t68 = -100;

	t68 = (x273|(x274<(x275|x276)));

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 4856LLU;
	int64_t x279 = INT64_MIN;
	volatile int32_t x280 = -16085;
	uint64_t t69 = 235010878LLU;

	t69 = (x277|(x278<(x279|x280)));

	if (t69 != 4856LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = INT32_MIN;
	static uint32_t x283 = 19195235U;
	static int32_t t70 = INT32_MIN;

	t70 = (x281|(x282<(x283|x284)));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x287 = INT8_MAX;
	int64_t x288 = -1LL;
	int32_t t71 = 14523;

	t71 = (x285|(x286<(x287|x288)));

	if (t71 != 35) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = -1;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -535;

	t72 = (x289|(x290<(x291|x292)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 14;
	int64_t x295 = -19963796LL;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t73 = 0;

	t73 = (x293|(x294<(x295|x296)));

	if (t73 != 14) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	int32_t x298 = -1;
	volatile uint8_t x299 = UINT8_MAX;
	int32_t t74 = -196796904;

	t74 = (x297|(x298<(x299|x300)));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x303 = 1634935;
	int32_t x304 = -1;
	int32_t t75 = 1616656;

	t75 = (x301|(x302<(x303|x304)));

	if (t75 != -47) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x305 = INT64_MAX;
	uint16_t x306 = 1U;
	int8_t x307 = INT8_MIN;
	int64_t t76 = INT64_MAX;

	t76 = (x305|(x306<(x307|x308)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -87339;
	uint32_t x311 = UINT32_MAX;
	int64_t x312 = -410383242LL;
	static int32_t t77 = -849690;

	t77 = (x309|(x310<(x311|x312)));

	if (t77 != -87339) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x313 = 1264LLU;
	int8_t x314 = -1;
	int16_t x315 = -1;
	int64_t x316 = INT64_MIN;

	t78 = (x313|(x314<(x315|x316)));

	if (t78 != 1264LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x319 = -13504LL;
	int8_t x320 = 0;
	volatile int32_t t79 = INT32_MAX;

	t79 = (x317|(x318<(x319|x320)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -7;
	int16_t x322 = -2683;
	int32_t x324 = -2994220;

	t80 = (x321|(x322<(x323|x324)));

	if (t80 != -7) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 120U;
	uint16_t x327 = 13U;
	int64_t x328 = 2047LL;
	volatile int32_t t81 = 618748;

	t81 = (x325|(x326<(x327|x328)));

	if (t81 != 121) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -3LL;
	volatile int8_t x330 = -1;
	int64_t t82 = -5LL;

	t82 = (x329|(x330<(x331|x332)));

	if (t82 != -3LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int8_t x334 = -51;
	volatile int64_t x335 = INT64_MIN;
	static volatile uint32_t x336 = 120U;
	volatile int32_t t83 = -517995;

	t83 = (x333|(x334<(x335|x336)));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = -1;
	int32_t x338 = -1;
	int64_t x339 = INT64_MIN;
	static int16_t x340 = INT16_MAX;
	static int32_t t84 = 3240;

	t84 = (x337|(x338<(x339|x340)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x342 = UINT16_MAX;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = -1;
	volatile int64_t t85 = 946023141457LL;

	t85 = (x341|(x342<(x343|x344)));

	if (t85 != 2843155082713LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	uint32_t x346 = 0U;

	t86 = (x345|(x346<(x347|x348)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x349 = 45U;
	uint16_t x351 = UINT16_MAX;
	int32_t x352 = INT32_MIN;
	static int32_t t87 = -114;

	t87 = (x349|(x350<(x351|x352)));

	if (t87 != 45) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x354 = 11LLU;
	uint8_t x356 = 5U;
	volatile int32_t t88 = 1305;

	t88 = (x353|(x354<(x355|x356)));

	if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	static int16_t x358 = -20;
	volatile uint16_t x359 = 179U;
	uint16_t x360 = UINT16_MAX;
	int32_t t89 = 98;

	t89 = (x357|(x358<(x359|x360)));

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -25475085495LL;
	int64_t t90 = 199198207098204LL;

	t90 = (x361|(x362<(x363|x364)));

	if (t90 != -25475085495LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	int8_t x366 = INT8_MAX;
	int16_t x368 = INT16_MIN;
	static int32_t t91 = 1456502;

	t91 = (x365|(x366<(x367|x368)));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = UINT64_MAX;
	uint8_t x370 = 6U;
	static int64_t x371 = 208LL;
	volatile int32_t x372 = INT32_MAX;
	uint64_t t92 = UINT64_MAX;

	t92 = (x369|(x370<(x371|x372)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int32_t x374 = -110547692;
	int8_t x375 = -3;
	static int32_t t93 = 829;

	t93 = (x373|(x374<(x375|x376)));

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x379 = -1;
	volatile int8_t x380 = 48;
	volatile int32_t t94 = -480659;

	t94 = (x377|(x378<(x379|x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MIN;
	int16_t x382 = 4;
	uint8_t x383 = UINT8_MAX;
	int64_t x384 = INT64_MIN;
	volatile int32_t t95 = INT32_MIN;

	t95 = (x381|(x382<(x383|x384)));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -22;
	static int64_t x386 = 8668726507LL;
	volatile uint64_t x387 = 216536794142599LLU;
	uint64_t x388 = 100682586720723606LLU;

	t96 = (x385|(x386<(x387|x388)));

	if (t96 != -21) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = INT8_MAX;
	int8_t x392 = INT8_MIN;

	t97 = (x389|(x390<(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = 579038729975237LL;
	uint32_t x394 = 3U;
	uint32_t x395 = 2U;
	int8_t x396 = -1;
	int64_t t98 = 198961520343103900LL;

	t98 = (x393|(x394<(x395|x396)));

	if (t98 != 579038729975237LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x397 = 2U;
	int16_t x398 = 1162;
	int32_t x399 = -1;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t99 = -7985;

	t99 = (x397|(x398<(x399|x400)));

	if (t99 != 2) { NG(); } else { ; }
	
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

