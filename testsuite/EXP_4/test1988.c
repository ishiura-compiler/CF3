#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 867U;
static uint32_t x3 = UINT32_MAX;
int32_t x13 = INT32_MAX;
int16_t x14 = INT16_MAX;
int8_t x16 = -14;
static volatile int32_t x23 = -33;
uint64_t x24 = 3015185LLU;
volatile uint64_t t6 = 26LLU;
static int8_t x31 = INT8_MAX;
volatile int8_t x38 = INT8_MIN;
int32_t t9 = 64300;
int8_t x49 = INT8_MAX;
volatile int8_t x50 = INT8_MIN;
uint32_t x51 = 29U;
uint32_t x55 = UINT32_MAX;
int16_t x56 = INT16_MAX;
static int32_t x57 = INT32_MIN;
static int8_t x59 = INT8_MIN;
int32_t t14 = INT32_MIN;
static int8_t x63 = INT8_MAX;
int8_t x64 = INT8_MIN;
uint64_t t15 = 284882280430687LLU;
int64_t x68 = 605814477456LL;
volatile int32_t t16 = -116688;
int64_t x73 = INT64_MIN;
uint32_t x80 = 1010U;
int32_t x81 = INT32_MAX;
static int32_t t20 = INT32_MAX;
volatile uint32_t x85 = 8998U;
int32_t t22 = 195;
volatile uint64_t x95 = 1030719LLU;
volatile int64_t x96 = -691193105515806094LL;
int64_t t24 = INT64_MIN;
volatile int32_t t25 = -1;
static uint16_t x108 = 379U;
volatile int32_t t27 = 504629;
uint64_t x127 = 274699538097942LLU;
int32_t t31 = 23134;
uint64_t x133 = 64524686382LLU;
int8_t x136 = -4;
volatile uint64_t x144 = UINT64_MAX;
volatile uint32_t t39 = 100732786U;
static int32_t x162 = -1;
int64_t t41 = -1034529150184656LL;
int64_t x175 = INT64_MIN;
volatile uint64_t t43 = 68997543203LLU;
static int64_t x180 = INT64_MIN;
int32_t x181 = INT32_MIN;
int64_t x182 = INT64_MAX;
int64_t x196 = -1LL;
int32_t t48 = -352650727;
uint32_t x197 = 320176U;
int64_t x198 = INT64_MIN;
static volatile uint32_t t49 = 15276U;
int64_t t50 = -75084723135051937LL;
int64_t t51 = INT64_MIN;
static volatile int8_t x211 = -1;
volatile int64_t x212 = 8641595153114191LL;
uint16_t x213 = UINT16_MAX;
int16_t x219 = INT16_MIN;
int64_t x220 = 358713292LL;
uint8_t x224 = UINT8_MAX;
uint32_t x225 = UINT32_MAX;
int64_t x227 = -28722684683705094LL;
int8_t x228 = -1;
volatile int32_t x232 = -1;
int8_t x233 = INT8_MAX;
static int16_t x249 = -146;
int16_t x252 = -1;
volatile uint64_t x256 = 1025815046679677LLU;
int64_t x262 = INT64_MIN;
int32_t t65 = -527105;
volatile uint16_t x268 = UINT16_MAX;
int16_t x269 = 1;
uint32_t t69 = UINT32_MAX;
volatile int32_t t70 = 6380;
static int16_t x285 = -5;
volatile int32_t t72 = -7691762;
volatile int64_t t73 = -78125LL;
int32_t t74 = 1;
static int32_t x310 = 357697229;
int8_t x313 = 13;
static int32_t t78 = -82741584;
static int16_t x321 = INT16_MIN;
int8_t x323 = INT8_MIN;
volatile int16_t x324 = INT16_MIN;
int64_t x325 = 1805LL;
int64_t x334 = INT64_MIN;
static int8_t x338 = -1;
int64_t x344 = INT64_MIN;
static int32_t x345 = -282411373;
int64_t x347 = INT64_MIN;
volatile int32_t x352 = INT32_MIN;
volatile uint64_t t87 = 757023915140323663LLU;
uint16_t x355 = 973U;
int32_t t90 = 1;
static int64_t x365 = INT64_MAX;
int32_t x368 = INT32_MIN;
volatile int8_t x369 = -1;
int16_t x371 = 537;
int16_t x373 = INT16_MIN;
static int16_t x375 = -1;
uint16_t x386 = UINT16_MAX;
static int8_t x395 = INT8_MIN;
int32_t x397 = INT32_MIN;
int64_t x399 = -1LL;


