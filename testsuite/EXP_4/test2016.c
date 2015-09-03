#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t2 = -91544678013LL;
int16_t x19 = 5;
int8_t x20 = INT8_MIN;
volatile int32_t x23 = INT32_MIN;
static int8_t x25 = -6;
int32_t t6 = 31353;
int16_t x29 = 525;
volatile int8_t x30 = INT8_MIN;
int32_t t7 = -952286;
static uint8_t x34 = 44U;
int8_t x36 = -1;
static int32_t x45 = INT32_MIN;
volatile int32_t x51 = -1;
int32_t x58 = INT32_MIN;
uint32_t x71 = 188739546U;
volatile int32_t x84 = -9;
int64_t x87 = -1LL;
uint8_t x88 = 0U;
int64_t x91 = INT64_MIN;
int16_t x97 = -1;
static volatile int32_t t22 = 0;
uint64_t t23 = 2045413773221157LLU;
int64_t x105 = INT64_MAX;
static uint8_t x106 = 59U;
int16_t x112 = INT16_MIN;
int64_t x114 = INT64_MIN;
static uint16_t x115 = 60U;
static volatile int64_t t26 = 4156637473569LL;
int32_t x126 = INT32_MIN;
static uint16_t x127 = UINT16_MAX;
volatile uint16_t x131 = UINT16_MAX;
uint16_t x146 = UINT16_MAX;
static int64_t x152 = 21LL;
int16_t x154 = 1;
int32_t x161 = INT32_MAX;
static volatile int32_t t37 = 2092349;
int16_t x171 = INT16_MIN;
volatile uint64_t x173 = 82228LLU;
volatile uint8_t x178 = 14U;
uint64_t x184 = 6781LLU;
int32_t x186 = INT32_MIN;
volatile uint16_t x189 = 217U;
volatile uint64_t t43 = 7938LLU;
uint8_t x195 = UINT8_MAX;
int64_t x198 = -1LL;
int32_t x199 = INT32_MIN;
int64_t t46 = 20555924342LL;
int16_t x205 = INT16_MIN;
int64_t x206 = INT64_MIN;
int64_t t47 = 2784300592813LL;
uint32_t x210 = UINT32_MAX;
int16_t x213 = -1;
int32_t x215 = -10645;
volatile int32_t t49 = 68;
uint8_t x221 = UINT8_MAX;
volatile int8_t x222 = INT8_MIN;
static volatile uint32_t t51 = 50120018U;
uint8_t x229 = 41U;
volatile int64_t x232 = -7674LL;
int8_t x236 = 1;
volatile uint64_t t53 = 1588LLU;
uint8_t x241 = 9U;
volatile uint16_t x242 = 1U;
uint16_t x249 = 3724U;
uint32_t x261 = UINT32_MAX;
int64_t x262 = INT64_MIN;
volatile uint32_t x264 = 2420U;
volatile int8_t x288 = -1;
static uint16_t x294 = UINT16_MAX;
uint16_t x298 = 8044U;
volatile int32_t x299 = INT32_MAX;
int32_t x303 = INT32_MAX;
volatile int32_t t69 = -249;
int16_t x305 = INT16_MIN;
int16_t x313 = 0;
int8_t x323 = -1;
uint16_t x328 = UINT16_MAX;
volatile uint32_t x330 = UINT32_MAX;
static int8_t x331 = INT8_MAX;
static uint64_t x334 = 212955676LLU;
static int64_t x338 = -231LL;
uint8_t x343 = UINT8_MAX;
int64_t x346 = -4028069LL;
int16_t x354 = INT16_MIN;
volatile uint64_t x363 = 4299027047LLU;
uint32_t x370 = 1418373930U;
uint64_t x372 = 4771300LLU;
static uint64_t x377 = UINT64_MAX;
volatile uint64_t t87 = UINT64_MAX;
static volatile uint16_t x385 = 18268U;
uint32_t x387 = UINT32_MAX;
uint32_t x397 = 2988595U;
static uint8_t x401 = 23U;
int32_t t94 = -26898;
uint32_t x411 = UINT32_MAX;
int64_t x418 = -1LL;
int64_t x423 = INT64_MAX;
volatile int64_t t98 = 952546745033658039LL;
int64_t t99 = -1798209928809892LL;


