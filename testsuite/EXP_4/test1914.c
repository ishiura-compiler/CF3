#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x12 = 4LL;
volatile int64_t t1 = -1962082560675LL;
int64_t x24 = INT64_MAX;
static int8_t x27 = -1;
volatile int32_t t3 = -3;
static int8_t x34 = -6;
int8_t x48 = -23;
int64_t x49 = -13800066172649LL;
int16_t x60 = 1;
static uint32_t t10 = 52246449U;
static int16_t x65 = INT16_MIN;
volatile uint32_t t13 = 1270687574U;
volatile uint32_t x76 = UINT32_MAX;
uint8_t x90 = UINT8_MAX;
int64_t x92 = INT64_MIN;
volatile int64_t t18 = -9773812990LL;
int64_t x93 = 1LL;
uint64_t x95 = 60413476557545LLU;
volatile uint64_t t19 = 14752141LLU;
int32_t x99 = -24;
static int64_t x100 = -1LL;
int8_t x102 = INT8_MAX;
static volatile int32_t x103 = INT32_MIN;
int32_t x107 = -1;
uint32_t x116 = 7538300U;
uint16_t x121 = 41U;
volatile int32_t t26 = -62;
volatile int16_t x125 = 4;
uint32_t x128 = 0U;
uint64_t t28 = 252602028760832363LLU;
volatile int64_t x139 = INT64_MIN;
volatile int64_t t30 = 16918737836LL;
int16_t x150 = -835;
volatile uint8_t x154 = 109U;
volatile int16_t x158 = INT16_MAX;
uint64_t t35 = 1128288LLU;
uint16_t x162 = UINT16_MAX;
int8_t x163 = 7;
volatile int16_t x164 = INT16_MIN;
uint32_t x165 = 1544U;
uint8_t x166 = 6U;
int32_t x175 = -6;
int16_t x176 = 6;
static uint16_t x177 = 0U;
int64_t x178 = 3314668134LL;
uint64_t x189 = 1LLU;
uint16_t x192 = 53U;
uint64_t t43 = 47389130900027LLU;
int32_t x194 = -1;
int64_t x201 = 2LL;
int16_t x208 = -241;
volatile int64_t t47 = 10483707720502LL;
static int64_t x212 = INT64_MAX;
int32_t x216 = -1;
static volatile uint32_t t49 = 14773167U;
volatile int32_t t50 = -3070;
uint8_t x236 = 79U;
int16_t x240 = INT16_MIN;
int8_t x242 = INT8_MIN;
volatile int8_t x243 = -1;
int32_t x245 = INT32_MIN;
volatile int64_t x247 = INT64_MIN;
int64_t x248 = INT64_MAX;
static int8_t x250 = 6;
volatile uint64_t t56 = 4193366479805LLU;
static volatile int8_t x255 = -8;
static uint64_t t59 = 564840048LLU;
static volatile uint8_t x265 = 3U;
int16_t x266 = INT16_MIN;
int32_t x273 = -477;
int32_t x276 = INT32_MAX;
int32_t x280 = -1;
uint32_t x281 = 5459U;
volatile int16_t x288 = INT16_MIN;
uint8_t x289 = 2U;
static int16_t x291 = INT16_MAX;
uint16_t x302 = 764U;
static volatile uint64_t t69 = 66567069763897LLU;
int64_t x310 = INT64_MAX;
int32_t x311 = -1;
uint64_t x313 = UINT64_MAX;
volatile uint32_t x318 = 3089U;
int32_t x319 = -1;
uint64_t x320 = 15133068237LLU;
static int8_t x321 = 1;
volatile uint32_t t74 = 1239653U;
uint64_t x329 = 670LLU;
uint16_t x330 = 3U;
uint16_t x332 = UINT16_MAX;
static int8_t x335 = INT8_MIN;
volatile uint16_t x343 = 3U;
int64_t x345 = INT64_MIN;
volatile uint64_t x346 = 2043932LLU;
int8_t x347 = -1;
uint64_t t79 = 572777812564621LLU;
static uint32_t x353 = 48891U;
static uint8_t x364 = UINT8_MAX;
uint16_t x377 = 97U;
uint32_t t86 = 26U;
int8_t x381 = -5;
volatile uint32_t x387 = 385482960U;
uint64_t x389 = 162952423309373LLU;
uint16_t x392 = 8U;
uint8_t x395 = 2U;
uint32_t t90 = 1598474U;
int16_t x402 = INT16_MIN;
int32_t t92 = 0;
int64_t t93 = -11483264LL;
int64_t x414 = 208892613LL;
static int8_t x419 = -3;
int16_t x424 = 60;
volatile int64_t t97 = -2018011714811967006LL;
volatile int32_t x426 = INT32_MIN;
volatile int32_t x429 = -1;
uint8_t x431 = 1U;


