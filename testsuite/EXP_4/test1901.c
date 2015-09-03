#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 63041U;
int16_t x11 = INT16_MIN;
int32_t t2 = 51486;
int64_t t3 = -1LL;
int8_t x30 = -17;
static volatile uint32_t x32 = 6455456U;
int32_t x33 = -1;
uint16_t x36 = UINT16_MAX;
static int64_t x37 = 977468013903971LL;
static int32_t x39 = INT32_MIN;
static uint32_t x45 = 29207902U;
int8_t x48 = 22;
volatile int32_t t14 = 2212;
static uint32_t x65 = 11U;
int64_t x70 = INT64_MIN;
static int64_t t16 = -5627172117794LL;
static uint64_t t17 = 537853LLU;
static uint32_t x77 = 57384U;
int64_t x83 = -1LL;
int16_t x86 = INT16_MAX;
static volatile uint8_t x92 = 11U;
volatile int32_t x100 = INT32_MAX;
int32_t x116 = INT32_MAX;
int64_t x122 = INT64_MAX;
int32_t x124 = -121785455;
uint16_t x128 = 16407U;
int8_t x132 = -1;
static uint64_t t31 = 99491655959035860LLU;
static uint16_t x137 = 6858U;
volatile int64_t x140 = -9910LL;
uint64_t t32 = 934043459973LLU;
int16_t x142 = INT16_MIN;
volatile uint16_t x145 = 122U;
int16_t x147 = -1030;
int8_t x151 = -1;
volatile int64_t t36 = 342439909LL;
uint64_t x159 = 541373841622943451LLU;
uint8_t x167 = 1U;
int32_t t39 = -2861111;
volatile uint32_t x174 = UINT32_MAX;
uint8_t x175 = 43U;
uint16_t x178 = 2U;
int16_t x181 = 5;
static int16_t x200 = INT16_MIN;
uint32_t x203 = 329789U;
int32_t x213 = INT32_MIN;
volatile int16_t x221 = 27;
int8_t x225 = -2;
volatile int64_t x230 = -1LL;
uint16_t x232 = 3U;
static int8_t x234 = 0;
int8_t x236 = INT8_MIN;
uint16_t x239 = 0U;
int8_t x246 = INT8_MIN;
static int32_t x247 = -1;
static int16_t x252 = -5256;
volatile int64_t x256 = 1088690873978543LL;
int64_t t60 = -342422837941366LL;
static int16_t x261 = INT16_MIN;
int64_t x262 = INT64_MIN;
int64_t x265 = INT64_MAX;
int16_t x266 = 157;
int8_t x275 = 0;
int64_t x280 = INT64_MAX;
static int64_t x281 = -1LL;
int32_t x287 = -568468889;
static volatile int32_t t68 = -191095847;
static int32_t x295 = INT32_MIN;
uint32_t x297 = 61885U;
volatile int64_t x304 = INT64_MAX;
volatile int64_t t72 = -240LL;
uint16_t x311 = 479U;
volatile uint64_t t73 = 28305413393LLU;
int8_t x319 = INT8_MAX;
int32_t x326 = INT32_MAX;
static uint32_t x338 = UINT32_MAX;
uint16_t x339 = 51U;
uint32_t t80 = 58U;
volatile int64_t t81 = -242152357035870LL;
int8_t x346 = INT8_MAX;
uint16_t x350 = 656U;
static uint32_t x352 = 47858U;
volatile int16_t x361 = -83;
volatile uint64_t t87 = 123354355LLU;
int16_t x376 = INT16_MIN;
int32_t t89 = -1011;
uint8_t x386 = UINT8_MAX;
int32_t t92 = -776709716;
int8_t x390 = INT8_MIN;
int8_t x391 = INT8_MIN;
int8_t x393 = -31;
int8_t x395 = INT8_MIN;
static int16_t x402 = INT16_MIN;
static uint8_t x404 = UINT8_MAX;


