#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
int32_t t0 = 241;
static int8_t x15 = -6;
uint8_t x20 = UINT8_MAX;
volatile int64_t x23 = -7911255667378LL;
int64_t t5 = -159721261520775LL;
volatile uint64_t t6 = 431427986235LLU;
int16_t x31 = INT16_MIN;
uint8_t x32 = UINT8_MAX;
uint32_t x36 = 237101756U;
int16_t x37 = 962;
uint8_t x45 = UINT8_MAX;
uint64_t t12 = 1LLU;
volatile int32_t t13 = -752873;
uint32_t x59 = UINT32_MAX;
volatile int64_t x60 = 2820740104964076089LL;
uint64_t x61 = 30526854LLU;
int32_t x71 = -1;
volatile int32_t x73 = INT32_MIN;
int16_t x74 = INT16_MIN;
int64_t x76 = INT64_MAX;
int16_t x78 = -1;
static int32_t x83 = -3451405;
volatile int64_t t20 = 556171167573463747LL;
int8_t x98 = INT8_MIN;
uint16_t x107 = 4012U;
static int8_t x113 = 5;
static int64_t t28 = -1LL;
static uint8_t x118 = UINT8_MAX;
static uint8_t x123 = UINT8_MAX;
int16_t x137 = INT16_MIN;
static int8_t x140 = INT8_MIN;
uint8_t x154 = 28U;
uint16_t x159 = UINT16_MAX;
static int16_t x160 = INT16_MIN;
int16_t x163 = INT16_MAX;
static int8_t x166 = INT8_MAX;
int8_t x167 = INT8_MIN;
static volatile int16_t x168 = 0;
static int8_t x175 = 0;
static volatile int64_t x179 = INT64_MAX;
uint64_t x182 = 51LLU;
static uint64_t x189 = 1805400533LLU;
int64_t x194 = -1LL;
int8_t x196 = INT8_MAX;
int64_t x199 = 4634359617LL;
int8_t x201 = INT8_MAX;
int16_t x203 = 24;
volatile uint64_t t52 = 2025445LLU;
volatile int8_t x214 = INT8_MIN;
int8_t x215 = 30;
int32_t x224 = INT32_MIN;
volatile int64_t x227 = -59238031158LL;
uint16_t x237 = 1116U;
uint16_t x246 = 5U;
static uint64_t x248 = 10LLU;
volatile uint64_t t61 = 489872704486LLU;
static volatile int32_t x253 = INT32_MIN;
volatile uint32_t x261 = 11U;
int16_t x262 = -1;
static volatile uint64_t x275 = 586059311721561750LLU;
uint16_t x281 = 3U;
int32_t t70 = -508140076;
int8_t x294 = INT8_MIN;
volatile uint64_t t73 = UINT64_MAX;
int16_t x297 = INT16_MIN;
volatile int64_t x305 = INT64_MAX;
volatile int16_t x307 = INT16_MAX;
uint8_t x309 = 43U;
volatile int64_t x311 = INT64_MIN;
int8_t x314 = 1;
uint64_t x320 = UINT64_MAX;
volatile uint64_t x327 = 32349333350656LLU;
int16_t x336 = INT16_MIN;
int8_t x342 = INT8_MAX;
int32_t x346 = 104711847;
static uint64_t t89 = 1946202LLU;
int64_t x363 = 12002164852207330LL;
uint16_t x366 = 184U;
static uint32_t x367 = UINT32_MAX;
static int32_t t92 = -496985;
static int16_t x375 = -7939;
static int64_t t96 = 9172LL;
int64_t t97 = INT64_MIN;
volatile uint64_t x393 = 574715516544LLU;
uint32_t x394 = 41514U;
uint64_t x395 = 6696567LLU;
int8_t x396 = 22;
int32_t x398 = -1;