void f0(void) {
	uint32_t x1 = 32340598U;
	int16_t x4 = 3652;
	volatile uint32_t t0 = 19763U;

	t0 = (x1|(x2<=(x3|x4)));

	if (t0 != 32340599U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int8_t x6 = -1;
	uint64_t x7 = 211507589LLU;
	static int16_t x8 = INT16_MIN;
	volatile int64_t t1 = INT64_MIN;

	t1 = (x5|(x6<=(x7|x8)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile uint64_t x10 = 3677304972LLU;
	static int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 277918;

	t2 = (x9|(x10<=(x11|x12)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x15 = -46LL;
	volatile int32_t t3 = INT32_MAX;

	t3 = (x13|(x14<=(x15|x16)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MAX;
	int16_t x19 = INT16_MIN;
	static int8_t x20 = INT8_MIN;
	volatile int32_t t4 = INT32_MIN;

	t4 = (x17|(x18<=(x19|x20)));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = UINT64_MAX;
	int8_t x22 = -9;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x21|(x22<=(x23|x24)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 16267LLU;
	int8_t x26 = INT8_MAX;
	int8_t x27 = INT8_MIN;
	volatile int32_t x28 = INT32_MAX;

	t6 = (x25|(x26<=(x27|x28)));

	if (t6 != 16267LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int64_t x30 = 11203105LL;
	static int16_t x32 = INT16_MIN;
	int64_t t7 = INT64_MAX;

	t7 = (x29|(x30<=(x31|x32)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -603;
	static int8_t x34 = 1;
	volatile int32_t x35 = INT32_MAX;
	static int16_t x36 = -2770;
	volatile int32_t t8 = 3953;

	t8 = (x33|(x34<=(x35|x36)));

	if (t8 != -603) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 5U;
	volatile int32_t x39 = INT32_MAX;
	static uint16_t x40 = UINT16_MAX;

	t9 = (x37|(x38<=(x39|x40)));

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int16_t x42 = -191;
	uint16_t x43 = 3146U;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = INT32_MIN;

	t10 = (x41|(x42<=(x43|x44)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -7;
	volatile int64_t x46 = 177763736687LL;
	volatile int64_t x47 = -37309084214859LL;
	static uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = 6678;

	t11 = (x45|(x46<=(x47|x48)));

	if (t11 != -7) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x52 = 1U;
	int32_t t12 = 398517579;

	t12 = (x49|(x50<=(x51|x52)));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 29158U;
	volatile int64_t x54 = INT64_MAX;
	static volatile int32_t t13 = -28612;

	t13 = (x53|(x54<=(x55|x56)));

	if (t13 != 29158) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = 2623;
	static int16_t x60 = INT16_MIN;

	t14 = (x57|(x58<=(x59|x60)));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 561609LLU;
	int32_t x62 = 51;

	t15 = (x61|(x62<=(x63|x64)));

	if (t15 != 561609LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	int16_t x66 = -1006;
	static int8_t x67 = -1;

	t16 = (x65|(x66<=(x67|x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 12;
	static int16_t x70 = INT16_MIN;
	uint64_t x71 = 2LLU;
	uint8_t x72 = 28U;
	volatile int32_t t17 = -2;

	t17 = (x69|(x70<=(x71|x72)));

	if (t17 != 12) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = UINT16_MAX;
	int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MAX;
	int64_t t18 = INT64_MIN;

	t18 = (x73|(x74<=(x75|x76)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 1;
	int64_t x78 = 8167LL;
	uint8_t x79 = 5U;
	static volatile int32_t t19 = -18;

	t19 = (x77|(x78<=(x79|x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x82 = INT8_MIN;
	static uint16_t x83 = 2052U;
	volatile uint32_t x84 = 24U;

	t20 = (x81|(x82<=(x83|x84)));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = 405079543;
	int16_t x87 = INT16_MAX;
	int8_t x88 = INT8_MAX;
	static uint32_t t21 = 3304U;

	t21 = (x85|(x86<=(x87|x88)));

	if (t21 != 8998U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	static int16_t x90 = -1;
	int64_t x91 = INT64_MIN;
	uint64_t x92 = 14669088144743310LLU;

	t22 = (x89|(x90<=(x91|x92)));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	int64_t x94 = -1LL;
	volatile int32_t t23 = INT32_MIN;

	t23 = (x93|(x94<=(x95|x96)));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = 14;
	volatile uint32_t x99 = UINT32_MAX;
	int64_t x100 = INT64_MIN;

	t24 = (x97|(x98<=(x99|x100)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	uint16_t x102 = UINT16_MAX;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;

	t25 = (x101|(x102<=(x103|x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	static int16_t x106 = INT16_MIN;
	uint16_t x107 = 40U;
	volatile int32_t t26 = 485556;

	t26 = (x105|(x106<=(x107|x108)));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 12;
	static volatile int8_t x110 = INT8_MAX;
	int8_t x111 = -1;
	int32_t x112 = INT32_MIN;

	t27 = (x109|(x110<=(x111|x112)));

	if (t27 != 12) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 5U;
	volatile int16_t x114 = 126;
	static uint64_t x115 = 1271907938LLU;
	static volatile int32_t x116 = INT32_MIN;
	int32_t t28 = 0;

	t28 = (x113|(x114<=(x115|x116)));

	if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 17;
	uint16_t x118 = 938U;
	static int64_t x119 = -1LL;
	static int32_t x120 = INT32_MIN;
	static volatile int32_t t29 = 218;

	t29 = (x117|(x118<=(x119|x120)));

	if (t29 != 17) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MAX;
	volatile int64_t x123 = INT64_MIN;
	static volatile int64_t x124 = INT64_MIN;
	int64_t t30 = INT64_MIN;

	t30 = (x121|(x122<=(x123|x124)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 21;
	static int8_t x126 = INT8_MIN;
	int16_t x128 = -1;

	t31 = (x125|(x126<=(x127|x128)));

	if (t31 != 21) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static int32_t x130 = -1;
	uint8_t x131 = 5U;
	uint8_t x132 = 3U;
	int64_t t32 = -3383696864973LL;

	t32 = (x129|(x130<=(x131|x132)));

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x134 = UINT32_MAX;
	static int8_t x135 = INT8_MAX;
	uint64_t t33 = 39LLU;

	t33 = (x133|(x134<=(x135|x136)));

	if (t33 != 64524686383LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 2U;
	volatile int8_t x138 = 17;
	volatile int32_t x139 = 1883;
	int16_t x140 = 8655;
	int32_t t34 = 31;

	t34 = (x137|(x138<=(x139|x140)));

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MAX;
	int8_t x143 = -1;
	volatile int32_t t35 = -344327614;

	t35 = (x141|(x142<=(x143|x144)));

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MIN;
	int64_t x146 = -15LL;
	int16_t x147 = INT16_MAX;
	static int8_t x148 = 10;
	volatile int64_t t36 = -260546119847LL;

	t36 = (x145|(x146<=(x147|x148)));

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile uint64_t x150 = 2LLU;
	uint8_t x151 = UINT8_MAX;
	volatile int16_t x152 = -1;
	static int32_t t37 = -3357807;

	t37 = (x149|(x150<=(x151|x152)));

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 1U;
	int8_t x154 = INT8_MAX;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = 0LLU;
	volatile int32_t t38 = -130133;

	t38 = (x153|(x154<=(x155|x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = 617U;
	uint8_t x158 = 20U;
	static int16_t x159 = -45;
	int32_t x160 = -192048636;

	t39 = (x157|(x158<=(x159|x160)));

	if (t39 != 617U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 122U;
	uint64_t x163 = 4715624012373LLU;
	int16_t x164 = -366;
	volatile int32_t t40 = 725;

	t40 = (x161|(x162<=(x163|x164)));

	if (t40 != 122) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	static int32_t x166 = INT32_MIN;
	int32_t x167 = -1;
	static volatile int16_t x168 = 0;

	t41 = (x165|(x166<=(x167|x168)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 3U;
	int32_t x170 = INT32_MIN;
	int16_t x171 = -1;
	static uint64_t x172 = 49648LLU;
	volatile int32_t t42 = -19208;

	t42 = (x169|(x170<=(x171|x172)));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 2028508LLU;
	uint32_t x174 = 8491816U;
	volatile uint8_t x176 = UINT8_MAX;

	t43 = (x173|(x174<=(x175|x176)));

	if (t43 != 2028508LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 61U;
	volatile int64_t x178 = INT64_MIN;
	uint64_t x179 = 7638709069LLU;
	volatile int32_t t44 = 162086491;

	t44 = (x177|(x178<=(x179|x180)));

	if (t44 != 61) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x183 = INT32_MIN;
	volatile int8_t x184 = INT8_MAX;
	volatile int32_t t45 = INT32_MIN;

	t45 = (x181|(x182<=(x183|x184)));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 3U;
	static int8_t x186 = 29;
	static int64_t x187 = -3249128766041892LL;
	uint32_t x188 = 51775U;
	int32_t t46 = 1;

	t46 = (x185|(x186<=(x187|x188)));

	if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = 6;
	int16_t x190 = 1;
	volatile uint8_t x191 = 16U;
	uint32_t x192 = UINT32_MAX;
	static int32_t t47 = 2401939;

	t47 = (x189|(x190<=(x191|x192)));

	if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = -1;
	volatile uint32_t x194 = 213409055U;
	int8_t x195 = INT8_MIN;

	t48 = (x193|(x194<=(x195|x196)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x199 = INT64_MIN;
	int8_t x200 = -1;

	t49 = (x197|(x198<=(x199|x200)));

	if (t49 != 320177U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 46516575724LL;
	int8_t x202 = INT8_MIN;
	int32_t x203 = -17;
	static uint64_t x204 = 115942LLU;

	t50 = (x201|(x202<=(x203|x204)));

	if (t50 != 46516575725LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	static volatile int16_t x206 = -9048;
	int32_t x207 = -46244668;
	uint64_t x208 = 4586LLU;

	t51 = (x205|(x206<=(x207|x208)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 194935001U;
	int32_t x210 = 2;
	volatile uint32_t t52 = 22U;

	t52 = (x209|(x210<=(x211|x212)));

	if (t52 != 194935001U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = 100735364LL;
	static uint32_t x216 = 125724U;
	int32_t t53 = 4;

	t53 = (x213|(x214<=(x215|x216)));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = 118;
	int64_t x218 = -1LL;
	int32_t t54 = -4;

	t54 = (x217|(x218<=(x219|x220)));

	if (t54 != 118) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int32_t x222 = -106;
	int64_t x223 = INT64_MIN;
	int32_t t55 = -114744877;

	t55 = (x221|(x222<=(x223|x224)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MAX;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x225|(x226<=(x227|x228)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	static int64_t x230 = 175622LL;
	volatile uint64_t x231 = UINT64_MAX;
	int32_t t57 = -9;

	t57 = (x229|(x230<=(x231|x232)));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = INT64_MIN;
	int32_t x235 = -208440367;
	volatile int16_t x236 = -6509;
	volatile int32_t t58 = 796;

	t58 = (x233|(x234<=(x235|x236)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	volatile int8_t x238 = INT8_MIN;
	int32_t x239 = INT32_MIN;
	static volatile int64_t x240 = -1LL;
	int32_t t59 = 403;

	t59 = (x237|(x238<=(x239|x240)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = -1;
	int64_t x242 = 383947022794LL;
	static volatile int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -10;

	t60 = (x241|(x242<=(x243|x244)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -310121;
	int32_t x246 = INT32_MIN;
	int16_t x247 = -1;
	static int64_t x248 = INT64_MAX;
	static volatile int32_t t61 = -2274664;

	t61 = (x245|(x246<=(x247|x248)));

	if (t61 != -310121) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x250 = INT16_MIN;
	uint32_t x251 = 3U;
	int32_t t62 = 781760934;

	t62 = (x249|(x250<=(x251|x252)));

	if (t62 != -145) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 24;
	uint8_t x254 = 6U;
	int64_t x255 = INT64_MIN;
	volatile int32_t t63 = -13015;

	t63 = (x253|(x254<=(x255|x256)));

	if (t63 != 25) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	int64_t x258 = INT64_MIN;
	int16_t x259 = -1;
	static int32_t x260 = -1;
	volatile int32_t t64 = 1;

	t64 = (x257|(x258<=(x259|x260)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 740498;
	int64_t x263 = INT64_MIN;
	uint32_t x264 = UINT32_MAX;

	t65 = (x261|(x262<=(x263|x264)));

	if (t65 != 740499) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 15U;
	int64_t x266 = INT64_MAX;
	static uint32_t x267 = 1205906U;
	int32_t t66 = -1092361;

	t66 = (x265|(x266<=(x267|x268)));

	if (t66 != 15) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x270 = UINT32_MAX;
	uint32_t x271 = UINT32_MAX;
	int64_t x272 = -1LL;
	int32_t t67 = 113863005;

	t67 = (x269|(x270<=(x271|x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 105U;
	static uint16_t x274 = UINT16_MAX;
	uint8_t x275 = 0U;
	static int64_t x276 = INT64_MAX;
	int32_t t68 = 3;

	t68 = (x273|(x274<=(x275|x276)));

	if (t68 != 105) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	static int8_t x278 = INT8_MIN;
	uint64_t x279 = 7770279429LLU;
	int32_t x280 = INT32_MAX;

	t69 = (x277|(x278<=(x279|x280)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MIN;
	static int16_t x282 = -1;
	int64_t x283 = INT64_MIN;
	int16_t x284 = 42;

	t70 = (x281|(x282<=(x283|x284)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = -1;
	int32_t x287 = 471918824;
	static volatile int64_t x288 = INT64_MIN;
	static int32_t t71 = 227884;

	t71 = (x285|(x286<=(x287|x288)));

	if (t71 != -5) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -4902;
	uint32_t x290 = 1027015U;
	int8_t x291 = INT8_MIN;
	uint64_t x292 = UINT64_MAX;

	t72 = (x289|(x290<=(x291|x292)));

	if (t72 != -4901) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = 113LL;
	int64_t x294 = INT64_MIN;
	int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MAX;

	t73 = (x293|(x294<=(x295|x296)));

	if (t73 != 113LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = UINT8_MAX;
	int64_t x298 = INT64_MIN;
	volatile uint16_t x299 = 7U;
	volatile int8_t x300 = -28;

	t74 = (x297|(x298<=(x299|x300)));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	int16_t x302 = 0;
	static uint16_t x303 = 10U;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t75 = -261952;

	t75 = (x301|(x302<=(x303|x304)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	volatile uint64_t x306 = 258624885158443LLU;
	volatile int32_t x307 = INT32_MIN;
	static uint64_t x308 = 675588666839818911LLU;
	static int64_t t76 = INT64_MAX;

	t76 = (x305|(x306<=(x307|x308)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 15;
	uint8_t x311 = 0U;
	static int32_t x312 = INT32_MIN;
	int32_t t77 = -5217602;

	t77 = (x309|(x310<=(x311|x312)));

	if (t77 != 15) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = 20553;
	int64_t x316 = INT64_MAX;

	t78 = (x313|(x314<=(x315|x316)));

	if (t78 != 13) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -14;
	int32_t x318 = INT32_MAX;
	int16_t x319 = -1;
	volatile int32_t x320 = INT32_MIN;
	volatile int32_t t79 = 5;

	t79 = (x317|(x318<=(x319|x320)));

	if (t79 != -14) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = 1548547336015LLU;
	volatile int32_t t80 = -13;

	t80 = (x321|(x322<=(x323|x324)));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x326 = UINT16_MAX;
	uint8_t x327 = UINT8_MAX;
	volatile int32_t x328 = INT32_MIN;
	static int64_t t81 = -91694LL;

	t81 = (x325|(x326<=(x327|x328)));

	if (t81 != 1805LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	volatile uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MIN;
	int16_t x332 = 38;
	static int64_t t82 = 0LL;

	t82 = (x329|(x330<=(x331|x332)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x333 = 77147U;
	int32_t x335 = -1;
	int8_t x336 = -1;
	uint32_t t83 = 186U;

	t83 = (x333|(x334<=(x335|x336)));

	if (t83 != 77147U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 6316U;
	int64_t x339 = INT64_MAX;
	static uint32_t x340 = UINT32_MAX;
	static volatile int32_t t84 = 1;

	t84 = (x337|(x338<=(x339|x340)));

	if (t84 != 6317) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = INT32_MAX;
	int16_t x342 = -1;
	int8_t x343 = INT8_MIN;
	int32_t t85 = INT32_MAX;

	t85 = (x341|(x342<=(x343|x344)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = UINT64_MAX;
	int32_t x348 = INT32_MAX;
	int32_t t86 = -9375323;

	t86 = (x345|(x346<=(x347|x348)));

	if (t86 != -282411373) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 16080LLU;
	int8_t x350 = -46;
	int16_t x351 = INT16_MIN;

	t87 = (x349|(x350<=(x351|x352)));

	if (t87 != 16080LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	static uint64_t x354 = 5801LLU;
	int16_t x356 = 501;
	volatile int32_t t88 = -423454;

	t88 = (x353|(x354<=(x355|x356)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	int32_t x358 = -29;
	static uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MAX;
	volatile int32_t t89 = 19059531;

	t89 = (x357|(x358<=(x359|x360)));

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 6U;
	static int32_t x362 = INT32_MAX;
	int64_t x363 = INT64_MAX;
	static int64_t x364 = -1024294814491573779LL;

	t90 = (x361|(x362<=(x363|x364)));

	if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x366 = 873;
	int16_t x367 = INT16_MIN;
	int64_t t91 = INT64_MAX;

	t91 = (x365|(x366<=(x367|x368)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = 1;
	volatile int32_t x372 = -7;
	int32_t t92 = 757;

	t92 = (x369|(x370<=(x371|x372)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = INT8_MIN;
	static uint64_t x376 = 10597483153329356LLU;
	int32_t t93 = 774;

	t93 = (x373|(x374<=(x375|x376)));

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	uint16_t x378 = UINT16_MAX;
	int32_t x379 = INT32_MIN;
	int64_t x380 = -3792502087949LL;
	volatile int64_t t94 = INT64_MIN;

	t94 = (x377|(x378<=(x379|x380)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	static uint8_t x382 = 6U;
	int64_t x383 = -84LL;
	int32_t x384 = INT32_MIN;
	static volatile uint64_t t95 = UINT64_MAX;

	t95 = (x381|(x382<=(x383|x384)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 56079U;
	int8_t x387 = INT8_MIN;
	uint8_t x388 = 3U;
	static uint32_t t96 = 6U;

	t96 = (x385|(x386<=(x387|x388)));

	if (t96 != 56079U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 159U;
	int8_t x390 = INT8_MAX;
	uint64_t x391 = 13682865174LLU;
	uint16_t x392 = 28U;
	static int32_t t97 = -389913198;

	t97 = (x389|(x390<=(x391|x392)));

	if (t97 != 159) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = 1;
	static uint8_t x394 = UINT8_MAX;
	int32_t x396 = -1;
	int32_t t98 = 1005;

	t98 = (x393|(x394<=(x395|x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x398 = INT32_MAX;
	volatile uint64_t x400 = 58570LLU;
	volatile int32_t t99 = 184899;

	t99 = (x397|(x398<=(x399|x400)));

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

