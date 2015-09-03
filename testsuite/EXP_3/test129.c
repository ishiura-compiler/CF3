#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MIN;
int8_t x11 = -1;
uint16_t x12 = 858U;
int32_t x13 = INT32_MIN;
volatile int8_t x17 = INT8_MAX;
uint64_t t4 = 517819965270577LLU;
volatile int8_t x29 = INT8_MIN;
volatile int32_t t7 = 2881;
volatile int16_t x39 = INT16_MIN;
static int8_t x40 = 7;
int32_t t8 = 3299;
volatile int32_t t9 = -1;
uint16_t x46 = 5112U;
int64_t x55 = INT64_MAX;
static uint8_t x91 = 2U;
volatile int32_t t19 = 18;
static volatile int32_t x105 = 112613849;
uint64_t x115 = UINT64_MAX;
volatile int64_t t25 = 244968743999613LL;
int64_t x121 = INT64_MIN;
volatile int8_t x126 = INT8_MIN;
volatile uint32_t x135 = 125601U;
static volatile uint16_t x137 = 90U;
int32_t t30 = INT32_MIN;
int64_t x143 = -2817306901796LL;
int32_t x144 = INT32_MIN;
volatile uint8_t x146 = UINT8_MAX;
int16_t x156 = INT16_MIN;
static uint64_t x164 = 5467312161721LLU;
volatile int8_t x177 = INT8_MIN;
static int64_t x182 = -887143370118494LL;
volatile int32_t t40 = 1061;
int64_t x186 = -1LL;
static volatile int32_t t41 = -121;
int8_t x189 = -1;
int16_t x193 = 19;
int16_t x195 = INT16_MAX;
volatile int64_t x196 = -498151465LL;
volatile uint32_t t44 = 246013U;
int64_t x215 = INT64_MIN;
static uint16_t x216 = 10U;
volatile int64_t t46 = -11010016LL;
int16_t x220 = -1;
uint64_t x225 = 76819LLU;
uint64_t x227 = 203294993LLU;
int8_t x231 = -1;
uint8_t x232 = 75U;
volatile int16_t x239 = INT16_MIN;
static uint64_t x242 = UINT64_MAX;
static int16_t x243 = INT16_MAX;
int8_t x244 = -57;
int32_t x245 = INT32_MAX;
volatile int32_t x254 = INT32_MAX;
static int64_t x257 = -60569670493428LL;
int64_t x261 = -808734993LL;
int16_t x264 = -1;
uint8_t x271 = 0U;
volatile int8_t x274 = -1;
uint64_t x276 = UINT64_MAX;
int64_t x283 = INT64_MIN;
int8_t x295 = INT8_MIN;
volatile int16_t x298 = -94;
uint8_t x299 = 54U;
int32_t t66 = -173328120;
static uint64_t x301 = 250LLU;
int32_t x307 = -2;
volatile int32_t t68 = 0;
static volatile int8_t x311 = INT8_MIN;
uint16_t x318 = 3U;
int8_t x320 = -1;
int32_t t71 = 0;
int32_t x332 = INT32_MIN;
uint64_t x347 = 228857LLU;
volatile int32_t x350 = INT32_MIN;
int32_t x353 = 2185957;
int8_t x355 = 3;
int8_t x362 = -3;
static volatile int64_t x366 = INT64_MIN;
static volatile uint8_t x368 = 63U;
static uint32_t x380 = 167506802U;
volatile uint32_t t82 = 15342168U;
static uint32_t x381 = 3815U;
uint8_t x386 = 2U;
uint8_t x393 = 5U;
uint16_t x404 = 9U;
volatile int32_t t88 = 7602576;
uint16_t x406 = 1703U;
int32_t x408 = INT32_MAX;
volatile int32_t t92 = 1686421;
static uint16_t x421 = 25210U;
volatile uint8_t x427 = 108U;
volatile int8_t x429 = -1;
static uint16_t x434 = 0U;
uint16_t x441 = 300U;
int16_t x442 = -1;
static int8_t x443 = 1;
static int32_t x449 = INT32_MIN;