void f0(void) {
	int64_t x5 = 3442032719535LL;
	static int8_t x6 = -13;
	static int64_t x7 = INT64_MIN;
	uint16_t x8 = 20035U;
	int64_t t0 = 295960660LL;

	t0 = (x5*(x6%(x7|x8)));

	if (t0 != -44746425353955LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 92;
	uint16_t x10 = 7U;
	int16_t x11 = 1;

	t1 = (x9*(x10%(x11|x12)));

	if (t1 != 184LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x21 = 3U;
	int64_t x22 = INT64_MIN;
	volatile int64_t x23 = INT64_MIN;
	volatile int64_t t2 = -5LL;

	t2 = (x21*(x22%(x23|x24)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = 0;
	static int16_t x26 = -28;
	volatile uint8_t x28 = 18U;

	t3 = (x25*(x26%(x27|x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x29 = INT8_MIN;
	static int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MIN;
	uint64_t x32 = 203LLU;
	static volatile uint64_t t4 = 128191130LLU;

	t4 = (x29*(x30%(x31|x32)));

	if (t4 != 18446743798831687040LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MIN;
	volatile int16_t x35 = -1;
	int16_t x36 = -1;
	int32_t t5 = -7827382;

	t5 = (x33*(x34%(x35|x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x37 = -1LL;
	static uint8_t x38 = UINT8_MAX;
	int8_t x39 = INT8_MAX;
	volatile int16_t x40 = INT16_MIN;
	volatile int64_t t6 = -35576576709907047LL;

	t6 = (x37*(x38%(x39|x40)));

	if (t6 != -255LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x41 = -108644;
	uint64_t x42 = 1201990283295185260LLU;
	uint16_t x43 = 351U;
	int16_t x44 = INT16_MIN;
	uint64_t t7 = 520132643273LLU;

	t7 = (x41*(x42%(x43|x44)));

	if (t7 != 13915703541518053840LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x45 = UINT64_MAX;
	uint64_t x46 = 0LLU;
	int8_t x47 = -4;
	uint64_t t8 = 754406014070695094LLU;

	t8 = (x45*(x46%(x47|x48)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x50 = UINT64_MAX;
	static uint32_t x51 = 732U;
	uint8_t x52 = 4U;
	uint64_t t9 = 12402LLU;

	t9 = (x49*(x50%(x51|x52)));

	if (t9 != 18446537072716961881LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = INT8_MIN;
	int16_t x58 = 9091;
	uint32_t x59 = 7776538U;

	t10 = (x57*(x58%(x59|x60)));

	if (t10 != 4293803648U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = 4;
	int32_t x62 = INT32_MIN;
	int8_t x63 = -1;
	static int16_t x64 = INT16_MIN;
	static int32_t t11 = -127;

	t11 = (x61*(x62%(x63|x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x66 = INT8_MIN;
	static int16_t x67 = INT16_MIN;
	int8_t x68 = 0;
	int32_t t12 = -250694;

	t12 = (x65*(x66%(x67|x68)));

	if (t12 != 4194304) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = INT16_MIN;
	volatile int8_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	volatile uint32_t x72 = UINT32_MAX;

	t13 = (x69*(x70%(x71|x72)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = 14132;
	uint64_t x74 = 34363LLU;
	int64_t x75 = -1LL;
	uint64_t t14 = 62208207298LLU;

	t14 = (x73*(x74%(x75|x76)));

	if (t14 != 485617916LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = UINT8_MAX;
	static volatile int64_t x78 = INT64_MIN;
	uint16_t x79 = UINT16_MAX;
	int32_t x80 = INT32_MIN;
	volatile int64_t t15 = 85692LL;

	t15 = (x77*(x78%(x79|x80)));

	if (t15 != -547591618305LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MIN;
	static uint64_t x82 = 9428LLU;
	int16_t x83 = -1;
	uint64_t x84 = 34486LLU;
	volatile uint64_t t16 = 28227565755834LLU;

	t16 = (x81*(x82%(x83|x84)));

	if (t16 != 18446744073708344832LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x85 = 3U;
	volatile uint8_t x86 = UINT8_MAX;
	int64_t x87 = -2214970422357LL;
	uint16_t x88 = 1668U;
	int64_t t17 = -426LL;

	t17 = (x85*(x86%(x87|x88)));

	if (t17 != 765LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	volatile int16_t x91 = INT16_MIN;

	t18 = (x89*(x90%(x91|x92)));

	if (t18 != -8355840LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x94 = INT64_MIN;
	volatile int16_t x96 = -5;

	t19 = (x93*(x94%(x95|x96)));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x97 = UINT32_MAX;
	uint8_t x98 = 3U;
	volatile int64_t t20 = -8024889115563LL;

	t20 = (x97*(x98%(x99|x100)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MAX;
	uint32_t x104 = 11U;
	uint32_t t21 = 5U;

	t21 = (x101*(x102%(x103|x104)));

	if (t21 != 4161409U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x105 = 1U;
	int16_t x106 = INT16_MAX;
	uint8_t x108 = 56U;
	volatile int32_t t22 = -143321885;

	t22 = (x105*(x106%(x107|x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x109 = -1;
	static int32_t x110 = -1;
	uint64_t x111 = UINT64_MAX;
	static int8_t x112 = INT8_MAX;
	volatile uint64_t t23 = 4LLU;

	t23 = (x109*(x110%(x111|x112)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x113 = 20U;
	volatile int32_t x114 = 2162811;
	int64_t x115 = -1LL;
	volatile int64_t t24 = 3757313127525LL;

	t24 = (x113*(x114%(x115|x116)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = -1;
	uint8_t x118 = 2U;
	uint64_t x119 = UINT64_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	static volatile uint64_t t25 = 4689008LLU;

	t25 = (x117*(x118%(x119|x120)));

	if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x122 = INT16_MAX;
	static int8_t x123 = INT8_MIN;
	volatile int32_t x124 = INT32_MIN;

	t26 = (x121*(x122%(x123|x124)));

	if (t26 != 5207) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x126 = INT64_MAX;
	int8_t x127 = 2;
	int64_t t27 = -201244195315157LL;

	t27 = (x125*(x126%(x127|x128)));

	if (t27 != 4LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	uint8_t x130 = 1U;
	uint32_t x131 = UINT32_MAX;
	uint64_t x132 = 3185LLU;

	t28 = (x129*(x130%(x131|x132)));

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x134 = -1;
	volatile int64_t x135 = INT64_MIN;
	int16_t x136 = -1;
	volatile int64_t t29 = -66792709608LL;

	t29 = (x133*(x134%(x135|x136)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = 48U;
	int32_t x138 = INT32_MIN;
	int8_t x140 = -52;

	t30 = (x137*(x138%(x139|x140)));

	if (t30 != -1152LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x141 = 110U;
	int16_t x142 = INT16_MIN;
	int32_t x143 = -1;
	int64_t x144 = 14LL;
	volatile int64_t t31 = 9406940614378LL;

	t31 = (x141*(x142%(x143|x144)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x145 = 29U;
	volatile int64_t x146 = -111671740LL;
	int32_t x147 = 671;
	static int8_t x148 = INT8_MAX;
	int64_t t32 = -5881LL;

	t32 = (x145*(x146%(x147|x148)));

	if (t32 != -10875LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x149 = 92U;
	int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MIN;
	int64_t t33 = 240LL;

	t33 = (x149*(x150%(x151|x152)));

	if (t33 != -76820LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x153 = 3702377U;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = UINT8_MAX;
	uint32_t t34 = 156U;

	t34 = (x153*(x154%(x155|x156)));

	if (t34 != 403559093U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = 14148406341801LLU;
	volatile int16_t x159 = -1;
	int64_t x160 = -1LL;

	t35 = (x157*(x158%(x159|x160)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = UINT8_MAX;
	static volatile int32_t t36 = -20;

	t36 = (x161*(x162%(x163|x164)));

	if (t36 != 3315) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x167 = UINT64_MAX;
	volatile int64_t x168 = INT64_MAX;
	uint64_t t37 = 478523554LLU;

	t37 = (x165*(x166%(x167|x168)));

	if (t37 != 9264LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -1;
	static int64_t x170 = INT64_MAX;
	uint8_t x171 = UINT8_MAX;
	int32_t x172 = -1;
	volatile int64_t t38 = 32571112982738518LL;

	t38 = (x169*(x170%(x171|x172)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = -1;
	static volatile int32_t t39 = 53;

	t39 = (x173*(x174%(x175|x176)));

	if (t39 != 32768) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x179 = INT64_MAX;
	int64_t x180 = -1LL;
	volatile int64_t t40 = 1218767736LL;

	t40 = (x177*(x178%(x179|x180)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MAX;
	int64_t x183 = -227069757812109LL;
	static int8_t x184 = INT8_MAX;
	int64_t t41 = 229135270904316LL;

	t41 = (x181*(x182%(x183|x184)));

	if (t41 != -4194176LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MIN;
	uint8_t x186 = 110U;
	volatile int8_t x187 = -1;
	uint8_t x188 = 25U;
	int32_t t42 = 414;

	t42 = (x185*(x186%(x187|x188)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x190 = INT32_MIN;
	static uint8_t x191 = 8U;

	t43 = (x189*(x190%(x191|x192)));

	if (t43 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = -1;
	int16_t x195 = INT16_MIN;
	int16_t x196 = 0;
	volatile int32_t t44 = -6;

	t44 = (x193*(x194%(x195|x196)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x197 = 1U;
	static int16_t x198 = -483;
	int32_t x199 = INT32_MAX;
	static int64_t x200 = -1LL;
	int64_t t45 = 1LL;

	t45 = (x197*(x198%(x199|x200)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = UINT16_MAX;
	int64_t t46 = 81692406LL;

	t46 = (x201*(x202%(x203|x204)));

	if (t46 != -256LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = -1;
	int64_t x206 = -1LL;
	int64_t x207 = 3LL;

	t47 = (x205*(x206%(x207|x208)));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = INT32_MIN;
	static int32_t x210 = 35698;
	int32_t x211 = -171;
	volatile int64_t t48 = 534LL;

	t48 = (x209*(x210%(x211|x212)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MAX;
	uint32_t x214 = 3111157U;
	static volatile int8_t x215 = -1;

	t49 = (x213*(x214%(x215|x216)));

	if (t49 != 395116939U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = -7;
	int32_t x222 = 2897;
	static int32_t x223 = INT32_MAX;
	int32_t x224 = 273993294;

	t50 = (x221*(x222%(x223|x224)));

	if (t50 != -20279) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x229 = -5LL;
	int64_t x230 = -1LL;
	static int32_t x231 = INT32_MIN;
	static int32_t x232 = INT32_MIN;
	volatile int64_t t51 = -397LL;

	t51 = (x229*(x230%(x231|x232)));

	if (t51 != 5LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x233 = INT64_MAX;
	volatile uint8_t x234 = UINT8_MAX;
	int8_t x235 = -3;
	int64_t t52 = -2786787196LL;

	t52 = (x233*(x234%(x235|x236)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = 1;
	static int16_t x238 = INT16_MIN;
	volatile int8_t x239 = INT8_MIN;
	int32_t t53 = -94;

	t53 = (x237*(x238%(x239|x240)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = INT8_MAX;
	uint16_t x244 = 233U;
	static volatile int32_t t54 = -7;

	t54 = (x241*(x242%(x243|x244)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x246 = INT32_MIN;
	volatile int64_t t55 = -1422974738393515LL;

	t55 = (x245*(x246%(x247|x248)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x249 = INT8_MIN;
	static int32_t x251 = -1;
	static uint64_t x252 = UINT64_MAX;

	t56 = (x249*(x250%(x251|x252)));

	if (t56 != 18446744073709550848LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = -1;
	uint64_t x254 = UINT64_MAX;
	int64_t x256 = 15312459642LL;
	uint64_t t57 = 12167202719LLU;

	t57 = (x253*(x254%(x255|x256)));

	if (t57 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = 1;
	int16_t x258 = INT16_MIN;
	int32_t x259 = -98;
	int16_t x260 = INT16_MAX;
	volatile int32_t t58 = 40;

	t58 = (x257*(x258%(x259|x260)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = 611LL;
	volatile uint64_t x262 = 36655814117LLU;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MAX;

	t59 = (x261*(x262%(x263|x264)));

	if (t59 != 22396702425487LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x267 = INT32_MIN;
	static uint16_t x268 = UINT16_MAX;
	int32_t t60 = 1;

	t60 = (x265*(x266%(x267|x268)));

	if (t60 != -98304) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x269 = 8815868404LLU;
	int16_t x270 = INT16_MIN;
	volatile uint64_t x271 = 94118447827203032LLU;
	static int32_t x272 = INT32_MAX;
	volatile uint64_t t61 = 453432LLU;

	t61 = (x269*(x270%(x271|x272)));

	if (t61 != 8986014004367844572LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x274 = 54U;
	volatile int32_t x275 = -1;
	volatile int32_t t62 = -200;

	t62 = (x273*(x274%(x275|x276)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x277 = 110;
	uint16_t x278 = 34U;
	static int32_t x279 = INT32_MIN;
	volatile int32_t t63 = -18516138;

	t63 = (x277*(x278%(x279|x280)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x282 = INT8_MAX;
	volatile uint64_t x283 = 52987LLU;
	static int8_t x284 = -1;
	volatile uint64_t t64 = 810117481LLU;

	t64 = (x281*(x282%(x283|x284)));

	if (t64 != 693293LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x285 = -1;
	uint8_t x286 = UINT8_MAX;
	int16_t x287 = INT16_MIN;
	int32_t t65 = -206288839;

	t65 = (x285*(x286%(x287|x288)));

	if (t65 != -255) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x290 = -40772148602362676LL;
	uint32_t x292 = UINT32_MAX;
	int64_t t66 = 27239875204LL;

	t66 = (x289*(x290%(x291|x292)));

	if (t66 != -5192182402LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x293 = INT32_MAX;
	int8_t x294 = 20;
	int16_t x295 = INT16_MIN;
	int16_t x296 = -1;
	volatile int32_t t67 = -6;

	t67 = (x293*(x294%(x295|x296)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x301 = 11370U;
	static volatile int16_t x303 = -1;
	uint8_t x304 = 6U;
	uint32_t t68 = 46U;

	t68 = (x301*(x302%(x303|x304)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = 0;
	uint64_t x306 = 2544LLU;
	uint32_t x307 = 196673U;
	volatile int16_t x308 = INT16_MIN;

	t69 = (x305*(x306%(x307|x308)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x309 = INT8_MIN;
	int32_t x312 = INT32_MIN;
	volatile int64_t t70 = -8125517204401LL;

	t70 = (x309*(x310%(x311|x312)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x314 = INT32_MIN;
	volatile int8_t x315 = -1;
	volatile uint8_t x316 = 0U;
	volatile uint64_t t71 = 18795263LLU;

	t71 = (x313*(x314%(x315|x316)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x317 = 7U;
	volatile uint64_t t72 = 373745038LLU;

	t72 = (x317*(x318%(x319|x320)));

	if (t72 != 21623LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x322 = 116295LLU;
	int8_t x323 = INT8_MAX;
	uint16_t x324 = 4U;
	volatile uint64_t t73 = 155036546229LLU;

	t73 = (x321*(x322%(x323|x324)));

	if (t73 != 90LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MIN;
	volatile uint32_t x327 = 828628U;
	uint32_t x328 = 1U;

	t74 = (x325*(x326%(x327|x328)));

	if (t74 != 1703392491U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x331 = INT8_MAX;
	uint64_t t75 = 29LLU;

	t75 = (x329*(x330%(x331|x332)));

	if (t75 != 2010LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x333 = UINT32_MAX;
	uint8_t x334 = 41U;
	int8_t x336 = -1;
	volatile uint32_t t76 = 1610U;

	t76 = (x333*(x334%(x335|x336)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = -1;
	uint32_t x338 = 9868783U;
	volatile int16_t x339 = -1;
	uint8_t x340 = 28U;
	uint32_t t77 = 1898U;

	t77 = (x337*(x338%(x339|x340)));

	if (t77 != 4285098513U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x341 = 7U;
	volatile int32_t x342 = INT32_MIN;
	int16_t x344 = INT16_MAX;
	int32_t t78 = -1;

	t78 = (x341*(x342%(x343|x344)));

	if (t78 != -14) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x348 = INT8_MIN;

	t79 = (x345*(x346%(x347|x348)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x354 = -292;
	int16_t x355 = INT16_MAX;
	static int8_t x356 = INT8_MAX;
	static uint32_t t80 = 1289962429U;

	t80 = (x353*(x354%(x355|x356)));

	if (t80 != 4280691124U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x357 = -13890069;
	int32_t x358 = INT32_MIN;
	volatile uint8_t x359 = 33U;
	int32_t x360 = INT32_MIN;
	static volatile int32_t t81 = -411299057;

	t81 = (x357*(x358%(x359|x360)));

	if (t81 != 458372277) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = INT8_MIN;
	int64_t x362 = INT64_MAX;
	int32_t x363 = INT32_MIN;
	volatile int64_t t82 = -503164598916992LL;

	t82 = (x361*(x362%(x363|x364)));

	if (t82 != -16646272LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = 45867991;
	int32_t x366 = -1;
	uint8_t x367 = UINT8_MAX;
	volatile int8_t x368 = -1;
	int32_t t83 = -9;

	t83 = (x365*(x366%(x367|x368)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = -606882;
	int64_t x371 = INT64_MAX;
	int32_t x372 = INT32_MAX;
	int64_t t84 = -252438007351823524LL;

	t84 = (x369*(x370%(x371|x372)));

	if (t84 != 77680896LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = 103LL;
	volatile uint32_t x374 = 4U;
	int64_t x375 = -480954669551LL;
	int64_t x376 = INT64_MAX;
	volatile int64_t t85 = 13998202791LL;

	t85 = (x373*(x374%(x375|x376)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x378 = 3031U;
	static volatile int8_t x379 = 52;
	volatile uint32_t x380 = 110948U;

	t86 = (x377*(x378%(x379|x380)));

	if (t86 != 294007U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x382 = 3571990LLU;
	int16_t x383 = INT16_MAX;
	int8_t x384 = 0;
	volatile uint64_t t87 = 20884LLU;

	t87 = (x381*(x382%(x383|x384)));

	if (t87 != 18446744073709549681LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x385 = INT32_MIN;
	static volatile uint64_t x386 = UINT64_MAX;
	int16_t x388 = 0;
	volatile uint64_t t88 = 22LLU;

	t88 = (x385*(x386%(x387|x388)));

	if (t88 != 17738888248060542976LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x390 = INT16_MIN;
	uint8_t x391 = 6U;
	static volatile uint64_t t89 = 11789696605834LLU;

	t89 = (x389*(x390%(x391|x392)));

	if (t89 != 18445440454323076632LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x393 = 1668727669U;
	int16_t x394 = INT16_MIN;
	uint32_t x396 = UINT32_MAX;

	t90 = (x393*(x394%(x395|x396)));

	if (t90 != 2655354880U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x397 = INT32_MAX;
	static uint16_t x398 = UINT16_MAX;
	static int64_t x399 = -311322485LL;
	static uint64_t x400 = UINT64_MAX;
	volatile uint64_t t91 = 4853764690762LLU;

	t91 = (x397*(x398%(x399|x400)));

	if (t91 != 140735340806145LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x401 = -10;
	volatile int32_t x403 = -2;
	int8_t x404 = 10;

	t92 = (x401*(x402%(x403|x404)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x405 = -12929;
	uint16_t x406 = 112U;
	int16_t x407 = -1;
	static int64_t x408 = INT64_MIN;

	t93 = (x405*(x406%(x407|x408)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MIN;
	static int64_t x411 = 3774947825150233LL;
	uint16_t x412 = 0U;
	int64_t t94 = -18764565583LL;

	t94 = (x409*(x410%(x411|x412)));

	if (t94 != 4194304LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x413 = INT8_MIN;
	uint32_t x415 = 5725482U;
	static volatile int16_t x416 = INT16_MIN;
	int64_t t95 = -1307961958LL;

	t95 = (x413*(x414%(x415|x416)));

	if (t95 != -26738254464LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x417 = UINT64_MAX;
	int8_t x418 = INT8_MAX;
	uint8_t x420 = 27U;
	uint64_t t96 = 6LLU;

	t96 = (x417*(x418%(x419|x420)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = -1LL;
	volatile int16_t x422 = -7;
	static int32_t x423 = INT32_MAX;

	t97 = (x421*(x422%(x423|x424)));

	if (t97 != 7LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = INT8_MIN;
	uint16_t x427 = UINT16_MAX;
	uint32_t x428 = 1293U;
	static uint32_t t98 = 10431U;

	t98 = (x425*(x426%(x427|x428)));

	if (t98 != 4290772992U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x430 = 3U;
	int8_t x432 = INT8_MAX;
	int32_t t99 = -8062042;

	t99 = (x429*(x430%(x431|x432)));

	if (t99 != -3) { NG(); } else { ; }
	
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

