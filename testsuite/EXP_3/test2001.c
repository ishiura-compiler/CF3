#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
uint16_t x9 = UINT16_MAX;
static uint16_t x13 = 715U;
int16_t x24 = -11391;
int64_t t5 = -367959647499LL;
int8_t x27 = INT8_MIN;
volatile uint32_t x32 = UINT32_MAX;
uint64_t t9 = 2970080339LLU;
uint8_t x52 = 3U;
int64_t x54 = 4692175970LL;
static int16_t x55 = INT16_MIN;
int64_t x59 = -523490185003701552LL;
static uint64_t t14 = 115285434LLU;
int32_t x72 = INT32_MIN;
volatile int8_t x77 = INT8_MAX;
volatile uint8_t x84 = 0U;
int8_t x89 = INT8_MIN;
volatile int32_t x91 = INT32_MIN;
volatile int8_t x94 = 2;
int8_t x96 = 25;
int8_t x98 = INT8_MIN;
static uint64_t x100 = 956537715501LLU;
volatile uint64_t t24 = 90825178570410LLU;
static int32_t x102 = 176008519;
int32_t t25 = 1500832;
volatile int8_t x105 = 1;
int8_t x109 = INT8_MIN;
static int16_t x115 = INT16_MIN;
uint16_t x119 = 30768U;
static uint16_t x123 = 73U;
static uint64_t t30 = 5065791LLU;
uint16_t x141 = 18U;
volatile int16_t x143 = INT16_MIN;
volatile int32_t t36 = -443567322;
int8_t x156 = -1;
volatile int64_t t39 = 102LL;
static volatile int64_t t41 = -9699830510LL;
static int8_t x171 = INT8_MIN;
volatile uint64_t t42 = UINT64_MAX;
static volatile uint32_t x179 = 59825U;
static int64_t x182 = INT64_MIN;
int64_t x189 = INT64_MIN;
volatile int8_t x198 = INT8_MIN;
int64_t x199 = INT64_MIN;
uint64_t x203 = UINT64_MAX;
int64_t x210 = -4874753LL;
int16_t x212 = 2133;
uint32_t x219 = UINT32_MAX;
static int8_t x226 = -1;
int32_t x227 = 9762;
int8_t x228 = INT8_MIN;
int32_t x229 = INT32_MIN;
int16_t x233 = 37;
volatile int16_t x235 = -6871;
int8_t x251 = INT8_MIN;
int8_t x252 = INT8_MAX;
volatile uint64_t t63 = UINT64_MAX;
uint32_t x261 = UINT32_MAX;
int32_t t67 = -1345317;
int8_t x276 = 34;
int32_t x283 = 1;
int64_t x284 = INT64_MAX;
int8_t x287 = 2;
static int16_t x292 = 123;
volatile int16_t x296 = -1;
static int32_t t73 = -9;
volatile int8_t x300 = -3;
int8_t x311 = INT8_MIN;
volatile int8_t x312 = INT8_MIN;
volatile int32_t t77 = 815728;
static uint64_t x325 = 6536230921370797LLU;
static uint8_t x328 = UINT8_MAX;
volatile uint64_t t81 = 4877990087LLU;
int32_t x344 = -1;
int64_t t86 = 214087557782467465LL;
int8_t x350 = -1;
int16_t x354 = 1251;
static volatile int64_t t88 = 166414261027600LL;
uint8_t x359 = UINT8_MAX;
uint16_t x362 = UINT16_MAX;
volatile uint8_t x366 = UINT8_MAX;
int8_t x369 = -1;
int16_t x371 = INT16_MIN;
int32_t x383 = -16;
int16_t x386 = 6;
int16_t x390 = -1;
int8_t x397 = INT8_MIN;