void f0(void) {
	static int32_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	uint8_t x3 = UINT8_MAX;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 37678381;

	t0 = (x1*(x2/(x3|x4)));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint16_t x7 = UINT16_MAX;
	volatile int32_t x8 = -1;
	uint32_t t1 = 9117656U;

	t1 = (x5*(x6/(x7|x8)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 16U;
	int16_t x10 = 379;
	uint16_t x12 = 6U;

	t2 = (x9*(x10/(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	static int64_t x14 = -1LL;
	int8_t x15 = INT8_MIN;
	volatile int16_t x16 = INT16_MAX;

	t3 = (x13*(x14/(x15|x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	volatile int64_t x18 = -1LL;
	volatile uint8_t x19 = 0U;
	volatile int32_t x20 = 168;
	int64_t t4 = 910822LL;

	t4 = (x17*(x18/(x19|x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int32_t x22 = 510;
	volatile int32_t x23 = INT32_MIN;
	int64_t x24 = 24566206512709LL;
	int64_t t5 = 3LL;

	t5 = (x21*(x22/(x23|x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 7;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = UINT8_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t6 = 1283;

	t6 = (x25*(x26/(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static int32_t x31 = INT32_MAX;
	static int64_t t7 = INT64_MIN;

	t7 = (x29*(x30/(x31|x32)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = UINT8_MAX;
	int8_t x35 = INT8_MAX;
	volatile int32_t t8 = -7966;

	t8 = (x33*(x34/(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MAX;
	static volatile int64_t x40 = 198716840340498959LL;
	int64_t t9 = -525056827LL;

	t9 = (x37*(x38/(x39|x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 11;
	volatile int16_t x42 = INT16_MAX;
	int16_t x43 = INT16_MAX;
	static int16_t x44 = -1;
	volatile int32_t t10 = -15458013;

	t10 = (x41*(x42/(x43|x44)));

	if (t10 != -360437) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MIN;
	int64_t x47 = INT64_MAX;
	volatile int64_t t11 = -1LL;

	t11 = (x45*(x46/(x47|x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 5356973LLU;
	static uint8_t x50 = 37U;
	static int8_t x51 = -20;
	uint64_t x52 = 62785761LLU;
	volatile uint64_t t12 = 1163238541262245LLU;

	t12 = (x49*(x50/(x51|x52)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 10344U;
	int16_t x58 = INT16_MIN;
	uint32_t x59 = 35425622U;
	uint8_t x60 = UINT8_MAX;
	uint32_t t13 = 52153U;

	t13 = (x57*(x58/(x59|x60)));

	if (t13 != 1251624U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MAX;
	static int8_t x63 = -1;
	uint8_t x64 = UINT8_MAX;

	t14 = (x61*(x62/(x63|x64)));

	if (t14 != -4161409) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = 513655911;
	int8_t x67 = 0;
	volatile int64_t x68 = INT64_MAX;
	volatile int64_t t15 = -242LL;

	t15 = (x65*(x66/(x67|x68)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = 12;
	uint32_t x71 = UINT32_MAX;
	static int32_t x72 = 6708680;

	t16 = (x69*(x70/(x71|x72)));

	if (t16 != -25769803776LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 180279474031453LLU;
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = 884;
	static volatile uint64_t x76 = 541920028206461LLU;

	t17 = (x73*(x74/(x75|x76)));

	if (t17 != 6136533016556628667LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x78 = UINT64_MAX;
	uint16_t x79 = 19U;
	int8_t x80 = -29;
	volatile uint64_t t18 = 2193695847404LLU;

	t18 = (x77*(x78/(x79|x80)));

	if (t18 != 57384LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	uint8_t x84 = 5U;
	int64_t t19 = -24690LL;

	t19 = (x81*(x82/(x83|x84)));

	if (t19 != 32640LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = 3001;
	int64_t x87 = 266058946300465LL;
	uint32_t x88 = UINT32_MAX;
	volatile int64_t t20 = 1008190205LL;

	t20 = (x85*(x86/(x87|x88)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1;
	uint32_t x90 = 1U;
	volatile int32_t x91 = INT32_MAX;
	volatile uint32_t t21 = 18337870U;

	t21 = (x89*(x90/(x91|x92)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	uint8_t x94 = 6U;
	uint16_t x95 = 31U;
	int64_t x96 = 2772893LL;
	int64_t t22 = -3513838210LL;

	t22 = (x93*(x94/(x95|x96)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x97 = UINT16_MAX;
	int32_t x98 = INT32_MAX;
	uint8_t x99 = UINT8_MAX;
	int32_t t23 = -113662078;

	t23 = (x97*(x98/(x99|x100)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = UINT64_MAX;
	volatile int32_t x102 = INT32_MAX;
	int16_t x103 = 21;
	uint8_t x104 = 81U;
	uint64_t t24 = 11863923LLU;

	t24 = (x101*(x102/(x103|x104)));

	if (t24 != 18446744073684287103LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -43783LL;
	int32_t x106 = INT32_MIN;
	int8_t x107 = -30;
	int8_t x108 = 25;
	int64_t t25 = -869640671863LL;

	t25 = (x105*(x106/(x107|x108)));

	if (t25 != -18804655285807LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x109 = 6841964U;
	volatile int16_t x110 = 449;
	int32_t x111 = -1;
	volatile int16_t x112 = -1;
	uint32_t t26 = 562061U;

	t26 = (x109*(x110/(x111|x112)));

	if (t26 != 1222925460U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 8737637039291LLU;
	uint8_t x114 = 4U;
	static int64_t x115 = 3971643364940732179LL;
	uint64_t t27 = 833655LLU;

	t27 = (x113*(x114/(x115|x116)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = 2U;
	int64_t x123 = -88497816LL;
	volatile int64_t t28 = -21LL;

	t28 = (x121*(x122/(x123|x124)));

	if (t28 != -209073466340LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	static int8_t x126 = -29;
	uint64_t x127 = UINT64_MAX;
	volatile uint64_t t29 = 865060625LLU;

	t29 = (x125*(x126/(x127|x128)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = 9672788212LL;
	uint32_t x130 = 444376001U;
	int64_t x131 = -750957415082573LL;
	static int64_t t30 = 40LL;

	t30 = (x129*(x130/(x131|x132)));

	if (t30 != -4298354944168500212LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = -1;
	volatile uint64_t x134 = 3041379572471LLU;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = INT8_MIN;

	t31 = (x133*(x134/(x135|x136)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x138 = UINT64_MAX;
	int16_t x139 = INT16_MIN;

	t32 = (x137*(x138/(x139|x140)));

	if (t32 != 6858LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MAX;
	uint32_t x143 = 323682U;
	int8_t x144 = INT8_MIN;
	uint32_t t33 = 266401U;

	t33 = (x141*(x142/(x143|x144)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x146 = INT16_MAX;
	uint8_t x148 = 29U;
	static volatile int32_t t34 = -54937694;

	t34 = (x145*(x146/(x147|x148)));

	if (t34 != -3782) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	static uint64_t x150 = UINT64_MAX;
	static int16_t x152 = -1;
	uint64_t t35 = 1375740236070LLU;

	t35 = (x149*(x150/(x151|x152)));

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = UINT16_MAX;
	int8_t x154 = INT8_MAX;
	static int64_t x155 = -1LL;
	volatile uint32_t x156 = 116042063U;

	t36 = (x153*(x154/(x155|x156)));

	if (t36 != -8322945LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x157 = 15234873077557LLU;
	static int32_t x158 = -1;
	static uint8_t x160 = 11U;
	uint64_t t37 = 1674821901249433LLU;

	t37 = (x157*(x158/(x159|x160)));

	if (t37 != 517985684636938LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MAX;
	volatile int32_t x162 = 12829637;
	volatile int32_t x163 = INT32_MIN;
	volatile uint16_t x164 = 0U;
	volatile int64_t t38 = 7LL;

	t38 = (x161*(x162/(x163|x164)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x165 = 7;
	static int32_t x166 = INT32_MIN;
	static volatile int32_t x168 = INT32_MIN;

	t39 = (x165*(x166/(x167|x168)));

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 1;
	static volatile uint64_t x170 = 31539797227249122LLU;
	int32_t x171 = INT32_MIN;
	uint64_t x172 = 20833711972083549LLU;
	volatile uint64_t t40 = 1LLU;

	t40 = (x169*(x170/(x171|x172)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x173 = 15U;
	volatile int8_t x176 = INT8_MIN;
	uint32_t t41 = 0U;

	t41 = (x173*(x174/(x175|x176)));

	if (t41 != 15U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x177 = UINT16_MAX;
	int32_t x179 = -1;
	static int8_t x180 = -1;
	volatile int32_t t42 = 6362224;

	t42 = (x177*(x178/(x179|x180)));

	if (t42 != -131070) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x182 = 193U;
	volatile int16_t x183 = 1091;
	static int64_t x184 = INT64_MIN;
	static int64_t t43 = -206604067810232745LL;

	t43 = (x181*(x182/(x183|x184)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x189 = UINT16_MAX;
	uint32_t x190 = UINT32_MAX;
	volatile uint8_t x191 = UINT8_MAX;
	static volatile uint8_t x192 = UINT8_MAX;
	volatile uint32_t t44 = 0U;

	t44 = (x189*(x190/(x191|x192)));

	if (t44 != 4294967039U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = 2LL;
	static volatile int64_t x194 = -1LL;
	static int16_t x195 = -1;
	volatile int8_t x196 = -1;
	volatile int64_t t45 = 219966386LL;

	t45 = (x193*(x194/(x195|x196)));

	if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MIN;
	static uint64_t x198 = 145LLU;
	volatile int64_t x199 = INT64_MIN;
	volatile uint64_t t46 = 78758LLU;

	t46 = (x197*(x198/(x199|x200)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x201 = INT16_MIN;
	volatile uint32_t x202 = 28U;
	uint64_t x204 = UINT64_MAX;
	uint64_t t47 = 11744LLU;

	t47 = (x201*(x202/(x203|x204)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 50U;
	int32_t x206 = 47;
	uint8_t x207 = UINT8_MAX;
	static int32_t x208 = INT32_MIN;
	int32_t t48 = -5173;

	t48 = (x205*(x206/(x207|x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = 45;
	volatile int64_t x210 = -1LL;
	static int16_t x211 = INT16_MIN;
	volatile int16_t x212 = INT16_MAX;
	int64_t t49 = -7861575LL;

	t49 = (x209*(x210/(x211|x212)));

	if (t49 != 45LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x214 = 61;
	int64_t x215 = INT64_MIN;
	int64_t x216 = 91110388628577LL;
	volatile int64_t t50 = 17LL;

	t50 = (x213*(x214/(x215|x216)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = -32488349;
	static int8_t x219 = INT8_MAX;
	static uint32_t x220 = 111819U;
	volatile uint32_t t51 = 1U;

	t51 = (x217*(x218/(x219|x220)));

	if (t51 != 4290090368U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x222 = 7U;
	int64_t x223 = -33693132388771LL;
	static uint16_t x224 = 35U;
	int64_t t52 = 459007257954066LL;

	t52 = (x221*(x222/(x223|x224)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x226 = 13U;
	int8_t x227 = INT8_MIN;
	int8_t x228 = 2;
	uint32_t t53 = 18U;

	t53 = (x225*(x226/(x227|x228)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x229 = INT16_MIN;
	volatile uint8_t x231 = 60U;
	volatile int64_t t54 = 2197222831LL;

	t54 = (x229*(x230/(x231|x232)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = 85622;
	uint8_t x235 = UINT8_MAX;
	static int32_t t55 = 1;

	t55 = (x233*(x234/(x235|x236)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = -1;
	static uint32_t x238 = 380U;
	volatile int64_t x240 = INT64_MIN;
	volatile int64_t t56 = -548641576566LL;

	t56 = (x237*(x238/(x239|x240)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = INT32_MIN;
	uint8_t x242 = 3U;
	int8_t x243 = 3;
	int64_t x244 = INT64_MAX;
	volatile int64_t t57 = 30971469626971LL;

	t57 = (x241*(x242/(x243|x244)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x245 = -10;
	uint32_t x248 = 6U;
	uint32_t t58 = 1245600775U;

	t58 = (x245*(x246/(x247|x248)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = 3;
	static uint8_t x250 = 64U;
	static int8_t x251 = 26;
	volatile int32_t t59 = 1;

	t59 = (x249*(x250/(x251|x252)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x253 = 5;
	int16_t x254 = INT16_MAX;
	int32_t x255 = INT32_MIN;

	t60 = (x253*(x254/(x255|x256)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x263 = INT64_MIN;
	uint32_t x264 = UINT32_MAX;
	int64_t t61 = -41749508443LL;

	t61 = (x261*(x262/(x263|x264)));

	if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x267 = INT32_MIN;
	volatile int32_t x268 = INT32_MIN;
	int64_t t62 = 183505LL;

	t62 = (x265*(x266/(x267|x268)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = INT8_MIN;
	uint32_t x270 = 255871U;
	volatile int8_t x271 = INT8_MIN;
	static int64_t x272 = -1LL;
	int64_t t63 = -2915462502257LL;

	t63 = (x269*(x270/(x271|x272)));

	if (t63 != 32751488LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MIN;
	uint64_t x276 = 2903LLU;
	uint64_t t64 = 191266768LLU;

	t64 = (x273*(x274/(x275|x276)));

	if (t64 != 6570421416540045312LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MIN;
	volatile int8_t x278 = INT8_MAX;
	int8_t x279 = INT8_MIN;
	static int64_t t65 = -331927LL;

	t65 = (x277*(x278/(x279|x280)));

	if (t65 != 4161536LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x282 = UINT8_MAX;
	int8_t x283 = INT8_MAX;
	int16_t x284 = -1;
	int64_t t66 = 565011726857444716LL;

	t66 = (x281*(x282/(x283|x284)));

	if (t66 != 255LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = -1;
	static int8_t x286 = 50;
	volatile uint64_t x288 = UINT64_MAX;
	volatile uint64_t t67 = 247165LLU;

	t67 = (x285*(x286/(x287|x288)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = 1U;
	static volatile uint16_t x290 = 1U;
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;

	t68 = (x289*(x290/(x291|x292)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x293 = UINT32_MAX;
	int32_t x294 = -1;
	int64_t x296 = INT64_MAX;
	int64_t t69 = 30LL;

	t69 = (x293*(x294/(x295|x296)));

	if (t69 != 4294967295LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x298 = INT64_MIN;
	uint8_t x299 = UINT8_MAX;
	uint32_t x300 = 245540272U;
	volatile int64_t t70 = -229272136705789LL;

	t70 = (x297*(x298/(x299|x300)));

	if (t70 != -2324621497702995LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = -1LL;
	static uint64_t x302 = UINT64_MAX;
	int16_t x303 = -49;
	static volatile uint64_t t71 = UINT64_MAX;

	t71 = (x301*(x302/(x303|x304)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x305 = -1;
	uint16_t x306 = 61U;
	int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MAX;

	t72 = (x305*(x306/(x307|x308)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x309 = 20U;
	uint32_t x310 = 964U;
	uint64_t x312 = UINT64_MAX;

	t73 = (x309*(x310/(x311|x312)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x313 = -1LL;
	static volatile uint32_t x314 = 1336U;
	uint32_t x315 = 1129781307U;
	int64_t x316 = 126673LL;
	int64_t t74 = 3LL;

	t74 = (x313*(x314/(x315|x316)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x317 = 1011U;
	static int8_t x318 = -1;
	int64_t x320 = 1576103528772LL;
	volatile int64_t t75 = 5005919LL;

	t75 = (x317*(x318/(x319|x320)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MIN;
	int32_t x322 = INT32_MAX;
	static int8_t x323 = 2;
	static int16_t x324 = INT16_MIN;
	int32_t t76 = -6443;

	t76 = (x321*(x322/(x323|x324)));

	if (t76 != 8389120) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x325 = UINT64_MAX;
	int16_t x327 = INT16_MIN;
	int64_t x328 = -2108LL;
	volatile uint64_t t77 = 1LLU;

	t77 = (x325*(x326/(x327|x328)));

	if (t77 != 1018730LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x329 = 8036U;
	static uint64_t x330 = 39236263667837795LLU;
	uint64_t x331 = UINT64_MAX;
	uint32_t x332 = 205U;
	volatile uint64_t t78 = 128372839LLU;

	t78 = (x329*(x330/(x331|x332)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x333 = 303160LL;
	int64_t x334 = -11192836660LL;
	int8_t x335 = INT8_MIN;
	int8_t x336 = 9;
	volatile int64_t t79 = 231239390742LL;

	t79 = (x333*(x334/(x335|x336)));

	if (t79 != 28514456542000LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x337 = INT16_MIN;
	uint16_t x340 = 46U;

	t80 = (x337*(x338/(x339|x340)));

	if (t80 != 3749576704U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x341 = -1LL;
	int8_t x342 = 1;
	int64_t x343 = INT64_MAX;
	static int8_t x344 = -1;

	t81 = (x341*(x342/(x343|x344)));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x345 = -234242416LL;
	static volatile int8_t x347 = -60;
	static volatile int32_t x348 = INT32_MIN;
	int64_t t82 = 2329209575LL;

	t82 = (x345*(x346/(x347|x348)));

	if (t82 != 468484832LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x349 = 677LLU;
	uint16_t x351 = UINT16_MAX;
	volatile uint64_t t83 = 7714LLU;

	t83 = (x349*(x350/(x351|x352)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = 0;
	volatile uint16_t x354 = 15U;
	uint64_t x355 = 97398754272531LLU;
	int64_t x356 = INT64_MIN;
	uint64_t t84 = 25786544LLU;

	t84 = (x353*(x354/(x355|x356)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = -1;
	int32_t x358 = INT32_MIN;
	static int16_t x359 = -79;
	volatile uint32_t x360 = 56877U;
	volatile uint32_t t85 = 59974U;

	t85 = (x357*(x358/(x359|x360)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x362 = -2;
	int8_t x363 = INT8_MIN;
	int32_t x364 = -1;
	int32_t t86 = 506699;

	t86 = (x361*(x362/(x363|x364)));

	if (t86 != -166) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x365 = INT8_MIN;
	volatile uint64_t x366 = 21286558LLU;
	volatile int64_t x367 = INT64_MIN;
	static int64_t x368 = -7LL;

	t87 = (x365*(x366/(x367|x368)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x369 = 32729U;
	int8_t x370 = INT8_MIN;
	int64_t x371 = 0LL;
	uint32_t x372 = UINT32_MAX;
	int64_t t88 = -3629121866977LL;

	t88 = (x369*(x370/(x371|x372)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = 995717032;
	static volatile int32_t x374 = -1;
	int16_t x375 = INT16_MAX;

	t89 = (x373*(x374/(x375|x376)));

	if (t89 != 995717032) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x377 = INT16_MIN;
	volatile uint16_t x378 = 11U;
	uint64_t x379 = 2LLU;
	uint8_t x380 = 2U;
	uint64_t t90 = 28201LLU;

	t90 = (x377*(x378/(x379|x380)));

	if (t90 != 18446744073709387776LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = -1LL;
	static uint64_t x382 = UINT64_MAX;
	int32_t x383 = 1;
	volatile uint16_t x384 = 0U;
	volatile uint64_t t91 = 606619LLU;

	t91 = (x381*(x382/(x383|x384)));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x385 = -5;
	int32_t x387 = INT32_MAX;
	static int16_t x388 = -908;

	t92 = (x385*(x386/(x387|x388)));

	if (t92 != 1275) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = 13;
	int32_t x392 = INT32_MAX;
	volatile int32_t t93 = 7;

	t93 = (x389*(x390/(x391|x392)));

	if (t93 != 1664) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x394 = -1;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t94 = 246989;

	t94 = (x393*(x394/(x395|x396)));

	if (t94 != -31) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = 157882168999906LLU;
	int8_t x398 = -3;
	static uint16_t x399 = 1709U;
	int64_t x400 = INT64_MIN;
	volatile uint64_t t95 = 2352510099571765831LLU;

	t95 = (x397*(x398/(x399|x400)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x401 = 5910LLU;
	uint32_t x403 = 154438U;
	uint64_t t96 = 2262517945212971430LLU;

	t96 = (x401*(x402/(x403|x404)));

	if (t96 != 164156160LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = INT8_MIN;
	int64_t x406 = INT64_MAX;
	static volatile int16_t x407 = -1912;
	int32_t x408 = INT32_MIN;
	volatile int64_t t97 = 51597584450386LL;

	t97 = (x405*(x406/(x407|x408)));

	if (t97 != 617464236776888704LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x409 = UINT8_MAX;
	int32_t x410 = 12194535;
	int32_t x411 = 101;
	int64_t x412 = -126946990LL;
	static volatile int64_t t98 = -4900561455736LL;

	t98 = (x409*(x410/(x411|x412)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x413 = INT64_MIN;
	int8_t x414 = INT8_MAX;
	int64_t x415 = 84LL;
	volatile uint64_t x416 = 7802LLU;
	volatile uint64_t t99 = 2539LLU;

	t99 = (x413*(x414/(x415|x416)));

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