void f0(void) {
	static int8_t x1 = -1;
	int8_t x2 = INT8_MAX;
	int32_t x3 = -1;
	int16_t x4 = -1;
	volatile int32_t t0 = -1;

	t0 = (x1+(x2^(x3|x4)));

	if (t0 != -129) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 272U;
	volatile uint8_t x6 = UINT8_MAX;
	static volatile int16_t x7 = INT16_MAX;
	volatile int16_t x8 = -1;
	uint32_t t1 = 16242506U;

	t1 = (x5+(x6^(x7|x8)));

	if (t1 != 16U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	int16_t x10 = -1;
	int64_t x11 = -1LL;
	volatile int8_t x12 = INT8_MAX;

	t2 = (x9+(x10^(x11|x12)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x14 = -26;
	uint64_t x15 = UINT64_MAX;
	uint16_t x16 = UINT16_MAX;
	uint64_t t3 = 25071820837652781LLU;

	t3 = (x13+(x14^(x15|x16)));

	if (t3 != 18446744071562067993LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	static volatile int8_t x18 = INT8_MAX;
	static int32_t t4 = -30923138;

	t4 = (x17+(x18^(x19|x20)));

	if (t4 != 65529) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	volatile int64_t x22 = INT64_MIN;
	int32_t x24 = INT32_MAX;
	volatile int64_t t5 = 705359435412912LL;

	t5 = (x21+(x22^(x23|x24)));

	if (t5 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 14U;
	uint8_t x27 = 10U;
	uint16_t x28 = UINT16_MAX;

	t6 = (x25+(x26^(x27|x28)));

	if (t6 != 65515) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x31 = 833;
	static int32_t x32 = INT32_MIN;

	t7 = (x29+(x30^(x31|x32)));

	if (t7 != 2147483342) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -487781;
	int64_t x35 = INT64_MIN;
	int64_t t8 = 6230LL;

	t8 = (x33+(x34^(x35|x36)));

	if (t8 != -487826LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 48;
	volatile int64_t x38 = -5691186912926961LL;
	volatile int8_t x39 = -1;
	static uint64_t x40 = 48950466LLU;
	volatile uint64_t t9 = 490732100439LLU;

	t9 = (x37+(x38^(x39|x40)));

	if (t9 != 5691186912927008LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	volatile int32_t x42 = -1;
	int32_t x43 = -1;
	static int8_t x44 = INT8_MIN;
	static int32_t t10 = 29;

	t10 = (x41+(x42^(x43|x44)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = 23639295308LL;
	volatile uint8_t x47 = 0U;
	int64_t x48 = INT64_MAX;
	int64_t t11 = 3712LL;

	t11 = (x45+(x46^(x47|x48)));

	if (t11 != 9223372011067996851LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -222;
	static uint64_t x50 = UINT64_MAX;
	int8_t x52 = 2;
	uint64_t t12 = 2005367010535LLU;

	t12 = (x49+(x50^(x51|x52)));

	if (t12 != 18446744073709551394LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 672732670;
	int8_t x54 = 1;
	static int8_t x55 = -4;
	int16_t x56 = -2252;
	volatile int32_t t13 = 561187320;

	t13 = (x53+(x54^(x55|x56)));

	if (t13 != 672732667) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = 0;
	static int16_t x59 = -2;
	int64_t x60 = INT64_MAX;
	int64_t t14 = -3LL;

	t14 = (x57+(x58^(x59|x60)));

	if (t14 != 2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MAX;
	volatile int8_t x67 = 2;
	uint16_t x68 = 0U;
	static volatile int32_t t15 = 12819037;

	t15 = (x65+(x66^(x67|x68)));

	if (t15 != 98300) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	uint32_t x70 = 887U;
	volatile int16_t x72 = -1;
	volatile uint32_t t16 = 3U;

	t16 = (x69+(x70^(x71|x72)));

	if (t16 != 4294966280U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = 542227494LLU;
	volatile int8_t x74 = 52;
	volatile int32_t x75 = -14647995;
	int64_t x76 = INT64_MAX;
	uint64_t t17 = 205583LLU;

	t17 = (x73+(x74^(x75|x76)));

	if (t17 != 542227441LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -15634;
	static int32_t x78 = INT32_MAX;
	volatile uint8_t x79 = UINT8_MAX;
	volatile int64_t x80 = -1LL;
	static int64_t t18 = 77992821095546LL;

	t18 = (x77+(x78^(x79|x80)));

	if (t18 != -2147499282LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = 15U;
	volatile uint16_t x82 = 6625U;
	volatile int8_t x83 = -1;
	int32_t t19 = 105396483;

	t19 = (x81+(x82^(x83|x84)));

	if (t19 != -6611) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = 3719U;
	int16_t x86 = -1;
	static int64_t t20 = -8766LL;

	t20 = (x85+(x86^(x87|x88)));

	if (t20 != 3719LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x89 = INT8_MIN;
	int32_t x90 = INT32_MIN;
	static uint8_t x92 = 16U;
	volatile int64_t t21 = 8429784LL;

	t21 = (x89+(x90^(x91|x92)));

	if (t21 != 9223372034707292048LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x98 = UINT16_MAX;
	static int32_t x99 = INT32_MIN;
	int32_t x100 = INT32_MIN;

	t22 = (x97+(x98^(x99|x100)));

	if (t22 != -2147418114) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = UINT8_MAX;
	int32_t x102 = -1;
	volatile uint64_t x103 = 1971LLU;
	int64_t x104 = 0LL;

	t23 = (x101+(x102^(x103|x104)));

	if (t23 != 18446744073709549899LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x107 = 764U;
	static int16_t x108 = -160;
	volatile int64_t t24 = 446530LL;

	t24 = (x105+(x106^(x107|x108)));

	if (t24 != 9223372036854775750LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x109 = 80;
	volatile uint32_t x110 = 45474553U;
	uint8_t x111 = 15U;
	uint32_t t25 = 10331U;

	t25 = (x109+(x110^(x111|x112)));

	if (t25 != 4249510726U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 951U;
	volatile int64_t x116 = INT64_MIN;

	t26 = (x113+(x114^(x115|x116)));

	if (t26 != 1011LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	uint32_t x118 = 343003715U;
	int8_t x119 = INT8_MIN;
	uint64_t x120 = 469945LLU;
	uint64_t t27 = 80818387236533LLU;

	t27 = (x117+(x118^(x119|x120)));

	if (t27 != 9223372036511772154LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x121 = UINT32_MAX;
	int16_t x122 = 1;
	volatile int8_t x123 = -11;
	int16_t x124 = INT16_MAX;
	static uint32_t t28 = 14356U;

	t28 = (x121+(x122^(x123|x124)));

	if (t28 != 4294967293U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MAX;
	uint16_t x128 = 81U;
	int32_t t29 = -59;

	t29 = (x125+(x126^(x127|x128)));

	if (t29 != -2147417986) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x129 = -1;
	uint16_t x130 = 46U;
	int8_t x132 = INT8_MIN;
	volatile int32_t t30 = -6;

	t30 = (x129+(x130^(x131|x132)));

	if (t30 != -48) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 332651015U;
	uint16_t x142 = 1U;
	int64_t x143 = -23707010672979LL;
	int32_t x144 = INT32_MIN;
	int64_t t31 = 117583658161464991LL;

	t31 = (x141+(x142^(x143|x144)));

	if (t31 != -606031693LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MIN;
	int64_t x147 = 25505471101944LL;
	int32_t x148 = 58;
	static volatile int64_t t32 = 7312198776528943LL;

	t32 = (x145+(x146^(x147|x148)));

	if (t32 != -9223346531383671803LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -1583371;
	volatile int8_t x150 = INT8_MIN;
	volatile int8_t x151 = -1;
	volatile int64_t t33 = -2187317LL;

	t33 = (x149+(x150^(x151|x152)));

	if (t33 != -1583244LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x153 = 13U;
	int64_t x155 = INT64_MIN;
	int8_t x156 = INT8_MAX;
	volatile int64_t t34 = 63LL;

	t34 = (x153+(x154^(x155|x156)));

	if (t34 != -9223372036854775669LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MIN;
	static int16_t x158 = 1;
	volatile int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MIN;
	volatile int32_t t35 = -388;

	t35 = (x157+(x158^(x159|x160)));

	if (t35 != -255) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x162 = -1;
	static int64_t x163 = INT64_MAX;
	volatile uint16_t x164 = UINT16_MAX;
	static int64_t t36 = 16159040305287118LL;

	t36 = (x161+(x162^(x163|x164)));

	if (t36 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x165 = 2U;
	volatile int32_t x166 = -25292;
	static volatile uint16_t x167 = 183U;
	static int16_t x168 = 1;

	t37 = (x165+(x166^(x167|x168)));

	if (t37 != -25211) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -25;
	int16_t x170 = 31;
	uint8_t x172 = 1U;
	int32_t t38 = 248117;

	t38 = (x169+(x170^(x171|x172)));

	if (t38 != -32763) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	uint32_t x176 = 3303567U;
	uint64_t t39 = 2208065751723964LLU;

	t39 = (x173+(x174^(x175|x176)));

	if (t39 != 9223372041149819331LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x177 = 236962LLU;
	int8_t x179 = -1;
	uint32_t x180 = 6U;
	volatile uint64_t t40 = 444902318LLU;

	t40 = (x177+(x178^(x179|x180)));

	if (t40 != 4295204243LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x181 = 778595790297750LLU;
	volatile int64_t x182 = INT64_MAX;
	int64_t x183 = -1LL;
	volatile uint64_t t41 = 352994715738528001LLU;

	t41 = (x181+(x182^(x183|x184)));

	if (t41 != 9224150632645073558LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MAX;
	int32_t x187 = -30;
	int64_t x188 = INT64_MIN;
	int64_t t42 = 1907923333160270503LL;

	t42 = (x185+(x186^(x187|x188)));

	if (t42 != 2147516385LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x190 = -1;
	uint64_t x191 = 7224648LLU;
	static int8_t x192 = -59;

	t43 = (x189+(x190^(x191|x192)));

	if (t43 != 267LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = 12121U;
	volatile int64_t x194 = INT64_MIN;
	static int8_t x196 = INT8_MAX;
	int64_t t44 = -153LL;

	t44 = (x193+(x194^(x195|x196)));

	if (t44 != -9223372036854763432LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MIN;
	volatile int8_t x200 = INT8_MAX;
	int64_t t45 = 44282890LL;

	t45 = (x197+(x198^(x199|x200)));

	if (t45 != 2147450752LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = 1LL;
	int16_t x202 = -1;
	int16_t x203 = -2069;
	int8_t x204 = -4;

	t46 = (x201+(x202^(x203|x204)));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x207 = 9;
	int16_t x208 = -693;

	t47 = (x205+(x206^(x207|x208)));

	if (t47 != 9223372036854742347LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x209 = INT64_MAX;
	volatile int64_t x211 = INT64_MIN;
	uint32_t x212 = 989284184U;
	static volatile int64_t t48 = 1479252848LL;

	t48 = (x209+(x210^(x211|x212)));

	if (t48 != 3305683110LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x214 = 1050;
	volatile int32_t x216 = -1;

	t49 = (x213+(x214^(x215|x216)));

	if (t49 != -1052) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x217 = INT32_MIN;
	int64_t x218 = INT64_MIN;
	int32_t x219 = -1;
	uint16_t x220 = 1962U;
	volatile int64_t t50 = -211484881832LL;

	t50 = (x217+(x218^(x219|x220)));

	if (t50 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x223 = 439U;
	int16_t x224 = -21;

	t51 = (x221+(x222^(x223|x224)));

	if (t51 != 382U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x230 = INT32_MAX;
	volatile int32_t x231 = 0;
	volatile int64_t t52 = 1732593226734LL;

	t52 = (x229+(x230^(x231|x232)));

	if (t52 != -2147475934LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x233 = 16196;
	int16_t x234 = -58;
	volatile uint64_t x235 = 38563747743673905LLU;

	t53 = (x233+(x234^(x235|x236)));

	if (t53 != 18408180325965893947LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = INT64_MIN;
	uint64_t x238 = 5773060659239LLU;
	static int16_t x239 = -1;
	uint16_t x240 = 13U;
	uint64_t t54 = 336144528714683LLU;

	t54 = (x237+(x238^(x239|x240)));

	if (t54 != 9223366263794116568LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x243 = 54785LLU;
	int32_t x244 = INT32_MIN;
	static volatile uint64_t t55 = 23545186LLU;

	t55 = (x241+(x242^(x243|x244)));

	if (t55 != 18446744071562122761LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MAX;
	volatile int8_t x246 = INT8_MIN;
	int32_t x247 = -21127;
	volatile int64_t x248 = INT64_MIN;
	volatile int64_t t56 = -158845337780070029LL;

	t56 = (x245+(x246^(x247|x248)));

	if (t56 != 54008LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x250 = 16;
	uint64_t x251 = 557136728LLU;
	int32_t x252 = INT32_MAX;
	static volatile uint64_t t57 = 8LLU;

	t57 = (x249+(x250^(x251|x252)));

	if (t57 != 2147487355LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = 2003940453LLU;
	int8_t x254 = INT8_MIN;
	int16_t x255 = -2;
	int8_t x256 = -61;
	uint64_t t58 = 531616588115357LLU;

	t58 = (x253+(x254^(x255|x256)));

	if (t58 != 2003940580LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	int8_t x259 = -1;
	static volatile int32_t x260 = INT32_MAX;
	int32_t t59 = 212;

	t59 = (x257+(x258^(x259|x260)));

	if (t59 != -2147483521) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x263 = 397307;
	volatile int64_t t60 = -45047246694495LL;

	t60 = (x261+(x262^(x263|x264)));

	if (t60 != -9223372032559411202LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = -1;
	int16_t x266 = -1;
	uint8_t x267 = UINT8_MAX;
	int64_t x268 = -1LL;
	int64_t t61 = -237389465693LL;

	t61 = (x265+(x266^(x267|x268)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = -1;
	int16_t x274 = INT16_MAX;
	uint32_t x275 = 1U;
	int16_t x276 = -1804;
	uint32_t t62 = 164239U;

	t62 = (x273+(x274^(x275|x276)));

	if (t62 != 4294936329U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = -4534158;
	volatile int16_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	volatile int8_t x280 = INT8_MAX;
	static volatile int32_t t63 = 125693098;

	t63 = (x277+(x278^(x279|x280)));

	if (t63 != -4534414) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x281 = UINT8_MAX;
	volatile int16_t x282 = INT16_MAX;
	int64_t x283 = 71085LL;
	int8_t x284 = -14;
	volatile int64_t t64 = 81551LL;

	t64 = (x281+(x282^(x283|x284)));

	if (t64 != -32513LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x285 = INT8_MIN;
	int16_t x286 = -14115;
	uint64_t x287 = 13329895LLU;
	uint64_t t65 = 40732688349LLU;

	t65 = (x285+(x286^(x287|x288)));

	if (t65 != 13986LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MIN;
	int32_t x291 = 186182;
	static uint16_t x292 = UINT16_MAX;
	volatile int32_t t66 = -121;

	t66 = (x289+(x290^(x291|x292)));

	if (t66 != -163969) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = 4U;
	int64_t x295 = -98606522992678LL;
	static int64_t x296 = INT64_MIN;
	int64_t t67 = 451993361088LL;

	t67 = (x293+(x294^(x295|x296)));

	if (t67 != -98606522988503LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x297 = UINT16_MAX;
	uint32_t x300 = 3724U;
	volatile uint32_t t68 = 7U;

	t68 = (x297+(x298^(x299|x300)));

	if (t68 != 2147541138U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = 0;
	int16_t x302 = 3961;
	volatile int16_t x304 = INT16_MIN;

	t69 = (x301+(x302^(x303|x304)));

	if (t69 != -3962) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x306 = INT16_MIN;
	int32_t x307 = -7641;
	int16_t x308 = INT16_MAX;
	int32_t t70 = 196428434;

	t70 = (x305+(x306^(x307|x308)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x314 = 39685438LLU;
	int8_t x315 = -22;
	static int32_t x316 = -1;
	volatile uint64_t t71 = 8512071572405691575LLU;

	t71 = (x313+(x314^(x315|x316)));

	if (t71 != 18446744073669866177LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = INT64_MIN;
	static int8_t x318 = -1;
	static int64_t x319 = -64955428812259211LL;
	static uint16_t x320 = UINT16_MAX;
	static int64_t t72 = 30LL;

	t72 = (x317+(x318^(x319|x320)));

	if (t72 != -9158416608042549248LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x321 = -1;
	static int8_t x322 = -3;
	int8_t x324 = 12;
	volatile int32_t t73 = -959942;

	t73 = (x321+(x322^(x323|x324)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MAX;
	uint64_t x327 = 996817LLU;
	volatile uint64_t t74 = 1386839465324139323LLU;

	t74 = (x325+(x326^(x327|x328)));

	if (t74 != 9223372036855791616LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x329 = -2;
	int32_t x332 = -31824501;
	volatile uint32_t t75 = 78666994U;

	t75 = (x329+(x330^(x331|x332)));

	if (t75 != 31824382U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int8_t x335 = -1;
	static uint16_t x336 = 0U;
	uint64_t t76 = 6558995752026LLU;

	t76 = (x333+(x334^(x335|x336)));

	if (t76 != 18446744073496595938LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = 4367199;
	int64_t x339 = -1LL;
	volatile int32_t x340 = INT32_MIN;
	volatile int64_t t77 = -10558490LL;

	t77 = (x337+(x338^(x339|x340)));

	if (t77 != 4367429LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x341 = INT32_MAX;
	int32_t x342 = INT32_MIN;
	int64_t x344 = 198915430380836025LL;
	volatile int64_t t78 = -359808998547486859LL;

	t78 = (x341+(x342^(x343|x344)));

	if (t78 != -198915428763724546LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x345 = UINT64_MAX;
	uint16_t x347 = 16219U;
	uint32_t x348 = 3U;
	static uint64_t t79 = 1635555841LLU;

	t79 = (x345+(x346^(x347|x348)));

	if (t79 != 18446744073705534975LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = 17;
	int8_t x350 = INT8_MIN;
	volatile int16_t x351 = -1;
	volatile uint16_t x352 = UINT16_MAX;
	int32_t t80 = -1;

	t80 = (x349+(x350^(x351|x352)));

	if (t80 != 144) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x353 = 7U;
	int8_t x355 = 6;
	static uint64_t x356 = 37416LLU;
	uint64_t t81 = 3180597309644138LLU;

	t81 = (x353+(x354^(x355|x356)));

	if (t81 != 18446744073709490741LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = 2912712LL;
	uint64_t x358 = 26LLU;
	uint8_t x359 = UINT8_MAX;
	volatile int32_t x360 = INT32_MIN;
	uint64_t t82 = 23078952LLU;

	t82 = (x357+(x358^(x359|x360)));

	if (t82 != 18446744071564980909LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = INT8_MIN;
	int8_t x364 = INT8_MIN;
	uint64_t t83 = 5LLU;

	t83 = (x361+(x362^(x363|x364)));

	if (t83 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x365 = UINT64_MAX;
	int64_t x366 = INT64_MAX;
	volatile uint64_t x367 = UINT64_MAX;
	int16_t x368 = 189;
	uint64_t t84 = 832161699435071577LLU;

	t84 = (x365+(x366^(x367|x368)));

	if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x369 = INT16_MIN;
	volatile uint32_t x371 = 109U;
	static volatile uint64_t t85 = 14756754LLU;

	t85 = (x369+(x370^(x371|x372)));

	if (t85 != 1421993671LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x373 = UINT64_MAX;
	int8_t x374 = INT8_MIN;
	int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MAX;
	volatile uint64_t t86 = 6632282006447287720LLU;

	t86 = (x373+(x374^(x375|x376)));

	if (t86 != 126LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x378 = -1;
	static uint8_t x379 = 1U;
	volatile uint64_t x380 = UINT64_MAX;

	t87 = (x377+(x378^(x379|x380)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = -1LL;
	int64_t x382 = -75854693180LL;
	int16_t x383 = INT16_MAX;
	int32_t x384 = -71;
	volatile int64_t t88 = -10728667169LL;

	t88 = (x381+(x382^(x383|x384)));

	if (t88 != 75854693178LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x386 = UINT32_MAX;
	int16_t x388 = 0;
	uint32_t t89 = 45U;

	t89 = (x385+(x386^(x387|x388)));

	if (t89 != 18268U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = INT32_MIN;
	static int64_t x390 = -1LL;
	static volatile int64_t x391 = -1LL;
	uint16_t x392 = UINT16_MAX;
	int64_t t90 = 1197048269947LL;

	t90 = (x389+(x390^(x391|x392)));

	if (t90 != -2147483648LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x393 = 279U;
	uint8_t x394 = 70U;
	int32_t x395 = -1;
	int8_t x396 = INT8_MIN;
	uint32_t t91 = 373728U;

	t91 = (x393+(x394^(x395|x396)));

	if (t91 != 208U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x398 = -1;
	uint8_t x399 = 20U;
	uint8_t x400 = 121U;
	uint32_t t92 = 7U;

	t92 = (x397+(x398^(x399|x400)));

	if (t92 != 2988469U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x402 = -22LL;
	static uint32_t x403 = UINT32_MAX;
	int64_t x404 = 127813LL;
	static volatile int64_t t93 = 3800430660192012624LL;

	t93 = (x401+(x402^(x403|x404)));

	if (t93 != -4294967252LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = INT8_MIN;
	int16_t x406 = INT16_MIN;
	volatile int16_t x407 = -1;
	int8_t x408 = 11;

	t94 = (x405+(x406^(x407|x408)));

	if (t94 != 32639) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = INT8_MIN;
	volatile int8_t x410 = INT8_MIN;
	int8_t x412 = 0;
	static volatile uint32_t t95 = UINT32_MAX;

	t95 = (x409+(x410^(x411|x412)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x413 = INT16_MAX;
	int32_t x414 = INT32_MIN;
	int8_t x415 = -1;
	int64_t x416 = INT64_MIN;
	static int64_t t96 = -79243369007353LL;

	t96 = (x413+(x414^(x415|x416)));

	if (t96 != 2147516414LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x417 = INT32_MIN;
	int8_t x419 = -1;
	uint32_t x420 = UINT32_MAX;
	volatile int64_t t97 = 3015LL;

	t97 = (x417+(x418^(x419|x420)));

	if (t97 != -6442450944LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = 17615LL;
	volatile uint32_t x424 = 7719835U;

	t98 = (x421+(x422^(x423|x424)));

	if (t98 != 9223372036854725424LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x425 = INT64_MIN;
	static uint32_t x426 = 776U;
	int64_t x427 = 4472770889LL;
	volatile int8_t x428 = INT8_MAX;

	t99 = (x425+(x426^(x427|x428)));

	if (t99 != -9223372032382004617LL) { NG(); } else { ; }
	
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