void f0(void) {
	int32_t x1 = 49076;
	uint64_t x2 = 22678161938620378LLU;
	uint32_t x3 = 28717U;
	int32_t x4 = INT32_MIN;
	uint64_t t0 = 1304247822029635282LLU;

	t0 = ((x1&x2)|(x3|x4));

	if (t0 != 2147549117LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 3925U;
	uint64_t x6 = UINT64_MAX;
	int8_t x7 = -1;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = ((x5&x6)|(x7|x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = 60;
	int64_t x11 = 1345253836LL;
	int8_t x12 = INT8_MIN;
	int64_t t2 = -1934706225988279407LL;

	t2 = ((x9&x10)|(x11|x12));

	if (t2 != -4LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MAX;
	int64_t x15 = 0LL;
	static int64_t x16 = -91208416LL;
	int64_t t3 = 1LL;

	t3 = ((x13&x14)|(x15|x16));

	if (t3 != -91207701LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 0U;
	uint32_t x18 = 556345U;
	int32_t x19 = INT32_MIN;
	static int64_t x20 = -1LL;
	int64_t t4 = 2LL;

	t4 = ((x17&x18)|(x19|x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	volatile uint8_t x22 = 9U;
	static volatile int64_t x23 = -1LL;

	t5 = ((x21&x22)|(x23|x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 176;
	static int8_t x26 = INT8_MIN;
	int64_t x28 = -1LL;
	static int64_t t6 = -1LL;

	t6 = ((x25&x26)|(x27|x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile int16_t x30 = -33;
	uint8_t x31 = UINT8_MAX;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x29&x30)|(x31|x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = 1;
	uint32_t x34 = 173461U;
	volatile int32_t x35 = INT32_MIN;
	int32_t x36 = -1;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = ((x33&x34)|(x35|x36));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 7U;
	int16_t x38 = 4;
	uint64_t x39 = 8222648LLU;
	int32_t x40 = INT32_MAX;

	t9 = ((x37&x38)|(x39|x40));

	if (t9 != 2147483647LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	volatile int64_t x42 = 1005253954LL;
	uint64_t x43 = UINT64_MAX;
	volatile int64_t x44 = INT64_MAX;
	static volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x41&x42)|(x43|x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 16U;
	uint16_t x46 = 264U;
	int64_t x47 = INT64_MIN;
	static int32_t x48 = -2;
	volatile int64_t t11 = 243195682LL;

	t11 = ((x45&x46)|(x47|x48));

	if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int64_t x50 = -1LL;
	volatile int32_t x51 = INT32_MIN;
	volatile int64_t t12 = -966887492104LL;

	t12 = ((x49&x50)|(x51|x52));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 92032533LLU;
	int8_t x56 = -1;
	uint64_t t13 = UINT64_MAX;

	t13 = ((x53&x54)|(x55|x56));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int32_t x58 = INT32_MIN;
	static volatile uint64_t x60 = 10022LLU;

	t14 = ((x57&x58)|(x59|x60));

	if (t14 != 18446744072760815606LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = 25U;
	int16_t x62 = INT16_MAX;
	uint64_t x63 = 987243961LLU;
	static uint32_t x64 = UINT32_MAX;
	volatile uint64_t t15 = 8LLU;

	t15 = ((x61&x62)|(x63|x64));

	if (t15 != 4294967295LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 115U;
	int16_t x66 = INT16_MIN;
	uint8_t x67 = UINT8_MAX;
	int16_t x68 = -1;
	int32_t t16 = -176801;

	t16 = ((x65&x66)|(x67|x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -30;
	uint16_t x70 = UINT16_MAX;
	static int16_t x71 = INT16_MIN;
	volatile int32_t t17 = 79195296;

	t17 = ((x69&x70)|(x71|x72));

	if (t17 != -30) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 15U;
	uint64_t x74 = 16614229499LLU;
	int64_t x75 = 538363622785650LL;
	int16_t x76 = INT16_MIN;
	static uint64_t t18 = 10016LLU;

	t18 = ((x73&x74)|(x75|x76));

	if (t18 != 18446744073709519483LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 32U;
	volatile int64_t x79 = INT64_MAX;
	uint64_t x80 = 11596206004LLU;
	volatile uint64_t t19 = 97973010LLU;

	t19 = ((x77&x78)|(x79|x80));

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int32_t x82 = 7290631;
	int32_t x83 = -1;
	static int32_t t20 = 305605;

	t20 = ((x81&x82)|(x83|x84));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 7;
	static int16_t x86 = -1;
	volatile int16_t x87 = -82;
	uint8_t x88 = 4U;
	int32_t t21 = -36727;

	t21 = ((x85&x86)|(x87|x88));

	if (t21 != -81) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x90 = UINT16_MAX;
	int16_t x92 = INT16_MAX;
	int32_t t22 = 0;

	t22 = ((x89&x90)|(x91|x92));

	if (t22 != -2147418113) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = UINT16_MAX;
	int64_t x95 = INT64_MIN;
	volatile int64_t t23 = 12572726037LL;

	t23 = ((x93&x94)|(x95|x96));

	if (t23 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int16_t x99 = INT16_MAX;

	t24 = ((x97&x98)|(x99|x100));

	if (t24 != 9223372993392508927LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;

	t25 = ((x101&x102)|(x103|x104));

	if (t25 != -21177) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x106 = -1;
	int8_t x107 = INT8_MIN;
	static int64_t x108 = INT64_MIN;
	int64_t t26 = 16844556686963LL;

	t26 = ((x105&x106)|(x107|x108));

	if (t26 != -127LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x110 = 0;
	volatile int8_t x111 = -1;
	int64_t x112 = -16LL;
	int64_t t27 = -897491287549547LL;

	t27 = ((x109&x110)|(x111|x112));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 508;
	volatile int8_t x114 = -17;
	int32_t x116 = INT32_MAX;
	volatile int32_t t28 = 9411;

	t28 = ((x113&x114)|(x115|x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = -1;
	uint64_t x118 = 28455783LLU;
	int16_t x120 = 265;
	volatile uint64_t t29 = 1014412LLU;

	t29 = ((x117&x118)|(x119|x120));

	if (t29 != 28474239LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	uint64_t x122 = UINT64_MAX;
	int16_t x124 = 1;

	t30 = ((x121&x122)|(x123|x124));

	if (t30 != 9223372036854775881LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MIN;
	int32_t x128 = INT32_MIN;
	int64_t t31 = -8121528973LL;

	t31 = ((x125&x126)|(x127|x128));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -8604;
	int16_t x130 = -5163;
	static int64_t x131 = INT64_MAX;
	uint64_t x132 = 1123818286673655045LLU;
	uint64_t t32 = UINT64_MAX;

	t32 = ((x129&x130)|(x131|x132));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MAX;
	uint32_t x134 = UINT32_MAX;
	volatile int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	int64_t t33 = 719LL;

	t33 = ((x133&x134)|(x135|x136));

	if (t33 != -2147450881LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	volatile int16_t x138 = INT16_MAX;
	static int16_t x139 = -1;
	uint32_t x140 = 91U;
	uint32_t t34 = UINT32_MAX;

	t34 = ((x137&x138)|(x139|x140));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	static int8_t x144 = 0;
	int32_t t35 = -97281035;

	t35 = ((x141&x142)|(x143|x144));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	int8_t x146 = -1;
	int32_t x147 = INT32_MIN;
	volatile int16_t x148 = INT16_MAX;

	t36 = ((x145&x146)|(x147|x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int32_t x150 = INT32_MAX;
	static uint8_t x151 = 38U;
	static volatile uint16_t x152 = UINT16_MAX;
	volatile int32_t t37 = INT32_MAX;

	t37 = ((x149&x150)|(x151|x152));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = -13362;
	volatile int64_t x154 = -1LL;
	uint32_t x155 = 47U;
	int64_t t38 = 54077986608848LL;

	t38 = ((x153&x154)|(x155|x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	static uint32_t x158 = 212U;
	static int64_t x159 = 67291804780500LL;
	volatile uint8_t x160 = 2U;

	t39 = ((x157&x158)|(x159|x160));

	if (t39 != 67291804780502LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 21855U;
	uint64_t x162 = UINT64_MAX;
	int32_t x163 = 0;
	int64_t x164 = INT64_MAX;
	volatile uint64_t t40 = 1LLU;

	t40 = ((x161&x162)|(x163|x164));

	if (t40 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = -1;
	static int64_t x166 = 1075417LL;
	volatile uint32_t x167 = 13U;
	static volatile uint16_t x168 = 0U;

	t41 = ((x165&x166)|(x167|x168));

	if (t41 != 1075421LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 149LLU;
	int64_t x170 = 64548LL;
	volatile int64_t x172 = -1LL;

	t42 = ((x169&x170)|(x171|x172));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 0U;
	int16_t x174 = -1;
	int16_t x175 = 172;
	static int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 73584;

	t43 = ((x173&x174)|(x175|x176));

	if (t43 != -2147483476) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MIN;
	int32_t x178 = -1;
	int8_t x180 = -15;
	volatile int64_t t44 = -20LL;

	t44 = ((x177&x178)|(x179|x180));

	if (t44 != -9223372032559808527LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MIN;
	static int32_t x183 = -71147396;
	static int8_t x184 = INT8_MIN;
	int64_t t45 = 94882879332LL;

	t45 = ((x181&x182)|(x183|x184));

	if (t45 != -4LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int32_t x186 = 24;
	volatile uint32_t x187 = 215373U;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = ((x185&x186)|(x187|x188));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MAX;
	int32_t x192 = -1;
	int64_t t47 = -160LL;

	t47 = ((x189&x190)|(x191|x192));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int64_t x194 = -1LL;
	uint64_t x195 = UINT64_MAX;
	static int8_t x196 = INT8_MIN;
	uint64_t t48 = UINT64_MAX;

	t48 = ((x193&x194)|(x195|x196));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 32552U;
	uint8_t x200 = UINT8_MAX;
	static volatile int64_t t49 = -12944009LL;

	t49 = ((x197&x198)|(x199|x200));

	if (t49 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 220006U;
	uint64_t x202 = UINT64_MAX;
	volatile int64_t x204 = INT64_MIN;
	uint64_t t50 = UINT64_MAX;

	t50 = ((x201&x202)|(x203|x204));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MAX;
	int64_t x206 = -28039941313LL;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MAX;
	int64_t t51 = 519358LL;

	t51 = ((x205&x206)|(x207|x208));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int16_t x211 = 1;
	int64_t t52 = -17431450634346685LL;

	t52 = ((x209&x210)|(x211|x212));

	if (t52 != -2147481515LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 11617170758758121LLU;
	int8_t x214 = -9;
	int16_t x215 = -1;
	int32_t x216 = 219;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = ((x213&x214)|(x215|x216));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int32_t x218 = -503677;
	uint16_t x220 = 3U;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = ((x217&x218)|(x219|x220));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = UINT16_MAX;
	int16_t x222 = INT16_MIN;
	static int16_t x223 = 15;
	int32_t x224 = INT32_MIN;
	static volatile int32_t t55 = 46600234;

	t55 = ((x221&x222)|(x223|x224));

	if (t55 != -2147450865) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = ((x225&x226)|(x227|x228));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = 0;
	uint16_t x231 = UINT16_MAX;
	static int32_t x232 = INT32_MAX;
	volatile int32_t t57 = INT32_MAX;

	t57 = ((x229&x230)|(x231|x232));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -230545351LL;
	int8_t x236 = INT8_MAX;
	volatile int64_t t58 = -75LL;

	t58 = ((x233&x234)|(x235|x236));

	if (t58 != -6785LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = -54431481;
	static int16_t x239 = -1;
	static int64_t x240 = -1LL;
	volatile int64_t t59 = 238378478502758LL;

	t59 = ((x237&x238)|(x239|x240));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x241 = INT8_MAX;
	static int8_t x242 = -1;
	int8_t x243 = INT8_MIN;
	int64_t x244 = -18388LL;
	volatile int64_t t60 = -3501590754550812531LL;

	t60 = ((x241&x242)|(x243|x244));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = UINT64_MAX;
	int8_t x246 = INT8_MIN;
	int32_t x247 = INT32_MAX;
	int64_t x248 = 10LL;
	uint64_t t61 = UINT64_MAX;

	t61 = ((x245&x246)|(x247|x248));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int32_t x250 = -564;
	volatile int64_t t62 = 79LL;

	t62 = ((x249&x250)|(x251|x252));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = UINT16_MAX;
	uint64_t x254 = UINT64_MAX;
	int8_t x255 = INT8_MIN;
	static uint8_t x256 = UINT8_MAX;

	t63 = ((x253&x254)|(x255|x256));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = -172;
	int16_t x259 = INT16_MAX;
	volatile int16_t x260 = INT16_MAX;
	int32_t t64 = 1;

	t64 = ((x257&x258)|(x259|x260));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = -1;
	uint8_t x263 = 4U;
	int64_t x264 = INT64_MIN;
	static volatile int64_t t65 = -38491262400582933LL;

	t65 = ((x261&x262)|(x263|x264));

	if (t65 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 1;
	int8_t x266 = INT8_MIN;
	volatile int64_t x267 = -8542381698543374LL;
	uint8_t x268 = UINT8_MAX;
	int64_t t66 = -1086010759LL;

	t66 = ((x265&x266)|(x267|x268));

	if (t66 != -8542381698543361LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	static int32_t x270 = INT32_MIN;
	static volatile int8_t x271 = 38;
	int8_t x272 = -3;

	t67 = ((x269&x270)|(x271|x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	int16_t x274 = -1;
	static int8_t x275 = 1;
	int64_t t68 = INT64_MAX;

	t68 = ((x273&x274)|(x275|x276));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int32_t x278 = -1;
	uint16_t x279 = 1510U;
	int8_t x280 = 1;
	volatile int32_t t69 = INT32_MAX;

	t69 = ((x277&x278)|(x279|x280));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = 38;
	int64_t x282 = -1LL;
	volatile int64_t t70 = INT64_MAX;

	t70 = ((x281&x282)|(x283|x284));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 0;
	uint8_t x286 = UINT8_MAX;
	uint32_t x288 = UINT32_MAX;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = ((x285&x286)|(x287|x288));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 84418566;
	int64_t x290 = INT64_MAX;
	int64_t x291 = INT64_MIN;
	int64_t t72 = 14LL;

	t72 = ((x289&x290)|(x291|x292));

	if (t72 != -9223372036770357121LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	static int16_t x294 = INT16_MAX;
	uint8_t x295 = 96U;

	t73 = ((x293&x294)|(x295|x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;
	uint16_t x298 = 2U;
	static int16_t x299 = INT16_MIN;
	static int32_t t74 = -60;

	t74 = ((x297&x298)|(x299|x300));

	if (t74 != -3) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = -1LL;
	static volatile uint16_t x302 = 22842U;
	int8_t x303 = INT8_MIN;
	int32_t x304 = -1;
	volatile int64_t t75 = 120LL;

	t75 = ((x301&x302)|(x303|x304));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	static uint8_t x306 = 1U;
	volatile int64_t x307 = -1LL;
	int64_t x308 = INT64_MIN;
	int64_t t76 = -361827804778LL;

	t76 = ((x305&x306)|(x307|x308));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = -1;
	int16_t x310 = INT16_MIN;

	t77 = ((x309&x310)|(x311|x312));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 103908489;
	int8_t x314 = -1;
	static int64_t x315 = INT64_MIN;
	static int32_t x316 = INT32_MAX;
	volatile int64_t t78 = 278541105271809LL;

	t78 = ((x313&x314)|(x315|x316));

	if (t78 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x317 = INT32_MAX;
	int16_t x318 = 202;
	int32_t x319 = INT32_MIN;
	volatile int8_t x320 = INT8_MIN;
	int32_t t79 = -96;

	t79 = ((x317&x318)|(x319|x320));

	if (t79 != -54) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1929089535819293LL;
	static volatile uint8_t x322 = 3U;
	uint32_t x323 = UINT32_MAX;
	uint16_t x324 = 11U;
	int64_t t80 = 61LL;

	t80 = ((x321&x322)|(x323|x324));

	if (t80 != 4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x326 = INT8_MIN;
	uint32_t x327 = 40U;

	t81 = ((x325&x326)|(x327|x328));

	if (t81 != 6536230921370879LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = INT16_MIN;
	int8_t x332 = 10;
	uint32_t t82 = 1U;

	t82 = ((x329&x330)|(x331|x332));

	if (t82 != 4294934538U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = 0;
	static volatile int16_t x334 = 12;
	int16_t x335 = 120;
	int16_t x336 = -35;
	volatile int32_t t83 = 1951;

	t83 = ((x333&x334)|(x335|x336));

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 6LLU;
	int16_t x338 = INT16_MIN;
	static int32_t x339 = 5307179;
	volatile int8_t x340 = INT8_MAX;
	static uint64_t t84 = 207839973147804557LLU;

	t84 = ((x337&x338)|(x339|x340));

	if (t84 != 5307263LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	volatile uint64_t x342 = UINT64_MAX;
	int8_t x343 = INT8_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = ((x341&x342)|(x343|x344));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MAX;
	static int8_t x346 = INT8_MIN;
	volatile int64_t x347 = -1LL;
	static uint16_t x348 = 6U;

	t86 = ((x345&x346)|(x347|x348));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = -170458983;
	volatile uint8_t x351 = UINT8_MAX;
	static int32_t x352 = -1;
	int32_t t87 = -1930;

	t87 = ((x349&x350)|(x351|x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = -27656879534LL;
	int64_t x355 = INT64_MIN;
	static volatile int32_t x356 = INT32_MAX;

	t88 = ((x353&x354)|(x355|x356));

	if (t88 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 1127323919363LLU;
	int64_t x358 = INT64_MIN;
	int16_t x360 = INT16_MIN;
	static uint64_t t89 = 17020LLU;

	t89 = ((x357&x358)|(x359|x360));

	if (t89 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MAX;
	uint64_t x363 = UINT64_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = ((x361&x362)|(x363|x364));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	int8_t x367 = -1;
	int32_t x368 = -1;
	volatile int32_t t91 = -59914846;

	t91 = ((x365&x366)|(x367|x368));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = 0;
	volatile int32_t x372 = -1;
	static volatile int32_t t92 = 8167;

	t92 = ((x369&x370)|(x371|x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 14U;
	int64_t x374 = -49LL;
	int16_t x375 = -5;
	uint32_t x376 = 13U;
	int64_t t93 = 7725205767LL;

	t93 = ((x373&x374)|(x375|x376));

	if (t93 != 4294967295LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	static volatile uint8_t x378 = 4U;
	static uint32_t x379 = UINT32_MAX;
	int8_t x380 = 29;
	uint32_t t94 = UINT32_MAX;

	t94 = ((x377&x378)|(x379|x380));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 56U;
	volatile int16_t x382 = INT16_MAX;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 423560;

	t95 = ((x381&x382)|(x383|x384));

	if (t95 != -8) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = 120756421;
	volatile int8_t x387 = INT8_MIN;
	uint16_t x388 = UINT16_MAX;
	int32_t t96 = -15944;

	t96 = ((x385&x386)|(x387|x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = UINT8_MAX;
	static uint32_t x391 = UINT32_MAX;
	static int16_t x392 = -1;
	volatile uint32_t t97 = UINT32_MAX;

	t97 = ((x389&x390)|(x391|x392));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MAX;
	int8_t x394 = INT8_MAX;
	int64_t x395 = -1LL;
	int32_t x396 = -49366;
	int64_t t98 = 126956225LL;

	t98 = ((x393&x394)|(x395|x396));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x398 = -454079996;
	int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MAX;
	volatile int32_t t99 = -2186;

	t99 = ((x397&x398)|(x399|x400));

	if (t99 != -13697) { NG(); } else { ; }
	
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