void f0(void) {
	int8_t x1 = -1;
	int64_t x2 = INT64_MIN;
	static int8_t x3 = -29;
	uint64_t x4 = 34749LLU;
	uint64_t t0 = 154193459892590450LLU;

	t0 = ((x1<=x2)|(x3+x4));

	if (t0 != 34720LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -7044081057731334LL;
	uint8_t x6 = 121U;
	static uint64_t x8 = 23709921381LLU;
	static uint64_t t1 = 1597885468188LLU;

	t1 = ((x5<=x6)|(x7+x8));

	if (t1 != 23709888613LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -7;
	int32_t x10 = INT32_MAX;
	volatile int32_t t2 = 14395519;

	t2 = ((x9<=x10)|(x11+x12));

	if (t2 != 857) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 0U;
	int8_t x15 = -14;
	volatile int16_t x16 = 10588;
	volatile int32_t t3 = -358956777;

	t3 = ((x13<=x14)|(x15+x16));

	if (t3 != 10575) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x18 = 27637760U;
	uint64_t x19 = 3LLU;
	int16_t x20 = -1;

	t4 = ((x17<=x18)|(x19+x20));

	if (t4 != 3LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -4023890666LL;
	static uint8_t x26 = UINT8_MAX;
	int32_t x27 = INT32_MIN;
	uint64_t x28 = 7LLU;
	static volatile uint64_t t5 = 3968276904811100216LLU;

	t5 = ((x25<=x26)|(x27+x28));

	if (t5 != 18446744071562067975LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MAX;
	volatile int16_t x32 = -1;
	volatile int64_t t6 = -554474244780768198LL;

	t6 = ((x29<=x30)|(x31+x32));

	if (t6 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 7U;
	int64_t x34 = INT64_MIN;
	uint16_t x35 = 10U;
	int8_t x36 = 2;

	t7 = ((x33<=x34)|(x35+x36));

	if (t7 != 12) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;

	t8 = ((x37<=x38)|(x39+x40));

	if (t8 != -32761) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	int32_t x42 = INT32_MIN;
	int8_t x43 = -1;
	int16_t x44 = INT16_MAX;

	t9 = ((x41<=x42)|(x43+x44));

	if (t9 != 32766) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -19288147095LL;
	static int8_t x47 = INT8_MIN;
	int8_t x48 = -1;
	volatile int32_t t10 = -3519;

	t10 = ((x45<=x46)|(x47+x48));

	if (t10 != -129) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = -1LL;
	int64_t x51 = INT64_MIN;
	static int16_t x52 = 21;
	int64_t t11 = 58LL;

	t11 = ((x49<=x50)|(x51+x52));

	if (t11 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = -58;
	volatile int8_t x56 = INT8_MIN;
	volatile int64_t t12 = -18132124LL;

	t12 = ((x53<=x54)|(x55+x56));

	if (t12 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 0U;
	volatile int8_t x58 = INT8_MIN;
	int16_t x59 = 5818;
	static volatile uint8_t x60 = 12U;
	int32_t t13 = -11;

	t13 = ((x57<=x58)|(x59+x60));

	if (t13 != 5830) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -1;
	static int8_t x66 = -1;
	volatile uint8_t x67 = 27U;
	uint8_t x68 = 25U;
	static volatile int32_t t14 = -141;

	t14 = ((x65<=x66)|(x67+x68));

	if (t14 != 53) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 2292852U;
	int32_t x74 = INT32_MIN;
	volatile int64_t x75 = INT64_MIN;
	uint16_t x76 = 280U;
	int64_t t15 = -1007352052726818LL;

	t15 = ((x73<=x74)|(x75+x76));

	if (t15 != -9223372036854775527LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MAX;
	volatile int32_t x82 = 75254890;
	uint64_t x83 = 26LLU;
	static volatile uint64_t x84 = UINT64_MAX;
	uint64_t t16 = 354480301772978LLU;

	t16 = ((x81<=x82)|(x83+x84));

	if (t16 != 25LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x85 = INT8_MIN;
	int64_t x86 = 15106907552LL;
	uint32_t x87 = 8U;
	int8_t x88 = -1;
	uint32_t t17 = 22U;

	t17 = ((x85<=x86)|(x87+x88));

	if (t17 != 7U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x89 = -1;
	int8_t x90 = 1;
	uint32_t x92 = 5U;
	uint32_t t18 = 8838515U;

	t18 = ((x89<=x90)|(x91+x92));

	if (t18 != 7U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x94 = 2;
	volatile uint8_t x95 = UINT8_MAX;
	int32_t x96 = -1;

	t19 = ((x93<=x94)|(x95+x96));

	if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = -278802903894276LL;
	uint16_t x98 = UINT16_MAX;
	int32_t x99 = -1;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t20 = -6;

	t20 = ((x97<=x98)|(x99+x100));

	if (t20 != -32769) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MIN;
	int16_t x102 = -1;
	volatile int32_t x103 = 1;
	int64_t x104 = -1410613757757059LL;
	int64_t t21 = 5097896773LL;

	t21 = ((x101<=x102)|(x103+x104));

	if (t21 != -1410613757757057LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x106 = 0U;
	static uint32_t x107 = 2032U;
	uint16_t x108 = UINT16_MAX;
	volatile uint32_t t22 = 256495U;

	t22 = ((x105<=x106)|(x107+x108));

	if (t22 != 67567U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x109 = 33U;
	volatile int64_t x110 = -1LL;
	int8_t x111 = INT8_MIN;
	int16_t x112 = INT16_MAX;
	volatile int32_t t23 = -13;

	t23 = ((x109<=x110)|(x111+x112));

	if (t23 != 32639) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = UINT8_MAX;
	int8_t x114 = 7;
	uint16_t x116 = 0U;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = ((x113<=x114)|(x115+x116));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x117 = -407383093;
	static uint64_t x118 = UINT64_MAX;
	int64_t x119 = -47121328052LL;
	uint8_t x120 = 1U;

	t25 = ((x117<=x118)|(x119+x120));

	if (t25 != -47121328051LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x122 = 0;
	uint32_t x123 = UINT32_MAX;
	int32_t x124 = INT32_MAX;
	uint32_t t26 = 5925487U;

	t26 = ((x121<=x122)|(x123+x124));

	if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	volatile uint64_t x128 = 89LLU;
	uint64_t t27 = 1LLU;

	t27 = ((x125<=x126)|(x127+x128));

	if (t27 != 18446744073709518937LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = -1;
	static volatile int16_t x130 = -1;
	uint8_t x131 = 22U;
	volatile int16_t x132 = -78;
	volatile int32_t t28 = -574921637;

	t28 = ((x129<=x130)|(x131+x132));

	if (t28 != -55) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MAX;
	int8_t x134 = 1;
	uint16_t x136 = 6718U;
	uint32_t t29 = 0U;

	t29 = ((x133<=x134)|(x135+x136));

	if (t29 != 132319U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x138 = -1;
	static int16_t x139 = 0;
	volatile int32_t x140 = INT32_MIN;

	t30 = ((x137<=x138)|(x139+x140));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x141 = INT32_MAX;
	int64_t x142 = -8678706LL;
	int64_t t31 = -74454662435836LL;

	t31 = ((x141<=x142)|(x143+x144));

	if (t31 != -2819454385444LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 4U;
	static uint32_t x147 = 290U;
	uint32_t x148 = 371U;
	volatile uint32_t t32 = 212235U;

	t32 = ((x145<=x146)|(x147+x148));

	if (t32 != 661U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -2720857;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = 3;
	volatile int16_t x152 = INT16_MIN;
	static int32_t t33 = -186975;

	t33 = ((x149<=x150)|(x151+x152));

	if (t33 != -32765) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x153 = -1;
	uint16_t x154 = UINT16_MAX;
	static volatile int32_t x155 = -1;
	static int32_t t34 = 61;

	t34 = ((x153<=x154)|(x155+x156));

	if (t34 != -32769) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x161 = 3U;
	volatile int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MIN;
	static uint64_t t35 = 246487022333503LLU;

	t35 = ((x161<=x162)|(x163+x164));

	if (t35 != 5467312161593LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = INT8_MIN;
	volatile int32_t x166 = INT32_MIN;
	int16_t x167 = -1;
	int8_t x168 = 2;
	volatile int32_t t36 = -48140234;

	t36 = ((x165<=x166)|(x167+x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x169 = 2422U;
	static int64_t x170 = 1LL;
	uint32_t x171 = UINT32_MAX;
	static int64_t x172 = 12LL;
	int64_t t37 = 7150808903965LL;

	t37 = ((x169<=x170)|(x171+x172));

	if (t37 != 4294967307LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = INT32_MAX;
	int64_t x174 = -1LL;
	volatile int8_t x175 = INT8_MIN;
	int16_t x176 = 0;
	volatile int32_t t38 = 0;

	t38 = ((x173<=x174)|(x175+x176));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x178 = INT64_MIN;
	static uint16_t x179 = 10U;
	uint8_t x180 = 60U;
	int32_t t39 = -4658;

	t39 = ((x177<=x178)|(x179+x180));

	if (t39 != 70) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = -1;
	volatile uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MAX;

	t40 = ((x181<=x182)|(x183+x184));

	if (t40 != 33022) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x185 = -1;
	uint8_t x187 = 8U;
	int8_t x188 = -5;

	t41 = ((x185<=x186)|(x187+x188));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x190 = 95208917868123LL;
	int16_t x191 = -1;
	int64_t x192 = INT64_MAX;
	static int64_t t42 = INT64_MAX;

	t42 = ((x189<=x190)|(x191+x192));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x194 = UINT16_MAX;
	int64_t t43 = 28214346204811LL;

	t43 = ((x193<=x194)|(x195+x196));

	if (t43 != -498118697LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = -8139;
	int8_t x202 = 4;
	static uint8_t x203 = 31U;
	uint32_t x204 = 12U;

	t44 = ((x201<=x202)|(x203+x204));

	if (t44 != 43U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = INT64_MIN;
	uint8_t x206 = UINT8_MAX;
	uint32_t x207 = UINT32_MAX;
	uint32_t x208 = 8277603U;
	static volatile uint32_t t45 = 1990U;

	t45 = ((x205<=x206)|(x207+x208));

	if (t45 != 8277603U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = INT64_MAX;
	volatile uint32_t x214 = 8617308U;

	t46 = ((x213<=x214)|(x215+x216));

	if (t46 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = 0;
	volatile uint32_t x219 = 7U;
	static uint32_t t47 = 623730U;

	t47 = ((x217<=x218)|(x219+x220));

	if (t47 != 7U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x221 = 1;
	static int32_t x222 = 818160;
	static int32_t x223 = INT32_MAX;
	int8_t x224 = -1;
	static int32_t t48 = INT32_MAX;

	t48 = ((x221<=x222)|(x223+x224));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x226 = 0;
	volatile uint16_t x228 = UINT16_MAX;
	volatile uint64_t t49 = 223248543087905LLU;

	t49 = ((x225<=x226)|(x227+x228));

	if (t49 != 203360528LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = -1;
	int64_t x230 = INT64_MAX;
	int32_t t50 = -105591;

	t50 = ((x229<=x230)|(x231+x232));

	if (t50 != 75) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = INT32_MIN;
	static int64_t x238 = INT64_MAX;
	volatile int16_t x240 = 18;
	volatile int32_t t51 = -26;

	t51 = ((x237<=x238)|(x239+x240));

	if (t51 != -32749) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = -26576114242LL;
	volatile int32_t t52 = -5702;

	t52 = ((x241<=x242)|(x243+x244));

	if (t52 != 32711) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x246 = INT8_MAX;
	volatile uint16_t x247 = 231U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t53 = 10933552;

	t53 = ((x245<=x246)|(x247+x248));

	if (t53 != -2147483417) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x249 = -1LL;
	static volatile int8_t x250 = 21;
	uint8_t x251 = 36U;
	volatile int64_t x252 = -12771886780499178LL;
	volatile int64_t t54 = 2LL;

	t54 = ((x249<=x250)|(x251+x252));

	if (t54 != -12771886780499141LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x253 = UINT32_MAX;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = 9397857053259161LLU;
	uint64_t t55 = 6LLU;

	t55 = ((x253<=x254)|(x255+x256));

	if (t55 != 9397857053226393LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x258 = 31153U;
	volatile int16_t x259 = INT16_MIN;
	uint64_t x260 = 725317010242LLU;
	uint64_t t56 = 0LLU;

	t56 = ((x257<=x258)|(x259+x260));

	if (t56 != 725316977475LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x262 = INT8_MIN;
	static volatile int8_t x263 = INT8_MIN;
	volatile int32_t t57 = -1;

	t57 = ((x261<=x262)|(x263+x264));

	if (t57 != -129) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x265 = 5;
	int16_t x266 = -801;
	volatile int64_t x267 = INT64_MIN;
	uint8_t x268 = 4U;
	volatile int64_t t58 = 350685740486842LL;

	t58 = ((x265<=x266)|(x267+x268));

	if (t58 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = INT16_MIN;
	static int32_t x270 = 290;
	int8_t x272 = INT8_MAX;
	volatile int32_t t59 = 142023;

	t59 = ((x269<=x270)|(x271+x272));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x273 = 105U;
	int64_t x275 = -561051LL;
	static uint64_t t60 = 2945558929000LLU;

	t60 = ((x273<=x274)|(x275+x276));

	if (t60 != 18446744073708990564LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = -1;
	int16_t x278 = INT16_MIN;
	static uint64_t x279 = 2973LLU;
	volatile int8_t x280 = -1;
	uint64_t t61 = 102727696LLU;

	t61 = ((x277<=x278)|(x279+x280));

	if (t61 != 2972LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = INT8_MAX;
	int8_t x282 = 47;
	volatile uint64_t x284 = 236783LLU;
	uint64_t t62 = 39156LLU;

	t62 = ((x281<=x282)|(x283+x284));

	if (t62 != 9223372036855012591LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x285 = -1;
	int16_t x286 = INT16_MAX;
	int32_t x287 = -1;
	uint16_t x288 = 124U;
	int32_t t63 = -12415101;

	t63 = ((x285<=x286)|(x287+x288));

	if (t63 != 123) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = INT32_MIN;
	uint64_t x290 = 471732793LLU;
	volatile int8_t x291 = -3;
	uint32_t x292 = UINT32_MAX;
	static volatile uint32_t t64 = 410890U;

	t64 = ((x289<=x290)|(x291+x292));

	if (t64 != 4294967292U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x293 = 189787765U;
	static int16_t x294 = INT16_MIN;
	volatile int8_t x296 = INT8_MIN;
	static volatile int32_t t65 = 750813;

	t65 = ((x293<=x294)|(x295+x296));

	if (t65 != -255) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = -1;
	int8_t x300 = 0;

	t66 = ((x297<=x298)|(x299+x300));

	if (t66 != 54) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x302 = -15249038820LL;
	volatile uint64_t x303 = 56641368207LLU;
	int8_t x304 = INT8_MIN;
	static volatile uint64_t t67 = 43121538LLU;

	t67 = ((x301<=x302)|(x303+x304));

	if (t67 != 56641368079LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x305 = 121293525972LL;
	int32_t x306 = INT32_MIN;
	int8_t x308 = INT8_MIN;

	t68 = ((x305<=x306)|(x307+x308));

	if (t68 != -130) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x309 = INT8_MIN;
	int16_t x310 = 1;
	volatile uint64_t x312 = 164112706532765433LLU;
	volatile uint64_t t69 = 709434640953423LLU;

	t69 = ((x309<=x310)|(x311+x312));

	if (t69 != 164112706532765305LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x313 = UINT64_MAX;
	int16_t x314 = INT16_MIN;
	static uint16_t x315 = 81U;
	volatile uint32_t x316 = 3311261U;
	volatile uint32_t t70 = 2U;

	t70 = ((x313<=x314)|(x315+x316));

	if (t70 != 3311342U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x317 = -7;
	static int8_t x319 = -1;

	t71 = ((x317<=x318)|(x319+x320));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = -10LL;
	int64_t x322 = -161649950LL;
	int64_t x323 = 40LL;
	volatile int32_t x324 = INT32_MAX;
	volatile int64_t t72 = 189112120LL;

	t72 = ((x321<=x322)|(x323+x324));

	if (t72 != 2147483687LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = 3;
	int32_t x330 = INT32_MIN;
	volatile uint64_t x331 = 114LLU;
	static volatile uint64_t t73 = 29LLU;

	t73 = ((x329<=x330)|(x331+x332));

	if (t73 != 18446744071562068082LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = -1LL;
	uint32_t x334 = 927U;
	static int64_t x335 = -1LL;
	int8_t x336 = -1;
	volatile int64_t t74 = 43LL;

	t74 = ((x333<=x334)|(x335+x336));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x337 = INT16_MIN;
	int8_t x338 = -2;
	uint32_t x339 = UINT32_MAX;
	uint8_t x340 = 48U;
	uint32_t t75 = 2945U;

	t75 = ((x337<=x338)|(x339+x340));

	if (t75 != 47U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = -108;
	int32_t x346 = -1;
	int8_t x348 = INT8_MIN;
	static volatile uint64_t t76 = 202706376LLU;

	t76 = ((x345<=x346)|(x347+x348));

	if (t76 != 228729LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x349 = 4U;
	uint8_t x351 = UINT8_MAX;
	int32_t x352 = INT32_MIN;
	int32_t t77 = 6;

	t77 = ((x349<=x350)|(x351+x352));

	if (t77 != -2147483393) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x354 = 1;
	int16_t x356 = -1;
	int32_t t78 = -1;

	t78 = ((x353<=x354)|(x355+x356));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = INT32_MIN;
	static uint32_t x358 = 40U;
	int16_t x359 = INT16_MIN;
	static int16_t x360 = INT16_MAX;
	int32_t t79 = 42;

	t79 = ((x357<=x358)|(x359+x360));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x361 = -1;
	int8_t x363 = INT8_MIN;
	int8_t x364 = INT8_MIN;
	volatile int32_t t80 = -3209;

	t80 = ((x361<=x362)|(x363+x364));

	if (t80 != -256) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x365 = INT16_MIN;
	int16_t x367 = -1;
	int32_t t81 = 941;

	t81 = ((x365<=x366)|(x367+x368));

	if (t81 != 62) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x377 = INT8_MIN;
	uint64_t x378 = 919305819LLU;
	static uint8_t x379 = 1U;

	t82 = ((x377<=x378)|(x379+x380));

	if (t82 != 167506803U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x382 = 29U;
	int32_t x383 = -1;
	int8_t x384 = -1;
	int32_t t83 = -99;

	t83 = ((x381<=x382)|(x383+x384));

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x385 = INT16_MAX;
	static uint64_t x387 = 58388038606785918LLU;
	int16_t x388 = -1;
	uint64_t t84 = 12LLU;

	t84 = ((x385<=x386)|(x387+x388));

	if (t84 != 58388038606785917LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = -45833985987244LL;
	uint64_t x390 = 8059760267463LLU;
	uint32_t x391 = 147239499U;
	int32_t x392 = -11182;
	static uint32_t t85 = 369U;

	t85 = ((x389<=x390)|(x391+x392));

	if (t85 != 147228317U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x394 = 1925U;
	uint8_t x395 = 0U;
	int32_t x396 = -1;
	volatile int32_t t86 = 1;

	t86 = ((x393<=x394)|(x395+x396));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x397 = 1513865602496807LLU;
	static int16_t x398 = INT16_MIN;
	uint8_t x399 = 71U;
	volatile int8_t x400 = INT8_MAX;
	int32_t t87 = -4889176;

	t87 = ((x397<=x398)|(x399+x400));

	if (t87 != 199) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x401 = INT32_MIN;
	int32_t x402 = -1209;
	int8_t x403 = INT8_MIN;

	t88 = ((x401<=x402)|(x403+x404));

	if (t88 != -119) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x405 = UINT16_MAX;
	int64_t x407 = INT64_MIN;
	volatile int64_t t89 = 1771808377117LL;

	t89 = ((x405<=x406)|(x407+x408));

	if (t89 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x409 = INT16_MAX;
	uint8_t x410 = 0U;
	int8_t x411 = INT8_MIN;
	uint64_t x412 = 7123865LLU;
	uint64_t t90 = 36LLU;

	t90 = ((x409<=x410)|(x411+x412));

	if (t90 != 7123737LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x413 = INT16_MIN;
	uint32_t x414 = 861978U;
	uint64_t x415 = UINT64_MAX;
	static int64_t x416 = 2604960741256832LL;
	volatile uint64_t t91 = 108341LLU;

	t91 = ((x413<=x414)|(x415+x416));

	if (t91 != 2604960741256831LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x417 = INT8_MIN;
	int32_t x418 = -1;
	int16_t x419 = -443;
	volatile int8_t x420 = INT8_MAX;

	t92 = ((x417<=x418)|(x419+x420));

	if (t92 != -315) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x422 = 18;
	int32_t x423 = -1142300;
	int32_t x424 = -69;
	static volatile int32_t t93 = 102;

	t93 = ((x421<=x422)|(x423+x424));

	if (t93 != -1142369) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = INT64_MIN;
	static int8_t x426 = INT8_MAX;
	volatile uint64_t x428 = 123597594LLU;
	static volatile uint64_t t94 = 7650LLU;

	t94 = ((x425<=x426)|(x427+x428));

	if (t94 != 123597703LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x430 = 94909981272866LLU;
	static uint8_t x431 = UINT8_MAX;
	int8_t x432 = 0;
	volatile int32_t t95 = -30701;

	t95 = ((x429<=x430)|(x431+x432));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x433 = INT8_MAX;
	int32_t x435 = -1;
	static uint32_t x436 = 5003098U;
	volatile uint32_t t96 = 4057U;

	t96 = ((x433<=x434)|(x435+x436));

	if (t96 != 5003097U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x444 = 1U;
	int32_t t97 = 217;

	t97 = ((x441<=x442)|(x443+x444));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x445 = INT32_MAX;
	int32_t x446 = -805864;
	int16_t x447 = -1;
	static int8_t x448 = INT8_MAX;
	volatile int32_t t98 = -4884642;

	t98 = ((x445<=x446)|(x447+x448));

	if (t98 != 126) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x450 = 1U;
	uint32_t x451 = 223077541U;
	static int8_t x452 = INT8_MIN;
	static volatile uint32_t t99 = 40264U;

	t99 = ((x449<=x450)|(x451+x452));

	if (t99 != 223077413U) { NG(); } else { ; }
	
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