void f0(void) {
	uint8_t x1 = 10U;
	int16_t x2 = INT16_MIN;
	uint8_t x4 = 5U;

	t0 = (x1|(x2%(x3|x4)));

	if (t0 != -5) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -19;
	uint16_t x6 = 3U;
	int32_t x7 = INT32_MAX;
	int32_t x8 = 377971;
	volatile int32_t t1 = 21;

	t1 = (x5|(x6%(x7|x8)));

	if (t1 != -17) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int64_t x10 = -375LL;
	static volatile int32_t x11 = -1;
	int32_t x12 = -1;
	static volatile int64_t t2 = -4187492772850LL;

	t2 = (x9|(x10%(x11|x12)));

	if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -99;
	static volatile int32_t x14 = -16322421;
	volatile uint32_t x16 = UINT32_MAX;
	volatile uint32_t t3 = 38287947U;

	t3 = (x13|(x14%(x15|x16)));

	if (t3 != 4294967199U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = UINT32_MAX;
	uint8_t x18 = 27U;
	int16_t x19 = 359;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (x17|(x18%(x19|x20)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int32_t x22 = INT32_MIN;
	uint32_t x24 = 65U;

	t5 = (x21|(x22%(x23|x24)));

	if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 2U;
	uint64_t x26 = UINT64_MAX;
	int16_t x27 = INT16_MAX;
	static uint8_t x28 = 60U;

	t6 = (x25|(x26%(x27|x28)));

	if (t6 != 15LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	uint64_t x30 = UINT64_MAX;
	uint64_t t7 = UINT64_MAX;

	t7 = (x29|(x30%(x31|x32)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	static volatile uint16_t x35 = UINT16_MAX;
	static volatile uint64_t t8 = UINT64_MAX;

	t8 = (x33|(x34%(x35|x36)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -1;
	volatile int64_t x39 = -483LL;
	volatile int64_t x40 = INT64_MAX;
	int64_t t9 = 367957476208373619LL;

	t9 = (x37|(x38%(x39|x40)));

	if (t9 != 962LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	int64_t x42 = 560201637924441LL;
	static int16_t x43 = INT16_MIN;
	volatile int32_t x44 = -4077128;
	static int64_t t10 = 1378702474467LL;

	t10 = (x41|(x42%(x43|x44)));

	if (t10 != 2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -1;
	int64_t x47 = 160102905623LL;
	static volatile uint16_t x48 = UINT16_MAX;
	volatile int64_t t11 = 19889LL;

	t11 = (x45|(x46%(x47|x48)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	static int32_t x50 = 30610;
	uint64_t x51 = 4LLU;
	static int32_t x52 = -1;

	t12 = (x49|(x50%(x51|x52)));

	if (t12 != 2147483647LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	static int16_t x54 = -1;
	uint16_t x55 = 72U;
	uint16_t x56 = 1U;

	t13 = (x53|(x54%(x55|x56)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int16_t x58 = 209;
	int64_t t14 = -1931557824336LL;

	t14 = (x57|(x58%(x59|x60)));

	if (t14 != -9223372036854775599LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = 59U;
	uint8_t x63 = UINT8_MAX;
	int64_t x64 = -1LL;
	uint64_t t15 = 350LLU;

	t15 = (x61|(x62%(x63|x64)));

	if (t15 != 30526854LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -32;
	volatile int64_t x66 = -27LL;
	uint16_t x67 = 0U;
	static uint64_t x68 = UINT64_MAX;
	uint64_t t16 = 495555LLU;

	t16 = (x65|(x66%(x67|x68)));

	if (t16 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 15U;
	uint32_t x70 = UINT32_MAX;
	uint8_t x72 = 18U;
	static volatile uint32_t t17 = 594U;

	t17 = (x69|(x70%(x71|x72)));

	if (t17 != 15U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x75 = UINT8_MAX;
	int64_t t18 = -33209683141891276LL;

	t18 = (x73|(x74%(x75|x76)));

	if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 192002613222121533LLU;
	int32_t x79 = INT32_MAX;
	uint32_t x80 = UINT32_MAX;
	static volatile uint64_t t19 = 1494004911LLU;

	t19 = (x77|(x78%(x79|x80)));

	if (t19 != 192002613222121533LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 14U;
	int64_t x82 = INT64_MIN;
	int8_t x84 = -1;

	t20 = (x81|(x82%(x83|x84)));

	if (t20 != 14LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = 55112;
	int64_t x86 = INT64_MIN;
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = 1;
	uint64_t t21 = 199783399317164064LLU;

	t21 = (x85|(x86%(x87|x88)));

	if (t21 != 9223372036854830920LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = -21;
	static int8_t x90 = INT8_MAX;
	uint64_t x91 = 4378515011932878LLU;
	int64_t x92 = -12193140382738654LL;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (x89|(x90%(x91|x92)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 33111824U;
	static int32_t x94 = INT32_MIN;
	int8_t x95 = 11;
	int64_t x96 = INT64_MAX;
	volatile int64_t t23 = -13600LL;

	t23 = (x93|(x94%(x95|x96)));

	if (t23 != -2114371824LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MAX;
	volatile int64_t x99 = 2757927296818394LL;
	int8_t x100 = 0;
	volatile int64_t t24 = -12724453009094767LL;

	t24 = (x97|(x98%(x99|x100)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	volatile int32_t x103 = INT32_MAX;
	static int32_t x104 = INT32_MIN;
	int64_t t25 = 2519LL;

	t25 = (x101|(x102%(x103|x104)));

	if (t25 != -128LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -286605296;
	int32_t x106 = 2225430;
	int8_t x108 = INT8_MIN;
	int32_t t26 = 830169;

	t26 = (x105|(x106%(x107|x108)));

	if (t26 != -286605294) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = 26;
	static volatile int32_t x110 = -1;
	volatile uint8_t x111 = 73U;
	static uint32_t x112 = 604U;
	static volatile uint32_t t27 = 3856055U;

	t27 = (x109|(x110%(x111|x112)));

	if (t27 != 318U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x114 = INT64_MIN;
	static uint16_t x115 = 2456U;
	int16_t x116 = INT16_MIN;

	t28 = (x113|(x114%(x115|x116)));

	if (t28 != -2955LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	uint16_t x119 = 1945U;
	uint8_t x120 = UINT8_MAX;
	int32_t t29 = INT32_MAX;

	t29 = (x117|(x118%(x119|x120)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	static uint16_t x122 = 0U;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = INT32_MIN;

	t30 = (x121|(x122%(x123|x124)));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 3LLU;
	int64_t x126 = -1LL;
	uint64_t x127 = 62185273935LLU;
	int8_t x128 = INT8_MIN;
	uint64_t t31 = 11238938063468929LLU;

	t31 = (x125|(x126%(x127|x128)));

	if (t31 != 51LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x129 = INT8_MIN;
	static volatile int64_t x130 = INT64_MIN;
	int16_t x131 = 21;
	int8_t x132 = -1;
	volatile int64_t t32 = 42LL;

	t32 = (x129|(x130%(x131|x132)));

	if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	static int8_t x134 = -15;
	static int16_t x135 = 21;
	int16_t x136 = INT16_MAX;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = (x133|(x134%(x135|x136)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x138 = 3U;
	int8_t x139 = 4;
	static volatile int32_t t34 = 64325046;

	t34 = (x137|(x138%(x139|x140)));

	if (t34 != -32765) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 16LLU;
	int8_t x142 = -1;
	static uint64_t x143 = 3545514LLU;
	static volatile uint16_t x144 = UINT16_MAX;
	uint64_t t35 = 3LLU;

	t35 = (x141|(x142%(x143|x144)));

	if (t35 != 3416883LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = -48;
	int32_t x146 = -1;
	int64_t x147 = 205510465419LL;
	uint8_t x148 = UINT8_MAX;
	int64_t t36 = -10722526463992LL;

	t36 = (x145|(x146%(x147|x148)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 141026LL;
	volatile uint8_t x150 = UINT8_MAX;
	int8_t x151 = -1;
	static uint64_t x152 = 2176784848122510LLU;
	uint64_t t37 = 16624641371653LLU;

	t37 = (x149|(x150%(x151|x152)));

	if (t37 != 141055LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x153 = INT8_MIN;
	static volatile int32_t x155 = INT32_MIN;
	volatile uint64_t x156 = 37123864420LLU;
	volatile uint64_t t38 = 734382LLU;

	t38 = (x153|(x154%(x155|x156)));

	if (t38 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 14;
	int8_t x158 = 1;
	int32_t t39 = 560331;

	t39 = (x157|(x158%(x159|x160)));

	if (t39 != 14) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -3;
	static volatile int8_t x162 = 3;
	volatile uint16_t x164 = UINT16_MAX;
	int32_t t40 = -1;

	t40 = (x161|(x162%(x163|x164)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x165|(x166%(x167|x168)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x169 = 1U;
	int8_t x170 = 56;
	uint32_t x171 = UINT32_MAX;
	volatile int32_t x172 = INT32_MAX;
	uint32_t t42 = 402968678U;

	t42 = (x169|(x170%(x171|x172)));

	if (t42 != 57U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	static int16_t x174 = INT16_MIN;
	volatile int32_t x176 = -6710;
	volatile int32_t t43 = 821777;

	t43 = (x173|(x174%(x175|x176)));

	if (t43 != -5928) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = 36314LLU;
	int8_t x178 = INT8_MAX;
	uint8_t x180 = 0U;
	uint64_t t44 = 419212LLU;

	t44 = (x177|(x178%(x179|x180)));

	if (t44 != 36351LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 2;
	int16_t x183 = -1;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t45 = 59LLU;

	t45 = (x181|(x182%(x183|x184)));

	if (t45 != 51LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -329LL;
	int16_t x186 = -1;
	int16_t x187 = INT16_MIN;
	static volatile int64_t x188 = INT64_MAX;
	int64_t t46 = 4585449319LL;

	t46 = (x185|(x186%(x187|x188)));

	if (t46 != -329LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x190 = 5840486868093LLU;
	uint64_t x191 = UINT64_MAX;
	int32_t x192 = -24052;
	static volatile uint64_t t47 = 1764661LLU;

	t47 = (x189|(x190%(x191|x192)));

	if (t47 != 5841084038653LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = -9375039998994LL;
	int8_t x195 = INT8_MAX;
	volatile int64_t t48 = 211624880701576820LL;

	t48 = (x193|(x194%(x195|x196)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	uint64_t x198 = 97LLU;
	static volatile int32_t x200 = INT32_MIN;
	uint64_t t49 = 398731LLU;

	t49 = (x197|(x198%(x199|x200)));

	if (t49 != 4294967295LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x202 = 24U;
	int8_t x204 = INT8_MIN;
	int32_t t50 = 17;

	t50 = (x201|(x202%(x203|x204)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MAX;
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = INT8_MIN;
	uint64_t x208 = 25350899666634LLU;
	volatile uint64_t t51 = 3LLU;

	t51 = (x205|(x206%(x207|x208)));

	if (t51 != 255LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	uint16_t x210 = 3970U;
	volatile uint64_t x211 = UINT64_MAX;
	static uint64_t x212 = UINT64_MAX;

	t52 = (x209|(x210%(x211|x212)));

	if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int64_t x216 = INT64_MIN;
	int64_t t53 = -971473671415115379LL;

	t53 = (x213|(x214%(x215|x216)));

	if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 61U;
	int16_t x218 = 9466;
	volatile uint64_t x219 = 64418LLU;
	int16_t x220 = -4;
	static uint64_t t54 = 127927325LLU;

	t54 = (x217|(x218%(x219|x220)));

	if (t54 != 9471LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 1U;
	volatile int8_t x222 = INT8_MIN;
	static int8_t x223 = INT8_MAX;
	static int32_t t55 = 1;

	t55 = (x221|(x222%(x223|x224)));

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 6U;
	uint32_t x226 = UINT32_MAX;
	volatile uint8_t x228 = UINT8_MAX;
	volatile int64_t t56 = 1604894844LL;

	t56 = (x225|(x226%(x227|x228)));

	if (t56 != 4294967295LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = -66601228LL;
	static volatile int16_t x230 = INT16_MIN;
	uint8_t x231 = 10U;
	int16_t x232 = INT16_MIN;
	static volatile int64_t t57 = -15786LL;

	t57 = (x229|(x230%(x231|x232)));

	if (t57 != -10LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 33765U;
	uint16_t x234 = 4002U;
	int32_t x235 = -14916010;
	int16_t x236 = INT16_MAX;
	volatile uint32_t t58 = 1517230U;

	t58 = (x233|(x234%(x235|x236)));

	if (t58 != 36839U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x238 = 0U;
	uint32_t x239 = 187624U;
	volatile int64_t x240 = -1LL;
	int64_t t59 = 1086LL;

	t59 = (x237|(x238%(x239|x240)));

	if (t59 != 1116LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 168347213432LLU;
	static int64_t x242 = -1LL;
	int64_t x243 = -153015511LL;
	uint64_t x244 = 7611140974182LLU;
	static uint64_t t60 = 7649755095048969LLU;

	t60 = (x241|(x242%(x243|x244)));

	if (t60 != 168347229944LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	static int32_t x247 = 251911;

	t61 = (x245|(x246%(x247|x248)));

	if (t61 != 18446744071562067973LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 4015918105287LL;
	static volatile int16_t x250 = INT16_MIN;
	volatile int8_t x251 = INT8_MIN;
	volatile int32_t x252 = INT32_MIN;
	int64_t t62 = -433861088771581LL;

	t62 = (x249|(x250%(x251|x252)));

	if (t62 != 4015918105287LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = 52;
	int8_t x255 = INT8_MAX;
	static int8_t x256 = INT8_MAX;
	volatile int32_t t63 = 0;

	t63 = (x253|(x254%(x255|x256)));

	if (t63 != -2147483596) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	int8_t x258 = INT8_MIN;
	int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MAX;
	volatile int32_t t64 = INT32_MAX;

	t64 = (x257|(x258%(x259|x260)));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x263 = 30;
	volatile int16_t x264 = -1;
	volatile uint32_t t65 = 11318U;

	t65 = (x261|(x262%(x263|x264)));

	if (t65 != 11U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	uint8_t x266 = 87U;
	int8_t x267 = INT8_MAX;
	int8_t x268 = -4;
	int64_t t66 = INT64_MIN;

	t66 = (x265|(x266%(x267|x268)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MIN;
	int64_t x270 = -82957500434023LL;
	static int64_t x271 = INT64_MIN;
	static volatile int64_t x272 = INT64_MAX;
	int64_t t67 = 106789404476LL;

	t67 = (x269|(x270%(x271|x272)));

	if (t67 != -32768LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MIN;
	static uint8_t x274 = 53U;
	int16_t x276 = -1;
	uint64_t t68 = 4LLU;

	t68 = (x273|(x274%(x275|x276)));

	if (t68 != 18446744071562068021LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 21206U;
	uint8_t x278 = 0U;
	int16_t x279 = -1;
	int64_t x280 = INT64_MAX;
	int64_t t69 = 544369072415453LL;

	t69 = (x277|(x278%(x279|x280)));

	if (t69 != 21206LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x282 = 67U;
	uint16_t x283 = 14U;
	int16_t x284 = 224;

	t70 = (x281|(x282%(x283|x284)));

	if (t70 != 67) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = 0;
	volatile int64_t x286 = INT64_MIN;
	int64_t x287 = 2021506399290986LL;
	static uint32_t x288 = UINT32_MAX;
	static volatile int64_t t71 = -1210732523LL;

	t71 = (x285|(x286%(x287|x288)));

	if (t71 != -1252713111228882LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = 425607210;
	static int8_t x290 = 3;
	static uint8_t x291 = UINT8_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t72 = 979U;

	t72 = (x289|(x290%(x291|x292)));

	if (t72 != 425607211U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = UINT64_MAX;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = -1;

	t73 = (x293|(x294%(x295|x296)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MAX;
	int32_t t74 = 31754;

	t74 = (x297|(x298%(x299|x300)));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = 495658;
	volatile int32_t x302 = 2340229;
	uint16_t x303 = 21009U;
	uint8_t x304 = 16U;
	int32_t t75 = -1005717684;

	t75 = (x301|(x302%(x303|x304)));

	if (t75 != 503854) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x306 = -79348878377447210LL;
	int64_t x308 = -91501290846325929LL;
	volatile int64_t t76 = 4180524919978LL;

	t76 = (x305|(x306%(x307|x308)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x310 = 6LL;
	uint64_t x312 = 1082526871828072LLU;
	volatile uint64_t t77 = 3527LLU;

	t77 = (x309|(x310%(x311|x312)));

	if (t77 != 47LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	uint16_t x315 = 1995U;
	uint32_t x316 = 2044291256U;
	volatile int64_t t78 = 445676012316LL;

	t78 = (x313|(x314%(x315|x316)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MIN;
	static int64_t x318 = INT64_MIN;
	int64_t x319 = INT64_MIN;
	uint64_t t79 = 2187LLU;

	t79 = (x317|(x318%(x319|x320)));

	if (t79 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MAX;
	uint8_t x323 = UINT8_MAX;
	int64_t x324 = 96874118804LL;
	volatile int64_t t80 = 153LL;

	t80 = (x321|(x322%(x323|x324)));

	if (t80 != -533261174LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 0U;
	int64_t x326 = -217131586773767178LL;
	int16_t x328 = INT16_MIN;
	volatile uint64_t t81 = 1287133861848508217LLU;

	t81 = (x325|(x326%(x327|x328)));

	if (t81 != 18229612486935784438LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -100032;
	static volatile int64_t x330 = INT64_MIN;
	int8_t x331 = INT8_MIN;
	volatile uint64_t x332 = 99282978909472LLU;
	uint64_t t82 = 98LLU;

	t82 = (x329|(x330%(x331|x332)));

	if (t82 != 18446744073709451584LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = 1;
	uint8_t x334 = UINT8_MAX;
	uint16_t x335 = 5679U;
	volatile int32_t t83 = -13793317;

	t83 = (x333|(x334%(x335|x336)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 14170U;
	uint64_t x338 = UINT64_MAX;
	volatile int64_t x339 = INT64_MIN;
	volatile uint8_t x340 = UINT8_MAX;
	uint64_t t84 = 481881900691LLU;

	t84 = (x337|(x338%(x339|x340)));

	if (t84 != 9223372036854775642LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	int32_t x343 = 57150535;
	static int16_t x344 = -8668;
	static volatile int32_t t85 = 5;

	t85 = (x341|(x342%(x343|x344)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 4603386718242008800LLU;
	volatile int32_t x347 = -1;
	int16_t x348 = INT16_MAX;
	uint64_t t86 = 28LLU;

	t86 = (x345|(x346%(x347|x348)));

	if (t86 != 4603386718242008800LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = 89;
	static uint16_t x350 = 448U;
	volatile int32_t x351 = -1;
	static uint16_t x352 = 1595U;
	volatile int32_t t87 = 61;

	t87 = (x349|(x350%(x351|x352)));

	if (t87 != 89) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 3U;
	uint8_t x354 = UINT8_MAX;
	uint8_t x355 = 84U;
	int64_t x356 = INT64_MIN;
	int64_t t88 = 15232998LL;

	t88 = (x353|(x354%(x355|x356)));

	if (t88 != 255LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = 4082U;
	int8_t x358 = INT8_MIN;
	int32_t x359 = INT32_MAX;
	uint64_t x360 = UINT64_MAX;

	t89 = (x357|(x358%(x359|x360)));

	if (t89 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 2197U;
	int64_t x362 = INT64_MIN;
	int32_t x364 = INT32_MIN;
	int64_t t90 = -15LL;

	t90 = (x361|(x362%(x363|x364)));

	if (t90 != -957600299LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	int64_t x368 = 20LL;
	int64_t t91 = -692810273013838039LL;

	t91 = (x365|(x366%(x367|x368)));

	if (t91 != -2147483464LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	int32_t x370 = INT32_MIN;
	static volatile int8_t x371 = INT8_MIN;
	volatile uint16_t x372 = 45U;

	t92 = (x369|(x370%(x371|x372)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 4682674596182627833LLU;
	uint32_t x374 = 211810240U;
	volatile int32_t x376 = INT32_MAX;
	volatile uint64_t t93 = 3110808460748247LLU;

	t93 = (x373|(x374%(x375|x376)));

	if (t93 != 4682674596392990713LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1344642LL;
	int32_t x378 = INT32_MIN;
	int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MIN;
	static int64_t t94 = 28504917257048426LL;

	t94 = (x377|(x378%(x379|x380)));

	if (t94 != -1344642LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -3549;
	int8_t x382 = INT8_MAX;
	int64_t x383 = 47162456756315LL;
	int32_t x384 = INT32_MIN;
	int64_t t95 = 406LL;

	t95 = (x381|(x382%(x383|x384)));

	if (t95 != -3457LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	int64_t x386 = INT64_MIN;
	int64_t x387 = -1LL;
	volatile int16_t x388 = INT16_MIN;

	t96 = (x385|(x386%(x387|x388)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	volatile int32_t x390 = 5986;
	uint16_t x391 = 1U;
	int16_t x392 = -1;

	t97 = (x389|(x390%(x391|x392)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t t98 = 7764LLU;

	t98 = (x393|(x394%(x395|x396)));

	if (t98 != 574715524778LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = 1;
	volatile uint64_t x399 = 17989357422060054LLU;
	uint8_t x400 = 0U;
	volatile uint64_t t99 = 1462LLU;

	t99 = (x397|(x398%(x399|x400)));

	if (t99 != 7652716097996265LLU) { NG(); } else { ; }
	
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

